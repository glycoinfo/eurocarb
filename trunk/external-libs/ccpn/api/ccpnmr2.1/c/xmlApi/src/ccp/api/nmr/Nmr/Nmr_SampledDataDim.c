
#include "ccp.h"

/*
  A data dimension where points are not regularly spaced. The point values are given as an explicit list (pointValues). Intended for non-linear sampling, T1 or titration series, ...
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SampledDataDim self
  @param  Impl_ApplicationData value
**/
void *Nmr_SampledDataDim_AddApplicationData(Nmr_SampledDataDim self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.Nmr.SampledDataDim.pointErrors

List of the abscissa 
errors (std deviation) of the points in the dimension The order is 
significant and preserved. If set, the length must be the same as the 
length of the pointValues.
  @param  Nmr_SampledDataDim self
  @param  ApiFloat value
**/
void *Nmr_SampledDataDim_AddPointError(Nmr_SampledDataDim self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addPointError");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: cannot find method 'addPointError'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: method 'addPointError' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.Nmr.SampledDataDim.pointValues

List of the abscissa 
values of the points in the dimension The order is significant and 
preserved.
  @param  Nmr_SampledDataDim self
  @param  ApiFloat value
**/
void *Nmr_SampledDataDim_AddPointValue(Nmr_SampledDataDim self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addPointValue");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: cannot find method 'addPointValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: method 'addPointValue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.nmr.Nmr.SampledDataDim
  @param  Nmr_SampledDataDim self
  @param  ApiBoolean complete
**/
void *Nmr_SampledDataDim_CheckAllValid(Nmr_SampledDataDim self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.nmr.Nmr.SampledDataDim
  @param  Nmr_SampledDataDim self
  @param  ApiBoolean complete
**/
void *Nmr_SampledDataDim_CheckValid(Nmr_SampledDataDim self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: method 'checkValid' is not callable");
  
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
  @param  Nmr_SampledDataDim self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_SampledDataDim_FindAllApplicationData(Nmr_SampledDataDim self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: method 'findAllApplicationData' is not callable");
  
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
  @param  Nmr_SampledDataDim self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_SampledDataDim_FindAllApplicationData_keyval0(Nmr_SampledDataDim self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_SampledDataDim_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SampledDataDim self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_SampledDataDim_FindAllApplicationData_keyval1(Nmr_SampledDataDim self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_SampledDataDim_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SampledDataDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_SampledDataDim_FindAllApplicationData_keyval2(Nmr_SampledDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_SampledDataDim_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SampledDataDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_SampledDataDim_FindAllApplicationData_keyval3(Nmr_SampledDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_SampledDataDim_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SampledDataDim self
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
ApiList Nmr_SampledDataDim_FindAllApplicationData_keyval4(Nmr_SampledDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_SampledDataDim_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDim.dimensionScalings

child link to 
class DimensionScaling
  @param  Nmr_SampledDataDim self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_SampledDataDim_FindAllDimensionScalings(Nmr_SampledDataDim self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllDimensionScalings");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: cannot find method 'findAllDimensionScalings'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: method 'findAllDimensionScalings' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDim.dimensionScalings

child link to 
class DimensionScaling
  @param  Nmr_SampledDataDim self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_SampledDataDim_FindAllDimensionScalings_keyval0(Nmr_SampledDataDim self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_SampledDataDim_FindAllDimensionScalings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDim.dimensionScalings

child link to 
class DimensionScaling
  @param  Nmr_SampledDataDim self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_SampledDataDim_FindAllDimensionScalings_keyval1(Nmr_SampledDataDim self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_SampledDataDim_FindAllDimensionScalings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDim.dimensionScalings

child link to 
class DimensionScaling
  @param  Nmr_SampledDataDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_SampledDataDim_FindAllDimensionScalings_keyval2(Nmr_SampledDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_SampledDataDim_FindAllDimensionScalings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDim.dimensionScalings

child link to 
class DimensionScaling
  @param  Nmr_SampledDataDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_SampledDataDim_FindAllDimensionScalings_keyval3(Nmr_SampledDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_SampledDataDim_FindAllDimensionScalings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDim.dimensionScalings

child link to 
class DimensionScaling
  @param  Nmr_SampledDataDim self
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
ApiSet Nmr_SampledDataDim_FindAllDimensionScalings_keyval4(Nmr_SampledDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_SampledDataDim_FindAllDimensionScalings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SampledDataDim self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_SampledDataDim_FindFirstApplicationData(Nmr_SampledDataDim self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nmr_SampledDataDim self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_SampledDataDim_FindFirstApplicationData_keyval0(Nmr_SampledDataDim self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_SampledDataDim_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SampledDataDim self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_SampledDataDim_FindFirstApplicationData_keyval1(Nmr_SampledDataDim self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_SampledDataDim_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SampledDataDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_SampledDataDim_FindFirstApplicationData_keyval2(Nmr_SampledDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_SampledDataDim_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SampledDataDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_SampledDataDim_FindFirstApplicationData_keyval3(Nmr_SampledDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_SampledDataDim_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SampledDataDim self
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
Impl_ApplicationData Nmr_SampledDataDim_FindFirstApplicationData_keyval4(Nmr_SampledDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_SampledDataDim_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDim.dimensionScalings

child link 
to class DimensionScaling
  @param  Nmr_SampledDataDim self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_DimensionScaling Nmr_SampledDataDim_FindFirstDimensionScaling(Nmr_SampledDataDim self, ApiMap conditions)
{
  
  Nmr_DimensionScaling obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstDimensionScaling");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: cannot find method 'findFirstDimensionScaling'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: method 'findFirstDimensionScaling' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDim.dimensionScalings

child link 
to class DimensionScaling
  @param  Nmr_SampledDataDim self
  @returns  the first value that satisfies the conditions 
**/
Nmr_DimensionScaling Nmr_SampledDataDim_FindFirstDimensionScaling_keyval0(Nmr_SampledDataDim self)
{
  
  Nmr_DimensionScaling  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_SampledDataDim_FindFirstDimensionScaling(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDim.dimensionScalings

child link 
to class DimensionScaling
  @param  Nmr_SampledDataDim self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_DimensionScaling Nmr_SampledDataDim_FindFirstDimensionScaling_keyval1(Nmr_SampledDataDim self, char * key, ApiObject value)
{
  
  Nmr_DimensionScaling  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_SampledDataDim_FindFirstDimensionScaling(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDim.dimensionScalings

child link 
to class DimensionScaling
  @param  Nmr_SampledDataDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_DimensionScaling Nmr_SampledDataDim_FindFirstDimensionScaling_keyval2(Nmr_SampledDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_DimensionScaling  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_SampledDataDim_FindFirstDimensionScaling(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDim.dimensionScalings

child link 
to class DimensionScaling
  @param  Nmr_SampledDataDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_DimensionScaling Nmr_SampledDataDim_FindFirstDimensionScaling_keyval3(Nmr_SampledDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_DimensionScaling  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_SampledDataDim_FindFirstDimensionScaling(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDim.dimensionScalings

child link 
to class DimensionScaling
  @param  Nmr_SampledDataDim self
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
Nmr_DimensionScaling Nmr_SampledDataDim_FindFirstDimensionScaling_keyval4(Nmr_SampledDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_DimensionScaling  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_SampledDataDim_FindFirstDimensionScaling(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.nmr.Nmr.SampledDataDim
  @param  Nmr_SampledDataDim self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Nmr_SampledDataDim_Get(Nmr_SampledDataDim self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_SampledDataDim self
  @returns   the result
**/
Acco_AccessObject Nmr_SampledDataDim_GetAccess(Nmr_SampledDataDim self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: method 'getAccess' is not callable");
  
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
  @param  Nmr_SampledDataDim self
  @returns   the result
**/
Acco_AccessObject Nmr_SampledDataDim_GetActiveAccess(Nmr_SampledDataDim self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: method 'getActiveAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.AbstractDataDim.analysisDataDim

AnalysisDataDim 
associated with DataDim
  @param  Nmr_SampledDataDim self
  @returns   the result
**/
Anal_AnalysisDataDim Nmr_SampledDataDim_GetAnalysisDataDim(Nmr_SampledDataDim self)
{
  
  Anal_AnalysisDataDim obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAnalysisDataDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: cannot find method 'getAnalysisDataDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: method 'getAnalysisDataDim' is not callable");
  
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
  @param  Nmr_SampledDataDim self
  @returns   the result
**/
ApiList Nmr_SampledDataDim_GetApplicationData(Nmr_SampledDataDim self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.Nmr.SampledDataDim
  @param  Nmr_SampledDataDim self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nmr_SampledDataDim Nmr_SampledDataDim_GetByKey(Nmr_SampledDataDim self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Nmr_SampledDataDim obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: method 'getByKey' is not callable");
  
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
  @param  Nmr_SampledDataDim self
  @returns   the result
**/
ApiString Nmr_SampledDataDim_GetClassName(Nmr_SampledDataDim self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.SampledDataDim.conditionVaried

Description of the 
parameter being varied (e.g. temperature, pH, relaxation delay, ...)
  @param  Nmr_SampledDataDim self
  @returns   the result
**/
ApiString Nmr_SampledDataDim_GetConditionVaried(Nmr_SampledDataDim self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getConditionVaried");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: cannot find method 'getConditionVaried'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: method 'getConditionVaried' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.AbstractDataDim.dataSource

parent link
  @param  Nmr_SampledDataDim self
  @returns   the result
**/
Nmr_DataSource Nmr_SampledDataDim_GetDataSource(Nmr_SampledDataDim self)
{
  
  Nmr_DataSource obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDataSource");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: cannot find method 'getDataSource'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: method 'getDataSource' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.SampledDataDim.details

Free text, for notes, 
explanatory comments, etc.
  @param  Nmr_SampledDataDim self
  @returns   the result
**/
ApiString Nmr_SampledDataDim_GetDetails(Nmr_SampledDataDim self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: method 'getDetails' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.AbstractDataDim.dim

Dimension number. Dimensions go 
from 1 to numDim. For projections that means the numDim of the 
dataSource, not of the experiment. dim for an AbstractDataDim can be set 
independently of the dim for the corresponding ExpDim, although it is 
recommended that the acquisition dimension (if present) be given dim 1. 
The dim values correspond to the storage order in the corresponding 
file, 1 being the fastest varying dim.
  @param  Nmr_SampledDataDim self
  @returns   the result
**/
ApiInteger Nmr_SampledDataDim_GetDim(Nmr_SampledDataDim self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: cannot find method 'getDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: method 'getDim' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.AbstractDataDim.dimensionScalings

child link to 
class DimensionScaling
  @param  Nmr_SampledDataDim self
  @returns   the result
**/
ApiSet Nmr_SampledDataDim_GetDimensionScalings(Nmr_SampledDataDim self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDimensionScalings");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: cannot find method 'getDimensionScalings'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: method 'getDimensionScalings' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.AbstractDataDim.expDim

ExpDim corresponding to 
DataDim
  @param  Nmr_SampledDataDim self
  @returns   the result
**/
Nmr_ExpDim Nmr_SampledDataDim_GetExpDim(Nmr_SampledDataDim self)
{
  
  Nmr_ExpDim obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExpDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: cannot find method 'getExpDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: method 'getExpDim' is not callable");
  
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
  @param  Nmr_SampledDataDim self
  @returns   the result
**/
ApiList Nmr_SampledDataDim_GetFieldNames(Nmr_SampledDataDim self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.AbstractDataDim.fileDim

Corresponding dimension in 
the dataSource (an integer, starting at zero).
  @param  Nmr_SampledDataDim self
  @returns   the result
**/
ApiInteger Nmr_SampledDataDim_GetFileDim(Nmr_SampledDataDim self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFileDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: cannot find method 'getFileDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: method 'getFileDim' is not callable");
  
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
  @param  Nmr_SampledDataDim self
  @returns   the result
**/
ApiBoolean Nmr_SampledDataDim_GetInConstructor(Nmr_SampledDataDim self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: method 'getInConstructor' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.AbstractDataDim.isComplex

Defines whether the 
underlying data are complex, i.e. whether both real and imaginary values 
are stored.
  @param  Nmr_SampledDataDim self
  @returns   the result
**/
ApiBoolean Nmr_SampledDataDim_GetIsComplex(Nmr_SampledDataDim self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsComplex");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: cannot find method 'getIsComplex'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: method 'getIsComplex' is not callable");
  
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
  @param  Nmr_SampledDataDim self
  @returns   the result
**/
ApiBoolean Nmr_SampledDataDim_GetIsDeleted(Nmr_SampledDataDim self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.AbstractDataDim.numPoints

Number of points. When 
isComplex is True, numPoints is the number of complex points (i.e. the 
number of time values for an FID), not the number of real numbers 
stored, so that 1024 complex points take up the same pace as 2048 real 
points. numPoints measures the size of the stored file, whether or not 
all storage slots contain meaningful data. For a SampledDataDim 
numPoints must be equal to the length of the pointValues array. For 
sparse sampling this described the grid sampled on, not the number of 
actual points.
  @param  Nmr_SampledDataDim self
  @returns   the result
**/
ApiInteger Nmr_SampledDataDim_GetNumPoints(Nmr_SampledDataDim self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNumPoints");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: cannot find method 'getNumPoints'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: method 'getNumPoints' is not callable");
  
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
  @param  Nmr_SampledDataDim self
  @returns   the result
**/
ApiString Nmr_SampledDataDim_GetPackageName(Nmr_SampledDataDim self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: method 'getPackageName' is not callable");
  
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
  @param  Nmr_SampledDataDim self
  @returns   the result
**/
ApiString Nmr_SampledDataDim_GetPackageShortName(Nmr_SampledDataDim self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.AbstractDataDim.parent

link to parent object - 
synonym for dataSource
  @param  Nmr_SampledDataDim self
  @returns   the result
**/
Nmr_DataSource Nmr_SampledDataDim_GetParent(Nmr_SampledDataDim self)
{
  
  Nmr_DataSource obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.SampledDataDim.pointErrors

List of the abscissa 
errors (std deviation) of the points in the dimension The order is 
significant and preserved. If set, the length must be the same as the 
length of the pointValues.
  @param  Nmr_SampledDataDim self
  @returns   the result
**/
ApiList Nmr_SampledDataDim_GetPointErrors(Nmr_SampledDataDim self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPointErrors");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: cannot find method 'getPointErrors'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: method 'getPointErrors' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.SampledDataDim.pointValues

List of the abscissa 
values of the points in the dimension The order is significant and 
preserved.
  @param  Nmr_SampledDataDim self
  @returns   the result
**/
ApiList Nmr_SampledDataDim_GetPointValues(Nmr_SampledDataDim self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPointValues");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: cannot find method 'getPointValues'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: method 'getPointValues' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.AbstractDataDim.predictMethod

Linear prediction 
method.
  @param  Nmr_SampledDataDim self
  @returns   the result
**/
Meth_Method Nmr_SampledDataDim_GetPredictMethod(Nmr_SampledDataDim self)
{
  
  Meth_Method obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPredictMethod");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: cannot find method 'getPredictMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: method 'getPredictMethod' is not callable");
  
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
  @param  Nmr_SampledDataDim self
  @returns   the result
**/
ApiString Nmr_SampledDataDim_GetQualifiedName(Nmr_SampledDataDim self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: method 'getQualifiedName' is not callable");
  
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
  @param  Nmr_SampledDataDim self
  @returns   the result
**/
Impl_MemopsRoot Nmr_SampledDataDim_GetRoot(Nmr_SampledDataDim self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.AbstractDataDim.shapeSerial

Serial number of 
corresponding DataSourceShape, if any. Note that several 
AbstractDataDims may correspond to the same DataSourceShape.
  @param  Nmr_SampledDataDim self
  @returns   the result
**/
ApiInteger Nmr_SampledDataDim_GetShapeSerial(Nmr_SampledDataDim self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getShapeSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: cannot find method 'getShapeSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: method 'getShapeSerial' is not callable");
  
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
  @param  Nmr_SampledDataDim self
  @returns   the result
**/
Impl_TopObject Nmr_SampledDataDim_GetTopObject(Nmr_SampledDataDim self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.AbstractDataDim.unit

unit for values on dimension 
axis. Typically seconds for a normal FID. For a frequency dimension unit 
is Herz, *not* ppm. Note that values in ppm (and equivalent) require 
referencing, and that referencing belongs to the DataDimRef, not to the 
DataDim.
  @param  Nmr_SampledDataDim self
  @returns   the result
**/
ApiString Nmr_SampledDataDim_GetUnit(Nmr_SampledDataDim self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getUnit");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: cannot find method 'getUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: method 'getUnit' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.nmr.Nmr.SampledDataDim
  @param  Nmr_DataSource parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_SampledDataDim Nmr_SampledDataDim_Init(Nmr_DataSource parent, ApiMap attrlinks)
{
  
  return Nmr_DataSource_NewSampledDataDim(parent, attrlinks);
}

/**
  Constructor for ccp.nmr.Nmr.SampledDataDim
  @param  Nmr_DataSource parent
  @param  ApiInteger dim
  @param  Nmr_ExpDim expDim
  @param  int isComplex
  @param  ApiInteger numPoints
  @returns  the new object
**/
Nmr_SampledDataDim Nmr_SampledDataDim_Init_reqd(Nmr_DataSource parent, ApiInteger dim, Nmr_ExpDim expDim, int isComplex, ApiInteger numPoints)
{
  
  Nmr_SampledDataDim  obj;
  PyObject *attrlinks = PyDict_New();
  ApiBoolean api__isComplex = ApiBoolean_New(isComplex);

  PyDict_SetItemString(attrlinks, "dim", dim);
  PyDict_SetItemString(attrlinks, "expDim", expDim);
  PyDict_SetItemString(attrlinks, "isComplex", api__isComplex);
  PyDict_SetItemString(attrlinks, "numPoints", numPoints);
  
  obj = Nmr_SampledDataDim_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__isComplex);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SampledDataDim self
  @param  Impl_ApplicationData value
**/
void *Nmr_SampledDataDim_RemoveApplicationData(Nmr_SampledDataDim self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.Nmr.SampledDataDim.pointErrors

List of the abscissa 
errors (std deviation) of the points in the dimension The order is 
significant and preserved. If set, the length must be the same as the 
length of the pointValues.
  @param  Nmr_SampledDataDim self
  @param  ApiFloat value
**/
void *Nmr_SampledDataDim_RemovePointError(Nmr_SampledDataDim self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removePointError");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: cannot find method 'removePointError'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: method 'removePointError' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.Nmr.SampledDataDim.pointValues

List of the abscissa 
values of the points in the dimension The order is significant and 
preserved.
  @param  Nmr_SampledDataDim self
  @param  ApiFloat value
**/
void *Nmr_SampledDataDim_RemovePointValue(Nmr_SampledDataDim self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removePointValue");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: cannot find method 'removePointValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: method 'removePointValue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.nmr.Nmr.SampledDataDim
  @param  Nmr_SampledDataDim self
  @param  ApiString name
  @param  ApiObject value
**/
void *Nmr_SampledDataDim_Set(Nmr_SampledDataDim self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_SampledDataDim self
  @param  Acco_AccessObject value
**/
void *Nmr_SampledDataDim_SetAccess(Nmr_SampledDataDim self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: method 'setAccess' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.AbstractDataDim.analysisDataDim

AnalysisDataDim 
associated with DataDim
  @param  Nmr_SampledDataDim self
  @param  Anal_AnalysisDataDim value
**/
void *Nmr_SampledDataDim_SetAnalysisDataDim(Nmr_SampledDataDim self, Anal_AnalysisDataDim value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAnalysisDataDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: cannot find method 'setAnalysisDataDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: method 'setAnalysisDataDim' is not callable");
  
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
  @param  Nmr_SampledDataDim self
  @param  ApiList values
**/
void *Nmr_SampledDataDim_SetApplicationData(Nmr_SampledDataDim self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.SampledDataDim.conditionVaried

Description of the 
parameter being varied (e.g. temperature, pH, relaxation delay, ...)
  @param  Nmr_SampledDataDim self
  @param  ApiString value
**/
void *Nmr_SampledDataDim_SetConditionVaried(Nmr_SampledDataDim self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setConditionVaried");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: cannot find method 'setConditionVaried'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: method 'setConditionVaried' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.SampledDataDim.details

Free text, for notes, 
explanatory comments, etc.
  @param  Nmr_SampledDataDim self
  @param  ApiString value
**/
void *Nmr_SampledDataDim_SetDetails(Nmr_SampledDataDim self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.AbstractDataDim.dim

Dimension number. Dimensions go 
from 1 to numDim. For projections that means the numDim of the 
dataSource, not of the experiment. dim for an AbstractDataDim can be set 
independently of the dim for the corresponding ExpDim, although it is 
recommended that the acquisition dimension (if present) be given dim 1. 
The dim values correspond to the storage order in the corresponding 
file, 1 being the fastest varying dim.
  @param  Nmr_SampledDataDim self
  @param  ApiInteger value
**/
void *Nmr_SampledDataDim_SetDim(Nmr_SampledDataDim self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: cannot find method 'setDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: method 'setDim' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.AbstractDataDim.expDim

ExpDim corresponding to 
DataDim
  @param  Nmr_SampledDataDim self
  @param  Nmr_ExpDim value
**/
void *Nmr_SampledDataDim_SetExpDim(Nmr_SampledDataDim self, Nmr_ExpDim value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setExpDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: cannot find method 'setExpDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: method 'setExpDim' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.AbstractDataDim.fileDim

Corresponding dimension in 
the dataSource (an integer, starting at zero).
  @param  Nmr_SampledDataDim self
  @param  ApiInteger value
**/
void *Nmr_SampledDataDim_SetFileDim(Nmr_SampledDataDim self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setFileDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: cannot find method 'setFileDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: method 'setFileDim' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.AbstractDataDim.isComplex

Defines whether the 
underlying data are complex, i.e. whether both real and imaginary values 
are stored.
  @param  Nmr_SampledDataDim self
  @param  ApiBoolean value
**/
void *Nmr_SampledDataDim_SetIsComplex(Nmr_SampledDataDim self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsComplex");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: cannot find method 'setIsComplex'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: method 'setIsComplex' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.AbstractDataDim.numPoints

Number of points. When 
isComplex is True, numPoints is the number of complex points (i.e. the 
number of time values for an FID), not the number of real numbers 
stored, so that 1024 complex points take up the same pace as 2048 real 
points. numPoints measures the size of the stored file, whether or not 
all storage slots contain meaningful data. For a SampledDataDim 
numPoints must be equal to the length of the pointValues array. For 
sparse sampling this described the grid sampled on, not the number of 
actual points.
  @param  Nmr_SampledDataDim self
  @param  ApiInteger value
**/
void *Nmr_SampledDataDim_SetNumPoints(Nmr_SampledDataDim self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNumPoints");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: cannot find method 'setNumPoints'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: method 'setNumPoints' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.SampledDataDim.pointErrors

List of the abscissa 
errors (std deviation) of the points in the dimension The order is 
significant and preserved. If set, the length must be the same as the 
length of the pointValues.
  @param  Nmr_SampledDataDim self
  @param  ApiList values
**/
void *Nmr_SampledDataDim_SetPointErrors(Nmr_SampledDataDim self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPointErrors");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: cannot find method 'setPointErrors'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: method 'setPointErrors' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.SampledDataDim.pointValues

List of the abscissa 
values of the points in the dimension The order is significant and 
preserved.
  @param  Nmr_SampledDataDim self
  @param  ApiList values
**/
void *Nmr_SampledDataDim_SetPointValues(Nmr_SampledDataDim self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPointValues");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: cannot find method 'setPointValues'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: method 'setPointValues' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.AbstractDataDim.predictMethod

Linear prediction 
method.
  @param  Nmr_SampledDataDim self
  @param  Meth_Method value
**/
void *Nmr_SampledDataDim_SetPredictMethod(Nmr_SampledDataDim self, Meth_Method value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPredictMethod");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: cannot find method 'setPredictMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: method 'setPredictMethod' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.AbstractDataDim.shapeSerial

Serial number of 
corresponding DataSourceShape, if any. Note that several 
AbstractDataDims may correspond to the same DataSourceShape.
  @param  Nmr_SampledDataDim self
  @param  ApiInteger value
**/
void *Nmr_SampledDataDim_SetShapeSerial(Nmr_SampledDataDim self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setShapeSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: cannot find method 'setShapeSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: method 'setShapeSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.AbstractDataDim.unit

unit for values on dimension 
axis. Typically seconds for a normal FID. For a frequency dimension unit 
is Herz, *not* ppm. Note that values in ppm (and equivalent) require 
referencing, and that referencing belongs to the DataDimRef, not to the 
DataDim.
  @param  Nmr_SampledDataDim self
  @param  ApiString value
**/
void *Nmr_SampledDataDim_SetUnit(Nmr_SampledDataDim self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setUnit");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: cannot find method 'setUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: method 'setUnit' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.AbstractDataDim.dimensionScalings

child link to 
class DimensionScaling
  @param  Nmr_SampledDataDim self
  @returns   the result
**/
ApiList Nmr_SampledDataDim_SortedDimensionScalings(Nmr_SampledDataDim self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedDimensionScalings");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: cannot find method 'sortedDimensionScalings'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.SampledDataDim: method 'sortedDimensionScalings' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
