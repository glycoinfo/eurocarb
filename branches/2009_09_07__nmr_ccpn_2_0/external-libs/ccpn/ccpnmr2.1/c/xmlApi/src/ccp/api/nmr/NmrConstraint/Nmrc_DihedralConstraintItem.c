
#include "ccp.h"

/*
  Range of dihedral angle values allowed for a Dihedral angle constraint. One of possibly several ranges allowed for a given (unambiguously assigned) constraint.
*/

/* package ccp.api.nmr.NmrConstraint */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DihedralConstraintItem self
  @param  Impl_ApplicationData value
**/
void *Nmrc_DihedralConstraintItem_AddApplicationData(Nmrc_DihedralConstraintItem self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraintItem: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraintItem: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.nmr.NmrConstraint.DihedralConstraintItem
  @param  Nmrc_DihedralConstraintItem self
  @param  ApiBoolean complete
**/
void *Nmrc_DihedralConstraintItem_CheckAllValid(Nmrc_DihedralConstraintItem self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraintItem: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraintItem: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.nmr.NmrConstraint.DihedralConstraintItem
  @param  Nmrc_DihedralConstraintItem self
  @param  ApiBoolean complete
**/
void *Nmrc_DihedralConstraintItem_CheckValid(Nmrc_DihedralConstraintItem self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraintItem: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraintItem: method 'checkValid' is not callable");
  
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
  @param  Nmrc_DihedralConstraintItem self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_DihedralConstraintItem_FindAllApplicationData(Nmrc_DihedralConstraintItem self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraintItem: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraintItem: method 'findAllApplicationData' is not callable");
  
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
  @param  Nmrc_DihedralConstraintItem self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_DihedralConstraintItem_FindAllApplicationData_keyval0(Nmrc_DihedralConstraintItem self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_DihedralConstraintItem_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DihedralConstraintItem self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_DihedralConstraintItem_FindAllApplicationData_keyval1(Nmrc_DihedralConstraintItem self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_DihedralConstraintItem_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DihedralConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_DihedralConstraintItem_FindAllApplicationData_keyval2(Nmrc_DihedralConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_DihedralConstraintItem_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DihedralConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_DihedralConstraintItem_FindAllApplicationData_keyval3(Nmrc_DihedralConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_DihedralConstraintItem_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DihedralConstraintItem self
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
ApiList Nmrc_DihedralConstraintItem_FindAllApplicationData_keyval4(Nmrc_DihedralConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_DihedralConstraintItem_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DihedralConstraintItem self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrc_DihedralConstraintItem_FindFirstApplicationData(Nmrc_DihedralConstraintItem self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraintItem: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraintItem: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nmrc_DihedralConstraintItem self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrc_DihedralConstraintItem_FindFirstApplicationData_keyval0(Nmrc_DihedralConstraintItem self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_DihedralConstraintItem_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DihedralConstraintItem self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrc_DihedralConstraintItem_FindFirstApplicationData_keyval1(Nmrc_DihedralConstraintItem self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_DihedralConstraintItem_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DihedralConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrc_DihedralConstraintItem_FindFirstApplicationData_keyval2(Nmrc_DihedralConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_DihedralConstraintItem_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DihedralConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrc_DihedralConstraintItem_FindFirstApplicationData_keyval3(Nmrc_DihedralConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_DihedralConstraintItem_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DihedralConstraintItem self
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
Impl_ApplicationData Nmrc_DihedralConstraintItem_FindFirstApplicationData_keyval4(Nmrc_DihedralConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_DihedralConstraintItem_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.nmr.NmrConstraint.DihedralConstraintItem
  @param  Nmrc_DihedralConstraintItem self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Nmrc_DihedralConstraintItem_Get(Nmrc_DihedralConstraintItem self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrc_DihedralConstraintItem self
  @returns   the result
**/
Acco_AccessObject Nmrc_DihedralConstraintItem_GetAccess(Nmrc_DihedralConstraintItem self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraintItem: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraintItem: method 'getAccess' is not callable");
  
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
  @param  Nmrc_DihedralConstraintItem self
  @returns   the result
**/
Acco_AccessObject Nmrc_DihedralConstraintItem_GetActiveAccess(Nmrc_DihedralConstraintItem self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraintItem: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraintItem: method 'getActiveAccess' is not callable");
  
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
  @param  Nmrc_DihedralConstraintItem self
  @returns   the result
**/
ApiList Nmrc_DihedralConstraintItem_GetApplicationData(Nmrc_DihedralConstraintItem self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraintItem: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraintItem: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.NmrConstraint.DihedralConstraintItem
  @param  Nmrc_DihedralConstraintItem self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nmrc_DihedralConstraintItem Nmrc_DihedralConstraintItem_GetByKey(Nmrc_DihedralConstraintItem self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Nmrc_DihedralConstraintItem obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraintItem: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraintItem: method 'getByKey' is not callable");
  
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
  @param  Nmrc_DihedralConstraintItem self
  @returns   the result
**/
ApiString Nmrc_DihedralConstraintItem_GetClassName(Nmrc_DihedralConstraintItem self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraintItem: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraintItem: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrConstraint.DihedralConstraintItem.constraint

parent 
link
  @param  Nmrc_DihedralConstraintItem self
  @returns   the result
**/
Nmrc_DihedralConstraint Nmrc_DihedralConstraintItem_GetConstraint(Nmrc_DihedralConstraintItem self)
{
  
  Nmrc_DihedralConstraint obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getConstraint");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraintItem: cannot find method 'getConstraint'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraintItem: method 'getConstraint' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrConstraint.DihedralConstraintItem.error

Uncertainty 
(estimated standard devaition) of targetValue
  @param  Nmrc_DihedralConstraintItem self
  @returns   the result
**/
ApiFloat Nmrc_DihedralConstraintItem_GetError(Nmrc_DihedralConstraintItem self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getError");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraintItem: cannot find method 'getError'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraintItem: method 'getError' is not callable");
  
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
  @param  Nmrc_DihedralConstraintItem self
  @returns   the result
**/
ApiList Nmrc_DihedralConstraintItem_GetFieldNames(Nmrc_DihedralConstraintItem self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraintItem: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraintItem: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.nmr.NmrConstraint.DihedralConstraintItem
  @param  Nmrc_DihedralConstraintItem self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Nmrc_DihedralConstraintItem_GetFullKey(Nmrc_DihedralConstraintItem self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraintItem: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraintItem: method 'getFullKey' is not callable");
  
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
  @param  Nmrc_DihedralConstraintItem self
  @returns   the result
**/
ApiBoolean Nmrc_DihedralConstraintItem_GetInConstructor(Nmrc_DihedralConstraintItem self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraintItem: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraintItem: method 'getInConstructor' is not callable");
  
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
  @param  Nmrc_DihedralConstraintItem self
  @returns   the result
**/
ApiBoolean Nmrc_DihedralConstraintItem_GetIsDeleted(Nmrc_DihedralConstraintItem self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraintItem: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraintItem: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.nmr.NmrConstraint.DihedralConstraintItem
  @param  Nmrc_DihedralConstraintItem self
  @returns  Local object key
**/
ApiObject Nmrc_DihedralConstraintItem_GetLocalKey(Nmrc_DihedralConstraintItem self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraintItem: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraintItem: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrConstraint.DihedralConstraintItem.lowerLimit

Lower 
Angle Limit (in degrees). Energy penalty is zero between upperLimit and 
lowerLimit.
  @param  Nmrc_DihedralConstraintItem self
  @returns   the result
**/
ApiFloat Nmrc_DihedralConstraintItem_GetLowerLimit(Nmrc_DihedralConstraintItem self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLowerLimit");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraintItem: cannot find method 'getLowerLimit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraintItem: method 'getLowerLimit' is not callable");
  
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
  @param  Nmrc_DihedralConstraintItem self
  @returns   the result
**/
ApiString Nmrc_DihedralConstraintItem_GetPackageName(Nmrc_DihedralConstraintItem self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraintItem: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraintItem: method 'getPackageName' is not callable");
  
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
  @param  Nmrc_DihedralConstraintItem self
  @returns   the result
**/
ApiString Nmrc_DihedralConstraintItem_GetPackageShortName(Nmrc_DihedralConstraintItem self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraintItem: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraintItem: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrConstraint.DihedralConstraintItem.parent

link to 
parent object - synonym for constraint
  @param  Nmrc_DihedralConstraintItem self
  @returns   the result
**/
Nmrc_DihedralConstraint Nmrc_DihedralConstraintItem_GetParent(Nmrc_DihedralConstraintItem self)
{
  
  Nmrc_DihedralConstraint obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraintItem: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraintItem: method 'getParent' is not callable");
  
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
  @param  Nmrc_DihedralConstraintItem self
  @returns   the result
**/
ApiString Nmrc_DihedralConstraintItem_GetQualifiedName(Nmrc_DihedralConstraintItem self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraintItem: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraintItem: method 'getQualifiedName' is not callable");
  
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
  @param  Nmrc_DihedralConstraintItem self
  @returns   the result
**/
Impl_MemopsRoot Nmrc_DihedralConstraintItem_GetRoot(Nmrc_DihedralConstraintItem self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraintItem: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraintItem: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrConstraint.DihedralConstraintItem.serial

The serial 
number is the key for class DihedralConstraintItem and together with the 
parent object serves as a unique identifier for the 
DihedralConstraintItem.
Serial numbers are generated by the API. Serial 
numbers of deleted objects are not reused.
  @param  Nmrc_DihedralConstraintItem self
  @returns   the result
**/
ApiInteger Nmrc_DihedralConstraintItem_GetSerial(Nmrc_DihedralConstraintItem self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraintItem: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraintItem: method 'getSerial' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.nmr.NmrConstraint.DihedralConstraintItem.targetValue

Desired value 
of constrained parameter
  @param  Nmrc_DihedralConstraintItem self
  @returns   the result
**/
ApiFloat Nmrc_DihedralConstraintItem_GetTargetValue(Nmrc_DihedralConstraintItem self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTargetValue");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraintItem: cannot find method 'getTargetValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraintItem: method 'getTargetValue' is not callable");
  
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
  @param  Nmrc_DihedralConstraintItem self
  @returns   the result
**/
Impl_TopObject Nmrc_DihedralConstraintItem_GetTopObject(Nmrc_DihedralConstraintItem self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraintItem: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraintItem: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrConstraint.DihedralConstraintItem.upperLimit

Upper 
angle limit (in degrees). Energy penalty is zero between upperLimit and 
lowerLimit.
  @param  Nmrc_DihedralConstraintItem self
  @returns   the result
**/
ApiFloat Nmrc_DihedralConstraintItem_GetUpperLimit(Nmrc_DihedralConstraintItem self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getUpperLimit");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraintItem: cannot find method 'getUpperLimit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraintItem: method 'getUpperLimit' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.nmr.NmrConstraint.DihedralConstraintItem
  @param  Nmrc_DihedralConstraint parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmrc_DihedralConstraintItem Nmrc_DihedralConstraintItem_Init(Nmrc_DihedralConstraint parent, ApiMap attrlinks)
{
  
  return Nmrc_DihedralConstraint_NewDihedralConstraintItem(parent, attrlinks);
}

/**
  Constructor for ccp.nmr.NmrConstraint.DihedralConstraintItem
  @param  Nmrc_DihedralConstraint parent
  @param  float lowerLimit
  @param  float upperLimit
  @returns  the new object
**/
Nmrc_DihedralConstraintItem Nmrc_DihedralConstraintItem_Init_reqd(Nmrc_DihedralConstraint parent, float lowerLimit, float upperLimit)
{
  
  Nmrc_DihedralConstraintItem  obj;
  PyObject *attrlinks = PyDict_New();
  ApiFloat api__lowerLimit = ApiFloat_New(lowerLimit);
  ApiFloat api__upperLimit = ApiFloat_New(upperLimit);

  PyDict_SetItemString(attrlinks, "lowerLimit", api__lowerLimit);
  PyDict_SetItemString(attrlinks, "upperLimit", api__upperLimit);
  
  obj = Nmrc_DihedralConstraintItem_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__lowerLimit);
  Py_DECREF(api__upperLimit);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DihedralConstraintItem self
  @param  Impl_ApplicationData value
**/
void *Nmrc_DihedralConstraintItem_RemoveApplicationData(Nmrc_DihedralConstraintItem self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraintItem: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraintItem: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.nmr.NmrConstraint.DihedralConstraintItem
  @param  Nmrc_DihedralConstraintItem self
  @param  ApiString name
  @param  ApiObject value
**/
void *Nmrc_DihedralConstraintItem_Set(Nmrc_DihedralConstraintItem self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrc_DihedralConstraintItem self
  @param  Acco_AccessObject value
**/
void *Nmrc_DihedralConstraintItem_SetAccess(Nmrc_DihedralConstraintItem self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraintItem: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraintItem: method 'setAccess' is not callable");
  
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
  @param  Nmrc_DihedralConstraintItem self
  @param  ApiList values
**/
void *Nmrc_DihedralConstraintItem_SetApplicationData(Nmrc_DihedralConstraintItem self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraintItem: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraintItem: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrConstraint.DihedralConstraintItem.error

Uncertainty 
(estimated standard devaition) of targetValue
  @param  Nmrc_DihedralConstraintItem self
  @param  ApiFloat value
**/
void *Nmrc_DihedralConstraintItem_SetError(Nmrc_DihedralConstraintItem self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setError");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraintItem: cannot find method 'setError'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraintItem: method 'setError' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrConstraint.DihedralConstraintItem.lowerLimit

Lower 
Angle Limit (in degrees). Energy penalty is zero between upperLimit and 
lowerLimit.
  @param  Nmrc_DihedralConstraintItem self
  @param  ApiFloat value
**/
void *Nmrc_DihedralConstraintItem_SetLowerLimit(Nmrc_DihedralConstraintItem self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLowerLimit");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraintItem: cannot find method 'setLowerLimit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraintItem: method 'setLowerLimit' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrConstraint.DihedralConstraintItem.serial

The serial 
number is the key for class DihedralConstraintItem and together with the 
parent object serves as a unique identifier for the 
DihedralConstraintItem.
Serial numbers are generated by the API. Serial 
numbers of deleted objects are not reused.
  @param  Nmrc_DihedralConstraintItem self
  @param  ApiInteger value
**/
void *Nmrc_DihedralConstraintItem_SetSerial(Nmrc_DihedralConstraintItem self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraintItem: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraintItem: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.nmr.NmrConstraint.DihedralConstraintItem.targetValue

Desired value 
of constrained parameter
  @param  Nmrc_DihedralConstraintItem self
  @param  ApiFloat value
**/
void *Nmrc_DihedralConstraintItem_SetTargetValue(Nmrc_DihedralConstraintItem self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setTargetValue");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraintItem: cannot find method 'setTargetValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraintItem: method 'setTargetValue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrConstraint.DihedralConstraintItem.upperLimit

Upper 
angle limit (in degrees). Energy penalty is zero between upperLimit and 
lowerLimit.
  @param  Nmrc_DihedralConstraintItem self
  @param  ApiFloat value
**/
void *Nmrc_DihedralConstraintItem_SetUpperLimit(Nmrc_DihedralConstraintItem self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setUpperLimit");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraintItem: cannot find method 'setUpperLimit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.DihedralConstraintItem: method 'setUpperLimit' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
