
#include "ccp.h"

/*
  Chemical Shift referencing. The reference actually used (not the one quoted against). Reference is external to the sample (e.g. in a coaxial capillary).
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExternalShiftReference self
  @param  Impl_ApplicationData value
**/
void *Nmr_ExternalShiftReference_AddApplicationData(Nmr_ExternalShiftReference self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: method 'addApplicationData' is not callable");
  
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
  @param  Nmr_ExternalShiftReference self
  @param  Nmr_Experiment value
**/
void *Nmr_ExternalShiftReference_AddExperiment(Nmr_ExternalShiftReference self, Nmr_Experiment value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addExperiment");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: cannot find method 'addExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: method 'addExperiment' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.nmr.Nmr.ExternalShiftReference
  @param  Nmr_ExternalShiftReference self
  @param  ApiBoolean complete
**/
void *Nmr_ExternalShiftReference_CheckAllValid(Nmr_ExternalShiftReference self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.nmr.Nmr.ExternalShiftReference
  @param  Nmr_ExternalShiftReference self
  @param  ApiBoolean complete
**/
void *Nmr_ExternalShiftReference_CheckValid(Nmr_ExternalShiftReference self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: method 'checkValid' is not callable");
  
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
  @param  Nmr_ExternalShiftReference self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_ExternalShiftReference_FindAllApplicationData(Nmr_ExternalShiftReference self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: method 'findAllApplicationData' is not callable");
  
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
  @param  Nmr_ExternalShiftReference self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_ExternalShiftReference_FindAllApplicationData_keyval0(Nmr_ExternalShiftReference self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ExternalShiftReference_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExternalShiftReference self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_ExternalShiftReference_FindAllApplicationData_keyval1(Nmr_ExternalShiftReference self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ExternalShiftReference_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExternalShiftReference self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_ExternalShiftReference_FindAllApplicationData_keyval2(Nmr_ExternalShiftReference self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ExternalShiftReference_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExternalShiftReference self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_ExternalShiftReference_FindAllApplicationData_keyval3(Nmr_ExternalShiftReference self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ExternalShiftReference_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExternalShiftReference self
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
ApiList Nmr_ExternalShiftReference_FindAllApplicationData_keyval4(Nmr_ExternalShiftReference self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ExternalShiftReference_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ShiftReference.experiments

Experiments that use 
ShiftReference
  @param  Nmr_ExternalShiftReference self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ExternalShiftReference_FindAllExperiments(Nmr_ExternalShiftReference self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllExperiments");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: cannot find method 'findAllExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: method 'findAllExperiments' is not callable");
  
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
  @param  Nmr_ExternalShiftReference self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ExternalShiftReference_FindAllExperiments_keyval0(Nmr_ExternalShiftReference self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ExternalShiftReference_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ShiftReference.experiments

Experiments that use 
ShiftReference
  @param  Nmr_ExternalShiftReference self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ExternalShiftReference_FindAllExperiments_keyval1(Nmr_ExternalShiftReference self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ExternalShiftReference_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ShiftReference.experiments

Experiments that use 
ShiftReference
  @param  Nmr_ExternalShiftReference self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ExternalShiftReference_FindAllExperiments_keyval2(Nmr_ExternalShiftReference self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ExternalShiftReference_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ShiftReference.experiments

Experiments that use 
ShiftReference
  @param  Nmr_ExternalShiftReference self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ExternalShiftReference_FindAllExperiments_keyval3(Nmr_ExternalShiftReference self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ExternalShiftReference_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ShiftReference.experiments

Experiments that use 
ShiftReference
  @param  Nmr_ExternalShiftReference self
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
ApiSet Nmr_ExternalShiftReference_FindAllExperiments_keyval4(Nmr_ExternalShiftReference self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ExternalShiftReference_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExternalShiftReference self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_ExternalShiftReference_FindFirstApplicationData(Nmr_ExternalShiftReference self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nmr_ExternalShiftReference self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_ExternalShiftReference_FindFirstApplicationData_keyval0(Nmr_ExternalShiftReference self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ExternalShiftReference_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExternalShiftReference self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_ExternalShiftReference_FindFirstApplicationData_keyval1(Nmr_ExternalShiftReference self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ExternalShiftReference_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExternalShiftReference self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_ExternalShiftReference_FindFirstApplicationData_keyval2(Nmr_ExternalShiftReference self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ExternalShiftReference_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExternalShiftReference self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_ExternalShiftReference_FindFirstApplicationData_keyval3(Nmr_ExternalShiftReference self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ExternalShiftReference_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExternalShiftReference self
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
Impl_ApplicationData Nmr_ExternalShiftReference_FindFirstApplicationData_keyval4(Nmr_ExternalShiftReference self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ExternalShiftReference_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ShiftReference.experiments

Experiments that 
use ShiftReference
  @param  Nmr_ExternalShiftReference self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Nmr_ExternalShiftReference_FindFirstExperiment(Nmr_ExternalShiftReference self, ApiMap conditions)
{
  
  Nmr_Experiment obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstExperiment");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: cannot find method 'findFirstExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: method 'findFirstExperiment' is not callable");
  
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
  @param  Nmr_ExternalShiftReference self
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Nmr_ExternalShiftReference_FindFirstExperiment_keyval0(Nmr_ExternalShiftReference self)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ExternalShiftReference_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ShiftReference.experiments

Experiments that 
use ShiftReference
  @param  Nmr_ExternalShiftReference self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Nmr_ExternalShiftReference_FindFirstExperiment_keyval1(Nmr_ExternalShiftReference self, char * key, ApiObject value)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ExternalShiftReference_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ShiftReference.experiments

Experiments that 
use ShiftReference
  @param  Nmr_ExternalShiftReference self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Nmr_ExternalShiftReference_FindFirstExperiment_keyval2(Nmr_ExternalShiftReference self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ExternalShiftReference_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ShiftReference.experiments

Experiments that 
use ShiftReference
  @param  Nmr_ExternalShiftReference self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Nmr_ExternalShiftReference_FindFirstExperiment_keyval3(Nmr_ExternalShiftReference self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ExternalShiftReference_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ShiftReference.experiments

Experiments that 
use ShiftReference
  @param  Nmr_ExternalShiftReference self
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
Nmr_Experiment Nmr_ExternalShiftReference_FindFirstExperiment_keyval4(Nmr_ExternalShiftReference self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ExternalShiftReference_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.nmr.Nmr.ExternalShiftReference
  @param  Nmr_ExternalShiftReference self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Nmr_ExternalShiftReference_Get(Nmr_ExternalShiftReference self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_ExternalShiftReference self
  @returns   the result
**/
Acco_AccessObject Nmr_ExternalShiftReference_GetAccess(Nmr_ExternalShiftReference self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: method 'getAccess' is not callable");
  
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
  @param  Nmr_ExternalShiftReference self
  @returns   the result
**/
Acco_AccessObject Nmr_ExternalShiftReference_GetActiveAccess(Nmr_ExternalShiftReference self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: method 'getActiveAccess' is not callable");
  
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
  @param  Nmr_ExternalShiftReference self
  @returns   the result
**/
ApiList Nmr_ExternalShiftReference_GetApplicationData(Nmr_ExternalShiftReference self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: method 'getApplicationData' is not callable");
  
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
  @param  Nmr_ExternalShiftReference self
  @returns   the result
**/
ApiString Nmr_ExternalShiftReference_GetAtomGroup(Nmr_ExternalShiftReference self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAtomGroup");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: cannot find method 'getAtomGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: method 'getAtomGroup' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ExternalShiftReference.axis

Orientation of external 
refrence container with respect to B0 axis (e.g. 'parallel', 
'perpendicular').
  @param  Nmr_ExternalShiftReference self
  @returns   the result
**/
ApiString Nmr_ExternalShiftReference_GetAxis(Nmr_ExternalShiftReference self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAxis");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: cannot find method 'getAxis'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: method 'getAxis' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.Nmr.ExternalShiftReference
  @param  Nmr_ExternalShiftReference self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nmr_ExternalShiftReference Nmr_ExternalShiftReference_GetByKey(Nmr_ExternalShiftReference self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Nmr_ExternalShiftReference obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: method 'getByKey' is not callable");
  
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
  @param  Nmr_ExternalShiftReference self
  @returns   the result
**/
Cita_Citation Nmr_ExternalShiftReference_GetCitation(Nmr_ExternalShiftReference self)
{
  
  Cita_Citation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCitation");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: cannot find method 'getCitation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: method 'getCitation' is not callable");
  
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
  @param  Nmr_ExternalShiftReference self
  @returns   the result
**/
ApiString Nmr_ExternalShiftReference_GetClassName(Nmr_ExternalShiftReference self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: method 'getClassName' is not callable");
  
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
  @param  Nmr_ExternalShiftReference self
  @returns   the result
**/
ApiSet Nmr_ExternalShiftReference_GetExperiments(Nmr_ExternalShiftReference self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExperiments");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: cannot find method 'getExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: method 'getExperiments' is not callable");
  
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
  @param  Nmr_ExternalShiftReference self
  @returns   the result
**/
ApiList Nmr_ExternalShiftReference_GetFieldNames(Nmr_ExternalShiftReference self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: method 'getFieldNames' is not callable");
  
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
  @param  Nmr_ExternalShiftReference self
  @returns   the result
**/
ApiBoolean Nmr_ExternalShiftReference_GetInConstructor(Nmr_ExternalShiftReference self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: method 'getInConstructor' is not callable");
  
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
  @param  Nmr_ExternalShiftReference self
  @returns   the result
**/
ApiDouble Nmr_ExternalShiftReference_GetIndirectShiftRatio(Nmr_ExternalShiftReference self)
{
  
  ApiDouble obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIndirectShiftRatio");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: cannot find method 'getIndirectShiftRatio'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: method 'getIndirectShiftRatio' is not callable");
  
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
  @param  Nmr_ExternalShiftReference self
  @returns   the result
**/
ApiBoolean Nmr_ExternalShiftReference_GetIsDeleted(Nmr_ExternalShiftReference self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ShiftReference.isotope

Isotope being referenced
  @param  Nmr_ExternalShiftReference self
  @returns   the result
**/
Chel_Isotope Nmr_ExternalShiftReference_GetIsotope(Nmr_ExternalShiftReference self)
{
  
  Chel_Isotope obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsotope");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: cannot find method 'getIsotope'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: method 'getIsotope' is not callable");
  
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
  @param  Nmr_ExternalShiftReference self
  @returns   the result
**/
ApiString Nmr_ExternalShiftReference_GetIsotopeCode(Nmr_ExternalShiftReference self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsotopeCode");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: cannot find method 'getIsotopeCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: method 'getIsotopeCode' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ExternalShiftReference.location

External reference 
container location ( e.g. 'in the sample', 'external to the sample')
  @param  Nmr_ExternalShiftReference self
  @returns   the result
**/
ApiString Nmr_ExternalShiftReference_GetLocation(Nmr_ExternalShiftReference self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocation");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: cannot find method 'getLocation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: method 'getLocation' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ShiftReference.molName

Reference compound.
  @param  Nmr_ExternalShiftReference self
  @returns   the result
**/
ApiString Nmr_ExternalShiftReference_GetMolName(Nmr_ExternalShiftReference self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: cannot find method 'getMolName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: method 'getMolName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ShiftReference.nmrProject

parent link
  @param  Nmr_ExternalShiftReference self
  @returns   the result
**/
Nmr_NmrProject Nmr_ExternalShiftReference_GetNmrProject(Nmr_ExternalShiftReference self)
{
  
  Nmr_NmrProject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrProject");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: cannot find method 'getNmrProject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: method 'getNmrProject' is not callable");
  
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
  @param  Nmr_ExternalShiftReference self
  @returns   the result
**/
ApiString Nmr_ExternalShiftReference_GetPackageName(Nmr_ExternalShiftReference self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: method 'getPackageName' is not callable");
  
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
  @param  Nmr_ExternalShiftReference self
  @returns   the result
**/
ApiString Nmr_ExternalShiftReference_GetPackageShortName(Nmr_ExternalShiftReference self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: method 'getPackageShortName' is not callable");
  
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
  @param  Nmr_ExternalShiftReference self
  @returns   the result
**/
Nmr_NmrProject Nmr_ExternalShiftReference_GetParent(Nmr_ExternalShiftReference self)
{
  
  Nmr_NmrProject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: method 'getParent' is not callable");
  
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
  @param  Nmr_ExternalShiftReference self
  @returns   the result
**/
ApiString Nmr_ExternalShiftReference_GetQualifiedName(Nmr_ExternalShiftReference self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ShiftReference.referenceType

Is reference direct or 
indirect?
  @param  Nmr_ExternalShiftReference self
  @returns   the result
**/
ApiString Nmr_ExternalShiftReference_GetReferenceType(Nmr_ExternalShiftReference self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getReferenceType");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: cannot find method 'getReferenceType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: method 'getReferenceType' is not callable");
  
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
  @param  Nmr_ExternalShiftReference self
  @returns   the result
**/
Impl_MemopsRoot Nmr_ExternalShiftReference_GetRoot(Nmr_ExternalShiftReference self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ExternalShiftReference.sampleGeometry

Geometry of 
external reference container (e.g. 'cylindrical', 'spherical')
  @param  Nmr_ExternalShiftReference self
  @returns   the result
**/
ApiString Nmr_ExternalShiftReference_GetSampleGeometry(Nmr_ExternalShiftReference self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSampleGeometry");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: cannot find method 'getSampleGeometry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: method 'getSampleGeometry' is not callable");
  
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
  @param  Nmr_ExternalShiftReference self
  @returns   the result
**/
ApiInteger Nmr_ExternalShiftReference_GetSerial(Nmr_ExternalShiftReference self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: method 'getSerial' is not callable");
  
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
  @param  Nmr_ExternalShiftReference self
  @returns   the result
**/
Cita_Citation Nmr_ExternalShiftReference_GetShiftRatioCitation(Nmr_ExternalShiftReference self)
{
  
  Cita_Citation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getShiftRatioCitation");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: cannot find method 'getShiftRatioCitation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: method 'getShiftRatioCitation' is not callable");
  
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
  @param  Nmr_ExternalShiftReference self
  @returns   the result
**/
Impl_TopObject Nmr_ExternalShiftReference_GetTopObject(Nmr_ExternalShiftReference self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ShiftReference.unit

Unit of shift reference.
  @param  Nmr_ExternalShiftReference self
  @returns   the result
**/
ApiString Nmr_ExternalShiftReference_GetUnit(Nmr_ExternalShiftReference self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getUnit");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: cannot find method 'getUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: method 'getUnit' is not callable");
  
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
  @param  Nmr_ExternalShiftReference self
  @returns   the result
**/
ApiFloat Nmr_ExternalShiftReference_GetValue(Nmr_ExternalShiftReference self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getValue");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: cannot find method 'getValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: method 'getValue' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.nmr.Nmr.ExternalShiftReference
  @param  Nmr_NmrProject parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_ExternalShiftReference Nmr_ExternalShiftReference_Init(Nmr_NmrProject parent, ApiMap attrlinks)
{
  
  return Nmr_NmrProject_NewExternalShiftReference(parent, attrlinks);
}

/**
  Constructor for ccp.nmr.Nmr.ExternalShiftReference
  @param  Nmr_NmrProject parent
  @param  char * atomGroup
  @param  char * isotopeCode
  @param  char * molName
  @param  char * referenceType
  @param  float value
  @returns  the new object
**/
Nmr_ExternalShiftReference Nmr_ExternalShiftReference_Init_reqd(Nmr_NmrProject parent, char * atomGroup, char * isotopeCode, char * molName, char * referenceType, float value)
{
  
  Nmr_ExternalShiftReference  obj;
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
  
  obj = Nmr_ExternalShiftReference_Init(parent, attrlinks);
  
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
  @param  Nmr_ExternalShiftReference self
  @param  Impl_ApplicationData value
**/
void *Nmr_ExternalShiftReference_RemoveApplicationData(Nmr_ExternalShiftReference self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: method 'removeApplicationData' is not callable");
  
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
  @param  Nmr_ExternalShiftReference self
  @param  Nmr_Experiment value
**/
void *Nmr_ExternalShiftReference_RemoveExperiment(Nmr_ExternalShiftReference self, Nmr_Experiment value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeExperiment");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: cannot find method 'removeExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: method 'removeExperiment' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.nmr.Nmr.ExternalShiftReference
  @param  Nmr_ExternalShiftReference self
  @param  ApiString name
  @param  ApiObject value
**/
void *Nmr_ExternalShiftReference_Set(Nmr_ExternalShiftReference self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_ExternalShiftReference self
  @param  Acco_AccessObject value
**/
void *Nmr_ExternalShiftReference_SetAccess(Nmr_ExternalShiftReference self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: method 'setAccess' is not callable");
  
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
  @param  Nmr_ExternalShiftReference self
  @param  ApiList values
**/
void *Nmr_ExternalShiftReference_SetApplicationData(Nmr_ExternalShiftReference self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: method 'setApplicationData' is not callable");
  
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
  @param  Nmr_ExternalShiftReference self
  @param  ApiString value
**/
void *Nmr_ExternalShiftReference_SetAtomGroup(Nmr_ExternalShiftReference self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAtomGroup");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: cannot find method 'setAtomGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: method 'setAtomGroup' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ExternalShiftReference.axis

Orientation of external 
refrence container with respect to B0 axis (e.g. 'parallel', 
'perpendicular').
  @param  Nmr_ExternalShiftReference self
  @param  ApiString value
**/
void *Nmr_ExternalShiftReference_SetAxis(Nmr_ExternalShiftReference self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAxis");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: cannot find method 'setAxis'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: method 'setAxis' is not callable");
  
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
  @param  Nmr_ExternalShiftReference self
  @param  Cita_Citation value
**/
void *Nmr_ExternalShiftReference_SetCitation(Nmr_ExternalShiftReference self, Cita_Citation value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCitation");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: cannot find method 'setCitation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: method 'setCitation' is not callable");
  
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
  @param  Nmr_ExternalShiftReference self
  @param  ApiSet values
**/
void *Nmr_ExternalShiftReference_SetExperiments(Nmr_ExternalShiftReference self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setExperiments");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: cannot find method 'setExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: method 'setExperiments' is not callable");
  
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
  @param  Nmr_ExternalShiftReference self
  @param  ApiDouble value
**/
void *Nmr_ExternalShiftReference_SetIndirectShiftRatio(Nmr_ExternalShiftReference self, ApiDouble value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIndirectShiftRatio");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: cannot find method 'setIndirectShiftRatio'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: method 'setIndirectShiftRatio' is not callable");
  
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
  @param  Nmr_ExternalShiftReference self
  @param  ApiString value
**/
void *Nmr_ExternalShiftReference_SetIsotopeCode(Nmr_ExternalShiftReference self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsotopeCode");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: cannot find method 'setIsotopeCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: method 'setIsotopeCode' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ExternalShiftReference.location

External reference 
container location ( e.g. 'in the sample', 'external to the sample')
  @param  Nmr_ExternalShiftReference self
  @param  ApiString value
**/
void *Nmr_ExternalShiftReference_SetLocation(Nmr_ExternalShiftReference self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLocation");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: cannot find method 'setLocation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: method 'setLocation' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ShiftReference.molName

Reference compound.
  @param  Nmr_ExternalShiftReference self
  @param  ApiString value
**/
void *Nmr_ExternalShiftReference_SetMolName(Nmr_ExternalShiftReference self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMolName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: cannot find method 'setMolName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: method 'setMolName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ShiftReference.referenceType

Is reference direct or 
indirect?
  @param  Nmr_ExternalShiftReference self
  @param  ApiString value
**/
void *Nmr_ExternalShiftReference_SetReferenceType(Nmr_ExternalShiftReference self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setReferenceType");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: cannot find method 'setReferenceType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: method 'setReferenceType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ExternalShiftReference.sampleGeometry

Geometry of 
external reference container (e.g. 'cylindrical', 'spherical')
  @param  Nmr_ExternalShiftReference self
  @param  ApiString value
**/
void *Nmr_ExternalShiftReference_SetSampleGeometry(Nmr_ExternalShiftReference self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSampleGeometry");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: cannot find method 'setSampleGeometry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: method 'setSampleGeometry' is not callable");
  
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
  @param  Nmr_ExternalShiftReference self
  @param  ApiInteger value
**/
void *Nmr_ExternalShiftReference_SetSerial(Nmr_ExternalShiftReference self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: method 'setSerial' is not callable");
  
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
  @param  Nmr_ExternalShiftReference self
  @param  Cita_Citation value
**/
void *Nmr_ExternalShiftReference_SetShiftRatioCitation(Nmr_ExternalShiftReference self, Cita_Citation value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setShiftRatioCitation");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: cannot find method 'setShiftRatioCitation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: method 'setShiftRatioCitation' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ShiftReference.unit

Unit of shift reference.
  @param  Nmr_ExternalShiftReference self
  @param  ApiString value
**/
void *Nmr_ExternalShiftReference_SetUnit(Nmr_ExternalShiftReference self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setUnit");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: cannot find method 'setUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: method 'setUnit' is not callable");
  
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
  @param  Nmr_ExternalShiftReference self
  @param  ApiFloat value
**/
void *Nmr_ExternalShiftReference_SetValue(Nmr_ExternalShiftReference self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setValue");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: cannot find method 'setValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: method 'setValue' is not callable");
  
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
  @param  Nmr_ExternalShiftReference self
  @returns   the result
**/
ApiList Nmr_ExternalShiftReference_SortedExperiments(Nmr_ExternalShiftReference self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedExperiments");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: cannot find method 'sortedExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExternalShiftReference: method 'sortedExperiments' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
