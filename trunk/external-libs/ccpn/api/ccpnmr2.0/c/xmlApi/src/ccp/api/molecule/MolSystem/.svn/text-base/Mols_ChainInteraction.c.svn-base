
#include "ccp.h"

/*
  Interaction between two Chains in a MolSystem
*/

/* package ccp.api.molecule.MolSystem */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_ChainInteraction self
  @param  Impl_ApplicationData value
**/
void *Mols_ChainInteraction_AddApplicationData(Mols_ChainInteraction self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.ChainInteraction: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.ChainInteraction: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.molecule.MolSystem.ChainInteraction
  @param  Mols_ChainInteraction self
  @param  ApiBoolean complete
**/
void *Mols_ChainInteraction_CheckAllValid(Mols_ChainInteraction self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.ChainInteraction: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.ChainInteraction: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.molecule.MolSystem.ChainInteraction
  @param  Mols_ChainInteraction self
  @param  ApiBoolean complete
**/
void *Mols_ChainInteraction_CheckValid(Mols_ChainInteraction self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.ChainInteraction: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.ChainInteraction: method 'checkValid' is not callable");
  
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
  @param  Mols_ChainInteraction self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Mols_ChainInteraction_FindAllApplicationData(Mols_ChainInteraction self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.ChainInteraction: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.ChainInteraction: method 'findAllApplicationData' is not callable");
  
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
  @param  Mols_ChainInteraction self
  @returns  all value that satisfy the conditions 
**/
ApiList Mols_ChainInteraction_FindAllApplicationData_keyval0(Mols_ChainInteraction self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mols_ChainInteraction_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_ChainInteraction self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Mols_ChainInteraction_FindAllApplicationData_keyval1(Mols_ChainInteraction self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mols_ChainInteraction_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_ChainInteraction self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Mols_ChainInteraction_FindAllApplicationData_keyval2(Mols_ChainInteraction self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mols_ChainInteraction_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_ChainInteraction self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Mols_ChainInteraction_FindAllApplicationData_keyval3(Mols_ChainInteraction self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mols_ChainInteraction_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_ChainInteraction self
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
ApiList Mols_ChainInteraction_FindAllApplicationData_keyval4(Mols_ChainInteraction self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mols_ChainInteraction_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.ChainInteraction.chains

Chains 
interacting in ChainInteraction.
  @param  Mols_ChainInteraction self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_ChainInteraction_FindAllChains(Mols_ChainInteraction self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChains");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.ChainInteraction: cannot find method 'findAllChains'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.ChainInteraction: method 'findAllChains' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.ChainInteraction.chains

Chains 
interacting in ChainInteraction.
  @param  Mols_ChainInteraction self
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_ChainInteraction_FindAllChains_keyval0(Mols_ChainInteraction self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mols_ChainInteraction_FindAllChains(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.ChainInteraction.chains

Chains 
interacting in ChainInteraction.
  @param  Mols_ChainInteraction self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_ChainInteraction_FindAllChains_keyval1(Mols_ChainInteraction self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mols_ChainInteraction_FindAllChains(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.ChainInteraction.chains

Chains 
interacting in ChainInteraction.
  @param  Mols_ChainInteraction self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_ChainInteraction_FindAllChains_keyval2(Mols_ChainInteraction self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mols_ChainInteraction_FindAllChains(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.ChainInteraction.chains

Chains 
interacting in ChainInteraction.
  @param  Mols_ChainInteraction self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_ChainInteraction_FindAllChains_keyval3(Mols_ChainInteraction self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mols_ChainInteraction_FindAllChains(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.ChainInteraction.chains

Chains 
interacting in ChainInteraction.
  @param  Mols_ChainInteraction self
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
ApiSet Mols_ChainInteraction_FindAllChains_keyval4(Mols_ChainInteraction self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mols_ChainInteraction_FindAllChains(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_ChainInteraction self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Mols_ChainInteraction_FindFirstApplicationData(Mols_ChainInteraction self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.ChainInteraction: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.ChainInteraction: method 'findFirstApplicationData' is not callable");
  
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
  @param  Mols_ChainInteraction self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Mols_ChainInteraction_FindFirstApplicationData_keyval0(Mols_ChainInteraction self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mols_ChainInteraction_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_ChainInteraction self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Mols_ChainInteraction_FindFirstApplicationData_keyval1(Mols_ChainInteraction self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mols_ChainInteraction_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_ChainInteraction self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Mols_ChainInteraction_FindFirstApplicationData_keyval2(Mols_ChainInteraction self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mols_ChainInteraction_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_ChainInteraction self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Mols_ChainInteraction_FindFirstApplicationData_keyval3(Mols_ChainInteraction self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mols_ChainInteraction_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_ChainInteraction self
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
Impl_ApplicationData Mols_ChainInteraction_FindFirstApplicationData_keyval4(Mols_ChainInteraction self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mols_ChainInteraction_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.ChainInteraction.chains

Chains 
interacting in ChainInteraction.
  @param  Mols_ChainInteraction self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Mols_Chain Mols_ChainInteraction_FindFirstChain(Mols_ChainInteraction self, ApiMap conditions)
{
  
  Mols_Chain obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChain");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.ChainInteraction: cannot find method 'findFirstChain'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.ChainInteraction: method 'findFirstChain' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.ChainInteraction.chains

Chains 
interacting in ChainInteraction.
  @param  Mols_ChainInteraction self
  @returns  the first value that satisfies the conditions 
**/
Mols_Chain Mols_ChainInteraction_FindFirstChain_keyval0(Mols_ChainInteraction self)
{
  
  Mols_Chain  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mols_ChainInteraction_FindFirstChain(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.ChainInteraction.chains

Chains 
interacting in ChainInteraction.
  @param  Mols_ChainInteraction self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Mols_Chain Mols_ChainInteraction_FindFirstChain_keyval1(Mols_ChainInteraction self, char * key, ApiObject value)
{
  
  Mols_Chain  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mols_ChainInteraction_FindFirstChain(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.ChainInteraction.chains

Chains 
interacting in ChainInteraction.
  @param  Mols_ChainInteraction self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Mols_Chain Mols_ChainInteraction_FindFirstChain_keyval2(Mols_ChainInteraction self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Mols_Chain  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mols_ChainInteraction_FindFirstChain(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.ChainInteraction.chains

Chains 
interacting in ChainInteraction.
  @param  Mols_ChainInteraction self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Mols_Chain Mols_ChainInteraction_FindFirstChain_keyval3(Mols_ChainInteraction self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Mols_Chain  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mols_ChainInteraction_FindFirstChain(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.ChainInteraction.chains

Chains 
interacting in ChainInteraction.
  @param  Mols_ChainInteraction self
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
Mols_Chain Mols_ChainInteraction_FindFirstChain_keyval4(Mols_ChainInteraction self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Mols_Chain  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mols_ChainInteraction_FindFirstChain(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.molecule.MolSystem.ChainInteraction
  @param  Mols_ChainInteraction self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Mols_ChainInteraction_Get(Mols_ChainInteraction self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Mols_ChainInteraction self
  @returns   the result
**/
Acco_AccessObject Mols_ChainInteraction_GetAccess(Mols_ChainInteraction self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.ChainInteraction: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.ChainInteraction: method 'getAccess' is not callable");
  
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
  @param  Mols_ChainInteraction self
  @returns   the result
**/
ApiList Mols_ChainInteraction_GetApplicationData(Mols_ChainInteraction self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.ChainInteraction: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.ChainInteraction: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.molecule.MolSystem.ChainInteraction
  @param  Mols_ChainInteraction self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Mols_ChainInteraction Mols_ChainInteraction_GetByKey(Mols_ChainInteraction self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Mols_ChainInteraction obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.ChainInteraction: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.ChainInteraction: method 'getByKey' is not callable");
  
  args = PyTuple_Pack(2, startObj, fullKey);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolSystem.ChainInteraction.chains

Chains 
interacting in ChainInteraction.
  @param  Mols_ChainInteraction self
  @returns   the result
**/
ApiSet Mols_ChainInteraction_GetChains(Mols_ChainInteraction self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChains");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.ChainInteraction: cannot find method 'getChains'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.ChainInteraction: method 'getChains' is not callable");
  
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
  @param  Mols_ChainInteraction self
  @returns   the result
**/
ApiString Mols_ChainInteraction_GetClassName(Mols_ChainInteraction self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.ChainInteraction: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.ChainInteraction: method 'getClassName' is not callable");
  
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
  @param  Mols_ChainInteraction self
  @returns   the result
**/
ApiList Mols_ChainInteraction_GetFieldNames(Mols_ChainInteraction self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.ChainInteraction: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.ChainInteraction: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.molecule.MolSystem.ChainInteraction
  @param  Mols_ChainInteraction self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Mols_ChainInteraction_GetFullKey(Mols_ChainInteraction self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.ChainInteraction: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.ChainInteraction: method 'getFullKey' is not callable");
  
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
  @param  Mols_ChainInteraction self
  @returns   the result
**/
ApiBoolean Mols_ChainInteraction_GetInConstructor(Mols_ChainInteraction self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.ChainInteraction: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.ChainInteraction: method 'getInConstructor' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolSystem.ChainInteraction.interactionType

String 
specifying the type of interaction between chains. NB should maybe be 
made into an open enumeration.
  @param  Mols_ChainInteraction self
  @returns   the result
**/
ApiString Mols_ChainInteraction_GetInteractionType(Mols_ChainInteraction self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInteractionType");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.ChainInteraction: cannot find method 'getInteractionType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.ChainInteraction: method 'getInteractionType' is not callable");
  
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
  @param  Mols_ChainInteraction self
  @returns   the result
**/
ApiBoolean Mols_ChainInteraction_GetIsDeleted(Mols_ChainInteraction self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.ChainInteraction: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.ChainInteraction: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.molecule.MolSystem.ChainInteraction
  @param  Mols_ChainInteraction self
  @returns  Local object key
**/
ApiObject Mols_ChainInteraction_GetLocalKey(Mols_ChainInteraction self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.ChainInteraction: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.ChainInteraction: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolSystem.ChainInteraction.molSystem

parent link
  @param  Mols_ChainInteraction self
  @returns   the result
**/
Mols_MolSystem Mols_ChainInteraction_GetMolSystem(Mols_ChainInteraction self)
{
  
  Mols_MolSystem obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolSystem");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.ChainInteraction: cannot find method 'getMolSystem'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.ChainInteraction: method 'getMolSystem' is not callable");
  
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
  @param  Mols_ChainInteraction self
  @returns   the result
**/
ApiString Mols_ChainInteraction_GetPackageName(Mols_ChainInteraction self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.ChainInteraction: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.ChainInteraction: method 'getPackageName' is not callable");
  
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
  @param  Mols_ChainInteraction self
  @returns   the result
**/
ApiString Mols_ChainInteraction_GetPackageShortName(Mols_ChainInteraction self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.ChainInteraction: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.ChainInteraction: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolSystem.ChainInteraction.parent

link to parent 
object - synonym for molSystem
  @param  Mols_ChainInteraction self
  @returns   the result
**/
Mols_MolSystem Mols_ChainInteraction_GetParent(Mols_ChainInteraction self)
{
  
  Mols_MolSystem obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.ChainInteraction: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.ChainInteraction: method 'getParent' is not callable");
  
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
  @param  Mols_ChainInteraction self
  @returns   the result
**/
ApiString Mols_ChainInteraction_GetQualifiedName(Mols_ChainInteraction self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.ChainInteraction: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.ChainInteraction: method 'getQualifiedName' is not callable");
  
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
  @param  Mols_ChainInteraction self
  @returns   the result
**/
Impl_MemopsRoot Mols_ChainInteraction_GetRoot(Mols_ChainInteraction self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.ChainInteraction: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.ChainInteraction: method 'getRoot' is not callable");
  
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
  @param  Mols_ChainInteraction self
  @returns   the result
**/
Impl_TopObject Mols_ChainInteraction_GetTopObject(Mols_ChainInteraction self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.ChainInteraction: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.ChainInteraction: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.molecule.MolSystem.ChainInteraction
  @param  Mols_MolSystem parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Mols_ChainInteraction Mols_ChainInteraction_Init(Mols_MolSystem parent, ApiMap attrlinks)
{
  
  return Mols_MolSystem_NewChainInteraction(parent, attrlinks);
}

/**
  Constructor for ccp.molecule.MolSystem.ChainInteraction
  @param  Mols_MolSystem parent
  @param  ApiSet chains
  @returns  the new object
**/
Mols_ChainInteraction Mols_ChainInteraction_Init_reqd(Mols_MolSystem parent, ApiSet chains)
{
  
  Mols_ChainInteraction  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "chains", chains);
  
  obj = Mols_ChainInteraction_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_ChainInteraction self
  @param  Impl_ApplicationData value
**/
void *Mols_ChainInteraction_RemoveApplicationData(Mols_ChainInteraction self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.ChainInteraction: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.ChainInteraction: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.molecule.MolSystem.ChainInteraction
  @param  Mols_ChainInteraction self
  @param  ApiString name
  @param  ApiObject value
**/
void *Mols_ChainInteraction_Set(Mols_ChainInteraction self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Mols_ChainInteraction self
  @param  Acco_AccessObject value
**/
void *Mols_ChainInteraction_SetAccess(Mols_ChainInteraction self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.ChainInteraction: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.ChainInteraction: method 'setAccess' is not callable");
  
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
  @param  Mols_ChainInteraction self
  @param  ApiList values
**/
void *Mols_ChainInteraction_SetApplicationData(Mols_ChainInteraction self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.ChainInteraction: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.ChainInteraction: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.MolSystem.ChainInteraction.chains

Chains 
interacting in ChainInteraction.
  @param  Mols_ChainInteraction self
  @param  ApiSet values
**/
void *Mols_ChainInteraction_SetChains(Mols_ChainInteraction self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setChains");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.ChainInteraction: cannot find method 'setChains'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.ChainInteraction: method 'setChains' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.MolSystem.ChainInteraction.interactionType

String 
specifying the type of interaction between chains. NB should maybe be 
made into an open enumeration.
  @param  Mols_ChainInteraction self
  @param  ApiString value
**/
void *Mols_ChainInteraction_SetInteractionType(Mols_ChainInteraction self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setInteractionType");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.ChainInteraction: cannot find method 'setInteractionType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.ChainInteraction: method 'setInteractionType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.MolSystem.ChainInteraction.chains

Chains 
interacting in ChainInteraction.
  @param  Mols_ChainInteraction self
  @returns   the result
**/
ApiList Mols_ChainInteraction_SortedChains(Mols_ChainInteraction self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChains");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.ChainInteraction: cannot find method 'sortedChains'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.ChainInteraction: method 'sortedChains' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
