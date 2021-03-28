
#include "ccp.h"

/*
  List of chemical shift anisotropy measurements
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ShiftAnisotropyList self
  @param  Impl_ApplicationData value
**/
void *Nmr_ShiftAnisotropyList_AddApplicationData(Nmr_ShiftAnisotropyList self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries for 
MeasurementList
  @param  Nmr_ShiftAnisotropyList self
  @param  Entr_Entry value
**/
void *Nmr_ShiftAnisotropyList_AddEntry(Nmr_ShiftAnisotropyList self, Entr_Entry value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addEntry");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'addEntry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'addEntry' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.Nmr.ShiftAnisotropyList.experiments

Experiments for 
which ShiftAnisotropyList is valid
  @param  Nmr_ShiftAnisotropyList self
  @param  Nmr_Experiment value
**/
void *Nmr_ShiftAnisotropyList_AddExperiment(Nmr_ShiftAnisotropyList self, Nmr_Experiment value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addExperiment");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'addExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'addExperiment' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs 
using MeasurementList as input
  @param  Nmr_ShiftAnisotropyList self
  @param  Nsim_Run value
**/
void *Nmr_ShiftAnisotropyList_AddInputToNmrRun(Nmr_ShiftAnisotropyList self, Nsim_Run value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addInputToNmrRun");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'addInputToNmrRun'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'addInputToNmrRun' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_ShiftAnisotropyList self
  @param  Vald_NmrMeasurementListValidation value
**/
void *Nmr_ShiftAnisotropyList_AddNmrMeasurementListValidation(Nmr_ShiftAnisotropyList self, Vald_NmrMeasurementListValidation value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addNmrMeasurementListValidation");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'addNmrMeasurementListValidation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'addNmrMeasurementListValidation' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.nmr.Nmr.ShiftAnisotropyList
  @param  Nmr_ShiftAnisotropyList self
  @param  ApiBoolean complete
**/
void *Nmr_ShiftAnisotropyList_CheckAllValid(Nmr_ShiftAnisotropyList self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.nmr.Nmr.ShiftAnisotropyList
  @param  Nmr_ShiftAnisotropyList self
  @param  ApiBoolean complete
**/
void *Nmr_ShiftAnisotropyList_CheckValid(Nmr_ShiftAnisotropyList self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'checkValid' is not callable");
  
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
  @param  Nmr_ShiftAnisotropyList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_ShiftAnisotropyList_FindAllApplicationData(Nmr_ShiftAnisotropyList self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'findAllApplicationData' is not callable");
  
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
  @param  Nmr_ShiftAnisotropyList self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_ShiftAnisotropyList_FindAllApplicationData_keyval0(Nmr_ShiftAnisotropyList self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ShiftAnisotropyList_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ShiftAnisotropyList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_ShiftAnisotropyList_FindAllApplicationData_keyval1(Nmr_ShiftAnisotropyList self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ShiftAnisotropyList_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ShiftAnisotropyList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_ShiftAnisotropyList_FindAllApplicationData_keyval2(Nmr_ShiftAnisotropyList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ShiftAnisotropyList_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ShiftAnisotropyList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_ShiftAnisotropyList_FindAllApplicationData_keyval3(Nmr_ShiftAnisotropyList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ShiftAnisotropyList_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ShiftAnisotropyList self
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
ApiList Nmr_ShiftAnisotropyList_FindAllApplicationData_keyval4(Nmr_ShiftAnisotropyList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ShiftAnisotropyList_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_ShiftAnisotropyList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftAnisotropyList_FindAllEntries(Nmr_ShiftAnisotropyList self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllEntries");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'findAllEntries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'findAllEntries' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_ShiftAnisotropyList self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftAnisotropyList_FindAllEntries_keyval0(Nmr_ShiftAnisotropyList self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ShiftAnisotropyList_FindAllEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_ShiftAnisotropyList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftAnisotropyList_FindAllEntries_keyval1(Nmr_ShiftAnisotropyList self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ShiftAnisotropyList_FindAllEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_ShiftAnisotropyList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftAnisotropyList_FindAllEntries_keyval2(Nmr_ShiftAnisotropyList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ShiftAnisotropyList_FindAllEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_ShiftAnisotropyList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftAnisotropyList_FindAllEntries_keyval3(Nmr_ShiftAnisotropyList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ShiftAnisotropyList_FindAllEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_ShiftAnisotropyList self
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
ApiSet Nmr_ShiftAnisotropyList_FindAllEntries_keyval4(Nmr_ShiftAnisotropyList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ShiftAnisotropyList_FindAllEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ShiftAnisotropyList.experiments

Experiments for 
which ShiftAnisotropyList is valid
  @param  Nmr_ShiftAnisotropyList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftAnisotropyList_FindAllExperiments(Nmr_ShiftAnisotropyList self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllExperiments");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'findAllExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'findAllExperiments' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ShiftAnisotropyList.experiments

Experiments for 
which ShiftAnisotropyList is valid
  @param  Nmr_ShiftAnisotropyList self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftAnisotropyList_FindAllExperiments_keyval0(Nmr_ShiftAnisotropyList self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ShiftAnisotropyList_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ShiftAnisotropyList.experiments

Experiments for 
which ShiftAnisotropyList is valid
  @param  Nmr_ShiftAnisotropyList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftAnisotropyList_FindAllExperiments_keyval1(Nmr_ShiftAnisotropyList self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ShiftAnisotropyList_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ShiftAnisotropyList.experiments

Experiments for 
which ShiftAnisotropyList is valid
  @param  Nmr_ShiftAnisotropyList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftAnisotropyList_FindAllExperiments_keyval2(Nmr_ShiftAnisotropyList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ShiftAnisotropyList_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ShiftAnisotropyList.experiments

Experiments for 
which ShiftAnisotropyList is valid
  @param  Nmr_ShiftAnisotropyList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftAnisotropyList_FindAllExperiments_keyval3(Nmr_ShiftAnisotropyList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ShiftAnisotropyList_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ShiftAnisotropyList.experiments

Experiments for 
which ShiftAnisotropyList is valid
  @param  Nmr_ShiftAnisotropyList self
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
ApiSet Nmr_ShiftAnisotropyList_FindAllExperiments_keyval4(Nmr_ShiftAnisotropyList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ShiftAnisotropyList_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_ShiftAnisotropyList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftAnisotropyList_FindAllInputToNmrRuns(Nmr_ShiftAnisotropyList self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllInputToNmrRuns");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'findAllInputToNmrRuns'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'findAllInputToNmrRuns' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_ShiftAnisotropyList self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftAnisotropyList_FindAllInputToNmrRuns_keyval0(Nmr_ShiftAnisotropyList self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ShiftAnisotropyList_FindAllInputToNmrRuns(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_ShiftAnisotropyList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftAnisotropyList_FindAllInputToNmrRuns_keyval1(Nmr_ShiftAnisotropyList self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ShiftAnisotropyList_FindAllInputToNmrRuns(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_ShiftAnisotropyList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftAnisotropyList_FindAllInputToNmrRuns_keyval2(Nmr_ShiftAnisotropyList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ShiftAnisotropyList_FindAllInputToNmrRuns(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_ShiftAnisotropyList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftAnisotropyList_FindAllInputToNmrRuns_keyval3(Nmr_ShiftAnisotropyList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ShiftAnisotropyList_FindAllInputToNmrRuns(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_ShiftAnisotropyList self
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
ApiSet Nmr_ShiftAnisotropyList_FindAllInputToNmrRuns_keyval4(Nmr_ShiftAnisotropyList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ShiftAnisotropyList_FindAllInputToNmrRuns(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ShiftAnisotropyList.measurements

child link to 
class ShiftAnisotropy
  @param  Nmr_ShiftAnisotropyList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftAnisotropyList_FindAllMeasurements(Nmr_ShiftAnisotropyList self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllMeasurements");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'findAllMeasurements'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'findAllMeasurements' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ShiftAnisotropyList.measurements

child link to 
class ShiftAnisotropy
  @param  Nmr_ShiftAnisotropyList self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftAnisotropyList_FindAllMeasurements_keyval0(Nmr_ShiftAnisotropyList self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ShiftAnisotropyList_FindAllMeasurements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ShiftAnisotropyList.measurements

child link to 
class ShiftAnisotropy
  @param  Nmr_ShiftAnisotropyList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftAnisotropyList_FindAllMeasurements_keyval1(Nmr_ShiftAnisotropyList self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ShiftAnisotropyList_FindAllMeasurements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ShiftAnisotropyList.measurements

child link to 
class ShiftAnisotropy
  @param  Nmr_ShiftAnisotropyList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftAnisotropyList_FindAllMeasurements_keyval2(Nmr_ShiftAnisotropyList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ShiftAnisotropyList_FindAllMeasurements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ShiftAnisotropyList.measurements

child link to 
class ShiftAnisotropy
  @param  Nmr_ShiftAnisotropyList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftAnisotropyList_FindAllMeasurements_keyval3(Nmr_ShiftAnisotropyList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ShiftAnisotropyList_FindAllMeasurements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ShiftAnisotropyList.measurements

child link to 
class ShiftAnisotropy
  @param  Nmr_ShiftAnisotropyList self
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
ApiSet Nmr_ShiftAnisotropyList_FindAllMeasurements_keyval4(Nmr_ShiftAnisotropyList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ShiftAnisotropyList_FindAllMeasurements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_ShiftAnisotropyList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftAnisotropyList_FindAllNmrMeasurementListValidations(Nmr_ShiftAnisotropyList self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllNmrMeasurementListValidations");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'findAllNmrMeasurementListValidations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'findAllNmrMeasurementListValidations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_ShiftAnisotropyList self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftAnisotropyList_FindAllNmrMeasurementListValidations_keyval0(Nmr_ShiftAnisotropyList self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ShiftAnisotropyList_FindAllNmrMeasurementListValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_ShiftAnisotropyList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftAnisotropyList_FindAllNmrMeasurementListValidations_keyval1(Nmr_ShiftAnisotropyList self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ShiftAnisotropyList_FindAllNmrMeasurementListValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_ShiftAnisotropyList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftAnisotropyList_FindAllNmrMeasurementListValidations_keyval2(Nmr_ShiftAnisotropyList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ShiftAnisotropyList_FindAllNmrMeasurementListValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_ShiftAnisotropyList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftAnisotropyList_FindAllNmrMeasurementListValidations_keyval3(Nmr_ShiftAnisotropyList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ShiftAnisotropyList_FindAllNmrMeasurementListValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_ShiftAnisotropyList self
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
ApiSet Nmr_ShiftAnisotropyList_FindAllNmrMeasurementListValidations_keyval4(Nmr_ShiftAnisotropyList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ShiftAnisotropyList_FindAllNmrMeasurementListValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ShiftAnisotropyList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_ShiftAnisotropyList_FindFirstApplicationData(Nmr_ShiftAnisotropyList self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nmr_ShiftAnisotropyList self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_ShiftAnisotropyList_FindFirstApplicationData_keyval0(Nmr_ShiftAnisotropyList self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ShiftAnisotropyList_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ShiftAnisotropyList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_ShiftAnisotropyList_FindFirstApplicationData_keyval1(Nmr_ShiftAnisotropyList self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ShiftAnisotropyList_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ShiftAnisotropyList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_ShiftAnisotropyList_FindFirstApplicationData_keyval2(Nmr_ShiftAnisotropyList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ShiftAnisotropyList_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ShiftAnisotropyList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_ShiftAnisotropyList_FindFirstApplicationData_keyval3(Nmr_ShiftAnisotropyList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ShiftAnisotropyList_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ShiftAnisotropyList self
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
Impl_ApplicationData Nmr_ShiftAnisotropyList_FindFirstApplicationData_keyval4(Nmr_ShiftAnisotropyList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ShiftAnisotropyList_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_ShiftAnisotropyList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Nmr_ShiftAnisotropyList_FindFirstEntry(Nmr_ShiftAnisotropyList self, ApiMap conditions)
{
  
  Entr_Entry obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstEntry");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'findFirstEntry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'findFirstEntry' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_ShiftAnisotropyList self
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Nmr_ShiftAnisotropyList_FindFirstEntry_keyval0(Nmr_ShiftAnisotropyList self)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ShiftAnisotropyList_FindFirstEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_ShiftAnisotropyList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Nmr_ShiftAnisotropyList_FindFirstEntry_keyval1(Nmr_ShiftAnisotropyList self, char * key, ApiObject value)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ShiftAnisotropyList_FindFirstEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_ShiftAnisotropyList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Nmr_ShiftAnisotropyList_FindFirstEntry_keyval2(Nmr_ShiftAnisotropyList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ShiftAnisotropyList_FindFirstEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_ShiftAnisotropyList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Nmr_ShiftAnisotropyList_FindFirstEntry_keyval3(Nmr_ShiftAnisotropyList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ShiftAnisotropyList_FindFirstEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_ShiftAnisotropyList self
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
Entr_Entry Nmr_ShiftAnisotropyList_FindFirstEntry_keyval4(Nmr_ShiftAnisotropyList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ShiftAnisotropyList_FindFirstEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ShiftAnisotropyList.experiments

Experiments 
for which ShiftAnisotropyList is valid
  @param  Nmr_ShiftAnisotropyList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Nmr_ShiftAnisotropyList_FindFirstExperiment(Nmr_ShiftAnisotropyList self, ApiMap conditions)
{
  
  Nmr_Experiment obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstExperiment");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'findFirstExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'findFirstExperiment' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ShiftAnisotropyList.experiments

Experiments 
for which ShiftAnisotropyList is valid
  @param  Nmr_ShiftAnisotropyList self
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Nmr_ShiftAnisotropyList_FindFirstExperiment_keyval0(Nmr_ShiftAnisotropyList self)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ShiftAnisotropyList_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ShiftAnisotropyList.experiments

Experiments 
for which ShiftAnisotropyList is valid
  @param  Nmr_ShiftAnisotropyList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Nmr_ShiftAnisotropyList_FindFirstExperiment_keyval1(Nmr_ShiftAnisotropyList self, char * key, ApiObject value)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ShiftAnisotropyList_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ShiftAnisotropyList.experiments

Experiments 
for which ShiftAnisotropyList is valid
  @param  Nmr_ShiftAnisotropyList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Nmr_ShiftAnisotropyList_FindFirstExperiment_keyval2(Nmr_ShiftAnisotropyList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ShiftAnisotropyList_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ShiftAnisotropyList.experiments

Experiments 
for which ShiftAnisotropyList is valid
  @param  Nmr_ShiftAnisotropyList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Nmr_ShiftAnisotropyList_FindFirstExperiment_keyval3(Nmr_ShiftAnisotropyList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ShiftAnisotropyList_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ShiftAnisotropyList.experiments

Experiments 
for which ShiftAnisotropyList is valid
  @param  Nmr_ShiftAnisotropyList self
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
Nmr_Experiment Nmr_ShiftAnisotropyList_FindFirstExperiment_keyval4(Nmr_ShiftAnisotropyList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ShiftAnisotropyList_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_ShiftAnisotropyList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nsim_Run Nmr_ShiftAnisotropyList_FindFirstInputToNmrRun(Nmr_ShiftAnisotropyList self, ApiMap conditions)
{
  
  Nsim_Run obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstInputToNmrRun");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'findFirstInputToNmrRun'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'findFirstInputToNmrRun' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_ShiftAnisotropyList self
  @returns  the first value that satisfies the conditions 
**/
Nsim_Run Nmr_ShiftAnisotropyList_FindFirstInputToNmrRun_keyval0(Nmr_ShiftAnisotropyList self)
{
  
  Nsim_Run  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ShiftAnisotropyList_FindFirstInputToNmrRun(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_ShiftAnisotropyList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nsim_Run Nmr_ShiftAnisotropyList_FindFirstInputToNmrRun_keyval1(Nmr_ShiftAnisotropyList self, char * key, ApiObject value)
{
  
  Nsim_Run  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ShiftAnisotropyList_FindFirstInputToNmrRun(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_ShiftAnisotropyList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nsim_Run Nmr_ShiftAnisotropyList_FindFirstInputToNmrRun_keyval2(Nmr_ShiftAnisotropyList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nsim_Run  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ShiftAnisotropyList_FindFirstInputToNmrRun(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_ShiftAnisotropyList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nsim_Run Nmr_ShiftAnisotropyList_FindFirstInputToNmrRun_keyval3(Nmr_ShiftAnisotropyList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nsim_Run  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ShiftAnisotropyList_FindFirstInputToNmrRun(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_ShiftAnisotropyList self
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
Nsim_Run Nmr_ShiftAnisotropyList_FindFirstInputToNmrRun_keyval4(Nmr_ShiftAnisotropyList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nsim_Run  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ShiftAnisotropyList_FindFirstInputToNmrRun(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ShiftAnisotropyList.measurements

child link 
to class ShiftAnisotropy
  @param  Nmr_ShiftAnisotropyList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_ShiftAnisotropy Nmr_ShiftAnisotropyList_FindFirstMeasurement(Nmr_ShiftAnisotropyList self, ApiMap conditions)
{
  
  Nmr_ShiftAnisotropy obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstMeasurement");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'findFirstMeasurement'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'findFirstMeasurement' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ShiftAnisotropyList.measurements

child link 
to class ShiftAnisotropy
  @param  Nmr_ShiftAnisotropyList self
  @returns  the first value that satisfies the conditions 
**/
Nmr_ShiftAnisotropy Nmr_ShiftAnisotropyList_FindFirstMeasurement_keyval0(Nmr_ShiftAnisotropyList self)
{
  
  Nmr_ShiftAnisotropy  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ShiftAnisotropyList_FindFirstMeasurement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ShiftAnisotropyList.measurements

child link 
to class ShiftAnisotropy
  @param  Nmr_ShiftAnisotropyList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_ShiftAnisotropy Nmr_ShiftAnisotropyList_FindFirstMeasurement_keyval1(Nmr_ShiftAnisotropyList self, char * key, ApiObject value)
{
  
  Nmr_ShiftAnisotropy  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ShiftAnisotropyList_FindFirstMeasurement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ShiftAnisotropyList.measurements

child link 
to class ShiftAnisotropy
  @param  Nmr_ShiftAnisotropyList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_ShiftAnisotropy Nmr_ShiftAnisotropyList_FindFirstMeasurement_keyval2(Nmr_ShiftAnisotropyList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_ShiftAnisotropy  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ShiftAnisotropyList_FindFirstMeasurement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ShiftAnisotropyList.measurements

child link 
to class ShiftAnisotropy
  @param  Nmr_ShiftAnisotropyList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_ShiftAnisotropy Nmr_ShiftAnisotropyList_FindFirstMeasurement_keyval3(Nmr_ShiftAnisotropyList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_ShiftAnisotropy  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ShiftAnisotropyList_FindFirstMeasurement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ShiftAnisotropyList.measurements

child link 
to class ShiftAnisotropy
  @param  Nmr_ShiftAnisotropyList self
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
Nmr_ShiftAnisotropy Nmr_ShiftAnisotropyList_FindFirstMeasurement_keyval4(Nmr_ShiftAnisotropyList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_ShiftAnisotropy  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ShiftAnisotropyList_FindFirstMeasurement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_ShiftAnisotropyList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Vald_NmrMeasurementListValidation Nmr_ShiftAnisotropyList_FindFirstNmrMeasurementListValidation(Nmr_ShiftAnisotropyList self, ApiMap conditions)
{
  
  Vald_NmrMeasurementListValidation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstNmrMeasurementListValidation");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'findFirstNmrMeasurementListValidation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'findFirstNmrMeasurementListValidation' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_ShiftAnisotropyList self
  @returns  the first value that satisfies the conditions 
**/
Vald_NmrMeasurementListValidation Nmr_ShiftAnisotropyList_FindFirstNmrMeasurementListValidation_keyval0(Nmr_ShiftAnisotropyList self)
{
  
  Vald_NmrMeasurementListValidation  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ShiftAnisotropyList_FindFirstNmrMeasurementListValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_ShiftAnisotropyList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Vald_NmrMeasurementListValidation Nmr_ShiftAnisotropyList_FindFirstNmrMeasurementListValidation_keyval1(Nmr_ShiftAnisotropyList self, char * key, ApiObject value)
{
  
  Vald_NmrMeasurementListValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ShiftAnisotropyList_FindFirstNmrMeasurementListValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_ShiftAnisotropyList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Vald_NmrMeasurementListValidation Nmr_ShiftAnisotropyList_FindFirstNmrMeasurementListValidation_keyval2(Nmr_ShiftAnisotropyList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Vald_NmrMeasurementListValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ShiftAnisotropyList_FindFirstNmrMeasurementListValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_ShiftAnisotropyList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Vald_NmrMeasurementListValidation Nmr_ShiftAnisotropyList_FindFirstNmrMeasurementListValidation_keyval3(Nmr_ShiftAnisotropyList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Vald_NmrMeasurementListValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ShiftAnisotropyList_FindFirstNmrMeasurementListValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_ShiftAnisotropyList self
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
Vald_NmrMeasurementListValidation Nmr_ShiftAnisotropyList_FindFirstNmrMeasurementListValidation_keyval4(Nmr_ShiftAnisotropyList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Vald_NmrMeasurementListValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ShiftAnisotropyList_FindFirstNmrMeasurementListValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.nmr.Nmr.ShiftAnisotropyList
  @param  Nmr_ShiftAnisotropyList self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Nmr_ShiftAnisotropyList_Get(Nmr_ShiftAnisotropyList self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_ShiftAnisotropyList self
  @returns   the result
**/
Acco_AccessObject Nmr_ShiftAnisotropyList_GetAccess(Nmr_ShiftAnisotropyList self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'getAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Nmr_ShiftAnisotropyList self
  @returns   the result
**/
Acco_AccessObject Nmr_ShiftAnisotropyList_GetActiveAccess(Nmr_ShiftAnisotropyList self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'getActiveAccess' is not callable");
  
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
  @param  Nmr_ShiftAnisotropyList self
  @returns   the result
**/
ApiList Nmr_ShiftAnisotropyList_GetApplicationData(Nmr_ShiftAnisotropyList self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.Nmr.ShiftAnisotropyList
  @param  Nmr_ShiftAnisotropyList self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nmr_ShiftAnisotropyList Nmr_ShiftAnisotropyList_GetByKey(Nmr_ShiftAnisotropyList self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Nmr_ShiftAnisotropyList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'getByKey' is not callable");
  
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
  @param  Nmr_ShiftAnisotropyList self
  @returns   the result
**/
ApiString Nmr_ShiftAnisotropyList_GetClassName(Nmr_ShiftAnisotropyList self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.details

Free text, for 
notes, explanatory comments, etc.
  @param  Nmr_ShiftAnisotropyList self
  @returns   the result
**/
ApiString Nmr_ShiftAnisotropyList_GetDetails(Nmr_ShiftAnisotropyList self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'getDetails' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries for 
MeasurementList
  @param  Nmr_ShiftAnisotropyList self
  @returns   the result
**/
ApiSet Nmr_ShiftAnisotropyList_GetEntries(Nmr_ShiftAnisotropyList self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getEntries");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'getEntries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'getEntries' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ShiftAnisotropyList.experiments

Experiments for 
which ShiftAnisotropyList is valid
  @param  Nmr_ShiftAnisotropyList self
  @returns   the result
**/
ApiSet Nmr_ShiftAnisotropyList_GetExperiments(Nmr_ShiftAnisotropyList self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExperiments");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'getExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'getExperiments' is not callable");
  
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
  @param  Nmr_ShiftAnisotropyList self
  @returns   the result
**/
ApiList Nmr_ShiftAnisotropyList_GetFieldNames(Nmr_ShiftAnisotropyList self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
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
  @param  Nmr_ShiftAnisotropyList self
  @returns   the result
**/
ApiBoolean Nmr_ShiftAnisotropyList_GetInConstructor(Nmr_ShiftAnisotropyList self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'getInConstructor' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs 
using MeasurementList as input
  @param  Nmr_ShiftAnisotropyList self
  @returns   the result
**/
ApiSet Nmr_ShiftAnisotropyList_GetInputToNmrRuns(Nmr_ShiftAnisotropyList self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInputToNmrRuns");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'getInputToNmrRuns'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'getInputToNmrRuns' is not callable");
  
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
  @param  Nmr_ShiftAnisotropyList self
  @returns   the result
**/
ApiBoolean Nmr_ShiftAnisotropyList_GetIsDeleted(Nmr_ShiftAnisotropyList self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.isSimulated

Are data in 
this list simulated? The attribute is an annotation more than anything 
else, as there are no corresponding constraints.
  @param  Nmr_ShiftAnisotropyList self
  @returns   the result
**/
ApiBoolean Nmr_ShiftAnisotropyList_GetIsSimulated(Nmr_ShiftAnisotropyList self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsSimulated");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'getIsSimulated'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'getIsSimulated' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ShiftAnisotropyList.measurements

child link to 
class ShiftAnisotropy
  @param  Nmr_ShiftAnisotropyList self
  @returns   the result
**/
ApiSet Nmr_ShiftAnisotropyList_GetMeasurements(Nmr_ShiftAnisotropyList self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMeasurements");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'getMeasurements'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'getMeasurements' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.method

Default method used 
to calculate measurements. May be overridden for individual measurements 
in the list.
  @param  Nmr_ShiftAnisotropyList self
  @returns   the result
**/
Meth_Method Nmr_ShiftAnisotropyList_GetMethod(Nmr_ShiftAnisotropyList self)
{
  
  Meth_Method obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMethod");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'getMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'getMethod' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.name

Measurement List name, 
freely chosen by user. Intended to identify the list from other lists of 
the same type.
  @param  Nmr_ShiftAnisotropyList self
  @returns   the result
**/
ApiString Nmr_ShiftAnisotropyList_GetName(Nmr_ShiftAnisotropyList self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'getName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_ShiftAnisotropyList self
  @returns   the result
**/
ApiSet Nmr_ShiftAnisotropyList_GetNmrMeasurementListValidations(Nmr_ShiftAnisotropyList self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrMeasurementListValidations");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'getNmrMeasurementListValidations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'getNmrMeasurementListValidations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.nmrProject

parent link
  @param  Nmr_ShiftAnisotropyList self
  @returns   the result
**/
Nmr_NmrProject Nmr_ShiftAnisotropyList_GetNmrProject(Nmr_ShiftAnisotropyList self)
{
  
  Nmr_NmrProject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrProject");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'getNmrProject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'getNmrProject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.outputFromNmrRun

NmrSim.Run 
from which Measuremnet list is produced.
  @param  Nmr_ShiftAnisotropyList self
  @returns   the result
**/
Nsim_Run Nmr_ShiftAnisotropyList_GetOutputFromNmrRun(Nmr_ShiftAnisotropyList self)
{
  
  Nsim_Run obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getOutputFromNmrRun");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'getOutputFromNmrRun'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'getOutputFromNmrRun' is not callable");
  
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
  @param  Nmr_ShiftAnisotropyList self
  @returns   the result
**/
ApiString Nmr_ShiftAnisotropyList_GetPackageName(Nmr_ShiftAnisotropyList self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'getPackageName' is not callable");
  
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
  @param  Nmr_ShiftAnisotropyList self
  @returns   the result
**/
ApiString Nmr_ShiftAnisotropyList_GetPackageShortName(Nmr_ShiftAnisotropyList self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.parent

link to parent 
object - synonym for nmrProject
  @param  Nmr_ShiftAnisotropyList self
  @returns   the result
**/
Nmr_NmrProject Nmr_ShiftAnisotropyList_GetParent(Nmr_ShiftAnisotropyList self)
{
  
  Nmr_NmrProject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'getParent' is not callable");
  
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
  @param  Nmr_ShiftAnisotropyList self
  @returns   the result
**/
ApiString Nmr_ShiftAnisotropyList_GetQualifiedName(Nmr_ShiftAnisotropyList self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'getQualifiedName' is not callable");
  
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
  @param  Nmr_ShiftAnisotropyList self
  @returns   the result
**/
Impl_MemopsRoot Nmr_ShiftAnisotropyList_GetRoot(Nmr_ShiftAnisotropyList self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmr_ShiftAnisotropyList self
  @returns   the result
**/
ApiInteger Nmr_ShiftAnisotropyList_GetSerial(Nmr_ShiftAnisotropyList self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'getSerial' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ShiftAnisotropyList.sf

Spectrometer frequency in 
MHz at which measurements were measured.
  @param  Nmr_ShiftAnisotropyList self
  @returns   the result
**/
ApiFloat Nmr_ShiftAnisotropyList_GetSf(Nmr_ShiftAnisotropyList self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSf");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'getSf'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'getSf' is not callable");
  
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
  @param  Nmr_ShiftAnisotropyList self
  @returns   the result
**/
Impl_TopObject Nmr_ShiftAnisotropyList_GetTopObject(Nmr_ShiftAnisotropyList self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ShiftAnisotropyList.unit

Unit of chemical shift 
anisotropy measurement - default 'ppm'.
  @param  Nmr_ShiftAnisotropyList self
  @returns   the result
**/
ApiString Nmr_ShiftAnisotropyList_GetUnit(Nmr_ShiftAnisotropyList self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getUnit");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'getUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'getUnit' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.nmr.Nmr.ShiftAnisotropyList
  @param  Nmr_NmrProject parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_ShiftAnisotropyList Nmr_ShiftAnisotropyList_Init(Nmr_NmrProject parent, ApiMap attrlinks)
{
  
  return Nmr_NmrProject_NewShiftAnisotropyList(parent, attrlinks);
}

/**
  Constructor for ccp.nmr.Nmr.ShiftAnisotropyList
  @param  Nmr_NmrProject parent
  @returns  the new object
**/
Nmr_ShiftAnisotropyList Nmr_ShiftAnisotropyList_Init_reqd(Nmr_NmrProject parent)
{
  
  Nmr_ShiftAnisotropyList  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Nmr_ShiftAnisotropyList_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.ShiftAnisotropy
  @param  Nmr_ShiftAnisotropyList self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_ShiftAnisotropy Nmr_ShiftAnisotropyList_NewShiftAnisotropy(Nmr_ShiftAnisotropyList self, ApiMap attrlinks)
{
  
  Nmr_ShiftAnisotropy obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newShiftAnisotropy");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'newShiftAnisotropy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'newShiftAnisotropy' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.ShiftAnisotropy
  @param  Nmr_ShiftAnisotropyList self
  @param  Nmr_Resonance resonance
  @param  float value
  @returns  the new object
**/
Nmr_ShiftAnisotropy Nmr_ShiftAnisotropyList_NewShiftAnisotropy_reqd(Nmr_ShiftAnisotropyList self, Nmr_Resonance resonance, float value)
{
  
  Nmr_ShiftAnisotropy  obj;
  PyObject *attrlinks = PyDict_New();
  ApiFloat api__value = ApiFloat_New(value);

  PyDict_SetItemString(attrlinks, "resonance", resonance);
  PyDict_SetItemString(attrlinks, "value", api__value);
  
  obj = Nmr_ShiftAnisotropyList_NewShiftAnisotropy(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__value);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ShiftAnisotropyList self
  @param  Impl_ApplicationData value
**/
void *Nmr_ShiftAnisotropyList_RemoveApplicationData(Nmr_ShiftAnisotropyList self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries for 
MeasurementList
  @param  Nmr_ShiftAnisotropyList self
  @param  Entr_Entry value
**/
void *Nmr_ShiftAnisotropyList_RemoveEntry(Nmr_ShiftAnisotropyList self, Entr_Entry value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeEntry");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'removeEntry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'removeEntry' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.Nmr.ShiftAnisotropyList.experiments

Experiments for 
which ShiftAnisotropyList is valid
  @param  Nmr_ShiftAnisotropyList self
  @param  Nmr_Experiment value
**/
void *Nmr_ShiftAnisotropyList_RemoveExperiment(Nmr_ShiftAnisotropyList self, Nmr_Experiment value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeExperiment");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'removeExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'removeExperiment' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_ShiftAnisotropyList self
  @param  Nsim_Run value
**/
void *Nmr_ShiftAnisotropyList_RemoveInputToNmrRun(Nmr_ShiftAnisotropyList self, Nsim_Run value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeInputToNmrRun");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'removeInputToNmrRun'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'removeInputToNmrRun' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_ShiftAnisotropyList self
  @param  Vald_NmrMeasurementListValidation value
**/
void *Nmr_ShiftAnisotropyList_RemoveNmrMeasurementListValidation(Nmr_ShiftAnisotropyList self, Vald_NmrMeasurementListValidation value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeNmrMeasurementListValidation");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'removeNmrMeasurementListValidation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'removeNmrMeasurementListValidation' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.nmr.Nmr.ShiftAnisotropyList
  @param  Nmr_ShiftAnisotropyList self
  @param  ApiString name
  @param  ApiObject value
**/
void *Nmr_ShiftAnisotropyList_Set(Nmr_ShiftAnisotropyList self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_ShiftAnisotropyList self
  @param  Acco_AccessObject value
**/
void *Nmr_ShiftAnisotropyList_SetAccess(Nmr_ShiftAnisotropyList self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'setAccess' is not callable");
  
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
  @param  Nmr_ShiftAnisotropyList self
  @param  ApiList values
**/
void *Nmr_ShiftAnisotropyList_SetApplicationData(Nmr_ShiftAnisotropyList self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.AbstractMeasurementList.details

Free text, for 
notes, explanatory comments, etc.
  @param  Nmr_ShiftAnisotropyList self
  @param  ApiString value
**/
void *Nmr_ShiftAnisotropyList_SetDetails(Nmr_ShiftAnisotropyList self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries for 
MeasurementList
  @param  Nmr_ShiftAnisotropyList self
  @param  ApiSet values
**/
void *Nmr_ShiftAnisotropyList_SetEntries(Nmr_ShiftAnisotropyList self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setEntries");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'setEntries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'setEntries' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ShiftAnisotropyList.experiments

Experiments for 
which ShiftAnisotropyList is valid
  @param  Nmr_ShiftAnisotropyList self
  @param  ApiSet values
**/
void *Nmr_ShiftAnisotropyList_SetExperiments(Nmr_ShiftAnisotropyList self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setExperiments");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'setExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'setExperiments' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs 
using MeasurementList as input
  @param  Nmr_ShiftAnisotropyList self
  @param  ApiSet values
**/
void *Nmr_ShiftAnisotropyList_SetInputToNmrRuns(Nmr_ShiftAnisotropyList self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setInputToNmrRuns");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'setInputToNmrRuns'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'setInputToNmrRuns' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.AbstractMeasurementList.isSimulated

Are data in 
this list simulated? The attribute is an annotation more than anything 
else, as there are no corresponding constraints.
  @param  Nmr_ShiftAnisotropyList self
  @param  ApiBoolean value
**/
void *Nmr_ShiftAnisotropyList_SetIsSimulated(Nmr_ShiftAnisotropyList self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsSimulated");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'setIsSimulated'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'setIsSimulated' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.AbstractMeasurementList.method

Default method used 
to calculate measurements. May be overridden for individual measurements 
in the list.
  @param  Nmr_ShiftAnisotropyList self
  @param  Meth_Method value
**/
void *Nmr_ShiftAnisotropyList_SetMethod(Nmr_ShiftAnisotropyList self, Meth_Method value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMethod");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'setMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'setMethod' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.AbstractMeasurementList.name

Measurement List name, 
freely chosen by user. Intended to identify the list from other lists of 
the same type.
  @param  Nmr_ShiftAnisotropyList self
  @param  ApiString value
**/
void *Nmr_ShiftAnisotropyList_SetName(Nmr_ShiftAnisotropyList self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_ShiftAnisotropyList self
  @param  ApiSet values
**/
void *Nmr_ShiftAnisotropyList_SetNmrMeasurementListValidations(Nmr_ShiftAnisotropyList self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNmrMeasurementListValidations");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'setNmrMeasurementListValidations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'setNmrMeasurementListValidations' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.AbstractMeasurementList.outputFromNmrRun

NmrSim.Run 
from which Measuremnet list is produced.
  @param  Nmr_ShiftAnisotropyList self
  @param  Nsim_Run value
**/
void *Nmr_ShiftAnisotropyList_SetOutputFromNmrRun(Nmr_ShiftAnisotropyList self, Nsim_Run value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setOutputFromNmrRun");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'setOutputFromNmrRun'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'setOutputFromNmrRun' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.AbstractMeasurementList.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmr_ShiftAnisotropyList self
  @param  ApiInteger value
**/
void *Nmr_ShiftAnisotropyList_SetSerial(Nmr_ShiftAnisotropyList self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ShiftAnisotropyList.sf

Spectrometer frequency in 
MHz at which measurements were measured.
  @param  Nmr_ShiftAnisotropyList self
  @param  ApiFloat value
**/
void *Nmr_ShiftAnisotropyList_SetSf(Nmr_ShiftAnisotropyList self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSf");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'setSf'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'setSf' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ShiftAnisotropyList.unit

Unit of chemical shift 
anisotropy measurement - default 'ppm'.
  @param  Nmr_ShiftAnisotropyList self
  @param  ApiString value
**/
void *Nmr_ShiftAnisotropyList_SetUnit(Nmr_ShiftAnisotropyList self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setUnit");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'setUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'setUnit' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries for 
MeasurementList
  @param  Nmr_ShiftAnisotropyList self
  @returns   the result
**/
ApiList Nmr_ShiftAnisotropyList_SortedEntries(Nmr_ShiftAnisotropyList self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedEntries");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'sortedEntries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'sortedEntries' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.ShiftAnisotropyList.experiments

Experiments for 
which ShiftAnisotropyList is valid
  @param  Nmr_ShiftAnisotropyList self
  @returns   the result
**/
ApiList Nmr_ShiftAnisotropyList_SortedExperiments(Nmr_ShiftAnisotropyList self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedExperiments");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'sortedExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'sortedExperiments' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_ShiftAnisotropyList self
  @returns   the result
**/
ApiList Nmr_ShiftAnisotropyList_SortedInputToNmrRuns(Nmr_ShiftAnisotropyList self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedInputToNmrRuns");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'sortedInputToNmrRuns'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'sortedInputToNmrRuns' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.ShiftAnisotropyList.measurements

child link to 
class ShiftAnisotropy
  @param  Nmr_ShiftAnisotropyList self
  @returns   the result
**/
ApiList Nmr_ShiftAnisotropyList_SortedMeasurements(Nmr_ShiftAnisotropyList self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedMeasurements");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'sortedMeasurements'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'sortedMeasurements' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_ShiftAnisotropyList self
  @returns   the result
**/
ApiList Nmr_ShiftAnisotropyList_SortedNmrMeasurementListValidations(Nmr_ShiftAnisotropyList self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedNmrMeasurementListValidations");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: cannot find method 'sortedNmrMeasurementListValidations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftAnisotropyList: method 'sortedNmrMeasurementListValidations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
