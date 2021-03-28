
#include "ccp.h"

/*
  An FID dimension or any other dimension with a regular grid of values. A FidDataDim can contain any kind of regularly sampled data subjected to any kind of processing, except that data in the Fourier transformed domain relative to the originally acquired data must be put in a FreqDataDim.
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_FidDataDim self
  @param  Impl_ApplicationData value
**/
void *Nmr_FidDataDim_AddApplicationData(Nmr_FidDataDim self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.nmr.Nmr.FidDataDim
  @param  Nmr_FidDataDim self
  @param  ApiBoolean complete
**/
void *Nmr_FidDataDim_CheckAllValid(Nmr_FidDataDim self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.nmr.Nmr.FidDataDim
  @param  Nmr_FidDataDim self
  @param  ApiBoolean complete
**/
void *Nmr_FidDataDim_CheckValid(Nmr_FidDataDim self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: method 'checkValid' is not callable");
  
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
  @param  Nmr_FidDataDim self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_FidDataDim_FindAllApplicationData(Nmr_FidDataDim self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: method 'findAllApplicationData' is not callable");
  
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
  @param  Nmr_FidDataDim self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_FidDataDim_FindAllApplicationData_keyval0(Nmr_FidDataDim self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_FidDataDim_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_FidDataDim self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_FidDataDim_FindAllApplicationData_keyval1(Nmr_FidDataDim self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_FidDataDim_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_FidDataDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_FidDataDim_FindAllApplicationData_keyval2(Nmr_FidDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_FidDataDim_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_FidDataDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_FidDataDim_FindAllApplicationData_keyval3(Nmr_FidDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_FidDataDim_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_FidDataDim self
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
ApiList Nmr_FidDataDim_FindAllApplicationData_keyval4(Nmr_FidDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_FidDataDim_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDim.dimensionScalings

child link to 
class DimensionScaling
  @param  Nmr_FidDataDim self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_FidDataDim_FindAllDimensionScalings(Nmr_FidDataDim self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllDimensionScalings");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: cannot find method 'findAllDimensionScalings'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: method 'findAllDimensionScalings' is not callable");
  
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
  @param  Nmr_FidDataDim self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_FidDataDim_FindAllDimensionScalings_keyval0(Nmr_FidDataDim self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_FidDataDim_FindAllDimensionScalings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDim.dimensionScalings

child link to 
class DimensionScaling
  @param  Nmr_FidDataDim self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_FidDataDim_FindAllDimensionScalings_keyval1(Nmr_FidDataDim self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_FidDataDim_FindAllDimensionScalings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDim.dimensionScalings

child link to 
class DimensionScaling
  @param  Nmr_FidDataDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_FidDataDim_FindAllDimensionScalings_keyval2(Nmr_FidDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_FidDataDim_FindAllDimensionScalings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDim.dimensionScalings

child link to 
class DimensionScaling
  @param  Nmr_FidDataDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_FidDataDim_FindAllDimensionScalings_keyval3(Nmr_FidDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_FidDataDim_FindAllDimensionScalings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDim.dimensionScalings

child link to 
class DimensionScaling
  @param  Nmr_FidDataDim self
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
ApiSet Nmr_FidDataDim_FindAllDimensionScalings_keyval4(Nmr_FidDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_FidDataDim_FindAllDimensionScalings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_FidDataDim self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_FidDataDim_FindFirstApplicationData(Nmr_FidDataDim self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nmr_FidDataDim self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_FidDataDim_FindFirstApplicationData_keyval0(Nmr_FidDataDim self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_FidDataDim_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_FidDataDim self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_FidDataDim_FindFirstApplicationData_keyval1(Nmr_FidDataDim self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_FidDataDim_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_FidDataDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_FidDataDim_FindFirstApplicationData_keyval2(Nmr_FidDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_FidDataDim_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_FidDataDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_FidDataDim_FindFirstApplicationData_keyval3(Nmr_FidDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_FidDataDim_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_FidDataDim self
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
Impl_ApplicationData Nmr_FidDataDim_FindFirstApplicationData_keyval4(Nmr_FidDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_FidDataDim_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDim.dimensionScalings

child link 
to class DimensionScaling
  @param  Nmr_FidDataDim self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_DimensionScaling Nmr_FidDataDim_FindFirstDimensionScaling(Nmr_FidDataDim self, ApiMap conditions)
{
  
  Nmr_DimensionScaling obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstDimensionScaling");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: cannot find method 'findFirstDimensionScaling'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: method 'findFirstDimensionScaling' is not callable");
  
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
  @param  Nmr_FidDataDim self
  @returns  the first value that satisfies the conditions 
**/
Nmr_DimensionScaling Nmr_FidDataDim_FindFirstDimensionScaling_keyval0(Nmr_FidDataDim self)
{
  
  Nmr_DimensionScaling  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_FidDataDim_FindFirstDimensionScaling(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDim.dimensionScalings

child link 
to class DimensionScaling
  @param  Nmr_FidDataDim self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_DimensionScaling Nmr_FidDataDim_FindFirstDimensionScaling_keyval1(Nmr_FidDataDim self, char * key, ApiObject value)
{
  
  Nmr_DimensionScaling  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_FidDataDim_FindFirstDimensionScaling(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDim.dimensionScalings

child link 
to class DimensionScaling
  @param  Nmr_FidDataDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_DimensionScaling Nmr_FidDataDim_FindFirstDimensionScaling_keyval2(Nmr_FidDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_DimensionScaling  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_FidDataDim_FindFirstDimensionScaling(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDim.dimensionScalings

child link 
to class DimensionScaling
  @param  Nmr_FidDataDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_DimensionScaling Nmr_FidDataDim_FindFirstDimensionScaling_keyval3(Nmr_FidDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_DimensionScaling  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_FidDataDim_FindFirstDimensionScaling(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDim.dimensionScalings

child link 
to class DimensionScaling
  @param  Nmr_FidDataDim self
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
Nmr_DimensionScaling Nmr_FidDataDim_FindFirstDimensionScaling_keyval4(Nmr_FidDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_DimensionScaling  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_FidDataDim_FindFirstDimensionScaling(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.nmr.Nmr.FidDataDim
  @param  Nmr_FidDataDim self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Nmr_FidDataDim_Get(Nmr_FidDataDim self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_FidDataDim self
  @returns   the result
**/
Acco_AccessObject Nmr_FidDataDim_GetAccess(Nmr_FidDataDim self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: method 'getAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.FidDataDim.alternateSign

Default is 'False'. If 
true means that every second (real or complex) point should have its 
sign changed before further processing, as for classical TPPI or 
States-TPPI.
  @param  Nmr_FidDataDim self
  @returns   the result
**/
ApiBoolean Nmr_FidDataDim_GetAlternateSign(Nmr_FidDataDim self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAlternateSign");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: cannot find method 'getAlternateSign'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: method 'getAlternateSign' is not callable");
  
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
  @param  Nmr_FidDataDim self
  @returns   the result
**/
Anal_AnalysisDataDim Nmr_FidDataDim_GetAnalysisDataDim(Nmr_FidDataDim self)
{
  
  Anal_AnalysisDataDim obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAnalysisDataDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: cannot find method 'getAnalysisDataDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: method 'getAnalysisDataDim' is not callable");
  
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
  @param  Nmr_FidDataDim self
  @returns   the result
**/
ApiList Nmr_FidDataDim_GetApplicationData(Nmr_FidDataDim self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.Nmr.FidDataDim
  @param  Nmr_FidDataDim self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nmr_FidDataDim Nmr_FidDataDim_GetByKey(Nmr_FidDataDim self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Nmr_FidDataDim obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: method 'getByKey' is not callable");
  
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
  @param  Nmr_FidDataDim self
  @returns   the result
**/
ApiString Nmr_FidDataDim_GetClassName(Nmr_FidDataDim self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.AbstractDataDim.dataSource

parent link
  @param  Nmr_FidDataDim self
  @returns   the result
**/
Nmr_DataSource Nmr_FidDataDim_GetDataSource(Nmr_FidDataDim self)
{
  
  Nmr_DataSource obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDataSource");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: cannot find method 'getDataSource'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: method 'getDataSource' is not callable");
  
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
  @param  Nmr_FidDataDim self
  @returns   the result
**/
ApiInteger Nmr_FidDataDim_GetDim(Nmr_FidDataDim self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: cannot find method 'getDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: method 'getDim' is not callable");
  
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
  @param  Nmr_FidDataDim self
  @returns   the result
**/
ApiSet Nmr_FidDataDim_GetDimensionScalings(Nmr_FidDataDim self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDimensionScalings");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: cannot find method 'getDimensionScalings'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: method 'getDimensionScalings' is not callable");
  
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
  @param  Nmr_FidDataDim self
  @returns   the result
**/
Nmr_ExpDim Nmr_FidDataDim_GetExpDim(Nmr_FidDataDim self)
{
  
  Nmr_ExpDim obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExpDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: cannot find method 'getExpDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: method 'getExpDim' is not callable");
  
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
  @param  Nmr_FidDataDim self
  @returns   the result
**/
ApiList Nmr_FidDataDim_GetFieldNames(Nmr_FidDataDim self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: method 'getFieldNames' is not callable");
  
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
  @param  Nmr_FidDataDim self
  @returns   the result
**/
ApiInteger Nmr_FidDataDim_GetFileDim(Nmr_FidDataDim self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFileDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: cannot find method 'getFileDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: method 'getFileDim' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.FidDataDim.firstValue

Value of first point.
  @param  Nmr_FidDataDim self
  @returns   the result
**/
ApiFloat Nmr_FidDataDim_GetFirstValue(Nmr_FidDataDim self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFirstValue");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: cannot find method 'getFirstValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: method 'getFirstValue' is not callable");
  
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
  @param  Nmr_FidDataDim self
  @returns   the result
**/
ApiBoolean Nmr_FidDataDim_GetInConstructor(Nmr_FidDataDim self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: method 'getInConstructor' is not callable");
  
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
  @param  Nmr_FidDataDim self
  @returns   the result
**/
ApiBoolean Nmr_FidDataDim_GetIsComplex(Nmr_FidDataDim self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsComplex");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: cannot find method 'getIsComplex'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: method 'getIsComplex' is not callable");
  
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
  @param  Nmr_FidDataDim self
  @returns   the result
**/
ApiBoolean Nmr_FidDataDim_GetIsDeleted(Nmr_FidDataDim self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  get function for derived attribute maxValue
  @param  Nmr_FidDataDim self
  @returns   the result
**/
ApiFloat Nmr_FidDataDim_GetMaxValue(Nmr_FidDataDim self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMaxValue");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: cannot find method 'getMaxValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: method 'getMaxValue' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.FidDataDim.negateImaginary

Default is 'False'. If 
true the imaginary part of complex numbers should be negated before 
further processing.
  @param  Nmr_FidDataDim self
  @returns   the result
**/
ApiBoolean Nmr_FidDataDim_GetNegateImaginary(Nmr_FidDataDim self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNegateImaginary");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: cannot find method 'getNegateImaginary'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: method 'getNegateImaginary' is not callable");
  
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
  @param  Nmr_FidDataDim self
  @returns   the result
**/
ApiInteger Nmr_FidDataDim_GetNumPoints(Nmr_FidDataDim self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNumPoints");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: cannot find method 'getNumPoints'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: method 'getNumPoints' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.FidDataDim.numPointsValid

Number of points 
containing valid data. Assumed to start at point one. Must be smaller or 
equal than numPoints. To account for experiments stopped early or that 
otherwise have not filled all storage slots with valid data. The valid 
data points will be those from pointOffset+1 to 
pointOffset+numPointsValid (inclusive).
  @param  Nmr_FidDataDim self
  @returns   the result
**/
ApiInteger Nmr_FidDataDim_GetNumPointsValid(Nmr_FidDataDim self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNumPointsValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: cannot find method 'getNumPointsValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: method 'getNumPointsValid' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.FidDataDim.oversamplingInfo

Text field describing 
oversampling of data, if any.
  @param  Nmr_FidDataDim self
  @returns   the result
**/
ApiString Nmr_FidDataDim_GetOversamplingInfo(Nmr_FidDataDim self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getOversamplingInfo");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: cannot find method 'getOversamplingInfo'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: method 'getOversamplingInfo' is not callable");
  
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
  @param  Nmr_FidDataDim self
  @returns   the result
**/
ApiString Nmr_FidDataDim_GetPackageName(Nmr_FidDataDim self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: method 'getPackageName' is not callable");
  
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
  @param  Nmr_FidDataDim self
  @returns   the result
**/
ApiString Nmr_FidDataDim_GetPackageShortName(Nmr_FidDataDim self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: method 'getPackageShortName' is not callable");
  
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
  @param  Nmr_FidDataDim self
  @returns   the result
**/
Nmr_DataSource Nmr_FidDataDim_GetParent(Nmr_FidDataDim self)
{
  
  Nmr_DataSource obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.FidDataDim.phase0

(Approximate) zero order phase 
correction in degrees to be applied after Fourier transformation
  @param  Nmr_FidDataDim self
  @returns   the result
**/
ApiFloat Nmr_FidDataDim_GetPhase0(Nmr_FidDataDim self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPhase0");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: cannot find method 'getPhase0'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: method 'getPhase0' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.FidDataDim.phase1

(Approximate) first order phase 
correction in degrees to be applied after Fourier transformation. By 
definition the point of no effect of the first order correction is point 
number one (before removal of points).
  @param  Nmr_FidDataDim self
  @returns   the result
**/
ApiFloat Nmr_FidDataDim_GetPhase1(Nmr_FidDataDim self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPhase1");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: cannot find method 'getPhase1'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: method 'getPhase1' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.FidDataDim.pointOffset

Number of points at 
beginning of FID to ignore. Default zero. The first point with valid 
data will always be point 1 + pointOffset
  @param  Nmr_FidDataDim self
  @returns   the result
**/
ApiInteger Nmr_FidDataDim_GetPointOffset(Nmr_FidDataDim self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPointOffset");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: cannot find method 'getPointOffset'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: method 'getPointOffset' is not callable");
  
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
  @param  Nmr_FidDataDim self
  @returns   the result
**/
Meth_Method Nmr_FidDataDim_GetPredictMethod(Nmr_FidDataDim self)
{
  
  Meth_Method obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPredictMethod");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: cannot find method 'getPredictMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: method 'getPredictMethod' is not callable");
  
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
  @param  Nmr_FidDataDim self
  @returns   the result
**/
ApiString Nmr_FidDataDim_GetQualifiedName(Nmr_FidDataDim self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: method 'getQualifiedName' is not callable");
  
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
  @param  Nmr_FidDataDim self
  @returns   the result
**/
Impl_MemopsRoot Nmr_FidDataDim_GetRoot(Nmr_FidDataDim self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: method 'getRoot' is not callable");
  
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
  @param  Nmr_FidDataDim self
  @returns   the result
**/
ApiInteger Nmr_FidDataDim_GetShapeSerial(Nmr_FidDataDim self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getShapeSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: cannot find method 'getShapeSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: method 'getShapeSerial' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  get function for derived attribute spectralWidth
  @param  Nmr_FidDataDim self
  @returns   the result
**/
ApiFloat Nmr_FidDataDim_GetSpectralWidth(Nmr_FidDataDim self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSpectralWidth");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: cannot find method 'getSpectralWidth'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: method 'getSpectralWidth' is not callable");
  
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
  @param  Nmr_FidDataDim self
  @returns   the result
**/
Impl_TopObject Nmr_FidDataDim_GetTopObject(Nmr_FidDataDim self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: method 'getTopObject' is not callable");
  
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
  @param  Nmr_FidDataDim self
  @returns   the result
**/
ApiString Nmr_FidDataDim_GetUnit(Nmr_FidDataDim self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getUnit");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: cannot find method 'getUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: method 'getUnit' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.FidDataDim.valuePerPoint

Value per point. 
Corresponds to the difference between successive time (e.g.) values 
whether or not the points are complex.
  @param  Nmr_FidDataDim self
  @returns   the result
**/
ApiFloat Nmr_FidDataDim_GetValuePerPoint(Nmr_FidDataDim self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getValuePerPoint");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: cannot find method 'getValuePerPoint'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: method 'getValuePerPoint' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.nmr.Nmr.FidDataDim
  @param  Nmr_DataSource parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_FidDataDim Nmr_FidDataDim_Init(Nmr_DataSource parent, ApiMap attrlinks)
{
  
  return Nmr_DataSource_NewFidDataDim(parent, attrlinks);
}

/**
  Constructor for ccp.nmr.Nmr.FidDataDim
  @param  Nmr_DataSource parent
  @param  ApiInteger dim
  @param  Nmr_ExpDim expDim
  @param  int isComplex
  @param  ApiInteger numPoints
  @param  ApiInteger numPointsValid
  @param  float valuePerPoint
  @returns  the new object
**/
Nmr_FidDataDim Nmr_FidDataDim_Init_reqd(Nmr_DataSource parent, ApiInteger dim, Nmr_ExpDim expDim, int isComplex, ApiInteger numPoints, ApiInteger numPointsValid, float valuePerPoint)
{
  
  Nmr_FidDataDim  obj;
  PyObject *attrlinks = PyDict_New();
  ApiBoolean api__isComplex = ApiBoolean_New(isComplex);
  ApiFloat api__valuePerPoint = ApiFloat_New(valuePerPoint);

  PyDict_SetItemString(attrlinks, "dim", dim);
  PyDict_SetItemString(attrlinks, "expDim", expDim);
  PyDict_SetItemString(attrlinks, "isComplex", api__isComplex);
  PyDict_SetItemString(attrlinks, "numPoints", numPoints);
  PyDict_SetItemString(attrlinks, "numPointsValid", numPointsValid);
  PyDict_SetItemString(attrlinks, "valuePerPoint", api__valuePerPoint);
  
  obj = Nmr_FidDataDim_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__isComplex);
  Py_DECREF(api__valuePerPoint);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_FidDataDim self
  @param  Impl_ApplicationData value
**/
void *Nmr_FidDataDim_RemoveApplicationData(Nmr_FidDataDim self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.nmr.Nmr.FidDataDim
  @param  Nmr_FidDataDim self
  @param  ApiString name
  @param  ApiObject value
**/
void *Nmr_FidDataDim_Set(Nmr_FidDataDim self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_FidDataDim self
  @param  Acco_AccessObject value
**/
void *Nmr_FidDataDim_SetAccess(Nmr_FidDataDim self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: method 'setAccess' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.FidDataDim.alternateSign

Default is 'False'. If 
true means that every second (real or complex) point should have its 
sign changed before further processing, as for classical TPPI or 
States-TPPI.
  @param  Nmr_FidDataDim self
  @param  ApiBoolean value
**/
void *Nmr_FidDataDim_SetAlternateSign(Nmr_FidDataDim self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAlternateSign");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: cannot find method 'setAlternateSign'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: method 'setAlternateSign' is not callable");
  
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
  @param  Nmr_FidDataDim self
  @param  Anal_AnalysisDataDim value
**/
void *Nmr_FidDataDim_SetAnalysisDataDim(Nmr_FidDataDim self, Anal_AnalysisDataDim value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAnalysisDataDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: cannot find method 'setAnalysisDataDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: method 'setAnalysisDataDim' is not callable");
  
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
  @param  Nmr_FidDataDim self
  @param  ApiList values
**/
void *Nmr_FidDataDim_SetApplicationData(Nmr_FidDataDim self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: method 'setApplicationData' is not callable");
  
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
  @param  Nmr_FidDataDim self
  @param  ApiInteger value
**/
void *Nmr_FidDataDim_SetDim(Nmr_FidDataDim self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: cannot find method 'setDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: method 'setDim' is not callable");
  
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
  @param  Nmr_FidDataDim self
  @param  Nmr_ExpDim value
**/
void *Nmr_FidDataDim_SetExpDim(Nmr_FidDataDim self, Nmr_ExpDim value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setExpDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: cannot find method 'setExpDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: method 'setExpDim' is not callable");
  
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
  @param  Nmr_FidDataDim self
  @param  ApiInteger value
**/
void *Nmr_FidDataDim_SetFileDim(Nmr_FidDataDim self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setFileDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: cannot find method 'setFileDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: method 'setFileDim' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.FidDataDim.firstValue

Value of first point.
  @param  Nmr_FidDataDim self
  @param  ApiFloat value
**/
void *Nmr_FidDataDim_SetFirstValue(Nmr_FidDataDim self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setFirstValue");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: cannot find method 'setFirstValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: method 'setFirstValue' is not callable");
  
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
  @param  Nmr_FidDataDim self
  @param  ApiBoolean value
**/
void *Nmr_FidDataDim_SetIsComplex(Nmr_FidDataDim self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsComplex");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: cannot find method 'setIsComplex'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: method 'setIsComplex' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.FidDataDim.negateImaginary

Default is 'False'. If 
true the imaginary part of complex numbers should be negated before 
further processing.
  @param  Nmr_FidDataDim self
  @param  ApiBoolean value
**/
void *Nmr_FidDataDim_SetNegateImaginary(Nmr_FidDataDim self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNegateImaginary");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: cannot find method 'setNegateImaginary'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: method 'setNegateImaginary' is not callable");
  
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
  @param  Nmr_FidDataDim self
  @param  ApiInteger value
**/
void *Nmr_FidDataDim_SetNumPoints(Nmr_FidDataDim self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNumPoints");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: cannot find method 'setNumPoints'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: method 'setNumPoints' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.FidDataDim.numPointsValid

Number of points 
containing valid data. Assumed to start at point one. Must be smaller or 
equal than numPoints. To account for experiments stopped early or that 
otherwise have not filled all storage slots with valid data. The valid 
data points will be those from pointOffset+1 to 
pointOffset+numPointsValid (inclusive).
  @param  Nmr_FidDataDim self
  @param  ApiInteger value
**/
void *Nmr_FidDataDim_SetNumPointsValid(Nmr_FidDataDim self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNumPointsValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: cannot find method 'setNumPointsValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: method 'setNumPointsValid' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.FidDataDim.oversamplingInfo

Text field describing 
oversampling of data, if any.
  @param  Nmr_FidDataDim self
  @param  ApiString value
**/
void *Nmr_FidDataDim_SetOversamplingInfo(Nmr_FidDataDim self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setOversamplingInfo");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: cannot find method 'setOversamplingInfo'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: method 'setOversamplingInfo' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.FidDataDim.phase0

(Approximate) zero order phase 
correction in degrees to be applied after Fourier transformation
  @param  Nmr_FidDataDim self
  @param  ApiFloat value
**/
void *Nmr_FidDataDim_SetPhase0(Nmr_FidDataDim self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPhase0");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: cannot find method 'setPhase0'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: method 'setPhase0' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.FidDataDim.phase1

(Approximate) first order phase 
correction in degrees to be applied after Fourier transformation. By 
definition the point of no effect of the first order correction is point 
number one (before removal of points).
  @param  Nmr_FidDataDim self
  @param  ApiFloat value
**/
void *Nmr_FidDataDim_SetPhase1(Nmr_FidDataDim self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPhase1");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: cannot find method 'setPhase1'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: method 'setPhase1' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.FidDataDim.pointOffset

Number of points at 
beginning of FID to ignore. Default zero. The first point with valid 
data will always be point 1 + pointOffset
  @param  Nmr_FidDataDim self
  @param  ApiInteger value
**/
void *Nmr_FidDataDim_SetPointOffset(Nmr_FidDataDim self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPointOffset");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: cannot find method 'setPointOffset'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: method 'setPointOffset' is not callable");
  
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
  @param  Nmr_FidDataDim self
  @param  Meth_Method value
**/
void *Nmr_FidDataDim_SetPredictMethod(Nmr_FidDataDim self, Meth_Method value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPredictMethod");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: cannot find method 'setPredictMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: method 'setPredictMethod' is not callable");
  
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
  @param  Nmr_FidDataDim self
  @param  ApiInteger value
**/
void *Nmr_FidDataDim_SetShapeSerial(Nmr_FidDataDim self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setShapeSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: cannot find method 'setShapeSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: method 'setShapeSerial' is not callable");
  
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
  @param  Nmr_FidDataDim self
  @param  ApiString value
**/
void *Nmr_FidDataDim_SetUnit(Nmr_FidDataDim self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setUnit");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: cannot find method 'setUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: method 'setUnit' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.FidDataDim.valuePerPoint

Value per point. 
Corresponds to the difference between successive time (e.g.) values 
whether or not the points are complex.
  @param  Nmr_FidDataDim self
  @param  ApiFloat value
**/
void *Nmr_FidDataDim_SetValuePerPoint(Nmr_FidDataDim self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setValuePerPoint");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: cannot find method 'setValuePerPoint'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: method 'setValuePerPoint' is not callable");
  
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
  @param  Nmr_FidDataDim self
  @returns   the result
**/
ApiList Nmr_FidDataDim_SortedDimensionScalings(Nmr_FidDataDim self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedDimensionScalings");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: cannot find method 'sortedDimensionScalings'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.FidDataDim: method 'sortedDimensionScalings' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
