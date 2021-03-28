
#include "ccp.h"

/*
  Referencing information for a dimension of a DataSource ('spectrum'). A given dimension can have several alternative referencings.
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DataDimRef self
  @param  Impl_ApplicationData value
**/
void *Nmr_DataDimRef_AddApplicationData(Nmr_DataDimRef self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.nmr.Nmr.DataDimRef
  @param  Nmr_DataDimRef self
  @param  ApiBoolean complete
**/
void *Nmr_DataDimRef_CheckAllValid(Nmr_DataDimRef self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.nmr.Nmr.DataDimRef
  @param  Nmr_DataDimRef self
  @param  ApiBoolean complete
**/
void *Nmr_DataDimRef_CheckValid(Nmr_DataDimRef self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: method 'checkValid' is not callable");
  
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
  @param  Nmr_DataDimRef self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_DataDimRef_FindAllApplicationData(Nmr_DataDimRef self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: method 'findAllApplicationData' is not callable");
  
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
  @param  Nmr_DataDimRef self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_DataDimRef_FindAllApplicationData_keyval0(Nmr_DataDimRef self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_DataDimRef_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DataDimRef self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_DataDimRef_FindAllApplicationData_keyval1(Nmr_DataDimRef self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_DataDimRef_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DataDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_DataDimRef_FindAllApplicationData_keyval2(Nmr_DataDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_DataDimRef_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DataDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_DataDimRef_FindAllApplicationData_keyval3(Nmr_DataDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_DataDimRef_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DataDimRef self
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
ApiList Nmr_DataDimRef_FindAllApplicationData_keyval4(Nmr_DataDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_DataDimRef_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DataDimRef self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_DataDimRef_FindFirstApplicationData(Nmr_DataDimRef self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nmr_DataDimRef self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_DataDimRef_FindFirstApplicationData_keyval0(Nmr_DataDimRef self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_DataDimRef_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DataDimRef self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_DataDimRef_FindFirstApplicationData_keyval1(Nmr_DataDimRef self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_DataDimRef_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DataDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_DataDimRef_FindFirstApplicationData_keyval2(Nmr_DataDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_DataDimRef_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DataDimRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_DataDimRef_FindFirstApplicationData_keyval3(Nmr_DataDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_DataDimRef_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DataDimRef self
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
Impl_ApplicationData Nmr_DataDimRef_FindFirstApplicationData_keyval4(Nmr_DataDimRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_DataDimRef_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.nmr.Nmr.DataDimRef
  @param  Nmr_DataDimRef self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Nmr_DataDimRef_Get(Nmr_DataDimRef self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_DataDimRef self
  @returns   the result
**/
Acco_AccessObject Nmr_DataDimRef_GetAccess(Nmr_DataDimRef self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: method 'getAccess' is not callable");
  
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
  @param  Nmr_DataDimRef self
  @returns   the result
**/
Acco_AccessObject Nmr_DataDimRef_GetActiveAccess(Nmr_DataDimRef self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: method 'getActiveAccess' is not callable");
  
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
  @param  Nmr_DataDimRef self
  @returns   the result
**/
ApiList Nmr_DataDimRef_GetApplicationData(Nmr_DataDimRef self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.Nmr.DataDimRef
  @param  Nmr_DataDimRef self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nmr_DataDimRef Nmr_DataDimRef_GetByKey(Nmr_DataDimRef self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Nmr_DataDimRef obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: method 'getByKey' is not callable");
  
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
  @param  Nmr_DataDimRef self
  @returns   the result
**/
ApiString Nmr_DataDimRef_GetClassName(Nmr_DataDimRef self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.DataDimRef.dataDim

parent link
  @param  Nmr_DataDimRef self
  @returns   the result
**/
Nmr_FreqDataDim Nmr_DataDimRef_GetDataDim(Nmr_DataDimRef self)
{
  
  Nmr_FreqDataDim obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDataDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: cannot find method 'getDataDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: method 'getDataDim' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.DataDimRef.expDimRef

ExpDimRef corresponding to 
DataDimRef
  @param  Nmr_DataDimRef self
  @returns   the result
**/
Nmr_ExpDimRef Nmr_DataDimRef_GetExpDimRef(Nmr_DataDimRef self)
{
  
  Nmr_ExpDimRef obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExpDimRef");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: cannot find method 'getExpDimRef'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: method 'getExpDimRef' is not callable");
  
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
  @param  Nmr_DataDimRef self
  @returns   the result
**/
ApiList Nmr_DataDimRef_GetFieldNames(Nmr_DataDimRef self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.nmr.Nmr.DataDimRef
  @param  Nmr_DataDimRef self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Nmr_DataDimRef_GetFullKey(Nmr_DataDimRef self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: method 'getFullKey' is not callable");
  
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
  @param  Nmr_DataDimRef self
  @returns   the result
**/
ApiBoolean Nmr_DataDimRef_GetInConstructor(Nmr_DataDimRef self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: method 'getInConstructor' is not callable");
  
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
  @param  Nmr_DataDimRef self
  @returns   the result
**/
ApiBoolean Nmr_DataDimRef_GetIsDeleted(Nmr_DataDimRef self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.nmr.Nmr.DataDimRef
  @param  Nmr_DataDimRef self
  @returns  Local object key
**/
ApiObject Nmr_DataDimRef_GetLocalKey(Nmr_DataDimRef self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.DataDimRef.localValuePerPoint

DataDimRef-specific 
equivalent of DataDim.valuePerPoint. Overrides the DataDimRef value if 
set. Corresponds to the SW in Hz for a normal spectrum, and is used 
where different DataDimRef have different SW in Hz.
  @param  Nmr_DataDimRef self
  @returns   the result
**/
ApiFloat Nmr_DataDimRef_GetLocalValuePerPoint(Nmr_DataDimRef self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalValuePerPoint");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: cannot find method 'getLocalValuePerPoint'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: method 'getLocalValuePerPoint' is not callable");
  
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
  @param  Nmr_DataDimRef self
  @returns   the result
**/
ApiString Nmr_DataDimRef_GetPackageName(Nmr_DataDimRef self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: method 'getPackageName' is not callable");
  
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
  @param  Nmr_DataDimRef self
  @returns   the result
**/
ApiString Nmr_DataDimRef_GetPackageShortName(Nmr_DataDimRef self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.DataDimRef.parent

link to parent object - synonym 
for dataDim
  @param  Nmr_DataDimRef self
  @returns   the result
**/
Nmr_FreqDataDim Nmr_DataDimRef_GetParent(Nmr_DataDimRef self)
{
  
  Nmr_FreqDataDim obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: method 'getParent' is not callable");
  
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
  @param  Nmr_DataDimRef self
  @returns   the result
**/
ApiString Nmr_DataDimRef_GetQualifiedName(Nmr_DataDimRef self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.DataDimRef.refPoint

Point number (in floating point 
rather than integer) to which referencing value applies
  @param  Nmr_DataDimRef self
  @returns   the result
**/
ApiFloat Nmr_DataDimRef_GetRefPoint(Nmr_DataDimRef self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRefPoint");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: cannot find method 'getRefPoint'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: method 'getRefPoint' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.DataDimRef.refValue

Referencing value at refPoint, 
in expDimRef unit
  @param  Nmr_DataDimRef self
  @returns   the result
**/
ApiFloat Nmr_DataDimRef_GetRefValue(Nmr_DataDimRef self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRefValue");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: cannot find method 'getRefValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: method 'getRefValue' is not callable");
  
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
  @param  Nmr_DataDimRef self
  @returns   the result
**/
Impl_MemopsRoot Nmr_DataDimRef_GetRoot(Nmr_DataDimRef self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  get function for derived attribute spectralWidth
  @param  Nmr_DataDimRef self
  @returns   the result
**/
ApiFloat Nmr_DataDimRef_GetSpectralWidth(Nmr_DataDimRef self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSpectralWidth");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: cannot find method 'getSpectralWidth'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: method 'getSpectralWidth' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  get function for derived attribute spectralWidthOrig
  @param  Nmr_DataDimRef self
  @returns   the result
**/
ApiFloat Nmr_DataDimRef_GetSpectralWidthOrig(Nmr_DataDimRef self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSpectralWidthOrig");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: cannot find method 'getSpectralWidthOrig'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: method 'getSpectralWidthOrig' is not callable");
  
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
  @param  Nmr_DataDimRef self
  @returns   the result
**/
Impl_TopObject Nmr_DataDimRef_GetTopObject(Nmr_DataDimRef self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter function for derived attribute valuePerPoint
  @param  Nmr_DataDimRef self
  @returns   the result
**/
ApiFloat Nmr_DataDimRef_GetValuePerPoint(Nmr_DataDimRef self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getValuePerPoint");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: cannot find method 'getValuePerPoint'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: method 'getValuePerPoint' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.nmr.Nmr.DataDimRef
  @param  Nmr_FreqDataDim parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_DataDimRef Nmr_DataDimRef_Init(Nmr_FreqDataDim parent, ApiMap attrlinks)
{
  
  return Nmr_FreqDataDim_NewDataDimRef(parent, attrlinks);
}

/**
  Constructor for ccp.nmr.Nmr.DataDimRef
  @param  Nmr_FreqDataDim parent
  @param  Nmr_ExpDimRef expDimRef
  @returns  the new object
**/
Nmr_DataDimRef Nmr_DataDimRef_Init_reqd(Nmr_FreqDataDim parent, Nmr_ExpDimRef expDimRef)
{
  
  Nmr_DataDimRef  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "expDimRef", expDimRef);
  
  obj = Nmr_DataDimRef_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Converts input point value to output value in units of ExpDimRef.unit, 
correcting for referencing.
  @param  Nmr_DataDimRef self
  @param  ApiFloat point
  @returns  
**/
ApiFloat Nmr_DataDimRef_PointToValue(Nmr_DataDimRef self, ApiFloat point)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "pointToValue");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: cannot find method 'pointToValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: method 'pointToValue' is not callable");
  
  args = PyTuple_Pack(1, point);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DataDimRef self
  @param  Impl_ApplicationData value
**/
void *Nmr_DataDimRef_RemoveApplicationData(Nmr_DataDimRef self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.nmr.Nmr.DataDimRef
  @param  Nmr_DataDimRef self
  @param  ApiString name
  @param  ApiObject value
**/
void *Nmr_DataDimRef_Set(Nmr_DataDimRef self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_DataDimRef self
  @param  Acco_AccessObject value
**/
void *Nmr_DataDimRef_SetAccess(Nmr_DataDimRef self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: method 'setAccess' is not callable");
  
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
  @param  Nmr_DataDimRef self
  @param  ApiList values
**/
void *Nmr_DataDimRef_SetApplicationData(Nmr_DataDimRef self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.DataDimRef.expDimRef

ExpDimRef corresponding to 
DataDimRef
  @param  Nmr_DataDimRef self
  @param  Nmr_ExpDimRef value
**/
void *Nmr_DataDimRef_SetExpDimRef(Nmr_DataDimRef self, Nmr_ExpDimRef value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setExpDimRef");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: cannot find method 'setExpDimRef'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: method 'setExpDimRef' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.DataDimRef.localValuePerPoint

DataDimRef-specific 
equivalent of DataDim.valuePerPoint. Overrides the DataDimRef value if 
set. Corresponds to the SW in Hz for a normal spectrum, and is used 
where different DataDimRef have different SW in Hz.
  @param  Nmr_DataDimRef self
  @param  ApiFloat value
**/
void *Nmr_DataDimRef_SetLocalValuePerPoint(Nmr_DataDimRef self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLocalValuePerPoint");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: cannot find method 'setLocalValuePerPoint'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: method 'setLocalValuePerPoint' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.DataDimRef.refPoint

Point number (in floating point 
rather than integer) to which referencing value applies
  @param  Nmr_DataDimRef self
  @param  ApiFloat value
**/
void *Nmr_DataDimRef_SetRefPoint(Nmr_DataDimRef self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRefPoint");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: cannot find method 'setRefPoint'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: method 'setRefPoint' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.DataDimRef.refValue

Referencing value at refPoint, 
in expDimRef unit
  @param  Nmr_DataDimRef self
  @param  ApiFloat value
**/
void *Nmr_DataDimRef_SetRefValue(Nmr_DataDimRef self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRefValue");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: cannot find method 'setRefValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: method 'setRefValue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Convert input value in units of ExpDimRef.unit to output point value, 
correcting for referencing. 
  @param  Nmr_DataDimRef self
  @param  ApiFloat value
  @returns  result in point value
**/
ApiFloat Nmr_DataDimRef_ValueToPoint(Nmr_DataDimRef self, ApiFloat value)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "valueToPoint");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: cannot find method 'valueToPoint'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DataDimRef: method 'valueToPoint' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
