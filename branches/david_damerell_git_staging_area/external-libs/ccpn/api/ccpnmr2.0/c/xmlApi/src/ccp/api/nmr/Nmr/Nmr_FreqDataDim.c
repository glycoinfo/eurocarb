
#include "ccp.h"

/*
  A frequency domain dimension in the data source file, i.e. a regularly sampled dimension that is in the Fourier transform domain relative to the original data.
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_FreqDataDim self
  @param  Impl_ApplicationData value
**/
void *Nmr_FreqDataDim_AddApplicationData(Nmr_FreqDataDim self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.nmr.Nmr.FreqDataDim
  @param  Nmr_FreqDataDim self
  @param  ApiBoolean complete
**/
void *Nmr_FreqDataDim_CheckAllValid(Nmr_FreqDataDim self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.nmr.Nmr.FreqDataDim
  @param  Nmr_FreqDataDim self
  @param  ApiBoolean complete
**/
void *Nmr_FreqDataDim_CheckValid(Nmr_FreqDataDim self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: method 'checkValid' is not callable");
  
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
  @param  Nmr_FreqDataDim self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_FreqDataDim_FindAllApplicationData(Nmr_FreqDataDim self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: method 'findAllApplicationData' is not callable");
  
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
  @param  Nmr_FreqDataDim self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_FreqDataDim_FindAllApplicationData_keyval0(Nmr_FreqDataDim self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_FreqDataDim_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_FreqDataDim self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_FreqDataDim_FindAllApplicationData_keyval1(Nmr_FreqDataDim self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_FreqDataDim_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_FreqDataDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_FreqDataDim_FindAllApplicationData_keyval2(Nmr_FreqDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_FreqDataDim_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_FreqDataDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_FreqDataDim_FindAllApplicationData_keyval3(Nmr_FreqDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_FreqDataDim_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_FreqDataDim self
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
ApiList Nmr_FreqDataDim_FindAllApplicationData_keyval4(Nmr_FreqDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_FreqDataDim_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.FreqDataDim.dataDimRefs

child link to class 
DataDimRef
  @param  Nmr_FreqDataDim self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_FreqDataDim_FindAllDataDimRefs(Nmr_FreqDataDim self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllDataDimRefs");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: cannot find method 'findAllDataDimRefs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: method 'findAllDataDimRefs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.FreqDataDim.dataDimRefs

child link to class 
DataDimRef
  @param  Nmr_FreqDataDim self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_FreqDataDim_FindAllDataDimRefs_keyval0(Nmr_FreqDataDim self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_FreqDataDim_FindAllDataDimRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.FreqDataDim.dataDimRefs

child link to class 
DataDimRef
  @param  Nmr_FreqDataDim self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_FreqDataDim_FindAllDataDimRefs_keyval1(Nmr_FreqDataDim self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_FreqDataDim_FindAllDataDimRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.FreqDataDim.dataDimRefs

child link to class 
DataDimRef
  @param  Nmr_FreqDataDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_FreqDataDim_FindAllDataDimRefs_keyval2(Nmr_FreqDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_FreqDataDim_FindAllDataDimRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.FreqDataDim.dataDimRefs

child link to class 
DataDimRef
  @param  Nmr_FreqDataDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_FreqDataDim_FindAllDataDimRefs_keyval3(Nmr_FreqDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_FreqDataDim_FindAllDataDimRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.FreqDataDim.dataDimRefs

child link to class 
DataDimRef
  @param  Nmr_FreqDataDim self
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
ApiSet Nmr_FreqDataDim_FindAllDataDimRefs_keyval4(Nmr_FreqDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_FreqDataDim_FindAllDataDimRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDim.dimensionScalings

child link to 
class DimensionScaling
  @param  Nmr_FreqDataDim self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_FreqDataDim_FindAllDimensionScalings(Nmr_FreqDataDim self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllDimensionScalings");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: cannot find method 'findAllDimensionScalings'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: method 'findAllDimensionScalings' is not callable");
  
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
  @param  Nmr_FreqDataDim self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_FreqDataDim_FindAllDimensionScalings_keyval0(Nmr_FreqDataDim self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_FreqDataDim_FindAllDimensionScalings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDim.dimensionScalings

child link to 
class DimensionScaling
  @param  Nmr_FreqDataDim self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_FreqDataDim_FindAllDimensionScalings_keyval1(Nmr_FreqDataDim self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_FreqDataDim_FindAllDimensionScalings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDim.dimensionScalings

child link to 
class DimensionScaling
  @param  Nmr_FreqDataDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_FreqDataDim_FindAllDimensionScalings_keyval2(Nmr_FreqDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_FreqDataDim_FindAllDimensionScalings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDim.dimensionScalings

child link to 
class DimensionScaling
  @param  Nmr_FreqDataDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_FreqDataDim_FindAllDimensionScalings_keyval3(Nmr_FreqDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_FreqDataDim_FindAllDimensionScalings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDim.dimensionScalings

child link to 
class DimensionScaling
  @param  Nmr_FreqDataDim self
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
ApiSet Nmr_FreqDataDim_FindAllDimensionScalings_keyval4(Nmr_FreqDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_FreqDataDim_FindAllDimensionScalings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_FreqDataDim self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_FreqDataDim_FindFirstApplicationData(Nmr_FreqDataDim self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nmr_FreqDataDim self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_FreqDataDim_FindFirstApplicationData_keyval0(Nmr_FreqDataDim self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_FreqDataDim_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_FreqDataDim self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_FreqDataDim_FindFirstApplicationData_keyval1(Nmr_FreqDataDim self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_FreqDataDim_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_FreqDataDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_FreqDataDim_FindFirstApplicationData_keyval2(Nmr_FreqDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_FreqDataDim_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_FreqDataDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_FreqDataDim_FindFirstApplicationData_keyval3(Nmr_FreqDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_FreqDataDim_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_FreqDataDim self
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
Impl_ApplicationData Nmr_FreqDataDim_FindFirstApplicationData_keyval4(Nmr_FreqDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_FreqDataDim_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.FreqDataDim.dataDimRefs

child link to class 
DataDimRef
  @param  Nmr_FreqDataDim self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_DataDimRef Nmr_FreqDataDim_FindFirstDataDimRef(Nmr_FreqDataDim self, ApiMap conditions)
{
  
  Nmr_DataDimRef obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstDataDimRef");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: cannot find method 'findFirstDataDimRef'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: method 'findFirstDataDimRef' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.FreqDataDim.dataDimRefs

child link to class 
DataDimRef
  @param  Nmr_FreqDataDim self
  @returns  the first value that satisfies the conditions 
**/
Nmr_DataDimRef Nmr_FreqDataDim_FindFirstDataDimRef_keyval0(Nmr_FreqDataDim self)
{
  
  Nmr_DataDimRef  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_FreqDataDim_FindFirstDataDimRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.FreqDataDim.dataDimRefs

child link to class 
DataDimRef
  @param  Nmr_FreqDataDim self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_DataDimRef Nmr_FreqDataDim_FindFirstDataDimRef_keyval1(Nmr_FreqDataDim self, char * key, ApiObject value)
{
  
  Nmr_DataDimRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_FreqDataDim_FindFirstDataDimRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.FreqDataDim.dataDimRefs

child link to class 
DataDimRef
  @param  Nmr_FreqDataDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_DataDimRef Nmr_FreqDataDim_FindFirstDataDimRef_keyval2(Nmr_FreqDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_DataDimRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_FreqDataDim_FindFirstDataDimRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.FreqDataDim.dataDimRefs

child link to class 
DataDimRef
  @param  Nmr_FreqDataDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_DataDimRef Nmr_FreqDataDim_FindFirstDataDimRef_keyval3(Nmr_FreqDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_DataDimRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_FreqDataDim_FindFirstDataDimRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.FreqDataDim.dataDimRefs

child link to class 
DataDimRef
  @param  Nmr_FreqDataDim self
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
Nmr_DataDimRef Nmr_FreqDataDim_FindFirstDataDimRef_keyval4(Nmr_FreqDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_DataDimRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_FreqDataDim_FindFirstDataDimRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDim.dimensionScalings

child link 
to class DimensionScaling
  @param  Nmr_FreqDataDim self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_DimensionScaling Nmr_FreqDataDim_FindFirstDimensionScaling(Nmr_FreqDataDim self, ApiMap conditions)
{
  
  Nmr_DimensionScaling obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstDimensionScaling");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: cannot find method 'findFirstDimensionScaling'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: method 'findFirstDimensionScaling' is not callable");
  
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
  @param  Nmr_FreqDataDim self
  @returns  the first value that satisfies the conditions 
**/
Nmr_DimensionScaling Nmr_FreqDataDim_FindFirstDimensionScaling_keyval0(Nmr_FreqDataDim self)
{
  
  Nmr_DimensionScaling  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_FreqDataDim_FindFirstDimensionScaling(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDim.dimensionScalings

child link 
to class DimensionScaling
  @param  Nmr_FreqDataDim self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_DimensionScaling Nmr_FreqDataDim_FindFirstDimensionScaling_keyval1(Nmr_FreqDataDim self, char * key, ApiObject value)
{
  
  Nmr_DimensionScaling  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_FreqDataDim_FindFirstDimensionScaling(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDim.dimensionScalings

child link 
to class DimensionScaling
  @param  Nmr_FreqDataDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_DimensionScaling Nmr_FreqDataDim_FindFirstDimensionScaling_keyval2(Nmr_FreqDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_DimensionScaling  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_FreqDataDim_FindFirstDimensionScaling(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDim.dimensionScalings

child link 
to class DimensionScaling
  @param  Nmr_FreqDataDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_DimensionScaling Nmr_FreqDataDim_FindFirstDimensionScaling_keyval3(Nmr_FreqDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_DimensionScaling  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_FreqDataDim_FindFirstDimensionScaling(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDim.dimensionScalings

child link 
to class DimensionScaling
  @param  Nmr_FreqDataDim self
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
Nmr_DimensionScaling Nmr_FreqDataDim_FindFirstDimensionScaling_keyval4(Nmr_FreqDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_DimensionScaling  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_FreqDataDim_FindFirstDimensionScaling(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.nmr.Nmr.FreqDataDim
  @param  Nmr_FreqDataDim self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Nmr_FreqDataDim_Get(Nmr_FreqDataDim self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_FreqDataDim self
  @returns   the result
**/
Acco_AccessObject Nmr_FreqDataDim_GetAccess(Nmr_FreqDataDim self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: method 'getAccess' is not callable");
  
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
  @param  Nmr_FreqDataDim self
  @returns   the result
**/
Anal_AnalysisDataDim Nmr_FreqDataDim_GetAnalysisDataDim(Nmr_FreqDataDim self)
{
  
  Anal_AnalysisDataDim obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAnalysisDataDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: cannot find method 'getAnalysisDataDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: method 'getAnalysisDataDim' is not callable");
  
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
  @param  Nmr_FreqDataDim self
  @returns   the result
**/
ApiList Nmr_FreqDataDim_GetApplicationData(Nmr_FreqDataDim self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.Nmr.FreqDataDim
  @param  Nmr_FreqDataDim self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nmr_FreqDataDim Nmr_FreqDataDim_GetByKey(Nmr_FreqDataDim self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Nmr_FreqDataDim obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: method 'getByKey' is not callable");
  
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
  @param  Nmr_FreqDataDim self
  @returns   the result
**/
ApiString Nmr_FreqDataDim_GetClassName(Nmr_FreqDataDim self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.FreqDataDim.dataDimRefs

child link to class 
DataDimRef
  @param  Nmr_FreqDataDim self
  @returns   the result
**/
ApiSet Nmr_FreqDataDim_GetDataDimRefs(Nmr_FreqDataDim self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDataDimRefs");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: cannot find method 'getDataDimRefs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: method 'getDataDimRefs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.AbstractDataDim.dataSource

parent link
  @param  Nmr_FreqDataDim self
  @returns   the result
**/
Nmr_DataSource Nmr_FreqDataDim_GetDataSource(Nmr_FreqDataDim self)
{
  
  Nmr_DataSource obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDataSource");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: cannot find method 'getDataSource'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: method 'getDataSource' is not callable");
  
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
  @param  Nmr_FreqDataDim self
  @returns   the result
**/
ApiInteger Nmr_FreqDataDim_GetDim(Nmr_FreqDataDim self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: cannot find method 'getDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: method 'getDim' is not callable");
  
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
  @param  Nmr_FreqDataDim self
  @returns   the result
**/
ApiSet Nmr_FreqDataDim_GetDimensionScalings(Nmr_FreqDataDim self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDimensionScalings");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: cannot find method 'getDimensionScalings'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: method 'getDimensionScalings' is not callable");
  
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
  @param  Nmr_FreqDataDim self
  @returns   the result
**/
Nmr_ExpDim Nmr_FreqDataDim_GetExpDim(Nmr_FreqDataDim self)
{
  
  Nmr_ExpDim obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExpDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: cannot find method 'getExpDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: method 'getExpDim' is not callable");
  
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
  @param  Nmr_FreqDataDim self
  @returns   the result
**/
ApiList Nmr_FreqDataDim_GetFieldNames(Nmr_FreqDataDim self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: method 'getFieldNames' is not callable");
  
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
  @param  Nmr_FreqDataDim self
  @returns   the result
**/
ApiInteger Nmr_FreqDataDim_GetFileDim(Nmr_FreqDataDim self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFileDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: cannot find method 'getFileDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: method 'getFileDim' is not callable");
  
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
  @param  Nmr_FreqDataDim self
  @returns   the result
**/
ApiBoolean Nmr_FreqDataDim_GetInConstructor(Nmr_FreqDataDim self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: method 'getInConstructor' is not callable");
  
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
  @param  Nmr_FreqDataDim self
  @returns   the result
**/
ApiBoolean Nmr_FreqDataDim_GetIsComplex(Nmr_FreqDataDim self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsComplex");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: cannot find method 'getIsComplex'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: method 'getIsComplex' is not callable");
  
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
  @param  Nmr_FreqDataDim self
  @returns   the result
**/
ApiBoolean Nmr_FreqDataDim_GetIsDeleted(Nmr_FreqDataDim self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: method 'getIsDeleted' is not callable");
  
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
  @param  Nmr_FreqDataDim self
  @returns   the result
**/
ApiInteger Nmr_FreqDataDim_GetNumPoints(Nmr_FreqDataDim self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNumPoints");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: cannot find method 'getNumPoints'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: method 'getNumPoints' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.FreqDataDim.numPointsOrig

Original number of 
points, i.e. number of points before points were removed. The 
spectalWidthOrig is by definition numPointsOrig * valuePerPoint. Serves 
to account for cases where points were removed after Fourier 
transformation.
  @param  Nmr_FreqDataDim self
  @returns   the result
**/
ApiInteger Nmr_FreqDataDim_GetNumPointsOrig(Nmr_FreqDataDim self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNumPointsOrig");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: cannot find method 'getNumPointsOrig'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: method 'getNumPointsOrig' is not callable");
  
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
  @param  Nmr_FreqDataDim self
  @returns   the result
**/
ApiString Nmr_FreqDataDim_GetPackageName(Nmr_FreqDataDim self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: method 'getPackageName' is not callable");
  
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
  @param  Nmr_FreqDataDim self
  @returns   the result
**/
ApiString Nmr_FreqDataDim_GetPackageShortName(Nmr_FreqDataDim self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: method 'getPackageShortName' is not callable");
  
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
  @param  Nmr_FreqDataDim self
  @returns   the result
**/
Nmr_DataSource Nmr_FreqDataDim_GetParent(Nmr_FreqDataDim self)
{
  
  Nmr_DataSource obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.FreqDataDim.phase0

Zero order phase correction (in 
degrees) applied after Fourier transformation.
  @param  Nmr_FreqDataDim self
  @returns   the result
**/
ApiFloat Nmr_FreqDataDim_GetPhase0(Nmr_FreqDataDim self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPhase0");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: cannot find method 'getPhase0'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: method 'getPhase0' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.FreqDataDim.phase1

First order phase correction (in 
degrees) applied after Fourier transformation. By definition the point 
fo no effect of the first order phase correction is point number one 
(before removal of points, if any).
  @param  Nmr_FreqDataDim self
  @returns   the result
**/
ApiFloat Nmr_FreqDataDim_GetPhase1(Nmr_FreqDataDim self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPhase1");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: cannot find method 'getPhase1'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: method 'getPhase1' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.FreqDataDim.pointOffset

Offset of first point, in 
point numbers relative to original number of points. To account for 
cases where points have been removed after Fourier transformation. The 
current point number 1 corresponds to the original point number 
1+pointOffset.
  @param  Nmr_FreqDataDim self
  @returns   the result
**/
ApiInteger Nmr_FreqDataDim_GetPointOffset(Nmr_FreqDataDim self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPointOffset");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: cannot find method 'getPointOffset'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: method 'getPointOffset' is not callable");
  
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
  @param  Nmr_FreqDataDim self
  @returns   the result
**/
Meth_Method Nmr_FreqDataDim_GetPredictMethod(Nmr_FreqDataDim self)
{
  
  Meth_Method obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPredictMethod");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: cannot find method 'getPredictMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: method 'getPredictMethod' is not callable");
  
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
  @param  Nmr_FreqDataDim self
  @returns   the result
**/
ApiString Nmr_FreqDataDim_GetQualifiedName(Nmr_FreqDataDim self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: method 'getQualifiedName' is not callable");
  
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
  @param  Nmr_FreqDataDim self
  @returns   the result
**/
Impl_MemopsRoot Nmr_FreqDataDim_GetRoot(Nmr_FreqDataDim self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: method 'getRoot' is not callable");
  
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
  @param  Nmr_FreqDataDim self
  @returns   the result
**/
ApiInteger Nmr_FreqDataDim_GetShapeSerial(Nmr_FreqDataDim self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getShapeSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: cannot find method 'getShapeSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: method 'getShapeSerial' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  get function for derived attribute spectralWidth
  @param  Nmr_FreqDataDim self
  @returns   the result
**/
ApiFloat Nmr_FreqDataDim_GetSpectralWidth(Nmr_FreqDataDim self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSpectralWidth");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: cannot find method 'getSpectralWidth'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: method 'getSpectralWidth' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  get function for derived attribute spectralWidthOrig
  @param  Nmr_FreqDataDim self
  @returns   the result
**/
ApiFloat Nmr_FreqDataDim_GetSpectralWidthOrig(Nmr_FreqDataDim self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSpectralWidthOrig");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: cannot find method 'getSpectralWidthOrig'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: method 'getSpectralWidthOrig' is not callable");
  
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
  @param  Nmr_FreqDataDim self
  @returns   the result
**/
Impl_TopObject Nmr_FreqDataDim_GetTopObject(Nmr_FreqDataDim self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: method 'getTopObject' is not callable");
  
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
  @param  Nmr_FreqDataDim self
  @returns   the result
**/
ApiString Nmr_FreqDataDim_GetUnit(Nmr_FreqDataDim self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getUnit");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: cannot find method 'getUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: method 'getUnit' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.FreqDataDim.valuePerPoint

Conversion between point 
number and frequency - in the normal case conversion between point 
number and Herz. Does *not* include any corrections for scaling etc.
  @param  Nmr_FreqDataDim self
  @returns   the result
**/
ApiFloat Nmr_FreqDataDim_GetValuePerPoint(Nmr_FreqDataDim self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getValuePerPoint");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: cannot find method 'getValuePerPoint'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: method 'getValuePerPoint' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.nmr.Nmr.FreqDataDim
  @param  Nmr_DataSource parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_FreqDataDim Nmr_FreqDataDim_Init(Nmr_DataSource parent, ApiMap attrlinks)
{
  
  return Nmr_DataSource_NewFreqDataDim(parent, attrlinks);
}

/**
  Constructor for ccp.nmr.Nmr.FreqDataDim
  @param  Nmr_DataSource parent
  @param  ApiInteger dim
  @param  Nmr_ExpDim expDim
  @param  int isComplex
  @param  ApiInteger numPoints
  @param  ApiInteger numPointsOrig
  @param  float valuePerPoint
  @returns  the new object
**/
Nmr_FreqDataDim Nmr_FreqDataDim_Init_reqd(Nmr_DataSource parent, ApiInteger dim, Nmr_ExpDim expDim, int isComplex, ApiInteger numPoints, ApiInteger numPointsOrig, float valuePerPoint)
{
  
  Nmr_FreqDataDim  obj;
  PyObject *attrlinks = PyDict_New();
  ApiBoolean api__isComplex = ApiBoolean_New(isComplex);
  ApiFloat api__valuePerPoint = ApiFloat_New(valuePerPoint);

  PyDict_SetItemString(attrlinks, "dim", dim);
  PyDict_SetItemString(attrlinks, "expDim", expDim);
  PyDict_SetItemString(attrlinks, "isComplex", api__isComplex);
  PyDict_SetItemString(attrlinks, "numPoints", numPoints);
  PyDict_SetItemString(attrlinks, "numPointsOrig", numPointsOrig);
  PyDict_SetItemString(attrlinks, "valuePerPoint", api__valuePerPoint);
  
  obj = Nmr_FreqDataDim_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__isComplex);
  Py_DECREF(api__valuePerPoint);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.DataDimRef
  @param  Nmr_FreqDataDim self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_DataDimRef Nmr_FreqDataDim_NewDataDimRef(Nmr_FreqDataDim self, ApiMap attrlinks)
{
  
  Nmr_DataDimRef obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newDataDimRef");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: cannot find method 'newDataDimRef'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: method 'newDataDimRef' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.DataDimRef
  @param  Nmr_FreqDataDim self
  @param  Nmr_ExpDimRef expDimRef
  @returns  the new object
**/
Nmr_DataDimRef Nmr_FreqDataDim_NewDataDimRef_reqd(Nmr_FreqDataDim self, Nmr_ExpDimRef expDimRef)
{
  
  Nmr_DataDimRef  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "expDimRef", expDimRef);
  
  obj = Nmr_FreqDataDim_NewDataDimRef(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_FreqDataDim self
  @param  Impl_ApplicationData value
**/
void *Nmr_FreqDataDim_RemoveApplicationData(Nmr_FreqDataDim self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.nmr.Nmr.FreqDataDim
  @param  Nmr_FreqDataDim self
  @param  ApiString name
  @param  ApiObject value
**/
void *Nmr_FreqDataDim_Set(Nmr_FreqDataDim self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_FreqDataDim self
  @param  Acco_AccessObject value
**/
void *Nmr_FreqDataDim_SetAccess(Nmr_FreqDataDim self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: method 'setAccess' is not callable");
  
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
  @param  Nmr_FreqDataDim self
  @param  Anal_AnalysisDataDim value
**/
void *Nmr_FreqDataDim_SetAnalysisDataDim(Nmr_FreqDataDim self, Anal_AnalysisDataDim value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAnalysisDataDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: cannot find method 'setAnalysisDataDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: method 'setAnalysisDataDim' is not callable");
  
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
  @param  Nmr_FreqDataDim self
  @param  ApiList values
**/
void *Nmr_FreqDataDim_SetApplicationData(Nmr_FreqDataDim self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
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
  @param  Nmr_FreqDataDim self
  @param  ApiInteger value
**/
void *Nmr_FreqDataDim_SetDim(Nmr_FreqDataDim self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: cannot find method 'setDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: method 'setDim' is not callable");
  
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
  @param  Nmr_FreqDataDim self
  @param  Nmr_ExpDim value
**/
void *Nmr_FreqDataDim_SetExpDim(Nmr_FreqDataDim self, Nmr_ExpDim value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setExpDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: cannot find method 'setExpDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: method 'setExpDim' is not callable");
  
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
  @param  Nmr_FreqDataDim self
  @param  ApiInteger value
**/
void *Nmr_FreqDataDim_SetFileDim(Nmr_FreqDataDim self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setFileDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: cannot find method 'setFileDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: method 'setFileDim' is not callable");
  
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
  @param  Nmr_FreqDataDim self
  @param  ApiBoolean value
**/
void *Nmr_FreqDataDim_SetIsComplex(Nmr_FreqDataDim self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsComplex");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: cannot find method 'setIsComplex'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: method 'setIsComplex' is not callable");
  
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
  @param  Nmr_FreqDataDim self
  @param  ApiInteger value
**/
void *Nmr_FreqDataDim_SetNumPoints(Nmr_FreqDataDim self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNumPoints");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: cannot find method 'setNumPoints'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: method 'setNumPoints' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.FreqDataDim.numPointsOrig

Original number of 
points, i.e. number of points before points were removed. The 
spectalWidthOrig is by definition numPointsOrig * valuePerPoint. Serves 
to account for cases where points were removed after Fourier 
transformation.
  @param  Nmr_FreqDataDim self
  @param  ApiInteger value
**/
void *Nmr_FreqDataDim_SetNumPointsOrig(Nmr_FreqDataDim self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNumPointsOrig");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: cannot find method 'setNumPointsOrig'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: method 'setNumPointsOrig' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.FreqDataDim.phase0

Zero order phase correction (in 
degrees) applied after Fourier transformation.
  @param  Nmr_FreqDataDim self
  @param  ApiFloat value
**/
void *Nmr_FreqDataDim_SetPhase0(Nmr_FreqDataDim self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPhase0");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: cannot find method 'setPhase0'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: method 'setPhase0' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.FreqDataDim.phase1

First order phase correction (in 
degrees) applied after Fourier transformation. By definition the point 
fo no effect of the first order phase correction is point number one 
(before removal of points, if any).
  @param  Nmr_FreqDataDim self
  @param  ApiFloat value
**/
void *Nmr_FreqDataDim_SetPhase1(Nmr_FreqDataDim self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPhase1");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: cannot find method 'setPhase1'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: method 'setPhase1' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.FreqDataDim.pointOffset

Offset of first point, in 
point numbers relative to original number of points. To account for 
cases where points have been removed after Fourier transformation. The 
current point number 1 corresponds to the original point number 
1+pointOffset.
  @param  Nmr_FreqDataDim self
  @param  ApiInteger value
**/
void *Nmr_FreqDataDim_SetPointOffset(Nmr_FreqDataDim self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPointOffset");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: cannot find method 'setPointOffset'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: method 'setPointOffset' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.AbstractDataDim.predictMethod

Linear prediction 
method.
  @param  Nmr_FreqDataDim self
  @param  Meth_Method value
**/
void *Nmr_FreqDataDim_SetPredictMethod(Nmr_FreqDataDim self, Meth_Method value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPredictMethod");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: cannot find method 'setPredictMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: method 'setPredictMethod' is not callable");
  
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
  @param  Nmr_FreqDataDim self
  @param  ApiInteger value
**/
void *Nmr_FreqDataDim_SetShapeSerial(Nmr_FreqDataDim self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setShapeSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: cannot find method 'setShapeSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: method 'setShapeSerial' is not callable");
  
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
  @param  Nmr_FreqDataDim self
  @param  ApiString value
**/
void *Nmr_FreqDataDim_SetUnit(Nmr_FreqDataDim self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setUnit");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: cannot find method 'setUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: method 'setUnit' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.FreqDataDim.valuePerPoint

Conversion between point 
number and frequency - in the normal case conversion between point 
number and Herz. Does *not* include any corrections for scaling etc.
  @param  Nmr_FreqDataDim self
  @param  ApiFloat value
**/
void *Nmr_FreqDataDim_SetValuePerPoint(Nmr_FreqDataDim self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setValuePerPoint");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: cannot find method 'setValuePerPoint'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: method 'setValuePerPoint' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.FreqDataDim.dataDimRefs

child link to class 
DataDimRef
  @param  Nmr_FreqDataDim self
  @returns   the result
**/
ApiList Nmr_FreqDataDim_SortedDataDimRefs(Nmr_FreqDataDim self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedDataDimRefs");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: cannot find method 'sortedDataDimRefs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: method 'sortedDataDimRefs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.AbstractDataDim.dimensionScalings

child link to 
class DimensionScaling
  @param  Nmr_FreqDataDim self
  @returns   the result
**/
ApiList Nmr_FreqDataDim_SortedDimensionScalings(Nmr_FreqDataDim self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedDimensionScalings");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: cannot find method 'sortedDimensionScalings'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FreqDataDim: method 'sortedDimensionScalings' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
