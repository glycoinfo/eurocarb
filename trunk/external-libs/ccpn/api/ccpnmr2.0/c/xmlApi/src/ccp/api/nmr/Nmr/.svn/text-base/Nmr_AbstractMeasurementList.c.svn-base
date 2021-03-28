
#include "ccp.h"

/*
  Abstract list of measurements. Different kinds of measurements belong to different kinsd of lists. All measurements belong to a list.
  
  NB All MeasurementLists have the attribute 'unit' (mandatory, datatype Word) giving the unit of measurement. For each kind of MeasurementList the unit will default to the recommended value.
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractMeasurementList self
  @param  Impl_ApplicationData value
**/
void *Nmr_AbstractMeasurementList_AddApplicationData(Nmr_AbstractMeasurementList self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: method 'addApplicationData' is not callable");
  
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
  @param  Nmr_AbstractMeasurementList self
  @param  Entr_Entry value
**/
void *Nmr_AbstractMeasurementList_AddEntry(Nmr_AbstractMeasurementList self, Entr_Entry value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addEntry");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: cannot find method 'addEntry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: method 'addEntry' is not callable");
  
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
  @param  Nmr_AbstractMeasurementList self
  @param  Nsim_Run value
**/
void *Nmr_AbstractMeasurementList_AddInputToNmrRun(Nmr_AbstractMeasurementList self, Nsim_Run value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addInputToNmrRun");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: cannot find method 'addInputToNmrRun'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: method 'addInputToNmrRun' is not callable");
  
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
  @param  Nmr_AbstractMeasurementList self
  @param  Vald_NmrMeasurementListValidation value
**/
void *Nmr_AbstractMeasurementList_AddNmrMeasurementListValidation(Nmr_AbstractMeasurementList self, Vald_NmrMeasurementListValidation value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addNmrMeasurementListValidation");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: cannot find method 'addNmrMeasurementListValidation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: method 'addNmrMeasurementListValidation' is not callable");
  
  args = PyTuple_Pack(1, value);
  
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
  @param  Nmr_AbstractMeasurementList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_AbstractMeasurementList_FindAllApplicationData(Nmr_AbstractMeasurementList self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: method 'findAllApplicationData' is not callable");
  
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
  @param  Nmr_AbstractMeasurementList self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_AbstractMeasurementList_FindAllApplicationData_keyval0(Nmr_AbstractMeasurementList self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_AbstractMeasurementList_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractMeasurementList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_AbstractMeasurementList_FindAllApplicationData_keyval1(Nmr_AbstractMeasurementList self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_AbstractMeasurementList_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractMeasurementList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_AbstractMeasurementList_FindAllApplicationData_keyval2(Nmr_AbstractMeasurementList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_AbstractMeasurementList_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractMeasurementList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_AbstractMeasurementList_FindAllApplicationData_keyval3(Nmr_AbstractMeasurementList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_AbstractMeasurementList_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractMeasurementList self
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
ApiList Nmr_AbstractMeasurementList_FindAllApplicationData_keyval4(Nmr_AbstractMeasurementList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_AbstractMeasurementList_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_AbstractMeasurementList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_AbstractMeasurementList_FindAllEntries(Nmr_AbstractMeasurementList self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllEntries");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: cannot find method 'findAllEntries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: method 'findAllEntries' is not callable");
  
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
  @param  Nmr_AbstractMeasurementList self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_AbstractMeasurementList_FindAllEntries_keyval0(Nmr_AbstractMeasurementList self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_AbstractMeasurementList_FindAllEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_AbstractMeasurementList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_AbstractMeasurementList_FindAllEntries_keyval1(Nmr_AbstractMeasurementList self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_AbstractMeasurementList_FindAllEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_AbstractMeasurementList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_AbstractMeasurementList_FindAllEntries_keyval2(Nmr_AbstractMeasurementList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_AbstractMeasurementList_FindAllEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_AbstractMeasurementList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_AbstractMeasurementList_FindAllEntries_keyval3(Nmr_AbstractMeasurementList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_AbstractMeasurementList_FindAllEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_AbstractMeasurementList self
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
ApiSet Nmr_AbstractMeasurementList_FindAllEntries_keyval4(Nmr_AbstractMeasurementList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_AbstractMeasurementList_FindAllEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_AbstractMeasurementList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_AbstractMeasurementList_FindAllInputToNmrRuns(Nmr_AbstractMeasurementList self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllInputToNmrRuns");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: cannot find method 'findAllInputToNmrRuns'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: method 'findAllInputToNmrRuns' is not callable");
  
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
  @param  Nmr_AbstractMeasurementList self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_AbstractMeasurementList_FindAllInputToNmrRuns_keyval0(Nmr_AbstractMeasurementList self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_AbstractMeasurementList_FindAllInputToNmrRuns(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_AbstractMeasurementList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_AbstractMeasurementList_FindAllInputToNmrRuns_keyval1(Nmr_AbstractMeasurementList self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_AbstractMeasurementList_FindAllInputToNmrRuns(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_AbstractMeasurementList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_AbstractMeasurementList_FindAllInputToNmrRuns_keyval2(Nmr_AbstractMeasurementList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_AbstractMeasurementList_FindAllInputToNmrRuns(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_AbstractMeasurementList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_AbstractMeasurementList_FindAllInputToNmrRuns_keyval3(Nmr_AbstractMeasurementList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_AbstractMeasurementList_FindAllInputToNmrRuns(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_AbstractMeasurementList self
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
ApiSet Nmr_AbstractMeasurementList_FindAllInputToNmrRuns_keyval4(Nmr_AbstractMeasurementList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_AbstractMeasurementList_FindAllInputToNmrRuns(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.measurements

child link 
to class AbstractMeasurement
  @param  Nmr_AbstractMeasurementList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_AbstractMeasurementList_FindAllMeasurements(Nmr_AbstractMeasurementList self, ApiMap conditions)
{
}

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.measurements

child link 
to class AbstractMeasurement
  @param  Nmr_AbstractMeasurementList self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_AbstractMeasurementList_FindAllMeasurements_keyval0(Nmr_AbstractMeasurementList self)
{
}

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.measurements

child link 
to class AbstractMeasurement
  @param  Nmr_AbstractMeasurementList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_AbstractMeasurementList_FindAllMeasurements_keyval1(Nmr_AbstractMeasurementList self, char * key, ApiObject value)
{
}

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.measurements

child link 
to class AbstractMeasurement
  @param  Nmr_AbstractMeasurementList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_AbstractMeasurementList_FindAllMeasurements_keyval2(Nmr_AbstractMeasurementList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
}

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.measurements

child link 
to class AbstractMeasurement
  @param  Nmr_AbstractMeasurementList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_AbstractMeasurementList_FindAllMeasurements_keyval3(Nmr_AbstractMeasurementList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
}

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.measurements

child link 
to class AbstractMeasurement
  @param  Nmr_AbstractMeasurementList self
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
ApiSet Nmr_AbstractMeasurementList_FindAllMeasurements_keyval4(Nmr_AbstractMeasurementList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_AbstractMeasurementList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_AbstractMeasurementList_FindAllNmrMeasurementListValidations(Nmr_AbstractMeasurementList self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllNmrMeasurementListValidations");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: cannot find method 'findAllNmrMeasurementListValidations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: method 'findAllNmrMeasurementListValidations' is not callable");
  
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
  @param  Nmr_AbstractMeasurementList self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_AbstractMeasurementList_FindAllNmrMeasurementListValidations_keyval0(Nmr_AbstractMeasurementList self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_AbstractMeasurementList_FindAllNmrMeasurementListValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_AbstractMeasurementList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_AbstractMeasurementList_FindAllNmrMeasurementListValidations_keyval1(Nmr_AbstractMeasurementList self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_AbstractMeasurementList_FindAllNmrMeasurementListValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_AbstractMeasurementList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_AbstractMeasurementList_FindAllNmrMeasurementListValidations_keyval2(Nmr_AbstractMeasurementList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_AbstractMeasurementList_FindAllNmrMeasurementListValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_AbstractMeasurementList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_AbstractMeasurementList_FindAllNmrMeasurementListValidations_keyval3(Nmr_AbstractMeasurementList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_AbstractMeasurementList_FindAllNmrMeasurementListValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_AbstractMeasurementList self
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
ApiSet Nmr_AbstractMeasurementList_FindAllNmrMeasurementListValidations_keyval4(Nmr_AbstractMeasurementList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_AbstractMeasurementList_FindAllNmrMeasurementListValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractMeasurementList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_AbstractMeasurementList_FindFirstApplicationData(Nmr_AbstractMeasurementList self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nmr_AbstractMeasurementList self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_AbstractMeasurementList_FindFirstApplicationData_keyval0(Nmr_AbstractMeasurementList self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_AbstractMeasurementList_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractMeasurementList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_AbstractMeasurementList_FindFirstApplicationData_keyval1(Nmr_AbstractMeasurementList self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_AbstractMeasurementList_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractMeasurementList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_AbstractMeasurementList_FindFirstApplicationData_keyval2(Nmr_AbstractMeasurementList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_AbstractMeasurementList_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractMeasurementList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_AbstractMeasurementList_FindFirstApplicationData_keyval3(Nmr_AbstractMeasurementList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_AbstractMeasurementList_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractMeasurementList self
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
Impl_ApplicationData Nmr_AbstractMeasurementList_FindFirstApplicationData_keyval4(Nmr_AbstractMeasurementList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_AbstractMeasurementList_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_AbstractMeasurementList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Nmr_AbstractMeasurementList_FindFirstEntry(Nmr_AbstractMeasurementList self, ApiMap conditions)
{
  
  Entr_Entry obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstEntry");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: cannot find method 'findFirstEntry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: method 'findFirstEntry' is not callable");
  
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
  @param  Nmr_AbstractMeasurementList self
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Nmr_AbstractMeasurementList_FindFirstEntry_keyval0(Nmr_AbstractMeasurementList self)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_AbstractMeasurementList_FindFirstEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_AbstractMeasurementList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Nmr_AbstractMeasurementList_FindFirstEntry_keyval1(Nmr_AbstractMeasurementList self, char * key, ApiObject value)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_AbstractMeasurementList_FindFirstEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_AbstractMeasurementList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Nmr_AbstractMeasurementList_FindFirstEntry_keyval2(Nmr_AbstractMeasurementList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_AbstractMeasurementList_FindFirstEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_AbstractMeasurementList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Nmr_AbstractMeasurementList_FindFirstEntry_keyval3(Nmr_AbstractMeasurementList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_AbstractMeasurementList_FindFirstEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_AbstractMeasurementList self
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
Entr_Entry Nmr_AbstractMeasurementList_FindFirstEntry_keyval4(Nmr_AbstractMeasurementList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_AbstractMeasurementList_FindFirstEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_AbstractMeasurementList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nsim_Run Nmr_AbstractMeasurementList_FindFirstInputToNmrRun(Nmr_AbstractMeasurementList self, ApiMap conditions)
{
  
  Nsim_Run obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstInputToNmrRun");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: cannot find method 'findFirstInputToNmrRun'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: method 'findFirstInputToNmrRun' is not callable");
  
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
  @param  Nmr_AbstractMeasurementList self
  @returns  the first value that satisfies the conditions 
**/
Nsim_Run Nmr_AbstractMeasurementList_FindFirstInputToNmrRun_keyval0(Nmr_AbstractMeasurementList self)
{
  
  Nsim_Run  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_AbstractMeasurementList_FindFirstInputToNmrRun(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_AbstractMeasurementList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nsim_Run Nmr_AbstractMeasurementList_FindFirstInputToNmrRun_keyval1(Nmr_AbstractMeasurementList self, char * key, ApiObject value)
{
  
  Nsim_Run  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_AbstractMeasurementList_FindFirstInputToNmrRun(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_AbstractMeasurementList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nsim_Run Nmr_AbstractMeasurementList_FindFirstInputToNmrRun_keyval2(Nmr_AbstractMeasurementList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nsim_Run  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_AbstractMeasurementList_FindFirstInputToNmrRun(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_AbstractMeasurementList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nsim_Run Nmr_AbstractMeasurementList_FindFirstInputToNmrRun_keyval3(Nmr_AbstractMeasurementList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nsim_Run  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_AbstractMeasurementList_FindFirstInputToNmrRun(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_AbstractMeasurementList self
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
Nsim_Run Nmr_AbstractMeasurementList_FindFirstInputToNmrRun_keyval4(Nmr_AbstractMeasurementList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nsim_Run  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_AbstractMeasurementList_FindFirstInputToNmrRun(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.measurements

child 
link to class AbstractMeasurement
  @param  Nmr_AbstractMeasurementList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractMeasurement Nmr_AbstractMeasurementList_FindFirstMeasurement(Nmr_AbstractMeasurementList self, ApiMap conditions)
{
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.measurements

child 
link to class AbstractMeasurement
  @param  Nmr_AbstractMeasurementList self
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractMeasurement Nmr_AbstractMeasurementList_FindFirstMeasurement_keyval0(Nmr_AbstractMeasurementList self)
{
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.measurements

child 
link to class AbstractMeasurement
  @param  Nmr_AbstractMeasurementList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractMeasurement Nmr_AbstractMeasurementList_FindFirstMeasurement_keyval1(Nmr_AbstractMeasurementList self, char * key, ApiObject value)
{
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.measurements

child 
link to class AbstractMeasurement
  @param  Nmr_AbstractMeasurementList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractMeasurement Nmr_AbstractMeasurementList_FindFirstMeasurement_keyval2(Nmr_AbstractMeasurementList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.measurements

child 
link to class AbstractMeasurement
  @param  Nmr_AbstractMeasurementList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractMeasurement Nmr_AbstractMeasurementList_FindFirstMeasurement_keyval3(Nmr_AbstractMeasurementList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.measurements

child 
link to class AbstractMeasurement
  @param  Nmr_AbstractMeasurementList self
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
Nmr_AbstractMeasurement Nmr_AbstractMeasurementList_FindFirstMeasurement_keyval4(Nmr_AbstractMeasurementList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_AbstractMeasurementList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Vald_NmrMeasurementListValidation Nmr_AbstractMeasurementList_FindFirstNmrMeasurementListValidation(Nmr_AbstractMeasurementList self, ApiMap conditions)
{
  
  Vald_NmrMeasurementListValidation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstNmrMeasurementListValidation");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: cannot find method 'findFirstNmrMeasurementListValidation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: method 'findFirstNmrMeasurementListValidation' is not callable");
  
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
  @param  Nmr_AbstractMeasurementList self
  @returns  the first value that satisfies the conditions 
**/
Vald_NmrMeasurementListValidation Nmr_AbstractMeasurementList_FindFirstNmrMeasurementListValidation_keyval0(Nmr_AbstractMeasurementList self)
{
  
  Vald_NmrMeasurementListValidation  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_AbstractMeasurementList_FindFirstNmrMeasurementListValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_AbstractMeasurementList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Vald_NmrMeasurementListValidation Nmr_AbstractMeasurementList_FindFirstNmrMeasurementListValidation_keyval1(Nmr_AbstractMeasurementList self, char * key, ApiObject value)
{
  
  Vald_NmrMeasurementListValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_AbstractMeasurementList_FindFirstNmrMeasurementListValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_AbstractMeasurementList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Vald_NmrMeasurementListValidation Nmr_AbstractMeasurementList_FindFirstNmrMeasurementListValidation_keyval2(Nmr_AbstractMeasurementList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Vald_NmrMeasurementListValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_AbstractMeasurementList_FindFirstNmrMeasurementListValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_AbstractMeasurementList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Vald_NmrMeasurementListValidation Nmr_AbstractMeasurementList_FindFirstNmrMeasurementListValidation_keyval3(Nmr_AbstractMeasurementList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Vald_NmrMeasurementListValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_AbstractMeasurementList_FindFirstNmrMeasurementListValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_AbstractMeasurementList self
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
Vald_NmrMeasurementListValidation Nmr_AbstractMeasurementList_FindFirstNmrMeasurementListValidation_keyval4(Nmr_AbstractMeasurementList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Vald_NmrMeasurementListValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_AbstractMeasurementList_FindFirstNmrMeasurementListValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_AbstractMeasurementList self
  @returns   the result
**/
Acco_AccessObject Nmr_AbstractMeasurementList_GetAccess(Nmr_AbstractMeasurementList self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: method 'getAccess' is not callable");
  
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
  @param  Nmr_AbstractMeasurementList self
  @returns   the result
**/
ApiList Nmr_AbstractMeasurementList_GetApplicationData(Nmr_AbstractMeasurementList self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.Nmr.AbstractMeasurementList
  @param  Nmr_AbstractMeasurementList self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nmr_AbstractMeasurementList Nmr_AbstractMeasurementList_GetByKey(Nmr_AbstractMeasurementList self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Nmr_AbstractMeasurementList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: method 'getByKey' is not callable");
  
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
  @param  Nmr_AbstractMeasurementList self
  @returns   the result
**/
ApiString Nmr_AbstractMeasurementList_GetClassName(Nmr_AbstractMeasurementList self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: method 'getClassName' is not callable");
  
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
  @param  Nmr_AbstractMeasurementList self
  @returns   the result
**/
ApiString Nmr_AbstractMeasurementList_GetDetails(Nmr_AbstractMeasurementList self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: method 'getDetails' is not callable");
  
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
  @param  Nmr_AbstractMeasurementList self
  @returns   the result
**/
ApiSet Nmr_AbstractMeasurementList_GetEntries(Nmr_AbstractMeasurementList self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getEntries");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: cannot find method 'getEntries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: method 'getEntries' is not callable");
  
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
  @param  Nmr_AbstractMeasurementList self
  @returns   the result
**/
ApiList Nmr_AbstractMeasurementList_GetFieldNames(Nmr_AbstractMeasurementList self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.nmr.Nmr.AbstractMeasurementList
  @param  Nmr_AbstractMeasurementList self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Nmr_AbstractMeasurementList_GetFullKey(Nmr_AbstractMeasurementList self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: method 'getFullKey' is not callable");
  
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
  @param  Nmr_AbstractMeasurementList self
  @returns   the result
**/
ApiBoolean Nmr_AbstractMeasurementList_GetInConstructor(Nmr_AbstractMeasurementList self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: method 'getInConstructor' is not callable");
  
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
  @param  Nmr_AbstractMeasurementList self
  @returns   the result
**/
ApiSet Nmr_AbstractMeasurementList_GetInputToNmrRuns(Nmr_AbstractMeasurementList self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInputToNmrRuns");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: cannot find method 'getInputToNmrRuns'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: method 'getInputToNmrRuns' is not callable");
  
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
  @param  Nmr_AbstractMeasurementList self
  @returns   the result
**/
ApiBoolean Nmr_AbstractMeasurementList_GetIsDeleted(Nmr_AbstractMeasurementList self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: method 'getIsDeleted' is not callable");
  
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
  @param  Nmr_AbstractMeasurementList self
  @returns   the result
**/
ApiBoolean Nmr_AbstractMeasurementList_GetIsSimulated(Nmr_AbstractMeasurementList self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsSimulated");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: cannot find method 'getIsSimulated'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: method 'getIsSimulated' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.nmr.Nmr.AbstractMeasurementList
  @param  Nmr_AbstractMeasurementList self
  @returns  Local object key
**/
ApiObject Nmr_AbstractMeasurementList_GetLocalKey(Nmr_AbstractMeasurementList self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.measurements

child link to 
class AbstractMeasurement
  @param  Nmr_AbstractMeasurementList self
  @returns   the result
**/
ApiSet Nmr_AbstractMeasurementList_GetMeasurements(Nmr_AbstractMeasurementList self)
{
}

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.method

Default method used 
to calculate measurements. May be overridden for individual measurements 
in the list.
  @param  Nmr_AbstractMeasurementList self
  @returns   the result
**/
Meth_Method Nmr_AbstractMeasurementList_GetMethod(Nmr_AbstractMeasurementList self)
{
  
  Meth_Method obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMethod");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: cannot find method 'getMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: method 'getMethod' is not callable");
  
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
  @param  Nmr_AbstractMeasurementList self
  @returns   the result
**/
ApiString Nmr_AbstractMeasurementList_GetName(Nmr_AbstractMeasurementList self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: method 'getName' is not callable");
  
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
  @param  Nmr_AbstractMeasurementList self
  @returns   the result
**/
ApiSet Nmr_AbstractMeasurementList_GetNmrMeasurementListValidations(Nmr_AbstractMeasurementList self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrMeasurementListValidations");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: cannot find method 'getNmrMeasurementListValidations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: method 'getNmrMeasurementListValidations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.nmrProject

parent link
  @param  Nmr_AbstractMeasurementList self
  @returns   the result
**/
Nmr_NmrProject Nmr_AbstractMeasurementList_GetNmrProject(Nmr_AbstractMeasurementList self)
{
  
  Nmr_NmrProject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrProject");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: cannot find method 'getNmrProject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: method 'getNmrProject' is not callable");
  
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
  @param  Nmr_AbstractMeasurementList self
  @returns   the result
**/
Nsim_Run Nmr_AbstractMeasurementList_GetOutputFromNmrRun(Nmr_AbstractMeasurementList self)
{
  
  Nsim_Run obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getOutputFromNmrRun");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: cannot find method 'getOutputFromNmrRun'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: method 'getOutputFromNmrRun' is not callable");
  
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
  @param  Nmr_AbstractMeasurementList self
  @returns   the result
**/
ApiString Nmr_AbstractMeasurementList_GetPackageName(Nmr_AbstractMeasurementList self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: method 'getPackageName' is not callable");
  
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
  @param  Nmr_AbstractMeasurementList self
  @returns   the result
**/
ApiString Nmr_AbstractMeasurementList_GetPackageShortName(Nmr_AbstractMeasurementList self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: method 'getPackageShortName' is not callable");
  
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
  @param  Nmr_AbstractMeasurementList self
  @returns   the result
**/
Nmr_NmrProject Nmr_AbstractMeasurementList_GetParent(Nmr_AbstractMeasurementList self)
{
  
  Nmr_NmrProject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: method 'getParent' is not callable");
  
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
  @param  Nmr_AbstractMeasurementList self
  @returns   the result
**/
ApiString Nmr_AbstractMeasurementList_GetQualifiedName(Nmr_AbstractMeasurementList self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: method 'getQualifiedName' is not callable");
  
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
  @param  Nmr_AbstractMeasurementList self
  @returns   the result
**/
Impl_MemopsRoot Nmr_AbstractMeasurementList_GetRoot(Nmr_AbstractMeasurementList self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: method 'getRoot' is not callable");
  
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
  @param  Nmr_AbstractMeasurementList self
  @returns   the result
**/
ApiInteger Nmr_AbstractMeasurementList_GetSerial(Nmr_AbstractMeasurementList self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: method 'getSerial' is not callable");
  
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
  @param  Nmr_AbstractMeasurementList self
  @returns   the result
**/
Impl_TopObject Nmr_AbstractMeasurementList_GetTopObject(Nmr_AbstractMeasurementList self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.unit

Unit of measurement 
for measurementList.
  @param  Nmr_AbstractMeasurementList self
  @returns   the result
**/
ApiString Nmr_AbstractMeasurementList_GetUnit(Nmr_AbstractMeasurementList self)
{
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractMeasurementList self
  @param  Impl_ApplicationData value
**/
void *Nmr_AbstractMeasurementList_RemoveApplicationData(Nmr_AbstractMeasurementList self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: method 'removeApplicationData' is not callable");
  
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
  @param  Nmr_AbstractMeasurementList self
  @param  Entr_Entry value
**/
void *Nmr_AbstractMeasurementList_RemoveEntry(Nmr_AbstractMeasurementList self, Entr_Entry value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeEntry");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: cannot find method 'removeEntry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: method 'removeEntry' is not callable");
  
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
  @param  Nmr_AbstractMeasurementList self
  @param  Nsim_Run value
**/
void *Nmr_AbstractMeasurementList_RemoveInputToNmrRun(Nmr_AbstractMeasurementList self, Nsim_Run value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeInputToNmrRun");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: cannot find method 'removeInputToNmrRun'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: method 'removeInputToNmrRun' is not callable");
  
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
  @param  Nmr_AbstractMeasurementList self
  @param  Vald_NmrMeasurementListValidation value
**/
void *Nmr_AbstractMeasurementList_RemoveNmrMeasurementListValidation(Nmr_AbstractMeasurementList self, Vald_NmrMeasurementListValidation value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeNmrMeasurementListValidation");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: cannot find method 'removeNmrMeasurementListValidation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: method 'removeNmrMeasurementListValidation' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_AbstractMeasurementList self
  @param  Acco_AccessObject value
**/
void *Nmr_AbstractMeasurementList_SetAccess(Nmr_AbstractMeasurementList self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: method 'setAccess' is not callable");
  
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
  @param  Nmr_AbstractMeasurementList self
  @param  ApiList values
**/
void *Nmr_AbstractMeasurementList_SetApplicationData(Nmr_AbstractMeasurementList self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: method 'setApplicationData' is not callable");
  
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
  @param  Nmr_AbstractMeasurementList self
  @param  ApiString value
**/
void *Nmr_AbstractMeasurementList_SetDetails(Nmr_AbstractMeasurementList self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: method 'setDetails' is not callable");
  
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
  @param  Nmr_AbstractMeasurementList self
  @param  ApiSet values
**/
void *Nmr_AbstractMeasurementList_SetEntries(Nmr_AbstractMeasurementList self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setEntries");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: cannot find method 'setEntries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: method 'setEntries' is not callable");
  
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
  @param  Nmr_AbstractMeasurementList self
  @param  ApiSet values
**/
void *Nmr_AbstractMeasurementList_SetInputToNmrRuns(Nmr_AbstractMeasurementList self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setInputToNmrRuns");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: cannot find method 'setInputToNmrRuns'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: method 'setInputToNmrRuns' is not callable");
  
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
  @param  Nmr_AbstractMeasurementList self
  @param  ApiBoolean value
**/
void *Nmr_AbstractMeasurementList_SetIsSimulated(Nmr_AbstractMeasurementList self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsSimulated");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: cannot find method 'setIsSimulated'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: method 'setIsSimulated' is not callable");
  
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
  @param  Nmr_AbstractMeasurementList self
  @param  Meth_Method value
**/
void *Nmr_AbstractMeasurementList_SetMethod(Nmr_AbstractMeasurementList self, Meth_Method value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMethod");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: cannot find method 'setMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: method 'setMethod' is not callable");
  
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
  @param  Nmr_AbstractMeasurementList self
  @param  ApiString value
**/
void *Nmr_AbstractMeasurementList_SetName(Nmr_AbstractMeasurementList self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: method 'setName' is not callable");
  
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
  @param  Nmr_AbstractMeasurementList self
  @param  ApiSet values
**/
void *Nmr_AbstractMeasurementList_SetNmrMeasurementListValidations(Nmr_AbstractMeasurementList self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNmrMeasurementListValidations");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: cannot find method 'setNmrMeasurementListValidations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: method 'setNmrMeasurementListValidations' is not callable");
  
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
  @param  Nmr_AbstractMeasurementList self
  @param  Nsim_Run value
**/
void *Nmr_AbstractMeasurementList_SetOutputFromNmrRun(Nmr_AbstractMeasurementList self, Nsim_Run value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setOutputFromNmrRun");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: cannot find method 'setOutputFromNmrRun'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: method 'setOutputFromNmrRun' is not callable");
  
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
  @param  Nmr_AbstractMeasurementList self
  @param  ApiInteger value
**/
void *Nmr_AbstractMeasurementList_SetSerial(Nmr_AbstractMeasurementList self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.AbstractMeasurementList.unit

Unit of measurement 
for measurementList.
  @param  Nmr_AbstractMeasurementList self
  @param  ApiString value
**/
void *Nmr_AbstractMeasurementList_SetUnit(Nmr_AbstractMeasurementList self, ApiString value)
{
}

/**
  Sorted for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries for 
MeasurementList
  @param  Nmr_AbstractMeasurementList self
  @returns   the result
**/
ApiList Nmr_AbstractMeasurementList_SortedEntries(Nmr_AbstractMeasurementList self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedEntries");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: cannot find method 'sortedEntries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: method 'sortedEntries' is not callable");
  
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
  @param  Nmr_AbstractMeasurementList self
  @returns   the result
**/
ApiList Nmr_AbstractMeasurementList_SortedInputToNmrRuns(Nmr_AbstractMeasurementList self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedInputToNmrRuns");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: cannot find method 'sortedInputToNmrRuns'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: method 'sortedInputToNmrRuns' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.AbstractMeasurementList.measurements

child link 
to class AbstractMeasurement
  @param  Nmr_AbstractMeasurementList self
  @returns   the result
**/
ApiList Nmr_AbstractMeasurementList_SortedMeasurements(Nmr_AbstractMeasurementList self)
{
}

/**
  Sorted for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_AbstractMeasurementList self
  @returns   the result
**/
ApiList Nmr_AbstractMeasurementList_SortedNmrMeasurementListValidations(Nmr_AbstractMeasurementList self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedNmrMeasurementListValidations");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: cannot find method 'sortedNmrMeasurementListValidations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractMeasurementList: method 'sortedNmrMeasurementListValidations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
