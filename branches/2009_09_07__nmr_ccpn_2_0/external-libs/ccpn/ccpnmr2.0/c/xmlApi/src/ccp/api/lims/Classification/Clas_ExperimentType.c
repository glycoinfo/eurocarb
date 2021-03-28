
#include "ccp.h"

/*
  The type of experiment classified by namingSystem. Different organisations can have their own types.
*/

/* package ccp.api.lims.Classification */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_ExperimentType self
  @param  Impl_ApplicationData value
**/
void *Clas_ExperimentType_AddApplicationData(Clas_ExperimentType self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.ExperimentType: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.ExperimentType: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.lims.Classification.ExperimentType.instrumentTypes

List of 
instrument type associated to an experiment type.
  @param  Clas_ExperimentType self
  @param  Clas_InstrumentType value
**/
void *Clas_ExperimentType_AddInstrumentType(Clas_ExperimentType self, Clas_InstrumentType value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addInstrumentType");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.ExperimentType: cannot find method 'addInstrumentType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.ExperimentType: method 'addInstrumentType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.lims.Classification.ExperimentType.sampleCategories

List of 
sample category associated to an experiment type. It represents the list 
of possible sample category that can be used by a certain type of 
experiment.
  @param  Clas_ExperimentType self
  @param  Clas_SampleCategory value
**/
void *Clas_ExperimentType_AddSampleCategory(Clas_ExperimentType self, Clas_SampleCategory value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addSampleCategory");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.ExperimentType: cannot find method 'addSampleCategory'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.ExperimentType: method 'addSampleCategory' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.lims.Classification.ExperimentType
  @param  Clas_ExperimentType self
  @param  ApiBoolean complete
**/
void *Clas_ExperimentType_CheckAllValid(Clas_ExperimentType self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.ExperimentType: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.ExperimentType: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.lims.Classification.ExperimentType
  @param  Clas_ExperimentType self
  @param  ApiBoolean complete
**/
void *Clas_ExperimentType_CheckValid(Clas_ExperimentType self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.ExperimentType: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.ExperimentType: method 'checkValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_ExperimentType self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Clas_ExperimentType_FindAllApplicationData(Clas_ExperimentType self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.ExperimentType: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.ExperimentType: method 'findAllApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_ExperimentType self
  @returns  all value that satisfy the conditions 
**/
ApiList Clas_ExperimentType_FindAllApplicationData_keyval0(Clas_ExperimentType self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Clas_ExperimentType_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_ExperimentType self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Clas_ExperimentType_FindAllApplicationData_keyval1(Clas_ExperimentType self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Clas_ExperimentType_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_ExperimentType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Clas_ExperimentType_FindAllApplicationData_keyval2(Clas_ExperimentType self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Clas_ExperimentType_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_ExperimentType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Clas_ExperimentType_FindAllApplicationData_keyval3(Clas_ExperimentType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Clas_ExperimentType_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_ExperimentType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @param  char * key4
  @param  ApiObject value4
  @returns  all value that satisfy the conditions 
**/
ApiList Clas_ExperimentType_FindAllApplicationData_keyval4(Clas_ExperimentType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Clas_ExperimentType_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.ExperimentType.experiments

The list 
of experiments associated to a particular type of experiment.
  @param  Clas_ExperimentType self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_ExperimentType_FindAllExperiments(Clas_ExperimentType self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllExperiments");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.ExperimentType: cannot find method 'findAllExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.ExperimentType: method 'findAllExperiments' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.ExperimentType.experiments

The list 
of experiments associated to a particular type of experiment.
  @param  Clas_ExperimentType self
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_ExperimentType_FindAllExperiments_keyval0(Clas_ExperimentType self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Clas_ExperimentType_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.ExperimentType.experiments

The list 
of experiments associated to a particular type of experiment.
  @param  Clas_ExperimentType self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_ExperimentType_FindAllExperiments_keyval1(Clas_ExperimentType self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Clas_ExperimentType_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.ExperimentType.experiments

The list 
of experiments associated to a particular type of experiment.
  @param  Clas_ExperimentType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_ExperimentType_FindAllExperiments_keyval2(Clas_ExperimentType self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Clas_ExperimentType_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.ExperimentType.experiments

The list 
of experiments associated to a particular type of experiment.
  @param  Clas_ExperimentType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_ExperimentType_FindAllExperiments_keyval3(Clas_ExperimentType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Clas_ExperimentType_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.ExperimentType.experiments

The list 
of experiments associated to a particular type of experiment.
  @param  Clas_ExperimentType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @param  char * key4
  @param  ApiObject value4
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_ExperimentType_FindAllExperiments_keyval4(Clas_ExperimentType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Clas_ExperimentType_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.ExperimentType.instrumentTypes

List 
of instrument type associated to an experiment type.
  @param  Clas_ExperimentType self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_ExperimentType_FindAllInstrumentTypes(Clas_ExperimentType self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllInstrumentTypes");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.ExperimentType: cannot find method 'findAllInstrumentTypes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.ExperimentType: method 'findAllInstrumentTypes' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.ExperimentType.instrumentTypes

List 
of instrument type associated to an experiment type.
  @param  Clas_ExperimentType self
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_ExperimentType_FindAllInstrumentTypes_keyval0(Clas_ExperimentType self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Clas_ExperimentType_FindAllInstrumentTypes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.ExperimentType.instrumentTypes

List 
of instrument type associated to an experiment type.
  @param  Clas_ExperimentType self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_ExperimentType_FindAllInstrumentTypes_keyval1(Clas_ExperimentType self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Clas_ExperimentType_FindAllInstrumentTypes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.ExperimentType.instrumentTypes

List 
of instrument type associated to an experiment type.
  @param  Clas_ExperimentType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_ExperimentType_FindAllInstrumentTypes_keyval2(Clas_ExperimentType self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Clas_ExperimentType_FindAllInstrumentTypes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.ExperimentType.instrumentTypes

List 
of instrument type associated to an experiment type.
  @param  Clas_ExperimentType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_ExperimentType_FindAllInstrumentTypes_keyval3(Clas_ExperimentType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Clas_ExperimentType_FindAllInstrumentTypes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.ExperimentType.instrumentTypes

List 
of instrument type associated to an experiment type.
  @param  Clas_ExperimentType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @param  char * key4
  @param  ApiObject value4
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_ExperimentType_FindAllInstrumentTypes_keyval4(Clas_ExperimentType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Clas_ExperimentType_FindAllInstrumentTypes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.ExperimentType.protocols

The list 
of protocol associated to an experiment type.
  @param  Clas_ExperimentType self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_ExperimentType_FindAllProtocols(Clas_ExperimentType self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllProtocols");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.ExperimentType: cannot find method 'findAllProtocols'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.ExperimentType: method 'findAllProtocols' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.ExperimentType.protocols

The list 
of protocol associated to an experiment type.
  @param  Clas_ExperimentType self
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_ExperimentType_FindAllProtocols_keyval0(Clas_ExperimentType self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Clas_ExperimentType_FindAllProtocols(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.ExperimentType.protocols

The list 
of protocol associated to an experiment type.
  @param  Clas_ExperimentType self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_ExperimentType_FindAllProtocols_keyval1(Clas_ExperimentType self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Clas_ExperimentType_FindAllProtocols(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.ExperimentType.protocols

The list 
of protocol associated to an experiment type.
  @param  Clas_ExperimentType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_ExperimentType_FindAllProtocols_keyval2(Clas_ExperimentType self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Clas_ExperimentType_FindAllProtocols(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.ExperimentType.protocols

The list 
of protocol associated to an experiment type.
  @param  Clas_ExperimentType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_ExperimentType_FindAllProtocols_keyval3(Clas_ExperimentType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Clas_ExperimentType_FindAllProtocols(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.ExperimentType.protocols

The list 
of protocol associated to an experiment type.
  @param  Clas_ExperimentType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @param  char * key4
  @param  ApiObject value4
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_ExperimentType_FindAllProtocols_keyval4(Clas_ExperimentType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Clas_ExperimentType_FindAllProtocols(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.Classification.ExperimentType.sampleCategories

List of sample 
category associated to an experiment type. It represents the list of 
possible sample category that can be used by a certain type of 
experiment.
  @param  Clas_ExperimentType self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_ExperimentType_FindAllSampleCategories(Clas_ExperimentType self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllSampleCategories");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.ExperimentType: cannot find method 'findAllSampleCategories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.ExperimentType: method 'findAllSampleCategories' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.Classification.ExperimentType.sampleCategories

List of sample 
category associated to an experiment type. It represents the list of 
possible sample category that can be used by a certain type of 
experiment.
  @param  Clas_ExperimentType self
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_ExperimentType_FindAllSampleCategories_keyval0(Clas_ExperimentType self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Clas_ExperimentType_FindAllSampleCategories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.Classification.ExperimentType.sampleCategories

List of sample 
category associated to an experiment type. It represents the list of 
possible sample category that can be used by a certain type of 
experiment.
  @param  Clas_ExperimentType self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_ExperimentType_FindAllSampleCategories_keyval1(Clas_ExperimentType self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Clas_ExperimentType_FindAllSampleCategories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.Classification.ExperimentType.sampleCategories

List of sample 
category associated to an experiment type. It represents the list of 
possible sample category that can be used by a certain type of 
experiment.
  @param  Clas_ExperimentType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_ExperimentType_FindAllSampleCategories_keyval2(Clas_ExperimentType self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Clas_ExperimentType_FindAllSampleCategories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.Classification.ExperimentType.sampleCategories

List of sample 
category associated to an experiment type. It represents the list of 
possible sample category that can be used by a certain type of 
experiment.
  @param  Clas_ExperimentType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_ExperimentType_FindAllSampleCategories_keyval3(Clas_ExperimentType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Clas_ExperimentType_FindAllSampleCategories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.Classification.ExperimentType.sampleCategories

List of sample 
category associated to an experiment type. It represents the list of 
possible sample category that can be used by a certain type of 
experiment.
  @param  Clas_ExperimentType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @param  char * key4
  @param  ApiObject value4
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_ExperimentType_FindAllSampleCategories_keyval4(Clas_ExperimentType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Clas_ExperimentType_FindAllSampleCategories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_ExperimentType self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Clas_ExperimentType_FindFirstApplicationData(Clas_ExperimentType self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.ExperimentType: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.ExperimentType: method 'findFirstApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_ExperimentType self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Clas_ExperimentType_FindFirstApplicationData_keyval0(Clas_ExperimentType self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Clas_ExperimentType_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_ExperimentType self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Clas_ExperimentType_FindFirstApplicationData_keyval1(Clas_ExperimentType self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Clas_ExperimentType_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_ExperimentType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Clas_ExperimentType_FindFirstApplicationData_keyval2(Clas_ExperimentType self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Clas_ExperimentType_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_ExperimentType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Clas_ExperimentType_FindFirstApplicationData_keyval3(Clas_ExperimentType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Clas_ExperimentType_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_ExperimentType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @param  char * key4
  @param  ApiObject value4
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Clas_ExperimentType_FindFirstApplicationData_keyval4(Clas_ExperimentType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Clas_ExperimentType_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Classification.ExperimentType.experiments

The 
list of experiments associated to a particular type of experiment.
  @param  Clas_ExperimentType self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Expe_Experiment Clas_ExperimentType_FindFirstExperiment(Clas_ExperimentType self, ApiMap conditions)
{
  
  Expe_Experiment obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstExperiment");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.ExperimentType: cannot find method 'findFirstExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.ExperimentType: method 'findFirstExperiment' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Classification.ExperimentType.experiments

The 
list of experiments associated to a particular type of experiment.
  @param  Clas_ExperimentType self
  @returns  the first value that satisfies the conditions 
**/
Expe_Experiment Clas_ExperimentType_FindFirstExperiment_keyval0(Clas_ExperimentType self)
{
  
  Expe_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Clas_ExperimentType_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Classification.ExperimentType.experiments

The 
list of experiments associated to a particular type of experiment.
  @param  Clas_ExperimentType self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Expe_Experiment Clas_ExperimentType_FindFirstExperiment_keyval1(Clas_ExperimentType self, char * key, ApiObject value)
{
  
  Expe_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Clas_ExperimentType_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Classification.ExperimentType.experiments

The 
list of experiments associated to a particular type of experiment.
  @param  Clas_ExperimentType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Expe_Experiment Clas_ExperimentType_FindFirstExperiment_keyval2(Clas_ExperimentType self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Expe_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Clas_ExperimentType_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Classification.ExperimentType.experiments

The 
list of experiments associated to a particular type of experiment.
  @param  Clas_ExperimentType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Expe_Experiment Clas_ExperimentType_FindFirstExperiment_keyval3(Clas_ExperimentType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Expe_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Clas_ExperimentType_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Classification.ExperimentType.experiments

The 
list of experiments associated to a particular type of experiment.
  @param  Clas_ExperimentType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @param  char * key4
  @param  ApiObject value4
  @returns  the first value that satisfies the conditions 
**/
Expe_Experiment Clas_ExperimentType_FindFirstExperiment_keyval4(Clas_ExperimentType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Expe_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Clas_ExperimentType_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.ExperimentType.instrumentTypes

List of 
instrument type associated to an experiment type.
  @param  Clas_ExperimentType self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Clas_InstrumentType Clas_ExperimentType_FindFirstInstrumentType(Clas_ExperimentType self, ApiMap conditions)
{
  
  Clas_InstrumentType obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstInstrumentType");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.ExperimentType: cannot find method 'findFirstInstrumentType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.ExperimentType: method 'findFirstInstrumentType' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.ExperimentType.instrumentTypes

List of 
instrument type associated to an experiment type.
  @param  Clas_ExperimentType self
  @returns  the first value that satisfies the conditions 
**/
Clas_InstrumentType Clas_ExperimentType_FindFirstInstrumentType_keyval0(Clas_ExperimentType self)
{
  
  Clas_InstrumentType  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Clas_ExperimentType_FindFirstInstrumentType(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.ExperimentType.instrumentTypes

List of 
instrument type associated to an experiment type.
  @param  Clas_ExperimentType self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Clas_InstrumentType Clas_ExperimentType_FindFirstInstrumentType_keyval1(Clas_ExperimentType self, char * key, ApiObject value)
{
  
  Clas_InstrumentType  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Clas_ExperimentType_FindFirstInstrumentType(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.ExperimentType.instrumentTypes

List of 
instrument type associated to an experiment type.
  @param  Clas_ExperimentType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Clas_InstrumentType Clas_ExperimentType_FindFirstInstrumentType_keyval2(Clas_ExperimentType self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Clas_InstrumentType  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Clas_ExperimentType_FindFirstInstrumentType(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.ExperimentType.instrumentTypes

List of 
instrument type associated to an experiment type.
  @param  Clas_ExperimentType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Clas_InstrumentType Clas_ExperimentType_FindFirstInstrumentType_keyval3(Clas_ExperimentType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Clas_InstrumentType  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Clas_ExperimentType_FindFirstInstrumentType(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.ExperimentType.instrumentTypes

List of 
instrument type associated to an experiment type.
  @param  Clas_ExperimentType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @param  char * key4
  @param  ApiObject value4
  @returns  the first value that satisfies the conditions 
**/
Clas_InstrumentType Clas_ExperimentType_FindFirstInstrumentType_keyval4(Clas_ExperimentType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Clas_InstrumentType  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Clas_ExperimentType_FindFirstInstrumentType(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Classification.ExperimentType.protocols

The list 
of protocol associated to an experiment type.
  @param  Clas_ExperimentType self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Prot_Protocol Clas_ExperimentType_FindFirstProtocol(Clas_ExperimentType self, ApiMap conditions)
{
  
  Prot_Protocol obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstProtocol");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.ExperimentType: cannot find method 'findFirstProtocol'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.ExperimentType: method 'findFirstProtocol' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Classification.ExperimentType.protocols

The list 
of protocol associated to an experiment type.
  @param  Clas_ExperimentType self
  @returns  the first value that satisfies the conditions 
**/
Prot_Protocol Clas_ExperimentType_FindFirstProtocol_keyval0(Clas_ExperimentType self)
{
  
  Prot_Protocol  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Clas_ExperimentType_FindFirstProtocol(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Classification.ExperimentType.protocols

The list 
of protocol associated to an experiment type.
  @param  Clas_ExperimentType self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Prot_Protocol Clas_ExperimentType_FindFirstProtocol_keyval1(Clas_ExperimentType self, char * key, ApiObject value)
{
  
  Prot_Protocol  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Clas_ExperimentType_FindFirstProtocol(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Classification.ExperimentType.protocols

The list 
of protocol associated to an experiment type.
  @param  Clas_ExperimentType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Prot_Protocol Clas_ExperimentType_FindFirstProtocol_keyval2(Clas_ExperimentType self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Prot_Protocol  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Clas_ExperimentType_FindFirstProtocol(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Classification.ExperimentType.protocols

The list 
of protocol associated to an experiment type.
  @param  Clas_ExperimentType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Prot_Protocol Clas_ExperimentType_FindFirstProtocol_keyval3(Clas_ExperimentType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Prot_Protocol  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Clas_ExperimentType_FindFirstProtocol(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Classification.ExperimentType.protocols

The list 
of protocol associated to an experiment type.
  @param  Clas_ExperimentType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @param  char * key4
  @param  ApiObject value4
  @returns  the first value that satisfies the conditions 
**/
Prot_Protocol Clas_ExperimentType_FindFirstProtocol_keyval4(Clas_ExperimentType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Prot_Protocol  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Clas_ExperimentType_FindFirstProtocol(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.ExperimentType.sampleCategories

List of sample 
category associated to an experiment type. It represents the list of 
possible sample category that can be used by a certain type of 
experiment.
  @param  Clas_ExperimentType self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Clas_SampleCategory Clas_ExperimentType_FindFirstSampleCategory(Clas_ExperimentType self, ApiMap conditions)
{
  
  Clas_SampleCategory obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstSampleCategory");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.ExperimentType: cannot find method 'findFirstSampleCategory'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.ExperimentType: method 'findFirstSampleCategory' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.ExperimentType.sampleCategories

List of sample 
category associated to an experiment type. It represents the list of 
possible sample category that can be used by a certain type of 
experiment.
  @param  Clas_ExperimentType self
  @returns  the first value that satisfies the conditions 
**/
Clas_SampleCategory Clas_ExperimentType_FindFirstSampleCategory_keyval0(Clas_ExperimentType self)
{
  
  Clas_SampleCategory  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Clas_ExperimentType_FindFirstSampleCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.ExperimentType.sampleCategories

List of sample 
category associated to an experiment type. It represents the list of 
possible sample category that can be used by a certain type of 
experiment.
  @param  Clas_ExperimentType self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Clas_SampleCategory Clas_ExperimentType_FindFirstSampleCategory_keyval1(Clas_ExperimentType self, char * key, ApiObject value)
{
  
  Clas_SampleCategory  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Clas_ExperimentType_FindFirstSampleCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.ExperimentType.sampleCategories

List of sample 
category associated to an experiment type. It represents the list of 
possible sample category that can be used by a certain type of 
experiment.
  @param  Clas_ExperimentType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Clas_SampleCategory Clas_ExperimentType_FindFirstSampleCategory_keyval2(Clas_ExperimentType self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Clas_SampleCategory  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Clas_ExperimentType_FindFirstSampleCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.ExperimentType.sampleCategories

List of sample 
category associated to an experiment type. It represents the list of 
possible sample category that can be used by a certain type of 
experiment.
  @param  Clas_ExperimentType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Clas_SampleCategory Clas_ExperimentType_FindFirstSampleCategory_keyval3(Clas_ExperimentType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Clas_SampleCategory  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Clas_ExperimentType_FindFirstSampleCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Classification.ExperimentType.sampleCategories

List of sample 
category associated to an experiment type. It represents the list of 
possible sample category that can be used by a certain type of 
experiment.
  @param  Clas_ExperimentType self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @param  char * key4
  @param  ApiObject value4
  @returns  the first value that satisfies the conditions 
**/
Clas_SampleCategory Clas_ExperimentType_FindFirstSampleCategory_keyval4(Clas_ExperimentType self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Clas_SampleCategory  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Clas_ExperimentType_FindFirstSampleCategory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.lims.Classification.ExperimentType
  @param  Clas_ExperimentType self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Clas_ExperimentType_Get(Clas_ExperimentType self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Clas_ExperimentType self
  @returns   the result
**/
Acco_AccessObject Clas_ExperimentType_GetAccess(Clas_ExperimentType self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.ExperimentType: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.ExperimentType: method 'getAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_ExperimentType self
  @returns   the result
**/
ApiList Clas_ExperimentType_GetApplicationData(Clas_ExperimentType self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.ExperimentType: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.ExperimentType: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.lims.Classification.ExperimentType
  @param  Clas_ExperimentType self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Clas_ExperimentType Clas_ExperimentType_GetByKey(Clas_ExperimentType self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Clas_ExperimentType obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.ExperimentType: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.ExperimentType: method 'getByKey' is not callable");
  
  args = PyTuple_Pack(2, startObj, fullKey);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Clas_ExperimentType self
  @returns   the result
**/
ApiString Clas_ExperimentType_GetClassName(Clas_ExperimentType self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.ExperimentType: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.ExperimentType: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Classification.ExperimentType.classification

parent 
link
  @param  Clas_ExperimentType self
  @returns   the result
**/
Clas_Classification Clas_ExperimentType_GetClassification(Clas_ExperimentType self)
{
  
  Clas_Classification obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassification");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.ExperimentType: cannot find method 'getClassification'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.ExperimentType: method 'getClassification' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Classification.AbstractCategory.details

Free text, for 
notes, explanatory comments, etc.
  @param  Clas_ExperimentType self
  @returns   the result
**/
ApiString Clas_ExperimentType_GetDetails(Clas_ExperimentType self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.ExperimentType: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.ExperimentType: method 'getDetails' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Classification.ExperimentType.experiments

The list of 
experiments associated to a particular type of experiment.
  @param  Clas_ExperimentType self
  @returns   the result
**/
ApiSet Clas_ExperimentType_GetExperiments(Clas_ExperimentType self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExperiments");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.ExperimentType: cannot find method 'getExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.ExperimentType: method 'getExperiments' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Clas_ExperimentType self
  @returns   the result
**/
ApiList Clas_ExperimentType_GetFieldNames(Clas_ExperimentType self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.ExperimentType: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.ExperimentType: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.lims.Classification.ExperimentType
  @param  Clas_ExperimentType self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Clas_ExperimentType_GetFullKey(Clas_ExperimentType self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.ExperimentType: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.ExperimentType: method 'getFullKey' is not callable");
  
  args = PyTuple_Pack(1, useGuid);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Clas_ExperimentType self
  @returns   the result
**/
ApiBoolean Clas_ExperimentType_GetInConstructor(Clas_ExperimentType self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.ExperimentType: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.ExperimentType: method 'getInConstructor' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Classification.ExperimentType.instrumentTypes

List of 
instrument type associated to an experiment type.
  @param  Clas_ExperimentType self
  @returns   the result
**/
ApiSet Clas_ExperimentType_GetInstrumentTypes(Clas_ExperimentType self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInstrumentTypes");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.ExperimentType: cannot find method 'getInstrumentTypes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.ExperimentType: method 'getInstrumentTypes' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Clas_ExperimentType self
  @returns   the result
**/
ApiBoolean Clas_ExperimentType_GetIsDeleted(Clas_ExperimentType self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.ExperimentType: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.ExperimentType: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.lims.Classification.ExperimentType
  @param  Clas_ExperimentType self
  @returns  Local object key
**/
ApiObject Clas_ExperimentType_GetLocalKey(Clas_ExperimentType self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.ExperimentType: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.ExperimentType: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Classification.AbstractCategory.name

Name of category
  @param  Clas_ExperimentType self
  @returns   the result
**/
ApiString Clas_ExperimentType_GetName(Clas_ExperimentType self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.ExperimentType: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.ExperimentType: method 'getName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Clas_ExperimentType self
  @returns   the result
**/
ApiString Clas_ExperimentType_GetPackageName(Clas_ExperimentType self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.ExperimentType: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.ExperimentType: method 'getPackageName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Clas_ExperimentType self
  @returns   the result
**/
ApiString Clas_ExperimentType_GetPackageShortName(Clas_ExperimentType self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.ExperimentType: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.ExperimentType: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Classification.ExperimentType.parent

link to parent 
object - synonym for classification
  @param  Clas_ExperimentType self
  @returns   the result
**/
Clas_Classification Clas_ExperimentType_GetParent(Clas_ExperimentType self)
{
  
  Clas_Classification obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.ExperimentType: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.ExperimentType: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Classification.ExperimentType.protocols

The list of 
protocol associated to an experiment type.
  @param  Clas_ExperimentType self
  @returns   the result
**/
ApiSet Clas_ExperimentType_GetProtocols(Clas_ExperimentType self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getProtocols");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.ExperimentType: cannot find method 'getProtocols'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.ExperimentType: method 'getProtocols' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Clas_ExperimentType self
  @returns   the result
**/
ApiString Clas_ExperimentType_GetQualifiedName(Clas_ExperimentType self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.ExperimentType: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.ExperimentType: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Clas_ExperimentType self
  @returns   the result
**/
Impl_MemopsRoot Clas_ExperimentType_GetRoot(Clas_ExperimentType self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.ExperimentType: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.ExperimentType: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Classification.ExperimentType.sampleCategories

List of 
sample category associated to an experiment type. It represents the list 
of possible sample category that can be used by a certain type of 
experiment.
  @param  Clas_ExperimentType self
  @returns   the result
**/
ApiSet Clas_ExperimentType_GetSampleCategories(Clas_ExperimentType self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSampleCategories");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.ExperimentType: cannot find method 'getSampleCategories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.ExperimentType: method 'getSampleCategories' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Clas_ExperimentType self
  @returns   the result
**/
Impl_TopObject Clas_ExperimentType_GetTopObject(Clas_ExperimentType self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.ExperimentType: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.ExperimentType: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.lims.Classification.ExperimentType
  @param  Clas_Classification parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Clas_ExperimentType Clas_ExperimentType_Init(Clas_Classification parent, ApiMap attrlinks)
{
  
  return Clas_Classification_NewExperimentType(parent, attrlinks);
}

/**
  Constructor for ccp.lims.Classification.ExperimentType
  @param  Clas_Classification parent
  @param  char * name
  @returns  the new object
**/
Clas_ExperimentType Clas_ExperimentType_Init_reqd(Clas_Classification parent, char * name)
{
  
  Clas_ExperimentType  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Clas_ExperimentType_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_ExperimentType self
  @param  Impl_ApplicationData value
**/
void *Clas_ExperimentType_RemoveApplicationData(Clas_ExperimentType self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.ExperimentType: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.ExperimentType: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.lims.Classification.ExperimentType.instrumentTypes

List 
of instrument type associated to an experiment type.
  @param  Clas_ExperimentType self
  @param  Clas_InstrumentType value
**/
void *Clas_ExperimentType_RemoveInstrumentType(Clas_ExperimentType self, Clas_InstrumentType value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeInstrumentType");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.ExperimentType: cannot find method 'removeInstrumentType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.ExperimentType: method 'removeInstrumentType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.lims.Classification.ExperimentType.sampleCategories

List 
of sample category associated to an experiment type. It represents the 
list of possible sample category that can be used by a certain type of 
experiment.
  @param  Clas_ExperimentType self
  @param  Clas_SampleCategory value
**/
void *Clas_ExperimentType_RemoveSampleCategory(Clas_ExperimentType self, Clas_SampleCategory value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeSampleCategory");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.ExperimentType: cannot find method 'removeSampleCategory'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.ExperimentType: method 'removeSampleCategory' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.lims.Classification.ExperimentType
  @param  Clas_ExperimentType self
  @param  ApiString name
  @param  ApiObject value
**/
void *Clas_ExperimentType_Set(Clas_ExperimentType self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Clas_ExperimentType self
  @param  Acco_AccessObject value
**/
void *Clas_ExperimentType_SetAccess(Clas_ExperimentType self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.ExperimentType: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.ExperimentType: method 'setAccess' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_ExperimentType self
  @param  ApiList values
**/
void *Clas_ExperimentType_SetApplicationData(Clas_ExperimentType self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.ExperimentType: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.ExperimentType: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Classification.AbstractCategory.details

Free text, for 
notes, explanatory comments, etc.
  @param  Clas_ExperimentType self
  @param  ApiString value
**/
void *Clas_ExperimentType_SetDetails(Clas_ExperimentType self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.ExperimentType: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.ExperimentType: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Classification.ExperimentType.experiments

The list of 
experiments associated to a particular type of experiment.
  @param  Clas_ExperimentType self
  @param  ApiSet values
**/
void *Clas_ExperimentType_SetExperiments(Clas_ExperimentType self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setExperiments");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.ExperimentType: cannot find method 'setExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.ExperimentType: method 'setExperiments' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Classification.ExperimentType.instrumentTypes

List of 
instrument type associated to an experiment type.
  @param  Clas_ExperimentType self
  @param  ApiSet values
**/
void *Clas_ExperimentType_SetInstrumentTypes(Clas_ExperimentType self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setInstrumentTypes");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.ExperimentType: cannot find method 'setInstrumentTypes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.ExperimentType: method 'setInstrumentTypes' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Classification.AbstractCategory.name

Name of category
  @param  Clas_ExperimentType self
  @param  ApiString value
**/
void *Clas_ExperimentType_SetName(Clas_ExperimentType self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.ExperimentType: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.ExperimentType: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Classification.ExperimentType.protocols

The list of 
protocol associated to an experiment type.
  @param  Clas_ExperimentType self
  @param  ApiSet values
**/
void *Clas_ExperimentType_SetProtocols(Clas_ExperimentType self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setProtocols");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.ExperimentType: cannot find method 'setProtocols'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.ExperimentType: method 'setProtocols' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Classification.ExperimentType.sampleCategories

List of 
sample category associated to an experiment type. It represents the list 
of possible sample category that can be used by a certain type of 
experiment.
  @param  Clas_ExperimentType self
  @param  ApiSet values
**/
void *Clas_ExperimentType_SetSampleCategories(Clas_ExperimentType self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSampleCategories");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.ExperimentType: cannot find method 'setSampleCategories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.ExperimentType: method 'setSampleCategories' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Classification.ExperimentType.experiments

The list 
of experiments associated to a particular type of experiment.
  @param  Clas_ExperimentType self
  @returns   the result
**/
ApiList Clas_ExperimentType_SortedExperiments(Clas_ExperimentType self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedExperiments");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.ExperimentType: cannot find method 'sortedExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.ExperimentType: method 'sortedExperiments' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Classification.ExperimentType.instrumentTypes

List 
of instrument type associated to an experiment type.
  @param  Clas_ExperimentType self
  @returns   the result
**/
ApiList Clas_ExperimentType_SortedInstrumentTypes(Clas_ExperimentType self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedInstrumentTypes");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.ExperimentType: cannot find method 'sortedInstrumentTypes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.ExperimentType: method 'sortedInstrumentTypes' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Classification.ExperimentType.protocols

The list of 
protocol associated to an experiment type.
  @param  Clas_ExperimentType self
  @returns   the result
**/
ApiList Clas_ExperimentType_SortedProtocols(Clas_ExperimentType self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedProtocols");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.ExperimentType: cannot find method 'sortedProtocols'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.ExperimentType: method 'sortedProtocols' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Classification.ExperimentType.sampleCategories

List 
of sample category associated to an experiment type. It represents the 
list of possible sample category that can be used by a certain type of 
experiment.
  @param  Clas_ExperimentType self
  @returns   the result
**/
ApiList Clas_ExperimentType_SortedSampleCategories(Clas_ExperimentType self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedSampleCategories");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.ExperimentType: cannot find method 'sortedSampleCategories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.ExperimentType: method 'sortedSampleCategories' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
