
#include "ccp.h"

/*
  Analysis information for DataDim
*/

/* package ccpnmr.api.Analysis */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisDataDim self
  @param  Impl_ApplicationData value
**/
void *Anal_AnalysisDataDim_AddApplicationData(Anal_AnalysisDataDim self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccpnmr.Analysis.AnalysisDataDim
  @param  Anal_AnalysisDataDim self
  @param  ApiBoolean complete
**/
void *Anal_AnalysisDataDim_CheckAllValid(Anal_AnalysisDataDim self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccpnmr.Analysis.AnalysisDataDim
  @param  Anal_AnalysisDataDim self
  @param  ApiBoolean complete
**/
void *Anal_AnalysisDataDim_CheckValid(Anal_AnalysisDataDim self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: method 'checkValid' is not callable");
  
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
  @param  Anal_AnalysisDataDim self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_AnalysisDataDim_FindAllApplicationData(Anal_AnalysisDataDim self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: method 'findAllApplicationData' is not callable");
  
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
  @param  Anal_AnalysisDataDim self
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_AnalysisDataDim_FindAllApplicationData_keyval0(Anal_AnalysisDataDim self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AnalysisDataDim_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisDataDim self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_AnalysisDataDim_FindAllApplicationData_keyval1(Anal_AnalysisDataDim self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AnalysisDataDim_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisDataDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_AnalysisDataDim_FindAllApplicationData_keyval2(Anal_AnalysisDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AnalysisDataDim_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisDataDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_AnalysisDataDim_FindAllApplicationData_keyval3(Anal_AnalysisDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AnalysisDataDim_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisDataDim self
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
ApiList Anal_AnalysisDataDim_FindAllApplicationData_keyval4(Anal_AnalysisDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AnalysisDataDim_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisDataDim.axisMappings

Axis mappings 
currently pointing to AnalysisDataDim
  @param  Anal_AnalysisDataDim self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisDataDim_FindAllAxisMappings(Anal_AnalysisDataDim self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllAxisMappings");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: cannot find method 'findAllAxisMappings'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: method 'findAllAxisMappings' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisDataDim.axisMappings

Axis mappings 
currently pointing to AnalysisDataDim
  @param  Anal_AnalysisDataDim self
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisDataDim_FindAllAxisMappings_keyval0(Anal_AnalysisDataDim self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AnalysisDataDim_FindAllAxisMappings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisDataDim.axisMappings

Axis mappings 
currently pointing to AnalysisDataDim
  @param  Anal_AnalysisDataDim self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisDataDim_FindAllAxisMappings_keyval1(Anal_AnalysisDataDim self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AnalysisDataDim_FindAllAxisMappings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisDataDim.axisMappings

Axis mappings 
currently pointing to AnalysisDataDim
  @param  Anal_AnalysisDataDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisDataDim_FindAllAxisMappings_keyval2(Anal_AnalysisDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AnalysisDataDim_FindAllAxisMappings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisDataDim.axisMappings

Axis mappings 
currently pointing to AnalysisDataDim
  @param  Anal_AnalysisDataDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AnalysisDataDim_FindAllAxisMappings_keyval3(Anal_AnalysisDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AnalysisDataDim_FindAllAxisMappings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AnalysisDataDim.axisMappings

Axis mappings 
currently pointing to AnalysisDataDim
  @param  Anal_AnalysisDataDim self
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
ApiSet Anal_AnalysisDataDim_FindAllAxisMappings_keyval4(Anal_AnalysisDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AnalysisDataDim_FindAllAxisMappings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisDataDim self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_AnalysisDataDim_FindFirstApplicationData(Anal_AnalysisDataDim self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: method 'findFirstApplicationData' is not callable");
  
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
  @param  Anal_AnalysisDataDim self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_AnalysisDataDim_FindFirstApplicationData_keyval0(Anal_AnalysisDataDim self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AnalysisDataDim_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisDataDim self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_AnalysisDataDim_FindFirstApplicationData_keyval1(Anal_AnalysisDataDim self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AnalysisDataDim_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisDataDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_AnalysisDataDim_FindFirstApplicationData_keyval2(Anal_AnalysisDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AnalysisDataDim_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisDataDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_AnalysisDataDim_FindFirstApplicationData_keyval3(Anal_AnalysisDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AnalysisDataDim_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisDataDim self
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
Impl_ApplicationData Anal_AnalysisDataDim_FindFirstApplicationData_keyval4(Anal_AnalysisDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AnalysisDataDim_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisDataDim.axisMappings

Axis 
mappings currently pointing to AnalysisDataDim
  @param  Anal_AnalysisDataDim self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Anal_AxisMapping Anal_AnalysisDataDim_FindFirstAxisMapping(Anal_AnalysisDataDim self, ApiMap conditions)
{
  
  Anal_AxisMapping obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstAxisMapping");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: cannot find method 'findFirstAxisMapping'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: method 'findFirstAxisMapping' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisDataDim.axisMappings

Axis 
mappings currently pointing to AnalysisDataDim
  @param  Anal_AnalysisDataDim self
  @returns  the first value that satisfies the conditions 
**/
Anal_AxisMapping Anal_AnalysisDataDim_FindFirstAxisMapping_keyval0(Anal_AnalysisDataDim self)
{
  
  Anal_AxisMapping  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AnalysisDataDim_FindFirstAxisMapping(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisDataDim.axisMappings

Axis 
mappings currently pointing to AnalysisDataDim
  @param  Anal_AnalysisDataDim self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Anal_AxisMapping Anal_AnalysisDataDim_FindFirstAxisMapping_keyval1(Anal_AnalysisDataDim self, char * key, ApiObject value)
{
  
  Anal_AxisMapping  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AnalysisDataDim_FindFirstAxisMapping(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisDataDim.axisMappings

Axis 
mappings currently pointing to AnalysisDataDim
  @param  Anal_AnalysisDataDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Anal_AxisMapping Anal_AnalysisDataDim_FindFirstAxisMapping_keyval2(Anal_AnalysisDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Anal_AxisMapping  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AnalysisDataDim_FindFirstAxisMapping(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisDataDim.axisMappings

Axis 
mappings currently pointing to AnalysisDataDim
  @param  Anal_AnalysisDataDim self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Anal_AxisMapping Anal_AnalysisDataDim_FindFirstAxisMapping_keyval3(Anal_AnalysisDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Anal_AxisMapping  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AnalysisDataDim_FindFirstAxisMapping(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AnalysisDataDim.axisMappings

Axis 
mappings currently pointing to AnalysisDataDim
  @param  Anal_AnalysisDataDim self
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
Anal_AxisMapping Anal_AnalysisDataDim_FindFirstAxisMapping_keyval4(Anal_AnalysisDataDim self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Anal_AxisMapping  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AnalysisDataDim_FindFirstAxisMapping(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccpnmr.Analysis.AnalysisDataDim
  @param  Anal_AnalysisDataDim self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Anal_AnalysisDataDim_Get(Anal_AnalysisDataDim self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anal_AnalysisDataDim self
  @returns   the result
**/
Acco_AccessObject Anal_AnalysisDataDim_GetAccess(Anal_AnalysisDataDim self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: method 'getAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisDataDim.analysisSpectrum

parent link
  @param  Anal_AnalysisDataDim self
  @returns   the result
**/
Anal_AnalysisSpectrum Anal_AnalysisDataDim_GetAnalysisSpectrum(Anal_AnalysisDataDim self)
{
  
  Anal_AnalysisSpectrum obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAnalysisSpectrum");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: cannot find method 'getAnalysisSpectrum'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: method 'getAnalysisSpectrum' is not callable");
  
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
  @param  Anal_AnalysisDataDim self
  @returns   the result
**/
ApiList Anal_AnalysisDataDim_GetApplicationData(Anal_AnalysisDataDim self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisDataDim.assignTolerance

Chemical shift 
tolerance (ppm) for assignment
  @param  Anal_AnalysisDataDim self
  @returns   the result
**/
ApiFloat Anal_AnalysisDataDim_GetAssignTolerance(Anal_AnalysisDataDim self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAssignTolerance");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: cannot find method 'getAssignTolerance'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: method 'getAssignTolerance' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisDataDim.axisMappings

Axis mappings 
currently pointing to AnalysisDataDim
  @param  Anal_AnalysisDataDim self
  @returns   the result
**/
ApiSet Anal_AnalysisDataDim_GetAxisMappings(Anal_AnalysisDataDim self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAxisMappings");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: cannot find method 'getAxisMappings'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: method 'getAxisMappings' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccpnmr.Analysis.AnalysisDataDim
  @param  Anal_AnalysisDataDim self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Anal_AnalysisDataDim Anal_AnalysisDataDim_GetByKey(Anal_AnalysisDataDim self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Anal_AnalysisDataDim obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: method 'getByKey' is not callable");
  
  args = PyTuple_Pack(2, startObj, fullKey);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisDataDim.chemShiftWeight

Weight for 
dimension in chemical shift averaging.
  @param  Anal_AnalysisDataDim self
  @returns   the result
**/
ApiFloat Anal_AnalysisDataDim_GetChemShiftWeight(Anal_AnalysisDataDim self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemShiftWeight");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: cannot find method 'getChemShiftWeight'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: method 'getChemShiftWeight' is not callable");
  
  args = PyTuple_New(0);
  
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
  @param  Anal_AnalysisDataDim self
  @returns   the result
**/
ApiString Anal_AnalysisDataDim_GetClassName(Anal_AnalysisDataDim self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisDataDim.dataDim

DAtDim that 
AnalysisDataDim points to
  @param  Anal_AnalysisDataDim self
  @returns   the result
**/
Nmr_AbstractDataDim Anal_AnalysisDataDim_GetDataDim(Anal_AnalysisDataDim self)
{
  
  Nmr_AbstractDataDim obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDataDim");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: cannot find method 'getDataDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: method 'getDataDim' is not callable");
  
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
  @param  Anal_AnalysisDataDim self
  @returns   the result
**/
ApiList Anal_AnalysisDataDim_GetFieldNames(Anal_AnalysisDataDim self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccpnmr.Analysis.AnalysisDataDim
  @param  Anal_AnalysisDataDim self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Anal_AnalysisDataDim_GetFullKey(Anal_AnalysisDataDim self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: method 'getFullKey' is not callable");
  
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
  @param  Anal_AnalysisDataDim self
  @returns   the result
**/
ApiBoolean Anal_AnalysisDataDim_GetInConstructor(Anal_AnalysisDataDim self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: method 'getInConstructor' is not callable");
  
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
  @param  Anal_AnalysisDataDim self
  @returns   the result
**/
ApiBoolean Anal_AnalysisDataDim_GetIsDeleted(Anal_AnalysisDataDim self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccpnmr.Analysis.AnalysisDataDim
  @param  Anal_AnalysisDataDim self
  @returns  Local object key
**/
ApiObject Anal_AnalysisDataDim_GetLocalKey(Anal_AnalysisDataDim self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisDataDim.noeTolerance

NBNB TBD ???
  @param  Anal_AnalysisDataDim self
  @returns   the result
**/
ApiFloat Anal_AnalysisDataDim_GetNoeTolerance(Anal_AnalysisDataDim self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNoeTolerance");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: cannot find method 'getNoeTolerance'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: method 'getNoeTolerance' is not callable");
  
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
  @param  Anal_AnalysisDataDim self
  @returns   the result
**/
ApiString Anal_AnalysisDataDim_GetPackageName(Anal_AnalysisDataDim self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: method 'getPackageName' is not callable");
  
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
  @param  Anal_AnalysisDataDim self
  @returns   the result
**/
ApiString Anal_AnalysisDataDim_GetPackageShortName(Anal_AnalysisDataDim self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisDataDim.parent

link to parent object - 
synonym for analysisSpectrum
  @param  Anal_AnalysisDataDim self
  @returns   the result
**/
Anal_AnalysisSpectrum Anal_AnalysisDataDim_GetParent(Anal_AnalysisDataDim self)
{
  
  Anal_AnalysisSpectrum obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisDataDim.peakFindBoxWidth

Minimum line 
width for a found peak to be accepted (NBNB TBD unit?).
  @param  Anal_AnalysisDataDim self
  @returns   the result
**/
ApiFloat Anal_AnalysisDataDim_GetPeakFindBoxWidth(Anal_AnalysisDataDim self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPeakFindBoxWidth");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: cannot find method 'getPeakFindBoxWidth'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: method 'getPeakFindBoxWidth' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisDataDim.peakFindMinLineWidth

Minimum 
line width for a found peak to be accepted (NBNB TBD unit?).
  @param  Anal_AnalysisDataDim self
  @returns   the result
**/
ApiFloat Anal_AnalysisDataDim_GetPeakFindMinLineWidth(Anal_AnalysisDataDim self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPeakFindMinLineWidth");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: cannot find method 'getPeakFindMinLineWidth'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: method 'getPeakFindMinLineWidth' is not callable");
  
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
  @param  Anal_AnalysisDataDim self
  @returns   the result
**/
ApiString Anal_AnalysisDataDim_GetQualifiedName(Anal_AnalysisDataDim self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AnalysisDataDim.refSamplePlane

Index in this 
dimension that indicates plane used as reference plane. Intended for use 
with sampled dimensions in e.g. pseudo-3D experiments, where one plane 
is the reference plane.
  @param  Anal_AnalysisDataDim self
  @returns   the result
**/
ApiFloat Anal_AnalysisDataDim_GetRefSamplePlane(Anal_AnalysisDataDim self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRefSamplePlane");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: cannot find method 'getRefSamplePlane'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: method 'getRefSamplePlane' is not callable");
  
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
  @param  Anal_AnalysisDataDim self
  @returns   the result
**/
Impl_MemopsRoot Anal_AnalysisDataDim_GetRoot(Anal_AnalysisDataDim self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: method 'getRoot' is not callable");
  
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
  @param  Anal_AnalysisDataDim self
  @returns   the result
**/
Impl_TopObject Anal_AnalysisDataDim_GetTopObject(Anal_AnalysisDataDim self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccpnmr.Analysis.AnalysisDataDim
  @param  Anal_AnalysisSpectrum parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anal_AnalysisDataDim Anal_AnalysisDataDim_Init(Anal_AnalysisSpectrum parent, ApiMap attrlinks)
{
  
  return Anal_AnalysisSpectrum_NewAnalysisDataDim(parent, attrlinks);
}

/**
  Constructor for ccpnmr.Analysis.AnalysisDataDim
  @param  Anal_AnalysisSpectrum parent
  @param  Nmr_AbstractDataDim dataDim
  @returns  the new object
**/
Anal_AnalysisDataDim Anal_AnalysisDataDim_Init_reqd(Anal_AnalysisSpectrum parent, Nmr_AbstractDataDim dataDim)
{
  
  Anal_AnalysisDataDim  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "dataDim", dataDim);
  
  obj = Anal_AnalysisDataDim_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AnalysisDataDim self
  @param  Impl_ApplicationData value
**/
void *Anal_AnalysisDataDim_RemoveApplicationData(Anal_AnalysisDataDim self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccpnmr.Analysis.AnalysisDataDim
  @param  Anal_AnalysisDataDim self
  @param  ApiString name
  @param  ApiObject value
**/
void *Anal_AnalysisDataDim_Set(Anal_AnalysisDataDim self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anal_AnalysisDataDim self
  @param  Acco_AccessObject value
**/
void *Anal_AnalysisDataDim_SetAccess(Anal_AnalysisDataDim self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: method 'setAccess' is not callable");
  
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
  @param  Anal_AnalysisDataDim self
  @param  ApiList values
**/
void *Anal_AnalysisDataDim_SetApplicationData(Anal_AnalysisDataDim self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisDataDim.assignTolerance

Chemical shift 
tolerance (ppm) for assignment
  @param  Anal_AnalysisDataDim self
  @param  ApiFloat value
**/
void *Anal_AnalysisDataDim_SetAssignTolerance(Anal_AnalysisDataDim self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAssignTolerance");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: cannot find method 'setAssignTolerance'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: method 'setAssignTolerance' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisDataDim.axisMappings

Axis mappings 
currently pointing to AnalysisDataDim
  @param  Anal_AnalysisDataDim self
  @param  ApiSet values
**/
void *Anal_AnalysisDataDim_SetAxisMappings(Anal_AnalysisDataDim self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAxisMappings");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: cannot find method 'setAxisMappings'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: method 'setAxisMappings' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisDataDim.chemShiftWeight

Weight for 
dimension in chemical shift averaging.
  @param  Anal_AnalysisDataDim self
  @param  ApiFloat value
**/
void *Anal_AnalysisDataDim_SetChemShiftWeight(Anal_AnalysisDataDim self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setChemShiftWeight");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: cannot find method 'setChemShiftWeight'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: method 'setChemShiftWeight' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisDataDim.dataDim

DAtDim that 
AnalysisDataDim points to
  @param  Anal_AnalysisDataDim self
  @param  Nmr_AbstractDataDim value
**/
void *Anal_AnalysisDataDim_SetDataDim(Anal_AnalysisDataDim self, Nmr_AbstractDataDim value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDataDim");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: cannot find method 'setDataDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: method 'setDataDim' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisDataDim.noeTolerance

NBNB TBD ???
  @param  Anal_AnalysisDataDim self
  @param  ApiFloat value
**/
void *Anal_AnalysisDataDim_SetNoeTolerance(Anal_AnalysisDataDim self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNoeTolerance");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: cannot find method 'setNoeTolerance'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: method 'setNoeTolerance' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisDataDim.peakFindBoxWidth

Minimum line 
width for a found peak to be accepted (NBNB TBD unit?).
  @param  Anal_AnalysisDataDim self
  @param  ApiFloat value
**/
void *Anal_AnalysisDataDim_SetPeakFindBoxWidth(Anal_AnalysisDataDim self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPeakFindBoxWidth");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: cannot find method 'setPeakFindBoxWidth'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: method 'setPeakFindBoxWidth' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisDataDim.peakFindMinLineWidth

Minimum 
line width for a found peak to be accepted (NBNB TBD unit?).
  @param  Anal_AnalysisDataDim self
  @param  ApiFloat value
**/
void *Anal_AnalysisDataDim_SetPeakFindMinLineWidth(Anal_AnalysisDataDim self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPeakFindMinLineWidth");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: cannot find method 'setPeakFindMinLineWidth'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: method 'setPeakFindMinLineWidth' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AnalysisDataDim.refSamplePlane

Index in this 
dimension that indicates plane used as reference plane. Intended for use 
with sampled dimensions in e.g. pseudo-3D experiments, where one plane 
is the reference plane.
  @param  Anal_AnalysisDataDim self
  @param  ApiFloat value
**/
void *Anal_AnalysisDataDim_SetRefSamplePlane(Anal_AnalysisDataDim self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRefSamplePlane");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: cannot find method 'setRefSamplePlane'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: method 'setRefSamplePlane' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccpnmr.Analysis.AnalysisDataDim.axisMappings

Axis mappings 
currently pointing to AnalysisDataDim
  @param  Anal_AnalysisDataDim self
  @returns   the result
**/
ApiList Anal_AnalysisDataDim_SortedAxisMappings(Anal_AnalysisDataDim self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedAxisMappings");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: cannot find method 'sortedAxisMappings'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AnalysisDataDim: method 'sortedAxisMappings' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
