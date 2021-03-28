
#include "ccp.h"

/*
  One state of a molecule, belonging to a specific ChainStateSite. E.g. 'cis', 'protonated', 'bound-form', or 'loop-conformation-A'
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ChainState self
  @param  Impl_ApplicationData value
**/
void *Nmr_ChainState_AddApplicationData(Nmr_ChainState self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainState: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainState: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.Nmr.ChainState.nmrConstraintStores

NmrConstraintStores 
using for this particular ChainState
  @param  Nmr_ChainState self
  @param  Nmrc_NmrConstraintStore value
**/
void *Nmr_ChainState_AddNmrConstraintStore(Nmr_ChainState self, Nmrc_NmrConstraintStore value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addNmrConstraintStore");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainState: cannot find method 'addNmrConstraintStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainState: method 'addNmrConstraintStore' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.Nmr.ChainState.resonances

Resonances that are found 
only in this chainState.
  @param  Nmr_ChainState self
  @param  Nmr_Resonance value
**/
void *Nmr_ChainState_AddResonance(Nmr_ChainState self, Nmr_Resonance value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addResonance");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainState: cannot find method 'addResonance'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainState: method 'addResonance' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.nmr.Nmr.ChainState
  @param  Nmr_ChainState self
  @param  ApiBoolean complete
**/
void *Nmr_ChainState_CheckAllValid(Nmr_ChainState self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainState: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainState: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.nmr.Nmr.ChainState
  @param  Nmr_ChainState self
  @param  ApiBoolean complete
**/
void *Nmr_ChainState_CheckValid(Nmr_ChainState self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainState: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainState: method 'checkValid' is not callable");
  
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
  @param  Nmr_ChainState self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_ChainState_FindAllApplicationData(Nmr_ChainState self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainState: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainState: method 'findAllApplicationData' is not callable");
  
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
  @param  Nmr_ChainState self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_ChainState_FindAllApplicationData_keyval0(Nmr_ChainState self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ChainState_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ChainState self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_ChainState_FindAllApplicationData_keyval1(Nmr_ChainState self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ChainState_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ChainState self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_ChainState_FindAllApplicationData_keyval2(Nmr_ChainState self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ChainState_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ChainState self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_ChainState_FindAllApplicationData_keyval3(Nmr_ChainState self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ChainState_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ChainState self
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
ApiList Nmr_ChainState_FindAllApplicationData_keyval4(Nmr_ChainState self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ChainState_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ChainState.expChainStates

ExpChainStates in 
which ChainState is involved.
  @param  Nmr_ChainState self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ChainState_FindAllExpChainStates(Nmr_ChainState self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllExpChainStates");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainState: cannot find method 'findAllExpChainStates'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainState: method 'findAllExpChainStates' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ChainState.expChainStates

ExpChainStates in 
which ChainState is involved.
  @param  Nmr_ChainState self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ChainState_FindAllExpChainStates_keyval0(Nmr_ChainState self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ChainState_FindAllExpChainStates(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ChainState.expChainStates

ExpChainStates in 
which ChainState is involved.
  @param  Nmr_ChainState self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ChainState_FindAllExpChainStates_keyval1(Nmr_ChainState self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ChainState_FindAllExpChainStates(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ChainState.expChainStates

ExpChainStates in 
which ChainState is involved.
  @param  Nmr_ChainState self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ChainState_FindAllExpChainStates_keyval2(Nmr_ChainState self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ChainState_FindAllExpChainStates(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ChainState.expChainStates

ExpChainStates in 
which ChainState is involved.
  @param  Nmr_ChainState self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ChainState_FindAllExpChainStates_keyval3(Nmr_ChainState self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ChainState_FindAllExpChainStates(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ChainState.expChainStates

ExpChainStates in 
which ChainState is involved.
  @param  Nmr_ChainState self
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
ApiSet Nmr_ChainState_FindAllExpChainStates_keyval4(Nmr_ChainState self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ChainState_FindAllExpChainStates(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.ChainState.nmrConstraintStores

NmrConstraintStores using 
for this particular ChainState
  @param  Nmr_ChainState self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ChainState_FindAllNmrConstraintStores(Nmr_ChainState self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllNmrConstraintStores");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainState: cannot find method 'findAllNmrConstraintStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainState: method 'findAllNmrConstraintStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.ChainState.nmrConstraintStores

NmrConstraintStores using 
for this particular ChainState
  @param  Nmr_ChainState self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ChainState_FindAllNmrConstraintStores_keyval0(Nmr_ChainState self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ChainState_FindAllNmrConstraintStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.ChainState.nmrConstraintStores

NmrConstraintStores using 
for this particular ChainState
  @param  Nmr_ChainState self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ChainState_FindAllNmrConstraintStores_keyval1(Nmr_ChainState self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ChainState_FindAllNmrConstraintStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.ChainState.nmrConstraintStores

NmrConstraintStores using 
for this particular ChainState
  @param  Nmr_ChainState self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ChainState_FindAllNmrConstraintStores_keyval2(Nmr_ChainState self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ChainState_FindAllNmrConstraintStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.ChainState.nmrConstraintStores

NmrConstraintStores using 
for this particular ChainState
  @param  Nmr_ChainState self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ChainState_FindAllNmrConstraintStores_keyval3(Nmr_ChainState self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ChainState_FindAllNmrConstraintStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.ChainState.nmrConstraintStores

NmrConstraintStores using 
for this particular ChainState
  @param  Nmr_ChainState self
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
ApiSet Nmr_ChainState_FindAllNmrConstraintStores_keyval4(Nmr_ChainState self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ChainState_FindAllNmrConstraintStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ChainState.resonances

Resonances that are found 
only in this chainState.
  @param  Nmr_ChainState self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ChainState_FindAllResonances(Nmr_ChainState self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllResonances");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainState: cannot find method 'findAllResonances'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainState: method 'findAllResonances' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ChainState.resonances

Resonances that are found 
only in this chainState.
  @param  Nmr_ChainState self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ChainState_FindAllResonances_keyval0(Nmr_ChainState self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ChainState_FindAllResonances(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ChainState.resonances

Resonances that are found 
only in this chainState.
  @param  Nmr_ChainState self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ChainState_FindAllResonances_keyval1(Nmr_ChainState self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ChainState_FindAllResonances(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ChainState.resonances

Resonances that are found 
only in this chainState.
  @param  Nmr_ChainState self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ChainState_FindAllResonances_keyval2(Nmr_ChainState self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ChainState_FindAllResonances(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ChainState.resonances

Resonances that are found 
only in this chainState.
  @param  Nmr_ChainState self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ChainState_FindAllResonances_keyval3(Nmr_ChainState self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ChainState_FindAllResonances(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ChainState.resonances

Resonances that are found 
only in this chainState.
  @param  Nmr_ChainState self
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
ApiSet Nmr_ChainState_FindAllResonances_keyval4(Nmr_ChainState self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ChainState_FindAllResonances(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ChainState self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_ChainState_FindFirstApplicationData(Nmr_ChainState self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainState: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainState: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nmr_ChainState self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_ChainState_FindFirstApplicationData_keyval0(Nmr_ChainState self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ChainState_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ChainState self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_ChainState_FindFirstApplicationData_keyval1(Nmr_ChainState self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ChainState_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ChainState self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_ChainState_FindFirstApplicationData_keyval2(Nmr_ChainState self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ChainState_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ChainState self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_ChainState_FindFirstApplicationData_keyval3(Nmr_ChainState self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ChainState_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ChainState self
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
Impl_ApplicationData Nmr_ChainState_FindFirstApplicationData_keyval4(Nmr_ChainState self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ChainState_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ChainState.expChainStates

ExpChainStates in 
which ChainState is involved.
  @param  Nmr_ChainState self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_ExpChainState Nmr_ChainState_FindFirstExpChainState(Nmr_ChainState self, ApiMap conditions)
{
  
  Nmr_ExpChainState obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstExpChainState");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainState: cannot find method 'findFirstExpChainState'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainState: method 'findFirstExpChainState' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ChainState.expChainStates

ExpChainStates in 
which ChainState is involved.
  @param  Nmr_ChainState self
  @returns  the first value that satisfies the conditions 
**/
Nmr_ExpChainState Nmr_ChainState_FindFirstExpChainState_keyval0(Nmr_ChainState self)
{
  
  Nmr_ExpChainState  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ChainState_FindFirstExpChainState(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ChainState.expChainStates

ExpChainStates in 
which ChainState is involved.
  @param  Nmr_ChainState self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_ExpChainState Nmr_ChainState_FindFirstExpChainState_keyval1(Nmr_ChainState self, char * key, ApiObject value)
{
  
  Nmr_ExpChainState  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ChainState_FindFirstExpChainState(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ChainState.expChainStates

ExpChainStates in 
which ChainState is involved.
  @param  Nmr_ChainState self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_ExpChainState Nmr_ChainState_FindFirstExpChainState_keyval2(Nmr_ChainState self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_ExpChainState  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ChainState_FindFirstExpChainState(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ChainState.expChainStates

ExpChainStates in 
which ChainState is involved.
  @param  Nmr_ChainState self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_ExpChainState Nmr_ChainState_FindFirstExpChainState_keyval3(Nmr_ChainState self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_ExpChainState  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ChainState_FindFirstExpChainState(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ChainState.expChainStates

ExpChainStates in 
which ChainState is involved.
  @param  Nmr_ChainState self
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
Nmr_ExpChainState Nmr_ChainState_FindFirstExpChainState_keyval4(Nmr_ChainState self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_ExpChainState  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ChainState_FindFirstExpChainState(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.ChainState.nmrConstraintStores

NmrConstraintStores using 
for this particular ChainState
  @param  Nmr_ChainState self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmrc_NmrConstraintStore Nmr_ChainState_FindFirstNmrConstraintStore(Nmr_ChainState self, ApiMap conditions)
{
  
  Nmrc_NmrConstraintStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstNmrConstraintStore");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainState: cannot find method 'findFirstNmrConstraintStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainState: method 'findFirstNmrConstraintStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.ChainState.nmrConstraintStores

NmrConstraintStores using 
for this particular ChainState
  @param  Nmr_ChainState self
  @returns  the first value that satisfies the conditions 
**/
Nmrc_NmrConstraintStore Nmr_ChainState_FindFirstNmrConstraintStore_keyval0(Nmr_ChainState self)
{
  
  Nmrc_NmrConstraintStore  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ChainState_FindFirstNmrConstraintStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.ChainState.nmrConstraintStores

NmrConstraintStores using 
for this particular ChainState
  @param  Nmr_ChainState self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmrc_NmrConstraintStore Nmr_ChainState_FindFirstNmrConstraintStore_keyval1(Nmr_ChainState self, char * key, ApiObject value)
{
  
  Nmrc_NmrConstraintStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ChainState_FindFirstNmrConstraintStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.ChainState.nmrConstraintStores

NmrConstraintStores using 
for this particular ChainState
  @param  Nmr_ChainState self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmrc_NmrConstraintStore Nmr_ChainState_FindFirstNmrConstraintStore_keyval2(Nmr_ChainState self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmrc_NmrConstraintStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ChainState_FindFirstNmrConstraintStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.ChainState.nmrConstraintStores

NmrConstraintStores using 
for this particular ChainState
  @param  Nmr_ChainState self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmrc_NmrConstraintStore Nmr_ChainState_FindFirstNmrConstraintStore_keyval3(Nmr_ChainState self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmrc_NmrConstraintStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ChainState_FindFirstNmrConstraintStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.ChainState.nmrConstraintStores

NmrConstraintStores using 
for this particular ChainState
  @param  Nmr_ChainState self
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
Nmrc_NmrConstraintStore Nmr_ChainState_FindFirstNmrConstraintStore_keyval4(Nmr_ChainState self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmrc_NmrConstraintStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ChainState_FindFirstNmrConstraintStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ChainState.resonances

Resonances that are 
found only in this chainState.
  @param  Nmr_ChainState self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_Resonance Nmr_ChainState_FindFirstResonance(Nmr_ChainState self, ApiMap conditions)
{
  
  Nmr_Resonance obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstResonance");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainState: cannot find method 'findFirstResonance'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainState: method 'findFirstResonance' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ChainState.resonances

Resonances that are 
found only in this chainState.
  @param  Nmr_ChainState self
  @returns  the first value that satisfies the conditions 
**/
Nmr_Resonance Nmr_ChainState_FindFirstResonance_keyval0(Nmr_ChainState self)
{
  
  Nmr_Resonance  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ChainState_FindFirstResonance(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ChainState.resonances

Resonances that are 
found only in this chainState.
  @param  Nmr_ChainState self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_Resonance Nmr_ChainState_FindFirstResonance_keyval1(Nmr_ChainState self, char * key, ApiObject value)
{
  
  Nmr_Resonance  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ChainState_FindFirstResonance(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ChainState.resonances

Resonances that are 
found only in this chainState.
  @param  Nmr_ChainState self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_Resonance Nmr_ChainState_FindFirstResonance_keyval2(Nmr_ChainState self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_Resonance  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ChainState_FindFirstResonance(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ChainState.resonances

Resonances that are 
found only in this chainState.
  @param  Nmr_ChainState self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_Resonance Nmr_ChainState_FindFirstResonance_keyval3(Nmr_ChainState self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_Resonance  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ChainState_FindFirstResonance(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ChainState.resonances

Resonances that are 
found only in this chainState.
  @param  Nmr_ChainState self
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
Nmr_Resonance Nmr_ChainState_FindFirstResonance_keyval4(Nmr_ChainState self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_Resonance  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ChainState_FindFirstResonance(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.nmr.Nmr.ChainState
  @param  Nmr_ChainState self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Nmr_ChainState_Get(Nmr_ChainState self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_ChainState self
  @returns   the result
**/
Acco_AccessObject Nmr_ChainState_GetAccess(Nmr_ChainState self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainState: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainState: method 'getAccess' is not callable");
  
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
  @param  Nmr_ChainState self
  @returns   the result
**/
ApiList Nmr_ChainState_GetApplicationData(Nmr_ChainState self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainState: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainState: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.Nmr.ChainState
  @param  Nmr_ChainState self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nmr_ChainState Nmr_ChainState_GetByKey(Nmr_ChainState self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Nmr_ChainState obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainState: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainState: method 'getByKey' is not callable");
  
  args = PyTuple_Pack(2, startObj, fullKey);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ChainState.chainStateSet

parent link
  @param  Nmr_ChainState self
  @returns   the result
**/
Nmr_ChainStateSet Nmr_ChainState_GetChainStateSet(Nmr_ChainState self)
{
  
  Nmr_ChainStateSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChainStateSet");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainState: cannot find method 'getChainStateSet'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainState: method 'getChainStateSet' is not callable");
  
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
  @param  Nmr_ChainState self
  @returns   the result
**/
ApiString Nmr_ChainState_GetClassName(Nmr_ChainState self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainState: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainState: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ChainState.details

Free text, for notes, 
explanatory comments, etc.
  @param  Nmr_ChainState self
  @returns   the result
**/
ApiString Nmr_ChainState_GetDetails(Nmr_ChainState self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainState: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainState: method 'getDetails' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ChainState.expChainStates

ExpChainStates in which 
ChainState is involved.
  @param  Nmr_ChainState self
  @returns   the result
**/
ApiSet Nmr_ChainState_GetExpChainStates(Nmr_ChainState self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExpChainStates");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainState: cannot find method 'getExpChainStates'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainState: method 'getExpChainStates' is not callable");
  
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
  @param  Nmr_ChainState self
  @returns   the result
**/
ApiList Nmr_ChainState_GetFieldNames(Nmr_ChainState self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainState: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainState: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.nmr.Nmr.ChainState
  @param  Nmr_ChainState self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Nmr_ChainState_GetFullKey(Nmr_ChainState self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainState: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainState: method 'getFullKey' is not callable");
  
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
  @param  Nmr_ChainState self
  @returns   the result
**/
ApiBoolean Nmr_ChainState_GetInConstructor(Nmr_ChainState self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainState: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainState: method 'getInConstructor' is not callable");
  
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
  @param  Nmr_ChainState self
  @returns   the result
**/
ApiBoolean Nmr_ChainState_GetIsDeleted(Nmr_ChainState self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainState: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainState: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.nmr.Nmr.ChainState
  @param  Nmr_ChainState self
  @returns  Local object key
**/
ApiObject Nmr_ChainState_GetLocalKey(Nmr_ChainState self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainState: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainState: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ChainState.name

name of ChainState. Used to 
characterise the state (e.g. 'cis' and 'trans' would be a good name for 
the states of a cis/trans ChainStateSet). See documentation to 
ChainStateSet for detailed recommendations.
  @param  Nmr_ChainState self
  @returns   the result
**/
ApiString Nmr_ChainState_GetName(Nmr_ChainState self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainState: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainState: method 'getName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ChainState.nmrConstraintStores

NmrConstraintStores 
using for this particular ChainState
  @param  Nmr_ChainState self
  @returns   the result
**/
ApiSet Nmr_ChainState_GetNmrConstraintStores(Nmr_ChainState self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrConstraintStores");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainState: cannot find method 'getNmrConstraintStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainState: method 'getNmrConstraintStores' is not callable");
  
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
  @param  Nmr_ChainState self
  @returns   the result
**/
ApiString Nmr_ChainState_GetPackageName(Nmr_ChainState self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainState: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainState: method 'getPackageName' is not callable");
  
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
  @param  Nmr_ChainState self
  @returns   the result
**/
ApiString Nmr_ChainState_GetPackageShortName(Nmr_ChainState self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainState: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainState: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ChainState.parent

link to parent object - synonym 
for chainStateSet
  @param  Nmr_ChainState self
  @returns   the result
**/
Nmr_ChainStateSet Nmr_ChainState_GetParent(Nmr_ChainState self)
{
  
  Nmr_ChainStateSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainState: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainState: method 'getParent' is not callable");
  
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
  @param  Nmr_ChainState self
  @returns   the result
**/
ApiString Nmr_ChainState_GetQualifiedName(Nmr_ChainState self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainState: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainState: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ChainState.resonances

Resonances that are found 
only in this chainState.
  @param  Nmr_ChainState self
  @returns   the result
**/
ApiSet Nmr_ChainState_GetResonances(Nmr_ChainState self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getResonances");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainState: cannot find method 'getResonances'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainState: method 'getResonances' is not callable");
  
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
  @param  Nmr_ChainState self
  @returns   the result
**/
Impl_MemopsRoot Nmr_ChainState_GetRoot(Nmr_ChainState self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainState: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainState: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ChainState.serial

Serial number of object. Serves 
as object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Nmr_ChainState self
  @returns   the result
**/
ApiInteger Nmr_ChainState_GetSerial(Nmr_ChainState self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainState: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainState: method 'getSerial' is not callable");
  
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
  @param  Nmr_ChainState self
  @returns   the result
**/
Impl_TopObject Nmr_ChainState_GetTopObject(Nmr_ChainState self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainState: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainState: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.nmr.Nmr.ChainState
  @param  Nmr_ChainStateSet parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_ChainState Nmr_ChainState_Init(Nmr_ChainStateSet parent, ApiMap attrlinks)
{
  
  return Nmr_ChainStateSet_NewChainState(parent, attrlinks);
}

/**
  Constructor for ccp.nmr.Nmr.ChainState
  @param  Nmr_ChainStateSet parent
  @returns  the new object
**/
Nmr_ChainState Nmr_ChainState_Init_reqd(Nmr_ChainStateSet parent)
{
  
  Nmr_ChainState  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Nmr_ChainState_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ChainState self
  @param  Impl_ApplicationData value
**/
void *Nmr_ChainState_RemoveApplicationData(Nmr_ChainState self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainState: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainState: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
ccp.nmr.Nmr.ChainState.nmrConstraintStores

NmrConstraintStores using 
for this particular ChainState
  @param  Nmr_ChainState self
  @param  Nmrc_NmrConstraintStore value
**/
void *Nmr_ChainState_RemoveNmrConstraintStore(Nmr_ChainState self, Nmrc_NmrConstraintStore value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeNmrConstraintStore");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainState: cannot find method 'removeNmrConstraintStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainState: method 'removeNmrConstraintStore' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.Nmr.ChainState.resonances

Resonances that are found 
only in this chainState.
  @param  Nmr_ChainState self
  @param  Nmr_Resonance value
**/
void *Nmr_ChainState_RemoveResonance(Nmr_ChainState self, Nmr_Resonance value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeResonance");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainState: cannot find method 'removeResonance'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainState: method 'removeResonance' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.nmr.Nmr.ChainState
  @param  Nmr_ChainState self
  @param  ApiString name
  @param  ApiObject value
**/
void *Nmr_ChainState_Set(Nmr_ChainState self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_ChainState self
  @param  Acco_AccessObject value
**/
void *Nmr_ChainState_SetAccess(Nmr_ChainState self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainState: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainState: method 'setAccess' is not callable");
  
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
  @param  Nmr_ChainState self
  @param  ApiList values
**/
void *Nmr_ChainState_SetApplicationData(Nmr_ChainState self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainState: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainState: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ChainState.details

Free text, for notes, 
explanatory comments, etc.
  @param  Nmr_ChainState self
  @param  ApiString value
**/
void *Nmr_ChainState_SetDetails(Nmr_ChainState self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainState: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainState: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ChainState.expChainStates

ExpChainStates in which 
ChainState is involved.
  @param  Nmr_ChainState self
  @param  ApiSet values
**/
void *Nmr_ChainState_SetExpChainStates(Nmr_ChainState self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setExpChainStates");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainState: cannot find method 'setExpChainStates'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainState: method 'setExpChainStates' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ChainState.name

name of ChainState. Used to 
characterise the state (e.g. 'cis' and 'trans' would be a good name for 
the states of a cis/trans ChainStateSet). See documentation to 
ChainStateSet for detailed recommendations.
  @param  Nmr_ChainState self
  @param  ApiString value
**/
void *Nmr_ChainState_SetName(Nmr_ChainState self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainState: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainState: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ChainState.nmrConstraintStores

NmrConstraintStores 
using for this particular ChainState
  @param  Nmr_ChainState self
  @param  ApiSet values
**/
void *Nmr_ChainState_SetNmrConstraintStores(Nmr_ChainState self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNmrConstraintStores");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainState: cannot find method 'setNmrConstraintStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainState: method 'setNmrConstraintStores' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ChainState.resonances

Resonances that are found 
only in this chainState.
  @param  Nmr_ChainState self
  @param  ApiSet values
**/
void *Nmr_ChainState_SetResonances(Nmr_ChainState self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setResonances");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainState: cannot find method 'setResonances'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainState: method 'setResonances' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ChainState.serial

Serial number of object. Serves 
as object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Nmr_ChainState self
  @param  ApiInteger value
**/
void *Nmr_ChainState_SetSerial(Nmr_ChainState self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainState: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainState: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.ChainState.expChainStates

ExpChainStates in 
which ChainState is involved.
  @param  Nmr_ChainState self
  @returns   the result
**/
ApiList Nmr_ChainState_SortedExpChainStates(Nmr_ChainState self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedExpChainStates");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainState: cannot find method 'sortedExpChainStates'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainState: method 'sortedExpChainStates' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.nmr.Nmr.ChainState.nmrConstraintStores

NmrConstraintStores using 
for this particular ChainState
  @param  Nmr_ChainState self
  @returns   the result
**/
ApiList Nmr_ChainState_SortedNmrConstraintStores(Nmr_ChainState self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedNmrConstraintStores");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainState: cannot find method 'sortedNmrConstraintStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainState: method 'sortedNmrConstraintStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.ChainState.resonances

Resonances that are found 
only in this chainState.
  @param  Nmr_ChainState self
  @returns   the result
**/
ApiList Nmr_ChainState_SortedResonances(Nmr_ChainState self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedResonances");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainState: cannot find method 'sortedResonances'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainState: method 'sortedResonances' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
