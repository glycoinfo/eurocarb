
#include "ccp.h"

/*
  Describes the sparse sampling schedule. For every dim that is sparsely sampled, there will be a SparseSampling object. The nth value in SparseSampling.pointNumbers gives the timestep number for this dimension that was used in the nth sparsely sampled hypercomplex point..
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SparseSampling self
  @param  Impl_ApplicationData value
**/
void *Nmr_SparseSampling_AddApplicationData(Nmr_SparseSampling self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.Nmr.SparseSampling.pointNumbers

Point numbers (time 
step numbers) for dimension dim in random sampling. The length must be 
equal to the Experiment.numTimePoints
  @param  Nmr_SparseSampling self
  @param  ApiInteger value
**/
void *Nmr_SparseSampling_AddPointNumber(Nmr_SparseSampling self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addPointNumber");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: cannot find method 'addPointNumber'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: method 'addPointNumber' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.nmr.Nmr.SparseSampling
  @param  Nmr_SparseSampling self
  @param  ApiBoolean complete
**/
void *Nmr_SparseSampling_CheckAllValid(Nmr_SparseSampling self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.nmr.Nmr.SparseSampling
  @param  Nmr_SparseSampling self
  @param  ApiBoolean complete
**/
void *Nmr_SparseSampling_CheckValid(Nmr_SparseSampling self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: method 'checkValid' is not callable");
  
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
  @param  Nmr_SparseSampling self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_SparseSampling_FindAllApplicationData(Nmr_SparseSampling self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: method 'findAllApplicationData' is not callable");
  
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
  @param  Nmr_SparseSampling self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_SparseSampling_FindAllApplicationData_keyval0(Nmr_SparseSampling self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_SparseSampling_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SparseSampling self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_SparseSampling_FindAllApplicationData_keyval1(Nmr_SparseSampling self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_SparseSampling_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SparseSampling self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_SparseSampling_FindAllApplicationData_keyval2(Nmr_SparseSampling self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_SparseSampling_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SparseSampling self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_SparseSampling_FindAllApplicationData_keyval3(Nmr_SparseSampling self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_SparseSampling_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SparseSampling self
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
ApiList Nmr_SparseSampling_FindAllApplicationData_keyval4(Nmr_SparseSampling self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_SparseSampling_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SparseSampling self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_SparseSampling_FindFirstApplicationData(Nmr_SparseSampling self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nmr_SparseSampling self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_SparseSampling_FindFirstApplicationData_keyval0(Nmr_SparseSampling self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_SparseSampling_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SparseSampling self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_SparseSampling_FindFirstApplicationData_keyval1(Nmr_SparseSampling self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_SparseSampling_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SparseSampling self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_SparseSampling_FindFirstApplicationData_keyval2(Nmr_SparseSampling self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_SparseSampling_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SparseSampling self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_SparseSampling_FindFirstApplicationData_keyval3(Nmr_SparseSampling self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_SparseSampling_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SparseSampling self
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
Impl_ApplicationData Nmr_SparseSampling_FindFirstApplicationData_keyval4(Nmr_SparseSampling self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_SparseSampling_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.nmr.Nmr.SparseSampling
  @param  Nmr_SparseSampling self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Nmr_SparseSampling_Get(Nmr_SparseSampling self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_SparseSampling self
  @returns   the result
**/
Acco_AccessObject Nmr_SparseSampling_GetAccess(Nmr_SparseSampling self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: method 'getAccess' is not callable");
  
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
  @param  Nmr_SparseSampling self
  @returns   the result
**/
Acco_AccessObject Nmr_SparseSampling_GetActiveAccess(Nmr_SparseSampling self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: method 'getActiveAccess' is not callable");
  
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
  @param  Nmr_SparseSampling self
  @returns   the result
**/
ApiList Nmr_SparseSampling_GetApplicationData(Nmr_SparseSampling self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.Nmr.SparseSampling
  @param  Nmr_SparseSampling self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nmr_SparseSampling Nmr_SparseSampling_GetByKey(Nmr_SparseSampling self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Nmr_SparseSampling obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: method 'getByKey' is not callable");
  
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
  @param  Nmr_SparseSampling self
  @returns   the result
**/
ApiString Nmr_SparseSampling_GetClassName(Nmr_SparseSampling self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.SparseSampling.dataSource

parent link
  @param  Nmr_SparseSampling self
  @returns   the result
**/
Nmr_DataSource Nmr_SparseSampling_GetDataSource(Nmr_SparseSampling self)
{
  
  Nmr_DataSource obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDataSource");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: cannot find method 'getDataSource'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: method 'getDataSource' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.SparseSampling.dim

Dimension that is sparsely 
sampled
  @param  Nmr_SparseSampling self
  @returns   the result
**/
ApiInteger Nmr_SparseSampling_GetDim(Nmr_SparseSampling self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: cannot find method 'getDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: method 'getDim' is not callable");
  
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
  @param  Nmr_SparseSampling self
  @returns   the result
**/
ApiList Nmr_SparseSampling_GetFieldNames(Nmr_SparseSampling self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.nmr.Nmr.SparseSampling
  @param  Nmr_SparseSampling self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Nmr_SparseSampling_GetFullKey(Nmr_SparseSampling self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: method 'getFullKey' is not callable");
  
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
  @param  Nmr_SparseSampling self
  @returns   the result
**/
ApiBoolean Nmr_SparseSampling_GetInConstructor(Nmr_SparseSampling self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: method 'getInConstructor' is not callable");
  
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
  @param  Nmr_SparseSampling self
  @returns   the result
**/
ApiBoolean Nmr_SparseSampling_GetIsDeleted(Nmr_SparseSampling self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.nmr.Nmr.SparseSampling
  @param  Nmr_SparseSampling self
  @returns  Local object key
**/
ApiObject Nmr_SparseSampling_GetLocalKey(Nmr_SparseSampling self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.SparseSampling.minPointsPerVector

Minimum nuber of 
non-null points in any row or column.
  @param  Nmr_SparseSampling self
  @returns   the result
**/
ApiInteger Nmr_SparseSampling_GetMinPointsPerVector(Nmr_SparseSampling self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMinPointsPerVector");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: cannot find method 'getMinPointsPerVector'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: method 'getMinPointsPerVector' is not callable");
  
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
  @param  Nmr_SparseSampling self
  @returns   the result
**/
ApiString Nmr_SparseSampling_GetPackageName(Nmr_SparseSampling self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: method 'getPackageName' is not callable");
  
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
  @param  Nmr_SparseSampling self
  @returns   the result
**/
ApiString Nmr_SparseSampling_GetPackageShortName(Nmr_SparseSampling self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.SparseSampling.parent

link to parent object - 
synonym for dataSource
  @param  Nmr_SparseSampling self
  @returns   the result
**/
Nmr_DataSource Nmr_SparseSampling_GetParent(Nmr_SparseSampling self)
{
  
  Nmr_DataSource obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.SparseSampling.pointNumbers

Point numbers (time 
step numbers) for dimension dim in random sampling. The length must be 
equal to the Experiment.numTimePoints
  @param  Nmr_SparseSampling self
  @returns   the result
**/
ApiList Nmr_SparseSampling_GetPointNumbers(Nmr_SparseSampling self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPointNumbers");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: cannot find method 'getPointNumbers'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: method 'getPointNumbers' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.SparseSampling.predJ

Predicted J coupling value - 
used for optimisation of non-uniform sampling
  @param  Nmr_SparseSampling self
  @returns   the result
**/
ApiFloat Nmr_SparseSampling_GetPredJ(Nmr_SparseSampling self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPredJ");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: cannot find method 'getPredJ'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: method 'getPredJ' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.SparseSampling.predT2

Predicted T2, in seconds. 
Used for optimisation of non-uniform samplin
  @param  Nmr_SparseSampling self
  @returns   the result
**/
ApiFloat Nmr_SparseSampling_GetPredT2(Nmr_SparseSampling self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPredT2");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: cannot find method 'getPredT2'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: method 'getPredT2' is not callable");
  
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
  @param  Nmr_SparseSampling self
  @returns   the result
**/
ApiString Nmr_SparseSampling_GetQualifiedName(Nmr_SparseSampling self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: method 'getQualifiedName' is not callable");
  
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
  @param  Nmr_SparseSampling self
  @returns   the result
**/
Impl_MemopsRoot Nmr_SparseSampling_GetRoot(Nmr_SparseSampling self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: method 'getRoot' is not callable");
  
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
  @param  Nmr_SparseSampling self
  @returns   the result
**/
Impl_TopObject Nmr_SparseSampling_GetTopObject(Nmr_SparseSampling self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.nmr.Nmr.SparseSampling
  @param  Nmr_DataSource parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_SparseSampling Nmr_SparseSampling_Init(Nmr_DataSource parent, ApiMap attrlinks)
{
  
  return Nmr_DataSource_NewSparseSampling(parent, attrlinks);
}

/**
  Constructor for ccp.nmr.Nmr.SparseSampling
  @param  Nmr_DataSource parent
  @param  ApiInteger dim
  @returns  the new object
**/
Nmr_SparseSampling Nmr_SparseSampling_Init_reqd(Nmr_DataSource parent, ApiInteger dim)
{
  
  Nmr_SparseSampling  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "dim", dim);
  
  obj = Nmr_SparseSampling_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SparseSampling self
  @param  Impl_ApplicationData value
**/
void *Nmr_SparseSampling_RemoveApplicationData(Nmr_SparseSampling self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.Nmr.SparseSampling.pointNumbers

Point numbers (time 
step numbers) for dimension dim in random sampling. The length must be 
equal to the Experiment.numTimePoints
  @param  Nmr_SparseSampling self
  @param  ApiInteger value
**/
void *Nmr_SparseSampling_RemovePointNumber(Nmr_SparseSampling self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removePointNumber");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: cannot find method 'removePointNumber'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: method 'removePointNumber' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.nmr.Nmr.SparseSampling
  @param  Nmr_SparseSampling self
  @param  ApiString name
  @param  ApiObject value
**/
void *Nmr_SparseSampling_Set(Nmr_SparseSampling self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_SparseSampling self
  @param  Acco_AccessObject value
**/
void *Nmr_SparseSampling_SetAccess(Nmr_SparseSampling self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: method 'setAccess' is not callable");
  
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
  @param  Nmr_SparseSampling self
  @param  ApiList values
**/
void *Nmr_SparseSampling_SetApplicationData(Nmr_SparseSampling self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.SparseSampling.dim

Dimension that is sparsely 
sampled
  @param  Nmr_SparseSampling self
  @param  ApiInteger value
**/
void *Nmr_SparseSampling_SetDim(Nmr_SparseSampling self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: cannot find method 'setDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: method 'setDim' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.SparseSampling.minPointsPerVector

Minimum nuber of 
non-null points in any row or column.
  @param  Nmr_SparseSampling self
  @param  ApiInteger value
**/
void *Nmr_SparseSampling_SetMinPointsPerVector(Nmr_SparseSampling self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMinPointsPerVector");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: cannot find method 'setMinPointsPerVector'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: method 'setMinPointsPerVector' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.SparseSampling.pointNumbers

Point numbers (time 
step numbers) for dimension dim in random sampling. The length must be 
equal to the Experiment.numTimePoints
  @param  Nmr_SparseSampling self
  @param  ApiList values
**/
void *Nmr_SparseSampling_SetPointNumbers(Nmr_SparseSampling self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPointNumbers");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: cannot find method 'setPointNumbers'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: method 'setPointNumbers' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.SparseSampling.predJ

Predicted J coupling value - 
used for optimisation of non-uniform sampling
  @param  Nmr_SparseSampling self
  @param  ApiFloat value
**/
void *Nmr_SparseSampling_SetPredJ(Nmr_SparseSampling self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPredJ");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: cannot find method 'setPredJ'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: method 'setPredJ' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.SparseSampling.predT2

Predicted T2, in seconds. 
Used for optimisation of non-uniform samplin
  @param  Nmr_SparseSampling self
  @param  ApiFloat value
**/
void *Nmr_SparseSampling_SetPredT2(Nmr_SparseSampling self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPredT2");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: cannot find method 'setPredT2'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SparseSampling: method 'setPredT2' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
