
import re

from math import sqrt

from memops.universal.MessageReporter import showOkCancel, showWarning, showYesNo
from memops.general import Implementation

# # # # # From UnitConverter # # # # # 
# Copyright (C) 2009 Wayne Boucher and Tim Stevens (University of Cambridge)

def ppm2pnt(ppm, dataDimRef):

  freqDataDim = dataDimRef.dataDim

  npoints = freqDataDim.numPointsOrig
  sw = freqDataDim.spectralWidthOrig
  sf = dataDimRef.expDimRef.sf
  refpt = dataDimRef.refPoint
  refppm = dataDimRef.refValue

  t = - npoints * sf / float(sw)
  pnt = t*(ppm - refppm) + refpt

  return pnt

def pnt2ppm(pnt, dataDimRef):

  freqDataDim = dataDimRef.dataDim

  npoints = freqDataDim.numPointsOrig
  sw = freqDataDim.spectralWidthOrig
  sf = dataDimRef.expDimRef.sf
  refpt = dataDimRef.refPoint
  refppm = dataDimRef.refValue

  t = - npoints * sf / float(sw)
  ppm = (pnt - refpt)/t + refppm

  return ppm

def hz2pnt(hz, dataDimRef):

  freqDataDim = dataDimRef.dataDim

  npoints = freqDataDim.numPointsOrig
  sw = freqDataDim.spectralWidthOrig
  sf = dataDimRef.expDimRef.sf
  refpt = dataDimRef.refPoint
  refppm = dataDimRef.refValue

  t = - npoints / float(sw)
  pnt = t*(hz - sf*refppm) + refpt

  return pnt

def pnt2hz(pnt, dataDimRef):

  freqDataDim = dataDimRef.dataDim

  npoints = freqDataDim.numPointsOrig
  sw = freqDataDim.spectralWidthOrig
  sf = dataDimRef.expDimRef.sf
  refpt = dataDimRef.refPoint
  refppm = dataDimRef.refValue

  t = - npoints / float(sw)
  hz = (pnt - refpt)/t + sf*refppm

  return hz

unit_converter = {}
unit_converter[('ppm', 'point')] = ppm2pnt
unit_converter[('point', 'ppm')] = pnt2ppm
unit_converter[('Hz', 'point')] = hz2pnt
unit_converter[('point', 'Hz')] = pnt2hz

# # # # # From MoleculeBasic # # # # # 
# Copyright (C) 2009 Wayne Boucher and Tim Stevens (University of Cambridge)

STEREO_PREFIX = 'stereo_'
CARBOHYDRATE_MOLTYPE = 'carbohydrate'
PROTEIN_MOLTYPE = 'protein'
OTHER_MOLTYPE = 'other'
DNA_MOLTYPE = 'DNA'
RNA_MOLTYPE = 'RNA'
DNARNA_MOLTYPE = 'DNA/RNA'

userResidueCodesDict = {DNA_MOLTYPE:{'A':'Ade','T':'Thy','G':'Gua','C':'Cyt','U':'Ura'},
                        RNA_MOLTYPE:{'A':'Ade','T':'Thy','G':'Gua','C':'Cyt','U':'Ura','I':'Ino'},
                        PROTEIN_MOLTYPE:{},
                        CARBOHYDRATE_MOLTYPE:{}
                        }

DEFAULT_ISOTOPES = {'H':'1H','C':'13C','N':'15N','P':'31P','Si':'29Si','F':'19F'}

def getResidueCode(obj):
  """Descrn: Get a text code for a residue/molResidue/resonanceGroup,
             defaults to the ccpCode if a custom code is not present
             in userResidueCodesDict 
     Inputs: MolSystem.Residue
     Output: Word
  """ 
  
  ccpCode = obj.ccpCode
  molType = obj.molType
    
  if molType is None:
    molType = PROTEIN_MOLTYPE
  
  ccpCodeDict = userResidueCodesDict.get(molType, {})
  residueCode = ccpCodeDict.get(ccpCode, ccpCode)
  
  if molType == CARBOHYDRATE_MOLTYPE:
    descriptor = obj.descriptor
    n = len(STEREO_PREFIX)
    
    if (len(descriptor)> n) and descriptor.startswith(STEREO_PREFIX):
      if descriptor[n] == '1':
        residueCode = 'a-' + residueCode
      elif descriptor[n] == '2':
        residueCode = 'b-' + residueCode
 
  return residueCode
  
def getResidueMapping(residue, aromaticsEquivalent=True):
  """Descrn: Gives the Analysis.ResidueMapping for a residue
             Makes a new one with new AtomSetsMappings if not exists
             Makes a ChainMapping too if needed.
     Inputs: MolSystem.Residue
     Output: Analysis.ResidueMapping
  """
  
  if hasattr(residue, 'residueMapping'):
    return residue.residueMapping
  
  residueMapping = None
  analysisProject = residue.root.currentAnalysisProject
  chainMapping = analysisProject.findFirstChainMapping(chain=residue.chain)

  if not chainMapping:
    chainMapping = analysisProject.newChainMapping(molSystemCode=residue.chain.molSystem.code,
                                                   chainCode=residue.chain.code)
    chainMapping.residueMappingDict = {}
  else:
    if not hasattr(chainMapping, 'residueMappingDict'):
      chainMapping.residueMappingDict = {}
    
    residueMapping = chainMapping.residueMappingDict.get(residue.seqId)
    
    if not residueMapping:
      residueMapping = chainMapping.findFirstResidueMapping(seqId=residue.seqId)
      chainMapping.residueMappingDict[residue.seqId] = residueMapping
      
  if not residueMapping:
    residueMapping = chainMapping.newResidueMapping(seqId=residue.seqId)
    #makeResidueAtomSets(residue)

  residue.residueMapping = residueMapping 
  
  if not residueMapping.atomSetMappings:
    makeResidueAtomSets(residue, aromaticsEquivalent=aromaticsEquivalent)

  return residueMapping
  
def makeResidueAtomSets(residue, aromaticsEquivalent=True):
  """Descrn: Make all atomSets and atomSetMappings for a given residue
             Aromatic Phe, Tyr (Hd1,Hd2), (He1,He2) can be made into 
             single equivalent atom sets due to rotation.
     Inputs: MolSystem.Residue, Boolean
     Output: None
  """
  
  getResidueMapping(residue)
  
  equivalent = {}
  elementSymbolDict = {}
  nonequivalent = {}
  multiSet = {}
  chemAtomSetDict = {}
  inMultiSet = {}
  molType = residue.molResidue.molType
  
  for atom in residue.atoms:  
    chemAtom = atom.chemAtom
    chemAtomSetDict[atom] = chemAtom
    elementSymbol = chemAtom.elementSymbol

    if chemAtom.chemAtomSet is None:
      name = chemAtom.name
      makeAtomSet(name,(atom,),None,'simple')
    else:
      chemAtomSet = chemAtom.chemAtomSet
      name = chemAtomSet.name
      elementSymbolDict[name] = elementSymbol
      chemAtomSetDict[name] = chemAtomSet
      if chemAtomSet.isEquivalent:
        if equivalent.get(name) is None:
          equivalent[name] = []
        equivalent[name].append(atom)
        
      elif (chemAtomSet.isEquivalent is None) and atom.atomSet and (len(atom.atomSet.atoms) > 1):
        # aromatic rotation prev set
        if equivalent.get(name) is None:
          equivalent[name] = []
        equivalent[name].append(atom)
           
      elif (chemAtomSet.isEquivalent is None) and (not atom.atomSet) and aromaticsEquivalent:
        # aromatic rotation to be set
        if equivalent.get(name) is None:
          equivalent[name] = []
        equivalent[name].append(atom)
          
      else:
        if nonequivalent.get(name) is None:
          nonequivalent[name] = []
        nonequivalent[name].append(atom)
   
      if chemAtomSet.chemAtomSet is not None:
        multiName = chemAtomSet.chemAtomSet.name
        chemAtomSetDict[multiName] = chemAtomSet.chemAtomSet
        elementSymbolDict[multiName] = elementSymbol
        if multiSet.get(multiName) is None:
          multiSet[multiName] = {}
        multiSet[multiName][name] = 1
        inMultiSet[name] = multiName

  for groupName in equivalent.keys():
    atoms = equivalent[groupName]
    elementSymbol = elementSymbolDict[groupName]
    chemAtomSet = chemAtomSetDict[groupName]
    if len(atoms)==2:
      # not enough atoms for multi sets!
      makeAtomSet(groupName,atoms,chemAtomSet,'simple')
    else:
      if inMultiSet.get(groupName):
        # e.g. for Val Hg1*
        makeAtomSet(groupName,atoms,chemAtomSet,'stereo')
 
      else:
        makeAtomSet(groupName,atoms,chemAtomSet,'simple')

  for groupName in nonequivalent.keys():
    atoms = nonequivalent[groupName]
    elementSymbol = elementSymbolDict[groupName]
    chemAtomSet = chemAtomSetDict[groupName]
    atomSetNames = []
    for atom in atoms:
      name = chemAtomSetDict[atom].name
      makeAtomSet(name,(atom,),chemAtomSet,'stereo')
      atomSetNames.append(name)

    n = 0 
    for atom in atoms:
      name = chemAtomSetDict[atom].name
      name2 = makeNonStereoName(molType, name, n)
      n += 1
      makeGuiMultiAtomSet(residue, name2, atomSetNames,
                          elementSymbol,'nonstereo',chemAtomSet)

    makeGuiMultiAtomSet(residue, groupName, atomSetNames,
                        elementSymbol,'ambiguous',chemAtomSet)

  for groupName in multiSet.keys():
    atomSetNames  = multiSet[groupName].keys()
    elementSymbol = elementSymbolDict[groupName]
    chemAtomSet   = chemAtomSetDict[groupName]
    if "|" in groupName:
      # we don't do these pseudoatoms in Analysis
      continue

    # e.g. for Val Hga*
    n = 0 
    for atomSetName in atomSetNames:
      name2 = makeNonStereoName(molType, atomSetName, n)
      n += 1
      makeGuiMultiAtomSet(residue, name2, atomSetNames,
                          elementSymbol,'nonstereo',chemAtomSet)
    
    makeGuiMultiAtomSet(residue, groupName, atomSetNames,
                        elementSymbol,'ambiguous',chemAtomSet)

def makeNonStereoName(molType, name, n=None):
  """Descrn: Convert a sterospecific atom name into a non-stereospecific one for a GUI
     Inputs: Word, Int (naming offset from start of alphabet)
     Output: Word
  """

  match = re.match('(\w+)(\d|\'+)(\D*)', name)
  
  if not match:
    #print molType, name, n
    return name
  
  letters = match.group(1)
  number  = match.group(2)
  prime   = ''
  
  if number == '\'':
    number = 1
    prime = '\''
  elif number == '\'\'':
    number = 2
    prime = '\''
  
  if n is None:
    n = int(number) - 1

  if molType == PROTEIN_MOLTYPE:
    if (letters == 'H'):
      letters = 'Hn'
  name = letters + prime + chr(ord('a')+n)+ match.group(3)
    
  return name

def makeGuiMultiAtomSet(residue,multiGuiName,guiSetsNames,elementSymbol,mappingType,chemAtomSet):
  """Descrn: Make atom set mappings for multiple atom set selections
     Inputs: MolSystem.Residue, Word (Analysis.AtomSetMapping.name),
             List of Words (Analysis.AtomSetMapping.names),
             Word, Word, ChemComp.ChemAtomSet
     Output: Analysis.AtomSetMapping
  """
  
  if "|" in multiGuiName:
    return
  
  residueMapping = getResidueMapping(residue)  
  molType = residue.molResidue.molType
  for guiName in guiSetsNames:
    atomSetMapping = residueMapping.findFirstAtomSetMapping(name=makeGuiName(guiName, elementSymbol, molType))
    if atomSetMapping is None:
      print "Nonexistant group error in makeGuiMultiAtomSet for", residue.molResidue.ccpCode, residue.seqCode, guiName
      return
    #atomSet      = atomSetMapping.atomSets[0]
    chemAtomSet1 = atomSetMapping.chemAtomSet
    
    for guiName2 in guiSetsNames:
      atomSetMapping2 = residueMapping.findFirstAtomSetMapping(name=makeGuiName(guiName2, elementSymbol, molType))
      if atomSetMapping2 is None:
        print "Nonexistant group error in makeGuiMultiAtomSet for", residue.molResidue.ccpCode
        return
      #atomSet      = atomSetMapping2.atomSets[0]
      chemAtomSet2 = atomSetMapping2.chemAtomSet
      if chemAtomSet2 and chemAtomSet1:
        if chemAtomSet1.isProchiral != chemAtomSet2.isProchiral:
          print "Prochiratity error in makeGuiMultiAtomSet for", residue.molResidue.ccpCode
          return
        if chemAtomSet1.isEquivalent != chemAtomSet2.isEquivalent:
          print "Equivalenct arror error makeGuiMultiAtomSet for ", residue.molResidue.ccpCode
          return

  atomSets = []
  for guiName in guiSetsNames:
    name0 = makeGuiName(guiName, elementSymbol, molType)
    atomSetSerials = residueMapping.findFirstAtomSetMapping(name=name0).atomSetSerials
    for atom in residue.atoms:
      atomSet = atom.atomSet
      if atomSet:
        if atomSet.serial in atomSetSerials:
          atomSets.append(atomSet)
          break
    
  if not residueMapping.findFirstAtomSetMapping(name=multiGuiName):
    atomSetMapping = makeAtomSetMapping(residueMapping, multiGuiName, atomSets,
                                        chemAtomSet, mappingType)
  
  return atomSetMapping

