
#include "ccp.h"

/*
  Describes cases where a resonance with a particular external format name has to be copied to other resonances (using their external format name).
*/

/* package ccpnmr.api.NameMapping */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_ResonanceLinkMapping self
  @param  Impl_ApplicationData value
**/
void *Nmap_ResonanceLinkMapping_AddApplicationData(Nmap_ResonanceLinkMapping self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.ResonanceLinkMapping: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.ResonanceLinkMapping: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for 
ccpnmr.NameMapping.ResonanceLinkMapping.selectResonanceNames

The 
external format names of the resonances to be copied to (e.g. 
'A.12.HB2','A.12.HB3').
  @param  Nmap_ResonanceLinkMapping self
  @param  ApiString value
**/
void *Nmap_ResonanceLinkMapping_AddSelectResonanceName(Nmap_ResonanceLinkMapping self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addSelectResonanceName");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.ResonanceLinkMapping: cannot find method 'addSelectResonanceName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.ResonanceLinkMapping: method 'addSelectResonanceName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccpnmr.NameMapping.ResonanceLinkMapping
  @param  Nmap_ResonanceLinkMapping self
  @param  ApiBoolean complete
**/
void *Nmap_ResonanceLinkMapping_CheckAllValid(Nmap_ResonanceLinkMapping self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.ResonanceLinkMapping: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.ResonanceLinkMapping: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccpnmr.NameMapping.ResonanceLinkMapping
  @param  Nmap_ResonanceLinkMapping self
  @param  ApiBoolean complete
**/
void *Nmap_ResonanceLinkMapping_CheckValid(Nmap_ResonanceLinkMapping self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.ResonanceLinkMapping: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.ResonanceLinkMapping: method 'checkValid' is not callable");
  
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
  @param  Nmap_ResonanceLinkMapping self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmap_ResonanceLinkMapping_FindAllApplicationData(Nmap_ResonanceLinkMapping self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.ResonanceLinkMapping: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.ResonanceLinkMapping: method 'findAllApplicationData' is not callable");
  
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
  @param  Nmap_ResonanceLinkMapping self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmap_ResonanceLinkMapping_FindAllApplicationData_keyval0(Nmap_ResonanceLinkMapping self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmap_ResonanceLinkMapping_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_ResonanceLinkMapping self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmap_ResonanceLinkMapping_FindAllApplicationData_keyval1(Nmap_ResonanceLinkMapping self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmap_ResonanceLinkMapping_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_ResonanceLinkMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmap_ResonanceLinkMapping_FindAllApplicationData_keyval2(Nmap_ResonanceLinkMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmap_ResonanceLinkMapping_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_ResonanceLinkMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmap_ResonanceLinkMapping_FindAllApplicationData_keyval3(Nmap_ResonanceLinkMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmap_ResonanceLinkMapping_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_ResonanceLinkMapping self
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
ApiList Nmap_ResonanceLinkMapping_FindAllApplicationData_keyval4(Nmap_ResonanceLinkMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmap_ResonanceLinkMapping_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_ResonanceLinkMapping self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmap_ResonanceLinkMapping_FindFirstApplicationData(Nmap_ResonanceLinkMapping self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.ResonanceLinkMapping: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.ResonanceLinkMapping: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nmap_ResonanceLinkMapping self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmap_ResonanceLinkMapping_FindFirstApplicationData_keyval0(Nmap_ResonanceLinkMapping self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmap_ResonanceLinkMapping_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_ResonanceLinkMapping self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmap_ResonanceLinkMapping_FindFirstApplicationData_keyval1(Nmap_ResonanceLinkMapping self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmap_ResonanceLinkMapping_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_ResonanceLinkMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmap_ResonanceLinkMapping_FindFirstApplicationData_keyval2(Nmap_ResonanceLinkMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmap_ResonanceLinkMapping_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_ResonanceLinkMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmap_ResonanceLinkMapping_FindFirstApplicationData_keyval3(Nmap_ResonanceLinkMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmap_ResonanceLinkMapping_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_ResonanceLinkMapping self
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
Impl_ApplicationData Nmap_ResonanceLinkMapping_FindFirstApplicationData_keyval4(Nmap_ResonanceLinkMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmap_ResonanceLinkMapping_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccpnmr.NameMapping.ResonanceLinkMapping
  @param  Nmap_ResonanceLinkMapping self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Nmap_ResonanceLinkMapping_Get(Nmap_ResonanceLinkMapping self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmap_ResonanceLinkMapping self
  @returns   the result
**/
Acco_AccessObject Nmap_ResonanceLinkMapping_GetAccess(Nmap_ResonanceLinkMapping self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.ResonanceLinkMapping: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.ResonanceLinkMapping: method 'getAccess' is not callable");
  
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
  @param  Nmap_ResonanceLinkMapping self
  @returns   the result
**/
ApiList Nmap_ResonanceLinkMapping_GetApplicationData(Nmap_ResonanceLinkMapping self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.ResonanceLinkMapping: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.ResonanceLinkMapping: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccpnmr.NameMapping.ResonanceLinkMapping
  @param  Nmap_ResonanceLinkMapping self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nmap_ResonanceLinkMapping Nmap_ResonanceLinkMapping_GetByKey(Nmap_ResonanceLinkMapping self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Nmap_ResonanceLinkMapping obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.ResonanceLinkMapping: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.ResonanceLinkMapping: method 'getByKey' is not callable");
  
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
  @param  Nmap_ResonanceLinkMapping self
  @returns   the result
**/
ApiString Nmap_ResonanceLinkMapping_GetClassName(Nmap_ResonanceLinkMapping self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.ResonanceLinkMapping: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.ResonanceLinkMapping: method 'getClassName' is not callable");
  
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
  @param  Nmap_ResonanceLinkMapping self
  @returns   the result
**/
ApiList Nmap_ResonanceLinkMapping_GetFieldNames(Nmap_ResonanceLinkMapping self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.ResonanceLinkMapping: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.ResonanceLinkMapping: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccpnmr.NameMapping.ResonanceLinkMapping
  @param  Nmap_ResonanceLinkMapping self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Nmap_ResonanceLinkMapping_GetFullKey(Nmap_ResonanceLinkMapping self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.ResonanceLinkMapping: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.ResonanceLinkMapping: method 'getFullKey' is not callable");
  
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
  @param  Nmap_ResonanceLinkMapping self
  @returns   the result
**/
ApiBoolean Nmap_ResonanceLinkMapping_GetInConstructor(Nmap_ResonanceLinkMapping self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.ResonanceLinkMapping: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.ResonanceLinkMapping: method 'getInConstructor' is not callable");
  
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
  @param  Nmap_ResonanceLinkMapping self
  @returns   the result
**/
ApiBoolean Nmap_ResonanceLinkMapping_GetIsDeleted(Nmap_ResonanceLinkMapping self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.ResonanceLinkMapping: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.ResonanceLinkMapping: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccpnmr.NameMapping.ResonanceLinkMapping
  @param  Nmap_ResonanceLinkMapping self
  @returns  Local object key
**/
ApiObject Nmap_ResonanceLinkMapping_GetLocalKey(Nmap_ResonanceLinkMapping self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.ResonanceLinkMapping: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.ResonanceLinkMapping: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.NameMapping.ResonanceLinkMapping.nameMapping

parent link
  @param  Nmap_ResonanceLinkMapping self
  @returns   the result
**/
Nmap_NameMapping Nmap_ResonanceLinkMapping_GetNameMapping(Nmap_ResonanceLinkMapping self)
{
  
  Nmap_NameMapping obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNameMapping");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.ResonanceLinkMapping: cannot find method 'getNameMapping'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.ResonanceLinkMapping: method 'getNameMapping' is not callable");
  
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
  @param  Nmap_ResonanceLinkMapping self
  @returns   the result
**/
ApiString Nmap_ResonanceLinkMapping_GetPackageName(Nmap_ResonanceLinkMapping self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.ResonanceLinkMapping: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.ResonanceLinkMapping: method 'getPackageName' is not callable");
  
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
  @param  Nmap_ResonanceLinkMapping self
  @returns   the result
**/
ApiString Nmap_ResonanceLinkMapping_GetPackageShortName(Nmap_ResonanceLinkMapping self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.ResonanceLinkMapping: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.ResonanceLinkMapping: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.NameMapping.ResonanceLinkMapping.parent

link to parent 
object - synonym for nameMapping
  @param  Nmap_ResonanceLinkMapping self
  @returns   the result
**/
Nmap_NameMapping Nmap_ResonanceLinkMapping_GetParent(Nmap_ResonanceLinkMapping self)
{
  
  Nmap_NameMapping obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.ResonanceLinkMapping: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.ResonanceLinkMapping: method 'getParent' is not callable");
  
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
  @param  Nmap_ResonanceLinkMapping self
  @returns   the result
**/
ApiString Nmap_ResonanceLinkMapping_GetQualifiedName(Nmap_ResonanceLinkMapping self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.ResonanceLinkMapping: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.ResonanceLinkMapping: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.NameMapping.ResonanceLinkMapping.resonanceName

The 
external format name of the resonance to be copied (e.g. 'A.12.HB*').
  @param  Nmap_ResonanceLinkMapping self
  @returns   the result
**/
ApiString Nmap_ResonanceLinkMapping_GetResonanceName(Nmap_ResonanceLinkMapping self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getResonanceName");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.ResonanceLinkMapping: cannot find method 'getResonanceName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.ResonanceLinkMapping: method 'getResonanceName' is not callable");
  
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
  @param  Nmap_ResonanceLinkMapping self
  @returns   the result
**/
Impl_MemopsRoot Nmap_ResonanceLinkMapping_GetRoot(Nmap_ResonanceLinkMapping self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.ResonanceLinkMapping: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.ResonanceLinkMapping: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccpnmr.NameMapping.ResonanceLinkMapping.selectResonanceNames

The 
external format names of the resonances to be copied to (e.g. 
'A.12.HB2','A.12.HB3').
  @param  Nmap_ResonanceLinkMapping self
  @returns   the result
**/
ApiList Nmap_ResonanceLinkMapping_GetSelectResonanceNames(Nmap_ResonanceLinkMapping self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSelectResonanceNames");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.ResonanceLinkMapping: cannot find method 'getSelectResonanceNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.ResonanceLinkMapping: method 'getSelectResonanceNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.NameMapping.ResonanceLinkMapping.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmap_ResonanceLinkMapping self
  @returns   the result
**/
ApiInteger Nmap_ResonanceLinkMapping_GetSerial(Nmap_ResonanceLinkMapping self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.ResonanceLinkMapping: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.ResonanceLinkMapping: method 'getSerial' is not callable");
  
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
  @param  Nmap_ResonanceLinkMapping self
  @returns   the result
**/
Impl_TopObject Nmap_ResonanceLinkMapping_GetTopObject(Nmap_ResonanceLinkMapping self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.ResonanceLinkMapping: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.ResonanceLinkMapping: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccpnmr.NameMapping.ResonanceLinkMapping
  @param  Nmap_NameMapping parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmap_ResonanceLinkMapping Nmap_ResonanceLinkMapping_Init(Nmap_NameMapping parent, ApiMap attrlinks)
{
  
  return Nmap_NameMapping_NewResonanceLinkMapping(parent, attrlinks);
}

/**
  Constructor for ccpnmr.NameMapping.ResonanceLinkMapping
  @param  Nmap_NameMapping parent
  @param  char * resonanceName
  @returns  the new object
**/
Nmap_ResonanceLinkMapping Nmap_ResonanceLinkMapping_Init_reqd(Nmap_NameMapping parent, char * resonanceName)
{
  
  Nmap_ResonanceLinkMapping  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__resonanceName = ApiString_New(resonanceName);

  PyDict_SetItemString(attrlinks, "resonanceName", api__resonanceName);
  
  obj = Nmap_ResonanceLinkMapping_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__resonanceName);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_ResonanceLinkMapping self
  @param  Impl_ApplicationData value
**/
void *Nmap_ResonanceLinkMapping_RemoveApplicationData(Nmap_ResonanceLinkMapping self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.ResonanceLinkMapping: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.ResonanceLinkMapping: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
ccpnmr.NameMapping.ResonanceLinkMapping.selectResonanceNames

The 
external format names of the resonances to be copied to (e.g. 
'A.12.HB2','A.12.HB3').
  @param  Nmap_ResonanceLinkMapping self
  @param  ApiString value
**/
void *Nmap_ResonanceLinkMapping_RemoveSelectResonanceName(Nmap_ResonanceLinkMapping self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeSelectResonanceName");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.ResonanceLinkMapping: cannot find method 'removeSelectResonanceName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.ResonanceLinkMapping: method 'removeSelectResonanceName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccpnmr.NameMapping.ResonanceLinkMapping
  @param  Nmap_ResonanceLinkMapping self
  @param  ApiString name
  @param  ApiObject value
**/
void *Nmap_ResonanceLinkMapping_Set(Nmap_ResonanceLinkMapping self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmap_ResonanceLinkMapping self
  @param  Acco_AccessObject value
**/
void *Nmap_ResonanceLinkMapping_SetAccess(Nmap_ResonanceLinkMapping self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.ResonanceLinkMapping: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.ResonanceLinkMapping: method 'setAccess' is not callable");
  
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
  @param  Nmap_ResonanceLinkMapping self
  @param  ApiList values
**/
void *Nmap_ResonanceLinkMapping_SetApplicationData(Nmap_ResonanceLinkMapping self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.ResonanceLinkMapping: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.ResonanceLinkMapping: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.NameMapping.ResonanceLinkMapping.resonanceName

The 
external format name of the resonance to be copied (e.g. 'A.12.HB*').
  @param  Nmap_ResonanceLinkMapping self
  @param  ApiString value
**/
void *Nmap_ResonanceLinkMapping_SetResonanceName(Nmap_ResonanceLinkMapping self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setResonanceName");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.ResonanceLinkMapping: cannot find method 'setResonanceName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.ResonanceLinkMapping: method 'setResonanceName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccpnmr.NameMapping.ResonanceLinkMapping.selectResonanceNames

The 
external format names of the resonances to be copied to (e.g. 
'A.12.HB2','A.12.HB3').
  @param  Nmap_ResonanceLinkMapping self
  @param  ApiList values
**/
void *Nmap_ResonanceLinkMapping_SetSelectResonanceNames(Nmap_ResonanceLinkMapping self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSelectResonanceNames");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.ResonanceLinkMapping: cannot find method 'setSelectResonanceNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.ResonanceLinkMapping: method 'setSelectResonanceNames' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.NameMapping.ResonanceLinkMapping.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmap_ResonanceLinkMapping self
  @param  ApiInteger value
**/
void *Nmap_ResonanceLinkMapping_SetSerial(Nmap_ResonanceLinkMapping self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.ResonanceLinkMapping: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.ResonanceLinkMapping: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
