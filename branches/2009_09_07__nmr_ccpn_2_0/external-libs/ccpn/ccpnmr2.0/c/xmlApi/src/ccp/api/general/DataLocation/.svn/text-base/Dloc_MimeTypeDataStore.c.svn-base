
#include "ccp.h"

/*
  Data storage pointer for anything with a MimeType (e.g. JPEG or GIF) 
*/

/* package ccp.api.general.DataLocation */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_MimeTypeDataStore self
  @param  Impl_ApplicationData value
**/
void *Dloc_MimeTypeDataStore_AddApplicationData(Dloc_MimeTypeDataStore self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.MimeTypeDataStore: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.MimeTypeDataStore: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.general.DataLocation.MimeTypeDataStore
  @param  Dloc_MimeTypeDataStore self
  @param  ApiBoolean complete
**/
void *Dloc_MimeTypeDataStore_CheckAllValid(Dloc_MimeTypeDataStore self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.MimeTypeDataStore: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.MimeTypeDataStore: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.general.DataLocation.MimeTypeDataStore
  @param  Dloc_MimeTypeDataStore self
  @param  ApiBoolean complete
**/
void *Dloc_MimeTypeDataStore_CheckValid(Dloc_MimeTypeDataStore self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.MimeTypeDataStore: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.MimeTypeDataStore: method 'checkValid' is not callable");
  
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
  @param  Dloc_MimeTypeDataStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Dloc_MimeTypeDataStore_FindAllApplicationData(Dloc_MimeTypeDataStore self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.MimeTypeDataStore: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.MimeTypeDataStore: method 'findAllApplicationData' is not callable");
  
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
  @param  Dloc_MimeTypeDataStore self
  @returns  all value that satisfy the conditions 
**/
ApiList Dloc_MimeTypeDataStore_FindAllApplicationData_keyval0(Dloc_MimeTypeDataStore self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Dloc_MimeTypeDataStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_MimeTypeDataStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Dloc_MimeTypeDataStore_FindAllApplicationData_keyval1(Dloc_MimeTypeDataStore self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Dloc_MimeTypeDataStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_MimeTypeDataStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Dloc_MimeTypeDataStore_FindAllApplicationData_keyval2(Dloc_MimeTypeDataStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Dloc_MimeTypeDataStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_MimeTypeDataStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Dloc_MimeTypeDataStore_FindAllApplicationData_keyval3(Dloc_MimeTypeDataStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Dloc_MimeTypeDataStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_MimeTypeDataStore self
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
ApiList Dloc_MimeTypeDataStore_FindAllApplicationData_keyval4(Dloc_MimeTypeDataStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Dloc_MimeTypeDataStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_MimeTypeDataStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Dloc_MimeTypeDataStore_FindFirstApplicationData(Dloc_MimeTypeDataStore self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.MimeTypeDataStore: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.MimeTypeDataStore: method 'findFirstApplicationData' is not callable");
  
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
  @param  Dloc_MimeTypeDataStore self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Dloc_MimeTypeDataStore_FindFirstApplicationData_keyval0(Dloc_MimeTypeDataStore self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Dloc_MimeTypeDataStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_MimeTypeDataStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Dloc_MimeTypeDataStore_FindFirstApplicationData_keyval1(Dloc_MimeTypeDataStore self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Dloc_MimeTypeDataStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_MimeTypeDataStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Dloc_MimeTypeDataStore_FindFirstApplicationData_keyval2(Dloc_MimeTypeDataStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Dloc_MimeTypeDataStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_MimeTypeDataStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Dloc_MimeTypeDataStore_FindFirstApplicationData_keyval3(Dloc_MimeTypeDataStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Dloc_MimeTypeDataStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_MimeTypeDataStore self
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
Impl_ApplicationData Dloc_MimeTypeDataStore_FindFirstApplicationData_keyval4(Dloc_MimeTypeDataStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Dloc_MimeTypeDataStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.general.DataLocation.MimeTypeDataStore
  @param  Dloc_MimeTypeDataStore self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Dloc_MimeTypeDataStore_Get(Dloc_MimeTypeDataStore self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Dloc_MimeTypeDataStore self
  @returns   the result
**/
Acco_AccessObject Dloc_MimeTypeDataStore_GetAccess(Dloc_MimeTypeDataStore self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.MimeTypeDataStore: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.MimeTypeDataStore: method 'getAccess' is not callable");
  
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
  @param  Dloc_MimeTypeDataStore self
  @returns   the result
**/
ApiList Dloc_MimeTypeDataStore_GetApplicationData(Dloc_MimeTypeDataStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.MimeTypeDataStore: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.MimeTypeDataStore: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.general.DataLocation.MimeTypeDataStore
  @param  Dloc_MimeTypeDataStore self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Dloc_MimeTypeDataStore Dloc_MimeTypeDataStore_GetByKey(Dloc_MimeTypeDataStore self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Dloc_MimeTypeDataStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.MimeTypeDataStore: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.MimeTypeDataStore: method 'getByKey' is not callable");
  
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
  @param  Dloc_MimeTypeDataStore self
  @returns   the result
**/
ApiString Dloc_MimeTypeDataStore_GetClassName(Dloc_MimeTypeDataStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.MimeTypeDataStore: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.MimeTypeDataStore: method 'getClassName' is not callable");
  
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
  @param  Dloc_MimeTypeDataStore self
  @returns   the result
**/
Dloc_DataLocationStore Dloc_MimeTypeDataStore_GetDataLocationStore(Dloc_MimeTypeDataStore self)
{
  
  Dloc_DataLocationStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDataLocationStore");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.MimeTypeDataStore: cannot find method 'getDataLocationStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.MimeTypeDataStore: method 'getDataLocationStore' is not callable");
  
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
  @param  Dloc_MimeTypeDataStore self
  @returns   the result
**/
Dloc_DataUrl Dloc_MimeTypeDataStore_GetDataUrl(Dloc_MimeTypeDataStore self)
{
  
  Dloc_DataUrl obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDataUrl");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.MimeTypeDataStore: cannot find method 'getDataUrl'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.MimeTypeDataStore: method 'getDataUrl' is not callable");
  
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
  @param  Dloc_MimeTypeDataStore self
  @returns   the result
**/
ApiString Dloc_MimeTypeDataStore_GetDetails(Dloc_MimeTypeDataStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.MimeTypeDataStore: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.MimeTypeDataStore: method 'getDetails' is not callable");
  
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
  @param  Dloc_MimeTypeDataStore self
  @returns   the result
**/
ApiList Dloc_MimeTypeDataStore_GetFieldNames(Dloc_MimeTypeDataStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.MimeTypeDataStore: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.MimeTypeDataStore: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.DataLocation.AbstractDataStore.fullPath

Full path 
to data
  @param  Dloc_MimeTypeDataStore self
  @returns   the result
**/
ApiString Dloc_MimeTypeDataStore_GetFullPath(Dloc_MimeTypeDataStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullPath");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.MimeTypeDataStore: cannot find method 'getFullPath'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.MimeTypeDataStore: method 'getFullPath' is not callable");
  
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
  @param  Dloc_MimeTypeDataStore self
  @returns   the result
**/
ApiBoolean Dloc_MimeTypeDataStore_GetInConstructor(Dloc_MimeTypeDataStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.MimeTypeDataStore: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.MimeTypeDataStore: method 'getInConstructor' is not callable");
  
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
  @param  Dloc_MimeTypeDataStore self
  @returns   the result
**/
ApiBoolean Dloc_MimeTypeDataStore_GetIsDeleted(Dloc_MimeTypeDataStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.MimeTypeDataStore: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.MimeTypeDataStore: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.DataLocation.MimeTypeDataStore.mimeType

mime type 
of datasource
  @param  Dloc_MimeTypeDataStore self
  @returns   the result
**/
ApiString Dloc_MimeTypeDataStore_GetMimeType(Dloc_MimeTypeDataStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMimeType");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.MimeTypeDataStore: cannot find method 'getMimeType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.MimeTypeDataStore: method 'getMimeType' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.general.DataLocation.MimeTypeDataStore.nmrDataSourceImage

ccp.nmr.Nmr.DataSourceImage 
stored in this DataStore
  @param  Dloc_MimeTypeDataStore self
  @returns   the result
**/
Nmr_DataSourceImage Dloc_MimeTypeDataStore_GetNmrDataSourceImage(Dloc_MimeTypeDataStore self)
{
  
  Nmr_DataSourceImage obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrDataSourceImage");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.MimeTypeDataStore: cannot find method 'getNmrDataSourceImage'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.MimeTypeDataStore: method 'getNmrDataSourceImage' is not callable");
  
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
  @param  Dloc_MimeTypeDataStore self
  @returns   the result
**/
ApiString Dloc_MimeTypeDataStore_GetPackageName(Dloc_MimeTypeDataStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.MimeTypeDataStore: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.MimeTypeDataStore: method 'getPackageName' is not callable");
  
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
  @param  Dloc_MimeTypeDataStore self
  @returns   the result
**/
ApiString Dloc_MimeTypeDataStore_GetPackageShortName(Dloc_MimeTypeDataStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.MimeTypeDataStore: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.MimeTypeDataStore: method 'getPackageShortName' is not callable");
  
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
  @param  Dloc_MimeTypeDataStore self
  @returns   the result
**/
Dloc_DataLocationStore Dloc_MimeTypeDataStore_GetParent(Dloc_MimeTypeDataStore self)
{
  
  Dloc_DataLocationStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.MimeTypeDataStore: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.MimeTypeDataStore: method 'getParent' is not callable");
  
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
  @param  Dloc_MimeTypeDataStore self
  @returns   the result
**/
ApiString Dloc_MimeTypeDataStore_GetPath(Dloc_MimeTypeDataStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPath");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.MimeTypeDataStore: cannot find method 'getPath'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.MimeTypeDataStore: method 'getPath' is not callable");
  
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
  @param  Dloc_MimeTypeDataStore self
  @returns   the result
**/
ApiString Dloc_MimeTypeDataStore_GetQualifiedName(Dloc_MimeTypeDataStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.MimeTypeDataStore: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.MimeTypeDataStore: method 'getQualifiedName' is not callable");
  
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
  @param  Dloc_MimeTypeDataStore self
  @returns   the result
**/
Impl_MemopsRoot Dloc_MimeTypeDataStore_GetRoot(Dloc_MimeTypeDataStore self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.MimeTypeDataStore: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.MimeTypeDataStore: method 'getRoot' is not callable");
  
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
  @param  Dloc_MimeTypeDataStore self
  @returns   the result
**/
ApiInteger Dloc_MimeTypeDataStore_GetSerial(Dloc_MimeTypeDataStore self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.MimeTypeDataStore: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.MimeTypeDataStore: method 'getSerial' is not callable");
  
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
  @param  Dloc_MimeTypeDataStore self
  @returns   the result
**/
Impl_TopObject Dloc_MimeTypeDataStore_GetTopObject(Dloc_MimeTypeDataStore self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.MimeTypeDataStore: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.MimeTypeDataStore: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.general.DataLocation.MimeTypeDataStore
  @param  Dloc_DataLocationStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Dloc_MimeTypeDataStore Dloc_MimeTypeDataStore_Init(Dloc_DataLocationStore parent, ApiMap attrlinks)
{
  
  return Dloc_DataLocationStore_NewMimeTypeDataStore(parent, attrlinks);
}

/**
  Constructor for ccp.general.DataLocation.MimeTypeDataStore
  @param  Dloc_DataLocationStore parent
  @param  Dloc_DataUrl dataUrl
  @param  char * mimeType
  @param  char * path
  @returns  the new object
**/
Dloc_MimeTypeDataStore Dloc_MimeTypeDataStore_Init_reqd(Dloc_DataLocationStore parent, Dloc_DataUrl dataUrl, char * mimeType, char * path)
{
  
  Dloc_MimeTypeDataStore  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__mimeType = ApiString_New(mimeType);
  ApiString api__path = ApiString_New(path);

  PyDict_SetItemString(attrlinks, "dataUrl", dataUrl);
  PyDict_SetItemString(attrlinks, "mimeType", api__mimeType);
  PyDict_SetItemString(attrlinks, "path", api__path);
  
  obj = Dloc_MimeTypeDataStore_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__mimeType);
  Py_DECREF(api__path);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_MimeTypeDataStore self
  @param  Impl_ApplicationData value
**/
void *Dloc_MimeTypeDataStore_RemoveApplicationData(Dloc_MimeTypeDataStore self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.MimeTypeDataStore: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.MimeTypeDataStore: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.general.DataLocation.MimeTypeDataStore
  @param  Dloc_MimeTypeDataStore self
  @param  ApiString name
  @param  ApiObject value
**/
void *Dloc_MimeTypeDataStore_Set(Dloc_MimeTypeDataStore self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Dloc_MimeTypeDataStore self
  @param  Acco_AccessObject value
**/
void *Dloc_MimeTypeDataStore_SetAccess(Dloc_MimeTypeDataStore self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.MimeTypeDataStore: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.MimeTypeDataStore: method 'setAccess' is not callable");
  
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
  @param  Dloc_MimeTypeDataStore self
  @param  ApiList values
**/
void *Dloc_MimeTypeDataStore_SetApplicationData(Dloc_MimeTypeDataStore self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.MimeTypeDataStore: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.MimeTypeDataStore: method 'setApplicationData' is not callable");
  
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
  @param  Dloc_MimeTypeDataStore self
  @param  Dloc_DataUrl value
**/
void *Dloc_MimeTypeDataStore_SetDataUrl(Dloc_MimeTypeDataStore self, Dloc_DataUrl value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDataUrl");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.MimeTypeDataStore: cannot find method 'setDataUrl'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.MimeTypeDataStore: method 'setDataUrl' is not callable");
  
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
  @param  Dloc_MimeTypeDataStore self
  @param  ApiString value
**/
void *Dloc_MimeTypeDataStore_SetDetails(Dloc_MimeTypeDataStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.MimeTypeDataStore: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.MimeTypeDataStore: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.DataLocation.MimeTypeDataStore.mimeType

mime type 
of datasource
  @param  Dloc_MimeTypeDataStore self
  @param  ApiString value
**/
void *Dloc_MimeTypeDataStore_SetMimeType(Dloc_MimeTypeDataStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMimeType");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.MimeTypeDataStore: cannot find method 'setMimeType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.MimeTypeDataStore: method 'setMimeType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.general.DataLocation.MimeTypeDataStore.nmrDataSourceImage

ccp.nmr.Nmr.DataSourceImage 
stored in this DataStore
  @param  Dloc_MimeTypeDataStore self
  @param  Nmr_DataSourceImage value
**/
void *Dloc_MimeTypeDataStore_SetNmrDataSourceImage(Dloc_MimeTypeDataStore self, Nmr_DataSourceImage value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNmrDataSourceImage");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.MimeTypeDataStore: cannot find method 'setNmrDataSourceImage'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.MimeTypeDataStore: method 'setNmrDataSourceImage' is not callable");
  
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
  @param  Dloc_MimeTypeDataStore self
  @param  ApiString value
**/
void *Dloc_MimeTypeDataStore_SetPath(Dloc_MimeTypeDataStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPath");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.MimeTypeDataStore: cannot find method 'setPath'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.MimeTypeDataStore: method 'setPath' is not callable");
  
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
  @param  Dloc_MimeTypeDataStore self
  @param  ApiInteger value
**/
void *Dloc_MimeTypeDataStore_SetSerial(Dloc_MimeTypeDataStore self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.MimeTypeDataStore: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.MimeTypeDataStore: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
