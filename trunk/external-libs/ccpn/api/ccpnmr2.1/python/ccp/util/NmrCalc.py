DATA_MISSING = '*DATA MISSING*'
PARAM_ATTR_DICT = {type(1.0):'floatValue',
                   type(1):'intValue',
                   type(''):'textValue',
                   type(True):'booleanValue'}

def getObjBooleanParameter(dataObj, code, default=True, groupId=None):

  run = dataObj.run
  runParameter = dataObj.findFirstRunParameter(code=code, groupId=groupId)
  
  if not runParameter: # Not already set.
    runParameter = run.newRunParameter(code=code, groupId=groupId)
    bool = default
    runParameter.booleanValue = bool
  
  elif runParameter.booleanValue is None:
    bool = default
    runParameter.booleanValue = bool
  
  else:
    bool = runParameter.booleanValue
    
  if runParameter not in dataObj.runParameters:
    dataObj.addRunParameter(runParameter)
  
  return bool

def toggleObjBooleanParameter(dataObj, code, default=True, groupId=None):

  run = dataObj.run
  runParameter = dataObj.findFirstRunParameter(code=code, groupId=groupId)
  
  if not runParameter: # Not already set.
    runParameter = run.newRunParameter(code=code, groupId=groupId)
    bool = default
  
  elif runParameter.booleanValue is None:
    bool = default
  
  else:
    bool = not runParameter.booleanValue
    
  if runParameter not in dataObj.runParameters:
    dataObj.addRunParameter(runParameter)

  runParameter.booleanValue =  bool
  
  return bool

def setObjRunParameter(dataObj, code, value, groupId=None):

  run = dataObj.run
  runParameter = dataObj.findFirstRunParameter(code=code, groupId=groupId)
  
  if not runParameter: # Not already set.
    runParameter = run.newRunParameter(code=code, groupId=groupId)
    
  if runParameter not in dataObj.runParameters:
    dataObj.addRunParameter(runParameter)
  
  setattr(runParameter, PARAM_ATTR_DICT[type(value)], value)
  
  
def getObjRunParameter(dataObj, code, groupId=None):

  runParameter = dataObj.findFirstRunParameter(code=code, groupId=groupId)

  return runParameter

def deleteRunParameter(run, code, groupId=None):

  runParameter = run.findFirstRunParameter(code=code, groupId=groupId)
  
  if runParameter:
    return runParameter.delete()
      
def setRunParameter(run, code, value, groupId=None):

  runParameter = run.findFirstRunParameter(code=code, groupId=groupId) or \
                 run.newRunParameter(code=code, groupId=groupId)

  setattr(runParameter, PARAM_ATTR_DICT[type(value)], value)
 
def getRunParameter(run, code, groupId=None):

  runParameter = run.findFirstRunParameter(code=code, groupId=groupId)
  
  return runParameter
 
def getRunTextParameter(run, code, groupId=None):

  runParameter = run.findFirstRunParameter(code=code, groupId=groupId)
  
  if runParameter:
    return runParameter.textValue

def getRangeString(numbers):

  if len(numbers) == 1:
    return '%d' % (numbers[0],)

  numbers.sort()
  ranges = [[numbers[0],None]]
  
  for i, numberA in enumerate(numbers[:-1]):
    numberB = numbers[i+1]
    
    if numberB != (numberA+1):
      ranges[-1][1] = numberA
      ranges.append([numberB,None])
  
  ranges[-1][1] = numbers[-1]
  
  ranges = ['%d-%d' % tuple(r) for r in ranges]
  
  return ','.join(ranges)   

def getDataObjText(dataObj, missingText=DATA_MISSING):
  
  className = dataObj.className
  
  if className == 'ConstraintStoreData':
    constraintStore = dataObj.nmrConstraintStore
    if not constraintStore:
      return missingText
  
    serial = dataObj.constraintStoreSerial
    
    if dataObj.constraintListSerials:
      clSerials = ','.join('%d' % s for s in dataObj.constraintListSerials)
    else:
      clSerials = '*ALL*'
      
    text = 'Constraint Set: %d Lists: %s' % (serial, clSerials)
    
  elif className == 'DerivedListData':
    derivedDataList = dataObj.derivedDataList
    if not derivedDataList:
      return missingText
    
    text = '%s: %d' % (derivedDataList.className, derivedDataList.serial)
  
  elif className == 'ExternalData':
    dataStore = dataObj.dataStore
    if not dataStore:
      return missingText
    
    
    text = dataStore.fullPath
  
  elif className == 'MeasurementListData':
    measurementList = dataObj.measurementList
    if not measurementList:
      return missingText
    
    text = '%s: %d' % (measurementList.className, derivedDataList.serial)
  
  elif className == 'MolResidueData':
    chain = dataObj.chain
    if not chain:
      return missingText
  
    residues = dataObj.residues
    if residues:
      seqCodes = [r.seqCode for r in residues]
      resText = self.getRangeString(seqCodes)
    
    else:
      residues = chain.sortedResidues()
      if residues:
        first = residues[0].seqCode
        last = residues[-1].seqCode
        resText = '%d-%d' % (first, last)
      else:
        resText = 'None present'
  
    msCode = dataObj.molSystem.code
    text = 'Chain: %s:%s Residues %s' % (msCode, chain.code, resText)
  
  elif className == 'MolSystemData':
    molSystem = dataObj.molSystem
    if not molSystem:
      return missingText
  
    chains = dataObj.chains or dataObj.chains
    codes = [c.code for c in chains]
    codes.sort()
    chainText = ','.join(codes)
  
    text = 'MolSystem: %s Chains %s' % (molSystem.code, chainText)
   
  
  elif className == 'PeakListData':
    peakList = dataObj.peakList
    if not peakList:
      return missingText
  
    serial = peakList.serial
    spectrum = peakList.dataSource
    experiment = spectrum.experiment 
    
    text = '%s:%s %d' % (experiment.name, spectrum.name, serial)
  
  elif className == 'SpectrumData':
    dataSource = dataObj.dataSource
    if not dataSource:
      return missingText

    experiment = dataSource.experiment 
  
    text = '%s:%s' % (experiment.name, dataSource.name)
  
  elif className == 'SpinSystemData':
    resonanceGroup = dataObj.resonanceGroup
    if not resonanceGroup:
      return missingText
      
    text = '%d' % resonanceGroup.serial
  
  elif className == 'StructureEnsembleData':
    structureEnsemble = dataObj.structureEnsemble
    if not structureEnsemble:
      return missingText
  
    msCode = structureEnsemble.molSystem.code
    
    serials = list(dataObj.modelSerials)
    if serials:
      models = getRangeString(serials)

    else:
      models = '*ALL*'
    
    text = '%s %d Models: %s' % (msCode, structureEnsemble.ensembleId, models)
  
  elif className == 'ViolationListData':
    violationList = dataObj.violationList
    if not violationList:
      return missingText
      
    csSerial = dataObj.constraintStoreSerial
    vlSerial = violationList.serial
    
    text = 'Constraint Set: %d Viol List: %d' % (csSerial, vlSerial)
    
    
  return text
    
