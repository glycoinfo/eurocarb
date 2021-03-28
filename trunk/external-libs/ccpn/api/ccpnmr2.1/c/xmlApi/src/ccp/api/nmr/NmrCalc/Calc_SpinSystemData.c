
#include "ccp.h"

/*
  Nmr.SpinSystem data for calculations
*/

/* package ccp.api.nmr.NmrCalc */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_SpinSystemData self
  @param  Impl_ApplicationData value
**/
void *Calc_SpinSystemData_AddApplicationData(Calc_SpinSystemData self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: method 'addApplicationData' is not callable");
  
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
  @param  Calc_SpinSystemData self
  @param  Calc_RunParameter value
**/
void *Calc_SpinSystemData_AddRunParameter(Calc_SpinSystemData self, Calc_RunParameter value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addRunParameter");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: cannot find method 'addRunParameter'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: method 'addRunParameter' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.nmr.NmrCalc.SpinSystemData
  @param  Calc_SpinSystemData self
  @param  ApiBoolean complete
**/
void *Calc_SpinSystemData_CheckAllValid(Calc_SpinSystemData self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.nmr.NmrCalc.SpinSystemData
  @param  Calc_SpinSystemData self
  @param  ApiBoolean complete
**/
void *Calc_SpinSystemData_CheckValid(Calc_SpinSystemData self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: method 'checkValid' is not callable");
  
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
  @param  Calc_SpinSystemData self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Calc_SpinSystemData_FindAllApplicationData(Calc_SpinSystemData self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: method 'findAllApplicationData' is not callable");
  
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
  @param  Calc_SpinSystemData self
  @returns  all value that satisfy the conditions 
**/
ApiList Calc_SpinSystemData_FindAllApplicationData_keyval0(Calc_SpinSystemData self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Calc_SpinSystemData_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_SpinSystemData self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Calc_SpinSystemData_FindAllApplicationData_keyval1(Calc_SpinSystemData self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Calc_SpinSystemData_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_SpinSystemData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Calc_SpinSystemData_FindAllApplicationData_keyval2(Calc_SpinSystemData self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Calc_SpinSystemData_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_SpinSystemData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Calc_SpinSystemData_FindAllApplicationData_keyval3(Calc_SpinSystemData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Calc_SpinSystemData_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_SpinSystemData self
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
ApiList Calc_SpinSystemData_FindAllApplicationData_keyval4(Calc_SpinSystemData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Calc_SpinSystemData_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_SpinSystemData self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Calc_SpinSystemData_FindAllRunParameters(Calc_SpinSystemData self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllRunParameters");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: cannot find method 'findAllRunParameters'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: method 'findAllRunParameters' is not callable");
  
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
  @param  Calc_SpinSystemData self
  @returns  all value that satisfy the conditions 
**/
ApiSet Calc_SpinSystemData_FindAllRunParameters_keyval0(Calc_SpinSystemData self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Calc_SpinSystemData_FindAllRunParameters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_SpinSystemData self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Calc_SpinSystemData_FindAllRunParameters_keyval1(Calc_SpinSystemData self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Calc_SpinSystemData_FindAllRunParameters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_SpinSystemData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Calc_SpinSystemData_FindAllRunParameters_keyval2(Calc_SpinSystemData self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Calc_SpinSystemData_FindAllRunParameters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_SpinSystemData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Calc_SpinSystemData_FindAllRunParameters_keyval3(Calc_SpinSystemData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Calc_SpinSystemData_FindAllRunParameters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer to 
unit of data.
  @param  Calc_SpinSystemData self
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
ApiSet Calc_SpinSystemData_FindAllRunParameters_keyval4(Calc_SpinSystemData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Calc_SpinSystemData_FindAllRunParameters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_SpinSystemData self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Calc_SpinSystemData_FindFirstApplicationData(Calc_SpinSystemData self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: method 'findFirstApplicationData' is not callable");
  
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
  @param  Calc_SpinSystemData self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Calc_SpinSystemData_FindFirstApplicationData_keyval0(Calc_SpinSystemData self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Calc_SpinSystemData_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_SpinSystemData self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Calc_SpinSystemData_FindFirstApplicationData_keyval1(Calc_SpinSystemData self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Calc_SpinSystemData_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_SpinSystemData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Calc_SpinSystemData_FindFirstApplicationData_keyval2(Calc_SpinSystemData self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Calc_SpinSystemData_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_SpinSystemData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Calc_SpinSystemData_FindFirstApplicationData_keyval3(Calc_SpinSystemData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Calc_SpinSystemData_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_SpinSystemData self
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
Impl_ApplicationData Calc_SpinSystemData_FindFirstApplicationData_keyval4(Calc_SpinSystemData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Calc_SpinSystemData_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer 
to unit of data.
  @param  Calc_SpinSystemData self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Calc_RunParameter Calc_SpinSystemData_FindFirstRunParameter(Calc_SpinSystemData self, ApiMap conditions)
{
  
  Calc_RunParameter obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstRunParameter");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: cannot find method 'findFirstRunParameter'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: method 'findFirstRunParameter' is not callable");
  
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
  @param  Calc_SpinSystemData self
  @returns  the first value that satisfies the conditions 
**/
Calc_RunParameter Calc_SpinSystemData_FindFirstRunParameter_keyval0(Calc_SpinSystemData self)
{
  
  Calc_RunParameter  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Calc_SpinSystemData_FindFirstRunParameter(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer 
to unit of data.
  @param  Calc_SpinSystemData self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Calc_RunParameter Calc_SpinSystemData_FindFirstRunParameter_keyval1(Calc_SpinSystemData self, char * key, ApiObject value)
{
  
  Calc_RunParameter  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Calc_SpinSystemData_FindFirstRunParameter(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer 
to unit of data.
  @param  Calc_SpinSystemData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Calc_RunParameter Calc_SpinSystemData_FindFirstRunParameter_keyval2(Calc_SpinSystemData self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Calc_RunParameter  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Calc_SpinSystemData_FindFirstRunParameter(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer 
to unit of data.
  @param  Calc_SpinSystemData self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Calc_RunParameter Calc_SpinSystemData_FindFirstRunParameter_keyval3(Calc_SpinSystemData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Calc_RunParameter  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Calc_SpinSystemData_FindFirstRunParameter(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrCalc.Data.runParameters

parameters that refer 
to unit of data.
  @param  Calc_SpinSystemData self
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
Calc_RunParameter Calc_SpinSystemData_FindFirstRunParameter_keyval4(Calc_SpinSystemData self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Calc_RunParameter  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Calc_SpinSystemData_FindFirstRunParameter(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.nmr.NmrCalc.SpinSystemData
  @param  Calc_SpinSystemData self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Calc_SpinSystemData_Get(Calc_SpinSystemData self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Calc_SpinSystemData self
  @returns   the result
**/
Acco_AccessObject Calc_SpinSystemData_GetAccess(Calc_SpinSystemData self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: method 'getAccess' is not callable");
  
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
  @param  Calc_SpinSystemData self
  @returns   the result
**/
Acco_AccessObject Calc_SpinSystemData_GetActiveAccess(Calc_SpinSystemData self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: method 'getActiveAccess' is not callable");
  
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
  @param  Calc_SpinSystemData self
  @returns   the result
**/
ApiList Calc_SpinSystemData_GetApplicationData(Calc_SpinSystemData self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.NmrCalc.SpinSystemData
  @param  Calc_SpinSystemData self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Calc_SpinSystemData Calc_SpinSystemData_GetByKey(Calc_SpinSystemData self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Calc_SpinSystemData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: method 'getByKey' is not callable");
  
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
  @param  Calc_SpinSystemData self
  @returns   the result
**/
ApiString Calc_SpinSystemData_GetClassName(Calc_SpinSystemData self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: method 'getClassName' is not callable");
  
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
  @param  Calc_SpinSystemData self
  @returns   the result
**/
ApiString Calc_SpinSystemData_GetDetails(Calc_SpinSystemData self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: method 'getDetails' is not callable");
  
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
  @param  Calc_SpinSystemData self
  @returns   the result
**/
ApiList Calc_SpinSystemData_GetFieldNames(Calc_SpinSystemData self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: method 'getFieldNames' is not callable");
  
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
  @param  Calc_SpinSystemData self
  @returns   the result
**/
ApiBoolean Calc_SpinSystemData_GetInConstructor(Calc_SpinSystemData self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: method 'getInConstructor' is not callable");
  
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
  @param  Calc_SpinSystemData self
  @returns   the result
**/
ApiString Calc_SpinSystemData_GetIoRole(Calc_SpinSystemData self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIoRole");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: cannot find method 'getIoRole'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: method 'getIoRole' is not callable");
  
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
  @param  Calc_SpinSystemData self
  @returns   the result
**/
ApiBoolean Calc_SpinSystemData_GetIsDeleted(Calc_SpinSystemData self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrCalc.Data.name

name identifying data
  @param  Calc_SpinSystemData self
  @returns   the result
**/
ApiString Calc_SpinSystemData_GetName(Calc_SpinSystemData self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: method 'getName' is not callable");
  
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
  @param  Calc_SpinSystemData self
  @returns   the result
**/
ApiString Calc_SpinSystemData_GetPackageName(Calc_SpinSystemData self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: method 'getPackageName' is not callable");
  
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
  @param  Calc_SpinSystemData self
  @returns   the result
**/
ApiString Calc_SpinSystemData_GetPackageShortName(Calc_SpinSystemData self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: method 'getPackageShortName' is not callable");
  
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
  @param  Calc_SpinSystemData self
  @returns   the result
**/
Calc_Run Calc_SpinSystemData_GetParent(Calc_SpinSystemData self)
{
  
  Calc_Run obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: method 'getParent' is not callable");
  
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
  @param  Calc_SpinSystemData self
  @returns   the result
**/
ApiString Calc_SpinSystemData_GetQualifiedName(Calc_SpinSystemData self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived link resonanceGroup
  @param  Calc_SpinSystemData self
  @returns   the result
**/
Nmr_ResonanceGroup Calc_SpinSystemData_GetResonanceGroup(Calc_SpinSystemData self)
{
  
  Nmr_ResonanceGroup obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getResonanceGroup");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: cannot find method 'getResonanceGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: method 'getResonanceGroup' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrCalc.SpinSystemData.resonanceGroupSerial

Serial 
number of Resonance group - used to derive actual object.
  @param  Calc_SpinSystemData self
  @returns   the result
**/
ApiInteger Calc_SpinSystemData_GetResonanceGroupSerial(Calc_SpinSystemData self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getResonanceGroupSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: cannot find method 'getResonanceGroupSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: method 'getResonanceGroupSerial' is not callable");
  
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
  @param  Calc_SpinSystemData self
  @returns   the result
**/
Impl_MemopsRoot Calc_SpinSystemData_GetRoot(Calc_SpinSystemData self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrCalc.Data.run

parent link
  @param  Calc_SpinSystemData self
  @returns   the result
**/
Calc_Run Calc_SpinSystemData_GetRun(Calc_SpinSystemData self)
{
  
  Calc_Run obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRun");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: cannot find method 'getRun'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: method 'getRun' is not callable");
  
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
  @param  Calc_SpinSystemData self
  @returns   the result
**/
ApiSet Calc_SpinSystemData_GetRunParameters(Calc_SpinSystemData self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRunParameters");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: cannot find method 'getRunParameters'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: method 'getRunParameters' is not callable");
  
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
  @param  Calc_SpinSystemData self
  @returns   the result
**/
ApiInteger Calc_SpinSystemData_GetSerial(Calc_SpinSystemData self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: method 'getSerial' is not callable");
  
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
  @param  Calc_SpinSystemData self
  @returns   the result
**/
Impl_TopObject Calc_SpinSystemData_GetTopObject(Calc_SpinSystemData self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrCalc.Data.weight

Weight given to data
  @param  Calc_SpinSystemData self
  @returns   the result
**/
ApiFloat Calc_SpinSystemData_GetWeight(Calc_SpinSystemData self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getWeight");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: cannot find method 'getWeight'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: method 'getWeight' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.nmr.NmrCalc.SpinSystemData
  @param  Calc_Run parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Calc_SpinSystemData Calc_SpinSystemData_Init(Calc_Run parent, ApiMap attrlinks)
{
  
  return Calc_Run_NewSpinSystemData(parent, attrlinks);
}

/**
  Constructor for ccp.nmr.NmrCalc.SpinSystemData
  @param  Calc_Run parent
  @param  ApiInteger resonanceGroupSerial
  @returns  the new object
**/
Calc_SpinSystemData Calc_SpinSystemData_Init_reqd(Calc_Run parent, ApiInteger resonanceGroupSerial)
{
  
  Calc_SpinSystemData  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "resonanceGroupSerial", resonanceGroupSerial);
  
  obj = Calc_SpinSystemData_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Calc_SpinSystemData self
  @param  Impl_ApplicationData value
**/
void *Calc_SpinSystemData_RemoveApplicationData(Calc_SpinSystemData self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: method 'removeApplicationData' is not callable");
  
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
  @param  Calc_SpinSystemData self
  @param  Calc_RunParameter value
**/
void *Calc_SpinSystemData_RemoveRunParameter(Calc_SpinSystemData self, Calc_RunParameter value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeRunParameter");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: cannot find method 'removeRunParameter'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: method 'removeRunParameter' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.nmr.NmrCalc.SpinSystemData
  @param  Calc_SpinSystemData self
  @param  ApiString name
  @param  ApiObject value
**/
void *Calc_SpinSystemData_Set(Calc_SpinSystemData self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Calc_SpinSystemData self
  @param  Acco_AccessObject value
**/
void *Calc_SpinSystemData_SetAccess(Calc_SpinSystemData self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: method 'setAccess' is not callable");
  
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
  @param  Calc_SpinSystemData self
  @param  ApiList values
**/
void *Calc_SpinSystemData_SetApplicationData(Calc_SpinSystemData self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrCalc.Data.details

Free text, for notes, explanatory 
comments, etc.
  @param  Calc_SpinSystemData self
  @param  ApiString value
**/
void *Calc_SpinSystemData_SetDetails(Calc_SpinSystemData self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: method 'setDetails' is not callable");
  
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
  @param  Calc_SpinSystemData self
  @param  ApiString value
**/
void *Calc_SpinSystemData_SetIoRole(Calc_SpinSystemData self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIoRole");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: cannot find method 'setIoRole'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: method 'setIoRole' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrCalc.Data.name

name identifying data
  @param  Calc_SpinSystemData self
  @param  ApiString value
**/
void *Calc_SpinSystemData_SetName(Calc_SpinSystemData self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  setter for derived link resonanceGroup
  @param  Calc_SpinSystemData self
  @param  Nmr_ResonanceGroup value
**/
void *Calc_SpinSystemData_SetResonanceGroup(Calc_SpinSystemData self, Nmr_ResonanceGroup value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setResonanceGroup");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: cannot find method 'setResonanceGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: method 'setResonanceGroup' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrCalc.SpinSystemData.resonanceGroupSerial

Serial 
number of Resonance group - used to derive actual object.
  @param  Calc_SpinSystemData self
  @param  ApiInteger value
**/
void *Calc_SpinSystemData_SetResonanceGroupSerial(Calc_SpinSystemData self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setResonanceGroupSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: cannot find method 'setResonanceGroupSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: method 'setResonanceGroupSerial' is not callable");
  
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
  @param  Calc_SpinSystemData self
  @param  ApiSet values
**/
void *Calc_SpinSystemData_SetRunParameters(Calc_SpinSystemData self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRunParameters");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: cannot find method 'setRunParameters'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: method 'setRunParameters' is not callable");
  
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
  @param  Calc_SpinSystemData self
  @param  ApiInteger value
**/
void *Calc_SpinSystemData_SetSerial(Calc_SpinSystemData self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrCalc.Data.weight

Weight given to data
  @param  Calc_SpinSystemData self
  @param  ApiFloat value
**/
void *Calc_SpinSystemData_SetWeight(Calc_SpinSystemData self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setWeight");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: cannot find method 'setWeight'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: method 'setWeight' is not callable");
  
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
  @param  Calc_SpinSystemData self
  @returns   the result
**/
ApiList Calc_SpinSystemData_SortedRunParameters(Calc_SpinSystemData self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedRunParameters");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: cannot find method 'sortedRunParameters'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrCalc.SpinSystemData: method 'sortedRunParameters' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
