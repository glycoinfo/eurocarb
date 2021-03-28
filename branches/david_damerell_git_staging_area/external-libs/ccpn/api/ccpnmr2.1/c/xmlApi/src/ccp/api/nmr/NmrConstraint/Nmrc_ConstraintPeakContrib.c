
#include "ccp.h"

/*
  Connecting class, connecting AbstractConstraint to AbstractPeak. Necessary to avoid direct link between the classes, which would be inappropriate whenever peaks were deleted.
*/

/* package ccp.api.nmr.NmrConstraint */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ConstraintPeakContrib self
  @param  Impl_ApplicationData value
**/
void *Nmrc_ConstraintPeakContrib_AddApplicationData(Nmrc_ConstraintPeakContrib self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintPeakContrib: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintPeakContrib: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.nmr.NmrConstraint.ConstraintPeakContrib
  @param  Nmrc_ConstraintPeakContrib self
  @param  ApiBoolean complete
**/
void *Nmrc_ConstraintPeakContrib_CheckAllValid(Nmrc_ConstraintPeakContrib self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintPeakContrib: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintPeakContrib: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.nmr.NmrConstraint.ConstraintPeakContrib
  @param  Nmrc_ConstraintPeakContrib self
  @param  ApiBoolean complete
**/
void *Nmrc_ConstraintPeakContrib_CheckValid(Nmrc_ConstraintPeakContrib self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintPeakContrib: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintPeakContrib: method 'checkValid' is not callable");
  
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
  @param  Nmrc_ConstraintPeakContrib self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_ConstraintPeakContrib_FindAllApplicationData(Nmrc_ConstraintPeakContrib self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintPeakContrib: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintPeakContrib: method 'findAllApplicationData' is not callable");
  
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
  @param  Nmrc_ConstraintPeakContrib self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_ConstraintPeakContrib_FindAllApplicationData_keyval0(Nmrc_ConstraintPeakContrib self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_ConstraintPeakContrib_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ConstraintPeakContrib self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_ConstraintPeakContrib_FindAllApplicationData_keyval1(Nmrc_ConstraintPeakContrib self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_ConstraintPeakContrib_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ConstraintPeakContrib self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_ConstraintPeakContrib_FindAllApplicationData_keyval2(Nmrc_ConstraintPeakContrib self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_ConstraintPeakContrib_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ConstraintPeakContrib self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_ConstraintPeakContrib_FindAllApplicationData_keyval3(Nmrc_ConstraintPeakContrib self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_ConstraintPeakContrib_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ConstraintPeakContrib self
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
ApiList Nmrc_ConstraintPeakContrib_FindAllApplicationData_keyval4(Nmrc_ConstraintPeakContrib self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_ConstraintPeakContrib_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ConstraintPeakContrib self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrc_ConstraintPeakContrib_FindFirstApplicationData(Nmrc_ConstraintPeakContrib self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintPeakContrib: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintPeakContrib: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nmrc_ConstraintPeakContrib self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrc_ConstraintPeakContrib_FindFirstApplicationData_keyval0(Nmrc_ConstraintPeakContrib self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_ConstraintPeakContrib_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ConstraintPeakContrib self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrc_ConstraintPeakContrib_FindFirstApplicationData_keyval1(Nmrc_ConstraintPeakContrib self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_ConstraintPeakContrib_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ConstraintPeakContrib self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrc_ConstraintPeakContrib_FindFirstApplicationData_keyval2(Nmrc_ConstraintPeakContrib self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_ConstraintPeakContrib_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ConstraintPeakContrib self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrc_ConstraintPeakContrib_FindFirstApplicationData_keyval3(Nmrc_ConstraintPeakContrib self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_ConstraintPeakContrib_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ConstraintPeakContrib self
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
Impl_ApplicationData Nmrc_ConstraintPeakContrib_FindFirstApplicationData_keyval4(Nmrc_ConstraintPeakContrib self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_ConstraintPeakContrib_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.nmr.NmrConstraint.ConstraintPeakContrib
  @param  Nmrc_ConstraintPeakContrib self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Nmrc_ConstraintPeakContrib_Get(Nmrc_ConstraintPeakContrib self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrc_ConstraintPeakContrib self
  @returns   the result
**/
Acco_AccessObject Nmrc_ConstraintPeakContrib_GetAccess(Nmrc_ConstraintPeakContrib self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintPeakContrib: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintPeakContrib: method 'getAccess' is not callable");
  
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
  @param  Nmrc_ConstraintPeakContrib self
  @returns   the result
**/
Acco_AccessObject Nmrc_ConstraintPeakContrib_GetActiveAccess(Nmrc_ConstraintPeakContrib self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintPeakContrib: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintPeakContrib: method 'getActiveAccess' is not callable");
  
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
  @param  Nmrc_ConstraintPeakContrib self
  @returns   the result
**/
ApiList Nmrc_ConstraintPeakContrib_GetApplicationData(Nmrc_ConstraintPeakContrib self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintPeakContrib: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintPeakContrib: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.NmrConstraint.ConstraintPeakContrib
  @param  Nmrc_ConstraintPeakContrib self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nmrc_ConstraintPeakContrib Nmrc_ConstraintPeakContrib_GetByKey(Nmrc_ConstraintPeakContrib self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Nmrc_ConstraintPeakContrib obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintPeakContrib: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintPeakContrib: method 'getByKey' is not callable");
  
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
  @param  Nmrc_ConstraintPeakContrib self
  @returns   the result
**/
ApiString Nmrc_ConstraintPeakContrib_GetClassName(Nmrc_ConstraintPeakContrib self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintPeakContrib: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintPeakContrib: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrConstraint.ConstraintPeakContrib.constraint

parent 
link
  @param  Nmrc_ConstraintPeakContrib self
  @returns   the result
**/
Nmrc_AbstractConstraint Nmrc_ConstraintPeakContrib_GetConstraint(Nmrc_ConstraintPeakContrib self)
{
  
  Nmrc_AbstractConstraint obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getConstraint");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintPeakContrib: cannot find method 'getConstraint'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintPeakContrib: method 'getConstraint' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.nmr.NmrConstraint.ConstraintPeakContrib.dataSourceSerial

Serial 
number for DataSource containing peak
  @param  Nmrc_ConstraintPeakContrib self
  @returns   the result
**/
ApiInteger Nmrc_ConstraintPeakContrib_GetDataSourceSerial(Nmrc_ConstraintPeakContrib self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDataSourceSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintPeakContrib: cannot find method 'getDataSourceSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintPeakContrib: method 'getDataSourceSerial' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.nmr.NmrConstraint.ConstraintPeakContrib.experimentSerial

Serial 
number for Experiment containing peak
  @param  Nmrc_ConstraintPeakContrib self
  @returns   the result
**/
ApiInteger Nmrc_ConstraintPeakContrib_GetExperimentSerial(Nmrc_ConstraintPeakContrib self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExperimentSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintPeakContrib: cannot find method 'getExperimentSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintPeakContrib: method 'getExperimentSerial' is not callable");
  
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
  @param  Nmrc_ConstraintPeakContrib self
  @returns   the result
**/
ApiList Nmrc_ConstraintPeakContrib_GetFieldNames(Nmrc_ConstraintPeakContrib self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintPeakContrib: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintPeakContrib: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.nmr.NmrConstraint.ConstraintPeakContrib
  @param  Nmrc_ConstraintPeakContrib self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Nmrc_ConstraintPeakContrib_GetFullKey(Nmrc_ConstraintPeakContrib self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintPeakContrib: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintPeakContrib: method 'getFullKey' is not callable");
  
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
  @param  Nmrc_ConstraintPeakContrib self
  @returns   the result
**/
ApiBoolean Nmrc_ConstraintPeakContrib_GetInConstructor(Nmrc_ConstraintPeakContrib self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintPeakContrib: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintPeakContrib: method 'getInConstructor' is not callable");
  
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
  @param  Nmrc_ConstraintPeakContrib self
  @returns   the result
**/
ApiBoolean Nmrc_ConstraintPeakContrib_GetIsDeleted(Nmrc_ConstraintPeakContrib self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintPeakContrib: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintPeakContrib: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.nmr.NmrConstraint.ConstraintPeakContrib
  @param  Nmrc_ConstraintPeakContrib self
  @returns  Local object key
**/
ApiObject Nmrc_ConstraintPeakContrib_GetLocalKey(Nmrc_ConstraintPeakContrib self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintPeakContrib: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintPeakContrib: method 'getLocalKey' is not callable");
  
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
  @param  Nmrc_ConstraintPeakContrib self
  @returns   the result
**/
ApiString Nmrc_ConstraintPeakContrib_GetPackageName(Nmrc_ConstraintPeakContrib self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintPeakContrib: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintPeakContrib: method 'getPackageName' is not callable");
  
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
  @param  Nmrc_ConstraintPeakContrib self
  @returns   the result
**/
ApiString Nmrc_ConstraintPeakContrib_GetPackageShortName(Nmrc_ConstraintPeakContrib self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintPeakContrib: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintPeakContrib: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrConstraint.ConstraintPeakContrib.parent

link to 
parent object - synonym for constraint
  @param  Nmrc_ConstraintPeakContrib self
  @returns   the result
**/
Nmrc_AbstractConstraint Nmrc_ConstraintPeakContrib_GetParent(Nmrc_ConstraintPeakContrib self)
{
  
  Nmrc_AbstractConstraint obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintPeakContrib: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintPeakContrib: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived link peak
  @param  Nmrc_ConstraintPeakContrib self
  @returns   the result
**/
Nmr_Peak Nmrc_ConstraintPeakContrib_GetPeak(Nmrc_ConstraintPeakContrib self)
{
  
  Nmr_Peak obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPeak");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintPeakContrib: cannot find method 'getPeak'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintPeakContrib: method 'getPeak' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.nmr.NmrConstraint.ConstraintPeakContrib.peakListSerial

Serial 
number for peakList containing peak
  @param  Nmrc_ConstraintPeakContrib self
  @returns   the result
**/
ApiInteger Nmrc_ConstraintPeakContrib_GetPeakListSerial(Nmrc_ConstraintPeakContrib self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPeakListSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintPeakContrib: cannot find method 'getPeakListSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintPeakContrib: method 'getPeakListSerial' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrConstraint.ConstraintPeakContrib.peakSerial

Serial 
number for Peak
  @param  Nmrc_ConstraintPeakContrib self
  @returns   the result
**/
ApiInteger Nmrc_ConstraintPeakContrib_GetPeakSerial(Nmrc_ConstraintPeakContrib self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPeakSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintPeakContrib: cannot find method 'getPeakSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintPeakContrib: method 'getPeakSerial' is not callable");
  
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
  @param  Nmrc_ConstraintPeakContrib self
  @returns   the result
**/
ApiString Nmrc_ConstraintPeakContrib_GetQualifiedName(Nmrc_ConstraintPeakContrib self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintPeakContrib: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintPeakContrib: method 'getQualifiedName' is not callable");
  
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
  @param  Nmrc_ConstraintPeakContrib self
  @returns   the result
**/
Impl_MemopsRoot Nmrc_ConstraintPeakContrib_GetRoot(Nmrc_ConstraintPeakContrib self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintPeakContrib: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintPeakContrib: method 'getRoot' is not callable");
  
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
  @param  Nmrc_ConstraintPeakContrib self
  @returns   the result
**/
Impl_TopObject Nmrc_ConstraintPeakContrib_GetTopObject(Nmrc_ConstraintPeakContrib self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintPeakContrib: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintPeakContrib: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.nmr.NmrConstraint.ConstraintPeakContrib
  @param  Nmrc_AbstractConstraint parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmrc_ConstraintPeakContrib Nmrc_ConstraintPeakContrib_Init(Nmrc_AbstractConstraint parent, ApiMap attrlinks)
{
  
  return Nmrc_AbstractConstraint_NewConstraintPeakContrib(parent, attrlinks);
}

/**
  Constructor for ccp.nmr.NmrConstraint.ConstraintPeakContrib
  @param  Nmrc_AbstractConstraint parent
  @param  ApiInteger dataSourceSerial
  @param  ApiInteger experimentSerial
  @param  ApiInteger peakListSerial
  @param  ApiInteger peakSerial
  @returns  the new object
**/
Nmrc_ConstraintPeakContrib Nmrc_ConstraintPeakContrib_Init_reqd(Nmrc_AbstractConstraint parent, ApiInteger dataSourceSerial, ApiInteger experimentSerial, ApiInteger peakListSerial, ApiInteger peakSerial)
{
  
  Nmrc_ConstraintPeakContrib  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "dataSourceSerial", dataSourceSerial);
  PyDict_SetItemString(attrlinks, "experimentSerial", experimentSerial);
  PyDict_SetItemString(attrlinks, "peakListSerial", peakListSerial);
  PyDict_SetItemString(attrlinks, "peakSerial", peakSerial);
  
  obj = Nmrc_ConstraintPeakContrib_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ConstraintPeakContrib self
  @param  Impl_ApplicationData value
**/
void *Nmrc_ConstraintPeakContrib_RemoveApplicationData(Nmrc_ConstraintPeakContrib self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintPeakContrib: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintPeakContrib: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.nmr.NmrConstraint.ConstraintPeakContrib
  @param  Nmrc_ConstraintPeakContrib self
  @param  ApiString name
  @param  ApiObject value
**/
void *Nmrc_ConstraintPeakContrib_Set(Nmrc_ConstraintPeakContrib self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrc_ConstraintPeakContrib self
  @param  Acco_AccessObject value
**/
void *Nmrc_ConstraintPeakContrib_SetAccess(Nmrc_ConstraintPeakContrib self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintPeakContrib: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintPeakContrib: method 'setAccess' is not callable");
  
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
  @param  Nmrc_ConstraintPeakContrib self
  @param  ApiList values
**/
void *Nmrc_ConstraintPeakContrib_SetApplicationData(Nmrc_ConstraintPeakContrib self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintPeakContrib: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintPeakContrib: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.nmr.NmrConstraint.ConstraintPeakContrib.dataSourceSerial

Serial 
number for DataSource containing peak
  @param  Nmrc_ConstraintPeakContrib self
  @param  ApiInteger value
**/
void *Nmrc_ConstraintPeakContrib_SetDataSourceSerial(Nmrc_ConstraintPeakContrib self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDataSourceSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintPeakContrib: cannot find method 'setDataSourceSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintPeakContrib: method 'setDataSourceSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.nmr.NmrConstraint.ConstraintPeakContrib.experimentSerial

Serial 
number for Experiment containing peak
  @param  Nmrc_ConstraintPeakContrib self
  @param  ApiInteger value
**/
void *Nmrc_ConstraintPeakContrib_SetExperimentSerial(Nmrc_ConstraintPeakContrib self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setExperimentSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintPeakContrib: cannot find method 'setExperimentSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintPeakContrib: method 'setExperimentSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  setter for derived link peak
  @param  Nmrc_ConstraintPeakContrib self
  @param  Nmr_Peak value
**/
void *Nmrc_ConstraintPeakContrib_SetPeak(Nmrc_ConstraintPeakContrib self, Nmr_Peak value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPeak");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintPeakContrib: cannot find method 'setPeak'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintPeakContrib: method 'setPeak' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.nmr.NmrConstraint.ConstraintPeakContrib.peakListSerial

Serial 
number for peakList containing peak
  @param  Nmrc_ConstraintPeakContrib self
  @param  ApiInteger value
**/
void *Nmrc_ConstraintPeakContrib_SetPeakListSerial(Nmrc_ConstraintPeakContrib self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPeakListSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintPeakContrib: cannot find method 'setPeakListSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintPeakContrib: method 'setPeakListSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrConstraint.ConstraintPeakContrib.peakSerial

Serial 
number for Peak
  @param  Nmrc_ConstraintPeakContrib self
  @param  ApiInteger value
**/
void *Nmrc_ConstraintPeakContrib_SetPeakSerial(Nmrc_ConstraintPeakContrib self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPeakSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintPeakContrib: cannot find method 'setPeakSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.ConstraintPeakContrib: method 'setPeakSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
