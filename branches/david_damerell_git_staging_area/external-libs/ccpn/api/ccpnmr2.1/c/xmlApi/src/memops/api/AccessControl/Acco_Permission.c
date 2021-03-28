
#include "ccp.h"

/*
  
*/

/* package memops.api.AccessControl */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_Permission self
  @param  Impl_ApplicationData value
**/
void *Acco_Permission_AddApplicationData(Acco_Permission self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("memops.AccessControl.Permission: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.Permission: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for memops.AccessControl.Permission
  @param  Acco_Permission self
  @param  ApiBoolean complete
**/
void *Acco_Permission_CheckAllValid(Acco_Permission self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("memops.AccessControl.Permission: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.Permission: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for memops.AccessControl.Permission
  @param  Acco_Permission self
  @param  ApiBoolean complete
**/
void *Acco_Permission_CheckValid(Acco_Permission self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("memops.AccessControl.Permission: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.Permission: method 'checkValid' is not callable");
  
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
  @param  Acco_Permission self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Acco_Permission_FindAllApplicationData(Acco_Permission self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("memops.AccessControl.Permission: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.Permission: method 'findAllApplicationData' is not callable");
  
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
  @param  Acco_Permission self
  @returns  all value that satisfy the conditions 
**/
ApiList Acco_Permission_FindAllApplicationData_keyval0(Acco_Permission self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Acco_Permission_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_Permission self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Acco_Permission_FindAllApplicationData_keyval1(Acco_Permission self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Acco_Permission_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_Permission self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Acco_Permission_FindAllApplicationData_keyval2(Acco_Permission self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Acco_Permission_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_Permission self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Acco_Permission_FindAllApplicationData_keyval3(Acco_Permission self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Acco_Permission_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_Permission self
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
ApiList Acco_Permission_FindAllApplicationData_keyval4(Acco_Permission self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Acco_Permission_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_Permission self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Acco_Permission_FindFirstApplicationData(Acco_Permission self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("memops.AccessControl.Permission: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.Permission: method 'findFirstApplicationData' is not callable");
  
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
  @param  Acco_Permission self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Acco_Permission_FindFirstApplicationData_keyval0(Acco_Permission self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Acco_Permission_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_Permission self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Acco_Permission_FindFirstApplicationData_keyval1(Acco_Permission self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Acco_Permission_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_Permission self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Acco_Permission_FindFirstApplicationData_keyval2(Acco_Permission self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Acco_Permission_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_Permission self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Acco_Permission_FindFirstApplicationData_keyval3(Acco_Permission self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Acco_Permission_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_Permission self
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
Impl_ApplicationData Acco_Permission_FindFirstApplicationData_keyval4(Acco_Permission self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Acco_Permission_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for memops.AccessControl.Permission
  @param  Acco_Permission self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Acco_Permission_Get(Acco_Permission self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Acco_Permission self
  @returns   the result
**/
Acco_AccessObject Acco_Permission_GetAccess(Acco_Permission self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("memops.AccessControl.Permission: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.Permission: method 'getAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.AccessControl.Permission.accessObject

parent link
  @param  Acco_Permission self
  @returns   the result
**/
Acco_AccessObject Acco_Permission_GetAccessObject(Acco_Permission self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccessObject");
  
  if (!method)
    return raiseApiException("memops.AccessControl.Permission: cannot find method 'getAccessObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.Permission: method 'getAccessObject' is not callable");
  
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
  @param  Acco_Permission self
  @returns   the result
**/
Acco_AccessObject Acco_Permission_GetActiveAccess(Acco_Permission self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("memops.AccessControl.Permission: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.Permission: method 'getActiveAccess' is not callable");
  
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
  @param  Acco_Permission self
  @returns   the result
**/
ApiList Acco_Permission_GetApplicationData(Acco_Permission self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("memops.AccessControl.Permission: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.Permission: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for memops.AccessControl.Permission
  @param  Acco_Permission self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Acco_Permission Acco_Permission_GetByKey(Acco_Permission self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Acco_Permission obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("memops.AccessControl.Permission: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.Permission: method 'getByKey' is not callable");
  
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
  @param  Acco_Permission self
  @returns   the result
**/
ApiString Acco_Permission_GetClassName(Acco_Permission self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("memops.AccessControl.Permission: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.Permission: method 'getClassName' is not callable");
  
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
  @param  Acco_Permission self
  @returns   the result
**/
ApiList Acco_Permission_GetFieldNames(Acco_Permission self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("memops.AccessControl.Permission: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.Permission: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for memops.AccessControl.Permission
  @param  Acco_Permission self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Acco_Permission_GetFullKey(Acco_Permission self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("memops.AccessControl.Permission: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.Permission: method 'getFullKey' is not callable");
  
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
  @param  Acco_Permission self
  @returns   the result
**/
ApiBoolean Acco_Permission_GetInConstructor(Acco_Permission self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("memops.AccessControl.Permission: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.Permission: method 'getInConstructor' is not callable");
  
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
  @param  Acco_Permission self
  @returns   the result
**/
ApiBoolean Acco_Permission_GetIsDeleted(Acco_Permission self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("memops.AccessControl.Permission: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.Permission: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for memops.AccessControl.Permission
  @param  Acco_Permission self
  @returns  Local object key
**/
ApiObject Acco_Permission_GetLocalKey(Acco_Permission self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("memops.AccessControl.Permission: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.Permission: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.AccessControl.Permission.opType
  @param  Acco_Permission self
  @returns   the result
**/
ApiString Acco_Permission_GetOpType(Acco_Permission self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getOpType");
  
  if (!method)
    return raiseApiException("memops.AccessControl.Permission: cannot find method 'getOpType'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.Permission: method 'getOpType' is not callable");
  
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
  @param  Acco_Permission self
  @returns   the result
**/
ApiString Acco_Permission_GetPackageName(Acco_Permission self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("memops.AccessControl.Permission: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.Permission: method 'getPackageName' is not callable");
  
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
  @param  Acco_Permission self
  @returns   the result
**/
ApiString Acco_Permission_GetPackageShortName(Acco_Permission self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("memops.AccessControl.Permission: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.Permission: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.AccessControl.Permission.parent

link to parent object - 
synonym for accessObject
  @param  Acco_Permission self
  @returns   the result
**/
Acco_AccessObject Acco_Permission_GetParent(Acco_Permission self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("memops.AccessControl.Permission: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.Permission: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.AccessControl.Permission.permission
  @param  Acco_Permission self
  @returns   the result
**/
ApiBoolean Acco_Permission_GetPermission(Acco_Permission self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPermission");
  
  if (!method)
    return raiseApiException("memops.AccessControl.Permission: cannot find method 'getPermission'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.Permission: method 'getPermission' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.AccessControl.Permission.permissionClass
  @param  Acco_Permission self
  @returns   the result
**/
ApiString Acco_Permission_GetPermissionClass(Acco_Permission self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPermissionClass");
  
  if (!method)
    return raiseApiException("memops.AccessControl.Permission: cannot find method 'getPermissionClass'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.Permission: method 'getPermissionClass' is not callable");
  
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
  @param  Acco_Permission self
  @returns   the result
**/
ApiString Acco_Permission_GetQualifiedName(Acco_Permission self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("memops.AccessControl.Permission: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.Permission: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.AccessControl.Permission.roleName
  @param  Acco_Permission self
  @returns   the result
**/
ApiString Acco_Permission_GetRoleName(Acco_Permission self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoleName");
  
  if (!method)
    return raiseApiException("memops.AccessControl.Permission: cannot find method 'getRoleName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.Permission: method 'getRoleName' is not callable");
  
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
  @param  Acco_Permission self
  @returns   the result
**/
Impl_MemopsRoot Acco_Permission_GetRoot(Acco_Permission self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("memops.AccessControl.Permission: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.Permission: method 'getRoot' is not callable");
  
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
  @param  Acco_Permission self
  @returns   the result
**/
Impl_TopObject Acco_Permission_GetTopObject(Acco_Permission self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("memops.AccessControl.Permission: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.Permission: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.AccessControl.Permission.userGroup
  @param  Acco_Permission self
  @returns   the result
**/
Acco_UserGroup Acco_Permission_GetUserGroup(Acco_Permission self)
{
  
  Acco_UserGroup obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getUserGroup");
  
  if (!method)
    return raiseApiException("memops.AccessControl.Permission: cannot find method 'getUserGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.Permission: method 'getUserGroup' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for memops.AccessControl.Permission
  @param  Acco_AccessObject parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Acco_Permission Acco_Permission_Init(Acco_AccessObject parent, ApiMap attrlinks)
{
  
  return Acco_AccessObject_NewPermission(parent, attrlinks);
}

/**
  Constructor for memops.AccessControl.Permission
  @param  Acco_AccessObject parent
  @param  Acco_UserGroup userGroup
  @returns  the new object
**/
Acco_Permission Acco_Permission_Init_reqd(Acco_AccessObject parent, Acco_UserGroup userGroup)
{
  
  Acco_Permission  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "userGroup", userGroup);
  
  obj = Acco_Permission_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_Permission self
  @param  Impl_ApplicationData value
**/
void *Acco_Permission_RemoveApplicationData(Acco_Permission self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("memops.AccessControl.Permission: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.Permission: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for memops.AccessControl.Permission
  @param  Acco_Permission self
  @param  ApiString name
  @param  ApiObject value
**/
void *Acco_Permission_Set(Acco_Permission self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Acco_Permission self
  @param  Acco_AccessObject value
**/
void *Acco_Permission_SetAccess(Acco_Permission self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("memops.AccessControl.Permission: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.Permission: method 'setAccess' is not callable");
  
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
  @param  Acco_Permission self
  @param  ApiList values
**/
void *Acco_Permission_SetApplicationData(Acco_Permission self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("memops.AccessControl.Permission: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.Permission: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.AccessControl.Permission.opType
  @param  Acco_Permission self
  @param  ApiString value
**/
void *Acco_Permission_SetOpType(Acco_Permission self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setOpType");
  
  if (!method)
    return raiseApiException("memops.AccessControl.Permission: cannot find method 'setOpType'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.Permission: method 'setOpType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.AccessControl.Permission.permission
  @param  Acco_Permission self
  @param  ApiBoolean value
**/
void *Acco_Permission_SetPermission(Acco_Permission self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPermission");
  
  if (!method)
    return raiseApiException("memops.AccessControl.Permission: cannot find method 'setPermission'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.Permission: method 'setPermission' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.AccessControl.Permission.permissionClass
  @param  Acco_Permission self
  @param  ApiString value
**/
void *Acco_Permission_SetPermissionClass(Acco_Permission self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPermissionClass");
  
  if (!method)
    return raiseApiException("memops.AccessControl.Permission: cannot find method 'setPermissionClass'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.Permission: method 'setPermissionClass' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.AccessControl.Permission.roleName
  @param  Acco_Permission self
  @param  ApiString value
**/
void *Acco_Permission_SetRoleName(Acco_Permission self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRoleName");
  
  if (!method)
    return raiseApiException("memops.AccessControl.Permission: cannot find method 'setRoleName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.Permission: method 'setRoleName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.AccessControl.Permission.userGroup
  @param  Acco_Permission self
  @param  Acco_UserGroup value
**/
void *Acco_Permission_SetUserGroup(Acco_Permission self, Acco_UserGroup value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setUserGroup");
  
  if (!method)
    return raiseApiException("memops.AccessControl.Permission: cannot find method 'setUserGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.Permission: method 'setUserGroup' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
