
#include "ccp.h"

/*
  Set of stored contours for a spectrum (dataSource)
*/

/* package ccpnmr.api.Analysis */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_StoredContour self
  @param  Impl_ApplicationData value
**/
void *Anal_StoredContour_AddApplicationData(Anal_StoredContour self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.StoredContour: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.StoredContour: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccpnmr.Analysis.StoredContour
  @param  Anal_StoredContour self
  @param  ApiBoolean complete
**/
void *Anal_StoredContour_CheckAllValid(Anal_StoredContour self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.StoredContour: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.StoredContour: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccpnmr.Analysis.StoredContour
  @param  Anal_StoredContour self
  @param  ApiBoolean complete
**/
void *Anal_StoredContour_CheckValid(Anal_StoredContour self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.StoredContour: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.StoredContour: method 'checkValid' is not callable");
  
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
  @param  Anal_StoredContour self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_StoredContour_FindAllApplicationData(Anal_StoredContour self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.StoredContour: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.StoredContour: method 'findAllApplicationData' is not callable");
  
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
  @param  Anal_StoredContour self
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_StoredContour_FindAllApplicationData_keyval0(Anal_StoredContour self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_StoredContour_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_StoredContour self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_StoredContour_FindAllApplicationData_keyval1(Anal_StoredContour self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_StoredContour_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_StoredContour self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_StoredContour_FindAllApplicationData_keyval2(Anal_StoredContour self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_StoredContour_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_StoredContour self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_StoredContour_FindAllApplicationData_keyval3(Anal_StoredContour self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_StoredContour_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_StoredContour self
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
ApiList Anal_StoredContour_FindAllApplicationData_keyval4(Anal_StoredContour self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_StoredContour_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.StoredContour.dataDims

DataDims that span 
the set of contours
  @param  Anal_StoredContour self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_StoredContour_FindAllDataDims(Anal_StoredContour self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllDataDims");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.StoredContour: cannot find method 'findAllDataDims'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.StoredContour: method 'findAllDataDims' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.StoredContour.dataDims

DataDims that span 
the set of contours
  @param  Anal_StoredContour self
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_StoredContour_FindAllDataDims_keyval0(Anal_StoredContour self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_StoredContour_FindAllDataDims(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.StoredContour.dataDims

DataDims that span 
the set of contours
  @param  Anal_StoredContour self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_StoredContour_FindAllDataDims_keyval1(Anal_StoredContour self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_StoredContour_FindAllDataDims(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.StoredContour.dataDims

DataDims that span 
the set of contours
  @param  Anal_StoredContour self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_StoredContour_FindAllDataDims_keyval2(Anal_StoredContour self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_StoredContour_FindAllDataDims(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.StoredContour.dataDims

DataDims that span 
the set of contours
  @param  Anal_StoredContour self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_StoredContour_FindAllDataDims_keyval3(Anal_StoredContour self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_StoredContour_FindAllDataDims(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.StoredContour.dataDims

DataDims that span 
the set of contours
  @param  Anal_StoredContour self
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
ApiList Anal_StoredContour_FindAllDataDims_keyval4(Anal_StoredContour self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_StoredContour_FindAllDataDims(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_StoredContour self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_StoredContour_FindFirstApplicationData(Anal_StoredContour self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.StoredContour: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.StoredContour: method 'findFirstApplicationData' is not callable");
  
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
  @param  Anal_StoredContour self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_StoredContour_FindFirstApplicationData_keyval0(Anal_StoredContour self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_StoredContour_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_StoredContour self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_StoredContour_FindFirstApplicationData_keyval1(Anal_StoredContour self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_StoredContour_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_StoredContour self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_StoredContour_FindFirstApplicationData_keyval2(Anal_StoredContour self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_StoredContour_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_StoredContour self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_StoredContour_FindFirstApplicationData_keyval3(Anal_StoredContour self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_StoredContour_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_StoredContour self
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
Impl_ApplicationData Anal_StoredContour_FindFirstApplicationData_keyval4(Anal_StoredContour self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_StoredContour_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.StoredContour.dataDims

DataDims that span 
the set of contours
  @param  Anal_StoredContour self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractDataDim Anal_StoredContour_FindFirstDataDim(Anal_StoredContour self, ApiMap conditions)
{
  
  Nmr_AbstractDataDim obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstDataDim");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.StoredContour: cannot find method 'findFirstDataDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.StoredContour: method 'findFirstDataDim' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.StoredContour.dataDims

DataDims that span 
the set of contours
  @param  Anal_StoredContour self
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractDataDim Anal_StoredContour_FindFirstDataDim_keyval0(Anal_StoredContour self)
{
  
  Nmr_AbstractDataDim  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_StoredContour_FindFirstDataDim(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.StoredContour.dataDims

DataDims that span 
the set of contours
  @param  Anal_StoredContour self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractDataDim Anal_StoredContour_FindFirstDataDim_keyval1(Anal_StoredContour self, char * key, ApiObject value)
{
  
  Nmr_AbstractDataDim  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_StoredContour_FindFirstDataDim(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.StoredContour.dataDims

DataDims that span 
the set of contours
  @param  Anal_StoredContour self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractDataDim Anal_StoredContour_FindFirstDataDim_keyval2(Anal_StoredContour self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_AbstractDataDim  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_StoredContour_FindFirstDataDim(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.StoredContour.dataDims

DataDims that span 
the set of contours
  @param  Anal_StoredContour self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractDataDim Anal_StoredContour_FindFirstDataDim_keyval3(Anal_StoredContour self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_AbstractDataDim  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_StoredContour_FindFirstDataDim(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.StoredContour.dataDims

DataDims that span 
the set of contours
  @param  Anal_StoredContour self
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
Nmr_AbstractDataDim Anal_StoredContour_FindFirstDataDim_keyval4(Anal_StoredContour self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_AbstractDataDim  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_StoredContour_FindFirstDataDim(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccpnmr.Analysis.StoredContour
  @param  Anal_StoredContour self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Anal_StoredContour_Get(Anal_StoredContour self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anal_StoredContour self
  @returns   the result
**/
Acco_AccessObject Anal_StoredContour_GetAccess(Anal_StoredContour self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.StoredContour: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.StoredContour: method 'getAccess' is not callable");
  
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
  @param  Anal_StoredContour self
  @returns   the result
**/
Acco_AccessObject Anal_StoredContour_GetActiveAccess(Anal_StoredContour self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.StoredContour: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.StoredContour: method 'getActiveAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.StoredContour.analysisSpectrum

parent link
  @param  Anal_StoredContour self
  @returns   the result
**/
Anal_AnalysisSpectrum Anal_StoredContour_GetAnalysisSpectrum(Anal_StoredContour self)
{
  
  Anal_AnalysisSpectrum obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAnalysisSpectrum");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.StoredContour: cannot find method 'getAnalysisSpectrum'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.StoredContour: method 'getAnalysisSpectrum' is not callable");
  
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
  @param  Anal_StoredContour self
  @returns   the result
**/
ApiList Anal_StoredContour_GetApplicationData(Anal_StoredContour self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.StoredContour: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.StoredContour: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccpnmr.Analysis.StoredContour
  @param  Anal_StoredContour self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Anal_StoredContour Anal_StoredContour_GetByKey(Anal_StoredContour self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Anal_StoredContour obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.StoredContour: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.StoredContour: method 'getByKey' is not callable");
  
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
  @param  Anal_StoredContour self
  @returns   the result
**/
ApiString Anal_StoredContour_GetClassName(Anal_StoredContour self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.StoredContour: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.StoredContour: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived link dataDims
  @param  Anal_StoredContour self
  @returns   the result
**/
ApiList Anal_StoredContour_GetDataDims(Anal_StoredContour self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDataDims");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.StoredContour: cannot find method 'getDataDims'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.StoredContour: method 'getDataDims' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.StoredContour.dims

Dimensions that contours 
apply to.
  @param  Anal_StoredContour self
  @returns   the result
**/
ApiList Anal_StoredContour_GetDims(Anal_StoredContour self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDims");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.StoredContour: cannot find method 'getDims'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.StoredContour: method 'getDims' is not callable");
  
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
  @param  Anal_StoredContour self
  @returns   the result
**/
ApiList Anal_StoredContour_GetFieldNames(Anal_StoredContour self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.StoredContour: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.StoredContour: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccpnmr.Analysis.StoredContour
  @param  Anal_StoredContour self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Anal_StoredContour_GetFullKey(Anal_StoredContour self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.StoredContour: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.StoredContour: method 'getFullKey' is not callable");
  
  args = PyTuple_Pack(1, useGuid);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived attribute fullPath
  @param  Anal_StoredContour self
  @returns   the result
**/
ApiString Anal_StoredContour_GetFullPath(Anal_StoredContour self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullPath");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.StoredContour: cannot find method 'getFullPath'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.StoredContour: method 'getFullPath' is not callable");
  
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
  @param  Anal_StoredContour self
  @returns   the result
**/
ApiBoolean Anal_StoredContour_GetInConstructor(Anal_StoredContour self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.StoredContour: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.StoredContour: method 'getInConstructor' is not callable");
  
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
  @param  Anal_StoredContour self
  @returns   the result
**/
ApiBoolean Anal_StoredContour_GetIsDeleted(Anal_StoredContour self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.StoredContour: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.StoredContour: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccpnmr.Analysis.StoredContour
  @param  Anal_StoredContour self
  @returns  Local object key
**/
ApiObject Anal_StoredContour_GetLocalKey(Anal_StoredContour self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.StoredContour: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.StoredContour: method 'getLocalKey' is not callable");
  
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
  @param  Anal_StoredContour self
  @returns   the result
**/
ApiString Anal_StoredContour_GetPackageName(Anal_StoredContour self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.StoredContour: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.StoredContour: method 'getPackageName' is not callable");
  
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
  @param  Anal_StoredContour self
  @returns   the result
**/
ApiString Anal_StoredContour_GetPackageShortName(Anal_StoredContour self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.StoredContour: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.StoredContour: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.StoredContour.parent

link to parent object - 
synonym for analysisSpectrum
  @param  Anal_StoredContour self
  @returns   the result
**/
Anal_AnalysisSpectrum Anal_StoredContour_GetParent(Anal_StoredContour self)
{
  
  Anal_AnalysisSpectrum obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.StoredContour: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.StoredContour: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.StoredContour.path

relative path to contour 
file - to be combined with analysisSpectrum.contourDir path.
  @param  Anal_StoredContour self
  @returns   the result
**/
ApiString Anal_StoredContour_GetPath(Anal_StoredContour self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPath");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.StoredContour: cannot find method 'getPath'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.StoredContour: method 'getPath' is not callable");
  
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
  @param  Anal_StoredContour self
  @returns   the result
**/
ApiString Anal_StoredContour_GetQualifiedName(Anal_StoredContour self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.StoredContour: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.StoredContour: method 'getQualifiedName' is not callable");
  
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
  @param  Anal_StoredContour self
  @returns   the result
**/
Impl_MemopsRoot Anal_StoredContour_GetRoot(Anal_StoredContour self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.StoredContour: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.StoredContour: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.StoredContour.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Anal_StoredContour self
  @returns   the result
**/
ApiInteger Anal_StoredContour_GetSerial(Anal_StoredContour self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.StoredContour: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.StoredContour: method 'getSerial' is not callable");
  
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
  @param  Anal_StoredContour self
  @returns   the result
**/
Impl_TopObject Anal_StoredContour_GetTopObject(Anal_StoredContour self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.StoredContour: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.StoredContour: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccpnmr.Analysis.StoredContour
  @param  Anal_AnalysisSpectrum parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anal_StoredContour Anal_StoredContour_Init(Anal_AnalysisSpectrum parent, ApiMap attrlinks)
{
  
  return Anal_AnalysisSpectrum_NewStoredContour(parent, attrlinks);
}

/**
  Constructor for ccpnmr.Analysis.StoredContour
  @param  Anal_AnalysisSpectrum parent
  @param  ApiList dims
  @param  char * path
  @returns  the new object
**/
Anal_StoredContour Anal_StoredContour_Init_reqd(Anal_AnalysisSpectrum parent, ApiList dims, char * path)
{
  
  Anal_StoredContour  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__path = ApiString_New(path);

  PyDict_SetItemString(attrlinks, "dims", dims);
  PyDict_SetItemString(attrlinks, "path", api__path);
  
  obj = Anal_StoredContour_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__path);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_StoredContour self
  @param  Impl_ApplicationData value
**/
void *Anal_StoredContour_RemoveApplicationData(Anal_StoredContour self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.StoredContour: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.StoredContour: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccpnmr.Analysis.StoredContour
  @param  Anal_StoredContour self
  @param  ApiString name
  @param  ApiObject value
**/
void *Anal_StoredContour_Set(Anal_StoredContour self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anal_StoredContour self
  @param  Acco_AccessObject value
**/
void *Anal_StoredContour_SetAccess(Anal_StoredContour self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.StoredContour: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.StoredContour: method 'setAccess' is not callable");
  
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
  @param  Anal_StoredContour self
  @param  ApiList values
**/
void *Anal_StoredContour_SetApplicationData(Anal_StoredContour self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.StoredContour: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.StoredContour: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.StoredContour.dims

Dimensions that contours 
apply to.
  @param  Anal_StoredContour self
  @param  ApiList values
**/
void *Anal_StoredContour_SetDims(Anal_StoredContour self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDims");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.StoredContour: cannot find method 'setDims'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.StoredContour: method 'setDims' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.StoredContour.path

relative path to contour 
file - to be combined with analysisSpectrum.contourDir path.
  @param  Anal_StoredContour self
  @param  ApiString value
**/
void *Anal_StoredContour_SetPath(Anal_StoredContour self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPath");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.StoredContour: cannot find method 'setPath'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.StoredContour: method 'setPath' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.StoredContour.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Anal_StoredContour self
  @param  ApiInteger value
**/
void *Anal_StoredContour_SetSerial(Anal_StoredContour self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.StoredContour: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.StoredContour: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
