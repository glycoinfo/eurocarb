
#include "ccp.h"

/*
  General target status classification.
*/

/* package ccp.api.lims.Classification */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_TargetStatus self
  @param  Impl_ApplicationData value
**/
void *Clas_TargetStatus_AddApplicationData(Clas_TargetStatus self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetStatus: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetStatus: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.lims.Classification.TargetStatus.targetScoreboards
  @param  Clas_TargetStatus self
  @param  Clas_TargetScoreboard value
**/
void *Clas_TargetStatus_AddTargetScoreboard(Clas_TargetStatus self, Clas_TargetScoreboard value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addTargetScoreboard");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetStatus: cannot find method 'addTargetScoreboard'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetStatus: method 'addTargetScoreboard' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.lims.Classification.TargetStatus
  @param  Clas_TargetStatus self
  @param  ApiBoolean complete
**/
void *Clas_TargetStatus_CheckAllValid(Clas_TargetStatus self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetStatus: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetStatus: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.lims.Classification.TargetStatus
  @param  Clas_TargetStatus self
  @param  ApiBoolean complete
**/
void *Clas_TargetStatus_CheckValid(Clas_TargetStatus self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetStatus: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetStatus: method 'checkValid' is not callable");
  
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
  @param  Clas_TargetStatus self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Clas_TargetStatus_FindAllApplicationData(Clas_TargetStatus self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetStatus: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetStatus: method 'findAllApplicationData' is not callable");
  
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
  @param  Clas_TargetStatus self
  @returns  all value that satisfy the conditions 
**/
ApiList Clas_TargetStatus_FindAllApplicationData_keyval0(Clas_TargetStatus self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Clas_TargetStatus_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_TargetStatus self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Clas_TargetStatus_FindAllApplicationData_keyval1(Clas_TargetStatus self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Clas_TargetStatus_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_TargetStatus self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Clas_TargetStatus_FindAllApplicationData_keyval2(Clas_TargetStatus self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Clas_TargetStatus_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_TargetStatus self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Clas_TargetStatus_FindAllApplicationData_keyval3(Clas_TargetStatus self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Clas_TargetStatus_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_TargetStatus self
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
ApiList Clas_TargetStatus_FindAllApplicationData_keyval4(Clas_TargetStatus self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Clas_TargetStatus_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.TargetStatus.blueprintStatuss
  @param  Clas_TargetStatus self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_TargetStatus_FindAllBlueprintStatuss(Clas_TargetStatus self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllBlueprintStatuss");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetStatus: cannot find method 'findAllBlueprintStatuss'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetStatus: method 'findAllBlueprintStatuss' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.TargetStatus.blueprintStatuss
  @param  Clas_TargetStatus self
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_TargetStatus_FindAllBlueprintStatuss_keyval0(Clas_TargetStatus self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Clas_TargetStatus_FindAllBlueprintStatuss(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.TargetStatus.blueprintStatuss
  @param  Clas_TargetStatus self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_TargetStatus_FindAllBlueprintStatuss_keyval1(Clas_TargetStatus self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Clas_TargetStatus_FindAllBlueprintStatuss(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.TargetStatus.blueprintStatuss
  @param  Clas_TargetStatus self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_TargetStatus_FindAllBlueprintStatuss_keyval2(Clas_TargetStatus self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Clas_TargetStatus_FindAllBlueprintStatuss(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.TargetStatus.blueprintStatuss
  @param  Clas_TargetStatus self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_TargetStatus_FindAllBlueprintStatuss_keyval3(Clas_TargetStatus self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Clas_TargetStatus_FindAllBlueprintStatuss(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.TargetStatus.blueprintStatuss
  @param  Clas_TargetStatus self
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
ApiSet Clas_TargetStatus_FindAllBlueprintStatuss_keyval4(Clas_TargetStatus self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Clas_TargetStatus_FindAllBlueprintStatuss(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.TargetStatus.targetScoreboards
  @param  Clas_TargetStatus self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_TargetStatus_FindAllTargetScoreboards(Clas_TargetStatus self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllTargetScoreboards");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetStatus: cannot find method 'findAllTargetScoreboards'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetStatus: method 'findAllTargetScoreboards' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.TargetStatus.targetScoreboards
  @param  Clas_TargetStatus self
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_TargetStatus_FindAllTargetScoreboards_keyval0(Clas_TargetStatus self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Clas_TargetStatus_FindAllTargetScoreboards(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.TargetStatus.targetScoreboards
  @param  Clas_TargetStatus self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_TargetStatus_FindAllTargetScoreboards_keyval1(Clas_TargetStatus self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Clas_TargetStatus_FindAllTargetScoreboards(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.TargetStatus.targetScoreboards
  @param  Clas_TargetStatus self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_TargetStatus_FindAllTargetScoreboards_keyval2(Clas_TargetStatus self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Clas_TargetStatus_FindAllTargetScoreboards(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.TargetStatus.targetScoreboards
  @param  Clas_TargetStatus self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_TargetStatus_FindAllTargetScoreboards_keyval3(Clas_TargetStatus self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Clas_TargetStatus_FindAllTargetScoreboards(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.TargetStatus.targetScoreboards
  @param  Clas_TargetStatus self
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
ApiSet Clas_TargetStatus_FindAllTargetScoreboards_keyval4(Clas_TargetStatus self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Clas_TargetStatus_FindAllTargetScoreboards(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.TargetStatus.targetStatus

The 
status associated to a particular target status.
  @param  Clas_TargetStatus self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_TargetStatus_FindAllTargetStatus(Clas_TargetStatus self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllTargetStatus");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetStatus: cannot find method 'findAllTargetStatus'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetStatus: method 'findAllTargetStatus' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.TargetStatus.targetStatus

The 
status associated to a particular target status.
  @param  Clas_TargetStatus self
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_TargetStatus_FindAllTargetStatus_keyval0(Clas_TargetStatus self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Clas_TargetStatus_FindAllTargetStatus(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.TargetStatus.targetStatus

The 
status associated to a particular target status.
  @param  Clas_TargetStatus self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_TargetStatus_FindAllTargetStatus_keyval1(Clas_TargetStatus self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Clas_TargetStatus_FindAllTargetStatus(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.TargetStatus.targetStatus

The 
status associated to a particular target status.
  @param  Clas_TargetStatus self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_TargetStatus_FindAllTargetStatus_keyval2(Clas_TargetStatus self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Clas_TargetStatus_FindAllTargetStatus(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.TargetStatus.targetStatus

The 
status associated to a particular target status.
  @param  Clas_TargetStatus self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Clas_TargetStatus_FindAllTargetStatus_keyval3(Clas_TargetStatus self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Clas_TargetStatus_FindAllTargetStatus(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Classification.TargetStatus.targetStatus

The 
status associated to a particular target status.
  @param  Clas_TargetStatus self
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
ApiSet Clas_TargetStatus_FindAllTargetStatus_keyval4(Clas_TargetStatus self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Clas_TargetStatus_FindAllTargetStatus(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_TargetStatus self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Clas_TargetStatus_FindFirstApplicationData(Clas_TargetStatus self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetStatus: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetStatus: method 'findFirstApplicationData' is not callable");
  
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
  @param  Clas_TargetStatus self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Clas_TargetStatus_FindFirstApplicationData_keyval0(Clas_TargetStatus self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Clas_TargetStatus_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_TargetStatus self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Clas_TargetStatus_FindFirstApplicationData_keyval1(Clas_TargetStatus self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Clas_TargetStatus_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_TargetStatus self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Clas_TargetStatus_FindFirstApplicationData_keyval2(Clas_TargetStatus self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Clas_TargetStatus_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_TargetStatus self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Clas_TargetStatus_FindFirstApplicationData_keyval3(Clas_TargetStatus self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Clas_TargetStatus_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_TargetStatus self
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
Impl_ApplicationData Clas_TargetStatus_FindFirstApplicationData_keyval4(Clas_TargetStatus self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Clas_TargetStatus_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Classification.TargetStatus.blueprintStatuss
  @param  Clas_TargetStatus self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Expb_BlueprintStatus Clas_TargetStatus_FindFirstBlueprintStatus(Clas_TargetStatus self, ApiMap conditions)
{
  
  Expb_BlueprintStatus obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstBlueprintStatus");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetStatus: cannot find method 'findFirstBlueprintStatus'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetStatus: method 'findFirstBlueprintStatus' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Classification.TargetStatus.blueprintStatuss
  @param  Clas_TargetStatus self
  @returns  the first value that satisfies the conditions 
**/
Expb_BlueprintStatus Clas_TargetStatus_FindFirstBlueprintStatus_keyval0(Clas_TargetStatus self)
{
  
  Expb_BlueprintStatus  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Clas_TargetStatus_FindFirstBlueprintStatus(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Classification.TargetStatus.blueprintStatuss
  @param  Clas_TargetStatus self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Expb_BlueprintStatus Clas_TargetStatus_FindFirstBlueprintStatus_keyval1(Clas_TargetStatus self, char * key, ApiObject value)
{
  
  Expb_BlueprintStatus  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Clas_TargetStatus_FindFirstBlueprintStatus(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Classification.TargetStatus.blueprintStatuss
  @param  Clas_TargetStatus self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Expb_BlueprintStatus Clas_TargetStatus_FindFirstBlueprintStatus_keyval2(Clas_TargetStatus self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Expb_BlueprintStatus  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Clas_TargetStatus_FindFirstBlueprintStatus(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Classification.TargetStatus.blueprintStatuss
  @param  Clas_TargetStatus self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Expb_BlueprintStatus Clas_TargetStatus_FindFirstBlueprintStatus_keyval3(Clas_TargetStatus self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Expb_BlueprintStatus  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Clas_TargetStatus_FindFirstBlueprintStatus(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Classification.TargetStatus.blueprintStatuss
  @param  Clas_TargetStatus self
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
Expb_BlueprintStatus Clas_TargetStatus_FindFirstBlueprintStatus_keyval4(Clas_TargetStatus self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Expb_BlueprintStatus  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Clas_TargetStatus_FindFirstBlueprintStatus(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Classification.TargetStatus.targetScoreboards
  @param  Clas_TargetStatus self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Clas_TargetScoreboard Clas_TargetStatus_FindFirstTargetScoreboard(Clas_TargetStatus self, ApiMap conditions)
{
  
  Clas_TargetScoreboard obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstTargetScoreboard");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetStatus: cannot find method 'findFirstTargetScoreboard'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetStatus: method 'findFirstTargetScoreboard' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Classification.TargetStatus.targetScoreboards
  @param  Clas_TargetStatus self
  @returns  the first value that satisfies the conditions 
**/
Clas_TargetScoreboard Clas_TargetStatus_FindFirstTargetScoreboard_keyval0(Clas_TargetStatus self)
{
  
  Clas_TargetScoreboard  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Clas_TargetStatus_FindFirstTargetScoreboard(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Classification.TargetStatus.targetScoreboards
  @param  Clas_TargetStatus self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Clas_TargetScoreboard Clas_TargetStatus_FindFirstTargetScoreboard_keyval1(Clas_TargetStatus self, char * key, ApiObject value)
{
  
  Clas_TargetScoreboard  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Clas_TargetStatus_FindFirstTargetScoreboard(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Classification.TargetStatus.targetScoreboards
  @param  Clas_TargetStatus self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Clas_TargetScoreboard Clas_TargetStatus_FindFirstTargetScoreboard_keyval2(Clas_TargetStatus self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Clas_TargetScoreboard  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Clas_TargetStatus_FindFirstTargetScoreboard(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Classification.TargetStatus.targetScoreboards
  @param  Clas_TargetStatus self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Clas_TargetScoreboard Clas_TargetStatus_FindFirstTargetScoreboard_keyval3(Clas_TargetStatus self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Clas_TargetScoreboard  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Clas_TargetStatus_FindFirstTargetScoreboard(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Classification.TargetStatus.targetScoreboards
  @param  Clas_TargetStatus self
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
Clas_TargetScoreboard Clas_TargetStatus_FindFirstTargetScoreboard_keyval4(Clas_TargetStatus self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Clas_TargetScoreboard  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Clas_TargetStatus_FindFirstTargetScoreboard(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Classification.TargetStatus.targetStatus

The 
status associated to a particular target status.
  @param  Clas_TargetStatus self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Targ_TargetStatus Clas_TargetStatus_FindFirstTargetStatus(Clas_TargetStatus self, ApiMap conditions)
{
  
  Targ_TargetStatus obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstTargetStatus");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetStatus: cannot find method 'findFirstTargetStatus'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetStatus: method 'findFirstTargetStatus' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Classification.TargetStatus.targetStatus

The 
status associated to a particular target status.
  @param  Clas_TargetStatus self
  @returns  the first value that satisfies the conditions 
**/
Targ_TargetStatus Clas_TargetStatus_FindFirstTargetStatus_keyval0(Clas_TargetStatus self)
{
  
  Targ_TargetStatus  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Clas_TargetStatus_FindFirstTargetStatus(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Classification.TargetStatus.targetStatus

The 
status associated to a particular target status.
  @param  Clas_TargetStatus self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Targ_TargetStatus Clas_TargetStatus_FindFirstTargetStatus_keyval1(Clas_TargetStatus self, char * key, ApiObject value)
{
  
  Targ_TargetStatus  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Clas_TargetStatus_FindFirstTargetStatus(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Classification.TargetStatus.targetStatus

The 
status associated to a particular target status.
  @param  Clas_TargetStatus self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Targ_TargetStatus Clas_TargetStatus_FindFirstTargetStatus_keyval2(Clas_TargetStatus self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Targ_TargetStatus  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Clas_TargetStatus_FindFirstTargetStatus(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Classification.TargetStatus.targetStatus

The 
status associated to a particular target status.
  @param  Clas_TargetStatus self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Targ_TargetStatus Clas_TargetStatus_FindFirstTargetStatus_keyval3(Clas_TargetStatus self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Targ_TargetStatus  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Clas_TargetStatus_FindFirstTargetStatus(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Classification.TargetStatus.targetStatus

The 
status associated to a particular target status.
  @param  Clas_TargetStatus self
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
Targ_TargetStatus Clas_TargetStatus_FindFirstTargetStatus_keyval4(Clas_TargetStatus self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Targ_TargetStatus  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Clas_TargetStatus_FindFirstTargetStatus(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.lims.Classification.TargetStatus
  @param  Clas_TargetStatus self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Clas_TargetStatus_Get(Clas_TargetStatus self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Clas_TargetStatus self
  @returns   the result
**/
Acco_AccessObject Clas_TargetStatus_GetAccess(Clas_TargetStatus self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetStatus: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetStatus: method 'getAccess' is not callable");
  
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
  @param  Clas_TargetStatus self
  @returns   the result
**/
Acco_AccessObject Clas_TargetStatus_GetActiveAccess(Clas_TargetStatus self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetStatus: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetStatus: method 'getActiveAccess' is not callable");
  
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
  @param  Clas_TargetStatus self
  @returns   the result
**/
ApiList Clas_TargetStatus_GetApplicationData(Clas_TargetStatus self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetStatus: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetStatus: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Classification.TargetStatus.blueprintStatuss
  @param  Clas_TargetStatus self
  @returns   the result
**/
ApiSet Clas_TargetStatus_GetBlueprintStatuss(Clas_TargetStatus self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getBlueprintStatuss");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetStatus: cannot find method 'getBlueprintStatuss'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetStatus: method 'getBlueprintStatuss' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.lims.Classification.TargetStatus
  @param  Clas_TargetStatus self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Clas_TargetStatus Clas_TargetStatus_GetByKey(Clas_TargetStatus self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Clas_TargetStatus obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetStatus: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetStatus: method 'getByKey' is not callable");
  
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
  @param  Clas_TargetStatus self
  @returns   the result
**/
ApiString Clas_TargetStatus_GetClassName(Clas_TargetStatus self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetStatus: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetStatus: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Classification.TargetStatus.classification

parent link
  @param  Clas_TargetStatus self
  @returns   the result
**/
Clas_Classification Clas_TargetStatus_GetClassification(Clas_TargetStatus self)
{
  
  Clas_Classification obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassification");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetStatus: cannot find method 'getClassification'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetStatus: method 'getClassification' is not callable");
  
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
  @param  Clas_TargetStatus self
  @returns   the result
**/
ApiString Clas_TargetStatus_GetDetails(Clas_TargetStatus self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetStatus: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetStatus: method 'getDetails' is not callable");
  
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
  @param  Clas_TargetStatus self
  @returns   the result
**/
ApiList Clas_TargetStatus_GetFieldNames(Clas_TargetStatus self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetStatus: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetStatus: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.lims.Classification.TargetStatus
  @param  Clas_TargetStatus self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Clas_TargetStatus_GetFullKey(Clas_TargetStatus self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetStatus: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetStatus: method 'getFullKey' is not callable");
  
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
  @param  Clas_TargetStatus self
  @returns   the result
**/
ApiBoolean Clas_TargetStatus_GetInConstructor(Clas_TargetStatus self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetStatus: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetStatus: method 'getInConstructor' is not callable");
  
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
  @param  Clas_TargetStatus self
  @returns   the result
**/
ApiBoolean Clas_TargetStatus_GetIsDeleted(Clas_TargetStatus self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetStatus: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetStatus: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.lims.Classification.TargetStatus
  @param  Clas_TargetStatus self
  @returns  Local object key
**/
ApiObject Clas_TargetStatus_GetLocalKey(Clas_TargetStatus self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetStatus: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetStatus: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Classification.AbstractCategory.name

Name of category
  @param  Clas_TargetStatus self
  @returns   the result
**/
ApiString Clas_TargetStatus_GetName(Clas_TargetStatus self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetStatus: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetStatus: method 'getName' is not callable");
  
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
  @param  Clas_TargetStatus self
  @returns   the result
**/
ApiString Clas_TargetStatus_GetPackageName(Clas_TargetStatus self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetStatus: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetStatus: method 'getPackageName' is not callable");
  
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
  @param  Clas_TargetStatus self
  @returns   the result
**/
ApiString Clas_TargetStatus_GetPackageShortName(Clas_TargetStatus self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetStatus: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetStatus: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Classification.TargetStatus.parent

link to parent 
object - synonym for classification
  @param  Clas_TargetStatus self
  @returns   the result
**/
Clas_Classification Clas_TargetStatus_GetParent(Clas_TargetStatus self)
{
  
  Clas_Classification obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetStatus: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetStatus: method 'getParent' is not callable");
  
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
  @param  Clas_TargetStatus self
  @returns   the result
**/
ApiString Clas_TargetStatus_GetQualifiedName(Clas_TargetStatus self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetStatus: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetStatus: method 'getQualifiedName' is not callable");
  
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
  @param  Clas_TargetStatus self
  @returns   the result
**/
Impl_MemopsRoot Clas_TargetStatus_GetRoot(Clas_TargetStatus self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetStatus: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetStatus: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Classification.TargetStatus.targetScoreboards
  @param  Clas_TargetStatus self
  @returns   the result
**/
ApiSet Clas_TargetStatus_GetTargetScoreboards(Clas_TargetStatus self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTargetScoreboards");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetStatus: cannot find method 'getTargetScoreboards'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetStatus: method 'getTargetScoreboards' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Classification.TargetStatus.targetStatus

The status 
associated to a particular target status.
  @param  Clas_TargetStatus self
  @returns   the result
**/
ApiSet Clas_TargetStatus_GetTargetStatus(Clas_TargetStatus self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTargetStatus");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetStatus: cannot find method 'getTargetStatus'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetStatus: method 'getTargetStatus' is not callable");
  
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
  @param  Clas_TargetStatus self
  @returns   the result
**/
Impl_TopObject Clas_TargetStatus_GetTopObject(Clas_TargetStatus self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetStatus: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetStatus: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.lims.Classification.TargetStatus
  @param  Clas_Classification parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Clas_TargetStatus Clas_TargetStatus_Init(Clas_Classification parent, ApiMap attrlinks)
{
  
  return Clas_Classification_NewTargetStatus(parent, attrlinks);
}

/**
  Constructor for ccp.lims.Classification.TargetStatus
  @param  Clas_Classification parent
  @param  char * name
  @returns  the new object
**/
Clas_TargetStatus Clas_TargetStatus_Init_reqd(Clas_Classification parent, char * name)
{
  
  Clas_TargetStatus  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Clas_TargetStatus_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_TargetStatus self
  @param  Impl_ApplicationData value
**/
void *Clas_TargetStatus_RemoveApplicationData(Clas_TargetStatus self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetStatus: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetStatus: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.lims.Classification.TargetStatus.targetScoreboards
  @param  Clas_TargetStatus self
  @param  Clas_TargetScoreboard value
**/
void *Clas_TargetStatus_RemoveTargetScoreboard(Clas_TargetStatus self, Clas_TargetScoreboard value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeTargetScoreboard");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetStatus: cannot find method 'removeTargetScoreboard'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetStatus: method 'removeTargetScoreboard' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.lims.Classification.TargetStatus
  @param  Clas_TargetStatus self
  @param  ApiString name
  @param  ApiObject value
**/
void *Clas_TargetStatus_Set(Clas_TargetStatus self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Clas_TargetStatus self
  @param  Acco_AccessObject value
**/
void *Clas_TargetStatus_SetAccess(Clas_TargetStatus self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetStatus: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetStatus: method 'setAccess' is not callable");
  
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
  @param  Clas_TargetStatus self
  @param  ApiList values
**/
void *Clas_TargetStatus_SetApplicationData(Clas_TargetStatus self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetStatus: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetStatus: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Classification.TargetStatus.blueprintStatuss
  @param  Clas_TargetStatus self
  @param  ApiSet values
**/
void *Clas_TargetStatus_SetBlueprintStatuss(Clas_TargetStatus self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setBlueprintStatuss");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetStatus: cannot find method 'setBlueprintStatuss'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetStatus: method 'setBlueprintStatuss' is not callable");
  
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
  @param  Clas_TargetStatus self
  @param  ApiString value
**/
void *Clas_TargetStatus_SetDetails(Clas_TargetStatus self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetStatus: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetStatus: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Classification.AbstractCategory.name

Name of category
  @param  Clas_TargetStatus self
  @param  ApiString value
**/
void *Clas_TargetStatus_SetName(Clas_TargetStatus self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetStatus: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetStatus: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Classification.TargetStatus.targetScoreboards
  @param  Clas_TargetStatus self
  @param  ApiSet values
**/
void *Clas_TargetStatus_SetTargetScoreboards(Clas_TargetStatus self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setTargetScoreboards");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetStatus: cannot find method 'setTargetScoreboards'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetStatus: method 'setTargetScoreboards' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Classification.TargetStatus.targetStatus

The status 
associated to a particular target status.
  @param  Clas_TargetStatus self
  @param  ApiSet values
**/
void *Clas_TargetStatus_SetTargetStatus(Clas_TargetStatus self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setTargetStatus");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetStatus: cannot find method 'setTargetStatus'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetStatus: method 'setTargetStatus' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Classification.TargetStatus.blueprintStatuss
  @param  Clas_TargetStatus self
  @returns   the result
**/
ApiList Clas_TargetStatus_SortedBlueprintStatuss(Clas_TargetStatus self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedBlueprintStatuss");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetStatus: cannot find method 'sortedBlueprintStatuss'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetStatus: method 'sortedBlueprintStatuss' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Classification.TargetStatus.targetScoreboards
  @param  Clas_TargetStatus self
  @returns   the result
**/
ApiList Clas_TargetStatus_SortedTargetScoreboards(Clas_TargetStatus self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedTargetScoreboards");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetStatus: cannot find method 'sortedTargetScoreboards'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetStatus: method 'sortedTargetScoreboards' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Classification.TargetStatus.targetStatus

The status 
associated to a particular target status.
  @param  Clas_TargetStatus self
  @returns   the result
**/
ApiList Clas_TargetStatus_SortedTargetStatus(Clas_TargetStatus self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedTargetStatus");
  
  if (!method)
    return raiseApiException("ccp.lims.Classification.TargetStatus: cannot find method 'sortedTargetStatus'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Classification.TargetStatus: method 'sortedTargetStatus' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