def makeGuiName(name, elementSymbol, molType):
  """Descrn: Convert atom or atomSet name into name for gui: e.g H becomes Hn
     Inputs: Word (Nmr.AtomSet.name), Word, Word
     Output: Word 
  """

  #if molType == PROTEIN_MOLTYPE:
  #  if name == 'H':
  #    name = name + 'n'
   
  guiName = elementSymbol + name[len(elementSymbol):].lower()  

  return guiName
  
def makeAtomSet(guiName,atoms,chemAtomSet,mappingType):
  """Descrn: Make atomSet and atomSetMapping for equivalent atoms
     Inputs: Word (AtomSet.name), List of MolSystem.Atoms,
             ChemComp.ChemAtomSet, Word (AtomSetMapping.mappingType)
     Output: Nmr.AtomSet
  """
  
  atom0 = list(atoms)[0]
  project = atom0.root
  
  for atom in atoms:
    if atom.atomSet != atom0.atomSet:
      for atom2 in atoms:
        if atom2.atomSet and (not atom2.atomSet.resonanceSets):
          atom2.atomSet.delete()
      break 
  
  nmrProject = project.currentNmrProject
  
  if atom0.atomSet is None:
    atomSet = nmrProject.newAtomSet(atoms=atoms)
  else:
    atomSet = atom0.atomSet
 
  residue = atom0.residue
    
  residueMapping = getResidueMapping(residue)
  if not residueMapping.findFirstAtomSetMapping(name=guiName):
    makeAtomSetMapping(residueMapping,guiName,(atomSet,),chemAtomSet,mappingType)

  atomSet.name = guiName
  return atomSet
  
def makeAtomSetMapping(residueMapping,name,atomSets,chemAtomSet,mappingType,resonances=None):
  """Descrn: Make atomSetMapping given atomSets and mapping type
     Inputs: Analysis.ResidueMapping, Word, MolSystem.Residue,
             List of Nmr.AtomSets, ChemComp.ChemAtomSet,
             Word, Word, List of Nmr.Resonances
     Output: Analysis.AtomSetMapping
  """

  atom          = list(atomSets)[0].findFirstAtom()
  elementSymbol = atom.chemAtom.elementSymbol
  serials       = []
  for atomSet in atomSets:
    serials.append(atomSet.serial)

  molType = residueMapping.residue.molResidue.molType    
  guiName = makeGuiName(name, elementSymbol, molType)
      
  atomSetMapping = residueMapping.newAtomSetMapping(name=guiName,mappingType=mappingType,
                                                    atomSetSerials=serials,
                                                    chemAtomSet=chemAtomSet,
                                                    elementSymbol=elementSymbol)
                                                    
  if resonances is not None:
    resSerials = []
    for resonance in resonances:
      resSerials.append(resonance.serial)
    atomSetMapping.setResonanceSerials(resSerials)

  return atomSetMapping
  
  
def getBoundAtoms(atom):
  """Descrn: Get a list of atoms bound to a given atom..
     Inputs: MolSystem.Atom
     Output: List of MolSystem.Atoms
  """
  
  if hasattr(atom, 'boundAtoms'):
    return atom.boundAtoms
  
  atoms    = []
  chemAtom = atom.chemAtom
  residue  = atom.residue
  
  chemAtomDict = {}
  for atom2 in residue.atoms:
    # Only atoms specific to ChemCompVar :-)
    chemAtomDict[atom2.chemAtom] = atom2
  
  for chemBond in chemAtom.chemBonds:
    for chemAtom2 in chemBond.chemAtoms:
      if chemAtom2 is not chemAtom:
        atom2 = chemAtomDict.get(chemAtom2)
        if atom2:
          atoms.append(atom2)
  
  linkEnd = residue.chemCompVar.findFirstLinkEnd(boundChemAtom=chemAtom)
  if linkEnd:
    molResLinkEnd = residue.molResidue.findFirstMolResLinkEnd(linkEnd=linkEnd)
    
    if molResLinkEnd:
      molResLink = molResLinkEnd.molResLink
    
      if molResLink:
        for molResLinkEnd2 in molResLink.molResLinkEnds:
          if molResLinkEnd2 is not molResLinkEnd:
            residue2 = residue.chain.findFirstResidue(molResidue=molResLinkEnd2.molResidue)
            
            if residue2:
              chemAtom2 = molResLinkEnd2.linkEnd.boundChemAtom
              atom2 = residue2.findFirstAtom(chemAtom=chemAtom2)
              
              if atom2:
                atoms.append(atom2)
              
            break
  
  atom.boundAtoms = atoms    
  return atoms
  
  
# # # # # From MergeObjects # # # # # 

# A generic method to merge data model objects
# Transfer simple and link attributes from the source object to target object
# Does not transfer derived, automatic or immutable attributes
# Links will be transferred where possible
# Where necessary the Api is bypassed

# Logical analysis and design by R.H. Fogh

# Coding and testing by T.J. Stevens

#Definitions:
#Objects targetObj and sourceObj of class O
#link O.a (a) to class A, with backlink A.o ( o)

# A note on checks:
# Where the API is bypassed, the function does validity checks at each step,
# and rolls back the last step if the checks fail.
# The checks are done on souceObj, targetObj, objects on the other end of
# links, and the parents of the latter. The check on parents is done because
# this includes a check on the keys of the children - the merge cannot change
# the keys of either source or target, but can change the key of linked-to objects.

from memops.general import Constants as genConstants
from memops.general.Implementation import ApiError
from memops.universal import Util as uniUtil
from memops.metamodel import ImpConstants

def mergeObjects(sourceObj,targetObj):
  """Merges sourceObj into targetObj, deleting sourceObj.
  Attributes and links from sourceObj are added to targetObj
  provided 1) that they are not there already, and  
  2) that there is room.
  
  WARNING this function bypasses the API. 
  WARNING This function just might leave the data in an illegal state
  The function performs a number of checks for each individual change.
  If a check fails, the latest change is undone before the error exit,
  in an attempt to leave the data in a state that is legal. Note that only
  the latest change is undone - in case of error the data state will not be
  brought back to the state from before the execution of the command.
  Note that sourceObj is likely to be in an illegal state during execution,
  so that an error may well leave sourceObj in an illegal state. If this happens,
  deleting sourceObj may bring the data back to a legal state, and is unlikely 
  to cause further problems.
  In spite of the checks, some objects (not limited to sourceObj and targetObj)
  may be left in an illegal state, even if no error is raised.
  It is recommended to use this function with caution, 
  and to run checkAllValid after it has been used.  """

  #exclude parent # done! Mandatory
  
  #same class check
  if sourceObj.qualifiedName != targetObj.qualifiedName:
    return

  #ATTRIBUTES:
  #Objects targetObj, sourceObj, with attribute a
  
  objClass = targetObj.metaclass

  for a in objClass.getAllAttributes():
    attrName = a.name
 
    if a.isDerived or a.isAutomatic or a.changeability == ImpConstants.frozen:
      continue
      
    elif a.hicard == a.locard:
      continue
 
    elif a.hicard == 1:
      if targetObj.__dict__[attrName] is None:
        setattr(targetObj,attrName,sourceObj.__dict__[attrName])

    else:
      # find add operation
      addfunc = getattr(targetObj, 'add' + uniUtil.upperFirst(a.baseName))
      
      # Thisd is OK, as we iterate over list2 but modify list1
      attrList1 = targetObj.__dict__[attrName]
      attrList2 = sourceObj.__dict__[attrName]
      
      if a.isUnique:
        # no duplicates = might be list or set
        if a.hicard > 1:
          nSpaces = max(0, a.hicard - len(attrList1))
        else:
          nSpaces = -1
          
        for aVal in attrList2:
          if nSpaces == 0:
            break
          else:
            nSpaces -= 1
            addfunc(aVal)
            
      else:
        # might have duplicates (and must be an internal list)
        for aVal in attrList2:
          if len(attrList1) >= a.hicard and a.hicard != genConstants.infinity:
            break
          # keep adding while there is room
          if attrList1.count(aVal) < attrList2.count(aVal):
            addfunc(aVal)
 
  #LINKS:
  niceLinks = []
  nastyLinks = []
  childLinks = []
  for a in objClass.getAllRoles():
    linkName = a.name
    
    # select links and how to treat them
    
    if a.hicard == a.locard or a.isDerived or a.isAutomatic:
      continue
 
    if a.changeability == ImpConstants.frozen:
      continue
      # This is probably right; it could be changed if we bypassed the API.
      
    o = a.otherRole
    
    if a.hierarchy == ImpConstants.child_hierarchy:
      childLinks.append(a)
    
    elif o is None or o.changeability != ImpConstants.frozen:
      # links that can be handled without bypassing API
      niceLinks.append(a)
    else:
      # links that require bypassing API
      nastyLinks.append(a)
  
  for a in niceLinks:
    # links that can be handled without bypassing API
 
    linkName = a.name
    o = a.otherRole
    if o is not None:
      backName = o.name
      #print linkName, a.locard, a.hicard, o.locard, o.hicard  
      
    if o is None or o.hicard != o.locard:
      #
      #print "C3", linkName
      #
      # NB this does NOT break API
      #
      # We are setting/adding/removing from the .a side.
      # if o is None there will be no problems.
      # If o.hicard == 1, attrObj.o can be overwritten
      # Otherwise, as o.hicard != o.locard it will always be possible either to
      # remove sourceObj from attrObj or to add targetObj to attrObj 
      # regardless of the exact cardinalities and of len(attrObj.o)

      if a.hicard == 1:
        #assert a.locard == 0
        #
        # there will be no problems on the source/target side as we only
        # make changes when the link is unset in the target
        
        # Whatever the number of objects, you will eitehr be able to
        # remove sourceObj from attrObj or to add targetObj.
        #
        if getattr(targetObj,linkName) is None:
          attrObj = getattr(sourceObj,linkName)
          try:
            setattr(sourceObj,linkName,None)
          except:
            pass
          setattr(targetObj,linkName,attrObj)
      
      else:
        # There will be no problems on the attrObj side (see above).
        # On the source/target side we will get the desired result as
        # the API simply passes if you try to add an existing object,
        # It also deletes the old link to sourceObj where appropriate
        
        # find add operation
        ss = uniUtil.upperFirst(a.baseName)
        addfunc = getattr(targetObj, 'add' + ss)
        removefunc = getattr(sourceObj, 'remove' + ss)
        
        # NB we cannot use teh raw list as we modify it during the loop
        for attrObj in getattr(sourceObj,linkName):
        
          try:
            removefunc(attrObj)
          except ApiError:
            pass
            #print 'Failed to remove %s for %s' % (linkName,sourceObj.className)
          
          
          try:
            # Adds objects to targetObj.a as long as there is room
            # (a.hicard could be e.g. 2)
            addfunc(attrObj)
          except ApiError:
            pass
            #print 'Failed to add %s for %s' % (linkName,targetObj.className)
            break

    elif o.hicard == 1 and o.locard == 1:
      
      if a.hicard == 1:
        #assert a.locard == 0
        oldVal = getattr(targetObj,linkName)
        if oldVal is None:
          newVal = getattr(sourceObj,linkName)
          setattr(newVal, backName, targetObj)
      
      else:
        # assert a.hicard != a.locard
        # asser a.hicard != 1
        for attrObj in getattr(sourceObj,linkName):
          try:
            setattr(attrObj, backName, targetObj)
          except ApiError:
            pass
      
    else:
      #
      #print "C4", linkNam
      #
      # NB this does NOT break API
      #
      # we know that o.hicard == o.locard > 1
      # The trick is that since o.hicard == o.locard > 1 and a.changeability != frozen,
      # it must be possible to set attrObj.o to an appropriate tuple without
      # getting into trouble.
      if a.hicard == 1:
        #assert a.locard == 0
        attrObj = getattr(sourceObj,linkName)
        linkList = list(getattr(attrObj,backName))
        linkList[linkList.index(sourceObj)] = targetObj
        setattr(attrObj,backName,linkList)
        
      else:
        # assert a.hicard != a.locard
        # asser a.hicard != 1
        for attrObj in getattr(sourceObj,linkName):
          linkList = list(getattr(attrObj,backName))
          linkList[linkList.index(sourceObj)] = targetObj
          setattr(attrObj, backName, linkList)
   
  # make sure we are valid before going into the tough part
  targetObj.checkValid()
  
  
  if nastyLinks:
    root = targetObj.root
    try:
      root.override = True 
     
      for a in nastyLinks:
        # links that can *NOT* be handled without bypassing API
 
        linkName = a.name
        o = a.otherRole
        backName = o.name
        keyNames = o.container.keyNames
        attrObjClass = a.valueType
        downlink = attrObjClass.parentRole.otherRole.name
        #print linkName, a.locard, a.hicard, o.locard, o.hicard
      
        if a.hicard == 1:
          #print "C1", linkName

          if  getattr(targetObj,linkName) is None:

            #do
            attrObj = getattr(sourceObj,linkName)
            if backName in keyNames:
              oldKey = attrObj.getLocalKey()
            setattr(sourceObj, linkName, None)
            setattr(targetObj, linkName, attrObj)
            if backName in keyNames:
              newKey = attrObj.getLocalKey()
              # this changes key for attrObj - fix it.
              childDict = attrObj.parent.__dict__[downlink]
              if newKey in childDict:
                # key already taken - undo
                setattr(targetObj, linkName, None)
                setattr(sourceObj, linkName, attrObj)
                raise ApiError("Merge failure: %s key %s already in use"
                               % (attrObj.qualifiedName(), newKey))
              else:
                del childDict[oldKey]
                childDict[newKey] = attrObj

            # test
            try:
              attrObj.checkValid()
              targetObj.checkValid()

            # undo
            except:
              setattr(targetObj, linkName, None)
              setattr(sourceObj, linkName, attrObj)
              if backName in keyNames:
                del childDict[newKey]
                childDict[oldKey] = attrObj
              print ("Merge failure: %, % result is not valid"
                     % (targetObj, attrObj))
              raise

        else:
          #
          # assert a.hicard != 1
          #
          # NB if a.locard > 0 the code below could create an illegal
          # sourceObj. Which would not be a problem if all went well,
          # but would render the final state illegal if the merge ran into an 
          # error somewhere else later
          # We ignore this as links that are locard>0 in one direction and
          # frozen in the other direction would make both objects impossible
          # to create except under override conditions. The problem is *very*
          # unlikely ever to arise.
          
          #
          #print "C2", linkName
          # set up
          keepList = list(getattr(targetObj, linkName))
          ll = list(getattr(sourceObj, linkName))
          
          if a.hicard == genConstants.infinity:
            moveList = ll
            ignoreList = []
          else:
            nSpaces = a.hicard - len(keepList)
            if nSpaces > 0:
              moveList = ll[:nSpaces]
              ignoreList = ll[nSpaces:]
            else:
              continue
            
          # do
          if backName in keyNames:
            oldKeys = [x.getLocalKey() for x in moveList]
          setattr(sourceObj, linkName, ignoreList)
          setattr(targetObj, linkName, keepList + moveList)
          if backName in keyNames:
            newKeys = []
            for ii, attrObj in enumerate(moveList):
              childDict = attrObj.parent.__dict__[downlink]
              newKey = attrObj.getLocalKey()
              if newKey in childDict:
                # key already taken - undo
                setattr(targetObj, linkName, None)
                setattr(sourceObj, linkName, attrObj)
                for jj, nk in enumerate(newKeys):
                  ao = moveList[jj]
                  cd = ao.parent.__dict__[downlink]
                  cd[oldKeys[jj]] = ao
                  del cd[nk]
                raise ApiError("Merge failure: %s key %s already in use"
                               % (attrObj.qualifiedName(), newKey))
              else:
                newKeys.append(newKey)
                # del childDict[oldKey] 
                # TJS edit: to be checked
                del childDict[oldKeys[ii]]
                childDict[newKey] = attrObj

          # test
          try:
            targetObj.checkValid()
            for attrObj in moveList:
              attrObj.checkValid()

          # undo
          except:
            setattr(targetObj, linkName, keepList)
            setattr(sourceObj, linkName, moveList + ignoreList)
            if backName in keyNames:
              for jj, nk in enumerate(newKeys):
                ao = moveList[jj]
                cd = ao.parent.__dict__[downlink]
                cd[oldKeys[jj]] = ao
                del cd[nk]
            raise
          
 
    finally:
      root.override = False 
  
  
  if childLinks:
    # now move children. This is a full bypass, no overrides
    for a in childLinks:
      parentName = a.otherRole.name
      sourceDd = sourceObj.__dict__[a.name]
      targetDd = targetObj.__dict__[a.name]
      topObj = targetObj.topObject
      
      if a.hicard == 1:
        # single kid (rare case)
        targetObj.__dict__[a.name] = sourceObj.__dict__[a.name]
        sourceObj.__dict__[a.name] = None
        oo.__dict__[parentName] = targetObj
        oo.__dict__['topObject'] = topObj
 
      elif a.valueType.keyNames == ['serial']:
        # multiple kid with serial key
        nextSerial = targetObj.__dict__['_serialDict'][a.name] + 1
        for junk, oo in sorted(sourceDd.items()):
          targetDd[nextSerial] = oo
          del sourceDd[nextSerial]
          oo.__dict__[parentName] = targetObj
          oo.__dict__['topObject'] = topObj
        targetObj.__dict__['_serialDict'][a.name] = nextSerial
 
 
      else:
        # multiple kid with normal key
        for localKey,oo in sorted(sourceDd.items()):
          if localKey in targetDd:
            # key is taken - skip object
            continue
          else:
            targetDd[localKey] = oo
            del sourceDd[localKey]
            oo.__dict__[parentName] = targetObj
            oo.__dict__['topObject'] = topObj
      
  targetObj.checkValid()
  #print "S1", sourceObj
  sourceObj.delete()
  #print "S2", sourceObj
  #print "T1", targetObj
  return targetObj
   
