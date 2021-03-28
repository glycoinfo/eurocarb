
#include "ccp.h"

/*
  Database entry related to the current entry.
*/

/* package ccp.api.nmr.NmrEntry */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_RelatedEntry self
  @param  Impl_ApplicationData value
**/
void *Entr_RelatedEntry_AddApplicationData(Entr_RelatedEntry self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.RelatedEntry: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.RelatedEntry: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.nmr.NmrEntry.RelatedEntry
  @param  Entr_RelatedEntry self
  @param  ApiBoolean complete
**/
void *Entr_RelatedEntry_CheckAllValid(Entr_RelatedEntry self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.RelatedEntry: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.RelatedEntry: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.nmr.NmrEntry.RelatedEntry
  @param  Entr_RelatedEntry self
  @param  ApiBoolean complete
**/
void *Entr_RelatedEntry_CheckValid(Entr_RelatedEntry self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.RelatedEntry: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.RelatedEntry: method 'checkValid' is not callable");
  
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
  @param  Entr_RelatedEntry self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Entr_RelatedEntry_FindAllApplicationData(Entr_RelatedEntry self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.RelatedEntry: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.RelatedEntry: method 'findAllApplicationData' is not callable");
  
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
  @param  Entr_RelatedEntry self
  @returns  all value that satisfy the conditions 
**/
ApiList Entr_RelatedEntry_FindAllApplicationData_keyval0(Entr_RelatedEntry self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Entr_RelatedEntry_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_RelatedEntry self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Entr_RelatedEntry_FindAllApplicationData_keyval1(Entr_RelatedEntry self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Entr_RelatedEntry_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_RelatedEntry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Entr_RelatedEntry_FindAllApplicationData_keyval2(Entr_RelatedEntry self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Entr_RelatedEntry_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_RelatedEntry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Entr_RelatedEntry_FindAllApplicationData_keyval3(Entr_RelatedEntry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Entr_RelatedEntry_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_RelatedEntry self
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
ApiList Entr_RelatedEntry_FindAllApplicationData_keyval4(Entr_RelatedEntry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Entr_RelatedEntry_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_RelatedEntry self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Entr_RelatedEntry_FindFirstApplicationData(Entr_RelatedEntry self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.RelatedEntry: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.RelatedEntry: method 'findFirstApplicationData' is not callable");
  
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
  @param  Entr_RelatedEntry self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Entr_RelatedEntry_FindFirstApplicationData_keyval0(Entr_RelatedEntry self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Entr_RelatedEntry_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_RelatedEntry self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Entr_RelatedEntry_FindFirstApplicationData_keyval1(Entr_RelatedEntry self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Entr_RelatedEntry_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_RelatedEntry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Entr_RelatedEntry_FindFirstApplicationData_keyval2(Entr_RelatedEntry self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Entr_RelatedEntry_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_RelatedEntry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Entr_RelatedEntry_FindFirstApplicationData_keyval3(Entr_RelatedEntry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Entr_RelatedEntry_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_RelatedEntry self
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
Impl_ApplicationData Entr_RelatedEntry_FindFirstApplicationData_keyval4(Entr_RelatedEntry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Entr_RelatedEntry_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.nmr.NmrEntry.RelatedEntry
  @param  Entr_RelatedEntry self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Entr_RelatedEntry_Get(Entr_RelatedEntry self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Entr_RelatedEntry self
  @returns   the result
**/
Acco_AccessObject Entr_RelatedEntry_GetAccess(Entr_RelatedEntry self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.RelatedEntry: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.RelatedEntry: method 'getAccess' is not callable");
  
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
  @param  Entr_RelatedEntry self
  @returns   the result
**/
ApiList Entr_RelatedEntry_GetApplicationData(Entr_RelatedEntry self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.RelatedEntry: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.RelatedEntry: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.NmrEntry.RelatedEntry
  @param  Entr_RelatedEntry self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Entr_RelatedEntry Entr_RelatedEntry_GetByKey(Entr_RelatedEntry self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Entr_RelatedEntry obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.RelatedEntry: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.RelatedEntry: method 'getByKey' is not callable");
  
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
  @param  Entr_RelatedEntry self
  @returns   the result
**/
ApiString Entr_RelatedEntry_GetClassName(Entr_RelatedEntry self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.RelatedEntry: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.RelatedEntry: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrEntry.RelatedEntry.dbId

Database identifier of 
related entry
  @param  Entr_RelatedEntry self
  @returns   the result
**/
ApiString Entr_RelatedEntry_GetDbId(Entr_RelatedEntry self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDbId");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.RelatedEntry: cannot find method 'getDbId'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.RelatedEntry: method 'getDbId' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrEntry.RelatedEntry.dbName

Name of database 
containing related entry, ('BMRB', 'PDB, ...)
  @param  Entr_RelatedEntry self
  @returns   the result
**/
ApiString Entr_RelatedEntry_GetDbName(Entr_RelatedEntry self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDbName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.RelatedEntry: cannot find method 'getDbName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.RelatedEntry: method 'getDbName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrEntry.RelatedEntry.entry

parent link
  @param  Entr_RelatedEntry self
  @returns   the result
**/
Entr_Entry Entr_RelatedEntry_GetEntry(Entr_RelatedEntry self)
{
  
  Entr_Entry obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getEntry");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.RelatedEntry: cannot find method 'getEntry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.RelatedEntry: method 'getEntry' is not callable");
  
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
  @param  Entr_RelatedEntry self
  @returns   the result
**/
ApiList Entr_RelatedEntry_GetFieldNames(Entr_RelatedEntry self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.RelatedEntry: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.RelatedEntry: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.nmr.NmrEntry.RelatedEntry
  @param  Entr_RelatedEntry self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Entr_RelatedEntry_GetFullKey(Entr_RelatedEntry self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.RelatedEntry: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.RelatedEntry: method 'getFullKey' is not callable");
  
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
  @param  Entr_RelatedEntry self
  @returns   the result
**/
ApiBoolean Entr_RelatedEntry_GetInConstructor(Entr_RelatedEntry self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.RelatedEntry: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.RelatedEntry: method 'getInConstructor' is not callable");
  
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
  @param  Entr_RelatedEntry self
  @returns   the result
**/
ApiBoolean Entr_RelatedEntry_GetIsDeleted(Entr_RelatedEntry self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.RelatedEntry: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.RelatedEntry: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.nmr.NmrEntry.RelatedEntry
  @param  Entr_RelatedEntry self
  @returns  Local object key
**/
ApiObject Entr_RelatedEntry_GetLocalKey(Entr_RelatedEntry self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.RelatedEntry: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.RelatedEntry: method 'getLocalKey' is not callable");
  
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
  @param  Entr_RelatedEntry self
  @returns   the result
**/
ApiString Entr_RelatedEntry_GetPackageName(Entr_RelatedEntry self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.RelatedEntry: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.RelatedEntry: method 'getPackageName' is not callable");
  
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
  @param  Entr_RelatedEntry self
  @returns   the result
**/
ApiString Entr_RelatedEntry_GetPackageShortName(Entr_RelatedEntry self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.RelatedEntry: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.RelatedEntry: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrEntry.RelatedEntry.parent

link to parent object - 
synonym for entry
  @param  Entr_RelatedEntry self
  @returns   the result
**/
Entr_Entry Entr_RelatedEntry_GetParent(Entr_RelatedEntry self)
{
  
  Entr_Entry obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.RelatedEntry: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.RelatedEntry: method 'getParent' is not callable");
  
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
  @param  Entr_RelatedEntry self
  @returns   the result
**/
ApiString Entr_RelatedEntry_GetQualifiedName(Entr_RelatedEntry self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.RelatedEntry: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.RelatedEntry: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrEntry.RelatedEntry.relationship

what is the 
relationship between the current entry and the cited one. NB Should 
probably be an open enum. E.g. 'supersedes',
  @param  Entr_RelatedEntry self
  @returns   the result
**/
ApiString Entr_RelatedEntry_GetRelationship(Entr_RelatedEntry self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRelationship");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.RelatedEntry: cannot find method 'getRelationship'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.RelatedEntry: method 'getRelationship' is not callable");
  
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
  @param  Entr_RelatedEntry self
  @returns   the result
**/
Impl_MemopsRoot Entr_RelatedEntry_GetRoot(Entr_RelatedEntry self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.RelatedEntry: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.RelatedEntry: method 'getRoot' is not callable");
  
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
  @param  Entr_RelatedEntry self
  @returns   the result
**/
Impl_TopObject Entr_RelatedEntry_GetTopObject(Entr_RelatedEntry self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.RelatedEntry: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.RelatedEntry: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.nmr.NmrEntry.RelatedEntry
  @param  Entr_Entry parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Entr_RelatedEntry Entr_RelatedEntry_Init(Entr_Entry parent, ApiMap attrlinks)
{
  
  return Entr_Entry_NewRelatedEntry(parent, attrlinks);
}

/**
  Constructor for ccp.nmr.NmrEntry.RelatedEntry
  @param  Entr_Entry parent
  @param  char * dbId
  @returns  the new object
**/
Entr_RelatedEntry Entr_RelatedEntry_Init_reqd(Entr_Entry parent, char * dbId)
{
  
  Entr_RelatedEntry  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__dbId = ApiString_New(dbId);

  PyDict_SetItemString(attrlinks, "dbId", api__dbId);
  
  obj = Entr_RelatedEntry_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__dbId);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_RelatedEntry self
  @param  Impl_ApplicationData value
**/
void *Entr_RelatedEntry_RemoveApplicationData(Entr_RelatedEntry self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.RelatedEntry: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.RelatedEntry: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.nmr.NmrEntry.RelatedEntry
  @param  Entr_RelatedEntry self
  @param  ApiString name
  @param  ApiObject value
**/
void *Entr_RelatedEntry_Set(Entr_RelatedEntry self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Entr_RelatedEntry self
  @param  Acco_AccessObject value
**/
void *Entr_RelatedEntry_SetAccess(Entr_RelatedEntry self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.RelatedEntry: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.RelatedEntry: method 'setAccess' is not callable");
  
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
  @param  Entr_RelatedEntry self
  @param  ApiList values
**/
void *Entr_RelatedEntry_SetApplicationData(Entr_RelatedEntry self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.RelatedEntry: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.RelatedEntry: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrEntry.RelatedEntry.dbId

Database identifier of 
related entry
  @param  Entr_RelatedEntry self
  @param  ApiString value
**/
void *Entr_RelatedEntry_SetDbId(Entr_RelatedEntry self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDbId");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.RelatedEntry: cannot find method 'setDbId'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.RelatedEntry: method 'setDbId' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrEntry.RelatedEntry.dbName

Name of database 
containing related entry, ('BMRB', 'PDB, ...)
  @param  Entr_RelatedEntry self
  @param  ApiString value
**/
void *Entr_RelatedEntry_SetDbName(Entr_RelatedEntry self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDbName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.RelatedEntry: cannot find method 'setDbName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.RelatedEntry: method 'setDbName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrEntry.RelatedEntry.relationship

what is the 
relationship between the current entry and the cited one. NB Should 
probably be an open enum. E.g. 'supersedes',
  @param  Entr_RelatedEntry self
  @param  ApiString value
**/
void *Entr_RelatedEntry_SetRelationship(Entr_RelatedEntry self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRelationship");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.RelatedEntry: cannot find method 'setRelationship'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.RelatedEntry: method 'setRelationship' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
