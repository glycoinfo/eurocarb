#!/usr/bin/python

"""
======================COPYRIGHT/LICENSE START==========================

stereoAssignmentSwap.py: Swaps/combines stereo assignments based on restraints and coordinates

Copyright (C) 2005 Wim Vranken (European Bioinformatics Institute)

=======================================================================

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2.1 of the License, or (at your option) any later version.
 
A copy of this license can be found in ../../../../license/LGPL.license
 
This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
Lesser General Public License for more details.
 
You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA


======================COPYRIGHT/LICENSE END============================

for further information, please contact :

- CCPN website (http://www.ccpn.ac.uk/)
- MSD website (http://www.ebi.ac.uk/msd/)

- contact Wim Vranken (wim@ebi.ac.uk)
=======================================================================

If you are using this software for academic purposes, we suggest
quoting the following references:

===========================REFERENCE START=============================
R. Fogh, J. Ionides, E. Ulrich, W. Boucher, W. Vranken, J.P. Linge, M.
Habeck, W. Rieping, T.N. Bhat, J. Westbrook, K. Henrick, G. Gilliland,
H. Berman, J. Thornton, M. Nilges, J. Markley and E. Laue (2002). The
CCPN project: An interim report on a data model for the NMR community
(Progress report). Nature Struct. Biol. 9, 416-418.

Wim F. Vranken, Wayne Boucher, Tim J. Stevens, Rasmus
H. Fogh, Anne Pajon, Miguel Llinas, Eldon L. Ulrich, John L. Markley, John
Ionides and Ernest D. Laue (2005). The CCPN Data Model for NMR Spectroscopy:
Development of a Software Pipeline. Proteins 59, 687 - 696.

===========================REFERENCE END===============================
"""

import math

from ccp.general.Geometry import getDistanceFromCoordinates

from ccpnmr.format.general.userInteraction import setupMessageReporter

from ccp.general.Util import getOtherAtom
from ccp.general.Util import getResonancesFromPairwiseConstraintItem

from ccpnmr.format.general.Util import getResNameText


from ccp.api.nmr import Nmr, NmrConstraint

#
# Dictionary creation (could be useful for other scripts!)
#

def createResonanceAtomAndAtomSetDict(resonances):
  
  #
  # Creates a fully ambiguous resonance to atom dict: all atoms 
  # 'on the other side' are included.
  #
  
  resAtomDict = {}
  resAtomSetDict = {}
  
  for resonance in resonances:
    resAtomDict[resonance] = []
    resAtomSetDict[resonance] = []
      
    if resonance.resonanceSet:
      for atomSet in resonance.resonanceSet.sortedAtomSets():
        resAtomSetDict[resonance].append(atomSet)
        for atom in atomSet.sortedAtoms():
          resAtomDict[resonance].append(atom)

  return resAtomDict,resAtomSetDict
 
def createResAtomSwapDict(resAtomSetDict):
  
  #
  # Create a list of the atoms if the assignments were 'swapped' for prochirals
  #
  
  resAtomSwapDict = {}
  prochiralResonancesDict = {}
  
  for resonance in resAtomSetDict:
    atomSetList = resAtomSetDict[resonance]
    
    #
    # Only stereo if corresponds to one atomSet only...
    #
    
    if len(atomSetList) == 1:

      refAtom = atomSetList[0].findFirstAtom()
      if not refAtom.chemAtom:
        print "  Error: no chemAtom for atom %s in residue %s, %s" % (refAtom.name,refAtom.residue.molType, refAtom.residue.ccpCode)
        continue

      refChemAtomSet = refAtom.chemAtom.chemAtomSet
      
      if refChemAtomSet:
        
        atomList = getAtomsOtherProchiral(refAtom,prochiralResonancesDict,resonance)
        
        if atomList:
          resAtomSwapDict[resonance] = atomList
        
  return (resAtomSwapDict,prochiralResonancesDict)

#
# General functions working with above dictionaries...
#