# # # # # From AssignmentBasic # # # # # 
# Copyright (C) 2009 Wayne Boucher and Tim Stevens (University of Cambridge)


def mergeResonances(resonanceB, resonanceA):
  """Descrn: Merge two resonances and their shifts into one
     Inputs: Nmr.Resonance, Nmr.Resonance
     Output: Nmr.Resonance
  """
  
  if resonanceB is resonanceA:
    return resonanceA
  
  removeAssignmentNotifiers()
  
  isotopeA = resonanceA.isotopeCode
  isotopeB = resonanceB.isotopeCode
  
  if isotopeA and isotopeB:
    if isotopeA != isotopeB:
      showWarning('Resonance Merge Failure',
                  'Attempt to merge resonances with different isotope codes')
      setupAssignmentNotifiers()
      return 
  
  mappings = []
  resonanceSet = resonanceB.resonanceSet
  if resonanceSet:
    atomSets = resonanceSet.atomSets
    residue  = resonanceSet.findFirstAtomSet().findFirstAtom().residue
    serials  = [atomSet.serial for atomSet in atomSets]
    serials.sort()
    residueMapping = getResidueMapping(residue)
    for atomSetMapping in residueMapping.atomSetMappings:
      serials2 = list(atomSetMapping.atomSetSerials)
      serials2.sort()
      if serials2 == serials:
        mappings.append([atomSetMapping, atomSets])
  
  controlData = {'findFirstMeasurement':('shiftDifferences', 'hExchRates',
                                         'hExchProtections', 'shiftAnisotropies',
                                         't1s', 't1Rhos', 't2s', 'jCouplings',
                                         'noes', 'rdcs', 'dipolarRelaxations'),
                 'findFirstDerivedData':('isotropicS2s', 'spectralDensities',
                                         'pkas','datums'),
                 'findFirstPeakDimContrib':('peakDimContribs',)
                }
  for funcName in controlData:
    for attrName in controlData[funcName]:
      for objectA in list(resonanceA.__dict__.get(attrName)):
        objectB = getattr(objectA.parent, funcName)(resonance=resonanceB)
        if objectB is not None:
          objectA = mergeObjects(objectB, objectA)
  
  # handle peakDimContribNs separately .attributes
  attrName = 'peakDimContribNs'
  for objectA in list(resonanceA.__dict__.get(attrName)):
    testKey = set(objectA.__dict__['resonances'])
    testKey.remove(resonanceA)
    testKey.add(resonanceB)
    testKey = frozenset(testKey)
    objectB = objectA.parent.findFirstPeakDimContribN(resonances=testKey)
    
    if objectB is not None:
      objectA = mergeObjects(objectB, objectA)
  
  resonanceA.setCovalentlyBound([])
  resonanceB.setCovalentlyBound([])
        
  # merge shifts in the same shiftlist
  # NB must be done after other measurements 
  for shiftA in resonanceA.shifts:
    for shiftB in resonanceB.shifts:
      if shiftA.parentList is shiftB.parentList:
        shiftA = mergeObjects(shiftB,shiftA)

  # Get rid of duplicate appData
  for appData in resonanceA.applicationData:
    matchAppData = resonanceB.findFirstApplicationData(application=appData.application,
                                                       keyword=appData.keyword)
    if matchAppData:
      resonanceB.removeApplicationData(matchAppData)
  
  mergeObjects(resonanceB, resonanceA)
  
  # Must be after resonance merge, so that links to peaks are properly set
  for shiftA in resonanceA.shifts:
    averageShiftValue(shiftA)
  
  # Assign names will be merged, but if assigned we only want the correct ones 
  if resonanceA.resonanceSet:
    assignNames = []
    for atomSet in resonanceA.resonanceSet.atomSets:
      assignNames.append( atomSet.name )
      
    resonanceA.setAssignNames(assignNames)  
  
  for atomSetMapping, atomSets in mappings:
    updateAtomSetMapping(atomSetMapping, atomSets)
  
  getBoundResonances(resonanceA, recalculate=True)
  updateResonanceAnnotation(resonanceA)
  
  setupAssignmentNotifiers()
  
  return resonanceA

def setupAssignmentNotifiers():
  """Descrn: Set up the notification calls to automatically update annotations
             and quick shift lookups when assignments change.
     Inputs: None
     Output: None
  """

  assignmentNotifiers(Implementation.registerNotify)
  
def removeAssignmentNotifiers():
  """Descrn: Remove the notification calls to automatically update annotations
             and quick shift lookups when assignments change.
     Inputs: None
     Output: None
  """

  assignmentNotifiers(Implementation.unregisterNotify)


def assignmentNotifiers(notify):

  for func in ('__init__','delete','setScalingFactor','setDataDimRef', \
               'setPeakDimContribs','addPeakDimContrib','removePeakDimContrib'):
    notify(updateComponentShifts, 'ccp.nmr.Nmr.PeakDimComponent',func)
  
  notify(updatePeakDimShifts,   'ccp.nmr.Nmr.PeakDim', 'setPosition')
  notify(updatePeakDimShifts,   'ccp.nmr.Nmr.PeakDim', 'setNumAliasing')
  
  notify(updateContribPeakDimAnnotation, 'ccp.nmr.Nmr.PeakDimContrib', '__init__')
  notify(updateContribPeakDimAnnotation, 'ccp.nmr.Nmr.PeakDimContrib', 'delete')
  
  for func in ('addResonance','removeResonance','setResonances','__init__','delete'):
    notify(updateResonanceSetAnnotation, 'ccp.nmr.Nmr.ResonanceSet', func)
  
  notify(updateResonanceAnnotation, 'ccp.nmr.Nmr.Resonance', 'setName')
  
  notify(updateResidueAnnotation, 'ccp.molecule.MolSystem.Residue', 'setSeqCode')
  
  for func in ('__init__','setValue','delete'):
    notify(setQuickShiftList, 'ccp.nmr.Nmr.Shift',func)
  
  notify(updatePeakShifts, 'ccp.nmr.Nmr.Peak', 'setFigOfMerit')

  for func in ('delete','__init__','setWeight','setPossibility'):
    notify(updateResidueProbAnnotation, 'ccp.nmr.Nmr.ResidueProb', func)

def updateAtomSetMapping(atomSetMapping, atomSets=None):
  """Descrn: Refresh an AtomSetMapping according to the current assignment status.
             AtomSets optionally passed into increase speed
     Inputs: Analysis.AtomSetMapping, List of Nmr.AtomSets
     Output: None
  """

  if not atomSets:
    atomSets = list(atomSetMapping.atomSets)
  else:
    atomSets = list(atomSets)

  if not atomSets:
    # nothing to be done
    return
  
  resSerials = []
  if atomSetMapping.mappingType == 'ambiguous':
    for atomSet in atomSets:
      for resonanceSet in atomSet.resonanceSets:
        if len(resonanceSet.atomSets) == 1:
          # must be stereo or simple
          resSerials.append(resonanceSet.findFirstResonance().serial)

    if len(resSerials) < 2:
      resSerials = []
  
  elif atomSetMapping.mappingType == 'nonstereo':
    for resonanceSet in atomSets[0].resonanceSets:
      if len(resonanceSet.atomSets) > 1:
        # must be non-stereo
        for resonance in resonanceSet.resonances:
          letter1 = getAmbigProchiralLabel(resonance)
          letter2 = atomSetMapping.name[-1]
          if letter2 == '*':
            if letter1 == atomSetMapping.name[-2]:
              resSerials.append(resonance.serial)
              break
          
          elif letter1 == atomSetMapping.name[-1]:
            resSerials.append(resonance.serial)
            break

  else:
    for resonanceSet in atomSets[0].resonanceSets:
      if len(resonanceSet.atomSets) == 1:
        # must be stereo or simple
        resSerials.append(resonanceSet.findFirstResonance().serial)

  atomSetMapping.setResonanceSerials( resSerials )
  
def getAmbigProchiralLabel(resonance):
  """Descrn: Deterimine if an ambigous prochiral resonance (non-stereospecifically assigned)
             Has an "a" label or a "b" label. "a" is reserved for the upfield proton and any
             other nulceus bound to it.
     Inputs: Nmr.Resonance
     Output: Character
  """

  letter = ''
  if hasattr(resonance, 'onebond'):
    del resonance.onebond

  resonanceSet = resonance.resonanceSet
  
  if resonanceSet:
    if resonance.isotopeCode == '1H':
      data = []
      for resonance2 in resonanceSet.sortedResonances():
        if resonance2.shifts:
          data.append( ('%f%d' % (resonance2.findFirstShift().value,resonance2.serial),resonance2) )
        else:
          data.append( (resonance2.serial,resonance2) )
 
      data.sort()
      resonances = [x[1] for x in data]
      i = resonances.index(resonance)
      letter = chr(ord('a')+i)

    else:
      resonance2 = getOnebondResonance(resonance, isotopeCode='1H') 
 
      if resonance2 and resonance2.resonanceSet and (len(resonance2.resonanceSet.atomSets) > 1):
        letter = getAmbigProchiralLabel(resonance2)
        resonance2.onebond = resonance
      
      elif (len(resonanceSet.resonances) > 1) and (len(resonanceSet.atomSets) > 1):
        for resonance2 in resonanceSet.resonances:
          if resonance2 is not resonance:
            resonance3 = getOnebondResonance(resonance2)
            if resonance3 and resonance3.resonanceSet and (len(resonance3.resonanceSet.atomSets) > 1):
              letter = 'b'
            break
             
      if not letter:
        data = []
        for resonance2 in resonanceSet.resonances:
          if resonance2.shifts:
            data.append( (resonance2.findFirstShift().value,resonance2) )
          else:
            data.append( (resonance2.serial,resonance2) )
 
        data.sort()
        resonances = [x[1] for x in data]
        i = resonances.index(resonance)
        letter = chr(ord('a')+i)       
    
  return letter

