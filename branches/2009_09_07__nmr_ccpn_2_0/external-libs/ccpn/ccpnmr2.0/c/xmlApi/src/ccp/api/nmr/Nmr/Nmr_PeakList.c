
#include "ccp.h"

/*
  List of Peaks, all belonging to a specific DataSource.
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakList self
  @param  Impl_ApplicationData value
**/
void *Nmr_PeakList_AddApplicationData(Nmr_PeakList self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakList: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakList: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.Nmr.PeakList.inputToNmrRuns

NmrSim.Runs where PeakList 
is used as input
  @param  Nmr_PeakList self
  @param  Nsim_Run value
**/
void *Nmr_PeakList_AddInputToNmrRun(Nmr_PeakList self, Nsim_Run value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addInputToNmrRun");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakList: cannot find method 'addInputToNmrRun'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakList: method 'addInputToNmrRun' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.Nmr.PeakList.peakListValidations

Validation result that 
include PeakLists
  @param  Nmr_PeakList self
  @param  Vald_PeakListValidation value
**/
void *Nmr_PeakList_AddPeakListValidation(Nmr_PeakList self, Vald_PeakListValidation value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addPeakListValidation");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakList: cannot find method 'addPeakListValidation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakList: method 'addPeakListValidation' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.nmr.Nmr.PeakList
  @param  Nmr_PeakList self
  @param  ApiBoolean complete
**/
void *Nmr_PeakList_CheckAllValid(Nmr_PeakList self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakList: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakList: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.nmr.Nmr.PeakList
  @param  Nmr_PeakList self
  @param  ApiBoolean complete
**/
void *Nmr_PeakList_CheckValid(Nmr_PeakList self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakList: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakList: method 'checkValid' is not callable");
  
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
  @param  Nmr_PeakList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_PeakList_FindAllApplicationData(Nmr_PeakList self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakList: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakList: method 'findAllApplicationData' is not callable");
  
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
  @param  Nmr_PeakList self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_PeakList_FindAllApplicationData_keyval0(Nmr_PeakList self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_PeakList_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_PeakList_FindAllApplicationData_keyval1(Nmr_PeakList self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_PeakList_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_PeakList_FindAllApplicationData_keyval2(Nmr_PeakList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_PeakList_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_PeakList_FindAllApplicationData_keyval3(Nmr_PeakList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_PeakList_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakList self
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
ApiList Nmr_PeakList_FindAllApplicationData_keyval4(Nmr_PeakList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_PeakList_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.PeakList.inputToNmrRuns

NmrSim.Runs where 
PeakList is used as input
  @param  Nmr_PeakList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PeakList_FindAllInputToNmrRuns(Nmr_PeakList self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllInputToNmrRuns");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakList: cannot find method 'findAllInputToNmrRuns'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakList: method 'findAllInputToNmrRuns' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.PeakList.inputToNmrRuns

NmrSim.Runs where 
PeakList is used as input
  @param  Nmr_PeakList self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PeakList_FindAllInputToNmrRuns_keyval0(Nmr_PeakList self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_PeakList_FindAllInputToNmrRuns(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.PeakList.inputToNmrRuns

NmrSim.Runs where 
PeakList is used as input
  @param  Nmr_PeakList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PeakList_FindAllInputToNmrRuns_keyval1(Nmr_PeakList self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_PeakList_FindAllInputToNmrRuns(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.PeakList.inputToNmrRuns

NmrSim.Runs where 
PeakList is used as input
  @param  Nmr_PeakList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PeakList_FindAllInputToNmrRuns_keyval2(Nmr_PeakList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_PeakList_FindAllInputToNmrRuns(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.PeakList.inputToNmrRuns

NmrSim.Runs where 
PeakList is used as input
  @param  Nmr_PeakList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PeakList_FindAllInputToNmrRuns_keyval3(Nmr_PeakList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_PeakList_FindAllInputToNmrRuns(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.PeakList.inputToNmrRuns

NmrSim.Runs where 
PeakList is used as input
  @param  Nmr_PeakList self
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
ApiSet Nmr_PeakList_FindAllInputToNmrRuns_keyval4(Nmr_PeakList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_PeakList_FindAllInputToNmrRuns(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.PeakList.peakListValidations

Validation result 
that include PeakLists
  @param  Nmr_PeakList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PeakList_FindAllPeakListValidations(Nmr_PeakList self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllPeakListValidations");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakList: cannot find method 'findAllPeakListValidations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakList: method 'findAllPeakListValidations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.PeakList.peakListValidations

Validation result 
that include PeakLists
  @param  Nmr_PeakList self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PeakList_FindAllPeakListValidations_keyval0(Nmr_PeakList self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_PeakList_FindAllPeakListValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.PeakList.peakListValidations

Validation result 
that include PeakLists
  @param  Nmr_PeakList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PeakList_FindAllPeakListValidations_keyval1(Nmr_PeakList self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_PeakList_FindAllPeakListValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.PeakList.peakListValidations

Validation result 
that include PeakLists
  @param  Nmr_PeakList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PeakList_FindAllPeakListValidations_keyval2(Nmr_PeakList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_PeakList_FindAllPeakListValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.PeakList.peakListValidations

Validation result 
that include PeakLists
  @param  Nmr_PeakList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PeakList_FindAllPeakListValidations_keyval3(Nmr_PeakList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_PeakList_FindAllPeakListValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.PeakList.peakListValidations

Validation result 
that include PeakLists
  @param  Nmr_PeakList self
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
ApiSet Nmr_PeakList_FindAllPeakListValidations_keyval4(Nmr_PeakList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_PeakList_FindAllPeakListValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.PeakList.peaks

child link to class Peak
  @param  Nmr_PeakList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PeakList_FindAllPeaks(Nmr_PeakList self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllPeaks");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakList: cannot find method 'findAllPeaks'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakList: method 'findAllPeaks' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.PeakList.peaks

child link to class Peak
  @param  Nmr_PeakList self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PeakList_FindAllPeaks_keyval0(Nmr_PeakList self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_PeakList_FindAllPeaks(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.PeakList.peaks

child link to class Peak
  @param  Nmr_PeakList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PeakList_FindAllPeaks_keyval1(Nmr_PeakList self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_PeakList_FindAllPeaks(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.PeakList.peaks

child link to class Peak
  @param  Nmr_PeakList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PeakList_FindAllPeaks_keyval2(Nmr_PeakList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_PeakList_FindAllPeaks(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.PeakList.peaks

child link to class Peak
  @param  Nmr_PeakList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PeakList_FindAllPeaks_keyval3(Nmr_PeakList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_PeakList_FindAllPeaks(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.PeakList.peaks

child link to class Peak
  @param  Nmr_PeakList self
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
ApiSet Nmr_PeakList_FindAllPeaks_keyval4(Nmr_PeakList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_PeakList_FindAllPeaks(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_PeakList_FindFirstApplicationData(Nmr_PeakList self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakList: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakList: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nmr_PeakList self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_PeakList_FindFirstApplicationData_keyval0(Nmr_PeakList self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_PeakList_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_PeakList_FindFirstApplicationData_keyval1(Nmr_PeakList self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_PeakList_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_PeakList_FindFirstApplicationData_keyval2(Nmr_PeakList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_PeakList_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_PeakList_FindFirstApplicationData_keyval3(Nmr_PeakList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_PeakList_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakList self
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
Impl_ApplicationData Nmr_PeakList_FindFirstApplicationData_keyval4(Nmr_PeakList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_PeakList_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.PeakList.inputToNmrRuns

NmrSim.Runs where 
PeakList is used as input
  @param  Nmr_PeakList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nsim_Run Nmr_PeakList_FindFirstInputToNmrRun(Nmr_PeakList self, ApiMap conditions)
{
  
  Nsim_Run obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstInputToNmrRun");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakList: cannot find method 'findFirstInputToNmrRun'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakList: method 'findFirstInputToNmrRun' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.PeakList.inputToNmrRuns

NmrSim.Runs where 
PeakList is used as input
  @param  Nmr_PeakList self
  @returns  the first value that satisfies the conditions 
**/
Nsim_Run Nmr_PeakList_FindFirstInputToNmrRun_keyval0(Nmr_PeakList self)
{
  
  Nsim_Run  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_PeakList_FindFirstInputToNmrRun(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.PeakList.inputToNmrRuns

NmrSim.Runs where 
PeakList is used as input
  @param  Nmr_PeakList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nsim_Run Nmr_PeakList_FindFirstInputToNmrRun_keyval1(Nmr_PeakList self, char * key, ApiObject value)
{
  
  Nsim_Run  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_PeakList_FindFirstInputToNmrRun(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.PeakList.inputToNmrRuns

NmrSim.Runs where 
PeakList is used as input
  @param  Nmr_PeakList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nsim_Run Nmr_PeakList_FindFirstInputToNmrRun_keyval2(Nmr_PeakList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nsim_Run  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_PeakList_FindFirstInputToNmrRun(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.PeakList.inputToNmrRuns

NmrSim.Runs where 
PeakList is used as input
  @param  Nmr_PeakList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nsim_Run Nmr_PeakList_FindFirstInputToNmrRun_keyval3(Nmr_PeakList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nsim_Run  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_PeakList_FindFirstInputToNmrRun(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.PeakList.inputToNmrRuns

NmrSim.Runs where 
PeakList is used as input
  @param  Nmr_PeakList self
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
Nsim_Run Nmr_PeakList_FindFirstInputToNmrRun_keyval4(Nmr_PeakList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nsim_Run  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_PeakList_FindFirstInputToNmrRun(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.PeakList.peaks

child link to class Peak
  @param  Nmr_PeakList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_Peak Nmr_PeakList_FindFirstPeak(Nmr_PeakList self, ApiMap conditions)
{
  
  Nmr_Peak obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstPeak");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakList: cannot find method 'findFirstPeak'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakList: method 'findFirstPeak' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.PeakList.peakListValidations

Validation 
result that include PeakLists
  @param  Nmr_PeakList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Vald_PeakListValidation Nmr_PeakList_FindFirstPeakListValidation(Nmr_PeakList self, ApiMap conditions)
{
  
  Vald_PeakListValidation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstPeakListValidation");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakList: cannot find method 'findFirstPeakListValidation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakList: method 'findFirstPeakListValidation' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.PeakList.peakListValidations

Validation 
result that include PeakLists
  @param  Nmr_PeakList self
  @returns  the first value that satisfies the conditions 
**/
Vald_PeakListValidation Nmr_PeakList_FindFirstPeakListValidation_keyval0(Nmr_PeakList self)
{
  
  Vald_PeakListValidation  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_PeakList_FindFirstPeakListValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.PeakList.peakListValidations

Validation 
result that include PeakLists
  @param  Nmr_PeakList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Vald_PeakListValidation Nmr_PeakList_FindFirstPeakListValidation_keyval1(Nmr_PeakList self, char * key, ApiObject value)
{
  
  Vald_PeakListValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_PeakList_FindFirstPeakListValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.PeakList.peakListValidations

Validation 
result that include PeakLists
  @param  Nmr_PeakList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Vald_PeakListValidation Nmr_PeakList_FindFirstPeakListValidation_keyval2(Nmr_PeakList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Vald_PeakListValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_PeakList_FindFirstPeakListValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.PeakList.peakListValidations

Validation 
result that include PeakLists
  @param  Nmr_PeakList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Vald_PeakListValidation Nmr_PeakList_FindFirstPeakListValidation_keyval3(Nmr_PeakList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Vald_PeakListValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_PeakList_FindFirstPeakListValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.PeakList.peakListValidations

Validation 
result that include PeakLists
  @param  Nmr_PeakList self
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
Vald_PeakListValidation Nmr_PeakList_FindFirstPeakListValidation_keyval4(Nmr_PeakList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Vald_PeakListValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_PeakList_FindFirstPeakListValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.PeakList.peaks

child link to class Peak
  @param  Nmr_PeakList self
  @returns  the first value that satisfies the conditions 
**/
Nmr_Peak Nmr_PeakList_FindFirstPeak_keyval0(Nmr_PeakList self)
{
  
  Nmr_Peak  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_PeakList_FindFirstPeak(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.PeakList.peaks

child link to class Peak
  @param  Nmr_PeakList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_Peak Nmr_PeakList_FindFirstPeak_keyval1(Nmr_PeakList self, char * key, ApiObject value)
{
  
  Nmr_Peak  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_PeakList_FindFirstPeak(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.PeakList.peaks

child link to class Peak
  @param  Nmr_PeakList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_Peak Nmr_PeakList_FindFirstPeak_keyval2(Nmr_PeakList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_Peak  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_PeakList_FindFirstPeak(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.PeakList.peaks

child link to class Peak
  @param  Nmr_PeakList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_Peak Nmr_PeakList_FindFirstPeak_keyval3(Nmr_PeakList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_Peak  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_PeakList_FindFirstPeak(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.PeakList.peaks

child link to class Peak
  @param  Nmr_PeakList self
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
Nmr_Peak Nmr_PeakList_FindFirstPeak_keyval4(Nmr_PeakList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_Peak  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_PeakList_FindFirstPeak(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.nmr.Nmr.PeakList
  @param  Nmr_PeakList self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Nmr_PeakList_Get(Nmr_PeakList self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_PeakList self
  @returns   the result
**/
Acco_AccessObject Nmr_PeakList_GetAccess(Nmr_PeakList self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakList: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakList: method 'getAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.PeakList.analysisPeakList

Analysis PeakList object 
associated with PeakList
  @param  Nmr_PeakList self
  @returns   the result
**/
Anal_AnalysisPeakList Nmr_PeakList_GetAnalysisPeakList(Nmr_PeakList self)
{
  
  Anal_AnalysisPeakList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAnalysisPeakList");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakList: cannot find method 'getAnalysisPeakList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakList: method 'getAnalysisPeakList' is not callable");
  
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
  @param  Nmr_PeakList self
  @returns   the result
**/
ApiList Nmr_PeakList_GetApplicationData(Nmr_PeakList self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakList: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakList: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.Nmr.PeakList
  @param  Nmr_PeakList self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nmr_PeakList Nmr_PeakList_GetByKey(Nmr_PeakList self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Nmr_PeakList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakList: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakList: method 'getByKey' is not callable");
  
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
  @param  Nmr_PeakList self
  @returns   the result
**/
ApiString Nmr_PeakList_GetClassName(Nmr_PeakList self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakList: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakList: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.PeakList.dataSource

parent link
  @param  Nmr_PeakList self
  @returns   the result
**/
Nmr_DataSource Nmr_PeakList_GetDataSource(Nmr_PeakList self)
{
  
  Nmr_DataSource obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDataSource");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakList: cannot find method 'getDataSource'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakList: method 'getDataSource' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.PeakList.details

Free text, for notes, explanatory 
comments, etc.
  @param  Nmr_PeakList self
  @returns   the result
**/
ApiString Nmr_PeakList_GetDetails(Nmr_PeakList self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakList: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakList: method 'getDetails' is not callable");
  
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
  @param  Nmr_PeakList self
  @returns   the result
**/
ApiList Nmr_PeakList_GetFieldNames(Nmr_PeakList self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakList: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakList: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.PeakList.fitMethod

Default fitting method for peaks 
in peakList. Valid for any peak that does not have an explicit fititng 
method.
  @param  Nmr_PeakList self
  @returns   the result
**/
Meth_Method Nmr_PeakList_GetFitMethod(Nmr_PeakList self)
{
  
  Meth_Method obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFitMethod");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakList: cannot find method 'getFitMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakList: method 'getFitMethod' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.nmr.Nmr.PeakList
  @param  Nmr_PeakList self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Nmr_PeakList_GetFullKey(Nmr_PeakList self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakList: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakList: method 'getFullKey' is not callable");
  
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
  @param  Nmr_PeakList self
  @returns   the result
**/
ApiBoolean Nmr_PeakList_GetInConstructor(Nmr_PeakList self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakList: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakList: method 'getInConstructor' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.PeakList.inputToNmrRuns

NmrSim.Runs where PeakList 
is used as input
  @param  Nmr_PeakList self
  @returns   the result
**/
ApiSet Nmr_PeakList_GetInputToNmrRuns(Nmr_PeakList self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInputToNmrRuns");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakList: cannot find method 'getInputToNmrRuns'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakList: method 'getInputToNmrRuns' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.PeakList.intensMethod

'Preferred' intensity 
determination method for peakList, the method whose results should be 
mostly relied on by others.
  @param  Nmr_PeakList self
  @returns   the result
**/
Meth_Method Nmr_PeakList_GetIntensMethod(Nmr_PeakList self)
{
  
  Meth_Method obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIntensMethod");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakList: cannot find method 'getIntensMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakList: method 'getIntensMethod' is not callable");
  
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
  @param  Nmr_PeakList self
  @returns   the result
**/
ApiBoolean Nmr_PeakList_GetIsDeleted(Nmr_PeakList self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakList: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakList: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.PeakList.isSimulated

Are the peaks calculated 
rather than measured?
  @param  Nmr_PeakList self
  @returns   the result
**/
ApiBoolean Nmr_PeakList_GetIsSimulated(Nmr_PeakList self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsSimulated");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakList: cannot find method 'getIsSimulated'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakList: method 'getIsSimulated' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.nmr.Nmr.PeakList
  @param  Nmr_PeakList self
  @returns  Local object key
**/
ApiObject Nmr_PeakList_GetLocalKey(Nmr_PeakList self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakList: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakList: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.PeakList.name

Name of peaklist. Used in e.g. 
annotation to distinguish the peaklist from others belonging to the same 
dataSource.
  @param  Nmr_PeakList self
  @returns   the result
**/
ApiString Nmr_PeakList_GetName(Nmr_PeakList self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakList: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakList: method 'getName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.PeakList.outputFromNmrRun

NmrSim.Run used to 
generate PeakList
  @param  Nmr_PeakList self
  @returns   the result
**/
Nsim_Run Nmr_PeakList_GetOutputFromNmrRun(Nmr_PeakList self)
{
  
  Nsim_Run obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getOutputFromNmrRun");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakList: cannot find method 'getOutputFromNmrRun'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakList: method 'getOutputFromNmrRun' is not callable");
  
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
  @param  Nmr_PeakList self
  @returns   the result
**/
ApiString Nmr_PeakList_GetPackageName(Nmr_PeakList self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakList: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakList: method 'getPackageName' is not callable");
  
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
  @param  Nmr_PeakList self
  @returns   the result
**/
ApiString Nmr_PeakList_GetPackageShortName(Nmr_PeakList self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakList: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakList: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.PeakList.parent

link to parent object - synonym for 
dataSource
  @param  Nmr_PeakList self
  @returns   the result
**/
Nmr_DataSource Nmr_PeakList_GetParent(Nmr_PeakList self)
{
  
  Nmr_DataSource obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakList: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakList: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.PeakList.peakListValidations

Validation result that 
include PeakLists
  @param  Nmr_PeakList self
  @returns   the result
**/
ApiSet Nmr_PeakList_GetPeakListValidations(Nmr_PeakList self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPeakListValidations");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakList: cannot find method 'getPeakListValidations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakList: method 'getPeakListValidations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.PeakList.peaks

child link to class Peak
  @param  Nmr_PeakList self
  @returns   the result
**/
ApiSet Nmr_PeakList_GetPeaks(Nmr_PeakList self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPeaks");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakList: cannot find method 'getPeaks'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakList: method 'getPeaks' is not callable");
  
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
  @param  Nmr_PeakList self
  @returns   the result
**/
ApiString Nmr_PeakList_GetQualifiedName(Nmr_PeakList self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakList: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakList: method 'getQualifiedName' is not callable");
  
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
  @param  Nmr_PeakList self
  @returns   the result
**/
Impl_MemopsRoot Nmr_PeakList_GetRoot(Nmr_PeakList self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakList: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakList: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.PeakList.serial

Serial number of object. Serves as 
object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Nmr_PeakList self
  @returns   the result
**/
ApiInteger Nmr_PeakList_GetSerial(Nmr_PeakList self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakList: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakList: method 'getSerial' is not callable");
  
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
  @param  Nmr_PeakList self
  @returns   the result
**/
Impl_TopObject Nmr_PeakList_GetTopObject(Nmr_PeakList self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakList: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakList: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.nmr.Nmr.PeakList
  @param  Nmr_DataSource parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_PeakList Nmr_PeakList_Init(Nmr_DataSource parent, ApiMap attrlinks)
{
  
  return Nmr_DataSource_NewPeakList(parent, attrlinks);
}

/**
  Constructor for ccp.nmr.Nmr.PeakList
  @param  Nmr_DataSource parent
  @returns  the new object
**/
Nmr_PeakList Nmr_PeakList_Init_reqd(Nmr_DataSource parent)
{
  
  Nmr_PeakList  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Nmr_PeakList_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.Peak
  @param  Nmr_PeakList self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_Peak Nmr_PeakList_NewPeak(Nmr_PeakList self, ApiMap attrlinks)
{
  
  Nmr_Peak obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newPeak");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakList: cannot find method 'newPeak'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakList: method 'newPeak' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.Peak
  @param  Nmr_PeakList self
  @returns  the new object
**/
Nmr_Peak Nmr_PeakList_NewPeak_reqd(Nmr_PeakList self)
{
  
  Nmr_Peak  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Nmr_PeakList_NewPeak(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakList self
  @param  Impl_ApplicationData value
**/
void *Nmr_PeakList_RemoveApplicationData(Nmr_PeakList self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakList: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakList: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.Nmr.PeakList.inputToNmrRuns

NmrSim.Runs where 
PeakList is used as input
  @param  Nmr_PeakList self
  @param  Nsim_Run value
**/
void *Nmr_PeakList_RemoveInputToNmrRun(Nmr_PeakList self, Nsim_Run value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeInputToNmrRun");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakList: cannot find method 'removeInputToNmrRun'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakList: method 'removeInputToNmrRun' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.Nmr.PeakList.peakListValidations

Validation result 
that include PeakLists
  @param  Nmr_PeakList self
  @param  Vald_PeakListValidation value
**/
void *Nmr_PeakList_RemovePeakListValidation(Nmr_PeakList self, Vald_PeakListValidation value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removePeakListValidation");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakList: cannot find method 'removePeakListValidation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakList: method 'removePeakListValidation' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.nmr.Nmr.PeakList
  @param  Nmr_PeakList self
  @param  ApiString name
  @param  ApiObject value
**/
void *Nmr_PeakList_Set(Nmr_PeakList self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_PeakList self
  @param  Acco_AccessObject value
**/
void *Nmr_PeakList_SetAccess(Nmr_PeakList self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakList: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakList: method 'setAccess' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.PeakList.analysisPeakList

Analysis PeakList object 
associated with PeakList
  @param  Nmr_PeakList self
  @param  Anal_AnalysisPeakList value
**/
void *Nmr_PeakList_SetAnalysisPeakList(Nmr_PeakList self, Anal_AnalysisPeakList value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAnalysisPeakList");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakList: cannot find method 'setAnalysisPeakList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakList: method 'setAnalysisPeakList' is not callable");
  
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
  @param  Nmr_PeakList self
  @param  ApiList values
**/
void *Nmr_PeakList_SetApplicationData(Nmr_PeakList self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakList: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakList: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.PeakList.details

Free text, for notes, explanatory 
comments, etc.
  @param  Nmr_PeakList self
  @param  ApiString value
**/
void *Nmr_PeakList_SetDetails(Nmr_PeakList self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakList: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakList: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.PeakList.fitMethod

Default fitting method for peaks 
in peakList. Valid for any peak that does not have an explicit fititng 
method.
  @param  Nmr_PeakList self
  @param  Meth_Method value
**/
void *Nmr_PeakList_SetFitMethod(Nmr_PeakList self, Meth_Method value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setFitMethod");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakList: cannot find method 'setFitMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakList: method 'setFitMethod' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.PeakList.inputToNmrRuns

NmrSim.Runs where PeakList 
is used as input
  @param  Nmr_PeakList self
  @param  ApiSet values
**/
void *Nmr_PeakList_SetInputToNmrRuns(Nmr_PeakList self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setInputToNmrRuns");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakList: cannot find method 'setInputToNmrRuns'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakList: method 'setInputToNmrRuns' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.PeakList.intensMethod

'Preferred' intensity 
determination method for peakList, the method whose results should be 
mostly relied on by others.
  @param  Nmr_PeakList self
  @param  Meth_Method value
**/
void *Nmr_PeakList_SetIntensMethod(Nmr_PeakList self, Meth_Method value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIntensMethod");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakList: cannot find method 'setIntensMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakList: method 'setIntensMethod' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.PeakList.isSimulated

Are the peaks calculated 
rather than measured?
  @param  Nmr_PeakList self
  @param  ApiBoolean value
**/
void *Nmr_PeakList_SetIsSimulated(Nmr_PeakList self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsSimulated");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakList: cannot find method 'setIsSimulated'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakList: method 'setIsSimulated' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.PeakList.name

Name of peaklist. Used in e.g. 
annotation to distinguish the peaklist from others belonging to the same 
dataSource.
  @param  Nmr_PeakList self
  @param  ApiString value
**/
void *Nmr_PeakList_SetName(Nmr_PeakList self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakList: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakList: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.PeakList.outputFromNmrRun

NmrSim.Run used to 
generate PeakList
  @param  Nmr_PeakList self
  @param  Nsim_Run value
**/
void *Nmr_PeakList_SetOutputFromNmrRun(Nmr_PeakList self, Nsim_Run value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setOutputFromNmrRun");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakList: cannot find method 'setOutputFromNmrRun'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakList: method 'setOutputFromNmrRun' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.PeakList.peakListValidations

Validation result that 
include PeakLists
  @param  Nmr_PeakList self
  @param  ApiSet values
**/
void *Nmr_PeakList_SetPeakListValidations(Nmr_PeakList self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPeakListValidations");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakList: cannot find method 'setPeakListValidations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakList: method 'setPeakListValidations' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.PeakList.serial

Serial number of object. Serves as 
object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Nmr_PeakList self
  @param  ApiInteger value
**/
void *Nmr_PeakList_SetSerial(Nmr_PeakList self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakList: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakList: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.PeakList.inputToNmrRuns

NmrSim.Runs where 
PeakList is used as input
  @param  Nmr_PeakList self
  @returns   the result
**/
ApiList Nmr_PeakList_SortedInputToNmrRuns(Nmr_PeakList self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedInputToNmrRuns");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakList: cannot find method 'sortedInputToNmrRuns'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakList: method 'sortedInputToNmrRuns' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.PeakList.peakListValidations

Validation result 
that include PeakLists
  @param  Nmr_PeakList self
  @returns   the result
**/
ApiList Nmr_PeakList_SortedPeakListValidations(Nmr_PeakList self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedPeakListValidations");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakList: cannot find method 'sortedPeakListValidations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakList: method 'sortedPeakListValidations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.PeakList.peaks

child link to class Peak
  @param  Nmr_PeakList self
  @returns   the result
**/
ApiList Nmr_PeakList_SortedPeaks(Nmr_PeakList self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedPeaks");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakList: cannot find method 'sortedPeaks'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakList: method 'sortedPeaks' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