def getAtomsOtherProchiral(atom,prochiralResonancesDict,resonance):

  atomList = []
  
  chemAtom = atom.chemAtom
  chemAtomSet = chemAtom.chemAtomSet
  
  if chemAtomSet:
  
    chemCompVar = atom.residue.chemCompVar

    otherChemAtoms = []
    prochiralChemAtomSet = None

    nmrConstraintStore = resonance.parent
    atomSet = atom.findFirstFixedAtomSet(nmrConstraintStore = nmrConstraintStore)

    #
    # Normal prochiral
    #

    if len(atomSet.atoms) == 1 and chemAtomSet.isProchiral:
      sortedChemAtomsList = list(chemAtomSet.sortedChemAtoms())
      chemAtomIndex = sortedChemAtomsList.index(chemAtom)
      prochiralChemAtomSet = chemAtomSet
      otherChemAtoms.append(sortedChemAtomsList[not chemAtomIndex])

    #
    # 'Deep' prochiral (e.g. HD1*, HD2* for Leu)
    #

    elif len(atomSet.atoms) == 3 and chemAtomSet.chemAtomSet and chemAtomSet.chemAtomSet.isProchiral:
      sortedChemAtomSetsList = list(chemAtomSet.chemAtomSet.sortedChemAtomSets())
      chemAtomSetIndex = sortedChemAtomSetsList.index(chemAtomSet)
      prochiralChemAtomSet = chemAtomSet.chemAtomSet
      otherChemAtomSet = sortedChemAtomSetsList[not chemAtomSetIndex]
      otherChemAtoms.extend(list(otherChemAtomSet.sortedChemAtoms()))

    if prochiralChemAtomSet:

      residue = atom.residue
      for otherChemAtom in otherChemAtoms:
        atomList.append(residue.findFirstAtom(chemAtom = otherChemAtom))

      seqId = residue.seqId
      chainCode = residue.chain.code
      prochiralKey = (chainCode,seqId,prochiralChemAtomSet)
      prochiralResonancesDict[resonance] = prochiralKey
      
  return atomList


#
# Is this generic?!??!
#

def getDistConstrSumAvg(distConstr,resAtomDict,atomCoordDict,factor,resAtomSwapDict,prochiralResonancesDict,swap = False):

  #
  # Calculate sum averaged distance (Nilges et al., Proteins 17, 297-309, 1993)
  #

  sideCodes = ['left','right']
  avgSum = {}
  avgDist = {}
  prochiralAvgSum = {}
  prochiralContribs = {}
  
  #
  # Do a 'left' and a 'right' component: this is to try and handle swaps when
  # both 'sides' of a restraint item have a prochiral group.
  #

  for sideCode in sideCodes:
    avgSum[sideCode] = 0
    avgDist[sideCode] = 0
    
  for sideCode in sideCodes:
    prochiralAvgSum[sideCode] = {}
    prochiralContribs[sideCode] = {}
 
  #
  # Now loop over all the items
  #
 
  for item in distConstr.items:
    
    #
    # Do first resonance
    #
    
    setLocalSumContribs(0,sideCodes,item,resAtomDict,swap,resAtomSwapDict,atomCoordDict,prochiralResonancesDict,prochiralAvgSum,avgSum)

    #
    # Do second resonance
    #
    
    setLocalSumContribs(1,sideCodes,item,resAtomDict,swap,resAtomSwapDict,atomCoordDict,prochiralResonancesDict,prochiralAvgSum,avgSum)

  #
  # Finally set the results...
  #
  
  for sideCode in sideCodes:
                
    if avgSum[sideCode]:
      avgDist[sideCode] = math.pow(1.0 / avgSum[sideCode], factor)
    
      for prochiralKey in prochiralAvgSum[sideCode].keys(): 
        
        #
        # Calculate the average contribution to the distance (for violation calc if necessary)
        #
        # Done according to Nilges, O'Donoghue in Meth. Enzym. 32 (1998) 107-139 (see page 113)
        #
        
        tempProchiralAvgSum = prochiralAvgSum[sideCode][prochiralKey][0]
      
        prochiralContribs[sideCode][prochiralKey] = (tempProchiralAvgSum / avgSum[sideCode], prochiralAvgSum[sideCode][prochiralKey][1])
  
  return avgDist, prochiralContribs