def getOnebondResonance(resonance, isotopeCode=None):
  """Descrn: Find any resonance that may have a single bond connetion to the input resonance
             Option to specify the isotope type
     Inputs: Nmr.Resonance, Nmr.Resonance.isotopeCode
     Output: Nmr.Rssonance
  """
  
  resonances = getBoundResonances(resonance)
  if resonances:
    if isotopeCode:
      for resonance1 in resonances:
        if resonance1.isotopeCode == isotopeCode:
          return resonance1
    
    else:
      return resonances[0]
  
  resonance2 = None
  
  for contrib in resonance.peakDimContribs:
    peakDim      = contrib.peakDim
    expDimRef1   = peakDim.dataDimRef.expDimRef
    expTransfers = expDimRef1.expTransfers

    for expTransfer in expTransfers:
      if expTransfer.transferType in ('onebond','CP'):
        expDimRef2 = None

        for expDimRef in expTransfer.expDimRefs:
          if expDimRef is not expDimRef1:
            expDimRef2 = expDimRef
            break

        if expDimRef2:
          if (not isotopeCode) or (isotopeCode in expDimRef2.isotopeCodes):
            for peakDim2 in peakDim.peak.peakDims:
              if peakDim2.dataDimRef and (peakDim2.dataDimRef.expDimRef is expDimRef2):
                for contrib2 in peakDim2.peakDimContribs:
                  if (not isotopeCode) or (contrib2.resonance.isotopeCode == isotopeCode):
                    resonance2 = contrib2.resonance
 
                break
              
    if resonance2:
      break   

  return resonance2
  
def getBoundResonances(resonance, recalculate=False, contribs=None, doWarning=False):
  """Descrn: Find all resonances that have a single bond connection to the input resonance
             Option to recalculate given assignment status (e.g. if something changes)
             Option to specify peakDimContribs to search
     Inputs: Nmr.Resonance, Boolean, List of Nmr.PeakDimContribs
     Output: List of Nmr.Resonances
  """
  
  if (not recalculate) and resonance.covalentlyBound:
    return list(resonance.covalentlyBound)
    
  atomResonances = {} # Linked by bound atoms irrespective of spectra
  resonanceSet   = resonance.resonanceSet
  
  funnyResonances = set()

  if resonanceSet:
    #residue  = resonanceSet.findFirstAtomSet().findFirstAtom().residue
    atomSets = resonanceSet.atomSets

    for atomSet in atomSets:
      #for atom in atomSet.atoms:
      atom = atomSet.findFirstAtom()
      
      for atom2 in getBoundAtoms(atom):
        atomSet2 = atom2.atomSet
       
        if atomSet2 and atomSet2.resonanceSets:
          if len(atomSets) > 1:
            chemAtomSet = atom2.chemAtom.chemAtomSet
            if chemAtomSet:
              if chemAtomSet.isProchiral:
                continue
              if chemAtomSet.chemAtomSet and chemAtomSet.chemAtomSet.isProchiral:
                continue # LEU CD-HD*, VAL CG-HG*
      
          for resonanceSet2 in atomSet2.resonanceSets:
            for resonance2 in resonanceSet2.resonances:
              if resonance2 is not resonance: # should not happen
                atomResonances[resonance2] = True
              else:
                if resonance not in funnyResonances:
                  print 'WARNING: in getBoundResonances(): resonance %d tried to be linked to itself' % resonance.serial
                  funnyResonances.add(resonance)

  resonances = atomResonances.keys()

  if not contribs:
    contribs = resonance.peakDimContribs

  expResonances = set()
  for contrib in contribs:
    peakDim      = contrib.peakDim
    expDimRef1   = peakDim.dataDimRef.expDimRef
    expTransfers = expDimRef1.expTransfers

    for expTransfer in expTransfers:
      if expTransfer.transferType in ('onebond','CP'):
        expDimRef2 = None

        for expDimRef in expTransfer.expDimRefs:
          if expDimRef is not expDimRef1:
            expDimRef2 = expDimRef
            break

        if expDimRef2:
          for peakDim2 in peakDim.peak.peakDims:
            if peakDim2.dataDimRef and (peakDim2.dataDimRef.expDimRef is expDimRef2):
              expBound = set()
 
              for contrib2 in peakDim2.peakDimContribs:
                if (not contrib.peakContribs) and (not contrib2.peakContribs):
                  resonance2 = contrib2.resonance
                  isFromAtoms = atomResonances.get(resonance2)
                  
                  if (resonance is not resonance2) and (isFromAtoms is None):
                    expBound.add(resonance2)
 
                else:
                  for peakContrib in contrib.peakContribs:
                    if peakContrib in contrib2.peakContribs:
                      resonance2 = contrib2.resonance
                      isFromAtoms = atomResonances.get(resonance2)
                      
                      if (resonance is not resonance2) and (isFromAtoms is None):
                        expBound.add(resonance2)

                      break
                      
 
              if len(expBound) > 1:
                # Ambiguity
                for bound in expBound:
                  # Go with the previously linked one
                  if bound in resonance.covalentlyBound:
                    expResonances.add(bound)
                    break
                 
              else:
                expResonances.update(expBound)
  
               
  resonances.extend(list(expResonances))
 
  #if doWarning and (resonance.isotopeCode == '1H') and (len(resonances) > 1):
  #  pass
 
  if resonances:
    resonance.setCovalentlyBound(resonances)
  else:
    resonance.setCovalentlyBound([])
     
  return resonances

def updateResonanceAnnotation(resonance):
  """Descrn: Update the annotations for the peaks assigned to a given resonance
     Inputs: Nmr.Resonance
     Output: None 
  """
  
  if hasattr(resonance,'guiName'):
    del resonance.guiName

  if hasattr(resonance,'label'):
    del resonance.label
  
  makeResonanceGuiName(resonance)
      
  for contrib in resonance.peakDimContribs:
    contrib.peakDim.setAnnotation( makePeakDimAnnotation(contrib.peakDim) )

  if hasattr(resonance, 'onebond'):
    updateResonanceAnnotation(resonance.onebond)

def updatePeakDimShifts(peakDim):
  """Descrn: Update the shifts of resonances assigned to
             a peakDim if that peakDim changes
     Inputs: Nmr.PeakDim
     Output: None
  """

  for contrib in peakDim.peakDimContribs:
    updateResonShift(contrib.resonance,peakDim)
  
def updatePeakShifts(peak):
  """Descrn: Update the shifts of resonances assigned to a peak.
             Required if the peak's figure of merit changes
     Inputs: Nmr.Peak
     Output: None
  """

  for peakDim in peak.peakDims:
    for contrib in peakDim.peakDimContribs:
      updateResonShift(contrib.resonance,peakDim)

def updateComponentShifts(component):
  """Descrn: Update the shifts of resonances assigned to the contributions
             of a particular peak dim component. Needs to be set because for
             a non-main component the bare peak dim position is not
             representative of the true shift, being a linear combination of
             ppm and coupling.
     Inputs: Nmr.PeakDimComponent
     Output: None
  """

  peakDim = component.peakDim
  for contrib in peakDim.peakDimContribs:
    updateResonShift(contrib.resonance,peakDim)


def updateContribPeakDimAnnotation(contrib):
  """Descrn: Updates annotation string for the peak dimension of a given
             contribution according to its assignment status
     Inputs: Nmr.PeakDimContrib
     Output: None
  """

  peakDim = contrib.peakDim
  if not peakDim.isDeleted:
    makePeakDimAnnotation(peakDim)
  
  resonance = contrib.resonance  
  if not resonance.isDeleted:
    getBoundResonances(resonance, recalculate=True)
    updateResonShift(resonance, peakDim)

def updateResonanceSetAnnotation(resonanceSet):
  """Descrn: Update the annotations for the peaks assigned to a resonanceSet's resonances
     Inputs: Nmr.ResonanceSet
     Output: None 
  """
  
  for resonance in resonanceSet.resonances:
    if not resonance.isDeleted: 
      getBoundResonances(resonance, recalculate=True, contribs=None)
      updateResonanceAnnotation(resonance)

def updateResidueAnnotation(residue):
  """Descrn: Update the annotations for the peaks assigned to a residues resonances
     Inputs: MolSystem.Residue
     Output: None 
  """

  for atom in residue.atoms:
    if atom.atomSet:
      for resonanceSet in atom.atomSet.resonanceSets:
        updateResonanceSetAnnotation(resonanceSet)

def updateResidueProbAnnotation(residueProb):
  """Descrn: Update the annotations for the peaks assigned to a resonances
             within a apin system that has a tentative assignment.
     Inputs: Nmr.ResidueProb
     Output: None 
  """

  for resonance in residueProb.resonanceGroup.resonances:
    updateResonanceAnnotation(resonance)
 
def updateResonShift(resonance,peakDim):
  """Descrn: Update the shift values (and error) for a given resonance
             given assignment to a given peak dimension. The shift list is approriate
             to the peakDim's experiment. Note that shift to peak and shift to peak
             dim links are also set.
     Inputs: Nmr.Resonance, Nmr.PeakDim
     Output: None
  """

  peak       = peakDim.peak
  peakList   = peak.peakList
  shiftList  = peakList.dataSource.experiment.shiftList
  
  if not shiftList:
    return
  
  dataDimRef = peakDim.dataDimRef
  if not dataDimRef:
    return
  
  if peakDim.isDeleted:
    shift = resonance.findFirstShift(parentList=shiftList)
    if shift:
      averageShiftValue(shift)
    return  
  
  unit  = dataDimRef.expDimRef.unit or 'ppm' # 1D shapes fix default
  value = peakDim.realValue
  
  if value is None:
    return
    
  if shiftList.unit != unit:
    shiftValue = unit_converter[(unit,shiftList.unit)](value,dataDimRef)
  else:
    shiftValue = value
     
  # does the resonance have a shift in the current shift list 
  shift = resonance.findFirstShift(parentList=shiftList)
  
  if shift is None:
    shift = shiftList.newShift(value=shiftValue, resonance=resonance)
  
  averageShiftValue(shift) 
          
def averageShiftValue(shift, simulatedPeakScale=0.01):
  """Descrn: Calculates the value and error for a given shift based upon the
             peaks to which its resonance is assigned. Also sets links to
             appropriate peaks and peak dims. Optional float to scale simulated
             peak contributions (normally so that they have much less influence)
     Inputs: Nmr.Shift, Float
     Output: Float (shift.value)
  """

  hasApp = hasattr(shift.root, 'application')
  shiftList = shift.parentList
  experiments = shiftList.experiments
  resonance = shift.getResonance()
  peakDimContribs = resonance.peakDimContribs
  sum1  = 0.0
  sum2  = 0.0
  N     = 0.0
  mean  = 0.0
  mean2 = 0.0
  sigma2= 0.0
  sigma = 0.0
  peakDims = []
  peaksDict = {}

  for contrib in peakDimContribs:
    peakDim = contrib.peakDim
    peak = peakDim.peak
    
    if peak.figOfMerit == 0.0:
      continue
      
    peakList = peak.peakList
    experiment = peakList.dataSource.experiment
    if experiment not in experiments:
      continue
      
    if peakDim.peakDimComponents:
      if contrib.peakDimComponent:
        continue # Coupling only, not main shifts
      
      # Assume for now that the mean of the main component samples is OK
        
      #else:
      #  Can contribute to shift if coupling is considered
      #  Take mean of positions in peakCluster
      #  check if we have symmetric scaling factors
      #  which cluster though?
 
    if hasApp:
      analysisDataDim = peakDim.dataDim.analysisDataDim
      if analysisDataDim:
        weight = analysisDataDim.chemShiftWeight
      
      else:
        weight = 1.0
        
    else:
      weight = 1.0
 
    if peakList.isSimulated:
      weight *= simulatedPeakScale
 
    peakDims.append(peakDim)
    peaksDict[peak] = True
 
    # would have to use .realValue
    # if not eliminating components
    value = peakDim.value
    vw    = value * weight
    sum1 += vw
    sum2 += value * vw
    N    += weight

  if N > 0.0:
    mean  = sum1/N
    mean2 = sum2/N
    sigma2= abs(mean2 - (mean * mean))
    sigma = sqrt(sigma2)
    
  else:
    # resonance has run out of contribs
    # - leave it be, even if orphaned
    # or all dataDimWeighting are zero
    shift.setError( 0.0 )
    return
   
  if shift is not None:
    shift.setValue( mean )
    shift.setError( sigma )
    shift.setPeaks( peaksDict.keys() )
    shift.setPeakDims( peakDims )

  return mean  


def makePeakDimAnnotation(peakDim):
  """Descrn: Makes an annotation string for a given peak dimension according to its assignment status
     Inputs: Nmr.PeakDim
     Output: String (Nmr.PeakDim.annotation)
  """
  
  peakDim.setAnnotation(None)

  chainCode, seqId, name = getPeakDimAtomTuple(peakDim)
    
  annotation = '%s%s%s' % (chainCode,seqId,name)
  
  if len(annotation) > 80:
    annotation = '**TooLong!**'
  
  peakDim.annotation = annotation or None
  
  if peakDim.root.currentAnalysisProject:
    makePeakAnnotation(peakDim.peak)

  return annotation


