"""
======================COPYRIGHT/LICENSE START==========================

Molecule.py: Utility functions

Copyright (C) 2005 Wayne Boucher, Rasmus Fogh, Tim Stevens and Wim Vranken (University of Cambridge and EBI/MSD)

=======================================================================

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2.1 of the License, or (at your option) any later version.
 
A copy of this license can be found in ../../../license/LGPL.license
 
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

Rasmus H. Fogh, Wayne Boucher, Wim F. Vranken, Anne
Pajon, Tim J. Stevens, T.N. Bhat, John Westbrook, John M.C. Ionides and
Ernest D. Laue (2005). A framework for scientific data modeling and automated
software development. Bioinformatics 21, 1678-1684.

===========================REFERENCE END===============================
"""
import re
from memops.general.Implementation import ApiError
from ccp.api.molecule import MolSystem, Molecule
from ccp.api.nmr import Nmr
from ccp.util.Assignment import deleteResonanceSet
from ccp.general.Io import getChemComp

try:
  from memops.gui.MessageReporter import showWarning
except:
  from memops.universal.MessageReporter import showWarning


def nextChainCode(molSystem):
  """Descrn: Gives the first unused chain code for a molSystem, starting as close to 'A' as possible 
     Inputs: Ccp.MolSystem.MolSystem
     Output: Word (Ccp.MolSystem.Chain.code)
  """

  chains = molSystem.sortedChains()
       
  if not chains:
    return 'A'
    
  codes = []
  for chain in chains:
    codes.append(chain.code)
    
  code = 'A'
  while code in codes:
    i = ord(code)
    i += 1
    j = i - ord('A')
    if j  >= 26:
      code = chr(ord('A')+int(j/26)) + chr(ord('A')+int(j % 26))
    else:
      code = chr(i)

  return code

def makeChainCopy(chain):
  """Descrn: Make a duplicate of a molSystem chain, using the same underlying molecule
     Inputs: Ccp.MolSystem.Chain
     Output: Ccp.MolSystem.Chain
  """

  code = nextChainCode(chain.molSystem)
  newChain = MolSystem.Chain(chain.molSystem, code=code, molecule=chain.molecule)
  newChain.setDetails(chain.details)
  
  return newChain

def deleteChainFragment(chainFragment):
  """Descrn: Remove a molSystem chain fragment by recreating the parent chain with fewer residues
     Inputs: Ccp.MolSystem.ChainFragment
     Output: None
  """

  # delete residues, molResidues, molResLinks and anything else?
  chain       = chainFragment.chain
  code        = chain.code
  molecule    = chain.molecule
  details     = chain.details
  molSystem   = chain.molSystem
  molResidues = [r.molResidue for r in chainFragment.residues]
  chain.delete()
  
  for molResidue in molResidues:
    for linkEnd in molResidue.molResLinkEnds:
      if linkEnd.molResLink:
        linkEnd.molResLink.delete()
    molResidue.delete() 

  chain = MolSystem.Chain(molSystem, code=code, molecule=molecule)
  chain.setDetails(details)

def setMolResidueCcpCode(molResidue,ccpCode):
  """Descrn: Replaces a molResidue with an equivalently connected one (if possible) with a different ccpCode
     Inputs: Ccp.Molecule.MolResidue, Word (Ccp.Molecule.MolResidue.ccpCode)
     Output: Ccp.Molecule.MolResidue
  """
  
  if molResidue.ccpCode == ccpCode:
    return molResidue

  chemComp = molResidue.root.findFirstChemComp(ccpCode=ccpCode)
  if not chemComp:
    return
  
  chemCompVar = chemComp.findFirstChemCompVar(descriptor=molResidue.descriptor,
                                              linking=molResidue.linking)
  if not chemCompVar:
    chemCompVar = chemComp.findFirstChemCompVar(linking=molResidue.linking)
    
  if chemCompVar:
    molResidue = setMolResidueChemCompVar(molResidue,chemCompVar)
  
  return molResidue

