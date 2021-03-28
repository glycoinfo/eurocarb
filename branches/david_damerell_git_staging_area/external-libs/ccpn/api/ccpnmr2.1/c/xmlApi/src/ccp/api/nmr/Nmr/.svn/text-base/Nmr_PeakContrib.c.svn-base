
#include "ccp.h"

/*
  Crosspeak contribution.  PeakContribs serve two slightly different purposes. They describe a Peak as a sum of different contributions (e.g. ovelapped peaks), whose relative values is determined by their relative weights. They also serve simply as a way of describing mutually exclusive sets of assignment possibilities, without any implication about the peak arising from multiple contributions. The two aspects are almost identical in practice. If all PeakContrib weights are 0.0, as is the default, it can be assumed that the Contribs are only describing assignment possibilities.
  
  Each PeakContrib may have any number (including zero) peakDimContrib for every dim. The set of possible complete assignments for a PeakContrib is found as follows:
  For each dimension all PeakDimContribs belonging to the dimension are potential assignments. If there are say 3, 2, and 5 possibilities in the three dimensions (of a 3D peak) there will be a total of 3*2*5=30 possible assignment states belonging to the PeakContrib. If there are no possibilities for one dimension (say 3, 0, and 5 for the three dimensions), there will be 3*5=15 alternative (partial) assignment states. 
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakContrib self
  @param  Impl_ApplicationData value
**/
void *Nmr_PeakContrib_AddApplicationData(Nmr_PeakContrib self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.Nmr.PeakContrib.peakDimContribs

peakDimContribs that 
are possible assignments for the peak within a given PeakContrib. May 
belong to different dimensions

`
  @param  Nmr_PeakContrib self
  @param  Nmr_AbstractPeakDimContrib value
**/
void *Nmr_PeakContrib_AddPeakDimContrib(Nmr_PeakContrib self, Nmr_AbstractPeakDimContrib value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addPeakDimContrib");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: cannot find method 'addPeakDimContrib'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: method 'addPeakDimContrib' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.nmr.Nmr.PeakContrib
  @param  Nmr_PeakContrib self
  @param  ApiBoolean complete
**/
void *Nmr_PeakContrib_CheckAllValid(Nmr_PeakContrib self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.nmr.Nmr.PeakContrib
  @param  Nmr_PeakContrib self
  @param  ApiBoolean complete
**/
void *Nmr_PeakContrib_CheckValid(Nmr_PeakContrib self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: method 'checkValid' is not callable");
  
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
  @param  Nmr_PeakContrib self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_PeakContrib_FindAllApplicationData(Nmr_PeakContrib self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: method 'findAllApplicationData' is not callable");
  
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
  @param  Nmr_PeakContrib self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_PeakContrib_FindAllApplicationData_keyval0(Nmr_PeakContrib self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_PeakContrib_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakContrib self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_PeakContrib_FindAllApplicationData_keyval1(Nmr_PeakContrib self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_PeakContrib_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakContrib self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_PeakContrib_FindAllApplicationData_keyval2(Nmr_PeakContrib self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_PeakContrib_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakContrib self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_PeakContrib_FindAllApplicationData_keyval3(Nmr_PeakContrib self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_PeakContrib_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakContrib self
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
ApiList Nmr_PeakContrib_FindAllApplicationData_keyval4(Nmr_PeakContrib self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_PeakContrib_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.PeakContrib.peakDimContribs

peakDimContribs 
that are possible assignments for the peak within a given PeakContrib. 
May belong to different dimensions

`
  @param  Nmr_PeakContrib self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PeakContrib_FindAllPeakDimContribs(Nmr_PeakContrib self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllPeakDimContribs");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: cannot find method 'findAllPeakDimContribs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: method 'findAllPeakDimContribs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.PeakContrib.peakDimContribs

peakDimContribs 
that are possible assignments for the peak within a given PeakContrib. 
May belong to different dimensions

`
  @param  Nmr_PeakContrib self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PeakContrib_FindAllPeakDimContribs_keyval0(Nmr_PeakContrib self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_PeakContrib_FindAllPeakDimContribs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.PeakContrib.peakDimContribs

peakDimContribs 
that are possible assignments for the peak within a given PeakContrib. 
May belong to different dimensions

`
  @param  Nmr_PeakContrib self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PeakContrib_FindAllPeakDimContribs_keyval1(Nmr_PeakContrib self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_PeakContrib_FindAllPeakDimContribs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.PeakContrib.peakDimContribs

peakDimContribs 
that are possible assignments for the peak within a given PeakContrib. 
May belong to different dimensions

`
  @param  Nmr_PeakContrib self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PeakContrib_FindAllPeakDimContribs_keyval2(Nmr_PeakContrib self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_PeakContrib_FindAllPeakDimContribs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.PeakContrib.peakDimContribs

peakDimContribs 
that are possible assignments for the peak within a given PeakContrib. 
May belong to different dimensions

`
  @param  Nmr_PeakContrib self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PeakContrib_FindAllPeakDimContribs_keyval3(Nmr_PeakContrib self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_PeakContrib_FindAllPeakDimContribs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.PeakContrib.peakDimContribs

peakDimContribs 
that are possible assignments for the peak within a given PeakContrib. 
May belong to different dimensions

`
  @param  Nmr_PeakContrib self
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
ApiSet Nmr_PeakContrib_FindAllPeakDimContribs_keyval4(Nmr_PeakContrib self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_PeakContrib_FindAllPeakDimContribs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakContrib self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_PeakContrib_FindFirstApplicationData(Nmr_PeakContrib self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nmr_PeakContrib self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_PeakContrib_FindFirstApplicationData_keyval0(Nmr_PeakContrib self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_PeakContrib_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakContrib self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_PeakContrib_FindFirstApplicationData_keyval1(Nmr_PeakContrib self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_PeakContrib_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakContrib self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_PeakContrib_FindFirstApplicationData_keyval2(Nmr_PeakContrib self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_PeakContrib_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakContrib self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_PeakContrib_FindFirstApplicationData_keyval3(Nmr_PeakContrib self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_PeakContrib_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakContrib self
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
Impl_ApplicationData Nmr_PeakContrib_FindFirstApplicationData_keyval4(Nmr_PeakContrib self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_PeakContrib_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.PeakContrib.peakDimContribs

peakDimContribs 
that are possible assignments for the peak within a given PeakContrib. 
May belong to different dimensions

`
  @param  Nmr_PeakContrib self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractPeakDimContrib Nmr_PeakContrib_FindFirstPeakDimContrib(Nmr_PeakContrib self, ApiMap conditions)
{
  
  Nmr_AbstractPeakDimContrib obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstPeakDimContrib");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: cannot find method 'findFirstPeakDimContrib'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: method 'findFirstPeakDimContrib' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.PeakContrib.peakDimContribs

peakDimContribs 
that are possible assignments for the peak within a given PeakContrib. 
May belong to different dimensions

`
  @param  Nmr_PeakContrib self
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractPeakDimContrib Nmr_PeakContrib_FindFirstPeakDimContrib_keyval0(Nmr_PeakContrib self)
{
  
  Nmr_AbstractPeakDimContrib  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_PeakContrib_FindFirstPeakDimContrib(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.PeakContrib.peakDimContribs

peakDimContribs 
that are possible assignments for the peak within a given PeakContrib. 
May belong to different dimensions

`
  @param  Nmr_PeakContrib self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractPeakDimContrib Nmr_PeakContrib_FindFirstPeakDimContrib_keyval1(Nmr_PeakContrib self, char * key, ApiObject value)
{
  
  Nmr_AbstractPeakDimContrib  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_PeakContrib_FindFirstPeakDimContrib(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.PeakContrib.peakDimContribs

peakDimContribs 
that are possible assignments for the peak within a given PeakContrib. 
May belong to different dimensions

`
  @param  Nmr_PeakContrib self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractPeakDimContrib Nmr_PeakContrib_FindFirstPeakDimContrib_keyval2(Nmr_PeakContrib self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_AbstractPeakDimContrib  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_PeakContrib_FindFirstPeakDimContrib(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.PeakContrib.peakDimContribs

peakDimContribs 
that are possible assignments for the peak within a given PeakContrib. 
May belong to different dimensions

`
  @param  Nmr_PeakContrib self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractPeakDimContrib Nmr_PeakContrib_FindFirstPeakDimContrib_keyval3(Nmr_PeakContrib self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_AbstractPeakDimContrib  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_PeakContrib_FindFirstPeakDimContrib(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.PeakContrib.peakDimContribs

peakDimContribs 
that are possible assignments for the peak within a given PeakContrib. 
May belong to different dimensions

`
  @param  Nmr_PeakContrib self
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
Nmr_AbstractPeakDimContrib Nmr_PeakContrib_FindFirstPeakDimContrib_keyval4(Nmr_PeakContrib self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_AbstractPeakDimContrib  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_PeakContrib_FindFirstPeakDimContrib(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.nmr.Nmr.PeakContrib
  @param  Nmr_PeakContrib self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Nmr_PeakContrib_Get(Nmr_PeakContrib self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_PeakContrib self
  @returns   the result
**/
Acco_AccessObject Nmr_PeakContrib_GetAccess(Nmr_PeakContrib self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: method 'getAccess' is not callable");
  
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
  @param  Nmr_PeakContrib self
  @returns   the result
**/
Acco_AccessObject Nmr_PeakContrib_GetActiveAccess(Nmr_PeakContrib self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: method 'getActiveAccess' is not callable");
  
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
  @param  Nmr_PeakContrib self
  @returns   the result
**/
ApiList Nmr_PeakContrib_GetApplicationData(Nmr_PeakContrib self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.Nmr.PeakContrib
  @param  Nmr_PeakContrib self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nmr_PeakContrib Nmr_PeakContrib_GetByKey(Nmr_PeakContrib self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Nmr_PeakContrib obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: method 'getByKey' is not callable");
  
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
  @param  Nmr_PeakContrib self
  @returns   the result
**/
ApiString Nmr_PeakContrib_GetClassName(Nmr_PeakContrib self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: method 'getClassName' is not callable");
  
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
  @param  Nmr_PeakContrib self
  @returns   the result
**/
ApiList Nmr_PeakContrib_GetFieldNames(Nmr_PeakContrib self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.nmr.Nmr.PeakContrib
  @param  Nmr_PeakContrib self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Nmr_PeakContrib_GetFullKey(Nmr_PeakContrib self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: method 'getFullKey' is not callable");
  
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
  @param  Nmr_PeakContrib self
  @returns   the result
**/
ApiBoolean Nmr_PeakContrib_GetInConstructor(Nmr_PeakContrib self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: method 'getInConstructor' is not callable");
  
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
  @param  Nmr_PeakContrib self
  @returns   the result
**/
ApiBoolean Nmr_PeakContrib_GetIsDeleted(Nmr_PeakContrib self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.nmr.Nmr.PeakContrib
  @param  Nmr_PeakContrib self
  @returns  Local object key
**/
ApiObject Nmr_PeakContrib_GetLocalKey(Nmr_PeakContrib self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: method 'getLocalKey' is not callable");
  
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
  @param  Nmr_PeakContrib self
  @returns   the result
**/
ApiString Nmr_PeakContrib_GetPackageName(Nmr_PeakContrib self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: method 'getPackageName' is not callable");
  
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
  @param  Nmr_PeakContrib self
  @returns   the result
**/
ApiString Nmr_PeakContrib_GetPackageShortName(Nmr_PeakContrib self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.PeakContrib.parent

link to parent object - synonym 
for peak
  @param  Nmr_PeakContrib self
  @returns   the result
**/
Nmr_Peak Nmr_PeakContrib_GetParent(Nmr_PeakContrib self)
{
  
  Nmr_Peak obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.PeakContrib.peak

parent link
  @param  Nmr_PeakContrib self
  @returns   the result
**/
Nmr_Peak Nmr_PeakContrib_GetPeak(Nmr_PeakContrib self)
{
  
  Nmr_Peak obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPeak");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: cannot find method 'getPeak'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: method 'getPeak' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.PeakContrib.peakDimContribs

peakDimContribs that 
are possible assignments for the peak within a given PeakContrib. May 
belong to different dimensions

`
  @param  Nmr_PeakContrib self
  @returns   the result
**/
ApiSet Nmr_PeakContrib_GetPeakDimContribs(Nmr_PeakContrib self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPeakDimContribs");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: cannot find method 'getPeakDimContribs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: method 'getPeakDimContribs' is not callable");
  
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
  @param  Nmr_PeakContrib self
  @returns   the result
**/
ApiString Nmr_PeakContrib_GetQualifiedName(Nmr_PeakContrib self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: method 'getQualifiedName' is not callable");
  
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
  @param  Nmr_PeakContrib self
  @returns   the result
**/
Impl_MemopsRoot Nmr_PeakContrib_GetRoot(Nmr_PeakContrib self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.PeakContrib.serial

Serial number of object. Serves 
as object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Nmr_PeakContrib self
  @returns   the result
**/
ApiInteger Nmr_PeakContrib_GetSerial(Nmr_PeakContrib self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: method 'getSerial' is not callable");
  
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
  @param  Nmr_PeakContrib self
  @returns   the result
**/
Impl_TopObject Nmr_PeakContrib_GetTopObject(Nmr_PeakContrib self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.PeakContrib.weight

Weight (relative probability or 
relative contribution) of PeakContrib for a given Peak. If the division 
in PeakContribs is not significant, but simply a way of describing 
alternative assignments, all weights may be set to zero.
  @param  Nmr_PeakContrib self
  @returns   the result
**/
ApiFloat Nmr_PeakContrib_GetWeight(Nmr_PeakContrib self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getWeight");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: cannot find method 'getWeight'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: method 'getWeight' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.nmr.Nmr.PeakContrib
  @param  Nmr_Peak parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_PeakContrib Nmr_PeakContrib_Init(Nmr_Peak parent, ApiMap attrlinks)
{
  
  return Nmr_Peak_NewPeakContrib(parent, attrlinks);
}

/**
  Constructor for ccp.nmr.Nmr.PeakContrib
  @param  Nmr_Peak parent
  @returns  the new object
**/
Nmr_PeakContrib Nmr_PeakContrib_Init_reqd(Nmr_Peak parent)
{
  
  Nmr_PeakContrib  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Nmr_PeakContrib_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakContrib self
  @param  Impl_ApplicationData value
**/
void *Nmr_PeakContrib_RemoveApplicationData(Nmr_PeakContrib self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.Nmr.PeakContrib.peakDimContribs

peakDimContribs that 
are possible assignments for the peak within a given PeakContrib. May 
belong to different dimensions

`
  @param  Nmr_PeakContrib self
  @param  Nmr_AbstractPeakDimContrib value
**/
void *Nmr_PeakContrib_RemovePeakDimContrib(Nmr_PeakContrib self, Nmr_AbstractPeakDimContrib value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removePeakDimContrib");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: cannot find method 'removePeakDimContrib'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: method 'removePeakDimContrib' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.nmr.Nmr.PeakContrib
  @param  Nmr_PeakContrib self
  @param  ApiString name
  @param  ApiObject value
**/
void *Nmr_PeakContrib_Set(Nmr_PeakContrib self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_PeakContrib self
  @param  Acco_AccessObject value
**/
void *Nmr_PeakContrib_SetAccess(Nmr_PeakContrib self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: method 'setAccess' is not callable");
  
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
  @param  Nmr_PeakContrib self
  @param  ApiList values
**/
void *Nmr_PeakContrib_SetApplicationData(Nmr_PeakContrib self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.PeakContrib.peakDimContribs

peakDimContribs that 
are possible assignments for the peak within a given PeakContrib. May 
belong to different dimensions

`
  @param  Nmr_PeakContrib self
  @param  ApiSet values
**/
void *Nmr_PeakContrib_SetPeakDimContribs(Nmr_PeakContrib self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPeakDimContribs");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: cannot find method 'setPeakDimContribs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: method 'setPeakDimContribs' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.PeakContrib.serial

Serial number of object. Serves 
as object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Nmr_PeakContrib self
  @param  ApiInteger value
**/
void *Nmr_PeakContrib_SetSerial(Nmr_PeakContrib self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.PeakContrib.weight

Weight (relative probability or 
relative contribution) of PeakContrib for a given Peak. If the division 
in PeakContribs is not significant, but simply a way of describing 
alternative assignments, all weights may be set to zero.
  @param  Nmr_PeakContrib self
  @param  ApiFloat value
**/
void *Nmr_PeakContrib_SetWeight(Nmr_PeakContrib self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setWeight");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: cannot find method 'setWeight'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: method 'setWeight' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.PeakContrib.peakDimContribs

peakDimContribs that 
are possible assignments for the peak within a given PeakContrib. May 
belong to different dimensions

`
  @param  Nmr_PeakContrib self
  @returns   the result
**/
ApiList Nmr_PeakContrib_SortedPeakDimContribs(Nmr_PeakContrib self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedPeakDimContribs");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: cannot find method 'sortedPeakDimContribs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakContrib: method 'sortedPeakDimContribs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