def getPeakDimAtomTuple(peakDim):
  """Descrn: Give a tupe of string identifiers for a peakDim indicating, chain, residue and atomic assignment
     Inputs: Nmr.PeakDim
     Output: 3-Tuple of Words
  """

  contribs = peakDim.peakDimContribs
  Ncontribs = len(contribs)

  if Ncontribs < 1:
    if not peakDim.dataDimRef:
      dataDim = peakDim.dataDim
      if dataDim.className != 'FreqDataDim':
        index = int(peakDim.position or 1) -1
        value = dataDim.pointValues[index]
        return ('','','%s' % value)

    else:
      return ('','','')
  
  analysisProject = peakDim.root.currentAnalysisProject
  if analysisProject:
    sysAnno = analysisProject.doSpinSystemAnnotations
    assAnno = analysisProject.doAssignmentAnnotations
    chnAnno = analysisProject.doChainAnnotations
    oneAnno = False
    numAnno = True
  else:
    sysAnno = True
    assAnno = True
    chnAnno = False
    oneAnno = False
    numAnno = True

    
  chemAtomSetDict = {}

  residues = []
  atoms  = []
  chains = []
  for contrib in contribs:
    resonance = contrib.resonance
    resonanceGroup = resonance.resonanceGroup
    resonanceSet = resonance.resonanceSet
    myChain = ''
    myResidue = ''
    myAtom  = makeResonanceGuiName( resonance, fullName=False )

    if resonanceSet:
      atomSet = resonanceSet.findFirstAtomSet()
      atom = atomSet.findFirstAtom()
      residue = atom.residue
      chemAtomSet = atom.chemAtom.chemAtomSet
      
      key = (residue, chemAtomSet)
      if chemAtomSetDict.has_key(key):
        index = chemAtomSetDict[key]
        if index < len(atoms):
          if len(atomSet.atoms) > 1:
            atoms[index] = myAtom[:-2] + '*'
          else:
            atoms[index] = myAtom[:-1] + '*'

        continue
      
      chemAtomSetDict[key] = len(atoms)
      
      if assAnno:
        if chnAnno:
          myChain = residue.chain.code
        
        if oneAnno:
          resCode = residue.chemCompVar.chemComp.code1Letter or '?'
        else:
          resCode = getResidueCode(residue)
          
        if numAnno:
          myResidue = str(residue.seqCode) + resCode
        
        else:  
          myResidue = resCode + str(residue.seqCode)  

      elif sysAnno and  resonanceGroup:
        residue = resonanceGroup.residue

        if residue:
          if chnAnno:
            myChain = residue.chain.code
         
          if oneAnno:
            resCode = residue.chemCompVar.chemComp.code1Letter or '?'
          else:
            resCode = getResidueCode(residue)  
                    
          if numAnno:
            myResidue = '%d%s' % (residue.seqCode, resCode)
          else:
            myResidue = '%s%d' % (resCode, residue.seqCode, )
           
        
        elif resonanceGroup.ccpCode:
          myResidue = '{%d}' % resonanceGroup.serial + resonanceGroup.ccpCode
        
        else:
          myResidue = '{%d}' % resonanceGroup.serial

    elif resonanceGroup:       
      if sysAnno:
        myResidue = '{%d}' % resonanceGroup.serial
        residue = resonanceGroup.residue
        if residue:
          myResidue = '%d' % residue.seqCode
          
          if chnAnno:
            myChain = residue.chain.code
            
          if oneAnno:
            resCode = residue.chemCompVar.chemComp.code1Letter or '?'
          else:
            resCode = getResidueCode(residue)  
             
          if numAnno:
            myResidue += resCode
          else:
            myResidue = resCode + myResidue
        
        elif resonanceGroup.residueProbs:
          resTexts = []
          resSeqs = []
          resCodes = set()
 
          for residueProb in resonanceGroup.residueProbs:
            if not residueProb.weight:
              continue
            
            residue = residueProb.possibility
            seq = residue.seqCode
         
            if oneAnno:
              resCode = residue.chemCompVar.chemComp.code1Letter or '?'
            else:
              resCode = getResidueCode(residue)  
                    
            if numAnno:
              resText = '%d?%s' % (seq, resCode)
            else:
              resText = '%s%d?' % (resCode, seq)

            resTexts.append(resText)
            resSeqs.append('%d?' % seq)
            resCodes.add(resCode)
 
          if len(resCodes) == 1:
            myResidue = '/'.join(resSeqs) + resCodes.pop()
          else:
            myResidue = '/'.join(resTexts)
        
        elif resonanceGroup.ccpCode:
          if numAnno:
            myResidue += resonanceGroup.ccpCode
          else:
            myResidue = resonanceGroup.ccpCode + myResidue
    
    chains.append( myChain )
    residues.append( myResidue )
    atoms.append ( myAtom  )

  # we always have contribs & atoms at this point
  # - otherwise would return before now
  
  if not chains:
    return ('','','')

  
  chainCode = chains[-1]
  residue  = residues[-1]

  if len(atoms) == 1:
    atom = atoms[0]
    
  else:  
    atom      = atoms[-1]
    atomLen   = len(atom)
    
    if chains[0] != chainCode:
      if len(chains) == 2:
        chainCode = '(%s)' % ('/'.join([c or '?' for c in chains]))
      else:
        chainCode = '?'
 
    if residues[0] != residue:
      if len(residues) == 2:
        residue = '(%s)' % ('/'.join([s or '?' for s in residues]))
      else:
        residue = '{*}'

    for i in range(len(atoms[:-1])):
      if len(atoms[i]) > atomLen:
        atomLen = len(atoms[i])
        atom = atoms[i]
 
    common = 0
    for i in range(atomLen):
      for atom0 in atoms:
        if i >= len(atom0) or ( atom0[i] != atom[i]):
          break
        if atom0[i] == '[':
          common += 1
          break
 
      else:
        common += 1
        continue
 
      break
 
    atom = atoms[0][:common]
    if atom == atoms[0]:
      pass
      
    elif atom and (atom[-1] == '['):
      common -= 1
      atom = atom[:-1]
      atom += '(%s)' % ('/'.join([x[common:] for x in atoms]) )
    
    elif (common == atomLen-1):
      atom += '*' 
 
    else:
      atom = '(%s)' % ('/'.join(atoms) )

  if not numAnno:
    if chainCode:
      chainCode += ':'
   
  else:
    if oneAnno:
      residue += ' '

  return chainCode, residue, atom 
  
def makeResonanceGuiName(resonance, fullName=True, doAtoms=None):
  """Descrn: Give the name of a resonance for GUIs. Either full identifier or
             just the atom type name (if any), Option to force the display
             of atom assignements set doAtoms to Ture/False
     Inputs: Nmr.Resonance, Boolean, Boolean
     Output: Word
  """

  molSysAnno = False
  assAnno    = True
  chnAnno    = False
  
  analysisProject = resonance.root.currentAnalysisProject
  if analysisProject:
    chnAnno    = analysisProject.doChainAnnotations
    molSysAnno = analysisProject.doMolSysAnnotations
    assAnno    = analysisProject.doAssignmentAnnotations
  
  if doAtoms is not None:
    assAnno = doAtoms
    
  if not fullName:
    if not assAnno:
      return '[%d]' % resonance.serial
    else:
      if hasattr(resonance, 'label'):
        return resonance.label
      else:  
        return getResonanceName(resonance)

  if hasattr(resonance, 'guiName'):
    return resonance.guiName

  (molSystem, chain, residue, name) = getResonanceAtomTuple(resonance)

  if not assAnno:
    name = '[%d]' % resonance.serial

  if molSysAnno:
    molSystem = molSystem+':'
  else:
    molSystem = ''
  if not chnAnno:
    chain = ''
  
  guiName = '%s%s%s%s' % (molSystem,chain,residue,name)
  resonance.guiName = guiName
  resonance.label = name
  
  return guiName
  
def getResonanceAtomTuple(resonance):
  """Descrn: Give a tupe of string identifiers for a resonance
             indicating, chain, residue and atomic assignment
     Inputs: Nmr.Resonance
     Output: Tuple of Words (MolSystem.Chain.code,
             MolSystem.Residue identifier, Nmr.Resonance identifier)
  """
  
  molSystemCode = ''
  chainCode = ''
  res   = ''
  name  = getResonanceName(resonance)

  if resonance.resonanceSet:
    residue = getResonanceResidue(resonance)
    chain = residue.chain
    chainCode = chain.code
    molSystemCode = chain.molSystem.code
    res = str(residue.seqCode) + getResidueCode(residue)
    
  elif hasattr(resonance, 'resonanceGroup'): # Not FixedResonance
    spinSystem = resonance.resonanceGroup
    
    if spinSystem:
      residue = spinSystem.residue
      ccpCode = spinSystem.ccpCode
      residueProbs = [rp for rp in spinSystem.residueProbs if rp.weight > 0.0]
 
      if residue:
        sysChain = residue.chain
        chainCode = sysChain.code
        molSystemCode = sysChain.molSystem.code
        res = str(residue.seqCode) + getResidueCode(residue)

      elif residueProbs:
        resTexts = []
        resSeqs = []
        resCodes = set()
        
        for residueProb in residueProbs:
          residue = residueProb.possibility
          seq = residue.seqCode
          code = getResidueCode(residue)
          
          resTexts.append('%d?%s' % (seq,code))
          resSeqs.append('%d?' % seq)
          resCodes.add(code)
        
        if len(resCodes) == 1:
          res = '/'.join(resSeqs) + resCodes.pop()
        else:
          res = '/'.join(resTexts)
        
      elif ccpCode:
        res  = '{%d}%s' % (spinSystem.serial,ccpCode)
 
      else:
        res  = '{%d}' % (spinSystem.serial)
   
  return (molSystemCode, chainCode, res, name)


def getShiftLists(nmrProject):
  """Descrn: Get all the shift lists associated with an NMR project.
     Inputs: Nmr.NmrProject
     Output: Nmr.ShiftList
  """

  if not nmrProject:
    return []

  sls = [(sl.serial, sl) for sl in nmrProject.findAllMeasurementLists(className='ShiftList')]
  sls.sort()
  
  return [x[1] for x in sls]

def getResonanceName(resonance):
  """Descrn: Generate a name for a resonance or fixedResonance based upon its assignment
     Inputs: Nmr.Resonance or NmrConstraint.FixedResonance
     Output: String
  """

  if resonance.className == 'FixedResonance':
    resonance2 = resonance.getResonance()
    if resonance2 is None:
      return getFixedResonanceName(resonance)
    else:
      resonance = resonance2

  if hasattr(resonance, 'label'):
    return resonance.label

  name = '[%d]' % resonance.serial
  if hasattr(resonance, 'resonanceSet') and resonance.resonanceSet:
    resonanceSet = resonance.resonanceSet
    atomSets     = tuple(resonanceSet.atomSets)
    name = makeAtomSetsGuiName(atomSets)
    if len(atomSets) > 1:
      name = name[:-1] + getAmbigProchiralLabel(resonance)
      if len(atomSets[0].atoms) > 1:
        name = name + '*'
    
  elif resonance.assignNames:
    assignNames = tuple(resonance.assignNames)
    if assignNames:
      N = len(assignNames)
      if N > 1:
        for i in range(N):
          name = assignNames[i] + name
          if i < (N-1):
            name = '|' + name
      else:
        name = resonance.assignNames[0] + name
  
  elif resonance.name and (resonance.name != 'r%d' % resonance.serial):
    name = '[%d:%s]' % (resonance.serial,resonance.name)

  resonance.label = name
              
  return name


def makeAtomSetsGuiName(atomSets):
  """Descrn: Give the name of a given set of atoms for GUIs
     Inputs: List of Nmr.AtomSets
     Output: Word
  """

  atomNames = []
  for atomSet in atomSets:
    for atom in atomSet.atoms:
      atomNames.append(atom.name)

  tryName = atomNames[0]
  end = ''
  for atomName in atomNames[1:]:
    size = len(atomName)
    i = 0
    n = min(size, len(tryName))
    while i < n and atomName[i] == tryName[i]:
      i +=1
    
    tryName = tryName[0:i]
    end = '*'
        
  name = tryName[:1] + tryName[1:].lower() + end
  
  return name

def getFixedResonanceName(resonance):
  """Descrn: Give the name for a fixedResonance, based upon a normal resonance
     Inputs: Nmr.Resonance
     Output: String
  """
  
  resonanceSet = resonance.resonanceSet
  if resonanceSet:
    atomSets = tuple(resonanceSet.atomSets)

    if len(atomSets) > 3: # Whole residue selections
      return '*'

    name = makeAtomSetsGuiName(atomSets)
    if len(atomSets) > 1:
      resonances = resonanceSet.sortedResonances()
      i = resonances.index(resonance)
      name = name[:-1] + chr(ord('a')+i)
      if len(atomSets[0].atoms) > 1:
        name = name + '*'

  else:
    name = '[%d]' % resonance.serial

  return name
  
def getResonanceResidue(resonance):
  """Descrn: Find the residue, if any, to which a resonance is assigned via atomSets etc
     Inputs: Nmr.Resonance
     Output: Nmr.Residue or None
  """

  residue = None
  if resonance.resonanceSet:
    residue = resonance.resonanceSet.findFirstAtomSet().findFirstAtom().residue
  
  return residue
  