def setMolResidueChemCompVar(molResidue,chemCompVar):
  """Descrn: Replaces a molResidue with an equivalently connected one (if possible) with a different chemChamCompVar
             This is a very naughty function which bypasses the API - but it does check molecule validity at the end.
     Inputs: Ccp.Molecule.MolResidue, Ccp.ChemComp.ChemCompVar
     Output: Ccp.Molecule.MolResidue
  """
  
  if molResidue.chemCompVar is chemCompVar:
    return molResidue
  
  molecule     = molResidue.molecule
  seqCode      = molResidue.seqCode
  linking      = chemCompVar.linking
  descriptor   = chemCompVar.descriptor 
  chemComp = chemCompVar.chemComp
    
  links = []
  for linkEnd in molResidue.molResLinkEnds:
    if linkEnd.molResLink:
      codes = [linkEnd.linkCode]
      for linkEnd2 in linkEnd.molResLink.molResLinkEnds:
        if linkEnd2 is not linkEnd:
          links.append( [linkEnd.linkCode, linkEnd2] )
          linkEnd.molResLink.delete()

  if molResidue.chemComp is not chemComp:
    molResidue.__dict__['chemComp'] = chemComp

  molResidue.__dict__['descriptor'] = descriptor
  molResidue.__dict__['linking'] = linking

  linkCodes = [] 
  for linkEnd in chemCompVar.linkEnds:
    linkCode = linkEnd.linkCode
    linkCodes.append(linkCode)
    if not molResidue.findFirstMolResLinkEnd(linkCode=linkCode):
      molResLinkEnd = molResidue.newMolResLinkEnd(linkCode=linkCode)
  
  for linkEnd in molResidue.molResLinkEnds:
    if linkEnd.linkCode not in linkCodes:
      link = linkEnd.molResLink
      if link:
        link.delete()
      linkEnd.delete()  
  
  for (linkCodeA,linkEndB) in links:
    linkEndA = molResidue.findFirstMolResLinkEnd(linkCode=linkCodeA)
    if linkEndA and linkEndB:
      molResLink = molecule.newMolResLink(molResLinkEnds=(linkEndA,linkEndB))
    
  molecule.checkAllValid(complete=True)
 
  return molResidue

def makeMolecule(project, molType, sequence, molName=None, startNum=1, isCyclic=False):

  """Descrn: Makes Molecule for a given sequence
     Inputs: Project, Word (ChemComp.molType), List of Words (ChemComp.CcpCode),
             String ( Ccp.Moleule.Molecule.name) Int (first MolResidue.seqCode)
     Output: Molecule
  """

  if not molName:
    i = 1
    molName = 'Molecule %d' % (i)
    while project.findFirstMolecule(name=molName):
      i += 1
      molName = 'Molecule %d' % (i)
 
  molecule =  Molecule.Molecule(project, name=molName)

  try:
    addMolResidues(molecule, molType, sequence, startNum, isCyclic)
  except ApiError, e:
    try:
      molecule.delete()
    except:
      pass
    raise e

  return molecule

def addMolResidues(molecule, molType, sequence, startNum=1, isCyclic=False):
  """Descrn: Makes MolResidues for a given sequence in a new or specified Molecule
     Inputs: Ccp.Molecule.Molecule, Word (ChemComp.molType), List of Words (ChemComp.CcpCode),
             Ccp.Moleule.Molecule, String ( Ccp.Moleule.Molecule.name) Int (first MolResidue.seqCode)
     Output: List of Ccp.Molecule.MolResidues
  """
  
  if not sequence:
    return []
  
  oldMolResidues = molecule.molResidues
  if oldMolResidues:
    nn = max([x.seqCode for x in oldMolResidues]) + 1
    startNum = max(startNum, nn)
  
  if len(sequence) > 1 and molType in ('protein','DNA','RNA'):
    # linear polymer
    
    seqInput = zip([molType]*len(sequence),sequence)
    molResidues = makeLinearSequence(molecule, seqInput, seqCodeStart=startNum, isCyclic=isCyclic)
  
  else:
    # not linear polymer
  
    molResidues = []
    
    project = molecule.root
    for i in range(len(sequence)):
      chemComp = getChemComp(project, molType, sequence[i])
      if chemComp:
        chemCompVar  = chemComp.findFirstChemCompVar(linking='none') or chemComp.findFirstChemCompVar() # just a default
        descriptor   = chemCompVar.descriptor
        linking      = chemCompVar.linking

        molResidue   = Molecule.MolResidue(molecule, seqCode=i+startNum, chemComp=chemComp, linking=linking, descriptor=descriptor)
        molResidues.append(molResidue)

      else:
        showWarning('Warning','Residue code %s cannot be found for molecule type %s.' % (sequence[i],molType))
  
  return molResidues
  
  
