
#include "ccp.h"

/*
  Data store descriptor
*/

/* package ccp.api.general.DataLocation */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_AbstractDataStore self
  @param  Impl_ApplicationData value
**/
void *Dloc_AbstractDataStore_AddApplicationData(Dloc_AbstractDataStore self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.AbstractDataStore: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.AbstractDataStore: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
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
  @param  Dloc_AbstractDataStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Dloc_AbstractDataStore_FindAllApplicationData(Dloc_AbstractDataStore self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.AbstractDataStore: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.AbstractDataStore: method 'findAllApplicationData' is not callable");
  
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
  @param  Dloc_AbstractDataStore self
  @returns  all value that satisfy the conditions 
**/
ApiList Dloc_AbstractDataStore_FindAllApplicationData_keyval0(Dloc_AbstractDataStore self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Dloc_AbstractDataStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_AbstractDataStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Dloc_AbstractDataStore_FindAllApplicationData_keyval1(Dloc_AbstractDataStore self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Dloc_AbstractDataStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_AbstractDataStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Dloc_AbstractDataStore_FindAllApplicationData_keyval2(Dloc_AbstractDataStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Dloc_AbstractDataStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_AbstractDataStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Dloc_AbstractDataStore_FindAllApplicationData_keyval3(Dloc_AbstractDataStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Dloc_AbstractDataStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_AbstractDataStore self
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
ApiList Dloc_AbstractDataStore_FindAllApplicationData_keyval4(Dloc_AbstractDataStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Dloc_AbstractDataStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_AbstractDataStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Dloc_AbstractDataStore_FindFirstApplicationData(Dloc_AbstractDataStore self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.AbstractDataStore: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.AbstractDataStore: method 'findFirstApplicationData' is not callable");
  
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
  @param  Dloc_AbstractDataStore self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Dloc_AbstractDataStore_FindFirstApplicationData_keyval0(Dloc_AbstractDataStore self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Dloc_AbstractDataStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_AbstractDataStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Dloc_AbstractDataStore_FindFirstApplicationData_keyval1(Dloc_AbstractDataStore self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Dloc_AbstractDataStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_AbstractDataStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Dloc_AbstractDataStore_FindFirstApplicationData_keyval2(Dloc_AbstractDataStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Dloc_AbstractDataStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_AbstractDataStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Dloc_AbstractDataStore_FindFirstApplicationData_keyval3(Dloc_AbstractDataStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Dloc_AbstractDataStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_AbstractDataStore self
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
Impl_ApplicationData Dloc_AbstractDataStore_FindFirstApplicationData_keyval4(Dloc_AbstractDataStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Dloc_AbstractDataStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Dloc_AbstractDataStore self
  @returns   the result
**/
Acco_AccessObject Dloc_AbstractDataStore_GetAccess(Dloc_AbstractDataStore self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.AbstractDataStore: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.AbstractDataStore: method 'getAccess' is not callable");
  
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
  @param  Dloc_AbstractDataStore self
  @returns   the result
**/
ApiList Dloc_AbstractDataStore_GetApplicationData(Dloc_AbstractDataStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.AbstractDataStore: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.AbstractDataStore: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.general.DataLocation.AbstractDataStore
  @param  Dloc_AbstractDataStore self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Dloc_AbstractDataStore Dloc_AbstractDataStore_GetByKey(Dloc_AbstractDataStore self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Dloc_AbstractDataStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.AbstractDataStore: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.AbstractDataStore: method 'getByKey' is not callable");
  
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
  @param  Dloc_AbstractDataStore self
  @returns   the result
**/
ApiString Dloc_AbstractDataStore_GetClassName(Dloc_AbstractDataStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.AbstractDataStore: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.AbstractDataStore: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.general.DataLocation.AbstractDataStore.dataLocationStore

parent 
link
  @param  Dloc_AbstractDataStore self
  @returns   the result
**/
Dloc_DataLocationStore Dloc_AbstractDataStore_GetDataLocationStore(Dloc_AbstractDataStore self)
{
  
  Dloc_DataLocationStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDataLocationStore");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.AbstractDataStore: cannot find method 'getDataLocationStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.AbstractDataStore: method 'getDataLocationStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.DataLocation.AbstractDataStore.dataUrl

DataUrl 
under which AbstractDataStore is stored
  @param  Dloc_AbstractDataStore self
  @returns   the result
**/
Dloc_DataUrl Dloc_AbstractDataStore_GetDataUrl(Dloc_AbstractDataStore self)
{
  
  Dloc_DataUrl obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDataUrl");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.AbstractDataStore: cannot find method 'getDataUrl'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.AbstractDataStore: method 'getDataUrl' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.DataLocation.AbstractDataStore.details

Free text, 
for notes, explanatory comments, etc.
  @param  Dloc_AbstractDataStore self
  @returns   the result
**/
ApiString Dloc_AbstractDataStore_GetDetails(Dloc_AbstractDataStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.AbstractDataStore: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.AbstractDataStore: method 'getDetails' is not callable");
  
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
  @param  Dloc_AbstractDataStore self
  @returns   the result
**/
ApiList Dloc_AbstractDataStore_GetFieldNames(Dloc_AbstractDataStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.AbstractDataStore: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.AbstractDataStore: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.general.DataLocation.AbstractDataStore
  @param  Dloc_AbstractDataStore self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Dloc_AbstractDataStore_GetFullKey(Dloc_AbstractDataStore self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.AbstractDataStore: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.AbstractDataStore: method 'getFullKey' is not callable");
  
  args = PyTuple_Pack(1, useGuid);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived attribute fullPath
  @param  Dloc_AbstractDataStore self
  @returns   the result
**/
ApiString Dloc_AbstractDataStore_GetFullPath(Dloc_AbstractDataStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullPath");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.AbstractDataStore: cannot find method 'getFullPath'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.AbstractDataStore: method 'getFullPath' is not callable");
  
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
  @param  Dloc_AbstractDataStore self
  @returns   the result
**/
ApiBoolean Dloc_AbstractDataStore_GetInConstructor(Dloc_AbstractDataStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.AbstractDataStore: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.AbstractDataStore: method 'getInConstructor' is not callable");
  
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
  @param  Dloc_AbstractDataStore self
  @returns   the result
**/
ApiBoolean Dloc_AbstractDataStore_GetIsDeleted(Dloc_AbstractDataStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.AbstractDataStore: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.AbstractDataStore: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.general.DataLocation.AbstractDataStore
  @param  Dloc_AbstractDataStore self
  @returns  Local object key
**/
ApiObject Dloc_AbstractDataStore_GetLocalKey(Dloc_AbstractDataStore self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.AbstractDataStore: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.AbstractDataStore: method 'getLocalKey' is not callable");
  
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
  @param  Dloc_AbstractDataStore self
  @returns   the result
**/
ApiString Dloc_AbstractDataStore_GetPackageName(Dloc_AbstractDataStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.AbstractDataStore: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.AbstractDataStore: method 'getPackageName' is not callable");
  
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
  @param  Dloc_AbstractDataStore self
  @returns   the result
**/
ApiString Dloc_AbstractDataStore_GetPackageShortName(Dloc_AbstractDataStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.AbstractDataStore: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.AbstractDataStore: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.DataLocation.AbstractDataStore.parent

link to 
parent object - synonym for dataLocationStore
  @param  Dloc_AbstractDataStore self
  @returns   the result
**/
Dloc_DataLocationStore Dloc_AbstractDataStore_GetParent(Dloc_AbstractDataStore self)
{
  
  Dloc_DataLocationStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.AbstractDataStore: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.AbstractDataStore: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.DataLocation.AbstractDataStore.path

Path relative 
to dataUrl.url.
  @param  Dloc_AbstractDataStore self
  @returns   the result
**/
ApiString Dloc_AbstractDataStore_GetPath(Dloc_AbstractDataStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPath");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.AbstractDataStore: cannot find method 'getPath'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.AbstractDataStore: method 'getPath' is not callable");
  
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
  @param  Dloc_AbstractDataStore self
  @returns   the result
**/
ApiString Dloc_AbstractDataStore_GetQualifiedName(Dloc_AbstractDataStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.AbstractDataStore: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.AbstractDataStore: method 'getQualifiedName' is not callable");
  
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
  @param  Dloc_AbstractDataStore self
  @returns   the result
**/
Impl_MemopsRoot Dloc_AbstractDataStore_GetRoot(Dloc_AbstractDataStore self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.AbstractDataStore: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.AbstractDataStore: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.DataLocation.AbstractDataStore.serial

Serial number 
of object. Serves as object main key. Serial numbers of deleted objects 
are not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Dloc_AbstractDataStore self
  @returns   the result
**/
ApiInteger Dloc_AbstractDataStore_GetSerial(Dloc_AbstractDataStore self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.AbstractDataStore: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.AbstractDataStore: method 'getSerial' is not callable");
  
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
  @param  Dloc_AbstractDataStore self
  @returns   the result
**/
Impl_TopObject Dloc_AbstractDataStore_GetTopObject(Dloc_AbstractDataStore self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.AbstractDataStore: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.AbstractDataStore: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_AbstractDataStore self
  @param  Impl_ApplicationData value
**/
void *Dloc_AbstractDataStore_RemoveApplicationData(Dloc_AbstractDataStore self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.AbstractDataStore: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.AbstractDataStore: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Dloc_AbstractDataStore self
  @param  Acco_AccessObject value
**/
void *Dloc_AbstractDataStore_SetAccess(Dloc_AbstractDataStore self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.AbstractDataStore: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.AbstractDataStore: method 'setAccess' is not callable");
  
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
  @param  Dloc_AbstractDataStore self
  @param  ApiList values
**/
void *Dloc_AbstractDataStore_SetApplicationData(Dloc_AbstractDataStore self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.AbstractDataStore: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.AbstractDataStore: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.DataLocation.AbstractDataStore.dataUrl

DataUrl 
under which AbstractDataStore is stored
  @param  Dloc_AbstractDataStore self
  @param  Dloc_DataUrl value
**/
void *Dloc_AbstractDataStore_SetDataUrl(Dloc_AbstractDataStore self, Dloc_DataUrl value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDataUrl");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.AbstractDataStore: cannot find method 'setDataUrl'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.AbstractDataStore: method 'setDataUrl' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.DataLocation.AbstractDataStore.details

Free text, 
for notes, explanatory comments, etc.
  @param  Dloc_AbstractDataStore self
  @param  ApiString value
**/
void *Dloc_AbstractDataStore_SetDetails(Dloc_AbstractDataStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.AbstractDataStore: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.AbstractDataStore: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.DataLocation.AbstractDataStore.path

Path relative 
to dataUrl.url.
  @param  Dloc_AbstractDataStore self
  @param  ApiString value
**/
void *Dloc_AbstractDataStore_SetPath(Dloc_AbstractDataStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPath");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.AbstractDataStore: cannot find method 'setPath'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.AbstractDataStore: method 'setPath' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.DataLocation.AbstractDataStore.serial

Serial number 
of object. Serves as object main key. Serial numbers of deleted objects 
are not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Dloc_AbstractDataStore self
  @param  ApiInteger value
**/
void *Dloc_AbstractDataStore_SetSerial(Dloc_AbstractDataStore self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.AbstractDataStore: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.AbstractDataStore: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
