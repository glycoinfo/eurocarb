
#include "ccp.h"

/*
  Chemical Shift referencing. The reference actually used (not the one quoted against). Used for references internal to (part of) the sample.
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_InternalShiftReference self
  @param  Impl_ApplicationData value
**/
void *Nmr_InternalShiftReference_AddApplicationData(Nmr_InternalShiftReference self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.Nmr.ShiftReference.experiments

Experiments that use 
ShiftReference
  @param  Nmr_InternalShiftReference self
  @param  Nmr_Experiment value
**/
void *Nmr_InternalShiftReference_AddExperiment(Nmr_InternalShiftReference self, Nmr_Experiment value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addExperiment");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: cannot find method 'addExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: method 'addExperiment' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.nmr.Nmr.InternalShiftReference
  @param  Nmr_InternalShiftReference self
  @param  ApiBoolean complete
**/
void *Nmr_InternalShiftReference_CheckAllValid(Nmr_InternalShiftReference self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.nmr.Nmr.InternalShiftReference
  @param  Nmr_InternalShiftReference self
  @param  ApiBoolean complete
**/
void *Nmr_InternalShiftReference_CheckValid(Nmr_InternalShiftReference self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: method 'checkValid' is not callable");
  
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
  @param  Nmr_InternalShiftReference self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_InternalShiftReference_FindAllApplicationData(Nmr_InternalShiftReference self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: method 'findAllApplicationData' is not callable");
  
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
  @param  Nmr_InternalShiftReference self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_InternalShiftReference_FindAllApplicationData_keyval0(Nmr_InternalShiftReference self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_InternalShiftReference_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_InternalShiftReference self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_InternalShiftReference_FindAllApplicationData_keyval1(Nmr_InternalShiftReference self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_InternalShiftReference_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_InternalShiftReference self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_InternalShiftReference_FindAllApplicationData_keyval2(Nmr_InternalShiftReference self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_InternalShiftReference_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_InternalShiftReference self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_InternalShiftReference_FindAllApplicationData_keyval3(Nmr_InternalShiftReference self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_InternalShiftReference_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_InternalShiftReference self
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
ApiList Nmr_InternalShiftReference_FindAllApplicationData_keyval4(Nmr_InternalShiftReference self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_InternalShiftReference_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ShiftReference.experiments

Experiments that use 
ShiftReference
  @param  Nmr_InternalShiftReference self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_InternalShiftReference_FindAllExperiments(Nmr_InternalShiftReference self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllExperiments");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: cannot find method 'findAllExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: method 'findAllExperiments' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ShiftReference.experiments

Experiments that use 
ShiftReference
  @param  Nmr_InternalShiftReference self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_InternalShiftReference_FindAllExperiments_keyval0(Nmr_InternalShiftReference self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_InternalShiftReference_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ShiftReference.experiments

Experiments that use 
ShiftReference
  @param  Nmr_InternalShiftReference self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_InternalShiftReference_FindAllExperiments_keyval1(Nmr_InternalShiftReference self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_InternalShiftReference_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ShiftReference.experiments

Experiments that use 
ShiftReference
  @param  Nmr_InternalShiftReference self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_InternalShiftReference_FindAllExperiments_keyval2(Nmr_InternalShiftReference self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_InternalShiftReference_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ShiftReference.experiments

Experiments that use 
ShiftReference
  @param  Nmr_InternalShiftReference self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_InternalShiftReference_FindAllExperiments_keyval3(Nmr_InternalShiftReference self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_InternalShiftReference_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ShiftReference.experiments

Experiments that use 
ShiftReference
  @param  Nmr_InternalShiftReference self
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
ApiSet Nmr_InternalShiftReference_FindAllExperiments_keyval4(Nmr_InternalShiftReference self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_InternalShiftReference_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_InternalShiftReference self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_InternalShiftReference_FindFirstApplicationData(Nmr_InternalShiftReference self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nmr_InternalShiftReference self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_InternalShiftReference_FindFirstApplicationData_keyval0(Nmr_InternalShiftReference self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_InternalShiftReference_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_InternalShiftReference self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_InternalShiftReference_FindFirstApplicationData_keyval1(Nmr_InternalShiftReference self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_InternalShiftReference_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_InternalShiftReference self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_InternalShiftReference_FindFirstApplicationData_keyval2(Nmr_InternalShiftReference self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_InternalShiftReference_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_InternalShiftReference self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_InternalShiftReference_FindFirstApplicationData_keyval3(Nmr_InternalShiftReference self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_InternalShiftReference_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_InternalShiftReference self
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
Impl_ApplicationData Nmr_InternalShiftReference_FindFirstApplicationData_keyval4(Nmr_InternalShiftReference self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_InternalShiftReference_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ShiftReference.experiments

Experiments that 
use ShiftReference
  @param  Nmr_InternalShiftReference self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Nmr_InternalShiftReference_FindFirstExperiment(Nmr_InternalShiftReference self, ApiMap conditions)
{
  
  Nmr_Experiment obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstExperiment");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: cannot find method 'findFirstExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: method 'findFirstExperiment' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ShiftReference.experiments

Experiments that 
use ShiftReference
  @param  Nmr_InternalShiftReference self
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Nmr_InternalShiftReference_FindFirstExperiment_keyval0(Nmr_InternalShiftReference self)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_InternalShiftReference_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ShiftReference.experiments

Experiments that 
use ShiftReference
  @param  Nmr_InternalShiftReference self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Nmr_InternalShiftReference_FindFirstExperiment_keyval1(Nmr_InternalShiftReference self, char * key, ApiObject value)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_InternalShiftReference_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ShiftReference.experiments

Experiments that 
use ShiftReference
  @param  Nmr_InternalShiftReference self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Nmr_InternalShiftReference_FindFirstExperiment_keyval2(Nmr_InternalShiftReference self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_InternalShiftReference_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ShiftReference.experiments

Experiments that 
use ShiftReference
  @param  Nmr_InternalShiftReference self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Nmr_InternalShiftReference_FindFirstExperiment_keyval3(Nmr_InternalShiftReference self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_InternalShiftReference_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ShiftReference.experiments

Experiments that 
use ShiftReference
  @param  Nmr_InternalShiftReference self
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
Nmr_Experiment Nmr_InternalShiftReference_FindFirstExperiment_keyval4(Nmr_InternalShiftReference self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_InternalShiftReference_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.nmr.Nmr.InternalShiftReference
  @param  Nmr_InternalShiftReference self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Nmr_InternalShiftReference_Get(Nmr_InternalShiftReference self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_InternalShiftReference self
  @returns   the result
**/
Acco_AccessObject Nmr_InternalShiftReference_GetAccess(Nmr_InternalShiftReference self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: method 'getAccess' is not callable");
  
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
  @param  Nmr_InternalShiftReference self
  @returns   the result
**/
ApiList Nmr_InternalShiftReference_GetApplicationData(Nmr_InternalShiftReference self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ShiftReference.atomGroup

String describing the atom 
group from the molecule used for referencing.
  @param  Nmr_InternalShiftReference self
  @returns   the result
**/
ApiString Nmr_InternalShiftReference_GetAtomGroup(Nmr_InternalShiftReference self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAtomGroup");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: cannot find method 'getAtomGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: method 'getAtomGroup' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.Nmr.InternalShiftReference
  @param  Nmr_InternalShiftReference self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nmr_InternalShiftReference Nmr_InternalShiftReference_GetByKey(Nmr_InternalShiftReference self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Nmr_InternalShiftReference obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: method 'getByKey' is not callable");
  
  args = PyTuple_Pack(2, startObj, fullKey);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ShiftReference.citation

Citation describing shift 
reference.
  @param  Nmr_InternalShiftReference self
  @returns   the result
**/
Cita_Citation Nmr_InternalShiftReference_GetCitation(Nmr_InternalShiftReference self)
{
  
  Cita_Citation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCitation");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: cannot find method 'getCitation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: method 'getCitation' is not callable");
  
  args = PyTuple_New(0);
  
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
  @param  Nmr_InternalShiftReference self
  @returns   the result
**/
ApiString Nmr_InternalShiftReference_GetClassName(Nmr_InternalShiftReference self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ShiftReference.experiments

Experiments that use 
ShiftReference
  @param  Nmr_InternalShiftReference self
  @returns   the result
**/
ApiSet Nmr_InternalShiftReference_GetExperiments(Nmr_InternalShiftReference self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExperiments");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: cannot find method 'getExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: method 'getExperiments' is not callable");
  
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
  @param  Nmr_InternalShiftReference self
  @returns   the result
**/
ApiList Nmr_InternalShiftReference_GetFieldNames(Nmr_InternalShiftReference self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: method 'getFieldNames' is not callable");
  
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
  @param  Nmr_InternalShiftReference self
  @returns   the result
**/
ApiBoolean Nmr_InternalShiftReference_GetInConstructor(Nmr_InternalShiftReference self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: method 'getInConstructor' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ShiftReference.indirectShiftRatio

Ratio between 
nucleus resonance frequency and proton resonance frequency used for 
indirect shift referencing.
  @param  Nmr_InternalShiftReference self
  @returns   the result
**/
ApiDouble Nmr_InternalShiftReference_GetIndirectShiftRatio(Nmr_InternalShiftReference self)
{
  
  ApiDouble obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIndirectShiftRatio");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: cannot find method 'getIndirectShiftRatio'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: method 'getIndirectShiftRatio' is not callable");
  
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
  @param  Nmr_InternalShiftReference self
  @returns   the result
**/
ApiBoolean Nmr_InternalShiftReference_GetIsDeleted(Nmr_InternalShiftReference self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ShiftReference.isotope

Isotope being referenced
  @param  Nmr_InternalShiftReference self
  @returns   the result
**/
Chel_Isotope Nmr_InternalShiftReference_GetIsotope(Nmr_InternalShiftReference self)
{
  
  Chel_Isotope obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsotope");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: cannot find method 'getIsotope'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: method 'getIsotope' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ShiftReference.isotopeCode

Isotope code, e.g. '1H', 
'3He','13C','235U' etc.
  @param  Nmr_InternalShiftReference self
  @returns   the result
**/
ApiString Nmr_InternalShiftReference_GetIsotopeCode(Nmr_InternalShiftReference self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsotopeCode");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: cannot find method 'getIsotopeCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: method 'getIsotopeCode' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ShiftReference.molName

Reference compound. To be 
made into enumeration.
  @param  Nmr_InternalShiftReference self
  @returns   the result
**/
ApiString Nmr_InternalShiftReference_GetMolName(Nmr_InternalShiftReference self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: cannot find method 'getMolName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: method 'getMolName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ShiftReference.nmrProject

parent link
  @param  Nmr_InternalShiftReference self
  @returns   the result
**/
Nmr_NmrProject Nmr_InternalShiftReference_GetNmrProject(Nmr_InternalShiftReference self)
{
  
  Nmr_NmrProject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrProject");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: cannot find method 'getNmrProject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: method 'getNmrProject' is not callable");
  
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
  @param  Nmr_InternalShiftReference self
  @returns   the result
**/
ApiString Nmr_InternalShiftReference_GetPackageName(Nmr_InternalShiftReference self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: method 'getPackageName' is not callable");
  
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
  @param  Nmr_InternalShiftReference self
  @returns   the result
**/
ApiString Nmr_InternalShiftReference_GetPackageShortName(Nmr_InternalShiftReference self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ShiftReference.parent

link to parent object - 
synonym for nmrProject
  @param  Nmr_InternalShiftReference self
  @returns   the result
**/
Nmr_NmrProject Nmr_InternalShiftReference_GetParent(Nmr_InternalShiftReference self)
{
  
  Nmr_NmrProject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: method 'getParent' is not callable");
  
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
  @param  Nmr_InternalShiftReference self
  @returns   the result
**/
ApiString Nmr_InternalShiftReference_GetQualifiedName(Nmr_InternalShiftReference self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ShiftReference.referenceType

Is reference direct or 
indiredct?
  @param  Nmr_InternalShiftReference self
  @returns   the result
**/
ApiString Nmr_InternalShiftReference_GetReferenceType(Nmr_InternalShiftReference self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getReferenceType");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: cannot find method 'getReferenceType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: method 'getReferenceType' is not callable");
  
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
  @param  Nmr_InternalShiftReference self
  @returns   the result
**/
Impl_MemopsRoot Nmr_InternalShiftReference_GetRoot(Nmr_InternalShiftReference self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ShiftReference.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Nmr_InternalShiftReference self
  @returns   the result
**/
ApiInteger Nmr_InternalShiftReference_GetSerial(Nmr_InternalShiftReference self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: method 'getSerial' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ShiftReference.shiftRatioCitation

Citation for 
shift ratio used for indirect referencing
  @param  Nmr_InternalShiftReference self
  @returns   the result
**/
Cita_Citation Nmr_InternalShiftReference_GetShiftRatioCitation(Nmr_InternalShiftReference self)
{
  
  Cita_Citation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getShiftRatioCitation");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: cannot find method 'getShiftRatioCitation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: method 'getShiftRatioCitation' is not callable");
  
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
  @param  Nmr_InternalShiftReference self
  @returns   the result
**/
Impl_TopObject Nmr_InternalShiftReference_GetTopObject(Nmr_InternalShiftReference self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ShiftReference.unit

Unit of shift reference.
  @param  Nmr_InternalShiftReference self
  @returns   the result
**/
ApiString Nmr_InternalShiftReference_GetUnit(Nmr_InternalShiftReference self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getUnit");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: cannot find method 'getUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: method 'getUnit' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ShiftReference.value

Value (frequency) of 
reference.
  @param  Nmr_InternalShiftReference self
  @returns   the result
**/
ApiFloat Nmr_InternalShiftReference_GetValue(Nmr_InternalShiftReference self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getValue");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: cannot find method 'getValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: method 'getValue' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.nmr.Nmr.InternalShiftReference
  @param  Nmr_NmrProject parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_InternalShiftReference Nmr_InternalShiftReference_Init(Nmr_NmrProject parent, ApiMap attrlinks)
{
  
  return Nmr_NmrProject_NewInternalShiftReference(parent, attrlinks);
}

/**
  Constructor for ccp.nmr.Nmr.InternalShiftReference
  @param  Nmr_NmrProject parent
  @param  char * atomGroup
  @param  char * isotopeCode
  @param  char * molName
  @param  char * referenceType
  @param  float value
  @returns  the new object
**/
Nmr_InternalShiftReference Nmr_InternalShiftReference_Init_reqd(Nmr_NmrProject parent, char * atomGroup, char * isotopeCode, char * molName, char * referenceType, float value)
{
  
  Nmr_InternalShiftReference  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__atomGroup = ApiString_New(atomGroup);
  ApiString api__isotopeCode = ApiString_New(isotopeCode);
  ApiString api__molName = ApiString_New(molName);
  ApiString api__referenceType = ApiString_New(referenceType);
  ApiFloat api__value = ApiFloat_New(value);

  PyDict_SetItemString(attrlinks, "atomGroup", api__atomGroup);
  PyDict_SetItemString(attrlinks, "isotopeCode", api__isotopeCode);
  PyDict_SetItemString(attrlinks, "molName", api__molName);
  PyDict_SetItemString(attrlinks, "referenceType", api__referenceType);
  PyDict_SetItemString(attrlinks, "value", api__value);
  
  obj = Nmr_InternalShiftReference_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__atomGroup);
  Py_DECREF(api__isotopeCode);
  Py_DECREF(api__molName);
  Py_DECREF(api__referenceType);
  Py_DECREF(api__value);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_InternalShiftReference self
  @param  Impl_ApplicationData value
**/
void *Nmr_InternalShiftReference_RemoveApplicationData(Nmr_InternalShiftReference self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.Nmr.ShiftReference.experiments

Experiments that use 
ShiftReference
  @param  Nmr_InternalShiftReference self
  @param  Nmr_Experiment value
**/
void *Nmr_InternalShiftReference_RemoveExperiment(Nmr_InternalShiftReference self, Nmr_Experiment value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeExperiment");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: cannot find method 'removeExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: method 'removeExperiment' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.nmr.Nmr.InternalShiftReference
  @param  Nmr_InternalShiftReference self
  @param  ApiString name
  @param  ApiObject value
**/
void *Nmr_InternalShiftReference_Set(Nmr_InternalShiftReference self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_InternalShiftReference self
  @param  Acco_AccessObject value
**/
void *Nmr_InternalShiftReference_SetAccess(Nmr_InternalShiftReference self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: method 'setAccess' is not callable");
  
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
  @param  Nmr_InternalShiftReference self
  @param  ApiList values
**/
void *Nmr_InternalShiftReference_SetApplicationData(Nmr_InternalShiftReference self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ShiftReference.atomGroup

String describing the atom 
group from the molecule used for referencing.
  @param  Nmr_InternalShiftReference self
  @param  ApiString value
**/
void *Nmr_InternalShiftReference_SetAtomGroup(Nmr_InternalShiftReference self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAtomGroup");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: cannot find method 'setAtomGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: method 'setAtomGroup' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ShiftReference.citation

Citation describing shift 
reference.
  @param  Nmr_InternalShiftReference self
  @param  Cita_Citation value
**/
void *Nmr_InternalShiftReference_SetCitation(Nmr_InternalShiftReference self, Cita_Citation value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCitation");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: cannot find method 'setCitation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: method 'setCitation' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ShiftReference.experiments

Experiments that use 
ShiftReference
  @param  Nmr_InternalShiftReference self
  @param  ApiSet values
**/
void *Nmr_InternalShiftReference_SetExperiments(Nmr_InternalShiftReference self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setExperiments");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: cannot find method 'setExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: method 'setExperiments' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ShiftReference.indirectShiftRatio

Ratio between 
nucleus resonance frequency and proton resonance frequency used for 
indirect shift referencing.
  @param  Nmr_InternalShiftReference self
  @param  ApiDouble value
**/
void *Nmr_InternalShiftReference_SetIndirectShiftRatio(Nmr_InternalShiftReference self, ApiDouble value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIndirectShiftRatio");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: cannot find method 'setIndirectShiftRatio'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: method 'setIndirectShiftRatio' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ShiftReference.isotopeCode

Isotope code, e.g. '1H', 
'3He','13C','235U' etc.
  @param  Nmr_InternalShiftReference self
  @param  ApiString value
**/
void *Nmr_InternalShiftReference_SetIsotopeCode(Nmr_InternalShiftReference self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsotopeCode");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: cannot find method 'setIsotopeCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: method 'setIsotopeCode' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ShiftReference.molName

Reference compound. To be 
made into enumeration.
  @param  Nmr_InternalShiftReference self
  @param  ApiString value
**/
void *Nmr_InternalShiftReference_SetMolName(Nmr_InternalShiftReference self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMolName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: cannot find method 'setMolName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: method 'setMolName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ShiftReference.referenceType

Is reference direct or 
indiredct?
  @param  Nmr_InternalShiftReference self
  @param  ApiString value
**/
void *Nmr_InternalShiftReference_SetReferenceType(Nmr_InternalShiftReference self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setReferenceType");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: cannot find method 'setReferenceType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: method 'setReferenceType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ShiftReference.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Nmr_InternalShiftReference self
  @param  ApiInteger value
**/
void *Nmr_InternalShiftReference_SetSerial(Nmr_InternalShiftReference self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ShiftReference.shiftRatioCitation

Citation for 
shift ratio used for indirect referencing
  @param  Nmr_InternalShiftReference self
  @param  Cita_Citation value
**/
void *Nmr_InternalShiftReference_SetShiftRatioCitation(Nmr_InternalShiftReference self, Cita_Citation value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setShiftRatioCitation");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: cannot find method 'setShiftRatioCitation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: method 'setShiftRatioCitation' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ShiftReference.unit

Unit of shift reference.
  @param  Nmr_InternalShiftReference self
  @param  ApiString value
**/
void *Nmr_InternalShiftReference_SetUnit(Nmr_InternalShiftReference self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setUnit");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: cannot find method 'setUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: method 'setUnit' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ShiftReference.value

Value (frequency) of 
reference.
  @param  Nmr_InternalShiftReference self
  @param  ApiFloat value
**/
void *Nmr_InternalShiftReference_SetValue(Nmr_InternalShiftReference self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setValue");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: cannot find method 'setValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: method 'setValue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.ShiftReference.experiments

Experiments that use 
ShiftReference
  @param  Nmr_InternalShiftReference self
  @returns   the result
**/
ApiList Nmr_InternalShiftReference_SortedExperiments(Nmr_InternalShiftReference self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedExperiments");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: cannot find method 'sortedExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.InternalShiftReference: method 'sortedExperiments' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
