
#include "ccp.h"

/*
  Description of the position in a certain holder type.
*/

/* package ccp.api.lims.Holder */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderTypePosition self
  @param  Impl_ApplicationData value
**/
void *Hold_HolderTypePosition_AddApplicationData(Hold_HolderTypePosition self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.lims.Holder.HolderTypePosition
  @param  Hold_HolderTypePosition self
  @param  ApiBoolean complete
**/
void *Hold_HolderTypePosition_CheckAllValid(Hold_HolderTypePosition self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.lims.Holder.HolderTypePosition
  @param  Hold_HolderTypePosition self
  @param  ApiBoolean complete
**/
void *Hold_HolderTypePosition_CheckValid(Hold_HolderTypePosition self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: method 'checkValid' is not callable");
  
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
  @param  Hold_HolderTypePosition self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Hold_HolderTypePosition_FindAllApplicationData(Hold_HolderTypePosition self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: method 'findAllApplicationData' is not callable");
  
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
  @param  Hold_HolderTypePosition self
  @returns  all value that satisfy the conditions 
**/
ApiList Hold_HolderTypePosition_FindAllApplicationData_keyval0(Hold_HolderTypePosition self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Hold_HolderTypePosition_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderTypePosition self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Hold_HolderTypePosition_FindAllApplicationData_keyval1(Hold_HolderTypePosition self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Hold_HolderTypePosition_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderTypePosition self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Hold_HolderTypePosition_FindAllApplicationData_keyval2(Hold_HolderTypePosition self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Hold_HolderTypePosition_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderTypePosition self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Hold_HolderTypePosition_FindAllApplicationData_keyval3(Hold_HolderTypePosition self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Hold_HolderTypePosition_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderTypePosition self
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
ApiList Hold_HolderTypePosition_FindAllApplicationData_keyval4(Hold_HolderTypePosition self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Hold_HolderTypePosition_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderTypePosition self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Hold_HolderTypePosition_FindFirstApplicationData(Hold_HolderTypePosition self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: method 'findFirstApplicationData' is not callable");
  
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
  @param  Hold_HolderTypePosition self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Hold_HolderTypePosition_FindFirstApplicationData_keyval0(Hold_HolderTypePosition self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Hold_HolderTypePosition_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderTypePosition self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Hold_HolderTypePosition_FindFirstApplicationData_keyval1(Hold_HolderTypePosition self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Hold_HolderTypePosition_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderTypePosition self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Hold_HolderTypePosition_FindFirstApplicationData_keyval2(Hold_HolderTypePosition self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Hold_HolderTypePosition_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderTypePosition self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Hold_HolderTypePosition_FindFirstApplicationData_keyval3(Hold_HolderTypePosition self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Hold_HolderTypePosition_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderTypePosition self
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
Impl_ApplicationData Hold_HolderTypePosition_FindFirstApplicationData_keyval4(Hold_HolderTypePosition self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Hold_HolderTypePosition_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.lims.Holder.HolderTypePosition
  @param  Hold_HolderTypePosition self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Hold_HolderTypePosition_Get(Hold_HolderTypePosition self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Hold_HolderTypePosition self
  @returns   the result
**/
Acco_AccessObject Hold_HolderTypePosition_GetAccess(Hold_HolderTypePosition self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: method 'getAccess' is not callable");
  
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
  @param  Hold_HolderTypePosition self
  @returns   the result
**/
ApiList Hold_HolderTypePosition_GetApplicationData(Hold_HolderTypePosition self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.lims.Holder.HolderTypePosition
  @param  Hold_HolderTypePosition self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Hold_HolderTypePosition Hold_HolderTypePosition_GetByKey(Hold_HolderTypePosition self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Hold_HolderTypePosition obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: method 'getByKey' is not callable");
  
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
  @param  Hold_HolderTypePosition self
  @returns   the result
**/
ApiString Hold_HolderTypePosition_GetClassName(Hold_HolderTypePosition self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Holder.HolderTypePosition.colPosition

The column 
position in the holder type.
  @param  Hold_HolderTypePosition self
  @returns   the result
**/
ApiInteger Hold_HolderTypePosition_GetColPosition(Hold_HolderTypePosition self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getColPosition");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: cannot find method 'getColPosition'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: method 'getColPosition' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Holder.HolderTypePosition.details

Free text, for 
notes, explanatory comments, etc.
  @param  Hold_HolderTypePosition self
  @returns   the result
**/
ApiString Hold_HolderTypePosition_GetDetails(Hold_HolderTypePosition self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: method 'getDetails' is not callable");
  
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
  @param  Hold_HolderTypePosition self
  @returns   the result
**/
ApiList Hold_HolderTypePosition_GetFieldNames(Hold_HolderTypePosition self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.lims.Holder.HolderTypePosition
  @param  Hold_HolderTypePosition self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Hold_HolderTypePosition_GetFullKey(Hold_HolderTypePosition self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: method 'getFullKey' is not callable");
  
  args = PyTuple_Pack(1, useGuid);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Holder.HolderTypePosition.holderType

parent link
  @param  Hold_HolderTypePosition self
  @returns   the result
**/
Hold_HolderType Hold_HolderTypePosition_GetHolderType(Hold_HolderTypePosition self)
{
  
  Hold_HolderType obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getHolderType");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: cannot find method 'getHolderType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: method 'getHolderType' is not callable");
  
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
  @param  Hold_HolderTypePosition self
  @returns   the result
**/
ApiBoolean Hold_HolderTypePosition_GetInConstructor(Hold_HolderTypePosition self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: method 'getInConstructor' is not callable");
  
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
  @param  Hold_HolderTypePosition self
  @returns   the result
**/
ApiBoolean Hold_HolderTypePosition_GetIsDeleted(Hold_HolderTypePosition self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.lims.Holder.HolderTypePosition
  @param  Hold_HolderTypePosition self
  @returns  Local object key
**/
ApiObject Hold_HolderTypePosition_GetLocalKey(Hold_HolderTypePosition self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Holder.HolderTypePosition.maxVolume

The maximum 
volume.
  @param  Hold_HolderTypePosition self
  @returns   the result
**/
ApiFloat Hold_HolderTypePosition_GetMaxVolume(Hold_HolderTypePosition self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMaxVolume");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: cannot find method 'getMaxVolume'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: method 'getMaxVolume' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Holder.HolderTypePosition.maxVolumeDiplayUnit

The 
display unit of the max volume.
  @param  Hold_HolderTypePosition self
  @returns   the result
**/
ApiString Hold_HolderTypePosition_GetMaxVolumeDiplayUnit(Hold_HolderTypePosition self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMaxVolumeDiplayUnit");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: cannot find method 'getMaxVolumeDiplayUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: method 'getMaxVolumeDiplayUnit' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Holder.HolderTypePosition.name

The name of the 
position in holder could be reservoir, well,...
  @param  Hold_HolderTypePosition self
  @returns   the result
**/
ApiString Hold_HolderTypePosition_GetName(Hold_HolderTypePosition self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: method 'getName' is not callable");
  
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
  @param  Hold_HolderTypePosition self
  @returns   the result
**/
ApiString Hold_HolderTypePosition_GetPackageName(Hold_HolderTypePosition self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: method 'getPackageName' is not callable");
  
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
  @param  Hold_HolderTypePosition self
  @returns   the result
**/
ApiString Hold_HolderTypePosition_GetPackageShortName(Hold_HolderTypePosition self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Holder.HolderTypePosition.parent

link to parent object 
- synonym for holderType
  @param  Hold_HolderTypePosition self
  @returns   the result
**/
Hold_HolderType Hold_HolderTypePosition_GetParent(Hold_HolderTypePosition self)
{
  
  Hold_HolderType obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: method 'getParent' is not callable");
  
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
  @param  Hold_HolderTypePosition self
  @returns   the result
**/
ApiString Hold_HolderTypePosition_GetQualifiedName(Hold_HolderTypePosition self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: method 'getQualifiedName' is not callable");
  
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
  @param  Hold_HolderTypePosition self
  @returns   the result
**/
Impl_MemopsRoot Hold_HolderTypePosition_GetRoot(Hold_HolderTypePosition self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Holder.HolderTypePosition.rowPosition

The row position 
in the holder type.
  @param  Hold_HolderTypePosition self
  @returns   the result
**/
ApiInteger Hold_HolderTypePosition_GetRowPosition(Hold_HolderTypePosition self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRowPosition");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: cannot find method 'getRowPosition'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: method 'getRowPosition' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Holder.HolderTypePosition.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Hold_HolderTypePosition self
  @returns   the result
**/
ApiInteger Hold_HolderTypePosition_GetSerial(Hold_HolderTypePosition self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: method 'getSerial' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Holder.HolderTypePosition.subPosition

The sub-position 
in the holder type.
  @param  Hold_HolderTypePosition self
  @returns   the result
**/
ApiInteger Hold_HolderTypePosition_GetSubPosition(Hold_HolderTypePosition self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSubPosition");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: cannot find method 'getSubPosition'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: method 'getSubPosition' is not callable");
  
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
  @param  Hold_HolderTypePosition self
  @returns   the result
**/
Impl_TopObject Hold_HolderTypePosition_GetTopObject(Hold_HolderTypePosition self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.lims.Holder.HolderTypePosition
  @param  Hold_HolderType parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Hold_HolderTypePosition Hold_HolderTypePosition_Init(Hold_HolderType parent, ApiMap attrlinks)
{
  
  return Hold_HolderType_NewHolderTypePosition(parent, attrlinks);
}

/**
  Constructor for ccp.lims.Holder.HolderTypePosition
  @param  Hold_HolderType parent
  @returns  the new object
**/
Hold_HolderTypePosition Hold_HolderTypePosition_Init_reqd(Hold_HolderType parent)
{
  
  Hold_HolderTypePosition  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Hold_HolderTypePosition_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderTypePosition self
  @param  Impl_ApplicationData value
**/
void *Hold_HolderTypePosition_RemoveApplicationData(Hold_HolderTypePosition self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.lims.Holder.HolderTypePosition
  @param  Hold_HolderTypePosition self
  @param  ApiString name
  @param  ApiObject value
**/
void *Hold_HolderTypePosition_Set(Hold_HolderTypePosition self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Hold_HolderTypePosition self
  @param  Acco_AccessObject value
**/
void *Hold_HolderTypePosition_SetAccess(Hold_HolderTypePosition self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: method 'setAccess' is not callable");
  
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
  @param  Hold_HolderTypePosition self
  @param  ApiList values
**/
void *Hold_HolderTypePosition_SetApplicationData(Hold_HolderTypePosition self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Holder.HolderTypePosition.colPosition

The column 
position in the holder type.
  @param  Hold_HolderTypePosition self
  @param  ApiInteger value
**/
void *Hold_HolderTypePosition_SetColPosition(Hold_HolderTypePosition self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setColPosition");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: cannot find method 'setColPosition'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: method 'setColPosition' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Holder.HolderTypePosition.details

Free text, for 
notes, explanatory comments, etc.
  @param  Hold_HolderTypePosition self
  @param  ApiString value
**/
void *Hold_HolderTypePosition_SetDetails(Hold_HolderTypePosition self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Holder.HolderTypePosition.maxVolume

The maximum 
volume.
  @param  Hold_HolderTypePosition self
  @param  ApiFloat value
**/
void *Hold_HolderTypePosition_SetMaxVolume(Hold_HolderTypePosition self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMaxVolume");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: cannot find method 'setMaxVolume'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: method 'setMaxVolume' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Holder.HolderTypePosition.maxVolumeDiplayUnit

The 
display unit of the max volume.
  @param  Hold_HolderTypePosition self
  @param  ApiString value
**/
void *Hold_HolderTypePosition_SetMaxVolumeDiplayUnit(Hold_HolderTypePosition self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMaxVolumeDiplayUnit");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: cannot find method 'setMaxVolumeDiplayUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: method 'setMaxVolumeDiplayUnit' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Holder.HolderTypePosition.name

The name of the 
position in holder could be reservoir, well,...
  @param  Hold_HolderTypePosition self
  @param  ApiString value
**/
void *Hold_HolderTypePosition_SetName(Hold_HolderTypePosition self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Holder.HolderTypePosition.rowPosition

The row position 
in the holder type.
  @param  Hold_HolderTypePosition self
  @param  ApiInteger value
**/
void *Hold_HolderTypePosition_SetRowPosition(Hold_HolderTypePosition self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRowPosition");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: cannot find method 'setRowPosition'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: method 'setRowPosition' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Holder.HolderTypePosition.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Hold_HolderTypePosition self
  @param  ApiInteger value
**/
void *Hold_HolderTypePosition_SetSerial(Hold_HolderTypePosition self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Holder.HolderTypePosition.subPosition

The sub-position 
in the holder type.
  @param  Hold_HolderTypePosition self
  @param  ApiInteger value
**/
void *Hold_HolderTypePosition_SetSubPosition(Hold_HolderTypePosition self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSubPosition");
  
  if (!method)
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: cannot find method 'setSubPosition'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Holder.HolderTypePosition: method 'setSubPosition' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
