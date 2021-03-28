
#include "ccp.h"

/*
  General classification of target status to display.
*/

/* package ccp.api.lims.Classification */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_TargetScoreboard self
  @param  Impl_ApplicationData value
**/
void *Clas_TargetScoreboard_AddApplicationData(Clas_TargetScoreboard self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetScoreboard: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetScoreboard: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.lims.Classification.TargetScoreboard.targetStatus
  @param  Clas_TargetScoreboard self
  @param  Clas_TargetStatus value
**/
void *Clas_TargetScoreboard_AddTargetStatus(Clas_TargetScoreboard self, Clas_TargetStatus value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addTargetStatus");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetScoreboard: cannot find method 'addTargetStatus'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetScoreboard: method 'addTargetStatus' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.lims.Classification.TargetScoreboard
  @param  Clas_TargetScoreboard self
  @param  ApiBoolean complete
**/
void *Clas_TargetScoreboard_CheckAllValid(Clas_TargetScoreboard self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetScoreboard: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetScoreboard: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.lims.Classification.TargetScoreboard
  @param  Clas_TargetScoreboard self
  @param  ApiBoolean complete
**/
void *Clas_TargetScoreboard_CheckValid(Clas_TargetScoreboard self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetScoreboard: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetScoreboard: method 'checkValid' is not callable");
  
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
  @param  Clas_TargetScoreboard self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Clas_TargetScoreboard_FindAllApplicationData(Clas_TargetScoreboard self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetScoreboard: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetScoreboard: method 'findAllApplicationData' is not callable");
  
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
  @param  Clas_TargetScoreboard self
  @returns  all value that satisfy the conditions 
**/
ApiList Clas_TargetScoreboard_FindAllApplicationData_keyval0(Clas_TargetScoreboard self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Clas_TargetScoreboard_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_TargetScoreboard self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Clas_TargetScoreboard_FindAllApplicationData_keyval1(Clas_TargetScoreboard self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Clas_TargetScoreboard_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_TargetScoreboard self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Clas_TargetScoreboard_FindAllApplicationData_keyval2(Clas_TargetScoreboard self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Clas_TargetScoreboard_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_TargetScoreboard self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Clas_TargetScoreboard_FindAllApplicationData_keyval3(Clas_TargetScoreboard self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Clas_TargetScoreboard_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_TargetScoreboard self
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
ApiList Clas_TargetScoreboard_FindAllApplicationData_keyval4(Clas_TargetScoreboard self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Clas_TargetScoreboard_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.TargetScoreboard.targetStatus
  @param  Clas_TargetScoreboard self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_TargetScoreboard_FindAllTargetStatus(Clas_TargetScoreboard self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllTargetStatus");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetScoreboard: cannot find method 'findAllTargetStatus'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetScoreboard: method 'findAllTargetStatus' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.TargetScoreboard.targetStatus
  @param  Clas_TargetScoreboard self
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_TargetScoreboard_FindAllTargetStatus_keyval0(Clas_TargetScoreboard self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Clas_TargetScoreboard_FindAllTargetStatus(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.TargetScoreboard.targetStatus
  @param  Clas_TargetScoreboard self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_TargetScoreboard_FindAllTargetStatus_keyval1(Clas_TargetScoreboard self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Clas_TargetScoreboard_FindAllTargetStatus(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.TargetScoreboard.targetStatus
  @param  Clas_TargetScoreboard self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_TargetScoreboard_FindAllTargetStatus_keyval2(Clas_TargetScoreboard self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Clas_TargetScoreboard_FindAllTargetStatus(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.TargetScoreboard.targetStatus
  @param  Clas_TargetScoreboard self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_TargetScoreboard_FindAllTargetStatus_keyval3(Clas_TargetScoreboard self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Clas_TargetScoreboard_FindAllTargetStatus(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.TargetScoreboard.targetStatus
  @param  Clas_TargetScoreboard self
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
ApiSet Clas_TargetScoreboard_FindAllTargetStatus_keyval4(Clas_TargetScoreboard self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Clas_TargetScoreboard_FindAllTargetStatus(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_TargetScoreboard self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Clas_TargetScoreboard_FindFirstApplicationData(Clas_TargetScoreboard self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetScoreboard: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetScoreboard: method 'findFirstApplicationData' is not callable");
  
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
  @param  Clas_TargetScoreboard self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Clas_TargetScoreboard_FindFirstApplicationData_keyval0(Clas_TargetScoreboard self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Clas_TargetScoreboard_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_TargetScoreboard self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Clas_TargetScoreboard_FindFirstApplicationData_keyval1(Clas_TargetScoreboard self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Clas_TargetScoreboard_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_TargetScoreboard self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Clas_TargetScoreboard_FindFirstApplicationData_keyval2(Clas_TargetScoreboard self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Clas_TargetScoreboard_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_TargetScoreboard self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Clas_TargetScoreboard_FindFirstApplicationData_keyval3(Clas_TargetScoreboard self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Clas_TargetScoreboard_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_TargetScoreboard self
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
Impl_ApplicationData Clas_TargetScoreboard_FindFirstApplicationData_keyval4(Clas_TargetScoreboard self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Clas_TargetScoreboard_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Classification.TargetScoreboard.targetStatus
  @param  Clas_TargetScoreboard self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Clas_TargetStatus Clas_TargetScoreboard_FindFirstTargetStatus(Clas_TargetScoreboard self, ApiMap conditions)
{
  
  Clas_TargetStatus obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstTargetStatus");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetScoreboard: cannot find method 'findFirstTargetStatus'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetScoreboard: method 'findFirstTargetStatus' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Classification.TargetScoreboard.targetStatus
  @param  Clas_TargetScoreboard self
  @returns  the first value that satisfies the conditions 
**/
Clas_TargetStatus Clas_TargetScoreboard_FindFirstTargetStatus_keyval0(Clas_TargetScoreboard self)
{
  
  Clas_TargetStatus  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Clas_TargetScoreboard_FindFirstTargetStatus(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Classification.TargetScoreboard.targetStatus
  @param  Clas_TargetScoreboard self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Clas_TargetStatus Clas_TargetScoreboard_FindFirstTargetStatus_keyval1(Clas_TargetScoreboard self, char * key, ApiObject value)
{
  
  Clas_TargetStatus  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Clas_TargetScoreboard_FindFirstTargetStatus(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Classification.TargetScoreboard.targetStatus
  @param  Clas_TargetScoreboard self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Clas_TargetStatus Clas_TargetScoreboard_FindFirstTargetStatus_keyval2(Clas_TargetScoreboard self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Clas_TargetStatus  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Clas_TargetScoreboard_FindFirstTargetStatus(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Classification.TargetScoreboard.targetStatus
  @param  Clas_TargetScoreboard self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Clas_TargetStatus Clas_TargetScoreboard_FindFirstTargetStatus_keyval3(Clas_TargetScoreboard self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Clas_TargetStatus  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Clas_TargetScoreboard_FindFirstTargetStatus(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Classification.TargetScoreboard.targetStatus
  @param  Clas_TargetScoreboard self
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
Clas_TargetStatus Clas_TargetScoreboard_FindFirstTargetStatus_keyval4(Clas_TargetScoreboard self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Clas_TargetStatus  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Clas_TargetScoreboard_FindFirstTargetStatus(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.lims.Classification.TargetScoreboard
  @param  Clas_TargetScoreboard self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Clas_TargetScoreboard_Get(Clas_TargetScoreboard self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Clas_TargetScoreboard self
  @returns   the result
**/
Acco_AccessObject Clas_TargetScoreboard_GetAccess(Clas_TargetScoreboard self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetScoreboard: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetScoreboard: method 'getAccess' is not callable");
  
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
  @param  Clas_TargetScoreboard self
  @returns   the result
**/
ApiList Clas_TargetScoreboard_GetApplicationData(Clas_TargetScoreboard self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetScoreboard: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetScoreboard: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.lims.Classification.TargetScoreboard
  @param  Clas_TargetScoreboard self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Clas_TargetScoreboard Clas_TargetScoreboard_GetByKey(Clas_TargetScoreboard self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Clas_TargetScoreboard obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetScoreboard: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetScoreboard: method 'getByKey' is not callable");
  
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
  @param  Clas_TargetScoreboard self
  @returns   the result
**/
ApiString Clas_TargetScoreboard_GetClassName(Clas_TargetScoreboard self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetScoreboard: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetScoreboard: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Classification.TargetScoreboard.classification

parent 
link
  @param  Clas_TargetScoreboard self
  @returns   the result
**/
Clas_Classification Clas_TargetScoreboard_GetClassification(Clas_TargetScoreboard self)
{
  
  Clas_Classification obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassification");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetScoreboard: cannot find method 'getClassification'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetScoreboard: method 'getClassification' is not callable");
  
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
  @param  Clas_TargetScoreboard self
  @returns   the result
**/
ApiString Clas_TargetScoreboard_GetDetails(Clas_TargetScoreboard self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetScoreboard: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetScoreboard: method 'getDetails' is not callable");
  
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
  @param  Clas_TargetScoreboard self
  @returns   the result
**/
ApiList Clas_TargetScoreboard_GetFieldNames(Clas_TargetScoreboard self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetScoreboard: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetScoreboard: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.lims.Classification.TargetScoreboard
  @param  Clas_TargetScoreboard self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Clas_TargetScoreboard_GetFullKey(Clas_TargetScoreboard self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetScoreboard: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetScoreboard: method 'getFullKey' is not callable");
  
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
  @param  Clas_TargetScoreboard self
  @returns   the result
**/
ApiBoolean Clas_TargetScoreboard_GetInConstructor(Clas_TargetScoreboard self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetScoreboard: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetScoreboard: method 'getInConstructor' is not callable");
  
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
  @param  Clas_TargetScoreboard self
  @returns   the result
**/
ApiBoolean Clas_TargetScoreboard_GetIsDeleted(Clas_TargetScoreboard self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetScoreboard: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetScoreboard: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.lims.Classification.TargetScoreboard
  @param  Clas_TargetScoreboard self
  @returns  Local object key
**/
ApiObject Clas_TargetScoreboard_GetLocalKey(Clas_TargetScoreboard self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetScoreboard: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetScoreboard: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Classification.AbstractCategory.name

Name of category
  @param  Clas_TargetScoreboard self
  @returns   the result
**/
ApiString Clas_TargetScoreboard_GetName(Clas_TargetScoreboard self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetScoreboard: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetScoreboard: method 'getName' is not callable");
  
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
  @param  Clas_TargetScoreboard self
  @returns   the result
**/
ApiString Clas_TargetScoreboard_GetPackageName(Clas_TargetScoreboard self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetScoreboard: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetScoreboard: method 'getPackageName' is not callable");
  
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
  @param  Clas_TargetScoreboard self
  @returns   the result
**/
ApiString Clas_TargetScoreboard_GetPackageShortName(Clas_TargetScoreboard self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetScoreboard: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetScoreboard: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Classification.TargetScoreboard.parent

link to parent 
object - synonym for classification
  @param  Clas_TargetScoreboard self
  @returns   the result
**/
Clas_Classification Clas_TargetScoreboard_GetParent(Clas_TargetScoreboard self)
{
  
  Clas_Classification obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetScoreboard: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetScoreboard: method 'getParent' is not callable");
  
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
  @param  Clas_TargetScoreboard self
  @returns   the result
**/
ApiString Clas_TargetScoreboard_GetQualifiedName(Clas_TargetScoreboard self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetScoreboard: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetScoreboard: method 'getQualifiedName' is not callable");
  
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
  @param  Clas_TargetScoreboard self
  @returns   the result
**/
Impl_MemopsRoot Clas_TargetScoreboard_GetRoot(Clas_TargetScoreboard self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetScoreboard: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetScoreboard: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Classification.TargetScoreboard.targetStatus
  @param  Clas_TargetScoreboard self
  @returns   the result
**/
ApiSet Clas_TargetScoreboard_GetTargetStatus(Clas_TargetScoreboard self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTargetStatus");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetScoreboard: cannot find method 'getTargetStatus'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetScoreboard: method 'getTargetStatus' is not callable");
  
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
  @param  Clas_TargetScoreboard self
  @returns   the result
**/
Impl_TopObject Clas_TargetScoreboard_GetTopObject(Clas_TargetScoreboard self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetScoreboard: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetScoreboard: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.lims.Classification.TargetScoreboard
  @param  Clas_Classification parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Clas_TargetScoreboard Clas_TargetScoreboard_Init(Clas_Classification parent, ApiMap attrlinks)
{
  
  return Clas_Classification_NewTargetScoreboard(parent, attrlinks);
}

/**
  Constructor for ccp.lims.Classification.TargetScoreboard
  @param  Clas_Classification parent
  @param  char * name
  @returns  the new object
**/
Clas_TargetScoreboard Clas_TargetScoreboard_Init_reqd(Clas_Classification parent, char * name)
{
  
  Clas_TargetScoreboard  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Clas_TargetScoreboard_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_TargetScoreboard self
  @param  Impl_ApplicationData value
**/
void *Clas_TargetScoreboard_RemoveApplicationData(Clas_TargetScoreboard self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetScoreboard: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetScoreboard: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.lims.Classification.TargetScoreboard.targetStatus
  @param  Clas_TargetScoreboard self
  @param  Clas_TargetStatus value
**/
void *Clas_TargetScoreboard_RemoveTargetStatus(Clas_TargetScoreboard self, Clas_TargetStatus value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeTargetStatus");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetScoreboard: cannot find method 'removeTargetStatus'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetScoreboard: method 'removeTargetStatus' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.lims.Classification.TargetScoreboard
  @param  Clas_TargetScoreboard self
  @param  ApiString name
  @param  ApiObject value
**/
void *Clas_TargetScoreboard_Set(Clas_TargetScoreboard self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Clas_TargetScoreboard self
  @param  Acco_AccessObject value
**/
void *Clas_TargetScoreboard_SetAccess(Clas_TargetScoreboard self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetScoreboard: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetScoreboard: method 'setAccess' is not callable");
  
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
  @param  Clas_TargetScoreboard self
  @param  ApiList values
**/
void *Clas_TargetScoreboard_SetApplicationData(Clas_TargetScoreboard self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetScoreboard: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetScoreboard: method 'setApplicationData' is not callable");
  
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
  @param  Clas_TargetScoreboard self
  @param  ApiString value
**/
void *Clas_TargetScoreboard_SetDetails(Clas_TargetScoreboard self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetScoreboard: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetScoreboard: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Classification.AbstractCategory.name

Name of category
  @param  Clas_TargetScoreboard self
  @param  ApiString value
**/
void *Clas_TargetScoreboard_SetName(Clas_TargetScoreboard self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetScoreboard: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetScoreboard: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Classification.TargetScoreboard.targetStatus
  @param  Clas_TargetScoreboard self
  @param  ApiSet values
**/
void *Clas_TargetScoreboard_SetTargetStatus(Clas_TargetScoreboard self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setTargetStatus");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetScoreboard: cannot find method 'setTargetStatus'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetScoreboard: method 'setTargetStatus' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Classification.TargetScoreboard.targetStatus
  @param  Clas_TargetScoreboard self
  @returns   the result
**/
ApiList Clas_TargetScoreboard_SortedTargetStatus(Clas_TargetScoreboard self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedTargetStatus");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetScoreboard: cannot find method 'sortedTargetStatus'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetScoreboard: method 'sortedTargetStatus' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
