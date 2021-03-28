
#include "ccp.h"

/*
  PeakDim assignment contribution, one of the multiple assignments of a PeakDim. This is a connection record, connecting a PeakDim and a PeakContrib to a Resonance or a set of Resonances. Note that two different AbstractPeakDimContribs may have both the same PeakDim and the same Resonance. 
  
  If there is only one peakContrib (or none) for the relevant PeakDim, the peakContribs link defaults to the only PeakContrib possible, creating it if necessary. This is the normal case. Note that this makes peakContribs an optional input parameter to the PeakDimContrib constructor, even though each AbstractPeakDimContrib must have at least one PeakContrib.
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractPeakDimContrib self
  @param  Impl_ApplicationData value
**/
void *Nmr_AbstractPeakDimContrib_AddApplicationData(Nmr_AbstractPeakDimContrib self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractPeakDimContrib: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractPeakDimContrib: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.Nmr.AbstractPeakDimContrib.peakContribs

PeakContribs(s) 
within which the PeakDimContrib are possible assignments
  @param  Nmr_AbstractPeakDimContrib self
  @param  Nmr_PeakContrib value
**/
void *Nmr_AbstractPeakDimContrib_AddPeakContrib(Nmr_AbstractPeakDimContrib self, Nmr_PeakContrib value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addPeakContrib");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractPeakDimContrib: cannot find method 'addPeakContrib'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractPeakDimContrib: method 'addPeakContrib' is not callable");
  
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
  @param  Nmr_AbstractPeakDimContrib self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_AbstractPeakDimContrib_FindAllApplicationData(Nmr_AbstractPeakDimContrib self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractPeakDimContrib: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractPeakDimContrib: method 'findAllApplicationData' is not callable");
  
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
  @param  Nmr_AbstractPeakDimContrib self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_AbstractPeakDimContrib_FindAllApplicationData_keyval0(Nmr_AbstractPeakDimContrib self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_AbstractPeakDimContrib_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractPeakDimContrib self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_AbstractPeakDimContrib_FindAllApplicationData_keyval1(Nmr_AbstractPeakDimContrib self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_AbstractPeakDimContrib_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractPeakDimContrib self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_AbstractPeakDimContrib_FindAllApplicationData_keyval2(Nmr_AbstractPeakDimContrib self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_AbstractPeakDimContrib_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractPeakDimContrib self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_AbstractPeakDimContrib_FindAllApplicationData_keyval3(Nmr_AbstractPeakDimContrib self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_AbstractPeakDimContrib_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractPeakDimContrib self
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
ApiList Nmr_AbstractPeakDimContrib_FindAllApplicationData_keyval4(Nmr_AbstractPeakDimContrib self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_AbstractPeakDimContrib_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractPeakDimContrib.peakContribs

PeakContribs(s) within 
which the PeakDimContrib are possible assignments
  @param  Nmr_AbstractPeakDimContrib self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_AbstractPeakDimContrib_FindAllPeakContribs(Nmr_AbstractPeakDimContrib self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllPeakContribs");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractPeakDimContrib: cannot find method 'findAllPeakContribs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractPeakDimContrib: method 'findAllPeakContribs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractPeakDimContrib.peakContribs

PeakContribs(s) within 
which the PeakDimContrib are possible assignments
  @param  Nmr_AbstractPeakDimContrib self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_AbstractPeakDimContrib_FindAllPeakContribs_keyval0(Nmr_AbstractPeakDimContrib self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_AbstractPeakDimContrib_FindAllPeakContribs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractPeakDimContrib.peakContribs

PeakContribs(s) within 
which the PeakDimContrib are possible assignments
  @param  Nmr_AbstractPeakDimContrib self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_AbstractPeakDimContrib_FindAllPeakContribs_keyval1(Nmr_AbstractPeakDimContrib self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_AbstractPeakDimContrib_FindAllPeakContribs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractPeakDimContrib.peakContribs

PeakContribs(s) within 
which the PeakDimContrib are possible assignments
  @param  Nmr_AbstractPeakDimContrib self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_AbstractPeakDimContrib_FindAllPeakContribs_keyval2(Nmr_AbstractPeakDimContrib self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_AbstractPeakDimContrib_FindAllPeakContribs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractPeakDimContrib.peakContribs

PeakContribs(s) within 
which the PeakDimContrib are possible assignments
  @param  Nmr_AbstractPeakDimContrib self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_AbstractPeakDimContrib_FindAllPeakContribs_keyval3(Nmr_AbstractPeakDimContrib self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_AbstractPeakDimContrib_FindAllPeakContribs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractPeakDimContrib.peakContribs

PeakContribs(s) within 
which the PeakDimContrib are possible assignments
  @param  Nmr_AbstractPeakDimContrib self
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
ApiSet Nmr_AbstractPeakDimContrib_FindAllPeakContribs_keyval4(Nmr_AbstractPeakDimContrib self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_AbstractPeakDimContrib_FindAllPeakContribs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractPeakDimContrib self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_AbstractPeakDimContrib_FindFirstApplicationData(Nmr_AbstractPeakDimContrib self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractPeakDimContrib: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractPeakDimContrib: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nmr_AbstractPeakDimContrib self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_AbstractPeakDimContrib_FindFirstApplicationData_keyval0(Nmr_AbstractPeakDimContrib self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_AbstractPeakDimContrib_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractPeakDimContrib self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_AbstractPeakDimContrib_FindFirstApplicationData_keyval1(Nmr_AbstractPeakDimContrib self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_AbstractPeakDimContrib_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractPeakDimContrib self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_AbstractPeakDimContrib_FindFirstApplicationData_keyval2(Nmr_AbstractPeakDimContrib self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_AbstractPeakDimContrib_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractPeakDimContrib self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_AbstractPeakDimContrib_FindFirstApplicationData_keyval3(Nmr_AbstractPeakDimContrib self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_AbstractPeakDimContrib_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractPeakDimContrib self
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
Impl_ApplicationData Nmr_AbstractPeakDimContrib_FindFirstApplicationData_keyval4(Nmr_AbstractPeakDimContrib self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_AbstractPeakDimContrib_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractPeakDimContrib.peakContribs

PeakContribs(s) within 
which the PeakDimContrib are possible assignments
  @param  Nmr_AbstractPeakDimContrib self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakContrib Nmr_AbstractPeakDimContrib_FindFirstPeakContrib(Nmr_AbstractPeakDimContrib self, ApiMap conditions)
{
  
  Nmr_PeakContrib obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstPeakContrib");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractPeakDimContrib: cannot find method 'findFirstPeakContrib'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractPeakDimContrib: method 'findFirstPeakContrib' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractPeakDimContrib.peakContribs

PeakContribs(s) within 
which the PeakDimContrib are possible assignments
  @param  Nmr_AbstractPeakDimContrib self
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakContrib Nmr_AbstractPeakDimContrib_FindFirstPeakContrib_keyval0(Nmr_AbstractPeakDimContrib self)
{
  
  Nmr_PeakContrib  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_AbstractPeakDimContrib_FindFirstPeakContrib(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractPeakDimContrib.peakContribs

PeakContribs(s) within 
which the PeakDimContrib are possible assignments
  @param  Nmr_AbstractPeakDimContrib self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakContrib Nmr_AbstractPeakDimContrib_FindFirstPeakContrib_keyval1(Nmr_AbstractPeakDimContrib self, char * key, ApiObject value)
{
  
  Nmr_PeakContrib  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_AbstractPeakDimContrib_FindFirstPeakContrib(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractPeakDimContrib.peakContribs

PeakContribs(s) within 
which the PeakDimContrib are possible assignments
  @param  Nmr_AbstractPeakDimContrib self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakContrib Nmr_AbstractPeakDimContrib_FindFirstPeakContrib_keyval2(Nmr_AbstractPeakDimContrib self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_PeakContrib  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_AbstractPeakDimContrib_FindFirstPeakContrib(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractPeakDimContrib.peakContribs

PeakContribs(s) within 
which the PeakDimContrib are possible assignments
  @param  Nmr_AbstractPeakDimContrib self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakContrib Nmr_AbstractPeakDimContrib_FindFirstPeakContrib_keyval3(Nmr_AbstractPeakDimContrib self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_PeakContrib  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_AbstractPeakDimContrib_FindFirstPeakContrib(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractPeakDimContrib.peakContribs

PeakContribs(s) within 
which the PeakDimContrib are possible assignments
  @param  Nmr_AbstractPeakDimContrib self
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
Nmr_PeakContrib Nmr_AbstractPeakDimContrib_FindFirstPeakContrib_keyval4(Nmr_AbstractPeakDimContrib self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_PeakContrib  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_AbstractPeakDimContrib_FindFirstPeakContrib(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_AbstractPeakDimContrib self
  @returns   the result
**/
Acco_AccessObject Nmr_AbstractPeakDimContrib_GetAccess(Nmr_AbstractPeakDimContrib self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractPeakDimContrib: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractPeakDimContrib: method 'getAccess' is not callable");
  
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
  @param  Nmr_AbstractPeakDimContrib self
  @returns   the result
**/
ApiList Nmr_AbstractPeakDimContrib_GetApplicationData(Nmr_AbstractPeakDimContrib self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractPeakDimContrib: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractPeakDimContrib: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.Nmr.AbstractPeakDimContrib
  @param  Nmr_AbstractPeakDimContrib self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nmr_AbstractPeakDimContrib Nmr_AbstractPeakDimContrib_GetByKey(Nmr_AbstractPeakDimContrib self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Nmr_AbstractPeakDimContrib obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractPeakDimContrib: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractPeakDimContrib: method 'getByKey' is not callable");
  
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
  @param  Nmr_AbstractPeakDimContrib self
  @returns   the result
**/
ApiString Nmr_AbstractPeakDimContrib_GetClassName(Nmr_AbstractPeakDimContrib self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractPeakDimContrib: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractPeakDimContrib: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived attribute dim
  @param  Nmr_AbstractPeakDimContrib self
  @returns   the result
**/
ApiInteger Nmr_AbstractPeakDimContrib_GetDim(Nmr_AbstractPeakDimContrib self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractPeakDimContrib: cannot find method 'getDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractPeakDimContrib: method 'getDim' is not callable");
  
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
  @param  Nmr_AbstractPeakDimContrib self
  @returns   the result
**/
ApiList Nmr_AbstractPeakDimContrib_GetFieldNames(Nmr_AbstractPeakDimContrib self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractPeakDimContrib: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractPeakDimContrib: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.nmr.Nmr.AbstractPeakDimContrib
  @param  Nmr_AbstractPeakDimContrib self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Nmr_AbstractPeakDimContrib_GetFullKey(Nmr_AbstractPeakDimContrib self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractPeakDimContrib: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractPeakDimContrib: method 'getFullKey' is not callable");
  
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
  @param  Nmr_AbstractPeakDimContrib self
  @returns   the result
**/
ApiBoolean Nmr_AbstractPeakDimContrib_GetInConstructor(Nmr_AbstractPeakDimContrib self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractPeakDimContrib: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractPeakDimContrib: method 'getInConstructor' is not callable");
  
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
  @param  Nmr_AbstractPeakDimContrib self
  @returns   the result
**/
ApiBoolean Nmr_AbstractPeakDimContrib_GetIsDeleted(Nmr_AbstractPeakDimContrib self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractPeakDimContrib: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractPeakDimContrib: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.nmr.Nmr.AbstractPeakDimContrib
  @param  Nmr_AbstractPeakDimContrib self
  @returns  Local object key
**/
ApiObject Nmr_AbstractPeakDimContrib_GetLocalKey(Nmr_AbstractPeakDimContrib self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractPeakDimContrib: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractPeakDimContrib: method 'getLocalKey' is not callable");
  
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
  @param  Nmr_AbstractPeakDimContrib self
  @returns   the result
**/
ApiString Nmr_AbstractPeakDimContrib_GetPackageName(Nmr_AbstractPeakDimContrib self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractPeakDimContrib: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractPeakDimContrib: method 'getPackageName' is not callable");
  
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
  @param  Nmr_AbstractPeakDimContrib self
  @returns   the result
**/
ApiString Nmr_AbstractPeakDimContrib_GetPackageShortName(Nmr_AbstractPeakDimContrib self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractPeakDimContrib: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractPeakDimContrib: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.AbstractPeakDimContrib.parent

link to parent object 
- synonym for peakDim
  @param  Nmr_AbstractPeakDimContrib self
  @returns   the result
**/
Nmr_PeakDim Nmr_AbstractPeakDimContrib_GetParent(Nmr_AbstractPeakDimContrib self)
{
  
  Nmr_PeakDim obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractPeakDimContrib: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractPeakDimContrib: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.AbstractPeakDimContrib.peakContribs

PeakContribs(s) 
within which the PeakDimContrib are possible assignments
  @param  Nmr_AbstractPeakDimContrib self
  @returns   the result
**/
ApiSet Nmr_AbstractPeakDimContrib_GetPeakContribs(Nmr_AbstractPeakDimContrib self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPeakContribs");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractPeakDimContrib: cannot find method 'getPeakContribs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractPeakDimContrib: method 'getPeakContribs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.AbstractPeakDimContrib.peakDim

parent link
  @param  Nmr_AbstractPeakDimContrib self
  @returns   the result
**/
Nmr_PeakDim Nmr_AbstractPeakDimContrib_GetPeakDim(Nmr_AbstractPeakDimContrib self)
{
  
  Nmr_PeakDim obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPeakDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractPeakDimContrib: cannot find method 'getPeakDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractPeakDimContrib: method 'getPeakDim' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.nmr.Nmr.AbstractPeakDimContrib.peakDimComponent

PeakDimComponent to 
which this AbstractPeakDimContrib is attached. if it is attached to 
none, it belongs instead to teh main assignment component of the peak.
  @param  Nmr_AbstractPeakDimContrib self
  @returns   the result
**/
Nmr_PeakDimComponent Nmr_AbstractPeakDimContrib_GetPeakDimComponent(Nmr_AbstractPeakDimContrib self)
{
  
  Nmr_PeakDimComponent obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPeakDimComponent");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractPeakDimContrib: cannot find method 'getPeakDimComponent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractPeakDimContrib: method 'getPeakDimComponent' is not callable");
  
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
  @param  Nmr_AbstractPeakDimContrib self
  @returns   the result
**/
ApiString Nmr_AbstractPeakDimContrib_GetQualifiedName(Nmr_AbstractPeakDimContrib self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractPeakDimContrib: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractPeakDimContrib: method 'getQualifiedName' is not callable");
  
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
  @param  Nmr_AbstractPeakDimContrib self
  @returns   the result
**/
Impl_MemopsRoot Nmr_AbstractPeakDimContrib_GetRoot(Nmr_AbstractPeakDimContrib self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractPeakDimContrib: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractPeakDimContrib: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.AbstractPeakDimContrib.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmr_AbstractPeakDimContrib self
  @returns   the result
**/
ApiInteger Nmr_AbstractPeakDimContrib_GetSerial(Nmr_AbstractPeakDimContrib self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractPeakDimContrib: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractPeakDimContrib: method 'getSerial' is not callable");
  
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
  @param  Nmr_AbstractPeakDimContrib self
  @returns   the result
**/
Impl_TopObject Nmr_AbstractPeakDimContrib_GetTopObject(Nmr_AbstractPeakDimContrib self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractPeakDimContrib: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractPeakDimContrib: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractPeakDimContrib self
  @param  Impl_ApplicationData value
**/
void *Nmr_AbstractPeakDimContrib_RemoveApplicationData(Nmr_AbstractPeakDimContrib self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractPeakDimContrib: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractPeakDimContrib: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
ccp.nmr.Nmr.AbstractPeakDimContrib.peakContribs

PeakContribs(s) within 
which the PeakDimContrib are possible assignments
  @param  Nmr_AbstractPeakDimContrib self
  @param  Nmr_PeakContrib value
**/
void *Nmr_AbstractPeakDimContrib_RemovePeakContrib(Nmr_AbstractPeakDimContrib self, Nmr_PeakContrib value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removePeakContrib");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractPeakDimContrib: cannot find method 'removePeakContrib'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractPeakDimContrib: method 'removePeakContrib' is not callable");
  
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
  @param  Nmr_AbstractPeakDimContrib self
  @param  Acco_AccessObject value
**/
void *Nmr_AbstractPeakDimContrib_SetAccess(Nmr_AbstractPeakDimContrib self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractPeakDimContrib: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractPeakDimContrib: method 'setAccess' is not callable");
  
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
  @param  Nmr_AbstractPeakDimContrib self
  @param  ApiList values
**/
void *Nmr_AbstractPeakDimContrib_SetApplicationData(Nmr_AbstractPeakDimContrib self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractPeakDimContrib: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractPeakDimContrib: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.AbstractPeakDimContrib.peakContribs

PeakContribs(s) 
within which the PeakDimContrib are possible assignments
  @param  Nmr_AbstractPeakDimContrib self
  @param  ApiSet values
**/
void *Nmr_AbstractPeakDimContrib_SetPeakContribs(Nmr_AbstractPeakDimContrib self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPeakContribs");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractPeakDimContrib: cannot find method 'setPeakContribs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractPeakDimContrib: method 'setPeakContribs' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.nmr.Nmr.AbstractPeakDimContrib.peakDimComponent

PeakDimComponent to 
which this AbstractPeakDimContrib is attached. if it is attached to 
none, it belongs instead to teh main assignment component of the peak.
  @param  Nmr_AbstractPeakDimContrib self
  @param  Nmr_PeakDimComponent value
**/
void *Nmr_AbstractPeakDimContrib_SetPeakDimComponent(Nmr_AbstractPeakDimContrib self, Nmr_PeakDimComponent value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPeakDimComponent");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractPeakDimContrib: cannot find method 'setPeakDimComponent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractPeakDimContrib: method 'setPeakDimComponent' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.AbstractPeakDimContrib.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmr_AbstractPeakDimContrib self
  @param  ApiInteger value
**/
void *Nmr_AbstractPeakDimContrib_SetSerial(Nmr_AbstractPeakDimContrib self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractPeakDimContrib: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractPeakDimContrib: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.nmr.Nmr.AbstractPeakDimContrib.peakContribs

PeakContribs(s) within 
which the PeakDimContrib are possible assignments
  @param  Nmr_AbstractPeakDimContrib self
  @returns   the result
**/
ApiList Nmr_AbstractPeakDimContrib_SortedPeakContribs(Nmr_AbstractPeakDimContrib self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedPeakContribs");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AbstractPeakDimContrib: cannot find method 'sortedPeakContribs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AbstractPeakDimContrib: method 'sortedPeakContribs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