def initResonance(resonance, doMerge=True):
  """Descrn: Initialise a resonance. If the resonance is assigned it is
             placed in a spin system if appropriate and its assignName is set.
             Optional argument to set whether merging spin systems is allowed.
             Typically this is not allowed upon load, but is allowed when
             assigning within Analysis.
     Inputs: Nmr.Resonance, Boolean
     Output: None
  """

  resonanceSet = resonance.resonanceSet
  
  if resonance.name == 'r%d' % resonance.serial:
    resonance.setName(None)
  
  if resonanceSet:
    atomSets   = tuple(resonanceSet.atomSets)
    atom       = atomSets[0].findFirstAtom()
    element    = atom.chemAtom.elementSymbol
    if resonance.isotopeCode[-len(element):] != element:
      msg = 'Resonance %d isotope-assignment mismatch: Resetting isotope' 
      print msg % resonance.serial
      
      resonance.isotopeCode = DEFAULT_ISOTOPES.get(element, 'unknown')
      getBoundResonances(resonance, recalculate=True, contribs=None)   
      
    spinSystem = findSpinSystem(resonance)
    if spinSystem:
      if resonance.resonanceGroup: # same as the spin system
        residue = atom.residue
        
        if spinSystem.residue is not residue:
          #assignSpinSystemResidue(spinSystem,residue)
              
          if doMerge:
            ccpCode = residue.molResidue.ccpCode
            spinSystems = list(resonance.nmrProject.findAllResonanceGroups(residue=residue))
            N = len(spinSystems)
            msg = 'There are %d separate %d%s spin systems. Merge together?'
            if (N > 1) and showOkCancel('Confirm', msg % (N,residue.seqCode,ccpCode)):
              assignSpinSystemResidue(spinSystem,residue)  
                
              for spinSystem1 in spinSystems[1:]:
                mergeSpinSystems(spinSystem1,spinSystems[0])
                
            else:
              assignSpinSystemResidue(spinSystem,residue)    
              
          else:
            assignSpinSystemResidue(spinSystem,residue)    
                           
      else:
        addSpinSystemResonance(spinSystem, resonance)

    assignResonanceType(resonance, atomSets)
    
  else:
    updateResonanceAnnotation(resonance)

  if not resonance.shifts:
    if resonance.peakDimContribs:
      for contrib in resonance.peakDimContribs:
        peakDim = contrib.peakDim
        experiment = peakDim.peak.peakList.dataSource.experiment
        
        if experiment.shiftList is None:
          shiftList = resonance.nmrProject.findFirstMeasurementList(className='ShiftList')
          if shiftList is None:
            shiftList = resonance.nmrProject.newShiftList(unit='ppm')
          experiment.setShiftList( shiftList )
        
        updateResonShift(resonance,peakDim)
        
  
def assignPeakDim(resonance, peakDim, atomSets=None, contrib=None, tolerance=None):
  """Descrn: Assigns a given peak dimension to a given resonance,
             via a given peakDim contribution if specified
             and assign the resonance to atom sets if specified
     Inputs: Nmr.Resonance, Nmr.PeakDim, List of Nmr.AtomSets,
             Nmr.PeakDimContrib, Float
     Output: Nmr.PeakDimContrib
  """

  contrib = assignResToDim(peakDim,resonance,contrib,tolerance)
    
  if atomSets:
    assignAtomsToRes(atomSets,resonance)
    
  return contrib
  
def assignAtomsToRes(atomSets,resonance,resonanceSet=None):
  """Descrn: Assign a resonance to given atom sets via a resonanceSet (optionally specified)
             Checks ensure that the resonance ends up in the correct spin system
     Inputs: List of Nmr.AtomSets, Nmr.Resonance, Nmr.ResonanceSet
     Output: Nmr.ResonanceSet
  """
  
  atomSets = list(atomSets)
  nmrProject = resonance.nmrProject
 
  chemAtomSetRef = None
  for atomSet in atomSets:
    atom = atomSet.findFirstAtom()
    if not setAssignmentMolSystem(atom.residue, resonance=resonance):
      return
    
    if len(atomSets) > 1:
      chemAtomSet = atom.chemAtom.chemAtomSet
      if chemAtomSet.chemAtomSet:
        chemAtomSet = chemAtomSet.chemAtomSet
      
      if not chemAtomSetRef:
        chemAtomSetRef = chemAtomSet
              
      #if (not chemAtomSet) or (not chemAtomSet.isProchiral) or (chemAtomSetRef is not chemAtomSet):
      if (not chemAtomSet) or (chemAtomSetRef is not chemAtomSet):
        info = [(aS, aS.findFirstAtom().residue) for aS in atomSets]
        data = ['%d%s %s' % (r.seqCode, r.ccpCode, aS.name) for aS, r in info]
        names = ','.join(data)
        msg  = 'Resonance can only be assigned to multiple sets of atoms if '
        msg += 'the sets are prochiral. This is not true for the input %s. ' % names
        msg += 'Assignment will be made to %s only' % data[0]
        showWarning('Assignment failed', msg)
        atomSets = [atomSets[0],]
        break
    
  if not resonanceSet:
    resonanceSet = findResonanceSet(resonance,atomSets)
  
  if resonance.isotopeCode:  
    if resonance.isotopeCode != 'unknown':
      element = re.match('\d+([A-Z]\D*)', resonance.isotopeCode).group(1)
      if element != atom.chemAtom.elementSymbol:
        data = (resonance.isotopeCode,atom.chemAtom.elementSymbol)
        msg  = 'A %s resonance cannot be assigned to %s atoms'
        showWarning('Assignment failed', msg % data)
        return
      
  oldResonanceSet = resonance.resonanceSet
  if oldResonanceSet and (oldResonanceSet is not resonanceSet):
    if len(oldResonanceSet.resonances) == 1:
      oldResonanceSet.delete()
    else:
      oldAtomSets   = list(oldResonanceSet.atomSets)
      oldResonances = list(oldResonanceSet.resonances)  
          
      oldResonances.remove(resonance)
      for atomSet in atomSets:
        if atomSet in oldAtomSets:
          oldAtomSets.remove(atomSet)
      
      oldResonanceSet.delete() 
      # Other half of a now split prochiral
      nmrProject.newResonanceSet(atomSets=oldAtomSets,
                                 resonances=oldResonances)
         
  if resonanceSet:
    resonances = list(resonanceSet.resonances)

    if not resonance in resonances:
      resonanceSet.addResonance(resonance)
      resonances.append(resonance)
      
      if len(resonances) > len(atomSets):
        residue = atomSets[0].findFirstAtom().residue
        aName = '/'.join([ass.name for ass in atomSets])
        data  = (len(resonances), residue.seqCode, residue.ccpCode, aName)
        msg   = 'There are more resonances (%d) than atoms sets for %d%s %s'
        showWarning('Redundant resonance', msg % data)
 
    for atomSet in resonanceSet.atomSets:
      if atomSet not in atomSets:
        resonanceSet.delete()
        resonanceSet = nmrProject.newResonanceSet(atomSets=atomSets,resonances=resonances)
        break
      
  else:
    resonanceSet = nmrProject.newResonanceSet(atomSets=atomSets,resonances=[resonance, ])

  initResonance(resonance)
  resonances = getBoundResonances(resonance, recalculate=True)
 
  if len(resonances) == 1:
    
    resonance2 = resonances[0]
    if not resonance2.resonanceSet:

      isotope    = resonance2.isotope
      if isotope:
        element  = isotope.chemElement.symbol
        
        atomDict = {}
        for atomSet in atomSets:
          for atom in getBoundAtoms(atomSet.findFirstAtom()):
            if atom.chemAtom.elementSymbol == element:
              atomDict[atom] = True
 
        atomSetDict = {}
        for atom in atomDict.keys():
          atomSet2 = atom.atomSet
          if atomSet2:
            atomSetDict[atomSet2] = True
 
        atomSets2 = atomSetDict.keys()
        if len(atomSets2) == 1:
          assignAtomsToRes(atomSets2,resonances[0])
 	 
  return resonanceSet  
  
def assignResToDim(peakDim,resonance=None,contrib=None,
                   tolerance=None, doWarning=True, peakContribs=None):
  """Descrn: Assign a resonance to a peak dimension, via a specified
             peakDimContrib if needed. Assigns a new resonance if none
             is input. Can also specify a set of peakContribs (grouped
             assigment possibilities) that the assignment relates to.
     Inputs: Nmr.PeakDim, Nmr.Resonance, Nmr.PeakDimContrib, Float
             Boolean, List of Nmr.PeakContribs
     Output: Nmr.PeakDimContrib
  """
  
  dataDimRef = peakDim.dataDimRef
  if not dataDimRef: # Is sampled
    return
  
  isotopeCode = dataDimRef.expDimRef.isotopeCodes[0]
  if resonance:
    resonanceSet = resonance.resonanceSet
    if resonanceSet:
      residue = resonanceSet.findFirstAtomSet().findFirstAtom().residue
      if not setAssignmentMolSystem(residue, peakDim=peakDim):
        return
    
  if resonance is None:
    resonance = peakDim.topObject.newResonance(isotopeCode=isotopeCode)
  else:
    if resonance.isotopeCode != isotopeCode:
      if resonance.isotopeCode != 'unknown':
        msg = 'Attempt to link %s resonance to %s dimension'
        #raise Exception(msg % (resonance.isotopeCode, isotopeCode))
        print msg % (resonance.isotopeCode, isotopeCode)
        return

    #resonance.isotopeCode = isotopeCode
    for checkContrib in peakDim.peakDimContribs:
      if checkContrib.resonance is resonance:
        if peakContribs:
          checkPeakContribs = list(checkContrib.peakContribs)
          checkPeakContribs.sort()
          peakContribs.sort()
          if peakContribs != checkPeakContribs:
            checkContrib.setPeakContribs(peakContribs)
        return checkContrib
 
  dataDim = dataDimRef.dataDim
  if not tolerance:
    tolerance = dataDim.analysisDataDim.assignTolerance

  positionB  = peakDim.realValue
  experiment = dataDim.dataSource.experiment
  shiftList  = experiment.shiftList
  
  if not shiftList:
    nmrProject = peakDim.topObject
    shiftList  = nmrProject.findFirstMeasurementList(className='ShiftList')
    
    if not shiftList:
      shiftList = nmrProject.newShiftList(name='ShiftList 1',
                                          details='Assignment Default',
                                          unit='ppm')
  
    experiment.shiftList = shiftList
  
  unit  = shiftList.unit
  # changed to equivalent and faster operation Rasmus 11/2/09
  shift = resonance.findFirstShift(parentList=shiftList)
  #shift = shiftList.findFirstShift(resonance=resonance)

  if shift:    
    positionA = shift.value
    if (positionB is None) or (abs(positionA - positionB) < tolerance):
      if contrib:
        contrib.delete()
      contrib = newPeakDimContrib(peakDim, resonance, peakContribs=peakContribs)
      
    else:
      n = findNumAliasing(dataDimRef, unit_converter[(unit,'point')](positionA,dataDimRef))
      if n != peakDim.numAliasing:
        sw = dataDim.numPointsOrig
        position  = peakDim.position + sw*n
        positionC = unit_converter[('point',unit)](position,dataDimRef)

        if abs(positionA - positionC) < tolerance:
          n = findNumAliasing(dataDimRef, position)

          if n != peakDim.numAliasing:
            if doWarning:
              if not showOkCancel('Confirm','Peak dimension will be unaliased'):
                return None
               
            if contrib:
              contrib.delete()
            contrib = newPeakDimContrib(peakDim, resonance,peakContribs=peakContribs)
            setPeakDimNumAliasing(peakDim, n, doWarning=doWarning)
 
          else:
            return None

        else:
          return None

      else:
        return  None
      
  else:
    if contrib:
      contrib.delete()
    contrib = newPeakDimContrib(peakDim, resonance,peakContribs=peakContribs)
 
  return contrib


def findSpinSystem(resonance):
  """Descrn: Find the spin system in which a resonance resides
             makes a new spin system if none is found
     Inputs: Nmr.Resonance
     Output: Nmr.ResonanceGroup
  """

  resonanceGroup = resonance.resonanceGroup
  resonanceSet   = resonance.resonanceSet
  if resonanceGroup:
    spinSystem = resonanceGroup
    
  elif resonanceSet:
    # find via residue
    residue     = resonanceSet.findFirstAtomSet().findFirstAtom().residue
    molResidue  = residue.molResidue
    molType     = molResidue.molType
    ccpCode     = molResidue.ccpCode
    nmrProject  = resonance.nmrProject
    spinSystem  = None
    spinSystems = nmrProject.findAllResonanceGroups(ccpCode=ccpCode, molType=molType)
    
    for trialSpinSystem in spinSystems:
      if trialSpinSystem.residue is residue:
        spinSystem = trialSpinSystem
        break
        
    if not spinSystem:
      spinSystem = nmrProject.newResonanceGroup()
      
  else:
    spinSystem = resonance.nmrProject.newResonanceGroup()

  return spinSystem
  
