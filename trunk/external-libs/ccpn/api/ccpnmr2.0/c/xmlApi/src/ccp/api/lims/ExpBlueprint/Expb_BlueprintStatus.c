
#include "ccp.h"

/*
  
*/

/* package ccp.api.lims.ExpBlueprint */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_BlueprintStatus self
  @param  Impl_ApplicationData value
**/
void *Expb_BlueprintStatus_AddApplicationData(Expb_BlueprintStatus self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintStatus: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintStatus: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.lims.ExpBlueprint.BlueprintStatus
  @param  Expb_BlueprintStatus self
  @param  ApiBoolean complete
**/
void *Expb_BlueprintStatus_CheckAllValid(Expb_BlueprintStatus self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintStatus: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintStatus: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.lims.ExpBlueprint.BlueprintStatus
  @param  Expb_BlueprintStatus self
  @param  ApiBoolean complete
**/
void *Expb_BlueprintStatus_CheckValid(Expb_BlueprintStatus self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintStatus: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintStatus: method 'checkValid' is not callable");
  
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
  @param  Expb_BlueprintStatus self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Expb_BlueprintStatus_FindAllApplicationData(Expb_BlueprintStatus self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintStatus: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintStatus: method 'findAllApplicationData' is not callable");
  
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
  @param  Expb_BlueprintStatus self
  @returns  all value that satisfy the conditions 
**/
ApiList Expb_BlueprintStatus_FindAllApplicationData_keyval0(Expb_BlueprintStatus self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Expb_BlueprintStatus_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_BlueprintStatus self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Expb_BlueprintStatus_FindAllApplicationData_keyval1(Expb_BlueprintStatus self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Expb_BlueprintStatus_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_BlueprintStatus self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Expb_BlueprintStatus_FindAllApplicationData_keyval2(Expb_BlueprintStatus self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Expb_BlueprintStatus_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_BlueprintStatus self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Expb_BlueprintStatus_FindAllApplicationData_keyval3(Expb_BlueprintStatus self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Expb_BlueprintStatus_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_BlueprintStatus self
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
ApiList Expb_BlueprintStatus_FindAllApplicationData_keyval4(Expb_BlueprintStatus self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Expb_BlueprintStatus_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_BlueprintStatus self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Expb_BlueprintStatus_FindFirstApplicationData(Expb_BlueprintStatus self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintStatus: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintStatus: method 'findFirstApplicationData' is not callable");
  
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
  @param  Expb_BlueprintStatus self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Expb_BlueprintStatus_FindFirstApplicationData_keyval0(Expb_BlueprintStatus self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Expb_BlueprintStatus_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_BlueprintStatus self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Expb_BlueprintStatus_FindFirstApplicationData_keyval1(Expb_BlueprintStatus self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Expb_BlueprintStatus_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_BlueprintStatus self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Expb_BlueprintStatus_FindFirstApplicationData_keyval2(Expb_BlueprintStatus self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Expb_BlueprintStatus_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_BlueprintStatus self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Expb_BlueprintStatus_FindFirstApplicationData_keyval3(Expb_BlueprintStatus self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Expb_BlueprintStatus_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_BlueprintStatus self
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
Impl_ApplicationData Expb_BlueprintStatus_FindFirstApplicationData_keyval4(Expb_BlueprintStatus self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Expb_BlueprintStatus_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.lims.ExpBlueprint.BlueprintStatus
  @param  Expb_BlueprintStatus self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Expb_BlueprintStatus_Get(Expb_BlueprintStatus self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Expb_BlueprintStatus self
  @returns   the result
**/
Acco_AccessObject Expb_BlueprintStatus_GetAccess(Expb_BlueprintStatus self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintStatus: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintStatus: method 'getAccess' is not callable");
  
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
  @param  Expb_BlueprintStatus self
  @returns   the result
**/
ApiList Expb_BlueprintStatus_GetApplicationData(Expb_BlueprintStatus self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintStatus: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintStatus: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.lims.ExpBlueprint.BlueprintStatus
  @param  Expb_BlueprintStatus self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Expb_BlueprintStatus Expb_BlueprintStatus_GetByKey(Expb_BlueprintStatus self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Expb_BlueprintStatus obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintStatus: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintStatus: method 'getByKey' is not callable");
  
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
  @param  Expb_BlueprintStatus self
  @returns   the result
**/
ApiString Expb_BlueprintStatus_GetClassName(Expb_BlueprintStatus self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintStatus: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintStatus: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.ExpBlueprint.BlueprintStatus.code
  @param  Expb_BlueprintStatus self
  @returns   the result
**/
Clas_TargetStatus Expb_BlueprintStatus_GetCode(Expb_BlueprintStatus self)
{
  
  Clas_TargetStatus obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCode");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintStatus: cannot find method 'getCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintStatus: method 'getCode' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.ExpBlueprint.BlueprintStatus.date

The date when the 
status is assigned.
  @param  Expb_BlueprintStatus self
  @returns   the result
**/
ApiString Expb_BlueprintStatus_GetDate(Expb_BlueprintStatus self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDate");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintStatus: cannot find method 'getDate'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintStatus: method 'getDate' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.ExpBlueprint.BlueprintStatus.expBlueprint

parent link
  @param  Expb_BlueprintStatus self
  @returns   the result
**/
Expb_ExpBlueprint Expb_BlueprintStatus_GetExpBlueprint(Expb_BlueprintStatus self)
{
  
  Expb_ExpBlueprint obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExpBlueprint");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintStatus: cannot find method 'getExpBlueprint'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintStatus: method 'getExpBlueprint' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.ExpBlueprint.BlueprintStatus.experiment
  @param  Expb_BlueprintStatus self
  @returns   the result
**/
Expe_Experiment Expb_BlueprintStatus_GetExperiment(Expb_BlueprintStatus self)
{
  
  Expe_Experiment obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExperiment");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintStatus: cannot find method 'getExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintStatus: method 'getExperiment' is not callable");
  
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
  @param  Expb_BlueprintStatus self
  @returns   the result
**/
ApiList Expb_BlueprintStatus_GetFieldNames(Expb_BlueprintStatus self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintStatus: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintStatus: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.lims.ExpBlueprint.BlueprintStatus
  @param  Expb_BlueprintStatus self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Expb_BlueprintStatus_GetFullKey(Expb_BlueprintStatus self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintStatus: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintStatus: method 'getFullKey' is not callable");
  
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
  @param  Expb_BlueprintStatus self
  @returns   the result
**/
ApiBoolean Expb_BlueprintStatus_GetInConstructor(Expb_BlueprintStatus self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintStatus: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintStatus: method 'getInConstructor' is not callable");
  
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
  @param  Expb_BlueprintStatus self
  @returns   the result
**/
ApiBoolean Expb_BlueprintStatus_GetIsDeleted(Expb_BlueprintStatus self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintStatus: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintStatus: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.lims.ExpBlueprint.BlueprintStatus
  @param  Expb_BlueprintStatus self
  @returns  Local object key
**/
ApiObject Expb_BlueprintStatus_GetLocalKey(Expb_BlueprintStatus self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintStatus: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintStatus: method 'getLocalKey' is not callable");
  
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
  @param  Expb_BlueprintStatus self
  @returns   the result
**/
ApiString Expb_BlueprintStatus_GetPackageName(Expb_BlueprintStatus self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintStatus: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintStatus: method 'getPackageName' is not callable");
  
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
  @param  Expb_BlueprintStatus self
  @returns   the result
**/
ApiString Expb_BlueprintStatus_GetPackageShortName(Expb_BlueprintStatus self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintStatus: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintStatus: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.ExpBlueprint.BlueprintStatus.parent

link to parent 
object - synonym for expBlueprint
  @param  Expb_BlueprintStatus self
  @returns   the result
**/
Expb_ExpBlueprint Expb_BlueprintStatus_GetParent(Expb_BlueprintStatus self)
{
  
  Expb_ExpBlueprint obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintStatus: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintStatus: method 'getParent' is not callable");
  
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
  @param  Expb_BlueprintStatus self
  @returns   the result
**/
ApiString Expb_BlueprintStatus_GetQualifiedName(Expb_BlueprintStatus self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintStatus: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintStatus: method 'getQualifiedName' is not callable");
  
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
  @param  Expb_BlueprintStatus self
  @returns   the result
**/
Impl_MemopsRoot Expb_BlueprintStatus_GetRoot(Expb_BlueprintStatus self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintStatus: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintStatus: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.ExpBlueprint.BlueprintStatus.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Expb_BlueprintStatus self
  @returns   the result
**/
ApiInteger Expb_BlueprintStatus_GetSerial(Expb_BlueprintStatus self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintStatus: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintStatus: method 'getSerial' is not callable");
  
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
  @param  Expb_BlueprintStatus self
  @returns   the result
**/
Impl_TopObject Expb_BlueprintStatus_GetTopObject(Expb_BlueprintStatus self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintStatus: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintStatus: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.lims.ExpBlueprint.BlueprintStatus
  @param  Expb_ExpBlueprint parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Expb_BlueprintStatus Expb_BlueprintStatus_Init(Expb_ExpBlueprint parent, ApiMap attrlinks)
{
  
  return Expb_ExpBlueprint_NewBlueprintStatus(parent, attrlinks);
}

/**
  Constructor for ccp.lims.ExpBlueprint.BlueprintStatus
  @param  Expb_ExpBlueprint parent
  @param  Clas_TargetStatus code
  @returns  the new object
**/
Expb_BlueprintStatus Expb_BlueprintStatus_Init_reqd(Expb_ExpBlueprint parent, Clas_TargetStatus code)
{
  
  Expb_BlueprintStatus  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "code", code);
  
  obj = Expb_BlueprintStatus_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_BlueprintStatus self
  @param  Impl_ApplicationData value
**/
void *Expb_BlueprintStatus_RemoveApplicationData(Expb_BlueprintStatus self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintStatus: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintStatus: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.lims.ExpBlueprint.BlueprintStatus
  @param  Expb_BlueprintStatus self
  @param  ApiString name
  @param  ApiObject value
**/
void *Expb_BlueprintStatus_Set(Expb_BlueprintStatus self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Expb_BlueprintStatus self
  @param  Acco_AccessObject value
**/
void *Expb_BlueprintStatus_SetAccess(Expb_BlueprintStatus self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintStatus: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintStatus: method 'setAccess' is not callable");
  
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
  @param  Expb_BlueprintStatus self
  @param  ApiList values
**/
void *Expb_BlueprintStatus_SetApplicationData(Expb_BlueprintStatus self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintStatus: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintStatus: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.ExpBlueprint.BlueprintStatus.code
  @param  Expb_BlueprintStatus self
  @param  Clas_TargetStatus value
**/
void *Expb_BlueprintStatus_SetCode(Expb_BlueprintStatus self, Clas_TargetStatus value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCode");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintStatus: cannot find method 'setCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintStatus: method 'setCode' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.ExpBlueprint.BlueprintStatus.date

The date when the 
status is assigned.
  @param  Expb_BlueprintStatus self
  @param  ApiString value
**/
void *Expb_BlueprintStatus_SetDate(Expb_BlueprintStatus self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDate");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintStatus: cannot find method 'setDate'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintStatus: method 'setDate' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.ExpBlueprint.BlueprintStatus.experiment
  @param  Expb_BlueprintStatus self
  @param  Expe_Experiment value
**/
void *Expb_BlueprintStatus_SetExperiment(Expb_BlueprintStatus self, Expe_Experiment value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setExperiment");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintStatus: cannot find method 'setExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintStatus: method 'setExperiment' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.ExpBlueprint.BlueprintStatus.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Expb_BlueprintStatus self
  @param  ApiInteger value
**/
void *Expb_BlueprintStatus_SetSerial(Expb_BlueprintStatus self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintStatus: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintStatus: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