def setLocalSumContribs(resIndex,sideCodes,item,resAtomDict,swap,resAtomSwapDict,atomCoordDict,prochiralResonancesDict,prochiralAvgSum,avgSum):

  sideCode = sideCodes[resIndex]

  itemResonances = getResonancesFromPairwiseConstraintItem(item)
  
  resonance = itemResonances[resIndex]
  atomList = resAtomDict[resonance]

  if swap and resAtomSwapDict.has_key(resonance):
    atomList = resAtomSwapDict[resonance]

  for atom in atomList:

    if atomCoordDict.has_key(atom):

      otherResonance = itemResonances[not resIndex]
      otherAtomLists = [resAtomDict[otherResonance]]

      if resAtomSwapDict.has_key(otherResonance):
        otherAtomLists.append(resAtomSwapDict[otherResonance])

      avgLocalSums = [0.0,0.0]

      for i in range(0,len(otherAtomLists)):       

        otherAtomList = otherAtomLists[i]

        for otherAtom in otherAtomList:
          if atom != otherAtom and atomCoordDict.has_key(otherAtom) and atomCoordDict[atom] and atomCoordDict[otherAtom]:

            avgSumContrib = 1.0 / math.pow(getDistanceFromCoordinates(atomCoordDict[atom],atomCoordDict[otherAtom]),6)
            avgLocalSums[i] += avgSumContrib
      
      #
      # Pick the largest average local sum: is the smallest distance!!
      #
      
      if avgLocalSums[0] < avgLocalSums[1]:
        avgLocalSum = avgLocalSums[1]
      else:
        avgLocalSum = avgLocalSums[0]

      avgSum[sideCode] += avgLocalSum

      if avgLocalSum:
        if resonance in prochiralResonancesDict.keys():
          prochiralKey = prochiralResonancesDict[resonance]             

          if not prochiralAvgSum[sideCode].has_key(prochiralKey):
            prochiralAvgSum[sideCode][prochiralKey] = [0.00,[]]
          prochiralAvgSum[sideCode][prochiralKey][0] += avgLocalSum
          prochiralAvgSum[sideCode][prochiralKey][1].append(item)
          
#
# Make swapping itself a class with attributes for common variables...
#

