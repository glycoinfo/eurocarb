
#include "ccp.h"

/*
  Set of Connected AtomSites, ExpTransfers, ExpSteps and ExpMeasurements that define the allowed magnetisation transfer paths and observables for an NMR experiment. Each ExpGraph, its ExpSteps and ExpTransfers, and the ExpMeasurements and AtomSites these are connected to, effectively define a self-contained NMR experiment. There may be several ExpGraphs that share some, but not all, AtomSites and ExpMeasurementsl, e.g. if you acquire CH and NH 2D HSQC experiments together, or if you have diferent molecule topologies giving rise to peaks of different sign.
*/

/* package ccp.api.nmr.NmrExpPrototype */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpGraph self
  @param  Impl_ApplicationData value
**/
void *Nmrx_ExpGraph_AddApplicationData(Nmrx_ExpGraph self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.nmr.NmrExpPrototype.ExpGraph
  @param  Nmrx_ExpGraph self
  @param  ApiBoolean complete
**/
void *Nmrx_ExpGraph_CheckAllValid(Nmrx_ExpGraph self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.nmr.NmrExpPrototype.ExpGraph
  @param  Nmrx_ExpGraph self
  @param  ApiBoolean complete
**/
void *Nmrx_ExpGraph_CheckValid(Nmrx_ExpGraph self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: method 'checkValid' is not callable");
  
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
  @param  Nmrx_ExpGraph self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrx_ExpGraph_FindAllApplicationData(Nmrx_ExpGraph self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: method 'findAllApplicationData' is not callable");
  
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
  @param  Nmrx_ExpGraph self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrx_ExpGraph_FindAllApplicationData_keyval0(Nmrx_ExpGraph self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrx_ExpGraph_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpGraph self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrx_ExpGraph_FindAllApplicationData_keyval1(Nmrx_ExpGraph self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrx_ExpGraph_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpGraph self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrx_ExpGraph_FindAllApplicationData_keyval2(Nmrx_ExpGraph self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrx_ExpGraph_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpGraph self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrx_ExpGraph_FindAllApplicationData_keyval3(Nmrx_ExpGraph self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrx_ExpGraph_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpGraph self
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
ApiList Nmrx_ExpGraph_FindAllApplicationData_keyval4(Nmrx_ExpGraph self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrx_ExpGraph_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpGraph.atomSites

AtomSites 
connected to ExpGraph
  @param  Nmrx_ExpGraph self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_ExpGraph_FindAllAtomSites(Nmrx_ExpGraph self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllAtomSites");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: cannot find method 'findAllAtomSites'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: method 'findAllAtomSites' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpGraph.atomSites

AtomSites 
connected to ExpGraph
  @param  Nmrx_ExpGraph self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_ExpGraph_FindAllAtomSites_keyval0(Nmrx_ExpGraph self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrx_ExpGraph_FindAllAtomSites(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpGraph.atomSites

AtomSites 
connected to ExpGraph
  @param  Nmrx_ExpGraph self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_ExpGraph_FindAllAtomSites_keyval1(Nmrx_ExpGraph self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrx_ExpGraph_FindAllAtomSites(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpGraph.atomSites

AtomSites 
connected to ExpGraph
  @param  Nmrx_ExpGraph self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_ExpGraph_FindAllAtomSites_keyval2(Nmrx_ExpGraph self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrx_ExpGraph_FindAllAtomSites(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpGraph.atomSites

AtomSites 
connected to ExpGraph
  @param  Nmrx_ExpGraph self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_ExpGraph_FindAllAtomSites_keyval3(Nmrx_ExpGraph self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrx_ExpGraph_FindAllAtomSites(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpGraph.atomSites

AtomSites 
connected to ExpGraph
  @param  Nmrx_ExpGraph self
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
ApiSet Nmrx_ExpGraph_FindAllAtomSites_keyval4(Nmrx_ExpGraph self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrx_ExpGraph_FindAllAtomSites(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrExpPrototype.ExpGraph.expMeasurements

ExpMeasurements that 
appear in ExpGraph
  @param  Nmrx_ExpGraph self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_ExpGraph_FindAllExpMeasurements(Nmrx_ExpGraph self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllExpMeasurements");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: cannot find method 'findAllExpMeasurements'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: method 'findAllExpMeasurements' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrExpPrototype.ExpGraph.expMeasurements

ExpMeasurements that 
appear in ExpGraph
  @param  Nmrx_ExpGraph self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_ExpGraph_FindAllExpMeasurements_keyval0(Nmrx_ExpGraph self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrx_ExpGraph_FindAllExpMeasurements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrExpPrototype.ExpGraph.expMeasurements

ExpMeasurements that 
appear in ExpGraph
  @param  Nmrx_ExpGraph self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_ExpGraph_FindAllExpMeasurements_keyval1(Nmrx_ExpGraph self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrx_ExpGraph_FindAllExpMeasurements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrExpPrototype.ExpGraph.expMeasurements

ExpMeasurements that 
appear in ExpGraph
  @param  Nmrx_ExpGraph self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_ExpGraph_FindAllExpMeasurements_keyval2(Nmrx_ExpGraph self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrx_ExpGraph_FindAllExpMeasurements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrExpPrototype.ExpGraph.expMeasurements

ExpMeasurements that 
appear in ExpGraph
  @param  Nmrx_ExpGraph self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_ExpGraph_FindAllExpMeasurements_keyval3(Nmrx_ExpGraph self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrx_ExpGraph_FindAllExpMeasurements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrExpPrototype.ExpGraph.expMeasurements

ExpMeasurements that 
appear in ExpGraph
  @param  Nmrx_ExpGraph self
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
ApiSet Nmrx_ExpGraph_FindAllExpMeasurements_keyval4(Nmrx_ExpGraph self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrx_ExpGraph_FindAllExpMeasurements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpGraph.expSteps

child link to 
class ExpStep
  @param  Nmrx_ExpGraph self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_ExpGraph_FindAllExpSteps(Nmrx_ExpGraph self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllExpSteps");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: cannot find method 'findAllExpSteps'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: method 'findAllExpSteps' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpGraph.expSteps

child link to 
class ExpStep
  @param  Nmrx_ExpGraph self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_ExpGraph_FindAllExpSteps_keyval0(Nmrx_ExpGraph self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrx_ExpGraph_FindAllExpSteps(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpGraph.expSteps

child link to 
class ExpStep
  @param  Nmrx_ExpGraph self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_ExpGraph_FindAllExpSteps_keyval1(Nmrx_ExpGraph self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrx_ExpGraph_FindAllExpSteps(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpGraph.expSteps

child link to 
class ExpStep
  @param  Nmrx_ExpGraph self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_ExpGraph_FindAllExpSteps_keyval2(Nmrx_ExpGraph self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrx_ExpGraph_FindAllExpSteps(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpGraph.expSteps

child link to 
class ExpStep
  @param  Nmrx_ExpGraph self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_ExpGraph_FindAllExpSteps_keyval3(Nmrx_ExpGraph self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrx_ExpGraph_FindAllExpSteps(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpGraph.expSteps

child link to 
class ExpStep
  @param  Nmrx_ExpGraph self
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
ApiSet Nmrx_ExpGraph_FindAllExpSteps_keyval4(Nmrx_ExpGraph self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrx_ExpGraph_FindAllExpSteps(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpGraph.expTransfers

child link to 
class ExpTransfer
  @param  Nmrx_ExpGraph self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_ExpGraph_FindAllExpTransfers(Nmrx_ExpGraph self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllExpTransfers");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: cannot find method 'findAllExpTransfers'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: method 'findAllExpTransfers' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpGraph.expTransfers

child link to 
class ExpTransfer
  @param  Nmrx_ExpGraph self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_ExpGraph_FindAllExpTransfers_keyval0(Nmrx_ExpGraph self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrx_ExpGraph_FindAllExpTransfers(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpGraph.expTransfers

child link to 
class ExpTransfer
  @param  Nmrx_ExpGraph self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_ExpGraph_FindAllExpTransfers_keyval1(Nmrx_ExpGraph self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrx_ExpGraph_FindAllExpTransfers(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpGraph.expTransfers

child link to 
class ExpTransfer
  @param  Nmrx_ExpGraph self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_ExpGraph_FindAllExpTransfers_keyval2(Nmrx_ExpGraph self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrx_ExpGraph_FindAllExpTransfers(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpGraph.expTransfers

child link to 
class ExpTransfer
  @param  Nmrx_ExpGraph self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_ExpGraph_FindAllExpTransfers_keyval3(Nmrx_ExpGraph self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrx_ExpGraph_FindAllExpTransfers(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.ExpGraph.expTransfers

child link to 
class ExpTransfer
  @param  Nmrx_ExpGraph self
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
ApiSet Nmrx_ExpGraph_FindAllExpTransfers_keyval4(Nmrx_ExpGraph self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrx_ExpGraph_FindAllExpTransfers(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpGraph self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrx_ExpGraph_FindFirstApplicationData(Nmrx_ExpGraph self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nmrx_ExpGraph self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrx_ExpGraph_FindFirstApplicationData_keyval0(Nmrx_ExpGraph self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrx_ExpGraph_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpGraph self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrx_ExpGraph_FindFirstApplicationData_keyval1(Nmrx_ExpGraph self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrx_ExpGraph_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpGraph self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrx_ExpGraph_FindFirstApplicationData_keyval2(Nmrx_ExpGraph self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrx_ExpGraph_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpGraph self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrx_ExpGraph_FindFirstApplicationData_keyval3(Nmrx_ExpGraph self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrx_ExpGraph_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpGraph self
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
Impl_ApplicationData Nmrx_ExpGraph_FindFirstApplicationData_keyval4(Nmrx_ExpGraph self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrx_ExpGraph_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrExpPrototype.ExpGraph.atomSites

AtomSites 
connected to ExpGraph
  @param  Nmrx_ExpGraph self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmrx_AtomSite Nmrx_ExpGraph_FindFirstAtomSite(Nmrx_ExpGraph self, ApiMap conditions)
{
  
  Nmrx_AtomSite obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstAtomSite");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: cannot find method 'findFirstAtomSite'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: method 'findFirstAtomSite' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrExpPrototype.ExpGraph.atomSites

AtomSites 
connected to ExpGraph
  @param  Nmrx_ExpGraph self
  @returns  the first value that satisfies the conditions 
**/
Nmrx_AtomSite Nmrx_ExpGraph_FindFirstAtomSite_keyval0(Nmrx_ExpGraph self)
{
  
  Nmrx_AtomSite  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrx_ExpGraph_FindFirstAtomSite(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrExpPrototype.ExpGraph.atomSites

AtomSites 
connected to ExpGraph
  @param  Nmrx_ExpGraph self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmrx_AtomSite Nmrx_ExpGraph_FindFirstAtomSite_keyval1(Nmrx_ExpGraph self, char * key, ApiObject value)
{
  
  Nmrx_AtomSite  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrx_ExpGraph_FindFirstAtomSite(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrExpPrototype.ExpGraph.atomSites

AtomSites 
connected to ExpGraph
  @param  Nmrx_ExpGraph self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmrx_AtomSite Nmrx_ExpGraph_FindFirstAtomSite_keyval2(Nmrx_ExpGraph self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmrx_AtomSite  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrx_ExpGraph_FindFirstAtomSite(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrExpPrototype.ExpGraph.atomSites

AtomSites 
connected to ExpGraph
  @param  Nmrx_ExpGraph self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmrx_AtomSite Nmrx_ExpGraph_FindFirstAtomSite_keyval3(Nmrx_ExpGraph self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmrx_AtomSite  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrx_ExpGraph_FindFirstAtomSite(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrExpPrototype.ExpGraph.atomSites

AtomSites 
connected to ExpGraph
  @param  Nmrx_ExpGraph self
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
Nmrx_AtomSite Nmrx_ExpGraph_FindFirstAtomSite_keyval4(Nmrx_ExpGraph self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmrx_AtomSite  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrx_ExpGraph_FindFirstAtomSite(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.ExpGraph.expMeasurements

ExpMeasurements that 
appear in ExpGraph
  @param  Nmrx_ExpGraph self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmrx_ExpMeasurement Nmrx_ExpGraph_FindFirstExpMeasurement(Nmrx_ExpGraph self, ApiMap conditions)
{
  
  Nmrx_ExpMeasurement obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstExpMeasurement");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: cannot find method 'findFirstExpMeasurement'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: method 'findFirstExpMeasurement' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.ExpGraph.expMeasurements

ExpMeasurements that 
appear in ExpGraph
  @param  Nmrx_ExpGraph self
  @returns  the first value that satisfies the conditions 
**/
Nmrx_ExpMeasurement Nmrx_ExpGraph_FindFirstExpMeasurement_keyval0(Nmrx_ExpGraph self)
{
  
  Nmrx_ExpMeasurement  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrx_ExpGraph_FindFirstExpMeasurement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.ExpGraph.expMeasurements

ExpMeasurements that 
appear in ExpGraph
  @param  Nmrx_ExpGraph self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmrx_ExpMeasurement Nmrx_ExpGraph_FindFirstExpMeasurement_keyval1(Nmrx_ExpGraph self, char * key, ApiObject value)
{
  
  Nmrx_ExpMeasurement  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrx_ExpGraph_FindFirstExpMeasurement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.ExpGraph.expMeasurements

ExpMeasurements that 
appear in ExpGraph
  @param  Nmrx_ExpGraph self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmrx_ExpMeasurement Nmrx_ExpGraph_FindFirstExpMeasurement_keyval2(Nmrx_ExpGraph self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmrx_ExpMeasurement  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrx_ExpGraph_FindFirstExpMeasurement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.ExpGraph.expMeasurements

ExpMeasurements that 
appear in ExpGraph
  @param  Nmrx_ExpGraph self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmrx_ExpMeasurement Nmrx_ExpGraph_FindFirstExpMeasurement_keyval3(Nmrx_ExpGraph self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmrx_ExpMeasurement  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrx_ExpGraph_FindFirstExpMeasurement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.ExpGraph.expMeasurements

ExpMeasurements that 
appear in ExpGraph
  @param  Nmrx_ExpGraph self
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
Nmrx_ExpMeasurement Nmrx_ExpGraph_FindFirstExpMeasurement_keyval4(Nmrx_ExpGraph self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmrx_ExpMeasurement  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrx_ExpGraph_FindFirstExpMeasurement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrExpPrototype.ExpGraph.expSteps

child link to 
class ExpStep
  @param  Nmrx_ExpGraph self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmrx_ExpStep Nmrx_ExpGraph_FindFirstExpStep(Nmrx_ExpGraph self, ApiMap conditions)
{
  
  Nmrx_ExpStep obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstExpStep");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: cannot find method 'findFirstExpStep'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: method 'findFirstExpStep' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrExpPrototype.ExpGraph.expSteps

child link to 
class ExpStep
  @param  Nmrx_ExpGraph self
  @returns  the first value that satisfies the conditions 
**/
Nmrx_ExpStep Nmrx_ExpGraph_FindFirstExpStep_keyval0(Nmrx_ExpGraph self)
{
  
  Nmrx_ExpStep  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrx_ExpGraph_FindFirstExpStep(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrExpPrototype.ExpGraph.expSteps

child link to 
class ExpStep
  @param  Nmrx_ExpGraph self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmrx_ExpStep Nmrx_ExpGraph_FindFirstExpStep_keyval1(Nmrx_ExpGraph self, char * key, ApiObject value)
{
  
  Nmrx_ExpStep  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrx_ExpGraph_FindFirstExpStep(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrExpPrototype.ExpGraph.expSteps

child link to 
class ExpStep
  @param  Nmrx_ExpGraph self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmrx_ExpStep Nmrx_ExpGraph_FindFirstExpStep_keyval2(Nmrx_ExpGraph self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmrx_ExpStep  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrx_ExpGraph_FindFirstExpStep(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrExpPrototype.ExpGraph.expSteps

child link to 
class ExpStep
  @param  Nmrx_ExpGraph self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmrx_ExpStep Nmrx_ExpGraph_FindFirstExpStep_keyval3(Nmrx_ExpGraph self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmrx_ExpStep  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrx_ExpGraph_FindFirstExpStep(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrExpPrototype.ExpGraph.expSteps

child link to 
class ExpStep
  @param  Nmrx_ExpGraph self
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
Nmrx_ExpStep Nmrx_ExpGraph_FindFirstExpStep_keyval4(Nmrx_ExpGraph self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmrx_ExpStep  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrx_ExpGraph_FindFirstExpStep(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrExpPrototype.ExpGraph.expTransfers

child link 
to class ExpTransfer
  @param  Nmrx_ExpGraph self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmrx_ExpTransfer Nmrx_ExpGraph_FindFirstExpTransfer(Nmrx_ExpGraph self, ApiMap conditions)
{
  
  Nmrx_ExpTransfer obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstExpTransfer");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: cannot find method 'findFirstExpTransfer'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: method 'findFirstExpTransfer' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrExpPrototype.ExpGraph.expTransfers

child link 
to class ExpTransfer
  @param  Nmrx_ExpGraph self
  @returns  the first value that satisfies the conditions 
**/
Nmrx_ExpTransfer Nmrx_ExpGraph_FindFirstExpTransfer_keyval0(Nmrx_ExpGraph self)
{
  
  Nmrx_ExpTransfer  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrx_ExpGraph_FindFirstExpTransfer(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrExpPrototype.ExpGraph.expTransfers

child link 
to class ExpTransfer
  @param  Nmrx_ExpGraph self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmrx_ExpTransfer Nmrx_ExpGraph_FindFirstExpTransfer_keyval1(Nmrx_ExpGraph self, char * key, ApiObject value)
{
  
  Nmrx_ExpTransfer  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrx_ExpGraph_FindFirstExpTransfer(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrExpPrototype.ExpGraph.expTransfers

child link 
to class ExpTransfer
  @param  Nmrx_ExpGraph self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmrx_ExpTransfer Nmrx_ExpGraph_FindFirstExpTransfer_keyval2(Nmrx_ExpGraph self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmrx_ExpTransfer  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrx_ExpGraph_FindFirstExpTransfer(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrExpPrototype.ExpGraph.expTransfers

child link 
to class ExpTransfer
  @param  Nmrx_ExpGraph self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmrx_ExpTransfer Nmrx_ExpGraph_FindFirstExpTransfer_keyval3(Nmrx_ExpGraph self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmrx_ExpTransfer  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrx_ExpGraph_FindFirstExpTransfer(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrExpPrototype.ExpGraph.expTransfers

child link 
to class ExpTransfer
  @param  Nmrx_ExpGraph self
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
Nmrx_ExpTransfer Nmrx_ExpGraph_FindFirstExpTransfer_keyval4(Nmrx_ExpGraph self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmrx_ExpTransfer  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrx_ExpGraph_FindFirstExpTransfer(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.nmr.NmrExpPrototype.ExpGraph
  @param  Nmrx_ExpGraph self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Nmrx_ExpGraph_Get(Nmrx_ExpGraph self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrx_ExpGraph self
  @returns   the result
**/
Acco_AccessObject Nmrx_ExpGraph_GetAccess(Nmrx_ExpGraph self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: method 'getAccess' is not callable");
  
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
  @param  Nmrx_ExpGraph self
  @returns   the result
**/
ApiList Nmrx_ExpGraph_GetApplicationData(Nmrx_ExpGraph self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived link atomSites
  @param  Nmrx_ExpGraph self
  @returns   the result
**/
ApiSet Nmrx_ExpGraph_GetAtomSites(Nmrx_ExpGraph self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAtomSites");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: cannot find method 'getAtomSites'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: method 'getAtomSites' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.NmrExpPrototype.ExpGraph
  @param  Nmrx_ExpGraph self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nmrx_ExpGraph Nmrx_ExpGraph_GetByKey(Nmrx_ExpGraph self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Nmrx_ExpGraph obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: method 'getByKey' is not callable");
  
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
  @param  Nmrx_ExpGraph self
  @returns   the result
**/
ApiString Nmrx_ExpGraph_GetClassName(Nmrx_ExpGraph self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived link ExpMeasurements
  @param  Nmrx_ExpGraph self
  @returns   the result
**/
ApiSet Nmrx_ExpGraph_GetExpMeasurements(Nmrx_ExpGraph self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExpMeasurements");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: cannot find method 'getExpMeasurements'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: method 'getExpMeasurements' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrExpPrototype.ExpGraph.expSteps

child link to class 
ExpStep
  @param  Nmrx_ExpGraph self
  @returns   the result
**/
ApiSet Nmrx_ExpGraph_GetExpSteps(Nmrx_ExpGraph self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExpSteps");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: cannot find method 'getExpSteps'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: method 'getExpSteps' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrExpPrototype.ExpGraph.expTransfers

child link to 
class ExpTransfer
  @param  Nmrx_ExpGraph self
  @returns   the result
**/
ApiSet Nmrx_ExpGraph_GetExpTransfers(Nmrx_ExpGraph self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExpTransfers");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: cannot find method 'getExpTransfers'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: method 'getExpTransfers' is not callable");
  
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
  @param  Nmrx_ExpGraph self
  @returns   the result
**/
ApiList Nmrx_ExpGraph_GetFieldNames(Nmrx_ExpGraph self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.nmr.NmrExpPrototype.ExpGraph
  @param  Nmrx_ExpGraph self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Nmrx_ExpGraph_GetFullKey(Nmrx_ExpGraph self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: method 'getFullKey' is not callable");
  
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
  @param  Nmrx_ExpGraph self
  @returns   the result
**/
ApiBoolean Nmrx_ExpGraph_GetInConstructor(Nmrx_ExpGraph self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: method 'getInConstructor' is not callable");
  
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
  @param  Nmrx_ExpGraph self
  @returns   the result
**/
ApiBoolean Nmrx_ExpGraph_GetIsDeleted(Nmrx_ExpGraph self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.nmr.NmrExpPrototype.ExpGraph
  @param  Nmrx_ExpGraph self
  @returns  Local object key
**/
ApiObject Nmrx_ExpGraph_GetLocalKey(Nmrx_ExpGraph self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrExpPrototype.ExpGraph.nmrExpPrototype

parent link
  @param  Nmrx_ExpGraph self
  @returns   the result
**/
Nmrx_NmrExpPrototype Nmrx_ExpGraph_GetNmrExpPrototype(Nmrx_ExpGraph self)
{
  
  Nmrx_NmrExpPrototype obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrExpPrototype");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: cannot find method 'getNmrExpPrototype'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: method 'getNmrExpPrototype' is not callable");
  
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
  @param  Nmrx_ExpGraph self
  @returns   the result
**/
ApiString Nmrx_ExpGraph_GetPackageName(Nmrx_ExpGraph self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: method 'getPackageName' is not callable");
  
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
  @param  Nmrx_ExpGraph self
  @returns   the result
**/
ApiString Nmrx_ExpGraph_GetPackageShortName(Nmrx_ExpGraph self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrExpPrototype.ExpGraph.parent

link to parent object - 
synonym for nmrExpPrototype
  @param  Nmrx_ExpGraph self
  @returns   the result
**/
Nmrx_NmrExpPrototype Nmrx_ExpGraph_GetParent(Nmrx_ExpGraph self)
{
  
  Nmrx_NmrExpPrototype obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrExpPrototype.ExpGraph.peakSign

Sign of crosspeaks 
associated with transfer within ExpGraph. If set, all peaks arising from 
the ExpGraph must have the same sign. Mainly relevant where there are 
several ExpGraphs that give rise to peaks of different sign.
  @param  Nmrx_ExpGraph self
  @returns   the result
**/
ApiInteger Nmrx_ExpGraph_GetPeakSign(Nmrx_ExpGraph self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPeakSign");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: cannot find method 'getPeakSign'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: method 'getPeakSign' is not callable");
  
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
  @param  Nmrx_ExpGraph self
  @returns   the result
**/
ApiString Nmrx_ExpGraph_GetQualifiedName(Nmrx_ExpGraph self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: method 'getQualifiedName' is not callable");
  
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
  @param  Nmrx_ExpGraph self
  @returns   the result
**/
Impl_MemopsRoot Nmrx_ExpGraph_GetRoot(Nmrx_ExpGraph self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrExpPrototype.ExpGraph.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmrx_ExpGraph self
  @returns   the result
**/
ApiInteger Nmrx_ExpGraph_GetSerial(Nmrx_ExpGraph self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: method 'getSerial' is not callable");
  
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
  @param  Nmrx_ExpGraph self
  @returns   the result
**/
Impl_TopObject Nmrx_ExpGraph_GetTopObject(Nmrx_ExpGraph self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.nmr.NmrExpPrototype.ExpGraph
  @param  Nmrx_NmrExpPrototype parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmrx_ExpGraph Nmrx_ExpGraph_Init(Nmrx_NmrExpPrototype parent, ApiMap attrlinks)
{
  
  return Nmrx_NmrExpPrototype_NewExpGraph(parent, attrlinks);
}

/**
  Constructor for ccp.nmr.NmrExpPrototype.ExpGraph
  @param  Nmrx_NmrExpPrototype parent
  @returns  the new object
**/
Nmrx_ExpGraph Nmrx_ExpGraph_Init_reqd(Nmrx_NmrExpPrototype parent)
{
  
  Nmrx_ExpGraph  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Nmrx_ExpGraph_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrExpPrototype.ExpStep
  @param  Nmrx_ExpGraph self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmrx_ExpStep Nmrx_ExpGraph_NewExpStep(Nmrx_ExpGraph self, ApiMap attrlinks)
{
  
  Nmrx_ExpStep obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newExpStep");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: cannot find method 'newExpStep'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: method 'newExpStep' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrExpPrototype.ExpStep
  @param  Nmrx_ExpGraph self
  @param  Nmrx_ExpMeasurement expMeasurement
  @param  ApiInteger stepNumber
  @returns  the new object
**/
Nmrx_ExpStep Nmrx_ExpGraph_NewExpStep_reqd(Nmrx_ExpGraph self, Nmrx_ExpMeasurement expMeasurement, ApiInteger stepNumber)
{
  
  Nmrx_ExpStep  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "expMeasurement", expMeasurement);
  PyDict_SetItemString(attrlinks, "stepNumber", stepNumber);
  
  obj = Nmrx_ExpGraph_NewExpStep(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrExpPrototype.ExpTransfer
  @param  Nmrx_ExpGraph self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmrx_ExpTransfer Nmrx_ExpGraph_NewExpTransfer(Nmrx_ExpGraph self, ApiMap attrlinks)
{
  
  Nmrx_ExpTransfer obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newExpTransfer");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: cannot find method 'newExpTransfer'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: method 'newExpTransfer' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrExpPrototype.ExpTransfer
  @param  Nmrx_ExpGraph self
  @param  ApiSet atomSites
  @returns  the new object
**/
Nmrx_ExpTransfer Nmrx_ExpGraph_NewExpTransfer_reqd(Nmrx_ExpGraph self, ApiSet atomSites)
{
  
  Nmrx_ExpTransfer  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "atomSites", atomSites);
  
  obj = Nmrx_ExpGraph_NewExpTransfer(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_ExpGraph self
  @param  Impl_ApplicationData value
**/
void *Nmrx_ExpGraph_RemoveApplicationData(Nmrx_ExpGraph self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.nmr.NmrExpPrototype.ExpGraph
  @param  Nmrx_ExpGraph self
  @param  ApiString name
  @param  ApiObject value
**/
void *Nmrx_ExpGraph_Set(Nmrx_ExpGraph self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrx_ExpGraph self
  @param  Acco_AccessObject value
**/
void *Nmrx_ExpGraph_SetAccess(Nmrx_ExpGraph self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: method 'setAccess' is not callable");
  
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
  @param  Nmrx_ExpGraph self
  @param  ApiList values
**/
void *Nmrx_ExpGraph_SetApplicationData(Nmrx_ExpGraph self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrExpPrototype.ExpGraph.peakSign

Sign of crosspeaks 
associated with transfer within ExpGraph. If set, all peaks arising from 
the ExpGraph must have the same sign. Mainly relevant where there are 
several ExpGraphs that give rise to peaks of different sign.
  @param  Nmrx_ExpGraph self
  @param  ApiInteger value
**/
void *Nmrx_ExpGraph_SetPeakSign(Nmrx_ExpGraph self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPeakSign");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: cannot find method 'setPeakSign'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: method 'setPeakSign' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrExpPrototype.ExpGraph.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmrx_ExpGraph self
  @param  ApiInteger value
**/
void *Nmrx_ExpGraph_SetSerial(Nmrx_ExpGraph self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.NmrExpPrototype.ExpGraph.atomSites

AtomSites 
connected to ExpGraph
  @param  Nmrx_ExpGraph self
  @returns   the result
**/
ApiList Nmrx_ExpGraph_SortedAtomSites(Nmrx_ExpGraph self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedAtomSites");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: cannot find method 'sortedAtomSites'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: method 'sortedAtomSites' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.nmr.NmrExpPrototype.ExpGraph.expMeasurements

ExpMeasurements that 
appear in ExpGraph
  @param  Nmrx_ExpGraph self
  @returns   the result
**/
ApiList Nmrx_ExpGraph_SortedExpMeasurements(Nmrx_ExpGraph self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedExpMeasurements");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: cannot find method 'sortedExpMeasurements'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: method 'sortedExpMeasurements' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.NmrExpPrototype.ExpGraph.expSteps

child link to 
class ExpStep
  @param  Nmrx_ExpGraph self
  @returns   the result
**/
ApiList Nmrx_ExpGraph_SortedExpSteps(Nmrx_ExpGraph self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedExpSteps");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: cannot find method 'sortedExpSteps'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: method 'sortedExpSteps' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.NmrExpPrototype.ExpGraph.expTransfers

child link to 
class ExpTransfer
  @param  Nmrx_ExpGraph self
  @returns   the result
**/
ApiList Nmrx_ExpGraph_SortedExpTransfers(Nmrx_ExpGraph self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedExpTransfers");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: cannot find method 'sortedExpTransfers'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.ExpGraph: method 'sortedExpTransfers' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
