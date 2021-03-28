
#include "ccp.h"

/*
  Describes transfer of magnetisation between two ExpDimRef belonging to different ExpDim of the same Experiment.
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpTransfer self
  @param  Impl_ApplicationData value
**/
void *Nmr_ExpTransfer_AddApplicationData(Nmr_ExpTransfer self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.nmr.Nmr.ExpTransfer
  @param  Nmr_ExpTransfer self
  @param  ApiBoolean complete
**/
void *Nmr_ExpTransfer_CheckAllValid(Nmr_ExpTransfer self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.nmr.Nmr.ExpTransfer
  @param  Nmr_ExpTransfer self
  @param  ApiBoolean complete
**/
void *Nmr_ExpTransfer_CheckValid(Nmr_ExpTransfer self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: method 'checkValid' is not callable");
  
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
  @param  Nmr_ExpTransfer self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_ExpTransfer_FindAllApplicationData(Nmr_ExpTransfer self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: method 'findAllApplicationData' is not callable");
  
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
  @param  Nmr_ExpTransfer self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_ExpTransfer_FindAllApplicationData_keyval0(Nmr_ExpTransfer self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ExpTransfer_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpTransfer self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_ExpTransfer_FindAllApplicationData_keyval1(Nmr_ExpTransfer self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ExpTransfer_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpTransfer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_ExpTransfer_FindAllApplicationData_keyval2(Nmr_ExpTransfer self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ExpTransfer_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpTransfer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_ExpTransfer_FindAllApplicationData_keyval3(Nmr_ExpTransfer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ExpTransfer_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpTransfer self
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
ApiList Nmr_ExpTransfer_FindAllApplicationData_keyval4(Nmr_ExpTransfer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ExpTransfer_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ExpTransfer.expDimRefs

ExpDimRefs betwen which 
magentisation is transferred
  @param  Nmr_ExpTransfer self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ExpTransfer_FindAllExpDimRefs(Nmr_ExpTransfer self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllExpDimRefs");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: cannot find method 'findAllExpDimRefs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: method 'findAllExpDimRefs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ExpTransfer.expDimRefs

ExpDimRefs betwen which 
magentisation is transferred
  @param  Nmr_ExpTransfer self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ExpTransfer_FindAllExpDimRefs_keyval0(Nmr_ExpTransfer self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ExpTransfer_FindAllExpDimRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ExpTransfer.expDimRefs

ExpDimRefs betwen which 
magentisation is transferred
  @param  Nmr_ExpTransfer self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ExpTransfer_FindAllExpDimRefs_keyval1(Nmr_ExpTransfer self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ExpTransfer_FindAllExpDimRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ExpTransfer.expDimRefs

ExpDimRefs betwen which 
magentisation is transferred
  @param  Nmr_ExpTransfer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ExpTransfer_FindAllExpDimRefs_keyval2(Nmr_ExpTransfer self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ExpTransfer_FindAllExpDimRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ExpTransfer.expDimRefs

ExpDimRefs betwen which 
magentisation is transferred
  @param  Nmr_ExpTransfer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ExpTransfer_FindAllExpDimRefs_keyval3(Nmr_ExpTransfer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ExpTransfer_FindAllExpDimRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ExpTransfer.expDimRefs

ExpDimRefs betwen which 
magentisation is transferred
  @param  Nmr_ExpTransfer self
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
ApiSet Nmr_ExpTransfer_FindAllExpDimRefs_keyval4(Nmr_ExpTransfer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ExpTransfer_FindAllExpDimRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpTransfer self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_ExpTransfer_FindFirstApplicationData(Nmr_ExpTransfer self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nmr_ExpTransfer self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_ExpTransfer_FindFirstApplicationData_keyval0(Nmr_ExpTransfer self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ExpTransfer_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpTransfer self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_ExpTransfer_FindFirstApplicationData_keyval1(Nmr_ExpTransfer self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ExpTransfer_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpTransfer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_ExpTransfer_FindFirstApplicationData_keyval2(Nmr_ExpTransfer self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ExpTransfer_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpTransfer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_ExpTransfer_FindFirstApplicationData_keyval3(Nmr_ExpTransfer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ExpTransfer_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpTransfer self
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
Impl_ApplicationData Nmr_ExpTransfer_FindFirstApplicationData_keyval4(Nmr_ExpTransfer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ExpTransfer_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ExpTransfer.expDimRefs

ExpDimRefs betwen 
which magentisation is transferred
  @param  Nmr_ExpTransfer self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_ExpDimRef Nmr_ExpTransfer_FindFirstExpDimRef(Nmr_ExpTransfer self, ApiMap conditions)
{
  
  Nmr_ExpDimRef obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstExpDimRef");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: cannot find method 'findFirstExpDimRef'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: method 'findFirstExpDimRef' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ExpTransfer.expDimRefs

ExpDimRefs betwen 
which magentisation is transferred
  @param  Nmr_ExpTransfer self
  @returns  the first value that satisfies the conditions 
**/
Nmr_ExpDimRef Nmr_ExpTransfer_FindFirstExpDimRef_keyval0(Nmr_ExpTransfer self)
{
  
  Nmr_ExpDimRef  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ExpTransfer_FindFirstExpDimRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ExpTransfer.expDimRefs

ExpDimRefs betwen 
which magentisation is transferred
  @param  Nmr_ExpTransfer self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_ExpDimRef Nmr_ExpTransfer_FindFirstExpDimRef_keyval1(Nmr_ExpTransfer self, char * key, ApiObject value)
{
  
  Nmr_ExpDimRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ExpTransfer_FindFirstExpDimRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ExpTransfer.expDimRefs

ExpDimRefs betwen 
which magentisation is transferred
  @param  Nmr_ExpTransfer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_ExpDimRef Nmr_ExpTransfer_FindFirstExpDimRef_keyval2(Nmr_ExpTransfer self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_ExpDimRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ExpTransfer_FindFirstExpDimRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ExpTransfer.expDimRefs

ExpDimRefs betwen 
which magentisation is transferred
  @param  Nmr_ExpTransfer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_ExpDimRef Nmr_ExpTransfer_FindFirstExpDimRef_keyval3(Nmr_ExpTransfer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_ExpDimRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ExpTransfer_FindFirstExpDimRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ExpTransfer.expDimRefs

ExpDimRefs betwen 
which magentisation is transferred
  @param  Nmr_ExpTransfer self
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
Nmr_ExpDimRef Nmr_ExpTransfer_FindFirstExpDimRef_keyval4(Nmr_ExpTransfer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_ExpDimRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ExpTransfer_FindFirstExpDimRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.nmr.Nmr.ExpTransfer
  @param  Nmr_ExpTransfer self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Nmr_ExpTransfer_Get(Nmr_ExpTransfer self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_ExpTransfer self
  @returns   the result
**/
Acco_AccessObject Nmr_ExpTransfer_GetAccess(Nmr_ExpTransfer self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: method 'getAccess' is not callable");
  
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
  @param  Nmr_ExpTransfer self
  @returns   the result
**/
Acco_AccessObject Nmr_ExpTransfer_GetActiveAccess(Nmr_ExpTransfer self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: method 'getActiveAccess' is not callable");
  
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
  @param  Nmr_ExpTransfer self
  @returns   the result
**/
ApiList Nmr_ExpTransfer_GetApplicationData(Nmr_ExpTransfer self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.Nmr.ExpTransfer
  @param  Nmr_ExpTransfer self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nmr_ExpTransfer Nmr_ExpTransfer_GetByKey(Nmr_ExpTransfer self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Nmr_ExpTransfer obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: method 'getByKey' is not callable");
  
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
  @param  Nmr_ExpTransfer self
  @returns   the result
**/
ApiString Nmr_ExpTransfer_GetClassName(Nmr_ExpTransfer self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ExpTransfer.expDimRefs

ExpDimRefs betwen which 
magentisation is transferred
  @param  Nmr_ExpTransfer self
  @returns   the result
**/
ApiSet Nmr_ExpTransfer_GetExpDimRefs(Nmr_ExpTransfer self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExpDimRefs");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: cannot find method 'getExpDimRefs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: method 'getExpDimRefs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ExpTransfer.experiment

parent link
  @param  Nmr_ExpTransfer self
  @returns   the result
**/
Nmr_Experiment Nmr_ExpTransfer_GetExperiment(Nmr_ExpTransfer self)
{
  
  Nmr_Experiment obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExperiment");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: cannot find method 'getExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: method 'getExperiment' is not callable");
  
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
  @param  Nmr_ExpTransfer self
  @returns   the result
**/
ApiList Nmr_ExpTransfer_GetFieldNames(Nmr_ExpTransfer self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.nmr.Nmr.ExpTransfer
  @param  Nmr_ExpTransfer self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Nmr_ExpTransfer_GetFullKey(Nmr_ExpTransfer self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: method 'getFullKey' is not callable");
  
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
  @param  Nmr_ExpTransfer self
  @returns   the result
**/
ApiBoolean Nmr_ExpTransfer_GetInConstructor(Nmr_ExpTransfer self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: method 'getInConstructor' is not callable");
  
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
  @param  Nmr_ExpTransfer self
  @returns   the result
**/
ApiBoolean Nmr_ExpTransfer_GetIsDeleted(Nmr_ExpTransfer self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.nmr.Nmr.ExpTransfer
  @param  Nmr_ExpTransfer self
  @returns  Local object key
**/
ApiObject Nmr_ExpTransfer_GetLocalKey(Nmr_ExpTransfer self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ExpTransfer.mixingTime

mixing time for transfer 
step, in seconds
  @param  Nmr_ExpTransfer self
  @returns   the result
**/
ApiFloat Nmr_ExpTransfer_GetMixingTime(Nmr_ExpTransfer self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMixingTime");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: cannot find method 'getMixingTime'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: method 'getMixingTime' is not callable");
  
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
  @param  Nmr_ExpTransfer self
  @returns   the result
**/
ApiString Nmr_ExpTransfer_GetPackageName(Nmr_ExpTransfer self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: method 'getPackageName' is not callable");
  
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
  @param  Nmr_ExpTransfer self
  @returns   the result
**/
ApiString Nmr_ExpTransfer_GetPackageShortName(Nmr_ExpTransfer self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ExpTransfer.parent

link to parent object - synonym 
for experiment
  @param  Nmr_ExpTransfer self
  @returns   the result
**/
Nmr_Experiment Nmr_ExpTransfer_GetParent(Nmr_ExpTransfer self)
{
  
  Nmr_Experiment obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: method 'getParent' is not callable");
  
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
  @param  Nmr_ExpTransfer self
  @returns   the result
**/
ApiString Nmr_ExpTransfer_GetQualifiedName(Nmr_ExpTransfer self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: method 'getQualifiedName' is not callable");
  
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
  @param  Nmr_ExpTransfer self
  @returns   the result
**/
Impl_MemopsRoot Nmr_ExpTransfer_GetRoot(Nmr_ExpTransfer self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: method 'getRoot' is not callable");
  
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
  @param  Nmr_ExpTransfer self
  @returns   the result
**/
Impl_TopObject Nmr_ExpTransfer_GetTopObject(Nmr_ExpTransfer self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ExpTransfer.transferSubType

Subtype of transfer. 
Intended to distinguish between transfer variants that connect AtomSites 
in the same way  but are different in other ways (e.g. NOESY/ROESY, 
HSQC/HMQC). See data type for allowed values.
  @param  Nmr_ExpTransfer self
  @returns   the result
**/
ApiString Nmr_ExpTransfer_GetTransferSubType(Nmr_ExpTransfer self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTransferSubType");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: cannot find method 'getTransferSubType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: method 'getTransferSubType' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ExpTransfer.transferType

Type of magnetisation 
transfer. Enumeration. See data type for allowed values.
  @param  Nmr_ExpTransfer self
  @returns   the result
**/
ApiString Nmr_ExpTransfer_GetTransferType(Nmr_ExpTransfer self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTransferType");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: cannot find method 'getTransferType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: method 'getTransferType' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.nmr.Nmr.ExpTransfer
  @param  Nmr_Experiment parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_ExpTransfer Nmr_ExpTransfer_Init(Nmr_Experiment parent, ApiMap attrlinks)
{
  
  return Nmr_Experiment_NewExpTransfer(parent, attrlinks);
}

/**
  Constructor for ccp.nmr.Nmr.ExpTransfer
  @param  Nmr_Experiment parent
  @param  ApiSet expDimRefs
  @returns  the new object
**/
Nmr_ExpTransfer Nmr_ExpTransfer_Init_reqd(Nmr_Experiment parent, ApiSet expDimRefs)
{
  
  Nmr_ExpTransfer  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "expDimRefs", expDimRefs);
  
  obj = Nmr_ExpTransfer_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ExpTransfer self
  @param  Impl_ApplicationData value
**/
void *Nmr_ExpTransfer_RemoveApplicationData(Nmr_ExpTransfer self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.nmr.Nmr.ExpTransfer
  @param  Nmr_ExpTransfer self
  @param  ApiString name
  @param  ApiObject value
**/
void *Nmr_ExpTransfer_Set(Nmr_ExpTransfer self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_ExpTransfer self
  @param  Acco_AccessObject value
**/
void *Nmr_ExpTransfer_SetAccess(Nmr_ExpTransfer self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: method 'setAccess' is not callable");
  
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
  @param  Nmr_ExpTransfer self
  @param  ApiList values
**/
void *Nmr_ExpTransfer_SetApplicationData(Nmr_ExpTransfer self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ExpTransfer.expDimRefs

ExpDimRefs betwen which 
magentisation is transferred
  @param  Nmr_ExpTransfer self
  @param  ApiSet values
**/
void *Nmr_ExpTransfer_SetExpDimRefs(Nmr_ExpTransfer self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setExpDimRefs");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: cannot find method 'setExpDimRefs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: method 'setExpDimRefs' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ExpTransfer.mixingTime

mixing time for transfer 
step, in seconds
  @param  Nmr_ExpTransfer self
  @param  ApiFloat value
**/
void *Nmr_ExpTransfer_SetMixingTime(Nmr_ExpTransfer self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMixingTime");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: cannot find method 'setMixingTime'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: method 'setMixingTime' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ExpTransfer.transferSubType

Subtype of transfer. 
Intended to distinguish between transfer variants that connect AtomSites 
in the same way  but are different in other ways (e.g. NOESY/ROESY, 
HSQC/HMQC). See data type for allowed values.
  @param  Nmr_ExpTransfer self
  @param  ApiString value
**/
void *Nmr_ExpTransfer_SetTransferSubType(Nmr_ExpTransfer self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setTransferSubType");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: cannot find method 'setTransferSubType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: method 'setTransferSubType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ExpTransfer.transferType

Type of magnetisation 
transfer. Enumeration. See data type for allowed values.
  @param  Nmr_ExpTransfer self
  @param  ApiString value
**/
void *Nmr_ExpTransfer_SetTransferType(Nmr_ExpTransfer self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setTransferType");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: cannot find method 'setTransferType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: method 'setTransferType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.ExpTransfer.expDimRefs

ExpDimRefs betwen which 
magentisation is transferred
  @param  Nmr_ExpTransfer self
  @returns   the result
**/
ApiList Nmr_ExpTransfer_SortedExpDimRefs(Nmr_ExpTransfer self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedExpDimRefs");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: cannot find method 'sortedExpDimRefs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ExpTransfer: method 'sortedExpDimRefs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
