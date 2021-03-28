
#include "ccp.h"

/*
  
*/

/* package ccp.api.lims.Holder */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_RefSamplePosition self
  @param  Impl_ApplicationData value
**/
void *Hold_RefSamplePosition_AddApplicationData(Hold_RefSamplePosition self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.RefSamplePosition: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.RefSamplePosition: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.lims.Holder.RefSamplePosition
  @param  Hold_RefSamplePosition self
  @param  ApiBoolean complete
**/
void *Hold_RefSamplePosition_CheckAllValid(Hold_RefSamplePosition self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.RefSamplePosition: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.RefSamplePosition: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.lims.Holder.RefSamplePosition
  @param  Hold_RefSamplePosition self
  @param  ApiBoolean complete
**/
void *Hold_RefSamplePosition_CheckValid(Hold_RefSamplePosition self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.RefSamplePosition: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.RefSamplePosition: method 'checkValid' is not callable");
  
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
  @param  Hold_RefSamplePosition self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Hold_RefSamplePosition_FindAllApplicationData(Hold_RefSamplePosition self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.RefSamplePosition: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.RefSamplePosition: method 'findAllApplicationData' is not callable");
  
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
  @param  Hold_RefSamplePosition self
  @returns  all value that satisfy the conditions 
**/
ApiList Hold_RefSamplePosition_FindAllApplicationData_keyval0(Hold_RefSamplePosition self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Hold_RefSamplePosition_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_RefSamplePosition self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Hold_RefSamplePosition_FindAllApplicationData_keyval1(Hold_RefSamplePosition self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Hold_RefSamplePosition_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_RefSamplePosition self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Hold_RefSamplePosition_FindAllApplicationData_keyval2(Hold_RefSamplePosition self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Hold_RefSamplePosition_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_RefSamplePosition self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Hold_RefSamplePosition_FindAllApplicationData_keyval3(Hold_RefSamplePosition self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Hold_RefSamplePosition_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_RefSamplePosition self
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
ApiList Hold_RefSamplePosition_FindAllApplicationData_keyval4(Hold_RefSamplePosition self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Hold_RefSamplePosition_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_RefSamplePosition self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Hold_RefSamplePosition_FindFirstApplicationData(Hold_RefSamplePosition self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.RefSamplePosition: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.RefSamplePosition: method 'findFirstApplicationData' is not callable");
  
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
  @param  Hold_RefSamplePosition self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Hold_RefSamplePosition_FindFirstApplicationData_keyval0(Hold_RefSamplePosition self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Hold_RefSamplePosition_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_RefSamplePosition self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Hold_RefSamplePosition_FindFirstApplicationData_keyval1(Hold_RefSamplePosition self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Hold_RefSamplePosition_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_RefSamplePosition self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Hold_RefSamplePosition_FindFirstApplicationData_keyval2(Hold_RefSamplePosition self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Hold_RefSamplePosition_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_RefSamplePosition self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Hold_RefSamplePosition_FindFirstApplicationData_keyval3(Hold_RefSamplePosition self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Hold_RefSamplePosition_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_RefSamplePosition self
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
Impl_ApplicationData Hold_RefSamplePosition_FindFirstApplicationData_keyval4(Hold_RefSamplePosition self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Hold_RefSamplePosition_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.lims.Holder.RefSamplePosition
  @param  Hold_RefSamplePosition self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Hold_RefSamplePosition_Get(Hold_RefSamplePosition self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Hold_RefSamplePosition self
  @returns   the result
**/
Acco_AccessObject Hold_RefSamplePosition_GetAccess(Hold_RefSamplePosition self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.RefSamplePosition: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.RefSamplePosition: method 'getAccess' is not callable");
  
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
  @param  Hold_RefSamplePosition self
  @returns   the result
**/
ApiList Hold_RefSamplePosition_GetApplicationData(Hold_RefSamplePosition self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.RefSamplePosition: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.RefSamplePosition: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.lims.Holder.RefSamplePosition
  @param  Hold_RefSamplePosition self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Hold_RefSamplePosition Hold_RefSamplePosition_GetByKey(Hold_RefSamplePosition self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Hold_RefSamplePosition obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.RefSamplePosition: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.RefSamplePosition: method 'getByKey' is not callable");
  
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
  @param  Hold_RefSamplePosition self
  @returns   the result
**/
ApiString Hold_RefSamplePosition_GetClassName(Hold_RefSamplePosition self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.RefSamplePosition: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.RefSamplePosition: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Holder.RefSamplePosition.colPosition

The column 
position of the refSample in the holder.
  @param  Hold_RefSamplePosition self
  @returns   the result
**/
ApiInteger Hold_RefSamplePosition_GetColPosition(Hold_RefSamplePosition self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getColPosition");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.RefSamplePosition: cannot find method 'getColPosition'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.RefSamplePosition: method 'getColPosition' is not callable");
  
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
  @param  Hold_RefSamplePosition self
  @returns   the result
**/
ApiList Hold_RefSamplePosition_GetFieldNames(Hold_RefSamplePosition self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.RefSamplePosition: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.RefSamplePosition: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.lims.Holder.RefSamplePosition
  @param  Hold_RefSamplePosition self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Hold_RefSamplePosition_GetFullKey(Hold_RefSamplePosition self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.RefSamplePosition: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.RefSamplePosition: method 'getFullKey' is not callable");
  
  args = PyTuple_Pack(1, useGuid);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Holder.RefSamplePosition.holder

parent link
  @param  Hold_RefSamplePosition self
  @returns   the result
**/
Hold_Holder Hold_RefSamplePosition_GetHolder(Hold_RefSamplePosition self)
{
  
  Hold_Holder obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getHolder");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.RefSamplePosition: cannot find method 'getHolder'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.RefSamplePosition: method 'getHolder' is not callable");
  
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
  @param  Hold_RefSamplePosition self
  @returns   the result
**/
ApiBoolean Hold_RefSamplePosition_GetInConstructor(Hold_RefSamplePosition self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.RefSamplePosition: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.RefSamplePosition: method 'getInConstructor' is not callable");
  
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
  @param  Hold_RefSamplePosition self
  @returns   the result
**/
ApiBoolean Hold_RefSamplePosition_GetIsDeleted(Hold_RefSamplePosition self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.RefSamplePosition: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.RefSamplePosition: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.lims.Holder.RefSamplePosition
  @param  Hold_RefSamplePosition self
  @returns  Local object key
**/
ApiObject Hold_RefSamplePosition_GetLocalKey(Hold_RefSamplePosition self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.RefSamplePosition: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.RefSamplePosition: method 'getLocalKey' is not callable");
  
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
  @param  Hold_RefSamplePosition self
  @returns   the result
**/
ApiString Hold_RefSamplePosition_GetPackageName(Hold_RefSamplePosition self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.RefSamplePosition: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.RefSamplePosition: method 'getPackageName' is not callable");
  
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
  @param  Hold_RefSamplePosition self
  @returns   the result
**/
ApiString Hold_RefSamplePosition_GetPackageShortName(Hold_RefSamplePosition self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.RefSamplePosition: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.RefSamplePosition: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Holder.RefSamplePosition.parent

link to parent object 
- synonym for holder
  @param  Hold_RefSamplePosition self
  @returns   the result
**/
Hold_Holder Hold_RefSamplePosition_GetParent(Hold_RefSamplePosition self)
{
  
  Hold_Holder obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.RefSamplePosition: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.RefSamplePosition: method 'getParent' is not callable");
  
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
  @param  Hold_RefSamplePosition self
  @returns   the result
**/
ApiString Hold_RefSamplePosition_GetQualifiedName(Hold_RefSamplePosition self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.RefSamplePosition: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.RefSamplePosition: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Holder.RefSamplePosition.refSample
  @param  Hold_RefSamplePosition self
  @returns   the result
**/
Sam_RefSample Hold_RefSamplePosition_GetRefSample(Hold_RefSamplePosition self)
{
  
  Sam_RefSample obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRefSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.RefSamplePosition: cannot find method 'getRefSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.RefSamplePosition: method 'getRefSample' is not callable");
  
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
  @param  Hold_RefSamplePosition self
  @returns   the result
**/
Impl_MemopsRoot Hold_RefSamplePosition_GetRoot(Hold_RefSamplePosition self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.RefSamplePosition: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.RefSamplePosition: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Holder.RefSamplePosition.rowPosition

The row position 
of the refSample in the holder.
  @param  Hold_RefSamplePosition self
  @returns   the result
**/
ApiInteger Hold_RefSamplePosition_GetRowPosition(Hold_RefSamplePosition self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRowPosition");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.RefSamplePosition: cannot find method 'getRowPosition'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.RefSamplePosition: method 'getRowPosition' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Holder.RefSamplePosition.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Hold_RefSamplePosition self
  @returns   the result
**/
ApiInteger Hold_RefSamplePosition_GetSerial(Hold_RefSamplePosition self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.RefSamplePosition: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.RefSamplePosition: method 'getSerial' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Holder.RefSamplePosition.subPosition

The sub-position 
of the refSample in the holder.
  @param  Hold_RefSamplePosition self
  @returns   the result
**/
ApiInteger Hold_RefSamplePosition_GetSubPosition(Hold_RefSamplePosition self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSubPosition");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.RefSamplePosition: cannot find method 'getSubPosition'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.RefSamplePosition: method 'getSubPosition' is not callable");
  
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
  @param  Hold_RefSamplePosition self
  @returns   the result
**/
Impl_TopObject Hold_RefSamplePosition_GetTopObject(Hold_RefSamplePosition self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.RefSamplePosition: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.RefSamplePosition: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.lims.Holder.RefSamplePosition
  @param  Hold_Holder parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Hold_RefSamplePosition Hold_RefSamplePosition_Init(Hold_Holder parent, ApiMap attrlinks)
{
  
  return Hold_Holder_NewRefSamplePosition(parent, attrlinks);
}

/**
  Constructor for ccp.lims.Holder.RefSamplePosition
  @param  Hold_Holder parent
  @returns  the new object
**/
Hold_RefSamplePosition Hold_RefSamplePosition_Init_reqd(Hold_Holder parent)
{
  
  Hold_RefSamplePosition  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Hold_RefSamplePosition_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_RefSamplePosition self
  @param  Impl_ApplicationData value
**/
void *Hold_RefSamplePosition_RemoveApplicationData(Hold_RefSamplePosition self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.RefSamplePosition: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.RefSamplePosition: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.lims.Holder.RefSamplePosition
  @param  Hold_RefSamplePosition self
  @param  ApiString name
  @param  ApiObject value
**/
void *Hold_RefSamplePosition_Set(Hold_RefSamplePosition self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Hold_RefSamplePosition self
  @param  Acco_AccessObject value
**/
void *Hold_RefSamplePosition_SetAccess(Hold_RefSamplePosition self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.RefSamplePosition: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.RefSamplePosition: method 'setAccess' is not callable");
  
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
  @param  Hold_RefSamplePosition self
  @param  ApiList values
**/
void *Hold_RefSamplePosition_SetApplicationData(Hold_RefSamplePosition self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.RefSamplePosition: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.RefSamplePosition: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Holder.RefSamplePosition.colPosition

The column 
position of the refSample in the holder.
  @param  Hold_RefSamplePosition self
  @param  ApiInteger value
**/
void *Hold_RefSamplePosition_SetColPosition(Hold_RefSamplePosition self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setColPosition");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.RefSamplePosition: cannot find method 'setColPosition'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.RefSamplePosition: method 'setColPosition' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Holder.RefSamplePosition.refSample
  @param  Hold_RefSamplePosition self
  @param  Sam_RefSample value
**/
void *Hold_RefSamplePosition_SetRefSample(Hold_RefSamplePosition self, Sam_RefSample value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRefSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.RefSamplePosition: cannot find method 'setRefSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.RefSamplePosition: method 'setRefSample' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Holder.RefSamplePosition.rowPosition

The row position 
of the refSample in the holder.
  @param  Hold_RefSamplePosition self
  @param  ApiInteger value
**/
void *Hold_RefSamplePosition_SetRowPosition(Hold_RefSamplePosition self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRowPosition");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.RefSamplePosition: cannot find method 'setRowPosition'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.RefSamplePosition: method 'setRowPosition' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Holder.RefSamplePosition.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Hold_RefSamplePosition self
  @param  ApiInteger value
**/
void *Hold_RefSamplePosition_SetSerial(Hold_RefSamplePosition self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.RefSamplePosition: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.RefSamplePosition: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Holder.RefSamplePosition.subPosition

The sub-position 
of the refSample in the holder.
  @param  Hold_RefSamplePosition self
  @param  ApiInteger value
**/
void *Hold_RefSamplePosition_SetSubPosition(Hold_RefSamplePosition self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSubPosition");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.RefSamplePosition: cannot find method 'setSubPosition'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.RefSamplePosition: method 'setSubPosition' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