def makeLinearSequence(molecule, sequence, seqCodeStart=1, isCyclic=False):
  """Descrn: Add residues to molecule. Fast method, which uses 'override' mode.
             sequence is a list of (molType,ccpCode) tuples - so can make mixed-type
             linear polymers; All ChemComps must have next and prev links to fit a 
             linear polymer seqCodes start from seqCodeStart, serial from next 
             free serial (or 1)
     Inputs: Molecule.molecule, List of Tuples of Strings (molType, ccpCode), Int, Boolean
     Output: List of Molecule.MolResidues
  """
  
  if len(sequence) < 2:
    raise ApiError("Sequence %s too short for function" % `sequence`)
  
  # set up
  project = molecule.root
  chemCompData = {}
  
  molResidues = []
  molResLinkEnds = []
  molResLinks = []
  
  # get starting serial
  serialDict = molecule.__dict__.setdefault('_serialDict', {})
  serial = serialDict.get('molResidues', 0)
  
  root = molecule.root
  root.__dict__['override'] = True
  
  ###if 1:
  try:
    # first residue
    if isCyclic:
      seqCode = seqCodeStart - 1
      doSequence = sequence
    else:
      seqCode = seqCodeStart
      serial += 1
      doSequence = sequence[1:-1]
 
      molType,ccpCode = sequence[0]
      molResData, otherLinkCodes = getLinearChemCompData(project, molType,
                                                        ccpCode, 'start')
      
      molResidue = molecule.newMolResidue(seqCode=seqCode, serial=serial,
                                          **molResData)                                         
      molResidues.append(molResidue)
      
      if otherLinkCodes:
        for linkCode in otherLinkCodes:
          # TBC these mostly seem to exist already...
          if molResidue.findFirstLinkMolResEnd(linkCode=linkCode):
            continue
          
          linkEnd = molResidue.newMolResLinkEnd(linkCode=linkCode)
          molResLinkEnds.append(linkEnd)
 
    # middle residues
    for seqTuple in doSequence:
      molType,ccpCode = seqTuple
      seqCode += 1
      serial += 1
      if chemCompData.has_key(seqTuple):
        molResData,otherLinkCodes = chemCompData[seqTuple]
      else:
        molResData,otherLinkCodes = getLinearChemCompData(project, molType,
                                                          ccpCode, 'middle')
        chemCompData[seqTuple] = (molResData,otherLinkCodes)
              
      molResidue = molecule.newMolResidue(seqCode=seqCode, serial=serial,
                                          **molResData)                                         
      molResidues.append(molResidue)
      
      if otherLinkCodes:
        for linkCode in otherLinkCodes:
          # TBC these mostly seem to exist already...
          if molResidue.findFirstMolResLinkEnd(linkCode=linkCode):
            continue
          
          linkEnd = molResidue.newMolResLinkEnd(linkCode=linkCode)
          molResLinkEnds.append(linkEnd)
 
    # last residue
    if not isCyclic:
      seqCode += 1
      serial += 1
      (molType,ccpCode) = sequence[-1]
      molResData,otherLinkCodes = getLinearChemCompData(project, molType,
                                                        ccpCode, 'end')
                                                        
      molResidue = molecule.newMolResidue(seqCode=seqCode, serial=serial,
                                          **molResData)                                         
      molResidues.append(molResidue)
      
      if otherLinkCodes:
        for linkCode in otherLinkCodes:
          # TBC these mostly seem to exist already...
          if molResidue.findFirstMolResLinkEnd(linkCode=linkCode):
            continue
          
          linkEnd = molResidue.newMolResLinkEnd(linkCode=linkCode)
          molResLinkEnds.append(linkEnd)
 
    # make links
    for second in range(1,len(sequence)):
      first = second -1
      nextLinkEnd = molResidues[first].findFirstMolResLinkEnd(linkCode='next')
      molResLinkEnds.append(nextLinkEnd)
      prevLinkEnd = molResidues[second].findFirstMolResLinkEnd(linkCode='prev')
      molResLinkEnds.append(prevLinkEnd)
      molResLinks.append(
       Molecule.MolResLink(molecule, molResLinkEnds=[nextLinkEnd,prevLinkEnd])
      )
 
    if isCyclic:
      # cyclising link
      nextLinkEnd = molResidues[-1].findFirstMolResLinkEnd(linkCode='next')
      molResLinkEnds.append(nextLinkEnd)
      prevLinkEnd = molResidues[0].findFirstMolResLinkEnd(linkCode='prev')
      molResLinkEnds.append(prevLinkEnd)
      molResLinks.append(
       Molecule.MolResLink(molecule, molResLinkEnds=[nextLinkEnd,prevLinkEnd])
      )
    
    # final validity check
    molecule.checkAllValid()

  finally: # TBD: TEMP until exception cleanup sorted out
    # reset override and set isModified
    root.__dict__['override'] = False
    molecule.__dict__['isModified'] = True
 
    """
  except Exception, e:
    # clean up 
    try:
      for molResLink in molResLinks:
        molResLink.delete()
      for molResidue in molResidues:
        molResidue.delete()
    except:
      pass
      
    del root.__dict__['override']
    molecule.__dict__['isModified'] = True
    raise e
"""
    
  # call notifiers:
  for clazz, objs in (
   (Molecule.MolResidue, molResidues),
   (Molecule.MolResLinkEnd, molResLinkEnds),
   (Molecule.MolResLink, molResLinks),
  ):
    notifiers = clazz._notifies.get('__init__')
    if notifiers:
      for notify in notifiers:
        for obj in objs:
          notify(obj)
 
  return molResidues
  
  
