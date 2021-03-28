
#include "ccp.h"

/*
  Scaling factors used for various ExpDimRefs in this particular DataSource.
  Note: If there is no DimensionScaling connecting a DataDim with an ExpDimRef (both belonging to the same ExpDim) this means that the ExpDimRef is not used. Note taht a DimensionScaling with scalingFactors == (1.0,) is created automatically when a FreqDataDim or FidDataDim is created and 1) for each relevant ExpDimRef that has a refExpDimRef, 2) if nothing is created under 1) but there is only one relevant ExpDimRef, 3) if no9thing is created above but there is ony one relevant ExpDimRef  with measurementType == 'Shift'
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DimensionScaling self
  @param  Impl_ApplicationData value
**/
void *Nmr_DimensionScaling_AddApplicationData(Nmr_DimensionScaling self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DimensionScaling: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DimensionScaling: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.Nmr.DimensionScaling.scalingFactors

Scaling factors 
that may appear on relevant PeakDimComponents of peaks in the 
DataSource. The order of scaling factors is not significant, but the 
attribute is kept ordered to make it simpler to get hold of the data in 
the most common case where there is only one scalingFactor.
  @param  Nmr_DimensionScaling self
  @param  ApiFloat value
**/
void *Nmr_DimensionScaling_AddScalingFactor(Nmr_DimensionScaling self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addScalingFactor");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DimensionScaling: cannot find method 'addScalingFactor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DimensionScaling: method 'addScalingFactor' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.nmr.Nmr.DimensionScaling
  @param  Nmr_DimensionScaling self
  @param  ApiBoolean complete
**/
void *Nmr_DimensionScaling_CheckAllValid(Nmr_DimensionScaling self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DimensionScaling: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DimensionScaling: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.nmr.Nmr.DimensionScaling
  @param  Nmr_DimensionScaling self
  @param  ApiBoolean complete
**/
void *Nmr_DimensionScaling_CheckValid(Nmr_DimensionScaling self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DimensionScaling: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DimensionScaling: method 'checkValid' is not callable");
  
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
  @param  Nmr_DimensionScaling self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_DimensionScaling_FindAllApplicationData(Nmr_DimensionScaling self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DimensionScaling: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DimensionScaling: method 'findAllApplicationData' is not callable");
  
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
  @param  Nmr_DimensionScaling self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_DimensionScaling_FindAllApplicationData_keyval0(Nmr_DimensionScaling self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_DimensionScaling_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DimensionScaling self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_DimensionScaling_FindAllApplicationData_keyval1(Nmr_DimensionScaling self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_DimensionScaling_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DimensionScaling self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_DimensionScaling_FindAllApplicationData_keyval2(Nmr_DimensionScaling self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_DimensionScaling_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DimensionScaling self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_DimensionScaling_FindAllApplicationData_keyval3(Nmr_DimensionScaling self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_DimensionScaling_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DimensionScaling self
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
ApiList Nmr_DimensionScaling_FindAllApplicationData_keyval4(Nmr_DimensionScaling self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_DimensionScaling_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DimensionScaling self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_DimensionScaling_FindFirstApplicationData(Nmr_DimensionScaling self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DimensionScaling: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DimensionScaling: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nmr_DimensionScaling self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_DimensionScaling_FindFirstApplicationData_keyval0(Nmr_DimensionScaling self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_DimensionScaling_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DimensionScaling self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_DimensionScaling_FindFirstApplicationData_keyval1(Nmr_DimensionScaling self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_DimensionScaling_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DimensionScaling self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_DimensionScaling_FindFirstApplicationData_keyval2(Nmr_DimensionScaling self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_DimensionScaling_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DimensionScaling self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_DimensionScaling_FindFirstApplicationData_keyval3(Nmr_DimensionScaling self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_DimensionScaling_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DimensionScaling self
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
Impl_ApplicationData Nmr_DimensionScaling_FindFirstApplicationData_keyval4(Nmr_DimensionScaling self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_DimensionScaling_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.nmr.Nmr.DimensionScaling
  @param  Nmr_DimensionScaling self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Nmr_DimensionScaling_Get(Nmr_DimensionScaling self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_DimensionScaling self
  @returns   the result
**/
Acco_AccessObject Nmr_DimensionScaling_GetAccess(Nmr_DimensionScaling self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DimensionScaling: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DimensionScaling: method 'getAccess' is not callable");
  
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
  @param  Nmr_DimensionScaling self
  @returns   the result
**/
Acco_AccessObject Nmr_DimensionScaling_GetActiveAccess(Nmr_DimensionScaling self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DimensionScaling: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DimensionScaling: method 'getActiveAccess' is not callable");
  
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
  @param  Nmr_DimensionScaling self
  @returns   the result
**/
ApiList Nmr_DimensionScaling_GetApplicationData(Nmr_DimensionScaling self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DimensionScaling: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DimensionScaling: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.Nmr.DimensionScaling
  @param  Nmr_DimensionScaling self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nmr_DimensionScaling Nmr_DimensionScaling_GetByKey(Nmr_DimensionScaling self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Nmr_DimensionScaling obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DimensionScaling: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DimensionScaling: method 'getByKey' is not callable");
  
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
  @param  Nmr_DimensionScaling self
  @returns   the result
**/
ApiString Nmr_DimensionScaling_GetClassName(Nmr_DimensionScaling self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DimensionScaling: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DimensionScaling: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.DimensionScaling.dataDim

parent link
  @param  Nmr_DimensionScaling self
  @returns   the result
**/
Nmr_AbstractDataDim Nmr_DimensionScaling_GetDataDim(Nmr_DimensionScaling self)
{
  
  Nmr_AbstractDataDim obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDataDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DimensionScaling: cannot find method 'getDataDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DimensionScaling: method 'getDataDim' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.DimensionScaling.expDimRef

ExpDimRef to which the 
scaling factor applies
  @param  Nmr_DimensionScaling self
  @returns   the result
**/
Nmr_ExpDimRef Nmr_DimensionScaling_GetExpDimRef(Nmr_DimensionScaling self)
{
  
  Nmr_ExpDimRef obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExpDimRef");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DimensionScaling: cannot find method 'getExpDimRef'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DimensionScaling: method 'getExpDimRef' is not callable");
  
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
  @param  Nmr_DimensionScaling self
  @returns   the result
**/
ApiList Nmr_DimensionScaling_GetFieldNames(Nmr_DimensionScaling self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DimensionScaling: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DimensionScaling: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.nmr.Nmr.DimensionScaling
  @param  Nmr_DimensionScaling self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Nmr_DimensionScaling_GetFullKey(Nmr_DimensionScaling self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DimensionScaling: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DimensionScaling: method 'getFullKey' is not callable");
  
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
  @param  Nmr_DimensionScaling self
  @returns   the result
**/
ApiBoolean Nmr_DimensionScaling_GetInConstructor(Nmr_DimensionScaling self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DimensionScaling: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DimensionScaling: method 'getInConstructor' is not callable");
  
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
  @param  Nmr_DimensionScaling self
  @returns   the result
**/
ApiBoolean Nmr_DimensionScaling_GetIsDeleted(Nmr_DimensionScaling self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DimensionScaling: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DimensionScaling: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.nmr.Nmr.DimensionScaling
  @param  Nmr_DimensionScaling self
  @returns  Local object key
**/
ApiObject Nmr_DimensionScaling_GetLocalKey(Nmr_DimensionScaling self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DimensionScaling: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DimensionScaling: method 'getLocalKey' is not callable");
  
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
  @param  Nmr_DimensionScaling self
  @returns   the result
**/
ApiString Nmr_DimensionScaling_GetPackageName(Nmr_DimensionScaling self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DimensionScaling: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DimensionScaling: method 'getPackageName' is not callable");
  
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
  @param  Nmr_DimensionScaling self
  @returns   the result
**/
ApiString Nmr_DimensionScaling_GetPackageShortName(Nmr_DimensionScaling self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DimensionScaling: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DimensionScaling: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.DimensionScaling.parent

link to parent object - 
synonym for dataDim
  @param  Nmr_DimensionScaling self
  @returns   the result
**/
Nmr_AbstractDataDim Nmr_DimensionScaling_GetParent(Nmr_DimensionScaling self)
{
  
  Nmr_AbstractDataDim obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DimensionScaling: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DimensionScaling: method 'getParent' is not callable");
  
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
  @param  Nmr_DimensionScaling self
  @returns   the result
**/
ApiString Nmr_DimensionScaling_GetQualifiedName(Nmr_DimensionScaling self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DimensionScaling: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DimensionScaling: method 'getQualifiedName' is not callable");
  
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
  @param  Nmr_DimensionScaling self
  @returns   the result
**/
Impl_MemopsRoot Nmr_DimensionScaling_GetRoot(Nmr_DimensionScaling self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DimensionScaling: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DimensionScaling: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.DimensionScaling.scalingFactors

Scaling factors 
that may appear on relevant PeakDimComponents of peaks in the 
DataSource. The order of scaling factors is not significant, but the 
attribute is kept ordered to make it simpler to get hold of the data in 
the most common case where there is only one scalingFactor.
  @param  Nmr_DimensionScaling self
  @returns   the result
**/
ApiList Nmr_DimensionScaling_GetScalingFactors(Nmr_DimensionScaling self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getScalingFactors");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DimensionScaling: cannot find method 'getScalingFactors'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DimensionScaling: method 'getScalingFactors' is not callable");
  
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
  @param  Nmr_DimensionScaling self
  @returns   the result
**/
Impl_TopObject Nmr_DimensionScaling_GetTopObject(Nmr_DimensionScaling self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DimensionScaling: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DimensionScaling: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.nmr.Nmr.DimensionScaling
  @param  Nmr_AbstractDataDim parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_DimensionScaling Nmr_DimensionScaling_Init(Nmr_AbstractDataDim parent, ApiMap attrlinks)
{
  
  return Nmr_AbstractDataDim_NewDimensionScaling(parent, attrlinks);
}

/**
  Constructor for ccp.nmr.Nmr.DimensionScaling
  @param  Nmr_AbstractDataDim parent
  @param  Nmr_ExpDimRef expDimRef
  @returns  the new object
**/
Nmr_DimensionScaling Nmr_DimensionScaling_Init_reqd(Nmr_AbstractDataDim parent, Nmr_ExpDimRef expDimRef)
{
  
  Nmr_DimensionScaling  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "expDimRef", expDimRef);
  
  obj = Nmr_DimensionScaling_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DimensionScaling self
  @param  Impl_ApplicationData value
**/
void *Nmr_DimensionScaling_RemoveApplicationData(Nmr_DimensionScaling self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DimensionScaling: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DimensionScaling: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.Nmr.DimensionScaling.scalingFactors

Scaling factors 
that may appear on relevant PeakDimComponents of peaks in the 
DataSource. The order of scaling factors is not significant, but the 
attribute is kept ordered to make it simpler to get hold of the data in 
the most common case where there is only one scalingFactor.
  @param  Nmr_DimensionScaling self
  @param  ApiFloat value
**/
void *Nmr_DimensionScaling_RemoveScalingFactor(Nmr_DimensionScaling self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeScalingFactor");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DimensionScaling: cannot find method 'removeScalingFactor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DimensionScaling: method 'removeScalingFactor' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.nmr.Nmr.DimensionScaling
  @param  Nmr_DimensionScaling self
  @param  ApiString name
  @param  ApiObject value
**/
void *Nmr_DimensionScaling_Set(Nmr_DimensionScaling self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_DimensionScaling self
  @param  Acco_AccessObject value
**/
void *Nmr_DimensionScaling_SetAccess(Nmr_DimensionScaling self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DimensionScaling: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DimensionScaling: method 'setAccess' is not callable");
  
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
  @param  Nmr_DimensionScaling self
  @param  ApiList values
**/
void *Nmr_DimensionScaling_SetApplicationData(Nmr_DimensionScaling self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DimensionScaling: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DimensionScaling: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.DimensionScaling.expDimRef

ExpDimRef to which the 
scaling factor applies
  @param  Nmr_DimensionScaling self
  @param  Nmr_ExpDimRef value
**/
void *Nmr_DimensionScaling_SetExpDimRef(Nmr_DimensionScaling self, Nmr_ExpDimRef value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setExpDimRef");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DimensionScaling: cannot find method 'setExpDimRef'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DimensionScaling: method 'setExpDimRef' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.DimensionScaling.scalingFactors

Scaling factors 
that may appear on relevant PeakDimComponents of peaks in the 
DataSource. The order of scaling factors is not significant, but the 
attribute is kept ordered to make it simpler to get hold of the data in 
the most common case where there is only one scalingFactor.
  @param  Nmr_DimensionScaling self
  @param  ApiList values
**/
void *Nmr_DimensionScaling_SetScalingFactors(Nmr_DimensionScaling self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setScalingFactors");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.DimensionScaling: cannot find method 'setScalingFactors'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.DimensionScaling: method 'setScalingFactors' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
