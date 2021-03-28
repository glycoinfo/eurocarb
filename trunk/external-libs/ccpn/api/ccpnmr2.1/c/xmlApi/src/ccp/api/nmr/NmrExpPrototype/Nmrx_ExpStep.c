
#include "ccp.h"

/*
  Defines the order in which Measurements are encountered within a (non-reversed) experiment, and, implicitly, which ExpMeasurements are involved in a given ExpGraph. The same measurement can appear several times, e.g. for out-and-back experiments.
*/

/* package ccp.api.nmr.NmrExpPrototype */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpStep self
  @param  Impl_ApplicationData value
**/
void *Nmrx_ExpStep_AddApplicationData(Nmrx_ExpStep self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.NmrExpPrototype.ExpStep.refExpDimRefs

RefExpDimRefs 
that correspond to ExpStep
  @param  Nmrx_ExpStep self
  @param  Nmrx_RefExpDimRef value
**/
void *Nmrx_ExpStep_AddRefExpDimRef(Nmrx_ExpStep self, Nmrx_RefExpDimRef value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addRefExpDimRef");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: cannot find method 'addRefExpDimRef'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: method 'addRefExpDimRef' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.nmr.NmrExpPrototype.ExpStep
  @param  Nmrx_ExpStep self
  @param  ApiBoolean complete
**/
void *Nmrx_ExpStep_CheckAllValid(Nmrx_ExpStep self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.nmr.NmrExpPrototype.ExpStep
  @param  Nmrx_ExpStep self
  @param  ApiBoolean complete
**/
void *Nmrx_ExpStep_CheckValid(Nmrx_ExpStep self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: method 'checkValid' is not callable");
  
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
  @param  Nmrx_ExpStep self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrx_ExpStep_FindAllApplicationData(Nmrx_ExpStep self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: method 'findAllApplicationData' is not callable");
  
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
  @param  Nmrx_ExpStep self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrx_ExpStep_FindAllApplicationData_keyval0(Nmrx_ExpStep self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrx_ExpStep_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpStep self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrx_ExpStep_FindAllApplicationData_keyval1(Nmrx_ExpStep self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrx_ExpStep_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrx_ExpStep_FindAllApplicationData_keyval2(Nmrx_ExpStep self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrx_ExpStep_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrx_ExpStep_FindAllApplicationData_keyval3(Nmrx_ExpStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrx_ExpStep_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpStep self
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
ApiList Nmrx_ExpStep_FindAllApplicationData_keyval4(Nmrx_ExpStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrx_ExpStep_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpStep.refExpDimRefs

RefExpDimRefs 
that correspond to ExpStep
  @param  Nmrx_ExpStep self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_ExpStep_FindAllRefExpDimRefs(Nmrx_ExpStep self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllRefExpDimRefs");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: cannot find method 'findAllRefExpDimRefs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: method 'findAllRefExpDimRefs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpStep.refExpDimRefs

RefExpDimRefs 
that correspond to ExpStep
  @param  Nmrx_ExpStep self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_ExpStep_FindAllRefExpDimRefs_keyval0(Nmrx_ExpStep self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrx_ExpStep_FindAllRefExpDimRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpStep.refExpDimRefs

RefExpDimRefs 
that correspond to ExpStep
  @param  Nmrx_ExpStep self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_ExpStep_FindAllRefExpDimRefs_keyval1(Nmrx_ExpStep self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrx_ExpStep_FindAllRefExpDimRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpStep.refExpDimRefs

RefExpDimRefs 
that correspond to ExpStep
  @param  Nmrx_ExpStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_ExpStep_FindAllRefExpDimRefs_keyval2(Nmrx_ExpStep self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrx_ExpStep_FindAllRefExpDimRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpStep.refExpDimRefs

RefExpDimRefs 
that correspond to ExpStep
  @param  Nmrx_ExpStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_ExpStep_FindAllRefExpDimRefs_keyval3(Nmrx_ExpStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrx_ExpStep_FindAllRefExpDimRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpStep.refExpDimRefs

RefExpDimRefs 
that correspond to ExpStep
  @param  Nmrx_ExpStep self
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
ApiSet Nmrx_ExpStep_FindAllRefExpDimRefs_keyval4(Nmrx_ExpStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrx_ExpStep_FindAllRefExpDimRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpStep self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrx_ExpStep_FindFirstApplicationData(Nmrx_ExpStep self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nmrx_ExpStep self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrx_ExpStep_FindFirstApplicationData_keyval0(Nmrx_ExpStep self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrx_ExpStep_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpStep self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrx_ExpStep_FindFirstApplicationData_keyval1(Nmrx_ExpStep self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrx_ExpStep_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrx_ExpStep_FindFirstApplicationData_keyval2(Nmrx_ExpStep self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrx_ExpStep_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrx_ExpStep_FindFirstApplicationData_keyval3(Nmrx_ExpStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrx_ExpStep_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpStep self
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
Impl_ApplicationData Nmrx_ExpStep_FindFirstApplicationData_keyval4(Nmrx_ExpStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrx_ExpStep_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.ExpStep.refExpDimRefs

RefExpDimRefs that 
correspond to ExpStep
  @param  Nmrx_ExpStep self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmrx_RefExpDimRef Nmrx_ExpStep_FindFirstRefExpDimRef(Nmrx_ExpStep self, ApiMap conditions)
{
  
  Nmrx_RefExpDimRef obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstRefExpDimRef");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: cannot find method 'findFirstRefExpDimRef'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: method 'findFirstRefExpDimRef' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.ExpStep.refExpDimRefs

RefExpDimRefs that 
correspond to ExpStep
  @param  Nmrx_ExpStep self
  @returns  the first value that satisfies the conditions 
**/
Nmrx_RefExpDimRef Nmrx_ExpStep_FindFirstRefExpDimRef_keyval0(Nmrx_ExpStep self)
{
  
  Nmrx_RefExpDimRef  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrx_ExpStep_FindFirstRefExpDimRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.ExpStep.refExpDimRefs

RefExpDimRefs that 
correspond to ExpStep
  @param  Nmrx_ExpStep self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmrx_RefExpDimRef Nmrx_ExpStep_FindFirstRefExpDimRef_keyval1(Nmrx_ExpStep self, char * key, ApiObject value)
{
  
  Nmrx_RefExpDimRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrx_ExpStep_FindFirstRefExpDimRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.ExpStep.refExpDimRefs

RefExpDimRefs that 
correspond to ExpStep
  @param  Nmrx_ExpStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmrx_RefExpDimRef Nmrx_ExpStep_FindFirstRefExpDimRef_keyval2(Nmrx_ExpStep self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmrx_RefExpDimRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrx_ExpStep_FindFirstRefExpDimRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.ExpStep.refExpDimRefs

RefExpDimRefs that 
correspond to ExpStep
  @param  Nmrx_ExpStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmrx_RefExpDimRef Nmrx_ExpStep_FindFirstRefExpDimRef_keyval3(Nmrx_ExpStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmrx_RefExpDimRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrx_ExpStep_FindFirstRefExpDimRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.ExpStep.refExpDimRefs

RefExpDimRefs that 
correspond to ExpStep
  @param  Nmrx_ExpStep self
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
Nmrx_RefExpDimRef Nmrx_ExpStep_FindFirstRefExpDimRef_keyval4(Nmrx_ExpStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmrx_RefExpDimRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrx_ExpStep_FindFirstRefExpDimRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.nmr.NmrExpPrototype.ExpStep
  @param  Nmrx_ExpStep self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Nmrx_ExpStep_Get(Nmrx_ExpStep self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrx_ExpStep self
  @returns   the result
**/
Acco_AccessObject Nmrx_ExpStep_GetAccess(Nmrx_ExpStep self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: method 'getAccess' is not callable");
  
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
  @param  Nmrx_ExpStep self
  @returns   the result
**/
Acco_AccessObject Nmrx_ExpStep_GetActiveAccess(Nmrx_ExpStep self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: method 'getActiveAccess' is not callable");
  
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
  @param  Nmrx_ExpStep self
  @returns   the result
**/
ApiList Nmrx_ExpStep_GetApplicationData(Nmrx_ExpStep self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.NmrExpPrototype.ExpStep
  @param  Nmrx_ExpStep self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nmrx_ExpStep Nmrx_ExpStep_GetByKey(Nmrx_ExpStep self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Nmrx_ExpStep obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: method 'getByKey' is not callable");
  
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
  @param  Nmrx_ExpStep self
  @returns   the result
**/
ApiString Nmrx_ExpStep_GetClassName(Nmrx_ExpStep self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrExpPrototype.ExpStep.expGraph

parent link
  @param  Nmrx_ExpStep self
  @returns   the result
**/
Nmrx_ExpGraph Nmrx_ExpStep_GetExpGraph(Nmrx_ExpStep self)
{
  
  Nmrx_ExpGraph obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExpGraph");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: cannot find method 'getExpGraph'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: method 'getExpGraph' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrExpPrototype.ExpStep.expMeasurement

ExpMeasurements 
being accesed during ExpStep. Several ExpSteps, either successive or at 
different place in the transfer sequence, may point to the same 
Measurement.
  @param  Nmrx_ExpStep self
  @returns   the result
**/
Nmrx_ExpMeasurement Nmrx_ExpStep_GetExpMeasurement(Nmrx_ExpStep self)
{
  
  Nmrx_ExpMeasurement obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExpMeasurement");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: cannot find method 'getExpMeasurement'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: method 'getExpMeasurement' is not callable");
  
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
  @param  Nmrx_ExpStep self
  @returns   the result
**/
ApiList Nmrx_ExpStep_GetFieldNames(Nmrx_ExpStep self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.nmr.NmrExpPrototype.ExpStep
  @param  Nmrx_ExpStep self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Nmrx_ExpStep_GetFullKey(Nmrx_ExpStep self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: method 'getFullKey' is not callable");
  
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
  @param  Nmrx_ExpStep self
  @returns   the result
**/
ApiBoolean Nmrx_ExpStep_GetInConstructor(Nmrx_ExpStep self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: method 'getInConstructor' is not callable");
  
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
  @param  Nmrx_ExpStep self
  @returns   the result
**/
ApiBoolean Nmrx_ExpStep_GetIsDeleted(Nmrx_ExpStep self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.nmr.NmrExpPrototype.ExpStep
  @param  Nmrx_ExpStep self
  @returns  Local object key
**/
ApiObject Nmrx_ExpStep_GetLocalKey(Nmrx_ExpStep self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: method 'getLocalKey' is not callable");
  
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
  @param  Nmrx_ExpStep self
  @returns   the result
**/
ApiString Nmrx_ExpStep_GetPackageName(Nmrx_ExpStep self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: method 'getPackageName' is not callable");
  
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
  @param  Nmrx_ExpStep self
  @returns   the result
**/
ApiString Nmrx_ExpStep_GetPackageShortName(Nmrx_ExpStep self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrExpPrototype.ExpStep.parent

link to parent object - 
synonym for expGraph
  @param  Nmrx_ExpStep self
  @returns   the result
**/
Nmrx_ExpGraph Nmrx_ExpStep_GetParent(Nmrx_ExpStep self)
{
  
  Nmrx_ExpGraph obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: method 'getParent' is not callable");
  
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
  @param  Nmrx_ExpStep self
  @returns   the result
**/
ApiString Nmrx_ExpStep_GetQualifiedName(Nmrx_ExpStep self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrExpPrototype.ExpStep.refExpDimRefs

RefExpDimRefs 
that correspond to ExpStep
  @param  Nmrx_ExpStep self
  @returns   the result
**/
ApiSet Nmrx_ExpStep_GetRefExpDimRefs(Nmrx_ExpStep self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRefExpDimRefs");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: cannot find method 'getRefExpDimRefs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: method 'getRefExpDimRefs' is not callable");
  
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
  @param  Nmrx_ExpStep self
  @returns   the result
**/
Impl_MemopsRoot Nmrx_ExpStep_GetRoot(Nmrx_ExpStep self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrExpPrototype.ExpStep.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Nmrx_ExpStep self
  @returns   the result
**/
ApiInteger Nmrx_ExpStep_GetSerial(Nmrx_ExpStep self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: method 'getSerial' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrExpPrototype.ExpStep.stepNumber

Step number. Should 
be consecutive integers starting at 1.
  @param  Nmrx_ExpStep self
  @returns   the result
**/
ApiInteger Nmrx_ExpStep_GetStepNumber(Nmrx_ExpStep self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getStepNumber");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: cannot find method 'getStepNumber'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: method 'getStepNumber' is not callable");
  
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
  @param  Nmrx_ExpStep self
  @returns   the result
**/
Impl_TopObject Nmrx_ExpStep_GetTopObject(Nmrx_ExpStep self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.nmr.NmrExpPrototype.ExpStep
  @param  Nmrx_ExpGraph parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmrx_ExpStep Nmrx_ExpStep_Init(Nmrx_ExpGraph parent, ApiMap attrlinks)
{
  
  return Nmrx_ExpGraph_NewExpStep(parent, attrlinks);
}

/**
  Constructor for ccp.nmr.NmrExpPrototype.ExpStep
  @param  Nmrx_ExpGraph parent
  @param  Nmrx_ExpMeasurement expMeasurement
  @param  ApiInteger stepNumber
  @returns  the new object
**/
Nmrx_ExpStep Nmrx_ExpStep_Init_reqd(Nmrx_ExpGraph parent, Nmrx_ExpMeasurement expMeasurement, ApiInteger stepNumber)
{
  
  Nmrx_ExpStep  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "expMeasurement", expMeasurement);
  PyDict_SetItemString(attrlinks, "stepNumber", stepNumber);
  
  obj = Nmrx_ExpStep_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpStep self
  @param  Impl_ApplicationData value
**/
void *Nmrx_ExpStep_RemoveApplicationData(Nmrx_ExpStep self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.NmrExpPrototype.ExpStep.refExpDimRefs

RefExpDimRefs 
that correspond to ExpStep
  @param  Nmrx_ExpStep self
  @param  Nmrx_RefExpDimRef value
**/
void *Nmrx_ExpStep_RemoveRefExpDimRef(Nmrx_ExpStep self, Nmrx_RefExpDimRef value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeRefExpDimRef");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: cannot find method 'removeRefExpDimRef'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: method 'removeRefExpDimRef' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.nmr.NmrExpPrototype.ExpStep
  @param  Nmrx_ExpStep self
  @param  ApiString name
  @param  ApiObject value
**/
void *Nmrx_ExpStep_Set(Nmrx_ExpStep self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrx_ExpStep self
  @param  Acco_AccessObject value
**/
void *Nmrx_ExpStep_SetAccess(Nmrx_ExpStep self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: method 'setAccess' is not callable");
  
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
  @param  Nmrx_ExpStep self
  @param  ApiList values
**/
void *Nmrx_ExpStep_SetApplicationData(Nmrx_ExpStep self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrExpPrototype.ExpStep.expMeasurement

ExpMeasurements 
being accesed during ExpStep. Several ExpSteps, either successive or at 
different place in the transfer sequence, may point to the same 
Measurement.
  @param  Nmrx_ExpStep self
  @param  Nmrx_ExpMeasurement value
**/
void *Nmrx_ExpStep_SetExpMeasurement(Nmrx_ExpStep self, Nmrx_ExpMeasurement value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setExpMeasurement");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: cannot find method 'setExpMeasurement'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: method 'setExpMeasurement' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrExpPrototype.ExpStep.refExpDimRefs

RefExpDimRefs 
that correspond to ExpStep
  @param  Nmrx_ExpStep self
  @param  ApiSet values
**/
void *Nmrx_ExpStep_SetRefExpDimRefs(Nmrx_ExpStep self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRefExpDimRefs");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: cannot find method 'setRefExpDimRefs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: method 'setRefExpDimRefs' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrExpPrototype.ExpStep.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Nmrx_ExpStep self
  @param  ApiInteger value
**/
void *Nmrx_ExpStep_SetSerial(Nmrx_ExpStep self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrExpPrototype.ExpStep.stepNumber

Step number. Should 
be consecutive integers starting at 1.
  @param  Nmrx_ExpStep self
  @param  ApiInteger value
**/
void *Nmrx_ExpStep_SetStepNumber(Nmrx_ExpStep self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setStepNumber");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: cannot find method 'setStepNumber'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: method 'setStepNumber' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.NmrExpPrototype.ExpStep.refExpDimRefs

RefExpDimRefs 
that correspond to ExpStep
  @param  Nmrx_ExpStep self
  @returns   the result
**/
ApiList Nmrx_ExpStep_SortedRefExpDimRefs(Nmrx_ExpStep self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedRefExpDimRefs");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: cannot find method 'sortedRefExpDimRefs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpStep: method 'sortedRefExpDimRefs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