def getLinearChemCompData(project, molType, ccpCode, linking):
  """Descrn: Implementation function, specific for makeLinearSequence()
     Inputs: Project object, and desired molType, ccpCode, linking (all strings)
     Output: (dd,ll) tuple where dd is a dictionary for passing to the 
              MolResidue crreation (as **dd), and ll is a list of the linkCodes
              that are different from 'next' and 'prev'
  """
  
  chemComp = getChemComp(project, molType, ccpCode)
  if chemComp is None:
    raise ApiError("No chemComp for %s residue %s" % (molType, ccpCode))
    
  chemCompVar = chemComp.findFirstChemCompVar(linking=linking, isDefaultVar=True) or \
                chemComp.findFirstChemCompVar(linking=linking)
  # Note requiring a default var is too strict - not always set for
  # imports from mol2/PDB etc
                
  if chemCompVar is None:
    raise ApiError("No ChemCompVar found for %s:%s linking %s" % (molType, ccpCode, linking))
  
  molResData = {'chemComp':chemComp, 'linking':linking,
                'descriptor':chemCompVar.descriptor}
  
  seqLinks = []
  otherLinkCodes = []
  for linkEnd in chemCompVar.linkEnds:
    code = linkEnd.linkCode
    
    if code in ('next','prev'):
      seqLinks.append(code)
    else:
      otherLinkCodes.append(code)
  
  if linking == 'start':
    if seqLinks != ['next']:
      raise ApiError("Linking 'start' must have just 'next' linkEnd")
      
  elif linking == 'end':
    if seqLinks != ['prev']:
      raise ApiError("Linking 'end' must have just 'prev' linkEnd ")
      
  elif linking != 'middle' or seqLinks not in (['next','prev'],['prev','next']):
    raise ApiError("Illegal linking %s with seqLinks %s" % (linking,seqLinks))
  
  return (molResData, otherLinkCodes)


def makeChain(molSystem,molecule,code=None):
  """Descrn: Make a molSystem chain based upon an input molecule template
     Inputs: Ccp.MolSystem.MolSystem, Ccp.Molecule.Molecule, Word
     Output: Ccp.MolSystem.Chain
  """

  if code is None:
    code = nextChainCode(molSystem)
  
  chain = MolSystem.Chain(molSystem, code=code, molecule=molecule)
    
  if len(molecule.molResidues) == 1:
    details = molecule.findFirstMolResidue().chemComp.name
  else:
    details = molecule.seqString
  
  if details:
    if len(details) > 10:
      details = details[:10] + '...'
 
    chain.setDetails(details)
  
  return chain
  
def findAtomSetResonances(atomSets):
  """Descrn: Find resonances assigned to given atom sets
     Inputs: List of Nmr.AtomSets
     Output: List of Nmr.Resonances
  """

  resonanceDict = {}
  for atomSet in atomSets:
    if hasattr(atomSet, 'resonanceSets'):
      for resonanceSet in atomSet.resonanceSets:
    	for resonance in resonanceSet.resonances:
    	  resonanceDict[resonance.serial] = resonance
  
  if len(resonanceDict) > 0:
    return resonanceDict.values()
  else:
    return None


