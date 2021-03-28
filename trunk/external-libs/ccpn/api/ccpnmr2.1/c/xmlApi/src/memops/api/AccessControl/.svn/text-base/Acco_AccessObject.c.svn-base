
#include "ccp.h"

/*
  
*/

/* package memops.api.AccessControl */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_AccessObject self
  @param  Impl_ApplicationData value
**/
void *Acco_AccessObject_AddApplicationData(Acco_AccessObject self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessObject: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessObject: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for memops.AccessControl.AccessObject
  @param  Acco_AccessObject self
  @param  ApiBoolean complete
**/
void *Acco_AccessObject_CheckAllValid(Acco_AccessObject self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessObject: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessObject: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for memops.AccessControl.AccessObject
  @param  Acco_AccessObject self
  @param  ApiBoolean complete
**/
void *Acco_AccessObject_CheckValid(Acco_AccessObject self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessObject: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessObject: method 'checkValid' is not callable");
  
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
  @param  Acco_AccessObject self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Acco_AccessObject_FindAllApplicationData(Acco_AccessObject self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessObject: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessObject: method 'findAllApplicationData' is not callable");
  
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
  @param  Acco_AccessObject self
  @returns  all value that satisfy the conditions 
**/
ApiList Acco_AccessObject_FindAllApplicationData_keyval0(Acco_AccessObject self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Acco_AccessObject_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_AccessObject self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Acco_AccessObject_FindAllApplicationData_keyval1(Acco_AccessObject self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Acco_AccessObject_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_AccessObject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Acco_AccessObject_FindAllApplicationData_keyval2(Acco_AccessObject self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Acco_AccessObject_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_AccessObject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Acco_AccessObject_FindAllApplicationData_keyval3(Acco_AccessObject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Acco_AccessObject_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_AccessObject self
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
ApiList Acco_AccessObject_FindAllApplicationData_keyval4(Acco_AccessObject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Acco_AccessObject_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.AccessControl.AccessObject.permissions

child link to 
class Permission
  @param  Acco_AccessObject self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Acco_AccessObject_FindAllPermissions(Acco_AccessObject self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllPermissions");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessObject: cannot find method 'findAllPermissions'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessObject: method 'findAllPermissions' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for memops.AccessControl.AccessObject.permissions

child link to 
class Permission
  @param  Acco_AccessObject self
  @returns  all value that satisfy the conditions 
**/
ApiSet Acco_AccessObject_FindAllPermissions_keyval0(Acco_AccessObject self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Acco_AccessObject_FindAllPermissions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.AccessControl.AccessObject.permissions

child link to 
class Permission
  @param  Acco_AccessObject self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Acco_AccessObject_FindAllPermissions_keyval1(Acco_AccessObject self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Acco_AccessObject_FindAllPermissions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.AccessControl.AccessObject.permissions

child link to 
class Permission
  @param  Acco_AccessObject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Acco_AccessObject_FindAllPermissions_keyval2(Acco_AccessObject self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Acco_AccessObject_FindAllPermissions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.AccessControl.AccessObject.permissions

child link to 
class Permission
  @param  Acco_AccessObject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Acco_AccessObject_FindAllPermissions_keyval3(Acco_AccessObject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Acco_AccessObject_FindAllPermissions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.AccessControl.AccessObject.permissions

child link to 
class Permission
  @param  Acco_AccessObject self
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
ApiSet Acco_AccessObject_FindAllPermissions_keyval4(Acco_AccessObject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Acco_AccessObject_FindAllPermissions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_AccessObject self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Acco_AccessObject_FindFirstApplicationData(Acco_AccessObject self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessObject: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessObject: method 'findFirstApplicationData' is not callable");
  
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
  @param  Acco_AccessObject self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Acco_AccessObject_FindFirstApplicationData_keyval0(Acco_AccessObject self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Acco_AccessObject_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_AccessObject self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Acco_AccessObject_FindFirstApplicationData_keyval1(Acco_AccessObject self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Acco_AccessObject_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_AccessObject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Acco_AccessObject_FindFirstApplicationData_keyval2(Acco_AccessObject self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Acco_AccessObject_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_AccessObject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Acco_AccessObject_FindFirstApplicationData_keyval3(Acco_AccessObject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Acco_AccessObject_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_AccessObject self
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
Impl_ApplicationData Acco_AccessObject_FindFirstApplicationData_keyval4(Acco_AccessObject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Acco_AccessObject_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.AccessControl.AccessObject.permissions

child link 
to class Permission
  @param  Acco_AccessObject self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Acco_Permission Acco_AccessObject_FindFirstPermission(Acco_AccessObject self, ApiMap conditions)
{
  
  Acco_Permission obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstPermission");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessObject: cannot find method 'findFirstPermission'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessObject: method 'findFirstPermission' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for memops.AccessControl.AccessObject.permissions

child link 
to class Permission
  @param  Acco_AccessObject self
  @returns  the first value that satisfies the conditions 
**/
Acco_Permission Acco_AccessObject_FindFirstPermission_keyval0(Acco_AccessObject self)
{
  
  Acco_Permission  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Acco_AccessObject_FindFirstPermission(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.AccessControl.AccessObject.permissions

child link 
to class Permission
  @param  Acco_AccessObject self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Acco_Permission Acco_AccessObject_FindFirstPermission_keyval1(Acco_AccessObject self, char * key, ApiObject value)
{
  
  Acco_Permission  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Acco_AccessObject_FindFirstPermission(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.AccessControl.AccessObject.permissions

child link 
to class Permission
  @param  Acco_AccessObject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Acco_Permission Acco_AccessObject_FindFirstPermission_keyval2(Acco_AccessObject self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Acco_Permission  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Acco_AccessObject_FindFirstPermission(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.AccessControl.AccessObject.permissions

child link 
to class Permission
  @param  Acco_AccessObject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Acco_Permission Acco_AccessObject_FindFirstPermission_keyval3(Acco_AccessObject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Acco_Permission  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Acco_AccessObject_FindFirstPermission(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.AccessControl.AccessObject.permissions

child link 
to class Permission
  @param  Acco_AccessObject self
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
Acco_Permission Acco_AccessObject_FindFirstPermission_keyval4(Acco_AccessObject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Acco_Permission  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Acco_AccessObject_FindFirstPermission(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for memops.AccessControl.AccessObject
  @param  Acco_AccessObject self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Acco_AccessObject_Get(Acco_AccessObject self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Acco_AccessObject self
  @returns   the result
**/
Acco_AccessObject Acco_AccessObject_GetAccess(Acco_AccessObject self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessObject: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessObject: method 'getAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.AccessControl.AccessObject.accessControlStore

parent 
link
  @param  Acco_AccessObject self
  @returns   the result
**/
Acco_AccessControlStore Acco_AccessObject_GetAccessControlStore(Acco_AccessObject self)
{
  
  Acco_AccessControlStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccessControlStore");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessObject: cannot find method 'getAccessControlStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessObject: method 'getAccessControlStore' is not callable");
  
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
  @param  Acco_AccessObject self
  @returns   the result
**/
Acco_AccessObject Acco_AccessObject_GetActiveAccess(Acco_AccessObject self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessObject: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessObject: method 'getActiveAccess' is not callable");
  
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
  @param  Acco_AccessObject self
  @returns   the result
**/
ApiList Acco_AccessObject_GetApplicationData(Acco_AccessObject self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessObject: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessObject: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for memops.AccessControl.AccessObject
  @param  Acco_AccessObject self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Acco_AccessObject Acco_AccessObject_GetByKey(Acco_AccessObject self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessObject: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessObject: method 'getByKey' is not callable");
  
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
  @param  Acco_AccessObject self
  @returns   the result
**/
ApiString Acco_AccessObject_GetClassName(Acco_AccessObject self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessObject: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessObject: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.AccessControl.AccessObject.dataObject

DataObject that is 
controlled by AccessObject
  @param  Acco_AccessObject self
  @returns   the result
**/
Impl_DataObject Acco_AccessObject_GetDataObject(Acco_AccessObject self)
{
  
  Impl_DataObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDataObject");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessObject: cannot find method 'getDataObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessObject: method 'getDataObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.AccessControl.AccessObject.description
  @param  Acco_AccessObject self
  @returns   the result
**/
ApiString Acco_AccessObject_GetDescription(Acco_AccessObject self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDescription");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessObject: cannot find method 'getDescription'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessObject: method 'getDescription' is not callable");
  
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
  @param  Acco_AccessObject self
  @returns   the result
**/
ApiList Acco_AccessObject_GetFieldNames(Acco_AccessObject self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessObject: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessObject: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for memops.AccessControl.AccessObject
  @param  Acco_AccessObject self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Acco_AccessObject_GetFullKey(Acco_AccessObject self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessObject: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessObject: method 'getFullKey' is not callable");
  
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
  @param  Acco_AccessObject self
  @returns   the result
**/
ApiBoolean Acco_AccessObject_GetInConstructor(Acco_AccessObject self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessObject: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessObject: method 'getInConstructor' is not callable");
  
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
  @param  Acco_AccessObject self
  @returns   the result
**/
ApiBoolean Acco_AccessObject_GetIsDeleted(Acco_AccessObject self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessObject: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessObject: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for memops.AccessControl.AccessObject
  @param  Acco_AccessObject self
  @returns  Local object key
**/
ApiObject Acco_AccessObject_GetLocalKey(Acco_AccessObject self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessObject: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessObject: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.AccessControl.AccessObject.name
  @param  Acco_AccessObject self
  @returns   the result
**/
ApiString Acco_AccessObject_GetName(Acco_AccessObject self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessObject: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessObject: method 'getName' is not callable");
  
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
  @param  Acco_AccessObject self
  @returns   the result
**/
ApiString Acco_AccessObject_GetPackageName(Acco_AccessObject self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessObject: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessObject: method 'getPackageName' is not callable");
  
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
  @param  Acco_AccessObject self
  @returns   the result
**/
ApiString Acco_AccessObject_GetPackageShortName(Acco_AccessObject self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessObject: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessObject: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.AccessControl.AccessObject.parent

link to parent object 
- synonym for accessControlStore
  @param  Acco_AccessObject self
  @returns   the result
**/
Acco_AccessControlStore Acco_AccessObject_GetParent(Acco_AccessObject self)
{
  
  Acco_AccessControlStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessObject: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessObject: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.AccessControl.AccessObject.permissions

child link to 
class Permission
  @param  Acco_AccessObject self
  @returns   the result
**/
ApiSet Acco_AccessObject_GetPermissions(Acco_AccessObject self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPermissions");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessObject: cannot find method 'getPermissions'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessObject: method 'getPermissions' is not callable");
  
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
  @param  Acco_AccessObject self
  @returns   the result
**/
ApiString Acco_AccessObject_GetQualifiedName(Acco_AccessObject self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessObject: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessObject: method 'getQualifiedName' is not callable");
  
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
  @param  Acco_AccessObject self
  @returns   the result
**/
Impl_MemopsRoot Acco_AccessObject_GetRoot(Acco_AccessObject self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessObject: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessObject: method 'getRoot' is not callable");
  
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
  @param  Acco_AccessObject self
  @returns   the result
**/
Impl_TopObject Acco_AccessObject_GetTopObject(Acco_AccessObject self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessObject: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessObject: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for memops.AccessControl.AccessObject
  @param  Acco_AccessControlStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Acco_AccessObject Acco_AccessObject_Init(Acco_AccessControlStore parent, ApiMap attrlinks)
{
  
  return Acco_AccessControlStore_NewAccessObject(parent, attrlinks);
}

/**
  Constructor for memops.AccessControl.AccessObject
  @param  Acco_AccessControlStore parent
  @param  char * name
  @returns  the new object
**/
Acco_AccessObject Acco_AccessObject_Init_reqd(Acco_AccessControlStore parent, char * name)
{
  
  Acco_AccessObject  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Acco_AccessObject_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create memops.AccessControl.Permission
  @param  Acco_AccessObject self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Acco_Permission Acco_AccessObject_NewPermission(Acco_AccessObject self, ApiMap attrlinks)
{
  
  Acco_Permission obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newPermission");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessObject: cannot find method 'newPermission'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessObject: method 'newPermission' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create memops.AccessControl.Permission
  @param  Acco_AccessObject self
  @param  Acco_UserGroup userGroup
  @returns  the new object
**/
Acco_Permission Acco_AccessObject_NewPermission_reqd(Acco_AccessObject self, Acco_UserGroup userGroup)
{
  
  Acco_Permission  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "userGroup", userGroup);
  
  obj = Acco_AccessObject_NewPermission(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_AccessObject self
  @param  Impl_ApplicationData value
**/
void *Acco_AccessObject_RemoveApplicationData(Acco_AccessObject self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessObject: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessObject: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for memops.AccessControl.AccessObject
  @param  Acco_AccessObject self
  @param  ApiString name
  @param  ApiObject value
**/
void *Acco_AccessObject_Set(Acco_AccessObject self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Acco_AccessObject self
  @param  Acco_AccessObject value
**/
void *Acco_AccessObject_SetAccess(Acco_AccessObject self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessObject: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessObject: method 'setAccess' is not callable");
  
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
  @param  Acco_AccessObject self
  @param  ApiList values
**/
void *Acco_AccessObject_SetApplicationData(Acco_AccessObject self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessObject: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessObject: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.AccessControl.AccessObject.dataObject

DataObject that is 
controlled by AccessObject
  @param  Acco_AccessObject self
  @param  Impl_DataObject value
**/
void *Acco_AccessObject_SetDataObject(Acco_AccessObject self, Impl_DataObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDataObject");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessObject: cannot find method 'setDataObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessObject: method 'setDataObject' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.AccessControl.AccessObject.description
  @param  Acco_AccessObject self
  @param  ApiString value
**/
void *Acco_AccessObject_SetDescription(Acco_AccessObject self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDescription");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessObject: cannot find method 'setDescription'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessObject: method 'setDescription' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.AccessControl.AccessObject.name
  @param  Acco_AccessObject self
  @param  ApiString value
**/
void *Acco_AccessObject_SetName(Acco_AccessObject self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessObject: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessObject: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for memops.AccessControl.AccessObject.permissions

child link to 
class Permission
  @param  Acco_AccessObject self
  @returns   the result
**/
ApiList Acco_AccessObject_SortedPermissions(Acco_AccessObject self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedPermissions");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessObject: cannot find method 'sortedPermissions'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessObject: method 'sortedPermissions' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
