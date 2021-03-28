
#include "ccp.h"

/*
  An Atom site on the graph of atoms through which magnetisation passes in an experiment. If there is more than one ExpGraph, each AtomSite may be relevant for one or more of these. The AtomSite may be given even if it is never a carrier of magnetisation, for instance to show that coupling to a given nucleus is used for filtering during an experiment.
*/

/* package ccp.api.nmr.NmrExpPrototype */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_AtomSite self
  @param  Impl_ApplicationData value
**/
void *Nmrx_AtomSite_AddApplicationData(Nmrx_AtomSite self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for 
ccp.nmr.NmrExpPrototype.AtomSite.expMeasurements

ExpMeasurements 
involving AtomSite
  @param  Nmrx_AtomSite self
  @param  Nmrx_ExpMeasurement value
**/
void *Nmrx_AtomSite_AddExpMeasurement(Nmrx_AtomSite self, Nmrx_ExpMeasurement value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addExpMeasurement");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: cannot find method 'addExpMeasurement'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: method 'addExpMeasurement' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.nmr.NmrExpPrototype.AtomSite
  @param  Nmrx_AtomSite self
  @param  ApiBoolean complete
**/
void *Nmrx_AtomSite_CheckAllValid(Nmrx_AtomSite self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.nmr.NmrExpPrototype.AtomSite
  @param  Nmrx_AtomSite self
  @param  ApiBoolean complete
**/
void *Nmrx_AtomSite_CheckValid(Nmrx_AtomSite self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: method 'checkValid' is not callable");
  
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
  @param  Nmrx_AtomSite self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrx_AtomSite_FindAllApplicationData(Nmrx_AtomSite self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: method 'findAllApplicationData' is not callable");
  
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
  @param  Nmrx_AtomSite self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrx_AtomSite_FindAllApplicationData_keyval0(Nmrx_AtomSite self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrx_AtomSite_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_AtomSite self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrx_AtomSite_FindAllApplicationData_keyval1(Nmrx_AtomSite self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrx_AtomSite_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_AtomSite self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrx_AtomSite_FindAllApplicationData_keyval2(Nmrx_AtomSite self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrx_AtomSite_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_AtomSite self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrx_AtomSite_FindAllApplicationData_keyval3(Nmrx_AtomSite self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrx_AtomSite_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_AtomSite self
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
ApiList Nmrx_AtomSite_FindAllApplicationData_keyval4(Nmrx_AtomSite self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrx_AtomSite_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.AtomSite.expGraphs

ExpGraphs whre 
AtomSite appears
  @param  Nmrx_AtomSite self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_AtomSite_FindAllExpGraphs(Nmrx_AtomSite self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllExpGraphs");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: cannot find method 'findAllExpGraphs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: method 'findAllExpGraphs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.AtomSite.expGraphs

ExpGraphs whre 
AtomSite appears
  @param  Nmrx_AtomSite self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_AtomSite_FindAllExpGraphs_keyval0(Nmrx_AtomSite self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrx_AtomSite_FindAllExpGraphs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.AtomSite.expGraphs

ExpGraphs whre 
AtomSite appears
  @param  Nmrx_AtomSite self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_AtomSite_FindAllExpGraphs_keyval1(Nmrx_AtomSite self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrx_AtomSite_FindAllExpGraphs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.AtomSite.expGraphs

ExpGraphs whre 
AtomSite appears
  @param  Nmrx_AtomSite self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_AtomSite_FindAllExpGraphs_keyval2(Nmrx_AtomSite self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrx_AtomSite_FindAllExpGraphs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.AtomSite.expGraphs

ExpGraphs whre 
AtomSite appears
  @param  Nmrx_AtomSite self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_AtomSite_FindAllExpGraphs_keyval3(Nmrx_AtomSite self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrx_AtomSite_FindAllExpGraphs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.AtomSite.expGraphs

ExpGraphs whre 
AtomSite appears
  @param  Nmrx_AtomSite self
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
ApiSet Nmrx_AtomSite_FindAllExpGraphs_keyval4(Nmrx_AtomSite self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrx_AtomSite_FindAllExpGraphs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrExpPrototype.AtomSite.expMeasurements

ExpMeasurements 
involving AtomSite
  @param  Nmrx_AtomSite self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_AtomSite_FindAllExpMeasurements(Nmrx_AtomSite self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllExpMeasurements");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: cannot find method 'findAllExpMeasurements'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: method 'findAllExpMeasurements' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrExpPrototype.AtomSite.expMeasurements

ExpMeasurements 
involving AtomSite
  @param  Nmrx_AtomSite self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_AtomSite_FindAllExpMeasurements_keyval0(Nmrx_AtomSite self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrx_AtomSite_FindAllExpMeasurements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrExpPrototype.AtomSite.expMeasurements

ExpMeasurements 
involving AtomSite
  @param  Nmrx_AtomSite self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_AtomSite_FindAllExpMeasurements_keyval1(Nmrx_AtomSite self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrx_AtomSite_FindAllExpMeasurements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrExpPrototype.AtomSite.expMeasurements

ExpMeasurements 
involving AtomSite
  @param  Nmrx_AtomSite self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_AtomSite_FindAllExpMeasurements_keyval2(Nmrx_AtomSite self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrx_AtomSite_FindAllExpMeasurements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrExpPrototype.AtomSite.expMeasurements

ExpMeasurements 
involving AtomSite
  @param  Nmrx_AtomSite self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_AtomSite_FindAllExpMeasurements_keyval3(Nmrx_AtomSite self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrx_AtomSite_FindAllExpMeasurements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrExpPrototype.AtomSite.expMeasurements

ExpMeasurements 
involving AtomSite
  @param  Nmrx_AtomSite self
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
ApiSet Nmrx_AtomSite_FindAllExpMeasurements_keyval4(Nmrx_AtomSite self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrx_AtomSite_FindAllExpMeasurements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.AtomSite.expTransfers

Magnetisation 
transfer (non-directional) connecting two AtomSites
  @param  Nmrx_AtomSite self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_AtomSite_FindAllExpTransfers(Nmrx_AtomSite self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllExpTransfers");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: cannot find method 'findAllExpTransfers'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: method 'findAllExpTransfers' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.AtomSite.expTransfers

Magnetisation 
transfer (non-directional) connecting two AtomSites
  @param  Nmrx_AtomSite self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_AtomSite_FindAllExpTransfers_keyval0(Nmrx_AtomSite self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrx_AtomSite_FindAllExpTransfers(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.AtomSite.expTransfers

Magnetisation 
transfer (non-directional) connecting two AtomSites
  @param  Nmrx_AtomSite self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_AtomSite_FindAllExpTransfers_keyval1(Nmrx_AtomSite self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrx_AtomSite_FindAllExpTransfers(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.AtomSite.expTransfers

Magnetisation 
transfer (non-directional) connecting two AtomSites
  @param  Nmrx_AtomSite self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_AtomSite_FindAllExpTransfers_keyval2(Nmrx_AtomSite self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrx_AtomSite_FindAllExpTransfers(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.AtomSite.expTransfers

Magnetisation 
transfer (non-directional) connecting two AtomSites
  @param  Nmrx_AtomSite self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_AtomSite_FindAllExpTransfers_keyval3(Nmrx_AtomSite self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrx_AtomSite_FindAllExpTransfers(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.AtomSite.expTransfers

Magnetisation 
transfer (non-directional) connecting two AtomSites
  @param  Nmrx_AtomSite self
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
ApiSet Nmrx_AtomSite_FindAllExpTransfers_keyval4(Nmrx_AtomSite self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrx_AtomSite_FindAllExpTransfers(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_AtomSite self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrx_AtomSite_FindFirstApplicationData(Nmrx_AtomSite self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nmrx_AtomSite self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrx_AtomSite_FindFirstApplicationData_keyval0(Nmrx_AtomSite self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrx_AtomSite_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_AtomSite self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrx_AtomSite_FindFirstApplicationData_keyval1(Nmrx_AtomSite self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrx_AtomSite_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_AtomSite self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrx_AtomSite_FindFirstApplicationData_keyval2(Nmrx_AtomSite self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrx_AtomSite_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_AtomSite self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrx_AtomSite_FindFirstApplicationData_keyval3(Nmrx_AtomSite self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrx_AtomSite_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_AtomSite self
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
Impl_ApplicationData Nmrx_AtomSite_FindFirstApplicationData_keyval4(Nmrx_AtomSite self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrx_AtomSite_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrExpPrototype.AtomSite.expGraphs

ExpGraphs whre 
AtomSite appears
  @param  Nmrx_AtomSite self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmrx_ExpGraph Nmrx_AtomSite_FindFirstExpGraph(Nmrx_AtomSite self, ApiMap conditions)
{
  
  Nmrx_ExpGraph obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstExpGraph");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: cannot find method 'findFirstExpGraph'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: method 'findFirstExpGraph' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrExpPrototype.AtomSite.expGraphs

ExpGraphs whre 
AtomSite appears
  @param  Nmrx_AtomSite self
  @returns  the first value that satisfies the conditions 
**/
Nmrx_ExpGraph Nmrx_AtomSite_FindFirstExpGraph_keyval0(Nmrx_AtomSite self)
{
  
  Nmrx_ExpGraph  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrx_AtomSite_FindFirstExpGraph(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrExpPrototype.AtomSite.expGraphs

ExpGraphs whre 
AtomSite appears
  @param  Nmrx_AtomSite self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmrx_ExpGraph Nmrx_AtomSite_FindFirstExpGraph_keyval1(Nmrx_AtomSite self, char * key, ApiObject value)
{
  
  Nmrx_ExpGraph  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrx_AtomSite_FindFirstExpGraph(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrExpPrototype.AtomSite.expGraphs

ExpGraphs whre 
AtomSite appears
  @param  Nmrx_AtomSite self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmrx_ExpGraph Nmrx_AtomSite_FindFirstExpGraph_keyval2(Nmrx_AtomSite self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmrx_ExpGraph  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrx_AtomSite_FindFirstExpGraph(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrExpPrototype.AtomSite.expGraphs

ExpGraphs whre 
AtomSite appears
  @param  Nmrx_AtomSite self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmrx_ExpGraph Nmrx_AtomSite_FindFirstExpGraph_keyval3(Nmrx_AtomSite self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmrx_ExpGraph  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrx_AtomSite_FindFirstExpGraph(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrExpPrototype.AtomSite.expGraphs

ExpGraphs whre 
AtomSite appears
  @param  Nmrx_AtomSite self
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
Nmrx_ExpGraph Nmrx_AtomSite_FindFirstExpGraph_keyval4(Nmrx_AtomSite self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmrx_ExpGraph  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrx_AtomSite_FindFirstExpGraph(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.AtomSite.expMeasurements

ExpMeasurements 
involving AtomSite
  @param  Nmrx_AtomSite self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmrx_ExpMeasurement Nmrx_AtomSite_FindFirstExpMeasurement(Nmrx_AtomSite self, ApiMap conditions)
{
  
  Nmrx_ExpMeasurement obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstExpMeasurement");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: cannot find method 'findFirstExpMeasurement'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: method 'findFirstExpMeasurement' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.AtomSite.expMeasurements

ExpMeasurements 
involving AtomSite
  @param  Nmrx_AtomSite self
  @returns  the first value that satisfies the conditions 
**/
Nmrx_ExpMeasurement Nmrx_AtomSite_FindFirstExpMeasurement_keyval0(Nmrx_AtomSite self)
{
  
  Nmrx_ExpMeasurement  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrx_AtomSite_FindFirstExpMeasurement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.AtomSite.expMeasurements

ExpMeasurements 
involving AtomSite
  @param  Nmrx_AtomSite self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmrx_ExpMeasurement Nmrx_AtomSite_FindFirstExpMeasurement_keyval1(Nmrx_AtomSite self, char * key, ApiObject value)
{
  
  Nmrx_ExpMeasurement  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrx_AtomSite_FindFirstExpMeasurement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.AtomSite.expMeasurements

ExpMeasurements 
involving AtomSite
  @param  Nmrx_AtomSite self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmrx_ExpMeasurement Nmrx_AtomSite_FindFirstExpMeasurement_keyval2(Nmrx_AtomSite self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmrx_ExpMeasurement  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrx_AtomSite_FindFirstExpMeasurement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.AtomSite.expMeasurements

ExpMeasurements 
involving AtomSite
  @param  Nmrx_AtomSite self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmrx_ExpMeasurement Nmrx_AtomSite_FindFirstExpMeasurement_keyval3(Nmrx_AtomSite self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmrx_ExpMeasurement  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrx_AtomSite_FindFirstExpMeasurement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.AtomSite.expMeasurements

ExpMeasurements 
involving AtomSite
  @param  Nmrx_AtomSite self
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
Nmrx_ExpMeasurement Nmrx_AtomSite_FindFirstExpMeasurement_keyval4(Nmrx_AtomSite self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmrx_ExpMeasurement  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrx_AtomSite_FindFirstExpMeasurement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.AtomSite.expTransfers

Magnetisation transfer 
(non-directional) connecting two AtomSites
  @param  Nmrx_AtomSite self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmrx_ExpTransfer Nmrx_AtomSite_FindFirstExpTransfer(Nmrx_AtomSite self, ApiMap conditions)
{
  
  Nmrx_ExpTransfer obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstExpTransfer");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: cannot find method 'findFirstExpTransfer'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: method 'findFirstExpTransfer' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.AtomSite.expTransfers

Magnetisation transfer 
(non-directional) connecting two AtomSites
  @param  Nmrx_AtomSite self
  @returns  the first value that satisfies the conditions 
**/
Nmrx_ExpTransfer Nmrx_AtomSite_FindFirstExpTransfer_keyval0(Nmrx_AtomSite self)
{
  
  Nmrx_ExpTransfer  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrx_AtomSite_FindFirstExpTransfer(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.AtomSite.expTransfers

Magnetisation transfer 
(non-directional) connecting two AtomSites
  @param  Nmrx_AtomSite self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmrx_ExpTransfer Nmrx_AtomSite_FindFirstExpTransfer_keyval1(Nmrx_AtomSite self, char * key, ApiObject value)
{
  
  Nmrx_ExpTransfer  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrx_AtomSite_FindFirstExpTransfer(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.AtomSite.expTransfers

Magnetisation transfer 
(non-directional) connecting two AtomSites
  @param  Nmrx_AtomSite self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmrx_ExpTransfer Nmrx_AtomSite_FindFirstExpTransfer_keyval2(Nmrx_AtomSite self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmrx_ExpTransfer  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrx_AtomSite_FindFirstExpTransfer(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.AtomSite.expTransfers

Magnetisation transfer 
(non-directional) connecting two AtomSites
  @param  Nmrx_AtomSite self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmrx_ExpTransfer Nmrx_AtomSite_FindFirstExpTransfer_keyval3(Nmrx_AtomSite self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmrx_ExpTransfer  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrx_AtomSite_FindFirstExpTransfer(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.AtomSite.expTransfers

Magnetisation transfer 
(non-directional) connecting two AtomSites
  @param  Nmrx_AtomSite self
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
Nmrx_ExpTransfer Nmrx_AtomSite_FindFirstExpTransfer_keyval4(Nmrx_AtomSite self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmrx_ExpTransfer  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrx_AtomSite_FindFirstExpTransfer(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.nmr.NmrExpPrototype.AtomSite
  @param  Nmrx_AtomSite self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Nmrx_AtomSite_Get(Nmrx_AtomSite self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrx_AtomSite self
  @returns   the result
**/
Acco_AccessObject Nmrx_AtomSite_GetAccess(Nmrx_AtomSite self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: method 'getAccess' is not callable");
  
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
  @param  Nmrx_AtomSite self
  @returns   the result
**/
Acco_AccessObject Nmrx_AtomSite_GetActiveAccess(Nmrx_AtomSite self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: method 'getActiveAccess' is not callable");
  
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
  @param  Nmrx_AtomSite self
  @returns   the result
**/
ApiList Nmrx_AtomSite_GetApplicationData(Nmrx_AtomSite self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.NmrExpPrototype.AtomSite
  @param  Nmrx_AtomSite self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nmrx_AtomSite Nmrx_AtomSite_GetByKey(Nmrx_AtomSite self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Nmrx_AtomSite obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: method 'getByKey' is not callable");
  
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
  @param  Nmrx_AtomSite self
  @returns   the result
**/
ApiString Nmrx_AtomSite_GetClassName(Nmrx_AtomSite self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived link expGraphs
  @param  Nmrx_AtomSite self
  @returns   the result
**/
ApiSet Nmrx_AtomSite_GetExpGraphs(Nmrx_AtomSite self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExpGraphs");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: cannot find method 'getExpGraphs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: method 'getExpGraphs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.nmr.NmrExpPrototype.AtomSite.expMeasurements

ExpMeasurements 
involving AtomSite
  @param  Nmrx_AtomSite self
  @returns   the result
**/
ApiSet Nmrx_AtomSite_GetExpMeasurements(Nmrx_AtomSite self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExpMeasurements");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: cannot find method 'getExpMeasurements'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: method 'getExpMeasurements' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrExpPrototype.AtomSite.expTransfers

Magnetisation 
transfer (non-directional) connecting two AtomSites
  @param  Nmrx_AtomSite self
  @returns   the result
**/
ApiSet Nmrx_AtomSite_GetExpTransfers(Nmrx_AtomSite self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExpTransfers");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: cannot find method 'getExpTransfers'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: method 'getExpTransfers' is not callable");
  
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
  @param  Nmrx_AtomSite self
  @returns   the result
**/
ApiList Nmrx_AtomSite_GetFieldNames(Nmrx_AtomSite self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.nmr.NmrExpPrototype.AtomSite
  @param  Nmrx_AtomSite self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Nmrx_AtomSite_GetFullKey(Nmrx_AtomSite self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: method 'getFullKey' is not callable");
  
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
  @param  Nmrx_AtomSite self
  @returns   the result
**/
ApiBoolean Nmrx_AtomSite_GetInConstructor(Nmrx_AtomSite self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: method 'getInConstructor' is not callable");
  
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
  @param  Nmrx_AtomSite self
  @returns   the result
**/
ApiBoolean Nmrx_AtomSite_GetIsDeleted(Nmrx_AtomSite self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived link isotopes
  @param  Nmrx_AtomSite self
  @returns   the result
**/
Chel_Isotope Nmrx_AtomSite_GetIsotope(Nmrx_AtomSite self)
{
  
  Chel_Isotope obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsotope");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: cannot find method 'getIsotope'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: method 'getIsotope' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrExpPrototype.AtomSite.isotopeCode

Isotope code for 
Isotope making up the ExpAtomSite
  @param  Nmrx_AtomSite self
  @returns   the result
**/
ApiString Nmrx_AtomSite_GetIsotopeCode(Nmrx_AtomSite self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsotopeCode");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: cannot find method 'getIsotopeCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: method 'getIsotopeCode' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.nmr.NmrExpPrototype.AtomSite
  @param  Nmrx_AtomSite self
  @returns  Local object key
**/
ApiObject Nmrx_AtomSite_GetLocalKey(Nmrx_AtomSite self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrExpPrototype.AtomSite.maxNumber

Maximum number of 
occurrences of atom corresponding to atomSite. maxNumber 2 would mena no 
more than two atoms could appear in this position. If, for instance a 
carbon atomSite has a J coupling transfer to a proton AtomSite with 
maxNumber=2, it means that this ExpGraph will give no observable result 
for CH3 groups. May be set to zero, which indicates that no atoms of 
this type are allowed.
  @param  Nmrx_AtomSite self
  @returns   the result
**/
ApiInteger Nmrx_AtomSite_GetMaxNumber(Nmrx_AtomSite self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMaxNumber");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: cannot find method 'getMaxNumber'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: method 'getMaxNumber' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrExpPrototype.AtomSite.maxShift

maximum value of 
shift allowed for AtomSite, in ppm. Is not set in normal cases. Together 
with minShift serves to distinguish frequency-selective sites. For some 
common cases it is recommended to use standard limits :
Aliphatic 
carbon: <90ppm
Aromatic carbon: 90-150ppm
CO carbon: > 150ppm
CA (for 
proteins): 40-90ppm
  @param  Nmrx_AtomSite self
  @returns   the result
**/
ApiFloat Nmrx_AtomSite_GetMaxShift(Nmrx_AtomSite self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMaxShift");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: cannot find method 'getMaxShift'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: method 'getMaxShift' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrExpPrototype.AtomSite.minNumber

Minimum number of 
occurrences of atom corresponding to atomSite. MinNumber two wiould mean 
at least two atoms. If, for instance a carbon atomSite has a J coupling 
transfer to a proton AtomSite with minNumber=2, it means that this 
ExpGraph will give observable results only for CH2 and  CH3 groups.
  @param  Nmrx_AtomSite self
  @returns   the result
**/
ApiInteger Nmrx_AtomSite_GetMinNumber(Nmrx_AtomSite self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMinNumber");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: cannot find method 'getMinNumber'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: method 'getMinNumber' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrExpPrototype.AtomSite.minShift

minimum value of 
shift allowed for AtomSite, in ppm. Is not set in normal cases. Together 
with maxShift serves to distinguish frequency-selective sites. The most 
common use is for distinguishing CO, aliphatic carbon, and 'just' 
carbon.
Aliphatic carbon: <90ppm
Aromatic carbon: 90-150ppm
CO carbon: > 
150ppm
CA (for proteins): 40-90ppm
  @param  Nmrx_AtomSite self
  @returns   the result
**/
ApiFloat Nmrx_AtomSite_GetMinShift(Nmrx_AtomSite self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMinShift");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: cannot find method 'getMinShift'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: method 'getMinShift' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrExpPrototype.AtomSite.name

A short string to be used 
in generating experiment names. If the attribute is not set, the nucleus 
symbol should be used. Examples of names would be 'CO', 'CA', for e.g. 
HNCOCA.Note that the name does not have to match with protein or any 
other naming conventions (proteins use 'C', where we might use 'CO').
  @param  Nmrx_AtomSite self
  @returns   the result
**/
ApiString Nmrx_AtomSite_GetName(Nmrx_AtomSite self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: method 'getName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrExpPrototype.AtomSite.nmrExpPrototype

parent link
  @param  Nmrx_AtomSite self
  @returns   the result
**/
Nmrx_NmrExpPrototype Nmrx_AtomSite_GetNmrExpPrototype(Nmrx_AtomSite self)
{
  
  Nmrx_NmrExpPrototype obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrExpPrototype");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: cannot find method 'getNmrExpPrototype'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: method 'getNmrExpPrototype' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrExpPrototype.AtomSite.numberStep

Integer step 
between allowed number of occurrences of atoms corresponding to this 
atomSite. If, for instance a carbon atomSite has a J coupling transfer 
to a proton AtomSite with minNumber=1 and numberStep = 2, there must be 
1, 3, 5, ... atoms corresponding to the AtomSite. Uased for instance to 
indicate 'carbon coupled to an odd number of protons', where you would 
have a carbon AtomSite, with a JCoupling ExpTransfer to a proton 
AtomSite witn minNumber 1 and numberStep 2.
  @param  Nmrx_AtomSite self
  @returns   the result
**/
ApiInteger Nmrx_AtomSite_GetNumberStep(Nmrx_AtomSite self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNumberStep");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: cannot find method 'getNumberStep'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: method 'getNumberStep' is not callable");
  
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
  @param  Nmrx_AtomSite self
  @returns   the result
**/
ApiString Nmrx_AtomSite_GetPackageName(Nmrx_AtomSite self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: method 'getPackageName' is not callable");
  
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
  @param  Nmrx_AtomSite self
  @returns   the result
**/
ApiString Nmrx_AtomSite_GetPackageShortName(Nmrx_AtomSite self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrExpPrototype.AtomSite.parent

link to parent object - 
synonym for nmrExpPrototype
  @param  Nmrx_AtomSite self
  @returns   the result
**/
Nmrx_NmrExpPrototype Nmrx_AtomSite_GetParent(Nmrx_AtomSite self)
{
  
  Nmrx_NmrExpPrototype obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: method 'getParent' is not callable");
  
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
  @param  Nmrx_AtomSite self
  @returns   the result
**/
ApiString Nmrx_AtomSite_GetQualifiedName(Nmrx_AtomSite self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: method 'getQualifiedName' is not callable");
  
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
  @param  Nmrx_AtomSite self
  @returns   the result
**/
Impl_MemopsRoot Nmrx_AtomSite_GetRoot(Nmrx_AtomSite self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrExpPrototype.AtomSite.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmrx_AtomSite self
  @returns   the result
**/
ApiInteger Nmrx_AtomSite_GetSerial(Nmrx_AtomSite self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: method 'getSerial' is not callable");
  
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
  @param  Nmrx_AtomSite self
  @returns   the result
**/
Impl_TopObject Nmrx_AtomSite_GetTopObject(Nmrx_AtomSite self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.nmr.NmrExpPrototype.AtomSite
  @param  Nmrx_NmrExpPrototype parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmrx_AtomSite Nmrx_AtomSite_Init(Nmrx_NmrExpPrototype parent, ApiMap attrlinks)
{
  
  return Nmrx_NmrExpPrototype_NewAtomSite(parent, attrlinks);
}

/**
  Constructor for ccp.nmr.NmrExpPrototype.AtomSite
  @param  Nmrx_NmrExpPrototype parent
  @param  char * isotopeCode
  @returns  the new object
**/
Nmrx_AtomSite Nmrx_AtomSite_Init_reqd(Nmrx_NmrExpPrototype parent, char * isotopeCode)
{
  
  Nmrx_AtomSite  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__isotopeCode = ApiString_New(isotopeCode);

  PyDict_SetItemString(attrlinks, "isotopeCode", api__isotopeCode);
  
  obj = Nmrx_AtomSite_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__isotopeCode);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_AtomSite self
  @param  Impl_ApplicationData value
**/
void *Nmrx_AtomSite_RemoveApplicationData(Nmrx_AtomSite self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
ccp.nmr.NmrExpPrototype.AtomSite.expMeasurements

ExpMeasurements 
involving AtomSite
  @param  Nmrx_AtomSite self
  @param  Nmrx_ExpMeasurement value
**/
void *Nmrx_AtomSite_RemoveExpMeasurement(Nmrx_AtomSite self, Nmrx_ExpMeasurement value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeExpMeasurement");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: cannot find method 'removeExpMeasurement'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: method 'removeExpMeasurement' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.nmr.NmrExpPrototype.AtomSite
  @param  Nmrx_AtomSite self
  @param  ApiString name
  @param  ApiObject value
**/
void *Nmrx_AtomSite_Set(Nmrx_AtomSite self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrx_AtomSite self
  @param  Acco_AccessObject value
**/
void *Nmrx_AtomSite_SetAccess(Nmrx_AtomSite self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: method 'setAccess' is not callable");
  
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
  @param  Nmrx_AtomSite self
  @param  ApiList values
**/
void *Nmrx_AtomSite_SetApplicationData(Nmrx_AtomSite self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.nmr.NmrExpPrototype.AtomSite.expMeasurements

ExpMeasurements 
involving AtomSite
  @param  Nmrx_AtomSite self
  @param  ApiSet values
**/
void *Nmrx_AtomSite_SetExpMeasurements(Nmrx_AtomSite self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setExpMeasurements");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: cannot find method 'setExpMeasurements'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: method 'setExpMeasurements' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrExpPrototype.AtomSite.expTransfers

Magnetisation 
transfer (non-directional) connecting two AtomSites
  @param  Nmrx_AtomSite self
  @param  ApiSet values
**/
void *Nmrx_AtomSite_SetExpTransfers(Nmrx_AtomSite self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setExpTransfers");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: cannot find method 'setExpTransfers'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: method 'setExpTransfers' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrExpPrototype.AtomSite.isotopeCode

Isotope code for 
Isotope making up the ExpAtomSite
  @param  Nmrx_AtomSite self
  @param  ApiString value
**/
void *Nmrx_AtomSite_SetIsotopeCode(Nmrx_AtomSite self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsotopeCode");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: cannot find method 'setIsotopeCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: method 'setIsotopeCode' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrExpPrototype.AtomSite.maxNumber

Maximum number of 
occurrences of atom corresponding to atomSite. maxNumber 2 would mena no 
more than two atoms could appear in this position. If, for instance a 
carbon atomSite has a J coupling transfer to a proton AtomSite with 
maxNumber=2, it means that this ExpGraph will give no observable result 
for CH3 groups. May be set to zero, which indicates that no atoms of 
this type are allowed.
  @param  Nmrx_AtomSite self
  @param  ApiInteger value
**/
void *Nmrx_AtomSite_SetMaxNumber(Nmrx_AtomSite self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMaxNumber");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: cannot find method 'setMaxNumber'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: method 'setMaxNumber' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrExpPrototype.AtomSite.maxShift

maximum value of 
shift allowed for AtomSite, in ppm. Is not set in normal cases. Together 
with minShift serves to distinguish frequency-selective sites. For some 
common cases it is recommended to use standard limits :
Aliphatic 
carbon: <90ppm
Aromatic carbon: 90-150ppm
CO carbon: > 150ppm
CA (for 
proteins): 40-90ppm
  @param  Nmrx_AtomSite self
  @param  ApiFloat value
**/
void *Nmrx_AtomSite_SetMaxShift(Nmrx_AtomSite self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMaxShift");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: cannot find method 'setMaxShift'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: method 'setMaxShift' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrExpPrototype.AtomSite.minNumber

Minimum number of 
occurrences of atom corresponding to atomSite. MinNumber two wiould mean 
at least two atoms. If, for instance a carbon atomSite has a J coupling 
transfer to a proton AtomSite with minNumber=2, it means that this 
ExpGraph will give observable results only for CH2 and  CH3 groups.
  @param  Nmrx_AtomSite self
  @param  ApiInteger value
**/
void *Nmrx_AtomSite_SetMinNumber(Nmrx_AtomSite self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMinNumber");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: cannot find method 'setMinNumber'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: method 'setMinNumber' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrExpPrototype.AtomSite.minShift

minimum value of 
shift allowed for AtomSite, in ppm. Is not set in normal cases. Together 
with maxShift serves to distinguish frequency-selective sites. The most 
common use is for distinguishing CO, aliphatic carbon, and 'just' 
carbon.
Aliphatic carbon: <90ppm
Aromatic carbon: 90-150ppm
CO carbon: > 
150ppm
CA (for proteins): 40-90ppm
  @param  Nmrx_AtomSite self
  @param  ApiFloat value
**/
void *Nmrx_AtomSite_SetMinShift(Nmrx_AtomSite self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMinShift");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: cannot find method 'setMinShift'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: method 'setMinShift' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrExpPrototype.AtomSite.name

A short string to be used 
in generating experiment names. If the attribute is not set, the nucleus 
symbol should be used. Examples of names would be 'CO', 'CA', for e.g. 
HNCOCA.Note that the name does not have to match with protein or any 
other naming conventions (proteins use 'C', where we might use 'CO').
  @param  Nmrx_AtomSite self
  @param  ApiString value
**/
void *Nmrx_AtomSite_SetName(Nmrx_AtomSite self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrExpPrototype.AtomSite.numberStep

Integer step 
between allowed number of occurrences of atoms corresponding to this 
atomSite. If, for instance a carbon atomSite has a J coupling transfer 
to a proton AtomSite with minNumber=1 and numberStep = 2, there must be 
1, 3, 5, ... atoms corresponding to the AtomSite. Uased for instance to 
indicate 'carbon coupled to an odd number of protons', where you would 
have a carbon AtomSite, with a JCoupling ExpTransfer to a proton 
AtomSite witn minNumber 1 and numberStep 2.
  @param  Nmrx_AtomSite self
  @param  ApiInteger value
**/
void *Nmrx_AtomSite_SetNumberStep(Nmrx_AtomSite self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNumberStep");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: cannot find method 'setNumberStep'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: method 'setNumberStep' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrExpPrototype.AtomSite.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmrx_AtomSite self
  @param  ApiInteger value
**/
void *Nmrx_AtomSite_SetSerial(Nmrx_AtomSite self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.NmrExpPrototype.AtomSite.expGraphs

ExpGraphs whre 
AtomSite appears
  @param  Nmrx_AtomSite self
  @returns   the result
**/
ApiList Nmrx_AtomSite_SortedExpGraphs(Nmrx_AtomSite self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedExpGraphs");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: cannot find method 'sortedExpGraphs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: method 'sortedExpGraphs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.nmr.NmrExpPrototype.AtomSite.expMeasurements

ExpMeasurements 
involving AtomSite
  @param  Nmrx_AtomSite self
  @returns   the result
**/
ApiList Nmrx_AtomSite_SortedExpMeasurements(Nmrx_AtomSite self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedExpMeasurements");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: cannot find method 'sortedExpMeasurements'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: method 'sortedExpMeasurements' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.NmrExpPrototype.AtomSite.expTransfers

Magnetisation 
transfer (non-directional) connecting two AtomSites
  @param  Nmrx_AtomSite self
  @returns   the result
**/
ApiList Nmrx_AtomSite_SortedExpTransfers(Nmrx_AtomSite self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedExpTransfers");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: cannot find method 'sortedExpTransfers'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.AtomSite: method 'sortedExpTransfers' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
