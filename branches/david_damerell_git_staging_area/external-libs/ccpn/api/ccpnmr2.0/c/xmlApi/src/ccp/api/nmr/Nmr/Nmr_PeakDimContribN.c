
#include "ccp.h"

/*
  PeakDimContrib for cases where assignments are made to two or more Resonances (e.g. J couplings, multiple quantum coherences).
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakDimContribN self
  @param  Impl_ApplicationData value
**/
void *Nmr_PeakDimContribN_AddApplicationData(Nmr_PeakDimContribN self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: method 'addApplicationData' is not callable");
  
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
  @param  Nmr_PeakDimContribN self
  @param  Nmr_PeakContrib value
**/
void *Nmr_PeakDimContribN_AddPeakContrib(Nmr_PeakDimContribN self, Nmr_PeakContrib value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addPeakContrib");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: cannot find method 'addPeakContrib'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: method 'addPeakContrib' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.nmr.Nmr.PeakDimContribN
  @param  Nmr_PeakDimContribN self
  @param  ApiBoolean complete
**/
void *Nmr_PeakDimContribN_CheckAllValid(Nmr_PeakDimContribN self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.nmr.Nmr.PeakDimContribN
  @param  Nmr_PeakDimContribN self
  @param  ApiBoolean complete
**/
void *Nmr_PeakDimContribN_CheckValid(Nmr_PeakDimContribN self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: method 'checkValid' is not callable");
  
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
  @param  Nmr_PeakDimContribN self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_PeakDimContribN_FindAllApplicationData(Nmr_PeakDimContribN self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: method 'findAllApplicationData' is not callable");
  
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
  @param  Nmr_PeakDimContribN self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_PeakDimContribN_FindAllApplicationData_keyval0(Nmr_PeakDimContribN self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_PeakDimContribN_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakDimContribN self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_PeakDimContribN_FindAllApplicationData_keyval1(Nmr_PeakDimContribN self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_PeakDimContribN_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakDimContribN self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_PeakDimContribN_FindAllApplicationData_keyval2(Nmr_PeakDimContribN self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_PeakDimContribN_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakDimContribN self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_PeakDimContribN_FindAllApplicationData_keyval3(Nmr_PeakDimContribN self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_PeakDimContribN_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakDimContribN self
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
ApiList Nmr_PeakDimContribN_FindAllApplicationData_keyval4(Nmr_PeakDimContribN self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_PeakDimContribN_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractPeakDimContrib.peakContribs

PeakContribs(s) within 
which the PeakDimContrib are possible assignments
  @param  Nmr_PeakDimContribN self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PeakDimContribN_FindAllPeakContribs(Nmr_PeakDimContribN self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllPeakContribs");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: cannot find method 'findAllPeakContribs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: method 'findAllPeakContribs' is not callable");
  
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
  @param  Nmr_PeakDimContribN self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PeakDimContribN_FindAllPeakContribs_keyval0(Nmr_PeakDimContribN self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_PeakDimContribN_FindAllPeakContribs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractPeakDimContrib.peakContribs

PeakContribs(s) within 
which the PeakDimContrib are possible assignments
  @param  Nmr_PeakDimContribN self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PeakDimContribN_FindAllPeakContribs_keyval1(Nmr_PeakDimContribN self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_PeakDimContribN_FindAllPeakContribs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractPeakDimContrib.peakContribs

PeakContribs(s) within 
which the PeakDimContrib are possible assignments
  @param  Nmr_PeakDimContribN self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PeakDimContribN_FindAllPeakContribs_keyval2(Nmr_PeakDimContribN self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_PeakDimContribN_FindAllPeakContribs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractPeakDimContrib.peakContribs

PeakContribs(s) within 
which the PeakDimContrib are possible assignments
  @param  Nmr_PeakDimContribN self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PeakDimContribN_FindAllPeakContribs_keyval3(Nmr_PeakDimContribN self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_PeakDimContribN_FindAllPeakContribs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.AbstractPeakDimContrib.peakContribs

PeakContribs(s) within 
which the PeakDimContrib are possible assignments
  @param  Nmr_PeakDimContribN self
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
ApiSet Nmr_PeakDimContribN_FindAllPeakContribs_keyval4(Nmr_PeakDimContribN self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_PeakDimContribN_FindAllPeakContribs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.PeakDimContribN.resonances

Resonances assigned 
to PeakDimContribN. NBNB TBD uniquenes constraint should be added on 
link same as the link for the PeakDimContrib
  @param  Nmr_PeakDimContribN self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PeakDimContribN_FindAllResonances(Nmr_PeakDimContribN self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllResonances");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: cannot find method 'findAllResonances'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: method 'findAllResonances' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.PeakDimContribN.resonances

Resonances assigned 
to PeakDimContribN. NBNB TBD uniquenes constraint should be added on 
link same as the link for the PeakDimContrib
  @param  Nmr_PeakDimContribN self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PeakDimContribN_FindAllResonances_keyval0(Nmr_PeakDimContribN self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_PeakDimContribN_FindAllResonances(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.PeakDimContribN.resonances

Resonances assigned 
to PeakDimContribN. NBNB TBD uniquenes constraint should be added on 
link same as the link for the PeakDimContrib
  @param  Nmr_PeakDimContribN self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PeakDimContribN_FindAllResonances_keyval1(Nmr_PeakDimContribN self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_PeakDimContribN_FindAllResonances(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.PeakDimContribN.resonances

Resonances assigned 
to PeakDimContribN. NBNB TBD uniquenes constraint should be added on 
link same as the link for the PeakDimContrib
  @param  Nmr_PeakDimContribN self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PeakDimContribN_FindAllResonances_keyval2(Nmr_PeakDimContribN self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_PeakDimContribN_FindAllResonances(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.PeakDimContribN.resonances

Resonances assigned 
to PeakDimContribN. NBNB TBD uniquenes constraint should be added on 
link same as the link for the PeakDimContrib
  @param  Nmr_PeakDimContribN self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_PeakDimContribN_FindAllResonances_keyval3(Nmr_PeakDimContribN self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_PeakDimContribN_FindAllResonances(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.PeakDimContribN.resonances

Resonances assigned 
to PeakDimContribN. NBNB TBD uniquenes constraint should be added on 
link same as the link for the PeakDimContrib
  @param  Nmr_PeakDimContribN self
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
ApiSet Nmr_PeakDimContribN_FindAllResonances_keyval4(Nmr_PeakDimContribN self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_PeakDimContribN_FindAllResonances(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakDimContribN self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_PeakDimContribN_FindFirstApplicationData(Nmr_PeakDimContribN self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nmr_PeakDimContribN self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_PeakDimContribN_FindFirstApplicationData_keyval0(Nmr_PeakDimContribN self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_PeakDimContribN_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakDimContribN self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_PeakDimContribN_FindFirstApplicationData_keyval1(Nmr_PeakDimContribN self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_PeakDimContribN_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakDimContribN self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_PeakDimContribN_FindFirstApplicationData_keyval2(Nmr_PeakDimContribN self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_PeakDimContribN_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakDimContribN self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_PeakDimContribN_FindFirstApplicationData_keyval3(Nmr_PeakDimContribN self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_PeakDimContribN_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakDimContribN self
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
Impl_ApplicationData Nmr_PeakDimContribN_FindFirstApplicationData_keyval4(Nmr_PeakDimContribN self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_PeakDimContribN_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractPeakDimContrib.peakContribs

PeakContribs(s) within 
which the PeakDimContrib are possible assignments
  @param  Nmr_PeakDimContribN self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakContrib Nmr_PeakDimContribN_FindFirstPeakContrib(Nmr_PeakDimContribN self, ApiMap conditions)
{
  
  Nmr_PeakContrib obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstPeakContrib");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: cannot find method 'findFirstPeakContrib'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: method 'findFirstPeakContrib' is not callable");
  
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
  @param  Nmr_PeakDimContribN self
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakContrib Nmr_PeakDimContribN_FindFirstPeakContrib_keyval0(Nmr_PeakDimContribN self)
{
  
  Nmr_PeakContrib  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_PeakDimContribN_FindFirstPeakContrib(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractPeakDimContrib.peakContribs

PeakContribs(s) within 
which the PeakDimContrib are possible assignments
  @param  Nmr_PeakDimContribN self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakContrib Nmr_PeakDimContribN_FindFirstPeakContrib_keyval1(Nmr_PeakDimContribN self, char * key, ApiObject value)
{
  
  Nmr_PeakContrib  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_PeakDimContribN_FindFirstPeakContrib(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractPeakDimContrib.peakContribs

PeakContribs(s) within 
which the PeakDimContrib are possible assignments
  @param  Nmr_PeakDimContribN self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakContrib Nmr_PeakDimContribN_FindFirstPeakContrib_keyval2(Nmr_PeakDimContribN self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_PeakContrib  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_PeakDimContribN_FindFirstPeakContrib(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractPeakDimContrib.peakContribs

PeakContribs(s) within 
which the PeakDimContrib are possible assignments
  @param  Nmr_PeakDimContribN self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakContrib Nmr_PeakDimContribN_FindFirstPeakContrib_keyval3(Nmr_PeakDimContribN self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_PeakContrib  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_PeakDimContribN_FindFirstPeakContrib(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractPeakDimContrib.peakContribs

PeakContribs(s) within 
which the PeakDimContrib are possible assignments
  @param  Nmr_PeakDimContribN self
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
Nmr_PeakContrib Nmr_PeakDimContribN_FindFirstPeakContrib_keyval4(Nmr_PeakDimContribN self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_PeakContrib  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_PeakDimContribN_FindFirstPeakContrib(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.PeakDimContribN.resonances

Resonances 
assigned to PeakDimContribN. NBNB TBD uniquenes constraint should be 
added on link same as the link for the PeakDimContrib
  @param  Nmr_PeakDimContribN self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_Resonance Nmr_PeakDimContribN_FindFirstResonance(Nmr_PeakDimContribN self, ApiMap conditions)
{
  
  Nmr_Resonance obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstResonance");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: cannot find method 'findFirstResonance'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: method 'findFirstResonance' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.PeakDimContribN.resonances

Resonances 
assigned to PeakDimContribN. NBNB TBD uniquenes constraint should be 
added on link same as the link for the PeakDimContrib
  @param  Nmr_PeakDimContribN self
  @returns  the first value that satisfies the conditions 
**/
Nmr_Resonance Nmr_PeakDimContribN_FindFirstResonance_keyval0(Nmr_PeakDimContribN self)
{
  
  Nmr_Resonance  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_PeakDimContribN_FindFirstResonance(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.PeakDimContribN.resonances

Resonances 
assigned to PeakDimContribN. NBNB TBD uniquenes constraint should be 
added on link same as the link for the PeakDimContrib
  @param  Nmr_PeakDimContribN self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_Resonance Nmr_PeakDimContribN_FindFirstResonance_keyval1(Nmr_PeakDimContribN self, char * key, ApiObject value)
{
  
  Nmr_Resonance  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_PeakDimContribN_FindFirstResonance(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.PeakDimContribN.resonances

Resonances 
assigned to PeakDimContribN. NBNB TBD uniquenes constraint should be 
added on link same as the link for the PeakDimContrib
  @param  Nmr_PeakDimContribN self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_Resonance Nmr_PeakDimContribN_FindFirstResonance_keyval2(Nmr_PeakDimContribN self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_Resonance  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_PeakDimContribN_FindFirstResonance(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.PeakDimContribN.resonances

Resonances 
assigned to PeakDimContribN. NBNB TBD uniquenes constraint should be 
added on link same as the link for the PeakDimContrib
  @param  Nmr_PeakDimContribN self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_Resonance Nmr_PeakDimContribN_FindFirstResonance_keyval3(Nmr_PeakDimContribN self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_Resonance  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_PeakDimContribN_FindFirstResonance(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.PeakDimContribN.resonances

Resonances 
assigned to PeakDimContribN. NBNB TBD uniquenes constraint should be 
added on link same as the link for the PeakDimContrib
  @param  Nmr_PeakDimContribN self
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
Nmr_Resonance Nmr_PeakDimContribN_FindFirstResonance_keyval4(Nmr_PeakDimContribN self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_Resonance  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_PeakDimContribN_FindFirstResonance(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.nmr.Nmr.PeakDimContribN
  @param  Nmr_PeakDimContribN self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Nmr_PeakDimContribN_Get(Nmr_PeakDimContribN self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_PeakDimContribN self
  @returns   the result
**/
Acco_AccessObject Nmr_PeakDimContribN_GetAccess(Nmr_PeakDimContribN self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: method 'getAccess' is not callable");
  
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
  @param  Nmr_PeakDimContribN self
  @returns   the result
**/
ApiList Nmr_PeakDimContribN_GetApplicationData(Nmr_PeakDimContribN self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.Nmr.PeakDimContribN
  @param  Nmr_PeakDimContribN self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nmr_PeakDimContribN Nmr_PeakDimContribN_GetByKey(Nmr_PeakDimContribN self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Nmr_PeakDimContribN obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: method 'getByKey' is not callable");
  
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
  @param  Nmr_PeakDimContribN self
  @returns   the result
**/
ApiString Nmr_PeakDimContribN_GetClassName(Nmr_PeakDimContribN self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.AbstractPeakDimContrib.dim

Dimension number of 
PeakDimContrib
  @param  Nmr_PeakDimContribN self
  @returns   the result
**/
ApiInteger Nmr_PeakDimContribN_GetDim(Nmr_PeakDimContribN self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: cannot find method 'getDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: method 'getDim' is not callable");
  
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
  @param  Nmr_PeakDimContribN self
  @returns   the result
**/
ApiList Nmr_PeakDimContribN_GetFieldNames(Nmr_PeakDimContribN self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: method 'getFieldNames' is not callable");
  
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
  @param  Nmr_PeakDimContribN self
  @returns   the result
**/
ApiBoolean Nmr_PeakDimContribN_GetInConstructor(Nmr_PeakDimContribN self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: method 'getInConstructor' is not callable");
  
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
  @param  Nmr_PeakDimContribN self
  @returns   the result
**/
ApiBoolean Nmr_PeakDimContribN_GetIsDeleted(Nmr_PeakDimContribN self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: method 'getIsDeleted' is not callable");
  
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
  @param  Nmr_PeakDimContribN self
  @returns   the result
**/
ApiString Nmr_PeakDimContribN_GetPackageName(Nmr_PeakDimContribN self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: method 'getPackageName' is not callable");
  
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
  @param  Nmr_PeakDimContribN self
  @returns   the result
**/
ApiString Nmr_PeakDimContribN_GetPackageShortName(Nmr_PeakDimContribN self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: method 'getPackageShortName' is not callable");
  
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
  @param  Nmr_PeakDimContribN self
  @returns   the result
**/
Nmr_PeakDim Nmr_PeakDimContribN_GetParent(Nmr_PeakDimContribN self)
{
  
  Nmr_PeakDim obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: method 'getParent' is not callable");
  
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
  @param  Nmr_PeakDimContribN self
  @returns   the result
**/
ApiSet Nmr_PeakDimContribN_GetPeakContribs(Nmr_PeakDimContribN self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPeakContribs");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: cannot find method 'getPeakContribs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: method 'getPeakContribs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.AbstractPeakDimContrib.peakDim

parent link
  @param  Nmr_PeakDimContribN self
  @returns   the result
**/
Nmr_PeakDim Nmr_PeakDimContribN_GetPeakDim(Nmr_PeakDimContribN self)
{
  
  Nmr_PeakDim obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPeakDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: cannot find method 'getPeakDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: method 'getPeakDim' is not callable");
  
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
  @param  Nmr_PeakDimContribN self
  @returns   the result
**/
Nmr_PeakDimComponent Nmr_PeakDimContribN_GetPeakDimComponent(Nmr_PeakDimContribN self)
{
  
  Nmr_PeakDimComponent obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPeakDimComponent");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: cannot find method 'getPeakDimComponent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: method 'getPeakDimComponent' is not callable");
  
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
  @param  Nmr_PeakDimContribN self
  @returns   the result
**/
ApiString Nmr_PeakDimContribN_GetQualifiedName(Nmr_PeakDimContribN self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.PeakDimContribN.resonances

Resonances assigned to 
PeakDimContribN. NBNB TBD uniquenes constraint should be added on link 
same as the link for the PeakDimContrib
  @param  Nmr_PeakDimContribN self
  @returns   the result
**/
ApiSet Nmr_PeakDimContribN_GetResonances(Nmr_PeakDimContribN self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getResonances");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: cannot find method 'getResonances'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: method 'getResonances' is not callable");
  
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
  @param  Nmr_PeakDimContribN self
  @returns   the result
**/
Impl_MemopsRoot Nmr_PeakDimContribN_GetRoot(Nmr_PeakDimContribN self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: method 'getRoot' is not callable");
  
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
  @param  Nmr_PeakDimContribN self
  @returns   the result
**/
ApiInteger Nmr_PeakDimContribN_GetSerial(Nmr_PeakDimContribN self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: method 'getSerial' is not callable");
  
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
  @param  Nmr_PeakDimContribN self
  @returns   the result
**/
Impl_TopObject Nmr_PeakDimContribN_GetTopObject(Nmr_PeakDimContribN self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.nmr.Nmr.PeakDimContribN
  @param  Nmr_PeakDim parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_PeakDimContribN Nmr_PeakDimContribN_Init(Nmr_PeakDim parent, ApiMap attrlinks)
{
  
  return Nmr_PeakDim_NewPeakDimContribN(parent, attrlinks);
}

/**
  Constructor for ccp.nmr.Nmr.PeakDimContribN
  @param  Nmr_PeakDim parent
  @param  ApiSet peakContribs
  @param  ApiSet resonances
  @returns  the new object
**/
Nmr_PeakDimContribN Nmr_PeakDimContribN_Init_reqd(Nmr_PeakDim parent, ApiSet peakContribs, ApiSet resonances)
{
  
  Nmr_PeakDimContribN  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "peakContribs", peakContribs);
  PyDict_SetItemString(attrlinks, "resonances", resonances);
  
  obj = Nmr_PeakDimContribN_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakDimContribN self
  @param  Impl_ApplicationData value
**/
void *Nmr_PeakDimContribN_RemoveApplicationData(Nmr_PeakDimContribN self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: method 'removeApplicationData' is not callable");
  
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
  @param  Nmr_PeakDimContribN self
  @param  Nmr_PeakContrib value
**/
void *Nmr_PeakDimContribN_RemovePeakContrib(Nmr_PeakDimContribN self, Nmr_PeakContrib value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removePeakContrib");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: cannot find method 'removePeakContrib'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: method 'removePeakContrib' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.nmr.Nmr.PeakDimContribN
  @param  Nmr_PeakDimContribN self
  @param  ApiString name
  @param  ApiObject value
**/
void *Nmr_PeakDimContribN_Set(Nmr_PeakDimContribN self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_PeakDimContribN self
  @param  Acco_AccessObject value
**/
void *Nmr_PeakDimContribN_SetAccess(Nmr_PeakDimContribN self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: method 'setAccess' is not callable");
  
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
  @param  Nmr_PeakDimContribN self
  @param  ApiList values
**/
void *Nmr_PeakDimContribN_SetApplicationData(Nmr_PeakDimContribN self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: method 'setApplicationData' is not callable");
  
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
  @param  Nmr_PeakDimContribN self
  @param  ApiSet values
**/
void *Nmr_PeakDimContribN_SetPeakContribs(Nmr_PeakDimContribN self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPeakContribs");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: cannot find method 'setPeakContribs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: method 'setPeakContribs' is not callable");
  
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
  @param  Nmr_PeakDimContribN self
  @param  Nmr_PeakDimComponent value
**/
void *Nmr_PeakDimContribN_SetPeakDimComponent(Nmr_PeakDimContribN self, Nmr_PeakDimComponent value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPeakDimComponent");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: cannot find method 'setPeakDimComponent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: method 'setPeakDimComponent' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.PeakDimContribN.resonances

Resonances assigned to 
PeakDimContribN. NBNB TBD uniquenes constraint should be added on link 
same as the link for the PeakDimContrib
  @param  Nmr_PeakDimContribN self
  @param  ApiSet values
**/
void *Nmr_PeakDimContribN_SetResonances(Nmr_PeakDimContribN self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setResonances");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: cannot find method 'setResonances'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: method 'setResonances' is not callable");
  
  args = PyTuple_Pack(1, values);
  
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
  @param  Nmr_PeakDimContribN self
  @param  ApiInteger value
**/
void *Nmr_PeakDimContribN_SetSerial(Nmr_PeakDimContribN self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: method 'setSerial' is not callable");
  
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
  @param  Nmr_PeakDimContribN self
  @returns   the result
**/
ApiList Nmr_PeakDimContribN_SortedPeakContribs(Nmr_PeakDimContribN self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedPeakContribs");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: cannot find method 'sortedPeakContribs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: method 'sortedPeakContribs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.PeakDimContribN.resonances

Resonances assigned 
to PeakDimContribN. NBNB TBD uniquenes constraint should be added on 
link same as the link for the PeakDimContrib
  @param  Nmr_PeakDimContribN self
  @returns   the result
**/
ApiList Nmr_PeakDimContribN_SortedResonances(Nmr_PeakDimContribN self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedResonances");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: cannot find method 'sortedResonances'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.PeakDimContribN: method 'sortedResonances' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
