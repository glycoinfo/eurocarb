
#include "ccp.h"

/*
  List of hydrogen exchange protection factor measurements.
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_HExchProtectionList self
  @param  Impl_ApplicationData value
**/
void *Nmr_HExchProtectionList_AddApplicationData(Nmr_HExchProtectionList self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'addApplicationData' is not callable");
  
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
  @param  Nmr_HExchProtectionList self
  @param  Entr_Entry value
**/
void *Nmr_HExchProtectionList_AddEntry(Nmr_HExchProtectionList self, Entr_Entry value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addEntry");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'addEntry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'addEntry' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.Nmr.HExchProtectionList.experiments

Experiments for 
which hydrogen exchange protection factor list is valid
  @param  Nmr_HExchProtectionList self
  @param  Nmr_Experiment value
**/
void *Nmr_HExchProtectionList_AddExperiment(Nmr_HExchProtectionList self, Nmr_Experiment value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addExperiment");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'addExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'addExperiment' is not callable");
  
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
  @param  Nmr_HExchProtectionList self
  @param  Nsim_Run value
**/
void *Nmr_HExchProtectionList_AddInputToNmrRun(Nmr_HExchProtectionList self, Nsim_Run value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addInputToNmrRun");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'addInputToNmrRun'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'addInputToNmrRun' is not callable");
  
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
  @param  Nmr_HExchProtectionList self
  @param  Vald_NmrMeasurementListValidation value
**/
void *Nmr_HExchProtectionList_AddNmrMeasurementListValidation(Nmr_HExchProtectionList self, Vald_NmrMeasurementListValidation value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addNmrMeasurementListValidation");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'addNmrMeasurementListValidation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'addNmrMeasurementListValidation' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.nmr.Nmr.HExchProtectionList
  @param  Nmr_HExchProtectionList self
  @param  ApiBoolean complete
**/
void *Nmr_HExchProtectionList_CheckAllValid(Nmr_HExchProtectionList self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.nmr.Nmr.HExchProtectionList
  @param  Nmr_HExchProtectionList self
  @param  ApiBoolean complete
**/
void *Nmr_HExchProtectionList_CheckValid(Nmr_HExchProtectionList self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'checkValid' is not callable");
  
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
  @param  Nmr_HExchProtectionList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_HExchProtectionList_FindAllApplicationData(Nmr_HExchProtectionList self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'findAllApplicationData' is not callable");
  
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
  @param  Nmr_HExchProtectionList self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_HExchProtectionList_FindAllApplicationData_keyval0(Nmr_HExchProtectionList self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_HExchProtectionList_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_HExchProtectionList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_HExchProtectionList_FindAllApplicationData_keyval1(Nmr_HExchProtectionList self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_HExchProtectionList_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_HExchProtectionList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_HExchProtectionList_FindAllApplicationData_keyval2(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_HExchProtectionList_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_HExchProtectionList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_HExchProtectionList_FindAllApplicationData_keyval3(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_HExchProtectionList_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_HExchProtectionList self
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
ApiList Nmr_HExchProtectionList_FindAllApplicationData_keyval4(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_HExchProtectionList_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_HExchProtectionList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_HExchProtectionList_FindAllEntries(Nmr_HExchProtectionList self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllEntries");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'findAllEntries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'findAllEntries' is not callable");
  
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
  @param  Nmr_HExchProtectionList self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_HExchProtectionList_FindAllEntries_keyval0(Nmr_HExchProtectionList self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_HExchProtectionList_FindAllEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_HExchProtectionList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_HExchProtectionList_FindAllEntries_keyval1(Nmr_HExchProtectionList self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_HExchProtectionList_FindAllEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_HExchProtectionList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_HExchProtectionList_FindAllEntries_keyval2(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_HExchProtectionList_FindAllEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_HExchProtectionList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_HExchProtectionList_FindAllEntries_keyval3(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_HExchProtectionList_FindAllEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_HExchProtectionList self
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
ApiSet Nmr_HExchProtectionList_FindAllEntries_keyval4(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_HExchProtectionList_FindAllEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.HExchProtectionList.experiments

Experiments for 
which hydrogen exchange protection factor list is valid
  @param  Nmr_HExchProtectionList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_HExchProtectionList_FindAllExperiments(Nmr_HExchProtectionList self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllExperiments");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'findAllExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'findAllExperiments' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.HExchProtectionList.experiments

Experiments for 
which hydrogen exchange protection factor list is valid
  @param  Nmr_HExchProtectionList self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_HExchProtectionList_FindAllExperiments_keyval0(Nmr_HExchProtectionList self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_HExchProtectionList_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.HExchProtectionList.experiments

Experiments for 
which hydrogen exchange protection factor list is valid
  @param  Nmr_HExchProtectionList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_HExchProtectionList_FindAllExperiments_keyval1(Nmr_HExchProtectionList self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_HExchProtectionList_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.HExchProtectionList.experiments

Experiments for 
which hydrogen exchange protection factor list is valid
  @param  Nmr_HExchProtectionList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_HExchProtectionList_FindAllExperiments_keyval2(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_HExchProtectionList_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.HExchProtectionList.experiments

Experiments for 
which hydrogen exchange protection factor list is valid
  @param  Nmr_HExchProtectionList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_HExchProtectionList_FindAllExperiments_keyval3(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_HExchProtectionList_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.HExchProtectionList.experiments

Experiments for 
which hydrogen exchange protection factor list is valid
  @param  Nmr_HExchProtectionList self
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
ApiSet Nmr_HExchProtectionList_FindAllExperiments_keyval4(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_HExchProtectionList_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_HExchProtectionList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_HExchProtectionList_FindAllInputToNmrRuns(Nmr_HExchProtectionList self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllInputToNmrRuns");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'findAllInputToNmrRuns'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'findAllInputToNmrRuns' is not callable");
  
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
  @param  Nmr_HExchProtectionList self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_HExchProtectionList_FindAllInputToNmrRuns_keyval0(Nmr_HExchProtectionList self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_HExchProtectionList_FindAllInputToNmrRuns(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_HExchProtectionList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_HExchProtectionList_FindAllInputToNmrRuns_keyval1(Nmr_HExchProtectionList self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_HExchProtectionList_FindAllInputToNmrRuns(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_HExchProtectionList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_HExchProtectionList_FindAllInputToNmrRuns_keyval2(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_HExchProtectionList_FindAllInputToNmrRuns(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_HExchProtectionList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_HExchProtectionList_FindAllInputToNmrRuns_keyval3(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_HExchProtectionList_FindAllInputToNmrRuns(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_HExchProtectionList self
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
ApiSet Nmr_HExchProtectionList_FindAllInputToNmrRuns_keyval4(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_HExchProtectionList_FindAllInputToNmrRuns(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.HExchProtectionList.measurements

child link to 
class HExchProtection
  @param  Nmr_HExchProtectionList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_HExchProtectionList_FindAllMeasurements(Nmr_HExchProtectionList self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllMeasurements");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'findAllMeasurements'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'findAllMeasurements' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.HExchProtectionList.measurements

child link to 
class HExchProtection
  @param  Nmr_HExchProtectionList self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_HExchProtectionList_FindAllMeasurements_keyval0(Nmr_HExchProtectionList self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_HExchProtectionList_FindAllMeasurements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.HExchProtectionList.measurements

child link to 
class HExchProtection
  @param  Nmr_HExchProtectionList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_HExchProtectionList_FindAllMeasurements_keyval1(Nmr_HExchProtectionList self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_HExchProtectionList_FindAllMeasurements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.HExchProtectionList.measurements

child link to 
class HExchProtection
  @param  Nmr_HExchProtectionList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_HExchProtectionList_FindAllMeasurements_keyval2(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_HExchProtectionList_FindAllMeasurements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.HExchProtectionList.measurements

child link to 
class HExchProtection
  @param  Nmr_HExchProtectionList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_HExchProtectionList_FindAllMeasurements_keyval3(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_HExchProtectionList_FindAllMeasurements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.HExchProtectionList.measurements

child link to 
class HExchProtection
  @param  Nmr_HExchProtectionList self
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
ApiSet Nmr_HExchProtectionList_FindAllMeasurements_keyval4(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_HExchProtectionList_FindAllMeasurements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_HExchProtectionList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_HExchProtectionList_FindAllNmrMeasurementListValidations(Nmr_HExchProtectionList self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllNmrMeasurementListValidations");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'findAllNmrMeasurementListValidations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'findAllNmrMeasurementListValidations' is not callable");
  
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
  @param  Nmr_HExchProtectionList self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_HExchProtectionList_FindAllNmrMeasurementListValidations_keyval0(Nmr_HExchProtectionList self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_HExchProtectionList_FindAllNmrMeasurementListValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_HExchProtectionList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_HExchProtectionList_FindAllNmrMeasurementListValidations_keyval1(Nmr_HExchProtectionList self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_HExchProtectionList_FindAllNmrMeasurementListValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_HExchProtectionList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_HExchProtectionList_FindAllNmrMeasurementListValidations_keyval2(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_HExchProtectionList_FindAllNmrMeasurementListValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_HExchProtectionList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_HExchProtectionList_FindAllNmrMeasurementListValidations_keyval3(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_HExchProtectionList_FindAllNmrMeasurementListValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_HExchProtectionList self
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
ApiSet Nmr_HExchProtectionList_FindAllNmrMeasurementListValidations_keyval4(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_HExchProtectionList_FindAllNmrMeasurementListValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_HExchProtectionList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_HExchProtectionList_FindFirstApplicationData(Nmr_HExchProtectionList self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nmr_HExchProtectionList self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_HExchProtectionList_FindFirstApplicationData_keyval0(Nmr_HExchProtectionList self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_HExchProtectionList_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_HExchProtectionList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_HExchProtectionList_FindFirstApplicationData_keyval1(Nmr_HExchProtectionList self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_HExchProtectionList_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_HExchProtectionList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_HExchProtectionList_FindFirstApplicationData_keyval2(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_HExchProtectionList_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_HExchProtectionList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_HExchProtectionList_FindFirstApplicationData_keyval3(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_HExchProtectionList_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_HExchProtectionList self
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
Impl_ApplicationData Nmr_HExchProtectionList_FindFirstApplicationData_keyval4(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_HExchProtectionList_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_HExchProtectionList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Nmr_HExchProtectionList_FindFirstEntry(Nmr_HExchProtectionList self, ApiMap conditions)
{
  
  Entr_Entry obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstEntry");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'findFirstEntry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'findFirstEntry' is not callable");
  
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
  @param  Nmr_HExchProtectionList self
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Nmr_HExchProtectionList_FindFirstEntry_keyval0(Nmr_HExchProtectionList self)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_HExchProtectionList_FindFirstEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_HExchProtectionList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Nmr_HExchProtectionList_FindFirstEntry_keyval1(Nmr_HExchProtectionList self, char * key, ApiObject value)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_HExchProtectionList_FindFirstEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_HExchProtectionList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Nmr_HExchProtectionList_FindFirstEntry_keyval2(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_HExchProtectionList_FindFirstEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_HExchProtectionList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Nmr_HExchProtectionList_FindFirstEntry_keyval3(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_HExchProtectionList_FindFirstEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_HExchProtectionList self
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
Entr_Entry Nmr_HExchProtectionList_FindFirstEntry_keyval4(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_HExchProtectionList_FindFirstEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.HExchProtectionList.experiments

Experiments 
for which hydrogen exchange protection factor list is valid
  @param  Nmr_HExchProtectionList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Nmr_HExchProtectionList_FindFirstExperiment(Nmr_HExchProtectionList self, ApiMap conditions)
{
  
  Nmr_Experiment obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstExperiment");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'findFirstExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'findFirstExperiment' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.HExchProtectionList.experiments

Experiments 
for which hydrogen exchange protection factor list is valid
  @param  Nmr_HExchProtectionList self
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Nmr_HExchProtectionList_FindFirstExperiment_keyval0(Nmr_HExchProtectionList self)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_HExchProtectionList_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.HExchProtectionList.experiments

Experiments 
for which hydrogen exchange protection factor list is valid
  @param  Nmr_HExchProtectionList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Nmr_HExchProtectionList_FindFirstExperiment_keyval1(Nmr_HExchProtectionList self, char * key, ApiObject value)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_HExchProtectionList_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.HExchProtectionList.experiments

Experiments 
for which hydrogen exchange protection factor list is valid
  @param  Nmr_HExchProtectionList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Nmr_HExchProtectionList_FindFirstExperiment_keyval2(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_HExchProtectionList_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.HExchProtectionList.experiments

Experiments 
for which hydrogen exchange protection factor list is valid
  @param  Nmr_HExchProtectionList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Nmr_HExchProtectionList_FindFirstExperiment_keyval3(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_HExchProtectionList_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.HExchProtectionList.experiments

Experiments 
for which hydrogen exchange protection factor list is valid
  @param  Nmr_HExchProtectionList self
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
Nmr_Experiment Nmr_HExchProtectionList_FindFirstExperiment_keyval4(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_HExchProtectionList_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_HExchProtectionList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nsim_Run Nmr_HExchProtectionList_FindFirstInputToNmrRun(Nmr_HExchProtectionList self, ApiMap conditions)
{
  
  Nsim_Run obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstInputToNmrRun");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'findFirstInputToNmrRun'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'findFirstInputToNmrRun' is not callable");
  
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
  @param  Nmr_HExchProtectionList self
  @returns  the first value that satisfies the conditions 
**/
Nsim_Run Nmr_HExchProtectionList_FindFirstInputToNmrRun_keyval0(Nmr_HExchProtectionList self)
{
  
  Nsim_Run  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_HExchProtectionList_FindFirstInputToNmrRun(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_HExchProtectionList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nsim_Run Nmr_HExchProtectionList_FindFirstInputToNmrRun_keyval1(Nmr_HExchProtectionList self, char * key, ApiObject value)
{
  
  Nsim_Run  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_HExchProtectionList_FindFirstInputToNmrRun(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_HExchProtectionList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nsim_Run Nmr_HExchProtectionList_FindFirstInputToNmrRun_keyval2(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nsim_Run  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_HExchProtectionList_FindFirstInputToNmrRun(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_HExchProtectionList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nsim_Run Nmr_HExchProtectionList_FindFirstInputToNmrRun_keyval3(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nsim_Run  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_HExchProtectionList_FindFirstInputToNmrRun(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_HExchProtectionList self
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
Nsim_Run Nmr_HExchProtectionList_FindFirstInputToNmrRun_keyval4(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nsim_Run  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_HExchProtectionList_FindFirstInputToNmrRun(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.HExchProtectionList.measurements

child link 
to class HExchProtection
  @param  Nmr_HExchProtectionList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_HExchProtection Nmr_HExchProtectionList_FindFirstMeasurement(Nmr_HExchProtectionList self, ApiMap conditions)
{
  
  Nmr_HExchProtection obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstMeasurement");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'findFirstMeasurement'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'findFirstMeasurement' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.HExchProtectionList.measurements

child link 
to class HExchProtection
  @param  Nmr_HExchProtectionList self
  @returns  the first value that satisfies the conditions 
**/
Nmr_HExchProtection Nmr_HExchProtectionList_FindFirstMeasurement_keyval0(Nmr_HExchProtectionList self)
{
  
  Nmr_HExchProtection  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_HExchProtectionList_FindFirstMeasurement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.HExchProtectionList.measurements

child link 
to class HExchProtection
  @param  Nmr_HExchProtectionList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_HExchProtection Nmr_HExchProtectionList_FindFirstMeasurement_keyval1(Nmr_HExchProtectionList self, char * key, ApiObject value)
{
  
  Nmr_HExchProtection  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_HExchProtectionList_FindFirstMeasurement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.HExchProtectionList.measurements

child link 
to class HExchProtection
  @param  Nmr_HExchProtectionList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_HExchProtection Nmr_HExchProtectionList_FindFirstMeasurement_keyval2(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_HExchProtection  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_HExchProtectionList_FindFirstMeasurement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.HExchProtectionList.measurements

child link 
to class HExchProtection
  @param  Nmr_HExchProtectionList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_HExchProtection Nmr_HExchProtectionList_FindFirstMeasurement_keyval3(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_HExchProtection  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_HExchProtectionList_FindFirstMeasurement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.HExchProtectionList.measurements

child link 
to class HExchProtection
  @param  Nmr_HExchProtectionList self
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
Nmr_HExchProtection Nmr_HExchProtectionList_FindFirstMeasurement_keyval4(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_HExchProtection  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_HExchProtectionList_FindFirstMeasurement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_HExchProtectionList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Vald_NmrMeasurementListValidation Nmr_HExchProtectionList_FindFirstNmrMeasurementListValidation(Nmr_HExchProtectionList self, ApiMap conditions)
{
  
  Vald_NmrMeasurementListValidation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstNmrMeasurementListValidation");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'findFirstNmrMeasurementListValidation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'findFirstNmrMeasurementListValidation' is not callable");
  
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
  @param  Nmr_HExchProtectionList self
  @returns  the first value that satisfies the conditions 
**/
Vald_NmrMeasurementListValidation Nmr_HExchProtectionList_FindFirstNmrMeasurementListValidation_keyval0(Nmr_HExchProtectionList self)
{
  
  Vald_NmrMeasurementListValidation  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_HExchProtectionList_FindFirstNmrMeasurementListValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_HExchProtectionList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Vald_NmrMeasurementListValidation Nmr_HExchProtectionList_FindFirstNmrMeasurementListValidation_keyval1(Nmr_HExchProtectionList self, char * key, ApiObject value)
{
  
  Vald_NmrMeasurementListValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_HExchProtectionList_FindFirstNmrMeasurementListValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_HExchProtectionList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Vald_NmrMeasurementListValidation Nmr_HExchProtectionList_FindFirstNmrMeasurementListValidation_keyval2(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Vald_NmrMeasurementListValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_HExchProtectionList_FindFirstNmrMeasurementListValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_HExchProtectionList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Vald_NmrMeasurementListValidation Nmr_HExchProtectionList_FindFirstNmrMeasurementListValidation_keyval3(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Vald_NmrMeasurementListValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_HExchProtectionList_FindFirstNmrMeasurementListValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_HExchProtectionList self
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
Vald_NmrMeasurementListValidation Nmr_HExchProtectionList_FindFirstNmrMeasurementListValidation_keyval4(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Vald_NmrMeasurementListValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_HExchProtectionList_FindFirstNmrMeasurementListValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.nmr.Nmr.HExchProtectionList
  @param  Nmr_HExchProtectionList self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Nmr_HExchProtectionList_Get(Nmr_HExchProtectionList self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_HExchProtectionList self
  @returns   the result
**/
Acco_AccessObject Nmr_HExchProtectionList_GetAccess(Nmr_HExchProtectionList self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'getAccess' is not callable");
  
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
  @param  Nmr_HExchProtectionList self
  @returns   the result
**/
ApiList Nmr_HExchProtectionList_GetApplicationData(Nmr_HExchProtectionList self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.Nmr.HExchProtectionList
  @param  Nmr_HExchProtectionList self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nmr_HExchProtectionList Nmr_HExchProtectionList_GetByKey(Nmr_HExchProtectionList self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Nmr_HExchProtectionList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'getByKey' is not callable");
  
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
  @param  Nmr_HExchProtectionList self
  @returns   the result
**/
ApiString Nmr_HExchProtectionList_GetClassName(Nmr_HExchProtectionList self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'getClassName' is not callable");
  
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
  @param  Nmr_HExchProtectionList self
  @returns   the result
**/
ApiString Nmr_HExchProtectionList_GetDetails(Nmr_HExchProtectionList self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'getDetails' is not callable");
  
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
  @param  Nmr_HExchProtectionList self
  @returns   the result
**/
ApiSet Nmr_HExchProtectionList_GetEntries(Nmr_HExchProtectionList self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getEntries");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'getEntries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'getEntries' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.HExchProtectionList.experiments

Experiments for 
which hydrogen exchange protection factor list is valid
  @param  Nmr_HExchProtectionList self
  @returns   the result
**/
ApiSet Nmr_HExchProtectionList_GetExperiments(Nmr_HExchProtectionList self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExperiments");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'getExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'getExperiments' is not callable");
  
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
  @param  Nmr_HExchProtectionList self
  @returns   the result
**/
ApiList Nmr_HExchProtectionList_GetFieldNames(Nmr_HExchProtectionList self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'getFieldNames' is not callable");
  
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
  @param  Nmr_HExchProtectionList self
  @returns   the result
**/
ApiBoolean Nmr_HExchProtectionList_GetInConstructor(Nmr_HExchProtectionList self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'getInConstructor' is not callable");
  
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
  @param  Nmr_HExchProtectionList self
  @returns   the result
**/
ApiSet Nmr_HExchProtectionList_GetInputToNmrRuns(Nmr_HExchProtectionList self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInputToNmrRuns");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'getInputToNmrRuns'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'getInputToNmrRuns' is not callable");
  
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
  @param  Nmr_HExchProtectionList self
  @returns   the result
**/
ApiBoolean Nmr_HExchProtectionList_GetIsDeleted(Nmr_HExchProtectionList self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'getIsDeleted' is not callable");
  
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
  @param  Nmr_HExchProtectionList self
  @returns   the result
**/
ApiBoolean Nmr_HExchProtectionList_GetIsSimulated(Nmr_HExchProtectionList self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsSimulated");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'getIsSimulated'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'getIsSimulated' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.HExchProtectionList.measurements

child link to 
class HExchProtection
  @param  Nmr_HExchProtectionList self
  @returns   the result
**/
ApiSet Nmr_HExchProtectionList_GetMeasurements(Nmr_HExchProtectionList self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMeasurements");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'getMeasurements'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'getMeasurements' is not callable");
  
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
  @param  Nmr_HExchProtectionList self
  @returns   the result
**/
Meth_Method Nmr_HExchProtectionList_GetMethod(Nmr_HExchProtectionList self)
{
  
  Meth_Method obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMethod");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'getMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'getMethod' is not callable");
  
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
  @param  Nmr_HExchProtectionList self
  @returns   the result
**/
ApiString Nmr_HExchProtectionList_GetName(Nmr_HExchProtectionList self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'getName' is not callable");
  
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
  @param  Nmr_HExchProtectionList self
  @returns   the result
**/
ApiSet Nmr_HExchProtectionList_GetNmrMeasurementListValidations(Nmr_HExchProtectionList self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrMeasurementListValidations");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'getNmrMeasurementListValidations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'getNmrMeasurementListValidations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.nmrProject

parent link
  @param  Nmr_HExchProtectionList self
  @returns   the result
**/
Nmr_NmrProject Nmr_HExchProtectionList_GetNmrProject(Nmr_HExchProtectionList self)
{
  
  Nmr_NmrProject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrProject");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'getNmrProject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'getNmrProject' is not callable");
  
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
  @param  Nmr_HExchProtectionList self
  @returns   the result
**/
Nsim_Run Nmr_HExchProtectionList_GetOutputFromNmrRun(Nmr_HExchProtectionList self)
{
  
  Nsim_Run obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getOutputFromNmrRun");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'getOutputFromNmrRun'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'getOutputFromNmrRun' is not callable");
  
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
  @param  Nmr_HExchProtectionList self
  @returns   the result
**/
ApiString Nmr_HExchProtectionList_GetPackageName(Nmr_HExchProtectionList self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'getPackageName' is not callable");
  
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
  @param  Nmr_HExchProtectionList self
  @returns   the result
**/
ApiString Nmr_HExchProtectionList_GetPackageShortName(Nmr_HExchProtectionList self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'getPackageShortName' is not callable");
  
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
  @param  Nmr_HExchProtectionList self
  @returns   the result
**/
Nmr_NmrProject Nmr_HExchProtectionList_GetParent(Nmr_HExchProtectionList self)
{
  
  Nmr_NmrProject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.HExchProtectionList.protectionType

Type, i.e. 
phenomenon giving rise to hydrogen excnage protection.
  @param  Nmr_HExchProtectionList self
  @returns   the result
**/
ApiString Nmr_HExchProtectionList_GetProtectionType(Nmr_HExchProtectionList self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getProtectionType");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'getProtectionType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'getProtectionType' is not callable");
  
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
  @param  Nmr_HExchProtectionList self
  @returns   the result
**/
ApiString Nmr_HExchProtectionList_GetQualifiedName(Nmr_HExchProtectionList self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.HExchProtectionList.referenceRateList

List of 
hydrogen exchange rates serving as references for the protection factors 
reported.
  @param  Nmr_HExchProtectionList self
  @returns   the result
**/
Nmr_HExchRateList Nmr_HExchProtectionList_GetReferenceRateList(Nmr_HExchProtectionList self)
{
  
  Nmr_HExchRateList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getReferenceRateList");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'getReferenceRateList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'getReferenceRateList' is not callable");
  
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
  @param  Nmr_HExchProtectionList self
  @returns   the result
**/
Impl_MemopsRoot Nmr_HExchProtectionList_GetRoot(Nmr_HExchProtectionList self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'getRoot' is not callable");
  
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
  @param  Nmr_HExchProtectionList self
  @returns   the result
**/
ApiInteger Nmr_HExchProtectionList_GetSerial(Nmr_HExchProtectionList self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'getSerial' is not callable");
  
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
  @param  Nmr_HExchProtectionList self
  @returns   the result
**/
Impl_TopObject Nmr_HExchProtectionList_GetTopObject(Nmr_HExchProtectionList self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.HExchProtectionList.unit

Measurement unit for 
chemical shift differnece. Default is 'ratio', i.e. the quantity is 
dimensionless..
  @param  Nmr_HExchProtectionList self
  @returns   the result
**/
ApiString Nmr_HExchProtectionList_GetUnit(Nmr_HExchProtectionList self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getUnit");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'getUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'getUnit' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.nmr.Nmr.HExchProtectionList
  @param  Nmr_NmrProject parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_HExchProtectionList Nmr_HExchProtectionList_Init(Nmr_NmrProject parent, ApiMap attrlinks)
{
  
  return Nmr_NmrProject_NewHExchProtectionList(parent, attrlinks);
}

/**
  Constructor for ccp.nmr.Nmr.HExchProtectionList
  @param  Nmr_NmrProject parent
  @returns  the new object
**/
Nmr_HExchProtectionList Nmr_HExchProtectionList_Init_reqd(Nmr_NmrProject parent)
{
  
  Nmr_HExchProtectionList  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Nmr_HExchProtectionList_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.HExchProtection
  @param  Nmr_HExchProtectionList self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_HExchProtection Nmr_HExchProtectionList_NewHExchProtection(Nmr_HExchProtectionList self, ApiMap attrlinks)
{
  
  Nmr_HExchProtection obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newHExchProtection");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'newHExchProtection'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'newHExchProtection' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.HExchProtection
  @param  Nmr_HExchProtectionList self
  @param  Nmr_Resonance resonance
  @param  float value
  @returns  the new object
**/
Nmr_HExchProtection Nmr_HExchProtectionList_NewHExchProtection_reqd(Nmr_HExchProtectionList self, Nmr_Resonance resonance, float value)
{
  
  Nmr_HExchProtection  obj;
  PyObject *attrlinks = PyDict_New();
  ApiFloat api__value = ApiFloat_New(value);

  PyDict_SetItemString(attrlinks, "resonance", resonance);
  PyDict_SetItemString(attrlinks, "value", api__value);
  
  obj = Nmr_HExchProtectionList_NewHExchProtection(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__value);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_HExchProtectionList self
  @param  Impl_ApplicationData value
**/
void *Nmr_HExchProtectionList_RemoveApplicationData(Nmr_HExchProtectionList self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'removeApplicationData' is not callable");
  
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
  @param  Nmr_HExchProtectionList self
  @param  Entr_Entry value
**/
void *Nmr_HExchProtectionList_RemoveEntry(Nmr_HExchProtectionList self, Entr_Entry value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeEntry");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'removeEntry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'removeEntry' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.Nmr.HExchProtectionList.experiments

Experiments for 
which hydrogen exchange protection factor list is valid
  @param  Nmr_HExchProtectionList self
  @param  Nmr_Experiment value
**/
void *Nmr_HExchProtectionList_RemoveExperiment(Nmr_HExchProtectionList self, Nmr_Experiment value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeExperiment");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'removeExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'removeExperiment' is not callable");
  
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
  @param  Nmr_HExchProtectionList self
  @param  Nsim_Run value
**/
void *Nmr_HExchProtectionList_RemoveInputToNmrRun(Nmr_HExchProtectionList self, Nsim_Run value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeInputToNmrRun");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'removeInputToNmrRun'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'removeInputToNmrRun' is not callable");
  
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
  @param  Nmr_HExchProtectionList self
  @param  Vald_NmrMeasurementListValidation value
**/
void *Nmr_HExchProtectionList_RemoveNmrMeasurementListValidation(Nmr_HExchProtectionList self, Vald_NmrMeasurementListValidation value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeNmrMeasurementListValidation");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'removeNmrMeasurementListValidation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'removeNmrMeasurementListValidation' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.nmr.Nmr.HExchProtectionList
  @param  Nmr_HExchProtectionList self
  @param  ApiString name
  @param  ApiObject value
**/
void *Nmr_HExchProtectionList_Set(Nmr_HExchProtectionList self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_HExchProtectionList self
  @param  Acco_AccessObject value
**/
void *Nmr_HExchProtectionList_SetAccess(Nmr_HExchProtectionList self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'setAccess' is not callable");
  
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
  @param  Nmr_HExchProtectionList self
  @param  ApiList values
**/
void *Nmr_HExchProtectionList_SetApplicationData(Nmr_HExchProtectionList self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'setApplicationData' is not callable");
  
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
  @param  Nmr_HExchProtectionList self
  @param  ApiString value
**/
void *Nmr_HExchProtectionList_SetDetails(Nmr_HExchProtectionList self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'setDetails' is not callable");
  
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
  @param  Nmr_HExchProtectionList self
  @param  ApiSet values
**/
void *Nmr_HExchProtectionList_SetEntries(Nmr_HExchProtectionList self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setEntries");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'setEntries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'setEntries' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.HExchProtectionList.experiments

Experiments for 
which hydrogen exchange protection factor list is valid
  @param  Nmr_HExchProtectionList self
  @param  ApiSet values
**/
void *Nmr_HExchProtectionList_SetExperiments(Nmr_HExchProtectionList self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setExperiments");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'setExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'setExperiments' is not callable");
  
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
  @param  Nmr_HExchProtectionList self
  @param  ApiSet values
**/
void *Nmr_HExchProtectionList_SetInputToNmrRuns(Nmr_HExchProtectionList self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setInputToNmrRuns");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'setInputToNmrRuns'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'setInputToNmrRuns' is not callable");
  
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
  @param  Nmr_HExchProtectionList self
  @param  ApiBoolean value
**/
void *Nmr_HExchProtectionList_SetIsSimulated(Nmr_HExchProtectionList self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsSimulated");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'setIsSimulated'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'setIsSimulated' is not callable");
  
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
  @param  Nmr_HExchProtectionList self
  @param  Meth_Method value
**/
void *Nmr_HExchProtectionList_SetMethod(Nmr_HExchProtectionList self, Meth_Method value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMethod");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'setMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'setMethod' is not callable");
  
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
  @param  Nmr_HExchProtectionList self
  @param  ApiString value
**/
void *Nmr_HExchProtectionList_SetName(Nmr_HExchProtectionList self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'setName' is not callable");
  
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
  @param  Nmr_HExchProtectionList self
  @param  ApiSet values
**/
void *Nmr_HExchProtectionList_SetNmrMeasurementListValidations(Nmr_HExchProtectionList self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNmrMeasurementListValidations");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'setNmrMeasurementListValidations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'setNmrMeasurementListValidations' is not callable");
  
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
  @param  Nmr_HExchProtectionList self
  @param  Nsim_Run value
**/
void *Nmr_HExchProtectionList_SetOutputFromNmrRun(Nmr_HExchProtectionList self, Nsim_Run value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setOutputFromNmrRun");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'setOutputFromNmrRun'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'setOutputFromNmrRun' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.HExchProtectionList.protectionType

Type, i.e. 
phenomenon giving rise to hydrogen excnage protection.
  @param  Nmr_HExchProtectionList self
  @param  ApiString value
**/
void *Nmr_HExchProtectionList_SetProtectionType(Nmr_HExchProtectionList self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setProtectionType");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'setProtectionType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'setProtectionType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.HExchProtectionList.referenceRateList

List of 
hydrogen exchange rates serving as references for the protection factors 
reported.
  @param  Nmr_HExchProtectionList self
  @param  Nmr_HExchRateList value
**/
void *Nmr_HExchProtectionList_SetReferenceRateList(Nmr_HExchProtectionList self, Nmr_HExchRateList value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setReferenceRateList");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'setReferenceRateList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'setReferenceRateList' is not callable");
  
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
  @param  Nmr_HExchProtectionList self
  @param  ApiInteger value
**/
void *Nmr_HExchProtectionList_SetSerial(Nmr_HExchProtectionList self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.HExchProtectionList.unit

Measurement unit for 
chemical shift differnece. Default is 'ratio', i.e. the quantity is 
dimensionless..
  @param  Nmr_HExchProtectionList self
  @param  ApiString value
**/
void *Nmr_HExchProtectionList_SetUnit(Nmr_HExchProtectionList self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setUnit");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'setUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'setUnit' is not callable");
  
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
  @param  Nmr_HExchProtectionList self
  @returns   the result
**/
ApiList Nmr_HExchProtectionList_SortedEntries(Nmr_HExchProtectionList self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedEntries");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'sortedEntries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'sortedEntries' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.HExchProtectionList.experiments

Experiments for 
which hydrogen exchange protection factor list is valid
  @param  Nmr_HExchProtectionList self
  @returns   the result
**/
ApiList Nmr_HExchProtectionList_SortedExperiments(Nmr_HExchProtectionList self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedExperiments");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'sortedExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'sortedExperiments' is not callable");
  
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
  @param  Nmr_HExchProtectionList self
  @returns   the result
**/
ApiList Nmr_HExchProtectionList_SortedInputToNmrRuns(Nmr_HExchProtectionList self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedInputToNmrRuns");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'sortedInputToNmrRuns'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'sortedInputToNmrRuns' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.HExchProtectionList.measurements

child link to 
class HExchProtection
  @param  Nmr_HExchProtectionList self
  @returns   the result
**/
ApiList Nmr_HExchProtectionList_SortedMeasurements(Nmr_HExchProtectionList self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedMeasurements");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'sortedMeasurements'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'sortedMeasurements' is not callable");
  
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
  @param  Nmr_HExchProtectionList self
  @returns   the result
**/
ApiList Nmr_HExchProtectionList_SortedNmrMeasurementListValidations(Nmr_HExchProtectionList self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedNmrMeasurementListValidations");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: cannot find method 'sortedNmrMeasurementListValidations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.HExchProtectionList: method 'sortedNmrMeasurementListValidations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
