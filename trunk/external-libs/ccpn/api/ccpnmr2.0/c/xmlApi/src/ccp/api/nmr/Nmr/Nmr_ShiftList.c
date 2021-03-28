
#include "ccp.h"

/*
  List of chemical shifts.
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ShiftList self
  @param  Impl_ApplicationData value
**/
void *Nmr_ShiftList_AddApplicationData(Nmr_ShiftList self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.Nmr.ShiftList.dangleChains

Chains with Dangle dihedral 
angle predictions
  @param  Nmr_ShiftList self
  @param  Dang_DangleChain value
**/
void *Nmr_ShiftList_AddDangleChain(Nmr_ShiftList self, Dang_DangleChain value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addDangleChain");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'addDangleChain'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'addDangleChain' is not callable");
  
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
  @param  Nmr_ShiftList self
  @param  Entr_Entry value
**/
void *Nmr_ShiftList_AddEntry(Nmr_ShiftList self, Entr_Entry value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addEntry");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'addEntry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'addEntry' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.Nmr.ShiftList.experiments

Experiments for which shift 
list is valid
  @param  Nmr_ShiftList self
  @param  Nmr_Experiment value
**/
void *Nmr_ShiftList_AddExperiment(Nmr_ShiftList self, Nmr_Experiment value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addExperiment");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'addExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'addExperiment' is not callable");
  
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
  @param  Nmr_ShiftList self
  @param  Nsim_Run value
**/
void *Nmr_ShiftList_AddInputToNmrRun(Nmr_ShiftList self, Nsim_Run value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addInputToNmrRun");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'addInputToNmrRun'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'addInputToNmrRun' is not callable");
  
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
  @param  Nmr_ShiftList self
  @param  Vald_NmrMeasurementListValidation value
**/
void *Nmr_ShiftList_AddNmrMeasurementListValidation(Nmr_ShiftList self, Vald_NmrMeasurementListValidation value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addNmrMeasurementListValidation");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'addNmrMeasurementListValidation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'addNmrMeasurementListValidation' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.nmr.Nmr.ShiftList
  @param  Nmr_ShiftList self
  @param  ApiBoolean complete
**/
void *Nmr_ShiftList_CheckAllValid(Nmr_ShiftList self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.nmr.Nmr.ShiftList
  @param  Nmr_ShiftList self
  @param  ApiBoolean complete
**/
void *Nmr_ShiftList_CheckValid(Nmr_ShiftList self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'checkValid' is not callable");
  
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
  @param  Nmr_ShiftList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_ShiftList_FindAllApplicationData(Nmr_ShiftList self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'findAllApplicationData' is not callable");
  
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
  @param  Nmr_ShiftList self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_ShiftList_FindAllApplicationData_keyval0(Nmr_ShiftList self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ShiftList_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ShiftList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_ShiftList_FindAllApplicationData_keyval1(Nmr_ShiftList self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ShiftList_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ShiftList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_ShiftList_FindAllApplicationData_keyval2(Nmr_ShiftList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ShiftList_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ShiftList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_ShiftList_FindAllApplicationData_keyval3(Nmr_ShiftList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ShiftList_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ShiftList self
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
ApiList Nmr_ShiftList_FindAllApplicationData_keyval4(Nmr_ShiftList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ShiftList_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ShiftList.dangleChains

Chains with Dangle 
dihedral angle predictions
  @param  Nmr_ShiftList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftList_FindAllDangleChains(Nmr_ShiftList self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllDangleChains");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'findAllDangleChains'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'findAllDangleChains' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ShiftList.dangleChains

Chains with Dangle 
dihedral angle predictions
  @param  Nmr_ShiftList self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftList_FindAllDangleChains_keyval0(Nmr_ShiftList self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ShiftList_FindAllDangleChains(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ShiftList.dangleChains

Chains with Dangle 
dihedral angle predictions
  @param  Nmr_ShiftList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftList_FindAllDangleChains_keyval1(Nmr_ShiftList self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ShiftList_FindAllDangleChains(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ShiftList.dangleChains

Chains with Dangle 
dihedral angle predictions
  @param  Nmr_ShiftList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftList_FindAllDangleChains_keyval2(Nmr_ShiftList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ShiftList_FindAllDangleChains(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ShiftList.dangleChains

Chains with Dangle 
dihedral angle predictions
  @param  Nmr_ShiftList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftList_FindAllDangleChains_keyval3(Nmr_ShiftList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ShiftList_FindAllDangleChains(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ShiftList.dangleChains

Chains with Dangle 
dihedral angle predictions
  @param  Nmr_ShiftList self
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
ApiSet Nmr_ShiftList_FindAllDangleChains_keyval4(Nmr_ShiftList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ShiftList_FindAllDangleChains(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_ShiftList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftList_FindAllEntries(Nmr_ShiftList self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllEntries");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'findAllEntries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'findAllEntries' is not callable");
  
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
  @param  Nmr_ShiftList self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftList_FindAllEntries_keyval0(Nmr_ShiftList self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ShiftList_FindAllEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_ShiftList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftList_FindAllEntries_keyval1(Nmr_ShiftList self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ShiftList_FindAllEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_ShiftList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftList_FindAllEntries_keyval2(Nmr_ShiftList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ShiftList_FindAllEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_ShiftList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftList_FindAllEntries_keyval3(Nmr_ShiftList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ShiftList_FindAllEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_ShiftList self
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
ApiSet Nmr_ShiftList_FindAllEntries_keyval4(Nmr_ShiftList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ShiftList_FindAllEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ShiftList.experiments

Experiments for which 
shift list is valid
  @param  Nmr_ShiftList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftList_FindAllExperiments(Nmr_ShiftList self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllExperiments");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'findAllExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'findAllExperiments' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ShiftList.experiments

Experiments for which 
shift list is valid
  @param  Nmr_ShiftList self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftList_FindAllExperiments_keyval0(Nmr_ShiftList self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ShiftList_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ShiftList.experiments

Experiments for which 
shift list is valid
  @param  Nmr_ShiftList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftList_FindAllExperiments_keyval1(Nmr_ShiftList self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ShiftList_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ShiftList.experiments

Experiments for which 
shift list is valid
  @param  Nmr_ShiftList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftList_FindAllExperiments_keyval2(Nmr_ShiftList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ShiftList_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ShiftList.experiments

Experiments for which 
shift list is valid
  @param  Nmr_ShiftList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftList_FindAllExperiments_keyval3(Nmr_ShiftList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ShiftList_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ShiftList.experiments

Experiments for which 
shift list is valid
  @param  Nmr_ShiftList self
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
ApiSet Nmr_ShiftList_FindAllExperiments_keyval4(Nmr_ShiftList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ShiftList_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_ShiftList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftList_FindAllInputToNmrRuns(Nmr_ShiftList self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllInputToNmrRuns");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'findAllInputToNmrRuns'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'findAllInputToNmrRuns' is not callable");
  
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
  @param  Nmr_ShiftList self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftList_FindAllInputToNmrRuns_keyval0(Nmr_ShiftList self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ShiftList_FindAllInputToNmrRuns(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_ShiftList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftList_FindAllInputToNmrRuns_keyval1(Nmr_ShiftList self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ShiftList_FindAllInputToNmrRuns(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_ShiftList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftList_FindAllInputToNmrRuns_keyval2(Nmr_ShiftList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ShiftList_FindAllInputToNmrRuns(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_ShiftList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftList_FindAllInputToNmrRuns_keyval3(Nmr_ShiftList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ShiftList_FindAllInputToNmrRuns(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_ShiftList self
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
ApiSet Nmr_ShiftList_FindAllInputToNmrRuns_keyval4(Nmr_ShiftList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ShiftList_FindAllInputToNmrRuns(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ShiftList.measurements

Chemical Shift in 
ShiftList
  @param  Nmr_ShiftList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftList_FindAllMeasurements(Nmr_ShiftList self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllMeasurements");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'findAllMeasurements'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'findAllMeasurements' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ShiftList.measurements

Chemical Shift in 
ShiftList
  @param  Nmr_ShiftList self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftList_FindAllMeasurements_keyval0(Nmr_ShiftList self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ShiftList_FindAllMeasurements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ShiftList.measurements

Chemical Shift in 
ShiftList
  @param  Nmr_ShiftList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftList_FindAllMeasurements_keyval1(Nmr_ShiftList self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ShiftList_FindAllMeasurements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ShiftList.measurements

Chemical Shift in 
ShiftList
  @param  Nmr_ShiftList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftList_FindAllMeasurements_keyval2(Nmr_ShiftList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ShiftList_FindAllMeasurements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ShiftList.measurements

Chemical Shift in 
ShiftList
  @param  Nmr_ShiftList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftList_FindAllMeasurements_keyval3(Nmr_ShiftList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ShiftList_FindAllMeasurements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ShiftList.measurements

Chemical Shift in 
ShiftList
  @param  Nmr_ShiftList self
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
ApiSet Nmr_ShiftList_FindAllMeasurements_keyval4(Nmr_ShiftList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ShiftList_FindAllMeasurements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_ShiftList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftList_FindAllNmrMeasurementListValidations(Nmr_ShiftList self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllNmrMeasurementListValidations");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'findAllNmrMeasurementListValidations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'findAllNmrMeasurementListValidations' is not callable");
  
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
  @param  Nmr_ShiftList self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftList_FindAllNmrMeasurementListValidations_keyval0(Nmr_ShiftList self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ShiftList_FindAllNmrMeasurementListValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_ShiftList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftList_FindAllNmrMeasurementListValidations_keyval1(Nmr_ShiftList self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ShiftList_FindAllNmrMeasurementListValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_ShiftList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftList_FindAllNmrMeasurementListValidations_keyval2(Nmr_ShiftList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ShiftList_FindAllNmrMeasurementListValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_ShiftList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ShiftList_FindAllNmrMeasurementListValidations_keyval3(Nmr_ShiftList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ShiftList_FindAllNmrMeasurementListValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_ShiftList self
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
ApiSet Nmr_ShiftList_FindAllNmrMeasurementListValidations_keyval4(Nmr_ShiftList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ShiftList_FindAllNmrMeasurementListValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ShiftList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_ShiftList_FindFirstApplicationData(Nmr_ShiftList self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nmr_ShiftList self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_ShiftList_FindFirstApplicationData_keyval0(Nmr_ShiftList self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ShiftList_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ShiftList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_ShiftList_FindFirstApplicationData_keyval1(Nmr_ShiftList self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ShiftList_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ShiftList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_ShiftList_FindFirstApplicationData_keyval2(Nmr_ShiftList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ShiftList_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ShiftList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_ShiftList_FindFirstApplicationData_keyval3(Nmr_ShiftList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ShiftList_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ShiftList self
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
Impl_ApplicationData Nmr_ShiftList_FindFirstApplicationData_keyval4(Nmr_ShiftList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ShiftList_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ShiftList.dangleChains

Chains with Dangle 
dihedral angle predictions
  @param  Nmr_ShiftList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Dang_DangleChain Nmr_ShiftList_FindFirstDangleChain(Nmr_ShiftList self, ApiMap conditions)
{
  
  Dang_DangleChain obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstDangleChain");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'findFirstDangleChain'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'findFirstDangleChain' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ShiftList.dangleChains

Chains with Dangle 
dihedral angle predictions
  @param  Nmr_ShiftList self
  @returns  the first value that satisfies the conditions 
**/
Dang_DangleChain Nmr_ShiftList_FindFirstDangleChain_keyval0(Nmr_ShiftList self)
{
  
  Dang_DangleChain  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ShiftList_FindFirstDangleChain(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ShiftList.dangleChains

Chains with Dangle 
dihedral angle predictions
  @param  Nmr_ShiftList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Dang_DangleChain Nmr_ShiftList_FindFirstDangleChain_keyval1(Nmr_ShiftList self, char * key, ApiObject value)
{
  
  Dang_DangleChain  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ShiftList_FindFirstDangleChain(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ShiftList.dangleChains

Chains with Dangle 
dihedral angle predictions
  @param  Nmr_ShiftList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Dang_DangleChain Nmr_ShiftList_FindFirstDangleChain_keyval2(Nmr_ShiftList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Dang_DangleChain  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ShiftList_FindFirstDangleChain(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ShiftList.dangleChains

Chains with Dangle 
dihedral angle predictions
  @param  Nmr_ShiftList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Dang_DangleChain Nmr_ShiftList_FindFirstDangleChain_keyval3(Nmr_ShiftList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Dang_DangleChain  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ShiftList_FindFirstDangleChain(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ShiftList.dangleChains

Chains with Dangle 
dihedral angle predictions
  @param  Nmr_ShiftList self
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
Dang_DangleChain Nmr_ShiftList_FindFirstDangleChain_keyval4(Nmr_ShiftList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Dang_DangleChain  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ShiftList_FindFirstDangleChain(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_ShiftList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Nmr_ShiftList_FindFirstEntry(Nmr_ShiftList self, ApiMap conditions)
{
  
  Entr_Entry obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstEntry");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'findFirstEntry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'findFirstEntry' is not callable");
  
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
  @param  Nmr_ShiftList self
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Nmr_ShiftList_FindFirstEntry_keyval0(Nmr_ShiftList self)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ShiftList_FindFirstEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_ShiftList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Nmr_ShiftList_FindFirstEntry_keyval1(Nmr_ShiftList self, char * key, ApiObject value)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ShiftList_FindFirstEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_ShiftList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Nmr_ShiftList_FindFirstEntry_keyval2(Nmr_ShiftList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ShiftList_FindFirstEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_ShiftList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Nmr_ShiftList_FindFirstEntry_keyval3(Nmr_ShiftList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ShiftList_FindFirstEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_ShiftList self
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
Entr_Entry Nmr_ShiftList_FindFirstEntry_keyval4(Nmr_ShiftList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ShiftList_FindFirstEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ShiftList.experiments

Experiments for which 
shift list is valid
  @param  Nmr_ShiftList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Nmr_ShiftList_FindFirstExperiment(Nmr_ShiftList self, ApiMap conditions)
{
  
  Nmr_Experiment obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstExperiment");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'findFirstExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'findFirstExperiment' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ShiftList.experiments

Experiments for which 
shift list is valid
  @param  Nmr_ShiftList self
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Nmr_ShiftList_FindFirstExperiment_keyval0(Nmr_ShiftList self)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ShiftList_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ShiftList.experiments

Experiments for which 
shift list is valid
  @param  Nmr_ShiftList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Nmr_ShiftList_FindFirstExperiment_keyval1(Nmr_ShiftList self, char * key, ApiObject value)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ShiftList_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ShiftList.experiments

Experiments for which 
shift list is valid
  @param  Nmr_ShiftList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Nmr_ShiftList_FindFirstExperiment_keyval2(Nmr_ShiftList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ShiftList_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ShiftList.experiments

Experiments for which 
shift list is valid
  @param  Nmr_ShiftList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Nmr_ShiftList_FindFirstExperiment_keyval3(Nmr_ShiftList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ShiftList_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ShiftList.experiments

Experiments for which 
shift list is valid
  @param  Nmr_ShiftList self
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
Nmr_Experiment Nmr_ShiftList_FindFirstExperiment_keyval4(Nmr_ShiftList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ShiftList_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_ShiftList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nsim_Run Nmr_ShiftList_FindFirstInputToNmrRun(Nmr_ShiftList self, ApiMap conditions)
{
  
  Nsim_Run obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstInputToNmrRun");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'findFirstInputToNmrRun'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'findFirstInputToNmrRun' is not callable");
  
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
  @param  Nmr_ShiftList self
  @returns  the first value that satisfies the conditions 
**/
Nsim_Run Nmr_ShiftList_FindFirstInputToNmrRun_keyval0(Nmr_ShiftList self)
{
  
  Nsim_Run  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ShiftList_FindFirstInputToNmrRun(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_ShiftList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nsim_Run Nmr_ShiftList_FindFirstInputToNmrRun_keyval1(Nmr_ShiftList self, char * key, ApiObject value)
{
  
  Nsim_Run  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ShiftList_FindFirstInputToNmrRun(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_ShiftList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nsim_Run Nmr_ShiftList_FindFirstInputToNmrRun_keyval2(Nmr_ShiftList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nsim_Run  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ShiftList_FindFirstInputToNmrRun(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_ShiftList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nsim_Run Nmr_ShiftList_FindFirstInputToNmrRun_keyval3(Nmr_ShiftList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nsim_Run  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ShiftList_FindFirstInputToNmrRun(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_ShiftList self
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
Nsim_Run Nmr_ShiftList_FindFirstInputToNmrRun_keyval4(Nmr_ShiftList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nsim_Run  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ShiftList_FindFirstInputToNmrRun(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ShiftList.measurements

Chemical Shift in 
ShiftList
  @param  Nmr_ShiftList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_Shift Nmr_ShiftList_FindFirstMeasurement(Nmr_ShiftList self, ApiMap conditions)
{
  
  Nmr_Shift obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstMeasurement");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'findFirstMeasurement'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'findFirstMeasurement' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ShiftList.measurements

Chemical Shift in 
ShiftList
  @param  Nmr_ShiftList self
  @returns  the first value that satisfies the conditions 
**/
Nmr_Shift Nmr_ShiftList_FindFirstMeasurement_keyval0(Nmr_ShiftList self)
{
  
  Nmr_Shift  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ShiftList_FindFirstMeasurement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ShiftList.measurements

Chemical Shift in 
ShiftList
  @param  Nmr_ShiftList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_Shift Nmr_ShiftList_FindFirstMeasurement_keyval1(Nmr_ShiftList self, char * key, ApiObject value)
{
  
  Nmr_Shift  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ShiftList_FindFirstMeasurement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ShiftList.measurements

Chemical Shift in 
ShiftList
  @param  Nmr_ShiftList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_Shift Nmr_ShiftList_FindFirstMeasurement_keyval2(Nmr_ShiftList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_Shift  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ShiftList_FindFirstMeasurement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ShiftList.measurements

Chemical Shift in 
ShiftList
  @param  Nmr_ShiftList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_Shift Nmr_ShiftList_FindFirstMeasurement_keyval3(Nmr_ShiftList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_Shift  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ShiftList_FindFirstMeasurement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ShiftList.measurements

Chemical Shift in 
ShiftList
  @param  Nmr_ShiftList self
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
Nmr_Shift Nmr_ShiftList_FindFirstMeasurement_keyval4(Nmr_ShiftList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_Shift  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ShiftList_FindFirstMeasurement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_ShiftList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Vald_NmrMeasurementListValidation Nmr_ShiftList_FindFirstNmrMeasurementListValidation(Nmr_ShiftList self, ApiMap conditions)
{
  
  Vald_NmrMeasurementListValidation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstNmrMeasurementListValidation");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'findFirstNmrMeasurementListValidation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'findFirstNmrMeasurementListValidation' is not callable");
  
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
  @param  Nmr_ShiftList self
  @returns  the first value that satisfies the conditions 
**/
Vald_NmrMeasurementListValidation Nmr_ShiftList_FindFirstNmrMeasurementListValidation_keyval0(Nmr_ShiftList self)
{
  
  Vald_NmrMeasurementListValidation  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ShiftList_FindFirstNmrMeasurementListValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_ShiftList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Vald_NmrMeasurementListValidation Nmr_ShiftList_FindFirstNmrMeasurementListValidation_keyval1(Nmr_ShiftList self, char * key, ApiObject value)
{
  
  Vald_NmrMeasurementListValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ShiftList_FindFirstNmrMeasurementListValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_ShiftList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Vald_NmrMeasurementListValidation Nmr_ShiftList_FindFirstNmrMeasurementListValidation_keyval2(Nmr_ShiftList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Vald_NmrMeasurementListValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ShiftList_FindFirstNmrMeasurementListValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_ShiftList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Vald_NmrMeasurementListValidation Nmr_ShiftList_FindFirstNmrMeasurementListValidation_keyval3(Nmr_ShiftList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Vald_NmrMeasurementListValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ShiftList_FindFirstNmrMeasurementListValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_ShiftList self
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
Vald_NmrMeasurementListValidation Nmr_ShiftList_FindFirstNmrMeasurementListValidation_keyval4(Nmr_ShiftList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Vald_NmrMeasurementListValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ShiftList_FindFirstNmrMeasurementListValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.nmr.Nmr.ShiftList
  @param  Nmr_ShiftList self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Nmr_ShiftList_Get(Nmr_ShiftList self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_ShiftList self
  @returns   the result
**/
Acco_AccessObject Nmr_ShiftList_GetAccess(Nmr_ShiftList self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'getAccess' is not callable");
  
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
  @param  Nmr_ShiftList self
  @returns   the result
**/
ApiList Nmr_ShiftList_GetApplicationData(Nmr_ShiftList self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.Nmr.ShiftList
  @param  Nmr_ShiftList self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nmr_ShiftList Nmr_ShiftList_GetByKey(Nmr_ShiftList self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Nmr_ShiftList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'getByKey' is not callable");
  
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
  @param  Nmr_ShiftList self
  @returns   the result
**/
ApiString Nmr_ShiftList_GetClassName(Nmr_ShiftList self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ShiftList.dangleChains

Chains with Dangle dihedral 
angle predictions
  @param  Nmr_ShiftList self
  @returns   the result
**/
ApiSet Nmr_ShiftList_GetDangleChains(Nmr_ShiftList self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDangleChains");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'getDangleChains'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'getDangleChains' is not callable");
  
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
  @param  Nmr_ShiftList self
  @returns   the result
**/
ApiString Nmr_ShiftList_GetDetails(Nmr_ShiftList self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'getDetails' is not callable");
  
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
  @param  Nmr_ShiftList self
  @returns   the result
**/
ApiSet Nmr_ShiftList_GetEntries(Nmr_ShiftList self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getEntries");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'getEntries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'getEntries' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ShiftList.experiments

Experiments for which shift 
list is valid
  @param  Nmr_ShiftList self
  @returns   the result
**/
ApiSet Nmr_ShiftList_GetExperiments(Nmr_ShiftList self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExperiments");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'getExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'getExperiments' is not callable");
  
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
  @param  Nmr_ShiftList self
  @returns   the result
**/
ApiList Nmr_ShiftList_GetFieldNames(Nmr_ShiftList self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'getFieldNames' is not callable");
  
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
  @param  Nmr_ShiftList self
  @returns   the result
**/
ApiBoolean Nmr_ShiftList_GetInConstructor(Nmr_ShiftList self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'getInConstructor' is not callable");
  
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
  @param  Nmr_ShiftList self
  @returns   the result
**/
ApiSet Nmr_ShiftList_GetInputToNmrRuns(Nmr_ShiftList self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInputToNmrRuns");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'getInputToNmrRuns'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'getInputToNmrRuns' is not callable");
  
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
  @param  Nmr_ShiftList self
  @returns   the result
**/
ApiBoolean Nmr_ShiftList_GetIsDeleted(Nmr_ShiftList self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'getIsDeleted' is not callable");
  
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
  @param  Nmr_ShiftList self
  @returns   the result
**/
ApiBoolean Nmr_ShiftList_GetIsSimulated(Nmr_ShiftList self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsSimulated");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'getIsSimulated'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'getIsSimulated' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ShiftList.measurements

Chemical Shift in ShiftList
  @param  Nmr_ShiftList self
  @returns   the result
**/
ApiSet Nmr_ShiftList_GetMeasurements(Nmr_ShiftList self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMeasurements");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'getMeasurements'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'getMeasurements' is not callable");
  
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
  @param  Nmr_ShiftList self
  @returns   the result
**/
Meth_Method Nmr_ShiftList_GetMethod(Nmr_ShiftList self)
{
  
  Meth_Method obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMethod");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'getMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'getMethod' is not callable");
  
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
  @param  Nmr_ShiftList self
  @returns   the result
**/
ApiString Nmr_ShiftList_GetName(Nmr_ShiftList self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'getName' is not callable");
  
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
  @param  Nmr_ShiftList self
  @returns   the result
**/
ApiSet Nmr_ShiftList_GetNmrMeasurementListValidations(Nmr_ShiftList self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrMeasurementListValidations");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'getNmrMeasurementListValidations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'getNmrMeasurementListValidations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.nmrProject

parent link
  @param  Nmr_ShiftList self
  @returns   the result
**/
Nmr_NmrProject Nmr_ShiftList_GetNmrProject(Nmr_ShiftList self)
{
  
  Nmr_NmrProject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrProject");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'getNmrProject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'getNmrProject' is not callable");
  
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
  @param  Nmr_ShiftList self
  @returns   the result
**/
Nsim_Run Nmr_ShiftList_GetOutputFromNmrRun(Nmr_ShiftList self)
{
  
  Nsim_Run obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getOutputFromNmrRun");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'getOutputFromNmrRun'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'getOutputFromNmrRun' is not callable");
  
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
  @param  Nmr_ShiftList self
  @returns   the result
**/
ApiString Nmr_ShiftList_GetPackageName(Nmr_ShiftList self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'getPackageName' is not callable");
  
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
  @param  Nmr_ShiftList self
  @returns   the result
**/
ApiString Nmr_ShiftList_GetPackageShortName(Nmr_ShiftList self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'getPackageShortName' is not callable");
  
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
  @param  Nmr_ShiftList self
  @returns   the result
**/
Nmr_NmrProject Nmr_ShiftList_GetParent(Nmr_ShiftList self)
{
  
  Nmr_NmrProject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'getParent' is not callable");
  
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
  @param  Nmr_ShiftList self
  @returns   the result
**/
ApiString Nmr_ShiftList_GetQualifiedName(Nmr_ShiftList self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'getQualifiedName' is not callable");
  
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
  @param  Nmr_ShiftList self
  @returns   the result
**/
Impl_MemopsRoot Nmr_ShiftList_GetRoot(Nmr_ShiftList self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'getRoot' is not callable");
  
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
  @param  Nmr_ShiftList self
  @returns   the result
**/
ApiInteger Nmr_ShiftList_GetSerial(Nmr_ShiftList self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'getSerial' is not callable");
  
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
  @param  Nmr_ShiftList self
  @returns   the result
**/
Impl_TopObject Nmr_ShiftList_GetTopObject(Nmr_ShiftList self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ShiftList.unit

Measurement unit for shifts.
  @param  Nmr_ShiftList self
  @returns   the result
**/
ApiString Nmr_ShiftList_GetUnit(Nmr_ShiftList self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getUnit");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'getUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'getUnit' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.nmr.Nmr.ShiftList
  @param  Nmr_NmrProject parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_ShiftList Nmr_ShiftList_Init(Nmr_NmrProject parent, ApiMap attrlinks)
{
  
  return Nmr_NmrProject_NewShiftList(parent, attrlinks);
}

/**
  Constructor for ccp.nmr.Nmr.ShiftList
  @param  Nmr_NmrProject parent
  @returns  the new object
**/
Nmr_ShiftList Nmr_ShiftList_Init_reqd(Nmr_NmrProject parent)
{
  
  Nmr_ShiftList  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Nmr_ShiftList_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.Shift
  @param  Nmr_ShiftList self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_Shift Nmr_ShiftList_NewShift(Nmr_ShiftList self, ApiMap attrlinks)
{
  
  Nmr_Shift obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newShift");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'newShift'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'newShift' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.Shift
  @param  Nmr_ShiftList self
  @param  Nmr_Resonance resonance
  @param  float value
  @returns  the new object
**/
Nmr_Shift Nmr_ShiftList_NewShift_reqd(Nmr_ShiftList self, Nmr_Resonance resonance, float value)
{
  
  Nmr_Shift  obj;
  PyObject *attrlinks = PyDict_New();
  ApiFloat api__value = ApiFloat_New(value);

  PyDict_SetItemString(attrlinks, "resonance", resonance);
  PyDict_SetItemString(attrlinks, "value", api__value);
  
  obj = Nmr_ShiftList_NewShift(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__value);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ShiftList self
  @param  Impl_ApplicationData value
**/
void *Nmr_ShiftList_RemoveApplicationData(Nmr_ShiftList self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.Nmr.ShiftList.dangleChains

Chains with Dangle 
dihedral angle predictions
  @param  Nmr_ShiftList self
  @param  Dang_DangleChain value
**/
void *Nmr_ShiftList_RemoveDangleChain(Nmr_ShiftList self, Dang_DangleChain value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeDangleChain");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'removeDangleChain'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'removeDangleChain' is not callable");
  
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
  @param  Nmr_ShiftList self
  @param  Entr_Entry value
**/
void *Nmr_ShiftList_RemoveEntry(Nmr_ShiftList self, Entr_Entry value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeEntry");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'removeEntry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'removeEntry' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.Nmr.ShiftList.experiments

Experiments for which 
shift list is valid
  @param  Nmr_ShiftList self
  @param  Nmr_Experiment value
**/
void *Nmr_ShiftList_RemoveExperiment(Nmr_ShiftList self, Nmr_Experiment value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeExperiment");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'removeExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'removeExperiment' is not callable");
  
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
  @param  Nmr_ShiftList self
  @param  Nsim_Run value
**/
void *Nmr_ShiftList_RemoveInputToNmrRun(Nmr_ShiftList self, Nsim_Run value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeInputToNmrRun");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'removeInputToNmrRun'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'removeInputToNmrRun' is not callable");
  
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
  @param  Nmr_ShiftList self
  @param  Vald_NmrMeasurementListValidation value
**/
void *Nmr_ShiftList_RemoveNmrMeasurementListValidation(Nmr_ShiftList self, Vald_NmrMeasurementListValidation value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeNmrMeasurementListValidation");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'removeNmrMeasurementListValidation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'removeNmrMeasurementListValidation' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.nmr.Nmr.ShiftList
  @param  Nmr_ShiftList self
  @param  ApiString name
  @param  ApiObject value
**/
void *Nmr_ShiftList_Set(Nmr_ShiftList self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_ShiftList self
  @param  Acco_AccessObject value
**/
void *Nmr_ShiftList_SetAccess(Nmr_ShiftList self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'setAccess' is not callable");
  
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
  @param  Nmr_ShiftList self
  @param  ApiList values
**/
void *Nmr_ShiftList_SetApplicationData(Nmr_ShiftList self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ShiftList.dangleChains

Chains with Dangle dihedral 
angle predictions
  @param  Nmr_ShiftList self
  @param  ApiSet values
**/
void *Nmr_ShiftList_SetDangleChains(Nmr_ShiftList self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDangleChains");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'setDangleChains'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'setDangleChains' is not callable");
  
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
  @param  Nmr_ShiftList self
  @param  ApiString value
**/
void *Nmr_ShiftList_SetDetails(Nmr_ShiftList self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'setDetails' is not callable");
  
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
  @param  Nmr_ShiftList self
  @param  ApiSet values
**/
void *Nmr_ShiftList_SetEntries(Nmr_ShiftList self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setEntries");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'setEntries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'setEntries' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ShiftList.experiments

Experiments for which shift 
list is valid
  @param  Nmr_ShiftList self
  @param  ApiSet values
**/
void *Nmr_ShiftList_SetExperiments(Nmr_ShiftList self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setExperiments");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'setExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'setExperiments' is not callable");
  
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
  @param  Nmr_ShiftList self
  @param  ApiSet values
**/
void *Nmr_ShiftList_SetInputToNmrRuns(Nmr_ShiftList self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setInputToNmrRuns");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'setInputToNmrRuns'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'setInputToNmrRuns' is not callable");
  
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
  @param  Nmr_ShiftList self
  @param  ApiBoolean value
**/
void *Nmr_ShiftList_SetIsSimulated(Nmr_ShiftList self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsSimulated");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'setIsSimulated'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'setIsSimulated' is not callable");
  
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
  @param  Nmr_ShiftList self
  @param  Meth_Method value
**/
void *Nmr_ShiftList_SetMethod(Nmr_ShiftList self, Meth_Method value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMethod");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'setMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'setMethod' is not callable");
  
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
  @param  Nmr_ShiftList self
  @param  ApiString value
**/
void *Nmr_ShiftList_SetName(Nmr_ShiftList self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'setName' is not callable");
  
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
  @param  Nmr_ShiftList self
  @param  ApiSet values
**/
void *Nmr_ShiftList_SetNmrMeasurementListValidations(Nmr_ShiftList self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNmrMeasurementListValidations");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'setNmrMeasurementListValidations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'setNmrMeasurementListValidations' is not callable");
  
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
  @param  Nmr_ShiftList self
  @param  Nsim_Run value
**/
void *Nmr_ShiftList_SetOutputFromNmrRun(Nmr_ShiftList self, Nsim_Run value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setOutputFromNmrRun");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'setOutputFromNmrRun'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'setOutputFromNmrRun' is not callable");
  
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
  @param  Nmr_ShiftList self
  @param  ApiInteger value
**/
void *Nmr_ShiftList_SetSerial(Nmr_ShiftList self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ShiftList.unit

Measurement unit for shifts.
  @param  Nmr_ShiftList self
  @param  ApiString value
**/
void *Nmr_ShiftList_SetUnit(Nmr_ShiftList self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setUnit");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'setUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'setUnit' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.ShiftList.dangleChains

Chains with Dangle 
dihedral angle predictions
  @param  Nmr_ShiftList self
  @returns   the result
**/
ApiList Nmr_ShiftList_SortedDangleChains(Nmr_ShiftList self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedDangleChains");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'sortedDangleChains'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'sortedDangleChains' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries for 
MeasurementList
  @param  Nmr_ShiftList self
  @returns   the result
**/
ApiList Nmr_ShiftList_SortedEntries(Nmr_ShiftList self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedEntries");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'sortedEntries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'sortedEntries' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.ShiftList.experiments

Experiments for which 
shift list is valid
  @param  Nmr_ShiftList self
  @returns   the result
**/
ApiList Nmr_ShiftList_SortedExperiments(Nmr_ShiftList self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedExperiments");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'sortedExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'sortedExperiments' is not callable");
  
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
  @param  Nmr_ShiftList self
  @returns   the result
**/
ApiList Nmr_ShiftList_SortedInputToNmrRuns(Nmr_ShiftList self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedInputToNmrRuns");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'sortedInputToNmrRuns'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'sortedInputToNmrRuns' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.ShiftList.measurements

Chemical Shift in 
ShiftList
  @param  Nmr_ShiftList self
  @returns   the result
**/
ApiList Nmr_ShiftList_SortedMeasurements(Nmr_ShiftList self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedMeasurements");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'sortedMeasurements'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'sortedMeasurements' is not callable");
  
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
  @param  Nmr_ShiftList self
  @returns   the result
**/
ApiList Nmr_ShiftList_SortedNmrMeasurementListValidations(Nmr_ShiftList self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedNmrMeasurementListValidations");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ShiftList: cannot find method 'sortedNmrMeasurementListValidations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ShiftList: method 'sortedNmrMeasurementListValidations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