class StereoAssignmentSwapCheck:

  def __init__(self,nmrConstraintStore,structureEnsemble,verbose = False):
    
    self.nmrConstraintStore = nmrConstraintStore
    self.structureEnsemble = structureEnsemble
    
    self.distanceConstraintLists = list(self.nmrConstraintStore.findAllConstraintLists(className = 'DistanceConstraintList'))
    self.verbose = verbose

  def checkSwapsAndClean(self,method = 'SUM_AVERAGING', violationCodes = None, swapFraction = 0.75):
  
    if not self.distanceConstraintLists or not self.structureEnsemble or not self.structureEnsemble.models:
      print "Error: no constraint lists or no structures available! Aborting..."
      return
  
    print
    print "Checking swap status and cleaning prochiral groups in constraint lists..."
    print
    
    #
    # Initialize... see parameters above for swapFraction
    #
    # Set a dictionary with violationCodes (what is a large violation?)
    #
    
    if violationCodes:
      self.violationCodes = violationCodes
      
    else:
      self.violationCodes = {}
      self.violationCodes['xl'] = {'violation': 2.0, 'fraction': 0.00001}
      self.violationCodes['l'] = {'violation': 1.0, 'fraction': 0.5}
  
    #
    # Set up a dict of resonances
    # TODO: Should this be done in cleanStereoAssignments?!?
    #       Should I make this a 'violationHandler' class??!?!
    #

    (self.resAtomDict,self.resAtomSetDict) = createResonanceAtomAndAtomSetDict(self.distanceConstraintLists[0].parent.fixedResonances)    
    if self.verbose:
      print "Made resAtomDict, resAtomSetDict"
  
    (self.resAtomSwapDict,self.prochiralResonancesDict) = createResAtomSwapDict(self.resAtomSetDict)
    if self.verbose:
      print "Made resAtomSwapDict,prochiralResonancesDict"
  
    structureViolations = []
  
    """
    infoStrings = []
    for resonance in resAtomSwapDict.keys():
      atoms = resAtomDict[resonance]
      infoString = "%3d.%s" % (atoms[0].residue.seqId, atoms[0].atomSet.name)
      atoms = resAtomSwapDict[resonance]
      infoString += "-> swap is %3d.%s" % (atoms[0].residue.seqId, atoms[0].name)
      infoStrings.append(infoString)
    infoStrings.sort()
    for infoString in infoStrings:
      print infoString
    """

    #
    # Set the factor for calculating violations
    #

    if method == 'SUM_AVERAGING':
      factor = 1.0/6.0
    
    #
    # Loop over the structures
    #
    
    self.models = self.structureEnsemble.sortedModels()
    #self.models = self.models[:3]
    for model in self.models:

      self.prochiralViolationDict = self.createProchiralViolationDict()
    
      #violationList = Nmr.ViolationList(distanceConstraintLists[0].structureGeneration,molStructures = [model])
    
      totalViols = 0
    
      #
      # Set up dict for coordinates
      #
    
      self.atomCoordDict = {}
      
      # No need for sorting here...
      for cChain in self.structureEnsemble.coordChains:
        for cRes in cChain.residues:
          for cAtom in cRes.atoms:
            if cAtom.atom:
          
              #
              # TODO: cannot handle multiple coords for one atom!!
              #
            
              self.atomCoordDict[cAtom.atom] = model.findFirstCoord(atom = cAtom)
              
      if self.verbose:
        print "Made atomCoordDict for model %d" % model.serial
    
      #
      # Go over the distance constraints
      #
    
      for distanceConstraintList in self.distanceConstraintLists:
    
        for distConstr in distanceConstraintList.sortedConstraints():
        
          # TODO: extend to other methods?

          if method == 'SUM_AVERAGING':

            #
            # Calculate sum averaged distance (Nilges et al., Proteins 17, 297-309, 1993)
            #

            (avgDist,prochiralContribs) = getDistConstrSumAvg(distConstr,self.resAtomDict,self.atomCoordDict,factor,self.resAtomSwapDict,self.prochiralResonancesDict)
            totalViols += self.setViolationDict(avgDist,prochiralContribs,distConstr,'orig')

            #
            # Now do the same but for the swap...
            #

            if prochiralContribs:
              (avgDist,prochiralContribs) = getDistConstrSumAvg(distConstr,self.resAtomDict,self.atomCoordDict,factor,self.resAtomSwapDict,self.prochiralResonancesDict,swap = True)
              self.setViolationDict(avgDist,prochiralContribs,distConstr,'swap')
            
      structureViolations.append(self.prochiralViolationDict)
      
      if self.verbose:
        print "Total violations %d" % totalViols

    #
    # Check if whether original or swap state was the best...
    #

    prochiralSwaps = {}

    for i in range(0,len(structureViolations)):
      prochiralViolationDict = structureViolations[i]

      for prochiralKey in prochiralViolationDict['orig']['total']:

        #
        # Calculate total violation over all structures for swapping...
        #

        if prochiralViolationDict['orig']['total'][prochiralKey] > prochiralViolationDict['swap']['total'][prochiralKey]:
          if not prochiralSwaps.has_key(prochiralKey):
            prochiralSwaps[prochiralKey] = 0
          prochiralSwaps[prochiralKey] += 1
      
  
    #
    # Finally make the changes in the data model where appropriate
    #

    cutoff = swapFraction * len(structureViolations)
    infoText = []
    
    totalStructures = len(self.models)

    for prochiralKey in prochiralViolationDict['orig']['total']:
      
      #
      # Set the swapstatus
      #
      
      if prochiralSwaps.has_key(prochiralKey) and prochiralSwaps[prochiralKey] > cutoff:
        swapStatus = 'swap'
        percent = prochiralSwaps[prochiralKey] * 100 / len(structureViolations)
        infoText.append("Swapping stereo assignment status chain %s, residue %3d group %s: %.3f%%" % (prochiralKey[0],prochiralKey[1],prochiralKey[2].name,percent))

      else:
        swapStatus = 'orig'

      #
      # Check for constraints with large violations based on the swap state...
      #
      
      constraintItemsReset = []

      for violationCode in self.violationCodes.keys():
      
        constraintsViolated = {}
        cutoffFraction = self.violationCodes[violationCode]['fraction']
        
        #
        # Again look over all structures
        #
        
        for prochiralViolationDict in structureViolations:
          for distConstr in prochiralViolationDict[swapStatus][violationCode][prochiralKey].keys():
            if not constraintsViolated.has_key(distConstr):
              constraintsViolated[distConstr] = [0.0,[]]         
            constraintsViolated[distConstr][0] += 1.0
            
            for constrItem in prochiralViolationDict[swapStatus][violationCode][prochiralKey][distConstr][1]:
              if constrItem not in constraintsViolated[distConstr][1]:
                constraintsViolated[distConstr][1].append(constrItem)
        
        #
        # Then recalculate and add a constraint item if necessary
        #
        
        distConstraints = constraintsViolated.keys()
        distConstraints.sort()
        
        for distConstr in distConstraints:

          fractionViolated = constraintsViolated[distConstr][0] / totalStructures
          #print prochiralKey, violationCode, fractionViolated 
          if fractionViolated >= cutoffFraction:

            prochiralResonances = []
            for resonance in self.prochiralResonancesDict.keys():
              if self.prochiralResonancesDict[resonance] == prochiralKey:
                prochiralResonances.append(resonance)
            
            #
            # Have to make a new prochiral resonance if there's only one!!
            #
            
            if len(prochiralResonances) == 1:
            
              otherProchiralResonance = NmrConstraint.FixedResonance(self.nmrConstraintStore, isotopeCode = prochiralResonances[0].isotopeCode)
              otherAtoms = self.resAtomSwapDict[prochiralResonances[0]]
              if otherAtoms[0].atomSet:
                otherAtomSet = otherAtoms[0].atomSet
              else:
                otherAtomSet = NmrConstraint.FixedAtomSet(self.nmrConstraintStore,atoms = otherAtoms)

              otherProchiralResonanceSet = NmrConstraint.FixedResonanceSet(self.nmrConstraintStore, resonances = [otherProchiralResonance], atomSets = [otherAtomSet])

              prochiralResonances.append(otherProchiralResonance)
              self.prochiralResonancesDict[otherProchiralResonance] = prochiralKey
            
            violatedItems = constraintsViolated[distConstr][1]
            
            for violatedItem in violatedItems:
              
              #
              # Don't redo the item if it was already reset..
              #
              
              if (prochiralKey,violatedItem) in constraintItemsReset:
                continue
                
              violatedResonances = getResonancesFromPairwiseConstraintItem(violatedItem)
              
              for resonance in prochiralResonances:
                if resonance in violatedResonances:
                  otherResonanceIndex = not violatedResonances.index(resonance)
                  otherResonance = violatedResonances[otherResonanceIndex]
                  
                  otherProchiralResonance = prochiralResonances[not prochiralResonances.index(resonance)]
                  
                  # Put these the wrong way around on purpose!
                  if otherResonanceIndex == 1:
                    newResonances = [otherResonance,otherProchiralResonance]
                  else:
                    newResonances = [otherProchiralResonance,otherResonance]
                    
                  break
                  
              constraintExists = distConstr.findFirstItem(resonances = tuple(newResonances))
              
              if not constraintExists:
                newResonances.reverse()
                
                constraintExists = distConstr.findFirstItem(resonances = tuple(newResonances))
                
                if not constraintExists and newResonances[0] != newResonances[1]:
                  
                  NmrConstraint.DistanceConstraintItem(distConstr,resonances = newResonances)
                  
                  prochiralText = "%s.%d.%s" % (prochiralKey[0],prochiralKey[1],prochiralKey[2].name)
                  infoLine = "Deassigned constraint %d to prochiral %s: violation > %.1f in %.1f%% of structures.\n" % (distConstr.serial,prochiralText,self.violationCodes[violationCode]['violation'],fractionViolated * 100)
                  infoLine += "   --> added new item for '%s' to '%s'" % (getResNameText(newResonances[0]),getResNameText(newResonances[1]))
                  infoText.append(infoLine)
                  
                  constraintItemsReset.append((prochiralKey,violatedItem))
      
      #
      # Reset based on swapStatus
      #

      if swapStatus == 'swap':

        #
        # Switch the assignments...
        #

        prochiralResonances = []
        for resonance in self.prochiralResonancesDict.keys():
          if self.prochiralResonancesDict[resonance] == prochiralKey:
            prochiralResonances.append(resonance)

        if len(prochiralResonances) == 2:
        
          resSet1 = prochiralResonances[0].resonanceSet
          atomSet1 = resSet1.sortedAtomSets()[0]
          resSet2 = prochiralResonances[1].resonanceSet
          atomSet2 = resSet2.sortedAtomSets()[0]

          resSet1.addAtomSet(atomSet2)
          resSet1.removeAtomSet(atomSet1)
          resSet2.addAtomSet(atomSet1)
          resSet2.removeAtomSet(atomSet2)

        else:
          resSet = prochiralResonances[0].resonanceSet
          atomSet1 = resSet.sortedAtomSets()[0]

          otherAtoms = self.resAtomSwapDict[prochiralResonances[0]]
          if otherAtoms[0].atomSet:
            otherAtomSet = otherAtoms[0].atomSet
          else:
            otherAtomSet = NmrConstraint.FixedAtomSet(self.nmrConstraintStore,atoms = otherAtoms)

          resSet.addAtomSet(otherAtomSet)
          resSet.removeAtomSet(atomSet1)

    infoText.sort()
    for line in infoText:
      print line

  def createProchiralViolationDict(self):

    prochiralViolationDict = {}

    for swapState in ['orig','swap']:
      prochiralViolationDict[swapState] = {}
      for violType in ['total','xl','l']:
        prochiralViolationDict[swapState][violType] = {}
        for prochiralKey in self.prochiralResonancesDict.values():
          if violType == 'total':
            prochiralViolationDict[swapState][violType][prochiralKey] = 0.0
          else:
            prochiralViolationDict[swapState][violType][prochiralKey] = {}

    return prochiralViolationDict

  def setViolationDict(self,avgDist,prochiralContribs,distConstr,swapState):

    totalViols = 0

    for sideCode in avgDist.keys():

      viol = 0

      if avgDist[sideCode]:
        if distConstr.lowerLimit != None and avgDist[sideCode] < distConstr.lowerLimit:
          viol = distConstr.lowerLimit - avgDist[sideCode]
        elif distConstr.upperLimit != None and avgDist[sideCode] > distConstr.upperLimit:
          viol = avgDist[sideCode] - distConstr.upperLimit

      if viol:

        totalViols += 1

        #
        # TODO: Violation creation not really necessary here - but need such a function
        #
        #violation = Nmr.Violation(violationList,constraint = distConstr, value = viol)

        for prochiralKey in prochiralContribs[sideCode]:
          violContrib = prochiralContribs[sideCode][prochiralKey][0] * viol
          self.prochiralViolationDict[swapState]['total'][prochiralKey] += violContrib

          for violationCode in self.violationCodes.keys():
            violLimit = self.violationCodes[violationCode]['violation']
            if violContrib > violLimit:
              #print prochiralKey, swapState, violationCode, violContrib, viol
              prochiralViolation = self.prochiralViolationDict[swapState][violationCode][prochiralKey]
              if not prochiralViolation.has_key(distConstr):
                prochiralViolation[distConstr] = [0,[]]
              prochiralViolation[distConstr][0] += 1
              prochiralViolation[distConstr][1].extend(prochiralContribs[sideCode][prochiralKey][1])

    if totalViols:
      totalViols = 1

    return totalViols
  
