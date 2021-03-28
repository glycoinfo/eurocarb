
#include "ccp.h"

/*
  Information about the individual dimensions in the data source. Each DataDim object corresponds to a single ExpDim object. Note that abstractDataDim.dim need not be equal to the corresponding expDim.dim.
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractDataDim self
  @param  Impl_ApplicationData value
**/
void *Nmr_AbstractDataDim_AddApplicationData(Nmr_AbstractDataDim self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
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
  @param  Nmr_AbstractDataDim self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_AbstractDataDim_FindAllApplicationData(Nmr_AbstractDataDim self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: method 'findAllApplicationData' is not callable");
  
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
  @param  Nmr_AbstractDataDim self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_AbstractDataDim_FindAllApplicationData_keyval0(Nmr_AbstractDataDim self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_AbstractDataDim_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractDataDim self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_AbstractDataDim_FindAllApplicationData_keyval1(Nmr_AbstractDataDim self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_AbstractDataDim_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractDataDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_AbstractDataDim_FindAllApplicationData_keyval2(Nmr_AbstractDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_AbstractDataDim_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractDataDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_AbstractDataDim_FindAllApplicationData_keyval3(Nmr_AbstractDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_AbstractDataDim_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractDataDim self
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
ApiList Nmr_AbstractDataDim_FindAllApplicationData_keyval4(Nmr_AbstractDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_AbstractDataDim_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDim.dimensionScalings

child link to 
class DimensionScaling
  @param  Nmr_AbstractDataDim self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_AbstractDataDim_FindAllDimensionScalings(Nmr_AbstractDataDim self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllDimensionScalings");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: cannot find method 'findAllDimensionScalings'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: method 'findAllDimensionScalings' is not callable");
  
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
  @param  Nmr_AbstractDataDim self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_AbstractDataDim_FindAllDimensionScalings_keyval0(Nmr_AbstractDataDim self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_AbstractDataDim_FindAllDimensionScalings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDim.dimensionScalings

child link to 
class DimensionScaling
  @param  Nmr_AbstractDataDim self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_AbstractDataDim_FindAllDimensionScalings_keyval1(Nmr_AbstractDataDim self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_AbstractDataDim_FindAllDimensionScalings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDim.dimensionScalings

child link to 
class DimensionScaling
  @param  Nmr_AbstractDataDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_AbstractDataDim_FindAllDimensionScalings_keyval2(Nmr_AbstractDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_AbstractDataDim_FindAllDimensionScalings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDim.dimensionScalings

child link to 
class DimensionScaling
  @param  Nmr_AbstractDataDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_AbstractDataDim_FindAllDimensionScalings_keyval3(Nmr_AbstractDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_AbstractDataDim_FindAllDimensionScalings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AbstractDataDim.dimensionScalings

child link to 
class DimensionScaling
  @param  Nmr_AbstractDataDim self
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
ApiSet Nmr_AbstractDataDim_FindAllDimensionScalings_keyval4(Nmr_AbstractDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_AbstractDataDim_FindAllDimensionScalings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractDataDim self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_AbstractDataDim_FindFirstApplicationData(Nmr_AbstractDataDim self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nmr_AbstractDataDim self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_AbstractDataDim_FindFirstApplicationData_keyval0(Nmr_AbstractDataDim self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_AbstractDataDim_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractDataDim self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_AbstractDataDim_FindFirstApplicationData_keyval1(Nmr_AbstractDataDim self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_AbstractDataDim_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractDataDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_AbstractDataDim_FindFirstApplicationData_keyval2(Nmr_AbstractDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_AbstractDataDim_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractDataDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_AbstractDataDim_FindFirstApplicationData_keyval3(Nmr_AbstractDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_AbstractDataDim_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractDataDim self
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
Impl_ApplicationData Nmr_AbstractDataDim_FindFirstApplicationData_keyval4(Nmr_AbstractDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_AbstractDataDim_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDim.dimensionScalings

child link 
to class DimensionScaling
  @param  Nmr_AbstractDataDim self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_DimensionScaling Nmr_AbstractDataDim_FindFirstDimensionScaling(Nmr_AbstractDataDim self, ApiMap conditions)
{
  
  Nmr_DimensionScaling obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstDimensionScaling");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: cannot find method 'findFirstDimensionScaling'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: method 'findFirstDimensionScaling' is not callable");
  
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
  @param  Nmr_AbstractDataDim self
  @returns  the first value that satisfies the conditions 
**/
Nmr_DimensionScaling Nmr_AbstractDataDim_FindFirstDimensionScaling_keyval0(Nmr_AbstractDataDim self)
{
  
  Nmr_DimensionScaling  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_AbstractDataDim_FindFirstDimensionScaling(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDim.dimensionScalings

child link 
to class DimensionScaling
  @param  Nmr_AbstractDataDim self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_DimensionScaling Nmr_AbstractDataDim_FindFirstDimensionScaling_keyval1(Nmr_AbstractDataDim self, char * key, ApiObject value)
{
  
  Nmr_DimensionScaling  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_AbstractDataDim_FindFirstDimensionScaling(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDim.dimensionScalings

child link 
to class DimensionScaling
  @param  Nmr_AbstractDataDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_DimensionScaling Nmr_AbstractDataDim_FindFirstDimensionScaling_keyval2(Nmr_AbstractDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_DimensionScaling  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_AbstractDataDim_FindFirstDimensionScaling(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDim.dimensionScalings

child link 
to class DimensionScaling
  @param  Nmr_AbstractDataDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_DimensionScaling Nmr_AbstractDataDim_FindFirstDimensionScaling_keyval3(Nmr_AbstractDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_DimensionScaling  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_AbstractDataDim_FindFirstDimensionScaling(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AbstractDataDim.dimensionScalings

child link 
to class DimensionScaling
  @param  Nmr_AbstractDataDim self
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
Nmr_DimensionScaling Nmr_AbstractDataDim_FindFirstDimensionScaling_keyval4(Nmr_AbstractDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_DimensionScaling  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_AbstractDataDim_FindFirstDimensionScaling(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_AbstractDataDim self
  @returns   the result
**/
Acco_AccessObject Nmr_AbstractDataDim_GetAccess(Nmr_AbstractDataDim self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: method 'getAccess' is not callable");
  
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
  @param  Nmr_AbstractDataDim self
  @returns   the result
**/
Acco_AccessObject Nmr_AbstractDataDim_GetActiveAccess(Nmr_AbstractDataDim self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: method 'getActiveAccess' is not callable");
  
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
  @param  Nmr_AbstractDataDim self
  @returns   the result
**/
Anal_AnalysisDataDim Nmr_AbstractDataDim_GetAnalysisDataDim(Nmr_AbstractDataDim self)
{
  
  Anal_AnalysisDataDim obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAnalysisDataDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: cannot find method 'getAnalysisDataDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: method 'getAnalysisDataDim' is not callable");
  
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
  @param  Nmr_AbstractDataDim self
  @returns   the result
**/
ApiList Nmr_AbstractDataDim_GetApplicationData(Nmr_AbstractDataDim self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.Nmr.AbstractDataDim
  @param  Nmr_AbstractDataDim self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nmr_AbstractDataDim Nmr_AbstractDataDim_GetByKey(Nmr_AbstractDataDim self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Nmr_AbstractDataDim obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: method 'getByKey' is not callable");
  
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
  @param  Nmr_AbstractDataDim self
  @returns   the result
**/
ApiString Nmr_AbstractDataDim_GetClassName(Nmr_AbstractDataDim self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.AbstractDataDim.dataSource

parent link
  @param  Nmr_AbstractDataDim self
  @returns   the result
**/
Nmr_DataSource Nmr_AbstractDataDim_GetDataSource(Nmr_AbstractDataDim self)
{
  
  Nmr_DataSource obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDataSource");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: cannot find method 'getDataSource'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: method 'getDataSource' is not callable");
  
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
  @param  Nmr_AbstractDataDim self
  @returns   the result
**/
ApiInteger Nmr_AbstractDataDim_GetDim(Nmr_AbstractDataDim self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: cannot find method 'getDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: method 'getDim' is not callable");
  
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
  @param  Nmr_AbstractDataDim self
  @returns   the result
**/
ApiSet Nmr_AbstractDataDim_GetDimensionScalings(Nmr_AbstractDataDim self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDimensionScalings");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: cannot find method 'getDimensionScalings'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: method 'getDimensionScalings' is not callable");
  
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
  @param  Nmr_AbstractDataDim self
  @returns   the result
**/
Nmr_ExpDim Nmr_AbstractDataDim_GetExpDim(Nmr_AbstractDataDim self)
{
  
  Nmr_ExpDim obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExpDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: cannot find method 'getExpDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: method 'getExpDim' is not callable");
  
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
  @param  Nmr_AbstractDataDim self
  @returns   the result
**/
ApiList Nmr_AbstractDataDim_GetFieldNames(Nmr_AbstractDataDim self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: method 'getFieldNames' is not callable");
  
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
  @param  Nmr_AbstractDataDim self
  @returns   the result
**/
ApiInteger Nmr_AbstractDataDim_GetFileDim(Nmr_AbstractDataDim self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFileDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: cannot find method 'getFileDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: method 'getFileDim' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.nmr.Nmr.AbstractDataDim
  @param  Nmr_AbstractDataDim self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Nmr_AbstractDataDim_GetFullKey(Nmr_AbstractDataDim self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: method 'getFullKey' is not callable");
  
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
  @param  Nmr_AbstractDataDim self
  @returns   the result
**/
ApiBoolean Nmr_AbstractDataDim_GetInConstructor(Nmr_AbstractDataDim self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: method 'getInConstructor' is not callable");
  
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
  @param  Nmr_AbstractDataDim self
  @returns   the result
**/
ApiBoolean Nmr_AbstractDataDim_GetIsComplex(Nmr_AbstractDataDim self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsComplex");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: cannot find method 'getIsComplex'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: method 'getIsComplex' is not callable");
  
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
  @param  Nmr_AbstractDataDim self
  @returns   the result
**/
ApiBoolean Nmr_AbstractDataDim_GetIsDeleted(Nmr_AbstractDataDim self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.nmr.Nmr.AbstractDataDim
  @param  Nmr_AbstractDataDim self
  @returns  Local object key
**/
ApiObject Nmr_AbstractDataDim_GetLocalKey(Nmr_AbstractDataDim self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: method 'getLocalKey' is not callable");
  
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
  @param  Nmr_AbstractDataDim self
  @returns   the result
**/
ApiInteger Nmr_AbstractDataDim_GetNumPoints(Nmr_AbstractDataDim self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNumPoints");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: cannot find method 'getNumPoints'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: method 'getNumPoints' is not callable");
  
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
  @param  Nmr_AbstractDataDim self
  @returns   the result
**/
ApiString Nmr_AbstractDataDim_GetPackageName(Nmr_AbstractDataDim self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: method 'getPackageName' is not callable");
  
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
  @param  Nmr_AbstractDataDim self
  @returns   the result
**/
ApiString Nmr_AbstractDataDim_GetPackageShortName(Nmr_AbstractDataDim self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: method 'getPackageShortName' is not callable");
  
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
  @param  Nmr_AbstractDataDim self
  @returns   the result
**/
Nmr_DataSource Nmr_AbstractDataDim_GetParent(Nmr_AbstractDataDim self)
{
  
  Nmr_DataSource obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: method 'getParent' is not callable");
  
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
  @param  Nmr_AbstractDataDim self
  @returns   the result
**/
Meth_Method Nmr_AbstractDataDim_GetPredictMethod(Nmr_AbstractDataDim self)
{
  
  Meth_Method obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPredictMethod");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: cannot find method 'getPredictMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: method 'getPredictMethod' is not callable");
  
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
  @param  Nmr_AbstractDataDim self
  @returns   the result
**/
ApiString Nmr_AbstractDataDim_GetQualifiedName(Nmr_AbstractDataDim self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: method 'getQualifiedName' is not callable");
  
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
  @param  Nmr_AbstractDataDim self
  @returns   the result
**/
Impl_MemopsRoot Nmr_AbstractDataDim_GetRoot(Nmr_AbstractDataDim self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: method 'getRoot' is not callable");
  
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
  @param  Nmr_AbstractDataDim self
  @returns   the result
**/
ApiInteger Nmr_AbstractDataDim_GetShapeSerial(Nmr_AbstractDataDim self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getShapeSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: cannot find method 'getShapeSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: method 'getShapeSerial' is not callable");
  
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
  @param  Nmr_AbstractDataDim self
  @returns   the result
**/
Impl_TopObject Nmr_AbstractDataDim_GetTopObject(Nmr_AbstractDataDim self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: method 'getTopObject' is not callable");
  
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
  @param  Nmr_AbstractDataDim self
  @returns   the result
**/
ApiString Nmr_AbstractDataDim_GetUnit(Nmr_AbstractDataDim self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getUnit");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: cannot find method 'getUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: method 'getUnit' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.DimensionScaling
  @param  Nmr_AbstractDataDim self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_DimensionScaling Nmr_AbstractDataDim_NewDimensionScaling(Nmr_AbstractDataDim self, ApiMap attrlinks)
{
  
  Nmr_DimensionScaling obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newDimensionScaling");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: cannot find method 'newDimensionScaling'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: method 'newDimensionScaling' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.DimensionScaling
  @param  Nmr_AbstractDataDim self
  @param  Nmr_ExpDimRef expDimRef
  @returns  the new object
**/
Nmr_DimensionScaling Nmr_AbstractDataDim_NewDimensionScaling_reqd(Nmr_AbstractDataDim self, Nmr_ExpDimRef expDimRef)
{
  
  Nmr_DimensionScaling  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "expDimRef", expDimRef);
  
  obj = Nmr_AbstractDataDim_NewDimensionScaling(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractDataDim self
  @param  Impl_ApplicationData value
**/
void *Nmr_AbstractDataDim_RemoveApplicationData(Nmr_AbstractDataDim self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_AbstractDataDim self
  @param  Acco_AccessObject value
**/
void *Nmr_AbstractDataDim_SetAccess(Nmr_AbstractDataDim self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: method 'setAccess' is not callable");
  
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
  @param  Nmr_AbstractDataDim self
  @param  Anal_AnalysisDataDim value
**/
void *Nmr_AbstractDataDim_SetAnalysisDataDim(Nmr_AbstractDataDim self, Anal_AnalysisDataDim value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAnalysisDataDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: cannot find method 'setAnalysisDataDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: method 'setAnalysisDataDim' is not callable");
  
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
  @param  Nmr_AbstractDataDim self
  @param  ApiList values
**/
void *Nmr_AbstractDataDim_SetApplicationData(Nmr_AbstractDataDim self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: method 'setApplicationData' is not callable");
  
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
The dim values correspond to the storage order in the corresponding 
file, 1 being the fastest varying dim.
  @param  Nmr_AbstractDataDim self
  @param  ApiInteger value
**/
void *Nmr_AbstractDataDim_SetDim(Nmr_AbstractDataDim self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: cannot find method 'setDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: method 'setDim' is not callable");
  
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
  @param  Nmr_AbstractDataDim self
  @param  Nmr_ExpDim value
**/
void *Nmr_AbstractDataDim_SetExpDim(Nmr_AbstractDataDim self, Nmr_ExpDim value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setExpDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: cannot find method 'setExpDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: method 'setExpDim' is not callable");
  
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
  @param  Nmr_AbstractDataDim self
  @param  ApiInteger value
**/
void *Nmr_AbstractDataDim_SetFileDim(Nmr_AbstractDataDim self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setFileDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: cannot find method 'setFileDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: method 'setFileDim' is not callable");
  
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
  @param  Nmr_AbstractDataDim self
  @param  ApiBoolean value
**/
void *Nmr_AbstractDataDim_SetIsComplex(Nmr_AbstractDataDim self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsComplex");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: cannot find method 'setIsComplex'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: method 'setIsComplex' is not callable");
  
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
  @param  Nmr_AbstractDataDim self
  @param  ApiInteger value
**/
void *Nmr_AbstractDataDim_SetNumPoints(Nmr_AbstractDataDim self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNumPoints");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: cannot find method 'setNumPoints'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: method 'setNumPoints' is not callable");
  
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
  @param  Nmr_AbstractDataDim self
  @param  Meth_Method value
**/
void *Nmr_AbstractDataDim_SetPredictMethod(Nmr_AbstractDataDim self, Meth_Method value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPredictMethod");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: cannot find method 'setPredictMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: method 'setPredictMethod' is not callable");
  
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
  @param  Nmr_AbstractDataDim self
  @param  ApiInteger value
**/
void *Nmr_AbstractDataDim_SetShapeSerial(Nmr_AbstractDataDim self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setShapeSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: cannot find method 'setShapeSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: method 'setShapeSerial' is not callable");
  
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
  @param  Nmr_AbstractDataDim self
  @param  ApiString value
**/
void *Nmr_AbstractDataDim_SetUnit(Nmr_AbstractDataDim self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setUnit");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: cannot find method 'setUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: method 'setUnit' is not callable");
  
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
  @param  Nmr_AbstractDataDim self
  @returns   the result
**/
ApiList Nmr_AbstractDataDim_SortedDimensionScalings(Nmr_AbstractDataDim self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedDimensionScalings");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: cannot find method 'sortedDimensionScalings'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractDataDim: method 'sortedDimensionScalings' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
