
#include "ccp.h"

/*
  
*/

/* package ccp.api.nmr.NmrCalc */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_ConstraintStoreData self
  @param  Impl_ApplicationData value
**/
void *Calc_ConstraintStoreData_AddApplicationData(Calc_ConstraintStoreData self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for 
ccp.nmr.NmrCalc.ConstraintStoreData.constraintLists

NmrConstraint.ConstraintLists 
containing data
  @param  Calc_ConstraintStoreData self
  @param  Nmrc_AbstractConstraintList value
**/
void *Calc_ConstraintStoreData_AddConstraintList(Calc_ConstraintStoreData self, Nmrc_AbstractConstraintList value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addConstraintList");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: cannot find method 'addConstraintList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: method 'addConstraintList' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for 
ccp.nmr.NmrCalc.ConstraintStoreData.constraintListSerials

serials for 
ConstraintLists containing data - if empty use all available 
ConstraintLists
  @param  Calc_ConstraintStoreData self
  @param  ApiInteger value
**/
void *Calc_ConstraintStoreData_AddConstraintListSerial(Calc_ConstraintStoreData self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addConstraintListSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: cannot find method 'addConstraintListSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: method 'addConstraintListSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_ConstraintStoreData self
  @param  Calc_RunParameter value
**/
void *Calc_ConstraintStoreData_AddRunParameter(Calc_ConstraintStoreData self, Calc_RunParameter value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addRunParameter");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: cannot find method 'addRunParameter'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: method 'addRunParameter' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.nmr.NmrCalc.ConstraintStoreData
  @param  Calc_ConstraintStoreData self
  @param  ApiBoolean complete
**/
void *Calc_ConstraintStoreData_CheckAllValid(Calc_ConstraintStoreData self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.nmr.NmrCalc.ConstraintStoreData
  @param  Calc_ConstraintStoreData self
  @param  ApiBoolean complete
**/
void *Calc_ConstraintStoreData_CheckValid(Calc_ConstraintStoreData self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: method 'checkValid' is not callable");
  
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
  @param  Calc_ConstraintStoreData self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Calc_ConstraintStoreData_FindAllApplicationData(Calc_ConstraintStoreData self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: method 'findAllApplicationData' is not callable");
  
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
  @param  Calc_ConstraintStoreData self
  @returns  all value that satisfy the conditions 
**/
ApiList Calc_ConstraintStoreData_FindAllApplicationData_keyval0(Calc_ConstraintStoreData self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Calc_ConstraintStoreData_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_ConstraintStoreData self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Calc_ConstraintStoreData_FindAllApplicationData_keyval1(Calc_ConstraintStoreData self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Calc_ConstraintStoreData_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_ConstraintStoreData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Calc_ConstraintStoreData_FindAllApplicationData_keyval2(Calc_ConstraintStoreData self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Calc_ConstraintStoreData_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_ConstraintStoreData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Calc_ConstraintStoreData_FindAllApplicationData_keyval3(Calc_ConstraintStoreData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Calc_ConstraintStoreData_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_ConstraintStoreData self
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
ApiList Calc_ConstraintStoreData_FindAllApplicationData_keyval4(Calc_ConstraintStoreData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Calc_ConstraintStoreData_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrCalc.ConstraintStoreData.constraintLists

NmrConstraint.ConstraintLists 
containing data
  @param  Calc_ConstraintStoreData self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Calc_ConstraintStoreData_FindAllConstraintLists(Calc_ConstraintStoreData self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllConstraintLists");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: cannot find method 'findAllConstraintLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: method 'findAllConstraintLists' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrCalc.ConstraintStoreData.constraintLists

NmrConstraint.ConstraintLists 
containing data
  @param  Calc_ConstraintStoreData self
  @returns  all value that satisfy the conditions 
**/
ApiList Calc_ConstraintStoreData_FindAllConstraintLists_keyval0(Calc_ConstraintStoreData self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Calc_ConstraintStoreData_FindAllConstraintLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrCalc.ConstraintStoreData.constraintLists

NmrConstraint.ConstraintLists 
containing data
  @param  Calc_ConstraintStoreData self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Calc_ConstraintStoreData_FindAllConstraintLists_keyval1(Calc_ConstraintStoreData self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Calc_ConstraintStoreData_FindAllConstraintLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrCalc.ConstraintStoreData.constraintLists

NmrConstraint.ConstraintLists 
containing data
  @param  Calc_ConstraintStoreData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Calc_ConstraintStoreData_FindAllConstraintLists_keyval2(Calc_ConstraintStoreData self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Calc_ConstraintStoreData_FindAllConstraintLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrCalc.ConstraintStoreData.constraintLists

NmrConstraint.ConstraintLists 
containing data
  @param  Calc_ConstraintStoreData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Calc_ConstraintStoreData_FindAllConstraintLists_keyval3(Calc_ConstraintStoreData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Calc_ConstraintStoreData_FindAllConstraintLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrCalc.ConstraintStoreData.constraintLists

NmrConstraint.ConstraintLists 
containing data
  @param  Calc_ConstraintStoreData self
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
ApiList Calc_ConstraintStoreData_FindAllConstraintLists_keyval4(Calc_ConstraintStoreData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Calc_ConstraintStoreData_FindAllConstraintLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_ConstraintStoreData self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Calc_ConstraintStoreData_FindAllRunParameters(Calc_ConstraintStoreData self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllRunParameters");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: cannot find method 'findAllRunParameters'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: method 'findAllRunParameters' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_ConstraintStoreData self
  @returns  all value that satisfy the conditions 
**/
ApiSet Calc_ConstraintStoreData_FindAllRunParameters_keyval0(Calc_ConstraintStoreData self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Calc_ConstraintStoreData_FindAllRunParameters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_ConstraintStoreData self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Calc_ConstraintStoreData_FindAllRunParameters_keyval1(Calc_ConstraintStoreData self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Calc_ConstraintStoreData_FindAllRunParameters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_ConstraintStoreData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Calc_ConstraintStoreData_FindAllRunParameters_keyval2(Calc_ConstraintStoreData self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Calc_ConstraintStoreData_FindAllRunParameters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_ConstraintStoreData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Calc_ConstraintStoreData_FindAllRunParameters_keyval3(Calc_ConstraintStoreData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Calc_ConstraintStoreData_FindAllRunParameters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_ConstraintStoreData self
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
ApiSet Calc_ConstraintStoreData_FindAllRunParameters_keyval4(Calc_ConstraintStoreData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Calc_ConstraintStoreData_FindAllRunParameters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_ConstraintStoreData self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Calc_ConstraintStoreData_FindFirstApplicationData(Calc_ConstraintStoreData self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: method 'findFirstApplicationData' is not callable");
  
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
  @param  Calc_ConstraintStoreData self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Calc_ConstraintStoreData_FindFirstApplicationData_keyval0(Calc_ConstraintStoreData self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Calc_ConstraintStoreData_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_ConstraintStoreData self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Calc_ConstraintStoreData_FindFirstApplicationData_keyval1(Calc_ConstraintStoreData self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Calc_ConstraintStoreData_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_ConstraintStoreData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Calc_ConstraintStoreData_FindFirstApplicationData_keyval2(Calc_ConstraintStoreData self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Calc_ConstraintStoreData_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_ConstraintStoreData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Calc_ConstraintStoreData_FindFirstApplicationData_keyval3(Calc_ConstraintStoreData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Calc_ConstraintStoreData_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_ConstraintStoreData self
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
Impl_ApplicationData Calc_ConstraintStoreData_FindFirstApplicationData_keyval4(Calc_ConstraintStoreData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Calc_ConstraintStoreData_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrCalc.ConstraintStoreData.constraintLists

NmrConstraint.ConstraintLists 
containing data
  @param  Calc_ConstraintStoreData self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmrc_AbstractConstraintList Calc_ConstraintStoreData_FindFirstConstraintList(Calc_ConstraintStoreData self, ApiMap conditions)
{
  
  Nmrc_AbstractConstraintList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstConstraintList");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: cannot find method 'findFirstConstraintList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: method 'findFirstConstraintList' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrCalc.ConstraintStoreData.constraintLists

NmrConstraint.ConstraintLists 
containing data
  @param  Calc_ConstraintStoreData self
  @returns  the first value that satisfies the conditions 
**/
Nmrc_AbstractConstraintList Calc_ConstraintStoreData_FindFirstConstraintList_keyval0(Calc_ConstraintStoreData self)
{
  
  Nmrc_AbstractConstraintList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Calc_ConstraintStoreData_FindFirstConstraintList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrCalc.ConstraintStoreData.constraintLists

NmrConstraint.ConstraintLists 
containing data
  @param  Calc_ConstraintStoreData self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmrc_AbstractConstraintList Calc_ConstraintStoreData_FindFirstConstraintList_keyval1(Calc_ConstraintStoreData self, char * key, ApiObject value)
{
  
  Nmrc_AbstractConstraintList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Calc_ConstraintStoreData_FindFirstConstraintList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrCalc.ConstraintStoreData.constraintLists

NmrConstraint.ConstraintLists 
containing data
  @param  Calc_ConstraintStoreData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmrc_AbstractConstraintList Calc_ConstraintStoreData_FindFirstConstraintList_keyval2(Calc_ConstraintStoreData self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmrc_AbstractConstraintList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Calc_ConstraintStoreData_FindFirstConstraintList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrCalc.ConstraintStoreData.constraintLists

NmrConstraint.ConstraintLists 
containing data
  @param  Calc_ConstraintStoreData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmrc_AbstractConstraintList Calc_ConstraintStoreData_FindFirstConstraintList_keyval3(Calc_ConstraintStoreData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmrc_AbstractConstraintList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Calc_ConstraintStoreData_FindFirstConstraintList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrCalc.ConstraintStoreData.constraintLists

NmrConstraint.ConstraintLists 
containing data
  @param  Calc_ConstraintStoreData self
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
Nmrc_AbstractConstraintList Calc_ConstraintStoreData_FindFirstConstraintList_keyval4(Calc_ConstraintStoreData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmrc_AbstractConstraintList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Calc_ConstraintStoreData_FindFirstConstraintList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer 
to unit of data.
  @param  Calc_ConstraintStoreData self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Calc_RunParameter Calc_ConstraintStoreData_FindFirstRunParameter(Calc_ConstraintStoreData self, ApiMap conditions)
{
  
  Calc_RunParameter obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstRunParameter");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: cannot find method 'findFirstRunParameter'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: method 'findFirstRunParameter' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer 
to unit of data.
  @param  Calc_ConstraintStoreData self
  @returns  the first value that satisfies the conditions 
**/
Calc_RunParameter Calc_ConstraintStoreData_FindFirstRunParameter_keyval0(Calc_ConstraintStoreData self)
{
  
  Calc_RunParameter  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Calc_ConstraintStoreData_FindFirstRunParameter(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer 
to unit of data.
  @param  Calc_ConstraintStoreData self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Calc_RunParameter Calc_ConstraintStoreData_FindFirstRunParameter_keyval1(Calc_ConstraintStoreData self, char * key, ApiObject value)
{
  
  Calc_RunParameter  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Calc_ConstraintStoreData_FindFirstRunParameter(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer 
to unit of data.
  @param  Calc_ConstraintStoreData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Calc_RunParameter Calc_ConstraintStoreData_FindFirstRunParameter_keyval2(Calc_ConstraintStoreData self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Calc_RunParameter  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Calc_ConstraintStoreData_FindFirstRunParameter(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer 
to unit of data.
  @param  Calc_ConstraintStoreData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Calc_RunParameter Calc_ConstraintStoreData_FindFirstRunParameter_keyval3(Calc_ConstraintStoreData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Calc_RunParameter  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Calc_ConstraintStoreData_FindFirstRunParameter(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer 
to unit of data.
  @param  Calc_ConstraintStoreData self
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
Calc_RunParameter Calc_ConstraintStoreData_FindFirstRunParameter_keyval4(Calc_ConstraintStoreData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Calc_RunParameter  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Calc_ConstraintStoreData_FindFirstRunParameter(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.nmr.NmrCalc.ConstraintStoreData
  @param  Calc_ConstraintStoreData self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Calc_ConstraintStoreData_Get(Calc_ConstraintStoreData self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Calc_ConstraintStoreData self
  @returns   the result
**/
Acco_AccessObject Calc_ConstraintStoreData_GetAccess(Calc_ConstraintStoreData self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: method 'getAccess' is not callable");
  
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
  @param  Calc_ConstraintStoreData self
  @returns   the result
**/
Acco_AccessObject Calc_ConstraintStoreData_GetActiveAccess(Calc_ConstraintStoreData self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: method 'getActiveAccess' is not callable");
  
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
  @param  Calc_ConstraintStoreData self
  @returns   the result
**/
ApiList Calc_ConstraintStoreData_GetApplicationData(Calc_ConstraintStoreData self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.NmrCalc.ConstraintStoreData
  @param  Calc_ConstraintStoreData self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Calc_ConstraintStoreData Calc_ConstraintStoreData_GetByKey(Calc_ConstraintStoreData self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Calc_ConstraintStoreData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: method 'getByKey' is not callable");
  
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
  @param  Calc_ConstraintStoreData self
  @returns   the result
**/
ApiString Calc_ConstraintStoreData_GetClassName(Calc_ConstraintStoreData self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.nmr.NmrCalc.ConstraintStoreData.constraintListSerials

serials for 
ConstraintLists containing data - if empty use all available 
ConstraintLists
  @param  Calc_ConstraintStoreData self
  @returns   the result
**/
ApiList Calc_ConstraintStoreData_GetConstraintListSerials(Calc_ConstraintStoreData self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getConstraintListSerials");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: cannot find method 'getConstraintListSerials'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: method 'getConstraintListSerials' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived link constraintLists
  @param  Calc_ConstraintStoreData self
  @returns   the result
**/
ApiList Calc_ConstraintStoreData_GetConstraintLists(Calc_ConstraintStoreData self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getConstraintLists");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: cannot find method 'getConstraintLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: method 'getConstraintLists' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.nmr.NmrCalc.ConstraintStoreData.constraintStoreSerial

serial of 
NmrConstraintStore containing data - used to derive actual object.
  @param  Calc_ConstraintStoreData self
  @returns   the result
**/
ApiInteger Calc_ConstraintStoreData_GetConstraintStoreSerial(Calc_ConstraintStoreData self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getConstraintStoreSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: cannot find method 'getConstraintStoreSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: method 'getConstraintStoreSerial' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrCalc.Data.details

Free text, for notes, explanatory 
comments, etc.
  @param  Calc_ConstraintStoreData self
  @returns   the result
**/
ApiString Calc_ConstraintStoreData_GetDetails(Calc_ConstraintStoreData self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: method 'getDetails' is not callable");
  
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
  @param  Calc_ConstraintStoreData self
  @returns   the result
**/
ApiList Calc_ConstraintStoreData_GetFieldNames(Calc_ConstraintStoreData self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: method 'getFieldNames' is not callable");
  
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
  @param  Calc_ConstraintStoreData self
  @returns   the result
**/
ApiBoolean Calc_ConstraintStoreData_GetInConstructor(Calc_ConstraintStoreData self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: method 'getInConstructor' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrCalc.Data.ioRole

Role of data in calculation (input 
/ output).
  @param  Calc_ConstraintStoreData self
  @returns   the result
**/
ApiString Calc_ConstraintStoreData_GetIoRole(Calc_ConstraintStoreData self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIoRole");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: cannot find method 'getIoRole'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: method 'getIoRole' is not callable");
  
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
  @param  Calc_ConstraintStoreData self
  @returns   the result
**/
ApiBoolean Calc_ConstraintStoreData_GetIsDeleted(Calc_ConstraintStoreData self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrCalc.Data.name

name identifying data
  @param  Calc_ConstraintStoreData self
  @returns   the result
**/
ApiString Calc_ConstraintStoreData_GetName(Calc_ConstraintStoreData self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: method 'getName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived link nmrConstraintStore
  @param  Calc_ConstraintStoreData self
  @returns   the result
**/
Nmrc_NmrConstraintStore Calc_ConstraintStoreData_GetNmrConstraintStore(Calc_ConstraintStoreData self)
{
  
  Nmrc_NmrConstraintStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrConstraintStore");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: cannot find method 'getNmrConstraintStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: method 'getNmrConstraintStore' is not callable");
  
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
  @param  Calc_ConstraintStoreData self
  @returns   the result
**/
ApiString Calc_ConstraintStoreData_GetPackageName(Calc_ConstraintStoreData self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: method 'getPackageName' is not callable");
  
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
  @param  Calc_ConstraintStoreData self
  @returns   the result
**/
ApiString Calc_ConstraintStoreData_GetPackageShortName(Calc_ConstraintStoreData self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrCalc.Data.parent

link to parent object - synonym for 
run
  @param  Calc_ConstraintStoreData self
  @returns   the result
**/
Calc_Run Calc_ConstraintStoreData_GetParent(Calc_ConstraintStoreData self)
{
  
  Calc_Run obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: method 'getParent' is not callable");
  
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
  @param  Calc_ConstraintStoreData self
  @returns   the result
**/
ApiString Calc_ConstraintStoreData_GetQualifiedName(Calc_ConstraintStoreData self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: method 'getQualifiedName' is not callable");
  
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
  @param  Calc_ConstraintStoreData self
  @returns   the result
**/
Impl_MemopsRoot Calc_ConstraintStoreData_GetRoot(Calc_ConstraintStoreData self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrCalc.Data.run

parent link
  @param  Calc_ConstraintStoreData self
  @returns   the result
**/
Calc_Run Calc_ConstraintStoreData_GetRun(Calc_ConstraintStoreData self)
{
  
  Calc_Run obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRun");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: cannot find method 'getRun'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: method 'getRun' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_ConstraintStoreData self
  @returns   the result
**/
ApiSet Calc_ConstraintStoreData_GetRunParameters(Calc_ConstraintStoreData self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRunParameters");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: cannot find method 'getRunParameters'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: method 'getRunParameters' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrCalc.Data.serial

Serial number of object. Serves as 
object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Calc_ConstraintStoreData self
  @returns   the result
**/
ApiInteger Calc_ConstraintStoreData_GetSerial(Calc_ConstraintStoreData self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: method 'getSerial' is not callable");
  
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
  @param  Calc_ConstraintStoreData self
  @returns   the result
**/
Impl_TopObject Calc_ConstraintStoreData_GetTopObject(Calc_ConstraintStoreData self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrCalc.Data.weight

Weight given to data
  @param  Calc_ConstraintStoreData self
  @returns   the result
**/
ApiFloat Calc_ConstraintStoreData_GetWeight(Calc_ConstraintStoreData self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getWeight");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: cannot find method 'getWeight'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: method 'getWeight' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.nmr.NmrCalc.ConstraintStoreData
  @param  Calc_Run parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Calc_ConstraintStoreData Calc_ConstraintStoreData_Init(Calc_Run parent, ApiMap attrlinks)
{
  
  return Calc_Run_NewConstraintStoreData(parent, attrlinks);
}

/**
  Constructor for ccp.nmr.NmrCalc.ConstraintStoreData
  @param  Calc_Run parent
  @param  ApiInteger constraintStoreSerial
  @returns  the new object
**/
Calc_ConstraintStoreData Calc_ConstraintStoreData_Init_reqd(Calc_Run parent, ApiInteger constraintStoreSerial)
{
  
  Calc_ConstraintStoreData  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "constraintStoreSerial", constraintStoreSerial);
  
  obj = Calc_ConstraintStoreData_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_ConstraintStoreData self
  @param  Impl_ApplicationData value
**/
void *Calc_ConstraintStoreData_RemoveApplicationData(Calc_ConstraintStoreData self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
ccp.nmr.NmrCalc.ConstraintStoreData.constraintLists

NmrConstraint.ConstraintLists 
containing data
  @param  Calc_ConstraintStoreData self
  @param  Nmrc_AbstractConstraintList value
**/
void *Calc_ConstraintStoreData_RemoveConstraintList(Calc_ConstraintStoreData self, Nmrc_AbstractConstraintList value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeConstraintList");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: cannot find method 'removeConstraintList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: method 'removeConstraintList' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
ccp.nmr.NmrCalc.ConstraintStoreData.constraintListSerials

serials for 
ConstraintLists containing data - if empty use all available 
ConstraintLists
  @param  Calc_ConstraintStoreData self
  @param  ApiInteger value
**/
void *Calc_ConstraintStoreData_RemoveConstraintListSerial(Calc_ConstraintStoreData self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeConstraintListSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: cannot find method 'removeConstraintListSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: method 'removeConstraintListSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_ConstraintStoreData self
  @param  Calc_RunParameter value
**/
void *Calc_ConstraintStoreData_RemoveRunParameter(Calc_ConstraintStoreData self, Calc_RunParameter value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeRunParameter");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: cannot find method 'removeRunParameter'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: method 'removeRunParameter' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.nmr.NmrCalc.ConstraintStoreData
  @param  Calc_ConstraintStoreData self
  @param  ApiString name
  @param  ApiObject value
**/
void *Calc_ConstraintStoreData_Set(Calc_ConstraintStoreData self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Calc_ConstraintStoreData self
  @param  Acco_AccessObject value
**/
void *Calc_ConstraintStoreData_SetAccess(Calc_ConstraintStoreData self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: method 'setAccess' is not callable");
  
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
  @param  Calc_ConstraintStoreData self
  @param  ApiList values
**/
void *Calc_ConstraintStoreData_SetApplicationData(Calc_ConstraintStoreData self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.nmr.NmrCalc.ConstraintStoreData.constraintListSerials

serials for 
ConstraintLists containing data - if empty use all available 
ConstraintLists
  @param  Calc_ConstraintStoreData self
  @param  ApiList values
**/
void *Calc_ConstraintStoreData_SetConstraintListSerials(Calc_ConstraintStoreData self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setConstraintListSerials");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: cannot find method 'setConstraintListSerials'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: method 'setConstraintListSerials' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  setter for derived link constraintLists
  @param  Calc_ConstraintStoreData self
  @param  ApiList values
**/
void *Calc_ConstraintStoreData_SetConstraintLists(Calc_ConstraintStoreData self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setConstraintLists");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: cannot find method 'setConstraintLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: method 'setConstraintLists' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.nmr.NmrCalc.ConstraintStoreData.constraintStoreSerial

serial of 
NmrConstraintStore containing data - used to derive actual object.
  @param  Calc_ConstraintStoreData self
  @param  ApiInteger value
**/
void *Calc_ConstraintStoreData_SetConstraintStoreSerial(Calc_ConstraintStoreData self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setConstraintStoreSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: cannot find method 'setConstraintStoreSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: method 'setConstraintStoreSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrCalc.Data.details

Free text, for notes, explanatory 
comments, etc.
  @param  Calc_ConstraintStoreData self
  @param  ApiString value
**/
void *Calc_ConstraintStoreData_SetDetails(Calc_ConstraintStoreData self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrCalc.Data.ioRole

Role of data in calculation (input 
/ output).
  @param  Calc_ConstraintStoreData self
  @param  ApiString value
**/
void *Calc_ConstraintStoreData_SetIoRole(Calc_ConstraintStoreData self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIoRole");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: cannot find method 'setIoRole'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: method 'setIoRole' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrCalc.Data.name

name identifying data
  @param  Calc_ConstraintStoreData self
  @param  ApiString value
**/
void *Calc_ConstraintStoreData_SetName(Calc_ConstraintStoreData self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  setter for derived link nmrConstraintStore. Sets constraintLists to 
'all'
  @param  Calc_ConstraintStoreData self
  @param  Nmrc_NmrConstraintStore value
**/
void *Calc_ConstraintStoreData_SetNmrConstraintStore(Calc_ConstraintStoreData self, Nmrc_NmrConstraintStore value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNmrConstraintStore");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: cannot find method 'setNmrConstraintStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: method 'setNmrConstraintStore' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_ConstraintStoreData self
  @param  ApiSet values
**/
void *Calc_ConstraintStoreData_SetRunParameters(Calc_ConstraintStoreData self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRunParameters");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: cannot find method 'setRunParameters'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: method 'setRunParameters' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrCalc.Data.serial

Serial number of object. Serves as 
object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Calc_ConstraintStoreData self
  @param  ApiInteger value
**/
void *Calc_ConstraintStoreData_SetSerial(Calc_ConstraintStoreData self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrCalc.Data.weight

Weight given to data
  @param  Calc_ConstraintStoreData self
  @param  ApiFloat value
**/
void *Calc_ConstraintStoreData_SetWeight(Calc_ConstraintStoreData self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setWeight");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: cannot find method 'setWeight'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: method 'setWeight' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_ConstraintStoreData self
  @returns   the result
**/
ApiList Calc_ConstraintStoreData_SortedRunParameters(Calc_ConstraintStoreData self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedRunParameters");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: cannot find method 'sortedRunParameters'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.ConstraintStoreData: method 'sortedRunParameters' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