def createCoordinatesForResidue(coordDict,residue,sourceName='euroCarbDb',chemCompCoordArchiveDir=None):
   
  """

  Input:
  
    coordDict           A dictionary (initially empty). Will eventually contain coordinates for all residues (on chain level) connected in a molecule.
    residue             The residue to create the coordinates (or coordinates for connected residues) for.
    sourceName          Source name for the chemComp coordinate system (ideal, pdb, euroCarbDb, ...)
    
  Action:
  
    Adds residues to coordDict. The coordDict[residue] then points to a dictionary with as key (chemAtomType,atomName,atomSubType), which gives the (x,y,z) coordinates.
    
  Output:
  
    None

  WARNING: This code only works if coordinates are available for the linkAtoms for a chemComp that are
           involved in defining the molecule the chain is based on!
             
  """
  
  from ccp.general.Io import getChemCompCoord
  from memops.universal.Geometry import superposeNewVectorsOnOld
  
  chemCompCoord = getChemCompCoord(residue.root,sourceName = sourceName,ccpCode = residue.ccpCode, molType = residue.molType,chemCompCoordArchiveDir=chemCompCoordArchiveDir)
  
  chemCompVar = residue.chemCompVar
  chemCompVarCoord = chemCompCoord.findFirstChemCompVarCoord(linking = chemCompVar.linking, descriptor = chemCompVar.descriptor)
  
  #
  # Set the coordinates for this residue, if required
  #
  
  if not coordDict.has_key(residue):
    coordDict[residue] = {}

    for chemAtomCoord in chemCompVarCoord.chemAtomCoords:
    
      coordDict[residue][(chemAtomCoord.chemAtom.className,chemAtomCoord.name,chemAtomCoord.subType)] = (chemAtomCoord.x,chemAtomCoord.y,chemAtomCoord.z)
  
  #
  # Now look for connected residues
  #
  
  addedResidues = []
    
  molResidue = residue.molResidue
    
  for mrle in molResidue.molResLinkEnds:
    
    #
    # Get info for this residue - always use the recalculated coordinates in coordDict!
    #
    
    linkEnd = mrle.linkEnd
    
    #
    # Get info for other end
    #
        
    mrl = mrle.molResLink    
    mrles = mrl.sortedMolResLinkEnds()
    
    otherMrle = mrles[not mrles.index(mrle)]
    
    otherMolResidue = otherMrle.molResidue
    otherResidue = residue.chain.findFirstResidue(molResidue = otherMolResidue)
    
    #
    # If this one is already done, then ignore!
    #
    
    if coordDict.has_key(otherResidue):
      continue
    else:
      addedResidues.append(otherResidue)
      
    #
    # Now get coordinate info for 'originating' residue
    #
    
    boundChemAtom = linkEnd.boundChemAtom
    boundLinkAtom = linkEnd.boundLinkAtom
    
    boundChemAtomKey = (boundChemAtom.className,boundChemAtom.name,boundChemAtom.subType)
    boundChemAtomCoords = coordDict[residue][boundChemAtomKey]
    
    boundLinkAtomKey = (boundLinkAtom.className,boundLinkAtom.name,boundLinkAtom.subType)
    boundLinkAtomCoords = coordDict[residue][boundLinkAtomKey]

    #
    # Now get coordinate info for other residue
    #
    
    otherChemCompCoord = getChemCompCoord(otherResidue.root,sourceName = sourceName,ccpCode = otherResidue.ccpCode, molType = otherResidue.molType,chemCompCoordArchiveDir=chemCompCoordArchiveDir)
     
    otherChemCompVar = otherMolResidue.chemCompVar    
    otherChemCompVarCoord = otherChemCompCoord.findFirstChemCompVarCoord(linking = otherChemCompVar.linking, descriptor = otherChemCompVar.descriptor)
    
    otherLinkEnd = otherMrle.linkEnd
    
    otherChemAtom = otherLinkEnd.boundChemAtom
    otherLinkAtom = otherLinkEnd.boundLinkAtom
    
    otherChemAtomCoord = otherChemCompVarCoord.findFirstChemAtomCoord(name = otherChemAtom.name, subType = otherChemAtom.subType)
    otherLinkAtomCoord = otherChemCompVarCoord.findFirstChemAtomCoord(name = otherLinkAtom.name, subType = otherLinkAtom.subType)
    
    newVectorCoordAtoms = [otherLinkAtomCoord,otherChemAtomCoord]
    newVectors = [(otherLinkAtomCoord.x,otherLinkAtomCoord.y,otherLinkAtomCoord.z),(otherChemAtomCoord.x,otherChemAtomCoord.y,otherChemAtomCoord.z)]
    
    for chemAtomCoord in otherChemCompVarCoord.chemAtomCoords:
      
      if not chemAtomCoord in newVectorCoordAtoms:

        newVectorCoordAtoms.append(chemAtomCoord)
        newVectors.append((chemAtomCoord.x,chemAtomCoord.y,chemAtomCoord.z))      
    
    #
    # Now get the new coordinates, and set them...
    #
            
    oldVectors = (boundChemAtomCoords,boundLinkAtomCoords)
    
    transposedVectors = superposeNewVectorsOnOld(oldVectors,newVectors)
    
    coordDict[otherResidue] = {}

    # Ignore the link atom!
    for i in range(1,len(newVectorCoordAtoms)):
      chemAtomCoord = newVectorCoordAtoms[i]
      coords = tuple(transposedVectors[i])
      coordDict[otherResidue][(chemAtomCoord.chemAtom.className,chemAtomCoord.name,chemAtomCoord.subType)] = coords
      
  #
  # Warning: can't handle cyclic molecules!
  #
  
  for addedResidue in addedResidues:
    createCoordinatesForResidue(coordDict, addedResidue, sourceName = sourceName, chemCompCoordArchiveDir=chemCompCoordArchiveDir)
  