def assignSpinSystemResidue(spinSystem,residue=None, warnMerge=False):
  """Descrn: Connect a given spin system to a residue. Resonances in the spin
             system are assigned where possible. Also used to disconnect from
             a residue if Residue is None. Optionally merge spin systems
             assigned to same residue, given warning.
     Inputs: Nmr.ResonanceGroup, Nmr.Residue, Boolean, Boolean
     Output: Nmr.ResonanceGroup
  """

  for resonanceProb in spinSystem.resonanceProbs:
    resonanceProb.delete()

  if residue:
    #print 'assignSpinSystemResidue', residue.seqId
    nmrProject  = spinSystem.nmrProject
    molResidue  = residue.molResidue
    ccpCode     = molResidue.ccpCode
    molType     = molResidue.molType
    resDict     = {}
    
    for ss in nmrProject.resonanceGroups:
      if ss.residue:
        resDict[ss.residue] = ss
    
    if resDict.get(residue):
      if warnMerge:
        msg = 'There\'s an existing %d %s spin system. OK to merge?'
        
        if showYesNo('Beware', msg % (residue.seqCode,ccpCode)):
          ss = mergeSpinSystems(resDict[residue],spinSystem)
          spinSystem = ss
    
    spinSystem.setResidue(None)
    spinSystem.setCcpCode(ccpCode)
    spinSystem.setResidue(residue)
    spinSystem.setMolType(molType)
    
    for resonance in spinSystem.resonances:
      assignResonanceResidue(resonance,residue)

    residueN = residue.chain.findFirstResidue(seqId = residue.seqId-1)
    residueC = residue.chain.findFirstResidue(seqId = residue.seqId+1)
    
    if residueN:
      connSpinSystemN = findConnectedSpinSystem(spinSystem, delta=-1)
      assnSpinSystemN = resDict.get(residueN)
      if assnSpinSystemN:
        if connSpinSystemN and connSpinSystemN is not assnSpinSystemN:
          clearSeqSpinSystemLinks(connSpinSystemN, delta=1)
          makeSeqSpinSystemLink(assnSpinSystemN, spinSystem, delta=1)
        
      elif connSpinSystemN:
        assignSpinSystemResidue(connSpinSystemN, residueN, warnMerge=0)

    if residueC:
      connSpinSystemC = findConnectedSpinSystem(spinSystem, delta=1)
      assnSpinSystemC = resDict.get(residueC)
      if assnSpinSystemC:
        if connSpinSystemC and connSpinSystemC is not assnSpinSystemC:
          clearSeqSpinSystemLinks(connSpinSystemC, delta=-1)
          makeSeqSpinSystemLink(spinSystem, assnSpinSystemC, delta=1)
        
      elif connSpinSystemC:
        assignSpinSystemResidue(connSpinSystemC, residueC, warnMerge=0)
     
  else:
    spinSystem.setResidue(None)
    if warnMerge:
      msg = 'Remove sequential spin system links?'

      if getSeqSpinSystemLinks(spinSystem) and showYesNo('Query',msg):
        clearSeqSpinSystemLinks(spinSystem)

    for resonance in spinSystem.resonances:
      assignResonanceResidue(resonance,None)
  
  return spinSystem

def mergeSpinSystems(spinSystemB, spinSystemA):
  """Descrn: Merge the resonances from two spin systems into one spin system
     Inputs: Nmr.ResonanceGroup, Nmr.ResonanceGroup
     Output: Nmr.ResonanceGroup
  """

  if spinSystemB is spinSystemA:
    return spinSystemA
  
  if spinSystemB.isDeleted:
    return spinSystemA
  
  residueA = spinSystemA.residue
  if not residueA:
    spinSystemA.setResidue(spinSystemB.residue)
    spinSystemA.setCcpCode(spinSystemB.ccpCode)
    spinSystemA.setMolType(spinSystemB.molType)
    
  if not spinSystemA.ccpCode:
    if residueA:
      spinSystemA.setCcpCode(residueA.ccpCode)
    else:
      spinSystemA.setCcpCode(spinSystemB.ccpCode)
      
  if not spinSystemA.molType:
    if residueA:
      spinSystemA.setMolType(residueA.molResidue.molType)
    else:
      spinSystemA.setMolType(spinSystemB.molType)

  resonanceAssignments = {}
  for resonance in spinSystemA.resonances:
    resonanceSet = resonance.resonanceSet
    
    if resonanceSet:
      atomSets = list(resonanceSet.atomSets)
      atomSets.sort()
      resonanceAssignments[tuple(atomSets)] = resonance
  
  mergeList = []
  for resonance in spinSystemB.resonances:
    removeSpinSystemResonance(spinSystemB, resonance)
    addSpinSystemResonance(spinSystemA, resonance)
    resonanceSet = resonance.resonanceSet
    
    if resonanceSet:
      atomSets = list(resonanceSet.atomSets)
      atomSets.sort()
      resonanceA = resonanceAssignments.get(tuple(atomSets))
      
      if resonanceA:
        n = len(atomSets)
        if n == 1:
          mergeList.append((resonance, resonanceA))
        #elif len(resonanceSet.resonances) == n : # prochiral
  
  for residueProb in list(spinSystemB.residueProbs):
    residue = residueProb.possibility
    
    if not spinSystemA.findFirstResidueProb(possibility=residue):
      spinSystemA.newResidueProb(possibility=residue,
                                 weight=residueProb.weight)
                
  if mergeList:
    residue = spinSystemA.residue
    if residue:
      name = '%d%s' % (residue.seqCode,residue.ccpCode)
    else:
      name = '%s{%d}' % (spinSystemA.ccpCode or '',spinSystemA.serial)
  
    getName = makeResonanceGuiName
    resonanceText = ','.join([getName(r1,fullName=False) for r1,r2 in mergeList])
  
    msg = 'Merge duplicate %s resonances in spin system %s' % (resonanceText, name)
    if showYesNo('Query',msg): 
      for r1, r2 in  mergeList:
        mergeResonances(r1,r2)  

  for link in spinSystemB.findAllResonanceGroupProbs(linkType='sequential',isSelected=True):
    makeSeqSpinSystemLink(spinSystemA, link.possibility, delta=link.sequenceOffset)

  for link in spinSystemB.findAllFromResonanceGroups(linkType='sequential',isSelected=True):
    makeSeqSpinSystemLink(link.fromResonanceGroup, spinSystemA, delta=link.sequenceOffset)
  
  spinSystemB.delete()

  return spinSystemA

def addSpinSystemResonance(spinSystem, resonance):
  """Descrn: Add a resonance to a given spin system
     Inputs: Nmr.ResonanceGroup, Nmr.Resonance
     Output: List of Nmr.Resonances (belonging to the spin system)
  """

  residue = getResonanceResidue(resonance)

  if resonance in spinSystem.resonances:
    if residue is spinSystem.residue:
      return spinSystem.resonances

  if spinSystem.residue and residue:
    if residue != spinSystem.residue:
      assignResonanceResidue(resonance,spinSystem.residue)

  elif residue:
    spinSystem = assignSpinSystemResidue(spinSystem,residue)
    
  elif spinSystem.residue:
    assignResonanceResidue(resonance,spinSystem.residue)
 
  if resonance not in spinSystem.resonances:
    spinSystem.addResonance(resonance)
    updateResonanceAnnotation(resonance)
    
  return spinSystem.resonances

def assignResonanceType(resonance, atomSets=None, assignNames=None):
  """Descrn: Sets the assign names for a resonance according to given AtomSets or atom names
             without performing a real assignment. If no atom sets or asisgn names are given
             then all typing information is removed.
     Inputs: Nmr.Resonance, List of Nmr.AtomSets or None, List of Words or NOne
     Output: None
  """

  if not (atomSets or assignNames):
    if not resonance.resonanceSet:
      resonance.assignNames = []
      updateResonanceAnnotation(resonance)
    return

  isotope = resonance.isotopeCode
  atomNames = []
  
  for atomSet in atomSets or []:
    atom = atomSet.findFirstAtom()
    element = atom.chemAtom.elementSymbol
    
    if isotope[-len(element):] == element:
      name = atomSet.name
  
      if name not in atomNames:
        atomNames.append( name )
  
  if assignNames:
    atomNames.extend(assignNames)
        
  resonance.setAssignNames(atomNames)
  
  if resonance.resonanceSet:
    updateResonanceAnnotation(resonance)
    return
  
  if resonance.resonanceGroup:
    residue = resonance.resonanceGroup.residue
    if residue:
      atomSets = {}
      for atom in residue.atoms:
        atomSet = atom.atomSet
        
        if atomSet and (atomSet.name in atomNames):
          atomSets[atomSet] = True
          
      if atomSets:
        assignAtomsToRes(atomSets.keys(),resonance)
  
  updateResonanceAnnotation(resonance)

def setAssignmentMolSystem(residue,peakDim=None,resonance=None):
  """Descrn: Sets the MolSystem.Molsystem for all experiments with assignments to a given
             resonance and/or the experiment for a given peakDim
             Displays a warning if an assignment is made outside an experiment's
             list of molSystems.
     Inputs: MolSystem.Residue, Nmr.PeakDim, Nmr.Resonance
     Output: Boolean
  """

  molSystem    = residue.chain.molSystem
  peakDims     = []
  experiments  = {}
  experiments2 = {}
  if peakDim:
    peakDims = [peakDim]
  
  if resonance:
    for peakDimContrib in resonance.peakDimContribs:
      peakDims.append(peakDimContrib.peakDim)
  
  for peakDim2 in peakDims:
    experiment = peakDim2.peak.peakList.dataSource.experiment
    if experiment.molSystems:
      if molSystem not in experiment.molSystems:
        experiments[experiment] =  True

    else:
      experiments2[experiment] = True

  if experiments:
    expNames = ' '.join([e.name for e in experiments])
    msg  = 'Molecular system %s of assignment doesn\'t match\n' % molSystem.code
    msg += 'previous assignments for experiments '
    msg += '[%s]\nAssociate molecular system with experiments?' % expNames
    if showOkCancel('Warning', msg):
      for experiment in experiments.keys():
        experiment.addMolSystem(molSystem)
      for experiment in experiments2.keys():
        experiment.addMolSystem(molSystem)
    else:
      return None
  else:
    for experiment in experiments2.keys():
      if molSystem not in experiment.molSystems:
        experiment.addMolSystem(molSystem)
      
  return True
  

def findResonanceSet(resonance,atomSets):
  """Descrn: Find the resonance set, if any, that connects
             a resonance to given atomSets
     Inputs: Nmr.Resonance, List of Nmr.AtomSets
     Output: Nmr.ResonanceSet
  """

  atomSets = list(atomSets)
  resonanceSet = None
  combinedResonanceSet = None

  if len(atomSets) > 1:
    for tryResonanceSet in atomSets[0].resonanceSets:
      if tryResonanceSet in atomSets[1].resonanceSets:
        combinedResonanceSet = tryResonanceSet
  
  resonanceSet = resonance.resonanceSet
  if resonanceSet:
    atomSets.sort()
    atomSets2 = list(resonanceSet.atomSets)
    atomSets2.sort()
    
    if atomSets == atomSets2:
      resonanceSet = resonanceSet
    else:
      return combinedResonanceSet
      
  else:
    resonanceSet = combinedResonanceSet
 
  return resonanceSet
      
def newPeakDimContrib(peakDim, resonance, peakContribs=None):
  """Descrn: Make a peakDim to resonance assignment via a PeakDimContrib.
             Optional argument to specify which PeakContrib assignment
             possibilities the peakDim assignment relates to.
     Inputs: Nmr.PeakDim, Nmr.Resonance, List of Nmr.PeakContribs
     Output: Nmr.PeakDimContrib
  """

  if peakContribs is None:
    peakContribs = peakDim.peak.peakContribs

  if len(peakContribs) < 1:
    return peakDim.newPeakDimContrib(resonance=resonance)

  else:
    return peakDim.newPeakDimContrib(resonance=resonance,
                                     peakContribs=peakContribs)
                                     
  
  
def clearSeqSpinSystemLinks(spinSystem, delta=None):
  """Descrn: Remove sequential links for a spin system. A sequence offset may be specified
             otherwise all sequential links are removed.
     Inputs: Nmr.ResonanceGroup, Int
     Output: None
  """

  links = getSeqSpinSystemLinks(spinSystem, delta=delta)
  for link in links:
    link.delete()

def makeSeqSpinSystemLink(spinSystemA, spinSystemB, delta=1):
  """Descrn: Make a sequential link with a give offset between two spin systems.
             Assigning A to B with a delta of 1 assumes B is C-terminal/upstream of A
     Inputs: Nmr.ResonanceGroup, Nmr.ResonanceGroup, Int
     Output: Nmr.ResonanceGroupProb
  """

  if spinSystemA is spinSystemB:
    showWarning('Failure','Attempt to link spin system to itself.')
    return

  residueA = spinSystemA.residue
  residueB = spinSystemB.residue

  if residueA:
    idA = '%d %s' % (residueA.seqCode, residueA.ccpCode)
    residueC = residueA.chain.findFirstResidue(seqId=residueA.seqId + delta)
    if not residueC:
      if delta >= 0:
        d = '+%d' % delta
      else:
        d = '%d' % delta  
      showWarning('Failure','Impossible spin system link attempted: %s to i%s' % (idA,d))
      return

    #idC = '%d %s' % (residueC.seqCode, residueC.ccpCode)
    
    if residueC is not residueB:
      assignSpinSystemResidue(spinSystemB, residueC, warnMerge=False) 
  
  elif residueB:
    idB = '%d %s' % (residueB.seqCode, residueB.ccpCode)
    residueC = residueB.chain.findFirstResidue(seqId = residueB.seqId - delta)
    if not residueC:
      print 'Impossible spin system link attempted: %s to i - %d' % (idB,delta)
    else:
      assignSpinSystemResidue(spinSystemA, residueC, warnMerge=False) 
    
  
  clearSeqSpinSystemLinks(spinSystemA, delta=delta)
  clearSeqSpinSystemLinks(spinSystemB, delta=-delta)
  
  newLink = spinSystemA.newResonanceGroupProb(linkType='sequential',isSelected=True,
                                              possibility=spinSystemB, sequenceOffset=delta)
  
  return newLink

def getSeqSpinSystemLinks(spinSystem, delta=None):
  """Descrn: Get any sequential spin system links (resonanceGroupProbs).
             An optional sequence offset may be specified.
     Inputs: Nmr.ResonanceGroup, Int
     Output: List of Nmr.ResonanceGroupProbs
  """

  seqLinks = {}
  for link in spinSystem.findAllResonanceGroupProbs(linkType='sequential',isSelected=True):
    if delta is None:
      seqLinks[link] = None
    
    elif link.sequenceOffset == delta:
      seqLinks[link] = None

  for link in spinSystem.findAllFromResonanceGroups(linkType='sequential',isSelected=True):
    if delta is None:
      seqLinks[link] = None
    
    elif link.sequenceOffset == -delta:
      seqLinks[link] = None

  return seqLinks.keys()

