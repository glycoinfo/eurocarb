
#include "ccp.h"

/*
  The link between the database reference and the ExpBlueprint.
*/

/* package ccp.api.lims.ExpBlueprint */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_BlueprintDbRef self
  @param  Impl_ApplicationData value
**/
void *Expb_BlueprintDbRef_AddApplicationData(Expb_BlueprintDbRef self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintDbRef: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintDbRef: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.lims.ExpBlueprint.BlueprintDbRef
  @param  Expb_BlueprintDbRef self
  @param  ApiBoolean complete
**/
void *Expb_BlueprintDbRef_CheckAllValid(Expb_BlueprintDbRef self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintDbRef: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintDbRef: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.lims.ExpBlueprint.BlueprintDbRef
  @param  Expb_BlueprintDbRef self
  @param  ApiBoolean complete
**/
void *Expb_BlueprintDbRef_CheckValid(Expb_BlueprintDbRef self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintDbRef: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintDbRef: method 'checkValid' is not callable");
  
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
  @param  Expb_BlueprintDbRef self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Expb_BlueprintDbRef_FindAllApplicationData(Expb_BlueprintDbRef self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintDbRef: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintDbRef: method 'findAllApplicationData' is not callable");
  
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
  @param  Expb_BlueprintDbRef self
  @returns  all value that satisfy the conditions 
**/
ApiList Expb_BlueprintDbRef_FindAllApplicationData_keyval0(Expb_BlueprintDbRef self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Expb_BlueprintDbRef_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_BlueprintDbRef self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Expb_BlueprintDbRef_FindAllApplicationData_keyval1(Expb_BlueprintDbRef self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Expb_BlueprintDbRef_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_BlueprintDbRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Expb_BlueprintDbRef_FindAllApplicationData_keyval2(Expb_BlueprintDbRef self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Expb_BlueprintDbRef_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_BlueprintDbRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Expb_BlueprintDbRef_FindAllApplicationData_keyval3(Expb_BlueprintDbRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Expb_BlueprintDbRef_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_BlueprintDbRef self
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
ApiList Expb_BlueprintDbRef_FindAllApplicationData_keyval4(Expb_BlueprintDbRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Expb_BlueprintDbRef_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_BlueprintDbRef self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Expb_BlueprintDbRef_FindFirstApplicationData(Expb_BlueprintDbRef self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintDbRef: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintDbRef: method 'findFirstApplicationData' is not callable");
  
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
  @param  Expb_BlueprintDbRef self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Expb_BlueprintDbRef_FindFirstApplicationData_keyval0(Expb_BlueprintDbRef self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Expb_BlueprintDbRef_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_BlueprintDbRef self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Expb_BlueprintDbRef_FindFirstApplicationData_keyval1(Expb_BlueprintDbRef self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Expb_BlueprintDbRef_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_BlueprintDbRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Expb_BlueprintDbRef_FindFirstApplicationData_keyval2(Expb_BlueprintDbRef self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Expb_BlueprintDbRef_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_BlueprintDbRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Expb_BlueprintDbRef_FindFirstApplicationData_keyval3(Expb_BlueprintDbRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Expb_BlueprintDbRef_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_BlueprintDbRef self
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
Impl_ApplicationData Expb_BlueprintDbRef_FindFirstApplicationData_keyval4(Expb_BlueprintDbRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Expb_BlueprintDbRef_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.lims.ExpBlueprint.BlueprintDbRef
  @param  Expb_BlueprintDbRef self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Expb_BlueprintDbRef_Get(Expb_BlueprintDbRef self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Expb_BlueprintDbRef self
  @returns   the result
**/
Acco_AccessObject Expb_BlueprintDbRef_GetAccess(Expb_BlueprintDbRef self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintDbRef: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintDbRef: method 'getAccess' is not callable");
  
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
  @param  Expb_BlueprintDbRef self
  @returns   the result
**/
Acco_AccessObject Expb_BlueprintDbRef_GetActiveAccess(Expb_BlueprintDbRef self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintDbRef: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintDbRef: method 'getActiveAccess' is not callable");
  
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
  @param  Expb_BlueprintDbRef self
  @returns   the result
**/
ApiList Expb_BlueprintDbRef_GetApplicationData(Expb_BlueprintDbRef self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintDbRef: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintDbRef: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.lims.ExpBlueprint.BlueprintDbRef
  @param  Expb_BlueprintDbRef self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Expb_BlueprintDbRef Expb_BlueprintDbRef_GetByKey(Expb_BlueprintDbRef self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Expb_BlueprintDbRef obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintDbRef: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintDbRef: method 'getByKey' is not callable");
  
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
  @param  Expb_BlueprintDbRef self
  @returns   the result
**/
ApiString Expb_BlueprintDbRef_GetClassName(Expb_BlueprintDbRef self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintDbRef: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintDbRef: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.ExpBlueprint.BlueprintDbRef.dbRef

The database 
reference to which this entry belongs.
  @param  Expb_BlueprintDbRef self
  @returns   the result
**/
Dbr_Entry Expb_BlueprintDbRef_GetDbRef(Expb_BlueprintDbRef self)
{
  
  Dbr_Entry obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDbRef");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintDbRef: cannot find method 'getDbRef'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintDbRef: method 'getDbRef' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.ExpBlueprint.BlueprintDbRef.details

Detail field for 
comments.
  @param  Expb_BlueprintDbRef self
  @returns   the result
**/
ApiString Expb_BlueprintDbRef_GetDetails(Expb_BlueprintDbRef self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintDbRef: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintDbRef: method 'getDetails' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.ExpBlueprint.BlueprintDbRef.expBlueprint

The trial to 
which this entry belongs.
  @param  Expb_BlueprintDbRef self
  @returns   the result
**/
Expb_ExpBlueprint Expb_BlueprintDbRef_GetExpBlueprint(Expb_BlueprintDbRef self)
{
  
  Expb_ExpBlueprint obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExpBlueprint");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintDbRef: cannot find method 'getExpBlueprint'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintDbRef: method 'getExpBlueprint' is not callable");
  
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
  @param  Expb_BlueprintDbRef self
  @returns   the result
**/
ApiList Expb_BlueprintDbRef_GetFieldNames(Expb_BlueprintDbRef self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintDbRef: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintDbRef: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.lims.ExpBlueprint.BlueprintDbRef
  @param  Expb_BlueprintDbRef self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Expb_BlueprintDbRef_GetFullKey(Expb_BlueprintDbRef self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintDbRef: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintDbRef: method 'getFullKey' is not callable");
  
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
  @param  Expb_BlueprintDbRef self
  @returns   the result
**/
ApiBoolean Expb_BlueprintDbRef_GetInConstructor(Expb_BlueprintDbRef self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintDbRef: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintDbRef: method 'getInConstructor' is not callable");
  
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
  @param  Expb_BlueprintDbRef self
  @returns   the result
**/
ApiBoolean Expb_BlueprintDbRef_GetIsDeleted(Expb_BlueprintDbRef self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintDbRef: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintDbRef: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.lims.ExpBlueprint.BlueprintDbRef
  @param  Expb_BlueprintDbRef self
  @returns  Local object key
**/
ApiObject Expb_BlueprintDbRef_GetLocalKey(Expb_BlueprintDbRef self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintDbRef: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintDbRef: method 'getLocalKey' is not callable");
  
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
  @param  Expb_BlueprintDbRef self
  @returns   the result
**/
ApiString Expb_BlueprintDbRef_GetPackageName(Expb_BlueprintDbRef self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintDbRef: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintDbRef: method 'getPackageName' is not callable");
  
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
  @param  Expb_BlueprintDbRef self
  @returns   the result
**/
ApiString Expb_BlueprintDbRef_GetPackageShortName(Expb_BlueprintDbRef self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintDbRef: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintDbRef: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.ExpBlueprint.BlueprintDbRef.parent

link to parent 
object - synonym for expBlueprint
  @param  Expb_BlueprintDbRef self
  @returns   the result
**/
Expb_ExpBlueprint Expb_BlueprintDbRef_GetParent(Expb_BlueprintDbRef self)
{
  
  Expb_ExpBlueprint obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintDbRef: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintDbRef: method 'getParent' is not callable");
  
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
  @param  Expb_BlueprintDbRef self
  @returns   the result
**/
ApiString Expb_BlueprintDbRef_GetQualifiedName(Expb_BlueprintDbRef self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintDbRef: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintDbRef: method 'getQualifiedName' is not callable");
  
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
  @param  Expb_BlueprintDbRef self
  @returns   the result
**/
Impl_MemopsRoot Expb_BlueprintDbRef_GetRoot(Expb_BlueprintDbRef self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintDbRef: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintDbRef: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.ExpBlueprint.BlueprintDbRef.serial

Unique identifier.
  @param  Expb_BlueprintDbRef self
  @returns   the result
**/
ApiInteger Expb_BlueprintDbRef_GetSerial(Expb_BlueprintDbRef self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintDbRef: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintDbRef: method 'getSerial' is not callable");
  
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
  @param  Expb_BlueprintDbRef self
  @returns   the result
**/
Impl_TopObject Expb_BlueprintDbRef_GetTopObject(Expb_BlueprintDbRef self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintDbRef: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintDbRef: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.lims.ExpBlueprint.BlueprintDbRef
  @param  Expb_ExpBlueprint parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Expb_BlueprintDbRef Expb_BlueprintDbRef_Init(Expb_ExpBlueprint parent, ApiMap attrlinks)
{
  
  return Expb_ExpBlueprint_NewBlueprintDbRef(parent, attrlinks);
}

/**
  Constructor for ccp.lims.ExpBlueprint.BlueprintDbRef
  @param  Expb_ExpBlueprint parent
  @param  Dbr_Entry dbRef
  @returns  the new object
**/
Expb_BlueprintDbRef Expb_BlueprintDbRef_Init_reqd(Expb_ExpBlueprint parent, Dbr_Entry dbRef)
{
  
  Expb_BlueprintDbRef  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "dbRef", dbRef);
  
  obj = Expb_BlueprintDbRef_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_BlueprintDbRef self
  @param  Impl_ApplicationData value
**/
void *Expb_BlueprintDbRef_RemoveApplicationData(Expb_BlueprintDbRef self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintDbRef: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintDbRef: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.lims.ExpBlueprint.BlueprintDbRef
  @param  Expb_BlueprintDbRef self
  @param  ApiString name
  @param  ApiObject value
**/
void *Expb_BlueprintDbRef_Set(Expb_BlueprintDbRef self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Expb_BlueprintDbRef self
  @param  Acco_AccessObject value
**/
void *Expb_BlueprintDbRef_SetAccess(Expb_BlueprintDbRef self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintDbRef: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintDbRef: method 'setAccess' is not callable");
  
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
  @param  Expb_BlueprintDbRef self
  @param  ApiList values
**/
void *Expb_BlueprintDbRef_SetApplicationData(Expb_BlueprintDbRef self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintDbRef: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintDbRef: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.ExpBlueprint.BlueprintDbRef.dbRef

The database 
reference to which this entry belongs.
  @param  Expb_BlueprintDbRef self
  @param  Dbr_Entry value
**/
void *Expb_BlueprintDbRef_SetDbRef(Expb_BlueprintDbRef self, Dbr_Entry value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDbRef");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintDbRef: cannot find method 'setDbRef'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintDbRef: method 'setDbRef' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.ExpBlueprint.BlueprintDbRef.details

Detail field for 
comments.
  @param  Expb_BlueprintDbRef self
  @param  ApiString value
**/
void *Expb_BlueprintDbRef_SetDetails(Expb_BlueprintDbRef self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintDbRef: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintDbRef: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.ExpBlueprint.BlueprintDbRef.serial

Unique identifier.
  @param  Expb_BlueprintDbRef self
  @param  ApiInteger value
**/
void *Expb_BlueprintDbRef_SetSerial(Expb_BlueprintDbRef self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintDbRef: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.ExpBlueprint.BlueprintDbRef: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