def createMolStructureFromChemCompCoords(chain,coordSourceName='euroCarbDb',chemCompCoordArchiveDir=None):

  """
  Input:
  
    chain               CCPN Chain object
    coordSourceName     source name for the chemComp coordinate system (ideal, pdb, euroCarbDb, ...)
    
  Action:
  
    Creates a new StructureEnsemble with one Model. This Model has coordinates that are based on the
    ChemCompCoord data (with the relevant coordSourceName)
    
  Output:
  
    The new CCPN StructureEnsemble object.
    

  WARNING: This code only works if coordinates are available for the linkAtoms for a chemComp that are
           involved in defining the molecule the chain is based on!
           
  """
  
  coordDict = {}
  
  project = chain.root
  
  #
  # Find the residue with the starting coordinates
  #
  
  refResidue = None

  #
  # For carbohydrates, start at reducing end if possible
  #
  
  if chain.molecule.molType == 'carbohydrate':
    for residue in chain.residues:
      if not 'C1' in residue.linking:
        refResidue = residue
        break
  
  #
  # If no default found, just start with first residue.
  #
  
  if not refResidue:
    refResidue = chain.findFirstResidue(seqId = 1)
    if not refResidue:
      refResidue = chain.findFirstResidue()
  
  #
  # Create the coordinates for the refResidue
  #
  # This code will automatically create the coords for all connected residues!
  #
  
  createCoordinatesForResidue(coordDict,refResidue, sourceName = coordSourceName, chemCompCoordArchiveDir=chemCompCoordArchiveDir)

  #
  # Now create the actual StructureEnsemble coordinates from the dictionary...
  #
  
  for ensembleId in range(100):
    if not project.findFirstStructureEnsemble(molSystem = chain.molSystem, ensembleId = ensembleId):
      structureEnsemble = project.newStructureEnsemble(molSystem = chain.molSystem, ensembleId = ensembleId)
      break
  
  coordChain = structureEnsemble.newChain(code = chain.code)
  model = structureEnsemble.newModel()
  
  for residue in coordDict.keys():
    coordResidue = coordChain.newResidue(seqCode = residue.seqCode, seqId = residue.seqId, seqInsertCode = residue.seqInsertCode)
    
    for atomKey in coordDict[residue].keys():
    
      (atomType,atomName,atomSubType) = atomKey
      
      if atomType == 'LinkAtom':
        continue
    
      coordAtom = coordResidue.newAtom(name = atomName)
      
      (x,y,z) = coordDict[residue][atomKey]
      coordinate = coordAtom.newCoord(model = model, x = x, y = y, z = z)
      
  return structureEnsemble
