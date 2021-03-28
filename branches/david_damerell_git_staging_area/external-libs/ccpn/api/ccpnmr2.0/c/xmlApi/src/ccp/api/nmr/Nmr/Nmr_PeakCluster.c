
#include "ccp.h"

/*
  Cluster of peaks that together make up a (nD) multiplet. The peaks may come from different PeakLists and Experiments.
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakCluster self
  @param  Impl_ApplicationData value
**/
void *Nmr_PeakCluster_AddApplicationData(Nmr_PeakCluster self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.Nmr.PeakCluster.peaks

Peaks that make up the 
peakCluster
  @param  Nmr_PeakCluster self
  @param  Nmr_Peak value
**/
void *Nmr_PeakCluster_AddPeak(Nmr_PeakCluster self, Nmr_Peak value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addPeak");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: cannot find method 'addPeak'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: method 'addPeak' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.nmr.Nmr.PeakCluster
  @param  Nmr_PeakCluster self
  @param  ApiBoolean complete
**/
void *Nmr_PeakCluster_CheckAllValid(Nmr_PeakCluster self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.nmr.Nmr.PeakCluster
  @param  Nmr_PeakCluster self
  @param  ApiBoolean complete
**/
void *Nmr_PeakCluster_CheckValid(Nmr_PeakCluster self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: method 'checkValid' is not callable");
  
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
  @param  Nmr_PeakCluster self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_PeakCluster_FindAllApplicationData(Nmr_PeakCluster self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: method 'findAllApplicationData' is not callable");
  
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
  @param  Nmr_PeakCluster self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_PeakCluster_FindAllApplicationData_keyval0(Nmr_PeakCluster self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_PeakCluster_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakCluster self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_PeakCluster_FindAllApplicationData_keyval1(Nmr_PeakCluster self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_PeakCluster_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakCluster self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_PeakCluster_FindAllApplicationData_keyval2(Nmr_PeakCluster self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_PeakCluster_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakCluster self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_PeakCluster_FindAllApplicationData_keyval3(Nmr_PeakCluster self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_PeakCluster_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakCluster self
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
ApiList Nmr_PeakCluster_FindAllApplicationData_keyval4(Nmr_PeakCluster self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_PeakCluster_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.PeakCluster.peaks

Peaks that make up the 
peakCluster
  @param  Nmr_PeakCluster self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PeakCluster_FindAllPeaks(Nmr_PeakCluster self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllPeaks");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: cannot find method 'findAllPeaks'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: method 'findAllPeaks' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.PeakCluster.peaks

Peaks that make up the 
peakCluster
  @param  Nmr_PeakCluster self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PeakCluster_FindAllPeaks_keyval0(Nmr_PeakCluster self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_PeakCluster_FindAllPeaks(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.PeakCluster.peaks

Peaks that make up the 
peakCluster
  @param  Nmr_PeakCluster self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PeakCluster_FindAllPeaks_keyval1(Nmr_PeakCluster self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_PeakCluster_FindAllPeaks(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.PeakCluster.peaks

Peaks that make up the 
peakCluster
  @param  Nmr_PeakCluster self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PeakCluster_FindAllPeaks_keyval2(Nmr_PeakCluster self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_PeakCluster_FindAllPeaks(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.PeakCluster.peaks

Peaks that make up the 
peakCluster
  @param  Nmr_PeakCluster self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PeakCluster_FindAllPeaks_keyval3(Nmr_PeakCluster self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_PeakCluster_FindAllPeaks(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.PeakCluster.peaks

Peaks that make up the 
peakCluster
  @param  Nmr_PeakCluster self
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
ApiSet Nmr_PeakCluster_FindAllPeaks_keyval4(Nmr_PeakCluster self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_PeakCluster_FindAllPeaks(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakCluster self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_PeakCluster_FindFirstApplicationData(Nmr_PeakCluster self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nmr_PeakCluster self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_PeakCluster_FindFirstApplicationData_keyval0(Nmr_PeakCluster self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_PeakCluster_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakCluster self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_PeakCluster_FindFirstApplicationData_keyval1(Nmr_PeakCluster self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_PeakCluster_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakCluster self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_PeakCluster_FindFirstApplicationData_keyval2(Nmr_PeakCluster self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_PeakCluster_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakCluster self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_PeakCluster_FindFirstApplicationData_keyval3(Nmr_PeakCluster self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_PeakCluster_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakCluster self
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
Impl_ApplicationData Nmr_PeakCluster_FindFirstApplicationData_keyval4(Nmr_PeakCluster self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_PeakCluster_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.PeakCluster.peaks

Peaks that make up the 
peakCluster
  @param  Nmr_PeakCluster self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_Peak Nmr_PeakCluster_FindFirstPeak(Nmr_PeakCluster self, ApiMap conditions)
{
  
  Nmr_Peak obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstPeak");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: cannot find method 'findFirstPeak'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: method 'findFirstPeak' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.PeakCluster.peaks

Peaks that make up the 
peakCluster
  @param  Nmr_PeakCluster self
  @returns  the first value that satisfies the conditions 
**/
Nmr_Peak Nmr_PeakCluster_FindFirstPeak_keyval0(Nmr_PeakCluster self)
{
  
  Nmr_Peak  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_PeakCluster_FindFirstPeak(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.PeakCluster.peaks

Peaks that make up the 
peakCluster
  @param  Nmr_PeakCluster self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_Peak Nmr_PeakCluster_FindFirstPeak_keyval1(Nmr_PeakCluster self, char * key, ApiObject value)
{
  
  Nmr_Peak  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_PeakCluster_FindFirstPeak(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.PeakCluster.peaks

Peaks that make up the 
peakCluster
  @param  Nmr_PeakCluster self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_Peak Nmr_PeakCluster_FindFirstPeak_keyval2(Nmr_PeakCluster self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_Peak  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_PeakCluster_FindFirstPeak(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.PeakCluster.peaks

Peaks that make up the 
peakCluster
  @param  Nmr_PeakCluster self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_Peak Nmr_PeakCluster_FindFirstPeak_keyval3(Nmr_PeakCluster self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_Peak  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_PeakCluster_FindFirstPeak(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.PeakCluster.peaks

Peaks that make up the 
peakCluster
  @param  Nmr_PeakCluster self
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
Nmr_Peak Nmr_PeakCluster_FindFirstPeak_keyval4(Nmr_PeakCluster self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_Peak  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_PeakCluster_FindFirstPeak(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.nmr.Nmr.PeakCluster
  @param  Nmr_PeakCluster self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Nmr_PeakCluster_Get(Nmr_PeakCluster self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_PeakCluster self
  @returns   the result
**/
Acco_AccessObject Nmr_PeakCluster_GetAccess(Nmr_PeakCluster self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: method 'getAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.PeakCluster.annotation

Peak Cluster annotation. 
Short descriptive information, which may be used on screen displays of 
spectra with peaks.
  @param  Nmr_PeakCluster self
  @returns   the result
**/
ApiString Nmr_PeakCluster_GetAnnotation(Nmr_PeakCluster self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAnnotation");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: cannot find method 'getAnnotation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: method 'getAnnotation' is not callable");
  
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
  @param  Nmr_PeakCluster self
  @returns   the result
**/
ApiList Nmr_PeakCluster_GetApplicationData(Nmr_PeakCluster self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.Nmr.PeakCluster
  @param  Nmr_PeakCluster self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nmr_PeakCluster Nmr_PeakCluster_GetByKey(Nmr_PeakCluster self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Nmr_PeakCluster obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: method 'getByKey' is not callable");
  
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
  @param  Nmr_PeakCluster self
  @returns   the result
**/
ApiString Nmr_PeakCluster_GetClassName(Nmr_PeakCluster self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.PeakCluster.clusterType

Type of cluster - see 
datatype documentation for possible types and their meanings. There are 
no constraints that depend on the type, but applications may apply 
different treatment to different types of clusters.
  @param  Nmr_PeakCluster self
  @returns   the result
**/
ApiString Nmr_PeakCluster_GetClusterType(Nmr_PeakCluster self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClusterType");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: cannot find method 'getClusterType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: method 'getClusterType' is not callable");
  
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
  @param  Nmr_PeakCluster self
  @returns   the result
**/
ApiList Nmr_PeakCluster_GetFieldNames(Nmr_PeakCluster self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.nmr.Nmr.PeakCluster
  @param  Nmr_PeakCluster self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Nmr_PeakCluster_GetFullKey(Nmr_PeakCluster self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: method 'getFullKey' is not callable");
  
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
  @param  Nmr_PeakCluster self
  @returns   the result
**/
ApiBoolean Nmr_PeakCluster_GetInConstructor(Nmr_PeakCluster self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: method 'getInConstructor' is not callable");
  
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
  @param  Nmr_PeakCluster self
  @returns   the result
**/
ApiBoolean Nmr_PeakCluster_GetIsDeleted(Nmr_PeakCluster self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.nmr.Nmr.PeakCluster
  @param  Nmr_PeakCluster self
  @returns  Local object key
**/
ApiObject Nmr_PeakCluster_GetLocalKey(Nmr_PeakCluster self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.PeakCluster.nmrProject

parent link
  @param  Nmr_PeakCluster self
  @returns   the result
**/
Nmr_NmrProject Nmr_PeakCluster_GetNmrProject(Nmr_PeakCluster self)
{
  
  Nmr_NmrProject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrProject");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: cannot find method 'getNmrProject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: method 'getNmrProject' is not callable");
  
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
  @param  Nmr_PeakCluster self
  @returns   the result
**/
ApiString Nmr_PeakCluster_GetPackageName(Nmr_PeakCluster self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: method 'getPackageName' is not callable");
  
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
  @param  Nmr_PeakCluster self
  @returns   the result
**/
ApiString Nmr_PeakCluster_GetPackageShortName(Nmr_PeakCluster self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.PeakCluster.parent

link to parent object - synonym 
for nmrProject
  @param  Nmr_PeakCluster self
  @returns   the result
**/
Nmr_NmrProject Nmr_PeakCluster_GetParent(Nmr_PeakCluster self)
{
  
  Nmr_NmrProject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.PeakCluster.peaks

Peaks that make up the 
peakCluster
  @param  Nmr_PeakCluster self
  @returns   the result
**/
ApiSet Nmr_PeakCluster_GetPeaks(Nmr_PeakCluster self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPeaks");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: cannot find method 'getPeaks'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: method 'getPeaks' is not callable");
  
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
  @param  Nmr_PeakCluster self
  @returns   the result
**/
ApiString Nmr_PeakCluster_GetQualifiedName(Nmr_PeakCluster self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: method 'getQualifiedName' is not callable");
  
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
  @param  Nmr_PeakCluster self
  @returns   the result
**/
Impl_MemopsRoot Nmr_PeakCluster_GetRoot(Nmr_PeakCluster self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.PeakCluster.serial

Serial number of object. Serves 
as object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Nmr_PeakCluster self
  @returns   the result
**/
ApiInteger Nmr_PeakCluster_GetSerial(Nmr_PeakCluster self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: method 'getSerial' is not callable");
  
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
  @param  Nmr_PeakCluster self
  @returns   the result
**/
Impl_TopObject Nmr_PeakCluster_GetTopObject(Nmr_PeakCluster self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.nmr.Nmr.PeakCluster
  @param  Nmr_NmrProject parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_PeakCluster Nmr_PeakCluster_Init(Nmr_NmrProject parent, ApiMap attrlinks)
{
  
  return Nmr_NmrProject_NewPeakCluster(parent, attrlinks);
}

/**
  Constructor for ccp.nmr.Nmr.PeakCluster
  @param  Nmr_NmrProject parent
  @param  char * clusterType
  @returns  the new object
**/
Nmr_PeakCluster Nmr_PeakCluster_Init_reqd(Nmr_NmrProject parent, char * clusterType)
{
  
  Nmr_PeakCluster  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__clusterType = ApiString_New(clusterType);

  PyDict_SetItemString(attrlinks, "clusterType", api__clusterType);
  
  obj = Nmr_PeakCluster_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__clusterType);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakCluster self
  @param  Impl_ApplicationData value
**/
void *Nmr_PeakCluster_RemoveApplicationData(Nmr_PeakCluster self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.Nmr.PeakCluster.peaks

Peaks that make up the 
peakCluster
  @param  Nmr_PeakCluster self
  @param  Nmr_Peak value
**/
void *Nmr_PeakCluster_RemovePeak(Nmr_PeakCluster self, Nmr_Peak value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removePeak");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: cannot find method 'removePeak'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: method 'removePeak' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.nmr.Nmr.PeakCluster
  @param  Nmr_PeakCluster self
  @param  ApiString name
  @param  ApiObject value
**/
void *Nmr_PeakCluster_Set(Nmr_PeakCluster self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_PeakCluster self
  @param  Acco_AccessObject value
**/
void *Nmr_PeakCluster_SetAccess(Nmr_PeakCluster self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: method 'setAccess' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.PeakCluster.annotation

Peak Cluster annotation. 
Short descriptive information, which may be used on screen displays of 
spectra with peaks.
  @param  Nmr_PeakCluster self
  @param  ApiString value
**/
void *Nmr_PeakCluster_SetAnnotation(Nmr_PeakCluster self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAnnotation");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: cannot find method 'setAnnotation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: method 'setAnnotation' is not callable");
  
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
  @param  Nmr_PeakCluster self
  @param  ApiList values
**/
void *Nmr_PeakCluster_SetApplicationData(Nmr_PeakCluster self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.PeakCluster.clusterType

Type of cluster - see 
datatype documentation for possible types and their meanings. There are 
no constraints that depend on the type, but applications may apply 
different treatment to different types of clusters.
  @param  Nmr_PeakCluster self
  @param  ApiString value
**/
void *Nmr_PeakCluster_SetClusterType(Nmr_PeakCluster self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setClusterType");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: cannot find method 'setClusterType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: method 'setClusterType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.PeakCluster.peaks

Peaks that make up the 
peakCluster
  @param  Nmr_PeakCluster self
  @param  ApiSet values
**/
void *Nmr_PeakCluster_SetPeaks(Nmr_PeakCluster self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPeaks");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: cannot find method 'setPeaks'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: method 'setPeaks' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.PeakCluster.serial

Serial number of object. Serves 
as object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Nmr_PeakCluster self
  @param  ApiInteger value
**/
void *Nmr_PeakCluster_SetSerial(Nmr_PeakCluster self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.PeakCluster.peaks

Peaks that make up the 
peakCluster
  @param  Nmr_PeakCluster self
  @returns   the result
**/
ApiList Nmr_PeakCluster_SortedPeaks(Nmr_PeakCluster self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedPeaks");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: cannot find method 'sortedPeaks'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakCluster: method 'sortedPeaks' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