def findConnectedSpinSystem(spinSystem, delta=-1):
  """Descrn: Find a spin system sequentially connected to the input one with given sequence offset.
     Inputs: Nmr.ResonanceGroup, Int
     Output: Nmr.ResonanceGroup
  """

  spinSystemB = None
  
  nLinks = getSeqSpinSystemLinks(spinSystem, delta=delta)
  if nLinks:
    nLink = nLinks[0]
    if spinSystem is nLink.parent:
      spinSystemB = nLink.possibility
      
    else:
      spinSystemB = nLink.parent

  return spinSystemB  

def removeSpinSystemResonance(spinSystem, resonance):
  """Descrn: Remove a resonance from a given spin system
     Inputs: Nmr.ResonanceGroup, Nmr.Resonance
     Output: None
  """

  if resonance not in spinSystem.resonances:
    return

  spinSystem.removeResonance(resonance)
  updateResonanceAnnotation(resonance)
  
def assignResonanceResidue(resonance, residue):
  """Descrn: Changes the assignment of a resonance to a given residue if an 
             appropriately named atom set can be found for the resonance's
             assignName.
     Inputs: Nmr.Resonance, Nmr.Residue
     Output: None
  """


  #print 'assignResonanceResidue', makeResonanceGuiName(resonance), residue.seqId
  if residue:
    # we could be setting the residue to None
    if not setAssignmentMolSystem(residue, resonance=resonance):
      return
  
  resonanceSet = resonance.resonanceSet
  if resonanceSet:
    assignNames = set()
    
    for atomSet in resonanceSet.atomSets:
      assignNames.add(atomSet.name)
  
  else:
    assignNames = resonance.assignNames
    
  assignedResidue = getResonanceResidue(resonance)
  
  if assignNames and (assignedResidue is not residue):
    resonance.setAssignNames(assignNames)
    
    if residue:
      atomSets = []
      isotopeCode = resonance.isotopeCode
      
      for atom in residue.atoms:
        element = atom.chemAtom.elementSymbol
        
        if isotopeCode[-len(element):] != element:
          continue
      
        atomSet = atom.atomSet
        if atomSet:
          if atomSet.name in assignNames:
            if atomSet not in atomSets:
              atomSets.append(atomSet)
      
      if resonanceSet:
        resonanceSet.delete()
      
      if atomSets:
        # might not always find atom sets
        # e.g. if changing residue types
        assignAtomsToRes(atomSets,resonance,None)
    else:
      if resonanceSet:
        resonanceSet.delete()
        #updateResonanceAnnotation(resonance)

  if not resonance.resonanceGroup:
    nmrProject  = resonance.nmrProject
    spinSystem  = None
    molResidue  = residue.molResidue
    ccpCode     = molResidue.ccpCode
    molType     = molResidue.molType
    spinSystems = nmrProject.findAllResonanceGroups(ccpCode=ccpCode,
                                                    molType=molType)
    
    for extantSpinSystem in spinSystems:
      if extantSpinSystem.residue is residue:
        spinSystem = extantSpinSystem
        break
        
    if not spinSystem:
      spinSystem = nmrProject.newResonanceGroup()
      assignSpinSystemResidue(spinSystem,residue)
      
    if resonance not in spinSystem.resonances:
      spinSystem.addResonance(resonance)
      updateResonanceAnnotation(resonance)
      
  else:
    updateResonanceAnnotation(resonance)
    
    
def setQuickShiftList(shift):
  """Descrn: Sets up a list of lists of shifts for a shift list
             accessed by shift.value: quicker than searching all
     Inputs: Nmr.Shift
     Output: None
  """
  if shift.value >= 10:
    i = int(round(shift.value))
  else:
    i = int(round(10*shift.value))
  
  shiftList = shift.parentList
  if not hasattr(shiftList,'quickShifts'):
    
    shiftList.quickShifts = {}
    for shift2 in shiftList.measurements:
      isotope = shift2.resonance.isotopeCode
      
      quickShiftDict = shiftList.quickShifts.get(isotope, {})
      if not quickShiftDict:
        shiftList.quickShifts[isotope] = quickShiftDict
      
      if shift2.value >= 10:
        key = int(round(shift2.value))
      else:
        key = int(round(10*shift2.value))
      if quickShiftDict.get(key) is None:
        quickShiftDict[key] = []
      if quickShiftDict.get(key+1) is None:
        quickShiftDict[key+1] = []
      if quickShiftDict.get(key-1) is None:
        quickShiftDict[key-1] = []
      quickShiftDict[key].append(shift2)
      quickShiftDict[key+1].append(shift2)
      quickShiftDict[key-1].append(shift2)
      
      shift2.quickShiftIndices = [key-1,key,key+1]
      
  isotope = shift.resonance.isotopeCode
  quickShiftDict = shiftList.quickShifts.get(isotope, {})
  if not quickShiftDict:
    shiftList.quickShifts[isotope] = quickShiftDict
    
  if hasattr(shift,'quickShiftIndices'):
    for j in shift.quickShiftIndices:
      try:
        quickShiftDict[j].remove(shift)
      except ValueError, e:
        print 'Warning: Quick shift index value failure', e
      except KeyError, e:
        print 'Warning: Quick shift index key failure', e

  if shift.isDeleted:
    if hasattr(shift,'quickShiftIndices'):
      del shift.quickShiftIndices
    return
    
  if quickShiftDict.get(i)   is None:
    quickShiftDict[i]   = []
  if quickShiftDict.get(i+1) is None:
    quickShiftDict[i+1] = []
  if quickShiftDict.get(i-1) is None:
    quickShiftDict[i-1] = []

  if shift not in quickShiftDict[i]:
    quickShiftDict[i  ].append(shift)
  if shift not in quickShiftDict[i+1]:
    quickShiftDict[i+1].append(shift)
  if shift not in quickShiftDict[i-1]:
    quickShiftDict[i-1].append(shift)
  
  shift.quickShiftIndices = [i-1,i,i+1]
  
# # # # # From PeakBasic # # # # # 
# Copyright (C) 2009 Wayne Boucher and Tim Stevens (University of Cambridge)

def clearPeakDim(peakDim,contrib=None):
  """Descrn: Clear a peak dimension of any or a specified peakDim contribution
             Recalculates shifts of the resonances involved 
     Inputs: Nmr.PeakDim, Nmr.PeakDimContrib
     Output: None
  """
  
  contribs = peakDim.peakDimContribs
  if contribs:
    if contrib is None:
      for contrib in contribs:
        contrib.delete()
      
    else:
      contrib.delete()

def makePeakAnnotation(peak):
  """Descrn: Sets the annotation for a peak that indicates peak molSystem, merit and details
             (not the annotation of peakDims)
     Inputs: Nmr.Peak
     Output: None
  """
  assert peak
  project = peak.root
  analysisProject = project.currentAnalysisProject
  
  symbol     = ''
  detail     = ''
  molSysCode = ''
  
  if analysisProject.doMeritAnnotations:
    if peak.figOfMerit > 0.66:
      symbol = analysisProject.meritAnnotationGood or ''
    elif peak.figOfMerit < 0.34:
      symbol = analysisProject.meritAnnotationBad or '!'
    else:
      symbol = analysisProject.meritAnnotationMediocre or '~'
    symbol += ' '
 
  if analysisProject.doDetailAnnotations and (peak.details is not None):
    detail =  peak.details

  if analysisProject.doMolSysAnnotations:
    for peakDim in peak.peakDims:
      molSystem = None
      for contrib in peakDim.peakDimContribs:
        if contrib.resonance.resonanceSet:
          atom = contrib.resonance.resonanceSet.findFirstAtomSet().findFirstAtom()
          molSystem = atom.topObject
          break
      if molSystem:
        molSysCode = '%s:' % (molSystem.code)
        break
  
  if True: # analysisProject.doCompressAnnotations:
    
    peakDimAnnos = [getPeakDimAtomTuple(pd) for pd in peak.sortedPeakDims()]
    
    chain0, residue0, atom0 = peakDimAnnos[0]

    compress = True
    if len(peakDimAnnos) > 1:
      for chain, residue, atom in peakDimAnnos[1:]:
        if chain or residue:
          if (chain != chain0) or (residue != residue0):
            compress = False
        
    if compress:
      assignAnno = '%s%s' % (chain0,residue0) + ','.join(text[2] or '-' for text in peakDimAnnos)
    else:
      assignAnno = ' '.join('%s%s%s' % texts for texts in peakDimAnnos)
 
    peakAnnotation = '%s%s%s %s ' % (symbol,molSysCode,assignAnno,detail)  
  
  else:
    peakAnnotation = '%s%s%s ' % (symbol,molSysCode,detail)
  
  peak.setAnnotation(peakAnnotation[:80]) 
   
def setPeakDimNumAliasing(peakDim, numAliasing, doWarning=True):
  """Descrn: Set the number of peakDim aliasings to set a peakDim position and
             put it at its non-folded, correct ppm
     Inputs: Nmr.PeakDim, Integer (peakDim.numAliasing) 
     Output: None
  """
   
  dataDimRef = peakDim.dataDimRef
  if not dataDimRef:
    return
  
  expDimRef = dataDimRef.expDimRef
  origNumAliasing = peakDim.numAliasing 
  numAliasing = int(numAliasing)
  peakDim.setNumAliasing( numAliasing )
  
  minAliasedFreq, maxAliasedFreq = getDataDimRefFullRange(dataDimRef)
  
  if (peakDim.value < minAliasedFreq) or (peakDim.value > maxAliasedFreq):
  
    msg  = 'Value puts peak outside current spectrum bounds'
    msg += '(%.2f - %.2f %s). Continue and extend the bounds to %.2f?'
    data = (minAliasedFreq,maxAliasedFreq,expDimRef.unit, peakDim.value)
    if not doWarning or showOkCancel('Query', msg % data):

      analysisProject = peakDim.root.currentAnalysisProject
      if analysisProject and analysisProject.contourToUnaliased:
        expDimRef.minAliasedFreq = minAliasedFreq
        expDimRef.maxAliasedFreq = maxAliasedFreq
    else:
      peakDim.setNumAliasing( origNumAliasing )
      return
  
  resonances = []
  if peakDim.peakDimContribs:
    shiftList = expDimRef.expDim.experiment.shiftList
    for contrib in peakDim.peakDimContribs:
      resonances.append( contrib.resonance )
    
    ppm = peakDim.value
    for resonance in resonances:
      for contrib in resonance.peakDimContribs:
        peakDim2 = contrib.peakDim
        if peakDim2 is peakDim:
          continue
          
        position = unit_converter[(shiftList.unit,'point')](ppm,peakDim2.dataDimRef)
        numPointsOrig = float(peakDim2.dataDimRef.dataDim.numPointsOrig)
        n = int(round((position-aliasedPeakDimPosition(peakDim2))/numPointsOrig))
        
        if abs(n) > 0:
          for contrib2 in peakDim2.peakDimContribs:
            if contrib2.resonance not in resonances:
              clearPeakDim(peakDim2,contrib=contrib2)
              
          peakDim2.setNumAliasing( n + peakDim2.numAliasing )
          checkContourRegion(peakDim2.peak)

  checkContourRegion(peakDim.peak)

def aliasedPeakDimPosition(peakDim):
  """Descrn: Give the aliased points position of a given peak dimension
     Inputs: Nmr.PeakDim
     Output: Float (Nmr.PeakDim.position points) 
  """
  
  dataDimRef = peakDim.dataDimRef
  position   = peakDim.position
  
  if dataDimRef:
    position += peakDim.numAliasing*dataDimRef.dataDim.numPointsOrig
  
  return position 

def findNumAliasing(dataDimRef, p):
  """Descrn: Find the number if aliased spectral widths at a given point for a reference data dimension 
     Inputs: Nmr.DataDimRef, Float
     Output: Int (number of aliasings)
  """

  o = dataDimRef.dataDim.numPointsOrig
  n = divmod(p-1, o)[0]
  return int(n)
  
# # # # # From ExperimentBasic # # # # #   
# Copyright (C) 2009 Wayne Boucher and Tim Stevens (University of Cambridge)
  
def getDataDimRefFullRange(dataDimRef):
  """Descrn: Get the full range of freq values for a data dimension reference
             taking into account spectral width and min/max unaliased freqs
     Inputs: ccp.nmr.Nmr.DataDimRef
     Output: 2-List of Floats (min, max)
  """
  
  expDimRef = dataDimRef.expDimRef
  converter = unit_converter[('point', expDimRef.unit)]

  valRange = [converter(1,dataDimRef),
              converter(dataDimRef.dataDim.numPoints,dataDimRef)]
  valRange.sort()
  
  valueMin = expDimRef.minAliasedFreq # Could be 0.0
  if valueMin is None:
    valueMin = valRange[0]
  
  valueMax = expDimRef.maxAliasedFreq 
  if valueMax is None:
    valueMax = valRange[1]
  
  return [valueMin, valueMax]

def checkContourRegion(peak):
  """Descrn: Ensure the contours of a peaks spectrum extend to cover the input peak's position.
     Inputs: Nmr.Peak
     Output: None
  """

  analysisProject = peak.root.currentAnalysisProject
  if analysisProject and analysisProject.contourToUnaliased:
    for peakDim in peak.peakDims:
 
      if peakDim.dataDimRef:
        maxAliasedFreq = peakDim.dataDimRef.expDimRef.maxAliasedFreq
        minAliasedFreq = peakDim.dataDimRef.expDimRef.minAliasedFreq
        position       = peakDim.value
        if (minAliasedFreq is not None) and (position < minAliasedFreq):
          peakDim.dataDimRef.expDimRef.minAliasedFreq = position

        if (maxAliasedFreq is not None) and (position > maxAliasedFreq):
          peakDim.dataDimRef.expDimRef.maxAliasedFreq = position
