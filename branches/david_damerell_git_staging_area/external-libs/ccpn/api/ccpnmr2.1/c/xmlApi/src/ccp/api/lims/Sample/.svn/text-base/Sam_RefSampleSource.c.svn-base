
#include "ccp.h"

/*
  Defines examples of supplier details for this particular reagent to allow a link to be created to the product data page.
*/

/* package ccp.api.lims.Sample */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_RefSampleSource self
  @param  Impl_ApplicationData value
**/
void *Sam_RefSampleSource_AddApplicationData(Sam_RefSampleSource self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSampleSource: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSampleSource: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.lims.Sample.RefSampleSource
  @param  Sam_RefSampleSource self
  @param  ApiBoolean complete
**/
void *Sam_RefSampleSource_CheckAllValid(Sam_RefSampleSource self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSampleSource: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSampleSource: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.lims.Sample.RefSampleSource
  @param  Sam_RefSampleSource self
  @param  ApiBoolean complete
**/
void *Sam_RefSampleSource_CheckValid(Sam_RefSampleSource self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSampleSource: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSampleSource: method 'checkValid' is not callable");
  
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
  @param  Sam_RefSampleSource self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Sam_RefSampleSource_FindAllApplicationData(Sam_RefSampleSource self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSampleSource: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSampleSource: method 'findAllApplicationData' is not callable");
  
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
  @param  Sam_RefSampleSource self
  @returns  all value that satisfy the conditions 
**/
ApiList Sam_RefSampleSource_FindAllApplicationData_keyval0(Sam_RefSampleSource self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Sam_RefSampleSource_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_RefSampleSource self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Sam_RefSampleSource_FindAllApplicationData_keyval1(Sam_RefSampleSource self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Sam_RefSampleSource_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_RefSampleSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Sam_RefSampleSource_FindAllApplicationData_keyval2(Sam_RefSampleSource self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Sam_RefSampleSource_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_RefSampleSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Sam_RefSampleSource_FindAllApplicationData_keyval3(Sam_RefSampleSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Sam_RefSampleSource_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_RefSampleSource self
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
ApiList Sam_RefSampleSource_FindAllApplicationData_keyval4(Sam_RefSampleSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Sam_RefSampleSource_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_RefSampleSource self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Sam_RefSampleSource_FindFirstApplicationData(Sam_RefSampleSource self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSampleSource: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSampleSource: method 'findFirstApplicationData' is not callable");
  
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
  @param  Sam_RefSampleSource self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Sam_RefSampleSource_FindFirstApplicationData_keyval0(Sam_RefSampleSource self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Sam_RefSampleSource_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_RefSampleSource self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Sam_RefSampleSource_FindFirstApplicationData_keyval1(Sam_RefSampleSource self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Sam_RefSampleSource_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_RefSampleSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Sam_RefSampleSource_FindFirstApplicationData_keyval2(Sam_RefSampleSource self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Sam_RefSampleSource_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_RefSampleSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Sam_RefSampleSource_FindFirstApplicationData_keyval3(Sam_RefSampleSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Sam_RefSampleSource_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_RefSampleSource self
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
Impl_ApplicationData Sam_RefSampleSource_FindFirstApplicationData_keyval4(Sam_RefSampleSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Sam_RefSampleSource_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.lims.Sample.RefSampleSource
  @param  Sam_RefSampleSource self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Sam_RefSampleSource_Get(Sam_RefSampleSource self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Sam_RefSampleSource self
  @returns   the result
**/
Acco_AccessObject Sam_RefSampleSource_GetAccess(Sam_RefSampleSource self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSampleSource: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSampleSource: method 'getAccess' is not callable");
  
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
  @param  Sam_RefSampleSource self
  @returns   the result
**/
Acco_AccessObject Sam_RefSampleSource_GetActiveAccess(Sam_RefSampleSource self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSampleSource: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSampleSource: method 'getActiveAccess' is not callable");
  
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
  @param  Sam_RefSampleSource self
  @returns   the result
**/
ApiList Sam_RefSampleSource_GetApplicationData(Sam_RefSampleSource self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSampleSource: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSampleSource: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.lims.Sample.RefSampleSource
  @param  Sam_RefSampleSource self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Sam_RefSampleSource Sam_RefSampleSource_GetByKey(Sam_RefSampleSource self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Sam_RefSampleSource obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSampleSource: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSampleSource: method 'getByKey' is not callable");
  
  args = PyTuple_Pack(2, startObj, fullKey);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Sample.RefSampleSource.catalogNum

The catalog number.
  @param  Sam_RefSampleSource self
  @returns   the result
**/
ApiString Sam_RefSampleSource_GetCatalogNum(Sam_RefSampleSource self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCatalogNum");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSampleSource: cannot find method 'getCatalogNum'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSampleSource: method 'getCatalogNum' is not callable");
  
  args = PyTuple_New(0);
  
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
  @param  Sam_RefSampleSource self
  @returns   the result
**/
ApiString Sam_RefSampleSource_GetClassName(Sam_RefSampleSource self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSampleSource: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSampleSource: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Sample.RefSampleSource.dataPageUrl

The url for the 
product data page
  @param  Sam_RefSampleSource self
  @returns   the result
**/
ApiString Sam_RefSampleSource_GetDataPageUrl(Sam_RefSampleSource self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDataPageUrl");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSampleSource: cannot find method 'getDataPageUrl'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSampleSource: method 'getDataPageUrl' is not callable");
  
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
  @param  Sam_RefSampleSource self
  @returns   the result
**/
ApiList Sam_RefSampleSource_GetFieldNames(Sam_RefSampleSource self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSampleSource: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSampleSource: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.lims.Sample.RefSampleSource
  @param  Sam_RefSampleSource self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Sam_RefSampleSource_GetFullKey(Sam_RefSampleSource self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSampleSource: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSampleSource: method 'getFullKey' is not callable");
  
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
  @param  Sam_RefSampleSource self
  @returns   the result
**/
ApiBoolean Sam_RefSampleSource_GetInConstructor(Sam_RefSampleSource self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSampleSource: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSampleSource: method 'getInConstructor' is not callable");
  
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
  @param  Sam_RefSampleSource self
  @returns   the result
**/
ApiBoolean Sam_RefSampleSource_GetIsDeleted(Sam_RefSampleSource self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSampleSource: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSampleSource: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.lims.Sample.RefSampleSource
  @param  Sam_RefSampleSource self
  @returns  Local object key
**/
ApiObject Sam_RefSampleSource_GetLocalKey(Sam_RefSampleSource self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSampleSource: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSampleSource: method 'getLocalKey' is not callable");
  
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
  @param  Sam_RefSampleSource self
  @returns   the result
**/
ApiString Sam_RefSampleSource_GetPackageName(Sam_RefSampleSource self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSampleSource: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSampleSource: method 'getPackageName' is not callable");
  
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
  @param  Sam_RefSampleSource self
  @returns   the result
**/
ApiString Sam_RefSampleSource_GetPackageShortName(Sam_RefSampleSource self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSampleSource: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSampleSource: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Sample.RefSampleSource.parent

link to parent object - 
synonym for refSample
  @param  Sam_RefSampleSource self
  @returns   the result
**/
Sam_RefSample Sam_RefSampleSource_GetParent(Sam_RefSampleSource self)
{
  
  Sam_RefSample obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSampleSource: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSampleSource: method 'getParent' is not callable");
  
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
  @param  Sam_RefSampleSource self
  @returns   the result
**/
ApiString Sam_RefSampleSource_GetQualifiedName(Sam_RefSampleSource self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSampleSource: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSampleSource: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Sample.RefSampleSource.refSample

parent link
  @param  Sam_RefSampleSource self
  @returns   the result
**/
Sam_RefSample Sam_RefSampleSource_GetRefSample(Sam_RefSampleSource self)
{
  
  Sam_RefSample obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRefSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSampleSource: cannot find method 'getRefSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSampleSource: method 'getRefSample' is not callable");
  
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
  @param  Sam_RefSampleSource self
  @returns   the result
**/
Impl_MemopsRoot Sam_RefSampleSource_GetRoot(Sam_RefSampleSource self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSampleSource: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSampleSource: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Sample.RefSampleSource.supplier

The name of the 
laboratory if it is 'Home made' or the name of the company who provides 
the component.
  @param  Sam_RefSampleSource self
  @returns   the result
**/
Affi_Organisation Sam_RefSampleSource_GetSupplier(Sam_RefSampleSource self)
{
  
  Affi_Organisation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSupplier");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSampleSource: cannot find method 'getSupplier'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSampleSource: method 'getSupplier' is not callable");
  
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
  @param  Sam_RefSampleSource self
  @returns   the result
**/
Impl_TopObject Sam_RefSampleSource_GetTopObject(Sam_RefSampleSource self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSampleSource: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSampleSource: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.lims.Sample.RefSampleSource
  @param  Sam_RefSample parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Sam_RefSampleSource Sam_RefSampleSource_Init(Sam_RefSample parent, ApiMap attrlinks)
{
  
  return Sam_RefSample_NewRefSampleSource(parent, attrlinks);
}

/**
  Constructor for ccp.lims.Sample.RefSampleSource
  @param  Sam_RefSample parent
  @param  char * catalogNum
  @param  Affi_Organisation supplier
  @returns  the new object
**/
Sam_RefSampleSource Sam_RefSampleSource_Init_reqd(Sam_RefSample parent, char * catalogNum, Affi_Organisation supplier)
{
  
  Sam_RefSampleSource  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__catalogNum = ApiString_New(catalogNum);

  PyDict_SetItemString(attrlinks, "catalogNum", api__catalogNum);
  PyDict_SetItemString(attrlinks, "supplier", supplier);
  
  obj = Sam_RefSampleSource_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__catalogNum);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_RefSampleSource self
  @param  Impl_ApplicationData value
**/
void *Sam_RefSampleSource_RemoveApplicationData(Sam_RefSampleSource self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSampleSource: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSampleSource: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.lims.Sample.RefSampleSource
  @param  Sam_RefSampleSource self
  @param  ApiString name
  @param  ApiObject value
**/
void *Sam_RefSampleSource_Set(Sam_RefSampleSource self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Sam_RefSampleSource self
  @param  Acco_AccessObject value
**/
void *Sam_RefSampleSource_SetAccess(Sam_RefSampleSource self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSampleSource: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSampleSource: method 'setAccess' is not callable");
  
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
  @param  Sam_RefSampleSource self
  @param  ApiList values
**/
void *Sam_RefSampleSource_SetApplicationData(Sam_RefSampleSource self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSampleSource: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSampleSource: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Sample.RefSampleSource.catalogNum

The catalog number.
  @param  Sam_RefSampleSource self
  @param  ApiString value
**/
void *Sam_RefSampleSource_SetCatalogNum(Sam_RefSampleSource self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCatalogNum");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSampleSource: cannot find method 'setCatalogNum'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSampleSource: method 'setCatalogNum' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Sample.RefSampleSource.dataPageUrl

The url for the 
product data page
  @param  Sam_RefSampleSource self
  @param  ApiString value
**/
void *Sam_RefSampleSource_SetDataPageUrl(Sam_RefSampleSource self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDataPageUrl");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSampleSource: cannot find method 'setDataPageUrl'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSampleSource: method 'setDataPageUrl' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Sample.RefSampleSource.supplier

The name of the 
laboratory if it is 'Home made' or the name of the company who provides 
the component.
  @param  Sam_RefSampleSource self
  @param  Affi_Organisation value
**/
void *Sam_RefSampleSource_SetSupplier(Sam_RefSampleSource self, Affi_Organisation value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSupplier");
  
  if (!method)
    return raiseApiException("ccp.lims.Sample.RefSampleSource: cannot find method 'setSupplier'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Sample.RefSampleSource: method 'setSupplier' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
