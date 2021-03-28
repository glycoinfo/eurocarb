
#include "ccp.h"

/*
  The link between a database reference (DbRef) and a component.
*/

/* package ccp.api.lims.RefSampleComponent */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_ComponentDbRef self
  @param  Impl_ApplicationData value
**/
void *Refs_ComponentDbRef_AddApplicationData(Refs_ComponentDbRef self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.lims.RefSampleComponent.ComponentDbRef
  @param  Refs_ComponentDbRef self
  @param  ApiBoolean complete
**/
void *Refs_ComponentDbRef_CheckAllValid(Refs_ComponentDbRef self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.lims.RefSampleComponent.ComponentDbRef
  @param  Refs_ComponentDbRef self
  @param  ApiBoolean complete
**/
void *Refs_ComponentDbRef_CheckValid(Refs_ComponentDbRef self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: method 'checkValid' is not callable");
  
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
  @param  Refs_ComponentDbRef self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Refs_ComponentDbRef_FindAllApplicationData(Refs_ComponentDbRef self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: method 'findAllApplicationData' is not callable");
  
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
  @param  Refs_ComponentDbRef self
  @returns  all value that satisfy the conditions 
**/
ApiList Refs_ComponentDbRef_FindAllApplicationData_keyval0(Refs_ComponentDbRef self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_ComponentDbRef_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_ComponentDbRef self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Refs_ComponentDbRef_FindAllApplicationData_keyval1(Refs_ComponentDbRef self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_ComponentDbRef_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_ComponentDbRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Refs_ComponentDbRef_FindAllApplicationData_keyval2(Refs_ComponentDbRef self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_ComponentDbRef_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_ComponentDbRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Refs_ComponentDbRef_FindAllApplicationData_keyval3(Refs_ComponentDbRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_ComponentDbRef_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_ComponentDbRef self
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
ApiList Refs_ComponentDbRef_FindAllApplicationData_keyval4(Refs_ComponentDbRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_ComponentDbRef_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_ComponentDbRef self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Refs_ComponentDbRef_FindFirstApplicationData(Refs_ComponentDbRef self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: method 'findFirstApplicationData' is not callable");
  
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
  @param  Refs_ComponentDbRef self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Refs_ComponentDbRef_FindFirstApplicationData_keyval0(Refs_ComponentDbRef self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_ComponentDbRef_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_ComponentDbRef self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Refs_ComponentDbRef_FindFirstApplicationData_keyval1(Refs_ComponentDbRef self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_ComponentDbRef_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_ComponentDbRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Refs_ComponentDbRef_FindFirstApplicationData_keyval2(Refs_ComponentDbRef self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_ComponentDbRef_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_ComponentDbRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Refs_ComponentDbRef_FindFirstApplicationData_keyval3(Refs_ComponentDbRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_ComponentDbRef_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_ComponentDbRef self
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
Impl_ApplicationData Refs_ComponentDbRef_FindFirstApplicationData_keyval4(Refs_ComponentDbRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_ComponentDbRef_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.lims.RefSampleComponent.ComponentDbRef
  @param  Refs_ComponentDbRef self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Refs_ComponentDbRef_Get(Refs_ComponentDbRef self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Refs_ComponentDbRef self
  @returns   the result
**/
Acco_AccessObject Refs_ComponentDbRef_GetAccess(Refs_ComponentDbRef self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: method 'getAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.RefSampleComponent.ComponentDbRef.alignBegin

Optional. 
Residue number  (MolRedidue.serial)in the molecule sequence where the 
alignment begins.
  @param  Refs_ComponentDbRef self
  @returns   the result
**/
ApiInteger Refs_ComponentDbRef_GetAlignBegin(Refs_ComponentDbRef self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAlignBegin");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: cannot find method 'getAlignBegin'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: method 'getAlignBegin' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.RefSampleComponent.ComponentDbRef.alignEnd

Optional. 
Residue number (MolRedidue.serial) in the molecule sequence where the 
alignment ends.
  @param  Refs_ComponentDbRef self
  @returns   the result
**/
ApiInteger Refs_ComponentDbRef_GetAlignEnd(Refs_ComponentDbRef self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAlignEnd");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: cannot find method 'getAlignEnd'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: method 'getAlignEnd' is not callable");
  
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
  @param  Refs_ComponentDbRef self
  @returns   the result
**/
ApiList Refs_ComponentDbRef_GetApplicationData(Refs_ComponentDbRef self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.lims.RefSampleComponent.ComponentDbRef
  @param  Refs_ComponentDbRef self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Refs_ComponentDbRef Refs_ComponentDbRef_GetByKey(Refs_ComponentDbRef self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Refs_ComponentDbRef obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: method 'getByKey' is not callable");
  
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
  @param  Refs_ComponentDbRef self
  @returns   the result
**/
ApiString Refs_ComponentDbRef_GetClassName(Refs_ComponentDbRef self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.RefSampleComponent.ComponentDbRef.component

Link to 
the abstract component to which this entry belongs.
  @param  Refs_ComponentDbRef self
  @returns   the result
**/
Refs_AbstractComponent Refs_ComponentDbRef_GetComponent(Refs_ComponentDbRef self)
{
  
  Refs_AbstractComponent obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getComponent");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: cannot find method 'getComponent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: method 'getComponent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.RefSampleComponent.ComponentDbRef.dbRef

The database 
reference to which this entry belongs.
  @param  Refs_ComponentDbRef self
  @returns   the result
**/
Dbr_Entry Refs_ComponentDbRef_GetDbRef(Refs_ComponentDbRef self)
{
  
  Dbr_Entry obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDbRef");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: cannot find method 'getDbRef'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: method 'getDbRef' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.lims.RefSampleComponent.ComponentDbRef.dbRefAlignBegin

Optional. 
Residue number in the database reference sequence where the alignment 
begins.
  @param  Refs_ComponentDbRef self
  @returns   the result
**/
ApiInteger Refs_ComponentDbRef_GetDbRefAlignBegin(Refs_ComponentDbRef self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDbRefAlignBegin");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: cannot find method 'getDbRefAlignBegin'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: method 'getDbRefAlignBegin' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.lims.RefSampleComponent.ComponentDbRef.dbRefAlignEnd

Optional. 
Residue number in the database reference sequence where the alignment 
ends.
  @param  Refs_ComponentDbRef self
  @returns   the result
**/
ApiInteger Refs_ComponentDbRef_GetDbRefAlignEnd(Refs_ComponentDbRef self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDbRefAlignEnd");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: cannot find method 'getDbRefAlignEnd'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: method 'getDbRefAlignEnd' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.RefSampleComponent.ComponentDbRef.details

Detail field 
for comments.
  @param  Refs_ComponentDbRef self
  @returns   the result
**/
ApiString Refs_ComponentDbRef_GetDetails(Refs_ComponentDbRef self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: method 'getDetails' is not callable");
  
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
  @param  Refs_ComponentDbRef self
  @returns   the result
**/
ApiList Refs_ComponentDbRef_GetFieldNames(Refs_ComponentDbRef self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.lims.RefSampleComponent.ComponentDbRef
  @param  Refs_ComponentDbRef self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Refs_ComponentDbRef_GetFullKey(Refs_ComponentDbRef self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: method 'getFullKey' is not callable");
  
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
  @param  Refs_ComponentDbRef self
  @returns   the result
**/
ApiBoolean Refs_ComponentDbRef_GetInConstructor(Refs_ComponentDbRef self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: method 'getInConstructor' is not callable");
  
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
  @param  Refs_ComponentDbRef self
  @returns   the result
**/
ApiBoolean Refs_ComponentDbRef_GetIsDeleted(Refs_ComponentDbRef self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.lims.RefSampleComponent.ComponentDbRef
  @param  Refs_ComponentDbRef self
  @returns  Local object key
**/
ApiObject Refs_ComponentDbRef_GetLocalKey(Refs_ComponentDbRef self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: method 'getLocalKey' is not callable");
  
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
  @param  Refs_ComponentDbRef self
  @returns   the result
**/
ApiString Refs_ComponentDbRef_GetPackageName(Refs_ComponentDbRef self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: method 'getPackageName' is not callable");
  
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
  @param  Refs_ComponentDbRef self
  @returns   the result
**/
ApiString Refs_ComponentDbRef_GetPackageShortName(Refs_ComponentDbRef self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.RefSampleComponent.ComponentDbRef.parent

link to 
parent object - synonym for component
  @param  Refs_ComponentDbRef self
  @returns   the result
**/
Refs_AbstractComponent Refs_ComponentDbRef_GetParent(Refs_ComponentDbRef self)
{
  
  Refs_AbstractComponent obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: method 'getParent' is not callable");
  
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
  @param  Refs_ComponentDbRef self
  @returns   the result
**/
ApiString Refs_ComponentDbRef_GetQualifiedName(Refs_ComponentDbRef self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: method 'getQualifiedName' is not callable");
  
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
  @param  Refs_ComponentDbRef self
  @returns   the result
**/
Impl_MemopsRoot Refs_ComponentDbRef_GetRoot(Refs_ComponentDbRef self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.RefSampleComponent.ComponentDbRef.serial

Unique 
identifier.
  @param  Refs_ComponentDbRef self
  @returns   the result
**/
ApiInteger Refs_ComponentDbRef_GetSerial(Refs_ComponentDbRef self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: method 'getSerial' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.lims.RefSampleComponent.ComponentDbRef.threadingProg

Program used 
to obtain the threading score.
  @param  Refs_ComponentDbRef self
  @returns   the result
**/
ApiString Refs_ComponentDbRef_GetThreadingProg(Refs_ComponentDbRef self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getThreadingProg");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: cannot find method 'getThreadingProg'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: method 'getThreadingProg' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.RefSampleComponent.ComponentDbRef.threadingScore

The 
scoring value.
  @param  Refs_ComponentDbRef self
  @returns   the result
**/
ApiFloat Refs_ComponentDbRef_GetThreadingScore(Refs_ComponentDbRef self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getThreadingScore");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: cannot find method 'getThreadingScore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: method 'getThreadingScore' is not callable");
  
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
  @param  Refs_ComponentDbRef self
  @returns   the result
**/
Impl_TopObject Refs_ComponentDbRef_GetTopObject(Refs_ComponentDbRef self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.lims.RefSampleComponent.ComponentDbRef
  @param  Refs_AbstractComponent parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Refs_ComponentDbRef Refs_ComponentDbRef_Init(Refs_AbstractComponent parent, ApiMap attrlinks)
{
  
  return Refs_AbstractComponent_NewComponentDbRef(parent, attrlinks);
}

/**
  Constructor for ccp.lims.RefSampleComponent.ComponentDbRef
  @param  Refs_AbstractComponent parent
  @param  Dbr_Entry dbRef
  @returns  the new object
**/
Refs_ComponentDbRef Refs_ComponentDbRef_Init_reqd(Refs_AbstractComponent parent, Dbr_Entry dbRef)
{
  
  Refs_ComponentDbRef  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "dbRef", dbRef);
  
  obj = Refs_ComponentDbRef_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_ComponentDbRef self
  @param  Impl_ApplicationData value
**/
void *Refs_ComponentDbRef_RemoveApplicationData(Refs_ComponentDbRef self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.lims.RefSampleComponent.ComponentDbRef
  @param  Refs_ComponentDbRef self
  @param  ApiString name
  @param  ApiObject value
**/
void *Refs_ComponentDbRef_Set(Refs_ComponentDbRef self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Refs_ComponentDbRef self
  @param  Acco_AccessObject value
**/
void *Refs_ComponentDbRef_SetAccess(Refs_ComponentDbRef self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: method 'setAccess' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.RefSampleComponent.ComponentDbRef.alignBegin

Optional. 
Residue number  (MolRedidue.serial)in the molecule sequence where the 
alignment begins.
  @param  Refs_ComponentDbRef self
  @param  ApiInteger value
**/
void *Refs_ComponentDbRef_SetAlignBegin(Refs_ComponentDbRef self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAlignBegin");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: cannot find method 'setAlignBegin'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: method 'setAlignBegin' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.RefSampleComponent.ComponentDbRef.alignEnd

Optional. 
Residue number (MolRedidue.serial) in the molecule sequence where the 
alignment ends.
  @param  Refs_ComponentDbRef self
  @param  ApiInteger value
**/
void *Refs_ComponentDbRef_SetAlignEnd(Refs_ComponentDbRef self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAlignEnd");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: cannot find method 'setAlignEnd'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: method 'setAlignEnd' is not callable");
  
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
  @param  Refs_ComponentDbRef self
  @param  ApiList values
**/
void *Refs_ComponentDbRef_SetApplicationData(Refs_ComponentDbRef self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.RefSampleComponent.ComponentDbRef.dbRef

The database 
reference to which this entry belongs.
  @param  Refs_ComponentDbRef self
  @param  Dbr_Entry value
**/
void *Refs_ComponentDbRef_SetDbRef(Refs_ComponentDbRef self, Dbr_Entry value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDbRef");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: cannot find method 'setDbRef'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: method 'setDbRef' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.lims.RefSampleComponent.ComponentDbRef.dbRefAlignBegin

Optional. 
Residue number in the database reference sequence where the alignment 
begins.
  @param  Refs_ComponentDbRef self
  @param  ApiInteger value
**/
void *Refs_ComponentDbRef_SetDbRefAlignBegin(Refs_ComponentDbRef self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDbRefAlignBegin");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: cannot find method 'setDbRefAlignBegin'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: method 'setDbRefAlignBegin' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.lims.RefSampleComponent.ComponentDbRef.dbRefAlignEnd

Optional. 
Residue number in the database reference sequence where the alignment 
ends.
  @param  Refs_ComponentDbRef self
  @param  ApiInteger value
**/
void *Refs_ComponentDbRef_SetDbRefAlignEnd(Refs_ComponentDbRef self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDbRefAlignEnd");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: cannot find method 'setDbRefAlignEnd'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: method 'setDbRefAlignEnd' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.RefSampleComponent.ComponentDbRef.details

Detail field 
for comments.
  @param  Refs_ComponentDbRef self
  @param  ApiString value
**/
void *Refs_ComponentDbRef_SetDetails(Refs_ComponentDbRef self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.RefSampleComponent.ComponentDbRef.serial

Unique 
identifier.
  @param  Refs_ComponentDbRef self
  @param  ApiInteger value
**/
void *Refs_ComponentDbRef_SetSerial(Refs_ComponentDbRef self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.lims.RefSampleComponent.ComponentDbRef.threadingProg

Program used 
to obtain the threading score.
  @param  Refs_ComponentDbRef self
  @param  ApiString value
**/
void *Refs_ComponentDbRef_SetThreadingProg(Refs_ComponentDbRef self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setThreadingProg");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: cannot find method 'setThreadingProg'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: method 'setThreadingProg' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.RefSampleComponent.ComponentDbRef.threadingScore

The 
scoring value.
  @param  Refs_ComponentDbRef self
  @param  ApiFloat value
**/
void *Refs_ComponentDbRef_SetThreadingScore(Refs_ComponentDbRef self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setThreadingScore");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: cannot find method 'setThreadingScore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.ComponentDbRef: method 'setThreadingScore' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