if __name__ == '__main__':

  #inFile = '/ebi/msd/nmrqual/reference/AartProject/db700/monomers/2ezm/2ezm.xml'
  #inFile = '/ebi/msd/nmrqual/reference/AartProject/db700/monomers/1n6u/ccpn/1n6u.xml'
  #inFile = '/ebi/msd/nmrqual/reference/AartProject/db700/monomers/1bvm/1bvm.xml'
  #inFile = '/ebi/msd/nmrqual/reference/AartProject/db700/monomers/1d8v/1d8v.xml'
  #inFile = '/ebi/msd/nmrqual/reference/AartProject/db700/monomers/1eza/1eza.xml'
  #inFile = '/ebi/msd/nmrqual/reference/AartProject/db700/monomers/1tih/1tih.xml'
  #inFile = '/ebi/msd/nmrqual/reference/AartProject/db700/monomers/1i6g/1i6g.xml'
  #inFile = '/ebi/msd/nmrqual/reference/AartProject/db700/monomers/1jvr/1jvr.xml'
  inFile = '/ebi/msd/nmrqual/reference/AartProject/db700/monomers/1a6x/1a6x.xml'
  #inFile = '/ebi/msd/nmrqual/reference/AartProject/db700/monomers/1afi/1afi.xml'
  #inFile = '/ebi/msd/nmrqual/reference/AartProject/db700/monomers/1ah9/1ah9.xml'
  #inFile = '/ebi/msd/nmrqual/reference/AartProject/db700/monomers/1b3c/1b3c.xml'
  
  # Read xml file
  from memops.format.xml import XmlIO
  project = XmlIO.loadProjectFile(inFile)
  
  strucGen = project.currentNmrProject.sortedStructureGenerations()[1]
 
  sssc = StereoAssignmentSwapCheck(strucGen.nmrConstraintStore,strucGen.structureEnsemble,verbose = True)
  
  sssc.checkSwapsAndClean()
  sssc.checkSwapsAndClean()
