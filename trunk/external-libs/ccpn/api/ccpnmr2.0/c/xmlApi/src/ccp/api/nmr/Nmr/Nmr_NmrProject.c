
#include "ccp.h"

/*
  grouping of related NMR data
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_NmrProject self
  @param  Impl_ApplicationData value
**/
void *Nmr_NmrProject_AddApplicationData(Nmr_NmrProject self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for 
ccp.nmr.Nmr.NmrProject.structureValidationStores

ValidationStores 
relevant to NmrProject
  @param  Nmr_NmrProject self
  @param  Vald_ValidationStore value
**/
void *Nmr_NmrProject_AddValidationStore(Nmr_NmrProject self, Vald_ValidationStore value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addValidationStore");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'addValidationStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'addValidationStore' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.nmr.Nmr.NmrProject
  @param  Nmr_NmrProject self
  @param  ApiBoolean complete
**/
void *Nmr_NmrProject_CheckAllValid(Nmr_NmrProject self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.nmr.Nmr.NmrProject
  @param  Nmr_NmrProject self
  @param  ApiBoolean complete
**/
void *Nmr_NmrProject_CheckValid(Nmr_NmrProject self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'checkValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Nmr_NmrProject self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_NmrProject_FindAllActiveRepositories(Nmr_NmrProject self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllActiveRepositories");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'findAllActiveRepositories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'findAllActiveRepositories' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Nmr_NmrProject self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_NmrProject_FindAllActiveRepositories_keyval0(Nmr_NmrProject self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_NmrProject_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Nmr_NmrProject self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_NmrProject_FindAllActiveRepositories_keyval1(Nmr_NmrProject self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_NmrProject_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_NmrProject_FindAllActiveRepositories_keyval2(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_NmrProject_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_NmrProject_FindAllActiveRepositories_keyval3(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_NmrProject_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Nmr_NmrProject self
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
ApiList Nmr_NmrProject_FindAllActiveRepositories_keyval4(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_NmrProject_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_NmrProject self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_NmrProject_FindAllApplicationData(Nmr_NmrProject self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'findAllApplicationData' is not callable");
  
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
  @param  Nmr_NmrProject self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_NmrProject_FindAllApplicationData_keyval0(Nmr_NmrProject self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_NmrProject_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_NmrProject self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_NmrProject_FindAllApplicationData_keyval1(Nmr_NmrProject self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_NmrProject_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_NmrProject_FindAllApplicationData_keyval2(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_NmrProject_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_NmrProject_FindAllApplicationData_keyval3(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_NmrProject_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_NmrProject self
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
ApiList Nmr_NmrProject_FindAllApplicationData_keyval4(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_NmrProject_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.atomSets

child link to class AtomSet
  @param  Nmr_NmrProject self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllAtomSets(Nmr_NmrProject self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllAtomSets");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'findAllAtomSets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'findAllAtomSets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.atomSets

child link to class AtomSet
  @param  Nmr_NmrProject self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllAtomSets_keyval0(Nmr_NmrProject self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_NmrProject_FindAllAtomSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.atomSets

child link to class AtomSet
  @param  Nmr_NmrProject self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllAtomSets_keyval1(Nmr_NmrProject self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_NmrProject_FindAllAtomSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.atomSets

child link to class AtomSet
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllAtomSets_keyval2(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_NmrProject_FindAllAtomSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.atomSets

child link to class AtomSet
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllAtomSets_keyval3(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_NmrProject_FindAllAtomSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.atomSets

child link to class AtomSet
  @param  Nmr_NmrProject self
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
ApiSet Nmr_NmrProject_FindAllAtomSets_keyval4(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_NmrProject_FindAllAtomSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.chainStateSets

child link to class 
ChainStateSet
  @param  Nmr_NmrProject self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllChainStateSets(Nmr_NmrProject self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChainStateSets");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'findAllChainStateSets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'findAllChainStateSets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.chainStateSets

child link to class 
ChainStateSet
  @param  Nmr_NmrProject self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllChainStateSets_keyval0(Nmr_NmrProject self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_NmrProject_FindAllChainStateSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.chainStateSets

child link to class 
ChainStateSet
  @param  Nmr_NmrProject self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllChainStateSets_keyval1(Nmr_NmrProject self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_NmrProject_FindAllChainStateSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.chainStateSets

child link to class 
ChainStateSet
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllChainStateSets_keyval2(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_NmrProject_FindAllChainStateSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.chainStateSets

child link to class 
ChainStateSet
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllChainStateSets_keyval3(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_NmrProject_FindAllChainStateSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.chainStateSets

child link to class 
ChainStateSet
  @param  Nmr_NmrProject self
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
ApiSet Nmr_NmrProject_FindAllChainStateSets_keyval4(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_NmrProject_FindAllChainStateSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.derivedDataLists

child link to class 
DerivedDataList
  @param  Nmr_NmrProject self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllDerivedDataLists(Nmr_NmrProject self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllDerivedDataLists");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'findAllDerivedDataLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'findAllDerivedDataLists' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.derivedDataLists

child link to class 
DerivedDataList
  @param  Nmr_NmrProject self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllDerivedDataLists_keyval0(Nmr_NmrProject self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_NmrProject_FindAllDerivedDataLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.derivedDataLists

child link to class 
DerivedDataList
  @param  Nmr_NmrProject self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllDerivedDataLists_keyval1(Nmr_NmrProject self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_NmrProject_FindAllDerivedDataLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.derivedDataLists

child link to class 
DerivedDataList
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllDerivedDataLists_keyval2(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_NmrProject_FindAllDerivedDataLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.derivedDataLists

child link to class 
DerivedDataList
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllDerivedDataLists_keyval3(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_NmrProject_FindAllDerivedDataLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.derivedDataLists

child link to class 
DerivedDataList
  @param  Nmr_NmrProject self
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
ApiSet Nmr_NmrProject_FindAllDerivedDataLists_keyval4(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_NmrProject_FindAllDerivedDataLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.experiments

child link to class 
Experiment
  @param  Nmr_NmrProject self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllExperiments(Nmr_NmrProject self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllExperiments");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'findAllExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'findAllExperiments' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.experiments

child link to class 
Experiment
  @param  Nmr_NmrProject self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllExperiments_keyval0(Nmr_NmrProject self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_NmrProject_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.experiments

child link to class 
Experiment
  @param  Nmr_NmrProject self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllExperiments_keyval1(Nmr_NmrProject self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_NmrProject_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.experiments

child link to class 
Experiment
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllExperiments_keyval2(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_NmrProject_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.experiments

child link to class 
Experiment
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllExperiments_keyval3(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_NmrProject_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.experiments

child link to class 
Experiment
  @param  Nmr_NmrProject self
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
ApiSet Nmr_NmrProject_FindAllExperiments_keyval4(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_NmrProject_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.measurementLists

child link to class 
AbstractMeasurementList
  @param  Nmr_NmrProject self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllMeasurementLists(Nmr_NmrProject self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllMeasurementLists");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'findAllMeasurementLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'findAllMeasurementLists' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.measurementLists

child link to class 
AbstractMeasurementList
  @param  Nmr_NmrProject self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllMeasurementLists_keyval0(Nmr_NmrProject self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_NmrProject_FindAllMeasurementLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.measurementLists

child link to class 
AbstractMeasurementList
  @param  Nmr_NmrProject self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllMeasurementLists_keyval1(Nmr_NmrProject self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_NmrProject_FindAllMeasurementLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.measurementLists

child link to class 
AbstractMeasurementList
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllMeasurementLists_keyval2(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_NmrProject_FindAllMeasurementLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.measurementLists

child link to class 
AbstractMeasurementList
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllMeasurementLists_keyval3(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_NmrProject_FindAllMeasurementLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.measurementLists

child link to class 
AbstractMeasurementList
  @param  Nmr_NmrProject self
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
ApiSet Nmr_NmrProject_FindAllMeasurementLists_keyval4(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_NmrProject_FindAllMeasurementLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.NmrProject.nmrConstraintStores

NmrConstraintStores that 
refer to the NmrProject
  @param  Nmr_NmrProject self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllNmrConstraintStores(Nmr_NmrProject self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllNmrConstraintStores");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'findAllNmrConstraintStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'findAllNmrConstraintStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.NmrProject.nmrConstraintStores

NmrConstraintStores that 
refer to the NmrProject
  @param  Nmr_NmrProject self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllNmrConstraintStores_keyval0(Nmr_NmrProject self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_NmrProject_FindAllNmrConstraintStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.NmrProject.nmrConstraintStores

NmrConstraintStores that 
refer to the NmrProject
  @param  Nmr_NmrProject self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllNmrConstraintStores_keyval1(Nmr_NmrProject self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_NmrProject_FindAllNmrConstraintStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.NmrProject.nmrConstraintStores

NmrConstraintStores that 
refer to the NmrProject
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllNmrConstraintStores_keyval2(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_NmrProject_FindAllNmrConstraintStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.NmrProject.nmrConstraintStores

NmrConstraintStores that 
refer to the NmrProject
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllNmrConstraintStores_keyval3(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_NmrProject_FindAllNmrConstraintStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.NmrProject.nmrConstraintStores

NmrConstraintStores that 
refer to the NmrProject
  @param  Nmr_NmrProject self
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
ApiSet Nmr_NmrProject_FindAllNmrConstraintStores_keyval4(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_NmrProject_FindAllNmrConstraintStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.nmrExpSeries

child link to class 
NmrExpSeries
  @param  Nmr_NmrProject self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllNmrExpSeries(Nmr_NmrProject self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllNmrExpSeries");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'findAllNmrExpSeries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'findAllNmrExpSeries' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.nmrExpSeries

child link to class 
NmrExpSeries
  @param  Nmr_NmrProject self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllNmrExpSeries_keyval0(Nmr_NmrProject self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_NmrProject_FindAllNmrExpSeries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.nmrExpSeries

child link to class 
NmrExpSeries
  @param  Nmr_NmrProject self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllNmrExpSeries_keyval1(Nmr_NmrProject self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_NmrProject_FindAllNmrExpSeries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.nmrExpSeries

child link to class 
NmrExpSeries
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllNmrExpSeries_keyval2(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_NmrProject_FindAllNmrExpSeries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.nmrExpSeries

child link to class 
NmrExpSeries
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllNmrExpSeries_keyval3(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_NmrProject_FindAllNmrExpSeries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.nmrExpSeries

child link to class 
NmrExpSeries
  @param  Nmr_NmrProject self
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
ApiSet Nmr_NmrProject_FindAllNmrExpSeries_keyval4(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_NmrProject_FindAllNmrExpSeries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.peakClusters

child link to class 
PeakCluster
  @param  Nmr_NmrProject self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllPeakClusters(Nmr_NmrProject self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllPeakClusters");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'findAllPeakClusters'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'findAllPeakClusters' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.peakClusters

child link to class 
PeakCluster
  @param  Nmr_NmrProject self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllPeakClusters_keyval0(Nmr_NmrProject self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_NmrProject_FindAllPeakClusters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.peakClusters

child link to class 
PeakCluster
  @param  Nmr_NmrProject self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllPeakClusters_keyval1(Nmr_NmrProject self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_NmrProject_FindAllPeakClusters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.peakClusters

child link to class 
PeakCluster
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllPeakClusters_keyval2(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_NmrProject_FindAllPeakClusters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.peakClusters

child link to class 
PeakCluster
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllPeakClusters_keyval3(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_NmrProject_FindAllPeakClusters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.peakClusters

child link to class 
PeakCluster
  @param  Nmr_NmrProject self
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
ApiSet Nmr_NmrProject_FindAllPeakClusters_keyval4(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_NmrProject_FindAllPeakClusters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.resonanceGroups

child link to class 
ResonanceGroup
  @param  Nmr_NmrProject self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllResonanceGroups(Nmr_NmrProject self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllResonanceGroups");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'findAllResonanceGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'findAllResonanceGroups' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.resonanceGroups

child link to class 
ResonanceGroup
  @param  Nmr_NmrProject self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllResonanceGroups_keyval0(Nmr_NmrProject self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_NmrProject_FindAllResonanceGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.resonanceGroups

child link to class 
ResonanceGroup
  @param  Nmr_NmrProject self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllResonanceGroups_keyval1(Nmr_NmrProject self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_NmrProject_FindAllResonanceGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.resonanceGroups

child link to class 
ResonanceGroup
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllResonanceGroups_keyval2(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_NmrProject_FindAllResonanceGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.resonanceGroups

child link to class 
ResonanceGroup
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllResonanceGroups_keyval3(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_NmrProject_FindAllResonanceGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.resonanceGroups

child link to class 
ResonanceGroup
  @param  Nmr_NmrProject self
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
ApiSet Nmr_NmrProject_FindAllResonanceGroups_keyval4(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_NmrProject_FindAllResonanceGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.resonanceSets

child link to class 
ResonanceSet
  @param  Nmr_NmrProject self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllResonanceSets(Nmr_NmrProject self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllResonanceSets");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'findAllResonanceSets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'findAllResonanceSets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.resonanceSets

child link to class 
ResonanceSet
  @param  Nmr_NmrProject self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllResonanceSets_keyval0(Nmr_NmrProject self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_NmrProject_FindAllResonanceSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.resonanceSets

child link to class 
ResonanceSet
  @param  Nmr_NmrProject self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllResonanceSets_keyval1(Nmr_NmrProject self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_NmrProject_FindAllResonanceSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.resonanceSets

child link to class 
ResonanceSet
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllResonanceSets_keyval2(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_NmrProject_FindAllResonanceSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.resonanceSets

child link to class 
ResonanceSet
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllResonanceSets_keyval3(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_NmrProject_FindAllResonanceSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.resonanceSets

child link to class 
ResonanceSet
  @param  Nmr_NmrProject self
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
ApiSet Nmr_NmrProject_FindAllResonanceSets_keyval4(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_NmrProject_FindAllResonanceSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.resonances

child link to class 
Resonance
  @param  Nmr_NmrProject self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllResonances(Nmr_NmrProject self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllResonances");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'findAllResonances'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'findAllResonances' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.resonances

child link to class 
Resonance
  @param  Nmr_NmrProject self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllResonances_keyval0(Nmr_NmrProject self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_NmrProject_FindAllResonances(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.resonances

child link to class 
Resonance
  @param  Nmr_NmrProject self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllResonances_keyval1(Nmr_NmrProject self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_NmrProject_FindAllResonances(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.resonances

child link to class 
Resonance
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllResonances_keyval2(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_NmrProject_FindAllResonances(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.resonances

child link to class 
Resonance
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllResonances_keyval3(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_NmrProject_FindAllResonances(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.resonances

child link to class 
Resonance
  @param  Nmr_NmrProject self
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
ApiSet Nmr_NmrProject_FindAllResonances_keyval4(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_NmrProject_FindAllResonances(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.sampleConditionSets

child link to 
class SampleConditionSet
  @param  Nmr_NmrProject self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllSampleConditionSets(Nmr_NmrProject self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllSampleConditionSets");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'findAllSampleConditionSets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'findAllSampleConditionSets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.sampleConditionSets

child link to 
class SampleConditionSet
  @param  Nmr_NmrProject self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllSampleConditionSets_keyval0(Nmr_NmrProject self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_NmrProject_FindAllSampleConditionSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.sampleConditionSets

child link to 
class SampleConditionSet
  @param  Nmr_NmrProject self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllSampleConditionSets_keyval1(Nmr_NmrProject self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_NmrProject_FindAllSampleConditionSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.sampleConditionSets

child link to 
class SampleConditionSet
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllSampleConditionSets_keyval2(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_NmrProject_FindAllSampleConditionSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.sampleConditionSets

child link to 
class SampleConditionSet
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllSampleConditionSets_keyval3(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_NmrProject_FindAllSampleConditionSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.sampleConditionSets

child link to 
class SampleConditionSet
  @param  Nmr_NmrProject self
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
ApiSet Nmr_NmrProject_FindAllSampleConditionSets_keyval4(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_NmrProject_FindAllSampleConditionSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.shiftReferences

child link to class 
ShiftReference
  @param  Nmr_NmrProject self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllShiftReferences(Nmr_NmrProject self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllShiftReferences");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'findAllShiftReferences'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'findAllShiftReferences' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.shiftReferences

child link to class 
ShiftReference
  @param  Nmr_NmrProject self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllShiftReferences_keyval0(Nmr_NmrProject self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_NmrProject_FindAllShiftReferences(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.shiftReferences

child link to class 
ShiftReference
  @param  Nmr_NmrProject self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllShiftReferences_keyval1(Nmr_NmrProject self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_NmrProject_FindAllShiftReferences(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.shiftReferences

child link to class 
ShiftReference
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllShiftReferences_keyval2(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_NmrProject_FindAllShiftReferences(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.shiftReferences

child link to class 
ShiftReference
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllShiftReferences_keyval3(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_NmrProject_FindAllShiftReferences(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.shiftReferences

child link to class 
ShiftReference
  @param  Nmr_NmrProject self
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
ApiSet Nmr_NmrProject_FindAllShiftReferences_keyval4(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_NmrProject_FindAllShiftReferences(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.structureAnalysiss

child link to 
class StructureAnalysis
  @param  Nmr_NmrProject self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllStructureAnalysiss(Nmr_NmrProject self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllStructureAnalysiss");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'findAllStructureAnalysiss'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'findAllStructureAnalysiss' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.structureAnalysiss

child link to 
class StructureAnalysis
  @param  Nmr_NmrProject self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllStructureAnalysiss_keyval0(Nmr_NmrProject self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_NmrProject_FindAllStructureAnalysiss(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.structureAnalysiss

child link to 
class StructureAnalysis
  @param  Nmr_NmrProject self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllStructureAnalysiss_keyval1(Nmr_NmrProject self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_NmrProject_FindAllStructureAnalysiss(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.structureAnalysiss

child link to 
class StructureAnalysis
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllStructureAnalysiss_keyval2(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_NmrProject_FindAllStructureAnalysiss(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.structureAnalysiss

child link to 
class StructureAnalysis
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllStructureAnalysiss_keyval3(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_NmrProject_FindAllStructureAnalysiss(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.structureAnalysiss

child link to 
class StructureAnalysis
  @param  Nmr_NmrProject self
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
ApiSet Nmr_NmrProject_FindAllStructureAnalysiss_keyval4(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_NmrProject_FindAllStructureAnalysiss(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.structureGenerations

child link to 
class StructureGeneration
  @param  Nmr_NmrProject self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllStructureGenerations(Nmr_NmrProject self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllStructureGenerations");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'findAllStructureGenerations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'findAllStructureGenerations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.structureGenerations

child link to 
class StructureGeneration
  @param  Nmr_NmrProject self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllStructureGenerations_keyval0(Nmr_NmrProject self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_NmrProject_FindAllStructureGenerations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.structureGenerations

child link to 
class StructureGeneration
  @param  Nmr_NmrProject self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllStructureGenerations_keyval1(Nmr_NmrProject self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_NmrProject_FindAllStructureGenerations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.structureGenerations

child link to 
class StructureGeneration
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllStructureGenerations_keyval2(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_NmrProject_FindAllStructureGenerations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.structureGenerations

child link to 
class StructureGeneration
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllStructureGenerations_keyval3(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_NmrProject_FindAllStructureGenerations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.NmrProject.structureGenerations

child link to 
class StructureGeneration
  @param  Nmr_NmrProject self
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
ApiSet Nmr_NmrProject_FindAllStructureGenerations_keyval4(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_NmrProject_FindAllStructureGenerations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.NmrProject.structureValidationStores

ValidationStores 
relevant to NmrProject
  @param  Nmr_NmrProject self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllValidationStores(Nmr_NmrProject self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllValidationStores");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'findAllValidationStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'findAllValidationStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.NmrProject.structureValidationStores

ValidationStores 
relevant to NmrProject
  @param  Nmr_NmrProject self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllValidationStores_keyval0(Nmr_NmrProject self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_NmrProject_FindAllValidationStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.NmrProject.structureValidationStores

ValidationStores 
relevant to NmrProject
  @param  Nmr_NmrProject self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllValidationStores_keyval1(Nmr_NmrProject self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_NmrProject_FindAllValidationStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.NmrProject.structureValidationStores

ValidationStores 
relevant to NmrProject
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllValidationStores_keyval2(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_NmrProject_FindAllValidationStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.NmrProject.structureValidationStores

ValidationStores 
relevant to NmrProject
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_NmrProject_FindAllValidationStores_keyval3(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_NmrProject_FindAllValidationStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.NmrProject.structureValidationStores

ValidationStores 
relevant to NmrProject
  @param  Nmr_NmrProject self
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
ApiSet Nmr_NmrProject_FindAllValidationStores_keyval4(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_NmrProject_FindAllValidationStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Nmr_NmrProject self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Nmr_NmrProject_FindFirstActiveRepository(Nmr_NmrProject self, ApiMap conditions)
{
  
  Impl_Repository obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstActiveRepository");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'findFirstActiveRepository'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'findFirstActiveRepository' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Nmr_NmrProject self
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Nmr_NmrProject_FindFirstActiveRepository_keyval0(Nmr_NmrProject self)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_NmrProject_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Nmr_NmrProject self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Nmr_NmrProject_FindFirstActiveRepository_keyval1(Nmr_NmrProject self, char * key, ApiObject value)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_NmrProject_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Nmr_NmrProject_FindFirstActiveRepository_keyval2(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_NmrProject_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Nmr_NmrProject_FindFirstActiveRepository_keyval3(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_NmrProject_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Nmr_NmrProject self
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
Impl_Repository Nmr_NmrProject_FindFirstActiveRepository_keyval4(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_NmrProject_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_NmrProject self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_NmrProject_FindFirstApplicationData(Nmr_NmrProject self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nmr_NmrProject self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_NmrProject_FindFirstApplicationData_keyval0(Nmr_NmrProject self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_NmrProject_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_NmrProject self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_NmrProject_FindFirstApplicationData_keyval1(Nmr_NmrProject self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_NmrProject_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_NmrProject_FindFirstApplicationData_keyval2(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_NmrProject_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_NmrProject_FindFirstApplicationData_keyval3(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_NmrProject_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_NmrProject self
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
Impl_ApplicationData Nmr_NmrProject_FindFirstApplicationData_keyval4(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_NmrProject_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.atomSets

child link to class 
AtomSet
  @param  Nmr_NmrProject self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_AtomSet Nmr_NmrProject_FindFirstAtomSet(Nmr_NmrProject self, ApiMap conditions)
{
  
  Nmr_AtomSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstAtomSet");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'findFirstAtomSet'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'findFirstAtomSet' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.atomSets

child link to class 
AtomSet
  @param  Nmr_NmrProject self
  @returns  the first value that satisfies the conditions 
**/
Nmr_AtomSet Nmr_NmrProject_FindFirstAtomSet_keyval0(Nmr_NmrProject self)
{
  
  Nmr_AtomSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_NmrProject_FindFirstAtomSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.atomSets

child link to class 
AtomSet
  @param  Nmr_NmrProject self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_AtomSet Nmr_NmrProject_FindFirstAtomSet_keyval1(Nmr_NmrProject self, char * key, ApiObject value)
{
  
  Nmr_AtomSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_NmrProject_FindFirstAtomSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.atomSets

child link to class 
AtomSet
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_AtomSet Nmr_NmrProject_FindFirstAtomSet_keyval2(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_AtomSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_NmrProject_FindFirstAtomSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.atomSets

child link to class 
AtomSet
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_AtomSet Nmr_NmrProject_FindFirstAtomSet_keyval3(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_AtomSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_NmrProject_FindFirstAtomSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.atomSets

child link to class 
AtomSet
  @param  Nmr_NmrProject self
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
Nmr_AtomSet Nmr_NmrProject_FindFirstAtomSet_keyval4(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_AtomSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_NmrProject_FindFirstAtomSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.chainStateSets

child link to class 
ChainStateSet
  @param  Nmr_NmrProject self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_ChainStateSet Nmr_NmrProject_FindFirstChainStateSet(Nmr_NmrProject self, ApiMap conditions)
{
  
  Nmr_ChainStateSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChainStateSet");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'findFirstChainStateSet'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'findFirstChainStateSet' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.chainStateSets

child link to class 
ChainStateSet
  @param  Nmr_NmrProject self
  @returns  the first value that satisfies the conditions 
**/
Nmr_ChainStateSet Nmr_NmrProject_FindFirstChainStateSet_keyval0(Nmr_NmrProject self)
{
  
  Nmr_ChainStateSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_NmrProject_FindFirstChainStateSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.chainStateSets

child link to class 
ChainStateSet
  @param  Nmr_NmrProject self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_ChainStateSet Nmr_NmrProject_FindFirstChainStateSet_keyval1(Nmr_NmrProject self, char * key, ApiObject value)
{
  
  Nmr_ChainStateSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_NmrProject_FindFirstChainStateSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.chainStateSets

child link to class 
ChainStateSet
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_ChainStateSet Nmr_NmrProject_FindFirstChainStateSet_keyval2(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_ChainStateSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_NmrProject_FindFirstChainStateSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.chainStateSets

child link to class 
ChainStateSet
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_ChainStateSet Nmr_NmrProject_FindFirstChainStateSet_keyval3(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_ChainStateSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_NmrProject_FindFirstChainStateSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.chainStateSets

child link to class 
ChainStateSet
  @param  Nmr_NmrProject self
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
Nmr_ChainStateSet Nmr_NmrProject_FindFirstChainStateSet_keyval4(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_ChainStateSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_NmrProject_FindFirstChainStateSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.derivedDataLists

child link to 
class DerivedDataList
  @param  Nmr_NmrProject self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_DerivedDataList Nmr_NmrProject_FindFirstDerivedDataList(Nmr_NmrProject self, ApiMap conditions)
{
  
  Nmr_DerivedDataList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstDerivedDataList");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'findFirstDerivedDataList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'findFirstDerivedDataList' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.derivedDataLists

child link to 
class DerivedDataList
  @param  Nmr_NmrProject self
  @returns  the first value that satisfies the conditions 
**/
Nmr_DerivedDataList Nmr_NmrProject_FindFirstDerivedDataList_keyval0(Nmr_NmrProject self)
{
  
  Nmr_DerivedDataList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_NmrProject_FindFirstDerivedDataList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.derivedDataLists

child link to 
class DerivedDataList
  @param  Nmr_NmrProject self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_DerivedDataList Nmr_NmrProject_FindFirstDerivedDataList_keyval1(Nmr_NmrProject self, char * key, ApiObject value)
{
  
  Nmr_DerivedDataList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_NmrProject_FindFirstDerivedDataList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.derivedDataLists

child link to 
class DerivedDataList
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_DerivedDataList Nmr_NmrProject_FindFirstDerivedDataList_keyval2(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_DerivedDataList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_NmrProject_FindFirstDerivedDataList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.derivedDataLists

child link to 
class DerivedDataList
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_DerivedDataList Nmr_NmrProject_FindFirstDerivedDataList_keyval3(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_DerivedDataList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_NmrProject_FindFirstDerivedDataList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.derivedDataLists

child link to 
class DerivedDataList
  @param  Nmr_NmrProject self
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
Nmr_DerivedDataList Nmr_NmrProject_FindFirstDerivedDataList_keyval4(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_DerivedDataList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_NmrProject_FindFirstDerivedDataList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.experiments

child link to class 
Experiment
  @param  Nmr_NmrProject self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Nmr_NmrProject_FindFirstExperiment(Nmr_NmrProject self, ApiMap conditions)
{
  
  Nmr_Experiment obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstExperiment");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'findFirstExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'findFirstExperiment' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.experiments

child link to class 
Experiment
  @param  Nmr_NmrProject self
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Nmr_NmrProject_FindFirstExperiment_keyval0(Nmr_NmrProject self)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_NmrProject_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.experiments

child link to class 
Experiment
  @param  Nmr_NmrProject self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Nmr_NmrProject_FindFirstExperiment_keyval1(Nmr_NmrProject self, char * key, ApiObject value)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_NmrProject_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.experiments

child link to class 
Experiment
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Nmr_NmrProject_FindFirstExperiment_keyval2(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_NmrProject_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.experiments

child link to class 
Experiment
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Nmr_NmrProject_FindFirstExperiment_keyval3(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_NmrProject_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.experiments

child link to class 
Experiment
  @param  Nmr_NmrProject self
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
Nmr_Experiment Nmr_NmrProject_FindFirstExperiment_keyval4(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_NmrProject_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.measurementLists

child link to 
class AbstractMeasurementList
  @param  Nmr_NmrProject self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractMeasurementList Nmr_NmrProject_FindFirstMeasurementList(Nmr_NmrProject self, ApiMap conditions)
{
  
  Nmr_AbstractMeasurementList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstMeasurementList");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'findFirstMeasurementList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'findFirstMeasurementList' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.measurementLists

child link to 
class AbstractMeasurementList
  @param  Nmr_NmrProject self
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractMeasurementList Nmr_NmrProject_FindFirstMeasurementList_keyval0(Nmr_NmrProject self)
{
  
  Nmr_AbstractMeasurementList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_NmrProject_FindFirstMeasurementList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.measurementLists

child link to 
class AbstractMeasurementList
  @param  Nmr_NmrProject self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractMeasurementList Nmr_NmrProject_FindFirstMeasurementList_keyval1(Nmr_NmrProject self, char * key, ApiObject value)
{
  
  Nmr_AbstractMeasurementList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_NmrProject_FindFirstMeasurementList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.measurementLists

child link to 
class AbstractMeasurementList
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractMeasurementList Nmr_NmrProject_FindFirstMeasurementList_keyval2(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_AbstractMeasurementList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_NmrProject_FindFirstMeasurementList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.measurementLists

child link to 
class AbstractMeasurementList
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractMeasurementList Nmr_NmrProject_FindFirstMeasurementList_keyval3(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_AbstractMeasurementList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_NmrProject_FindFirstMeasurementList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.measurementLists

child link to 
class AbstractMeasurementList
  @param  Nmr_NmrProject self
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
Nmr_AbstractMeasurementList Nmr_NmrProject_FindFirstMeasurementList_keyval4(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_AbstractMeasurementList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_NmrProject_FindFirstMeasurementList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.NmrProject.nmrConstraintStores

NmrConstraintStores that 
refer to the NmrProject
  @param  Nmr_NmrProject self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmrc_NmrConstraintStore Nmr_NmrProject_FindFirstNmrConstraintStore(Nmr_NmrProject self, ApiMap conditions)
{
  
  Nmrc_NmrConstraintStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstNmrConstraintStore");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'findFirstNmrConstraintStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'findFirstNmrConstraintStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.NmrProject.nmrConstraintStores

NmrConstraintStores that 
refer to the NmrProject
  @param  Nmr_NmrProject self
  @returns  the first value that satisfies the conditions 
**/
Nmrc_NmrConstraintStore Nmr_NmrProject_FindFirstNmrConstraintStore_keyval0(Nmr_NmrProject self)
{
  
  Nmrc_NmrConstraintStore  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_NmrProject_FindFirstNmrConstraintStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.NmrProject.nmrConstraintStores

NmrConstraintStores that 
refer to the NmrProject
  @param  Nmr_NmrProject self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmrc_NmrConstraintStore Nmr_NmrProject_FindFirstNmrConstraintStore_keyval1(Nmr_NmrProject self, char * key, ApiObject value)
{
  
  Nmrc_NmrConstraintStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_NmrProject_FindFirstNmrConstraintStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.NmrProject.nmrConstraintStores

NmrConstraintStores that 
refer to the NmrProject
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmrc_NmrConstraintStore Nmr_NmrProject_FindFirstNmrConstraintStore_keyval2(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmrc_NmrConstraintStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_NmrProject_FindFirstNmrConstraintStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.NmrProject.nmrConstraintStores

NmrConstraintStores that 
refer to the NmrProject
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmrc_NmrConstraintStore Nmr_NmrProject_FindFirstNmrConstraintStore_keyval3(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmrc_NmrConstraintStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_NmrProject_FindFirstNmrConstraintStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.NmrProject.nmrConstraintStores

NmrConstraintStores that 
refer to the NmrProject
  @param  Nmr_NmrProject self
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
Nmrc_NmrConstraintStore Nmr_NmrProject_FindFirstNmrConstraintStore_keyval4(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmrc_NmrConstraintStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_NmrProject_FindFirstNmrConstraintStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.nmrExpSeries

child link to class 
NmrExpSeries
  @param  Nmr_NmrProject self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_NmrExpSeries Nmr_NmrProject_FindFirstNmrExpSeries(Nmr_NmrProject self, ApiMap conditions)
{
  
  Nmr_NmrExpSeries obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstNmrExpSeries");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'findFirstNmrExpSeries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'findFirstNmrExpSeries' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.nmrExpSeries

child link to class 
NmrExpSeries
  @param  Nmr_NmrProject self
  @returns  the first value that satisfies the conditions 
**/
Nmr_NmrExpSeries Nmr_NmrProject_FindFirstNmrExpSeries_keyval0(Nmr_NmrProject self)
{
  
  Nmr_NmrExpSeries  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_NmrProject_FindFirstNmrExpSeries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.nmrExpSeries

child link to class 
NmrExpSeries
  @param  Nmr_NmrProject self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_NmrExpSeries Nmr_NmrProject_FindFirstNmrExpSeries_keyval1(Nmr_NmrProject self, char * key, ApiObject value)
{
  
  Nmr_NmrExpSeries  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_NmrProject_FindFirstNmrExpSeries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.nmrExpSeries

child link to class 
NmrExpSeries
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_NmrExpSeries Nmr_NmrProject_FindFirstNmrExpSeries_keyval2(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_NmrExpSeries  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_NmrProject_FindFirstNmrExpSeries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.nmrExpSeries

child link to class 
NmrExpSeries
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_NmrExpSeries Nmr_NmrProject_FindFirstNmrExpSeries_keyval3(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_NmrExpSeries  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_NmrProject_FindFirstNmrExpSeries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.nmrExpSeries

child link to class 
NmrExpSeries
  @param  Nmr_NmrProject self
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
Nmr_NmrExpSeries Nmr_NmrProject_FindFirstNmrExpSeries_keyval4(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_NmrExpSeries  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_NmrProject_FindFirstNmrExpSeries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.peakClusters

child link to class 
PeakCluster
  @param  Nmr_NmrProject self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakCluster Nmr_NmrProject_FindFirstPeakCluster(Nmr_NmrProject self, ApiMap conditions)
{
  
  Nmr_PeakCluster obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstPeakCluster");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'findFirstPeakCluster'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'findFirstPeakCluster' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.peakClusters

child link to class 
PeakCluster
  @param  Nmr_NmrProject self
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakCluster Nmr_NmrProject_FindFirstPeakCluster_keyval0(Nmr_NmrProject self)
{
  
  Nmr_PeakCluster  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_NmrProject_FindFirstPeakCluster(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.peakClusters

child link to class 
PeakCluster
  @param  Nmr_NmrProject self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakCluster Nmr_NmrProject_FindFirstPeakCluster_keyval1(Nmr_NmrProject self, char * key, ApiObject value)
{
  
  Nmr_PeakCluster  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_NmrProject_FindFirstPeakCluster(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.peakClusters

child link to class 
PeakCluster
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakCluster Nmr_NmrProject_FindFirstPeakCluster_keyval2(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_PeakCluster  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_NmrProject_FindFirstPeakCluster(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.peakClusters

child link to class 
PeakCluster
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakCluster Nmr_NmrProject_FindFirstPeakCluster_keyval3(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_PeakCluster  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_NmrProject_FindFirstPeakCluster(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.peakClusters

child link to class 
PeakCluster
  @param  Nmr_NmrProject self
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
Nmr_PeakCluster Nmr_NmrProject_FindFirstPeakCluster_keyval4(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_PeakCluster  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_NmrProject_FindFirstPeakCluster(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.resonances

child link to class 
Resonance
  @param  Nmr_NmrProject self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_Resonance Nmr_NmrProject_FindFirstResonance(Nmr_NmrProject self, ApiMap conditions)
{
  
  Nmr_Resonance obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstResonance");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'findFirstResonance'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'findFirstResonance' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.resonanceGroups

child link to 
class ResonanceGroup
  @param  Nmr_NmrProject self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResonanceGroup Nmr_NmrProject_FindFirstResonanceGroup(Nmr_NmrProject self, ApiMap conditions)
{
  
  Nmr_ResonanceGroup obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstResonanceGroup");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'findFirstResonanceGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'findFirstResonanceGroup' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.resonanceGroups

child link to 
class ResonanceGroup
  @param  Nmr_NmrProject self
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResonanceGroup Nmr_NmrProject_FindFirstResonanceGroup_keyval0(Nmr_NmrProject self)
{
  
  Nmr_ResonanceGroup  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_NmrProject_FindFirstResonanceGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.resonanceGroups

child link to 
class ResonanceGroup
  @param  Nmr_NmrProject self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResonanceGroup Nmr_NmrProject_FindFirstResonanceGroup_keyval1(Nmr_NmrProject self, char * key, ApiObject value)
{
  
  Nmr_ResonanceGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_NmrProject_FindFirstResonanceGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.resonanceGroups

child link to 
class ResonanceGroup
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResonanceGroup Nmr_NmrProject_FindFirstResonanceGroup_keyval2(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_ResonanceGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_NmrProject_FindFirstResonanceGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.resonanceGroups

child link to 
class ResonanceGroup
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResonanceGroup Nmr_NmrProject_FindFirstResonanceGroup_keyval3(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_ResonanceGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_NmrProject_FindFirstResonanceGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.resonanceGroups

child link to 
class ResonanceGroup
  @param  Nmr_NmrProject self
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
Nmr_ResonanceGroup Nmr_NmrProject_FindFirstResonanceGroup_keyval4(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_ResonanceGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_NmrProject_FindFirstResonanceGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.resonanceSets

child link to class 
ResonanceSet
  @param  Nmr_NmrProject self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResonanceSet Nmr_NmrProject_FindFirstResonanceSet(Nmr_NmrProject self, ApiMap conditions)
{
  
  Nmr_ResonanceSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstResonanceSet");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'findFirstResonanceSet'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'findFirstResonanceSet' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.resonanceSets

child link to class 
ResonanceSet
  @param  Nmr_NmrProject self
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResonanceSet Nmr_NmrProject_FindFirstResonanceSet_keyval0(Nmr_NmrProject self)
{
  
  Nmr_ResonanceSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_NmrProject_FindFirstResonanceSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.resonanceSets

child link to class 
ResonanceSet
  @param  Nmr_NmrProject self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResonanceSet Nmr_NmrProject_FindFirstResonanceSet_keyval1(Nmr_NmrProject self, char * key, ApiObject value)
{
  
  Nmr_ResonanceSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_NmrProject_FindFirstResonanceSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.resonanceSets

child link to class 
ResonanceSet
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResonanceSet Nmr_NmrProject_FindFirstResonanceSet_keyval2(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_ResonanceSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_NmrProject_FindFirstResonanceSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.resonanceSets

child link to class 
ResonanceSet
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResonanceSet Nmr_NmrProject_FindFirstResonanceSet_keyval3(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_ResonanceSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_NmrProject_FindFirstResonanceSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.resonanceSets

child link to class 
ResonanceSet
  @param  Nmr_NmrProject self
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
Nmr_ResonanceSet Nmr_NmrProject_FindFirstResonanceSet_keyval4(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_ResonanceSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_NmrProject_FindFirstResonanceSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.resonances

child link to class 
Resonance
  @param  Nmr_NmrProject self
  @returns  the first value that satisfies the conditions 
**/
Nmr_Resonance Nmr_NmrProject_FindFirstResonance_keyval0(Nmr_NmrProject self)
{
  
  Nmr_Resonance  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_NmrProject_FindFirstResonance(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.resonances

child link to class 
Resonance
  @param  Nmr_NmrProject self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_Resonance Nmr_NmrProject_FindFirstResonance_keyval1(Nmr_NmrProject self, char * key, ApiObject value)
{
  
  Nmr_Resonance  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_NmrProject_FindFirstResonance(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.resonances

child link to class 
Resonance
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_Resonance Nmr_NmrProject_FindFirstResonance_keyval2(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_Resonance  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_NmrProject_FindFirstResonance(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.resonances

child link to class 
Resonance
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_Resonance Nmr_NmrProject_FindFirstResonance_keyval3(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_Resonance  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_NmrProject_FindFirstResonance(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.resonances

child link to class 
Resonance
  @param  Nmr_NmrProject self
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
Nmr_Resonance Nmr_NmrProject_FindFirstResonance_keyval4(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_Resonance  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_NmrProject_FindFirstResonance(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.sampleConditionSets

child link to 
class SampleConditionSet
  @param  Nmr_NmrProject self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_SampleConditionSet Nmr_NmrProject_FindFirstSampleConditionSet(Nmr_NmrProject self, ApiMap conditions)
{
  
  Nmr_SampleConditionSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstSampleConditionSet");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'findFirstSampleConditionSet'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'findFirstSampleConditionSet' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.sampleConditionSets

child link to 
class SampleConditionSet
  @param  Nmr_NmrProject self
  @returns  the first value that satisfies the conditions 
**/
Nmr_SampleConditionSet Nmr_NmrProject_FindFirstSampleConditionSet_keyval0(Nmr_NmrProject self)
{
  
  Nmr_SampleConditionSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_NmrProject_FindFirstSampleConditionSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.sampleConditionSets

child link to 
class SampleConditionSet
  @param  Nmr_NmrProject self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_SampleConditionSet Nmr_NmrProject_FindFirstSampleConditionSet_keyval1(Nmr_NmrProject self, char * key, ApiObject value)
{
  
  Nmr_SampleConditionSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_NmrProject_FindFirstSampleConditionSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.sampleConditionSets

child link to 
class SampleConditionSet
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_SampleConditionSet Nmr_NmrProject_FindFirstSampleConditionSet_keyval2(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_SampleConditionSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_NmrProject_FindFirstSampleConditionSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.sampleConditionSets

child link to 
class SampleConditionSet
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_SampleConditionSet Nmr_NmrProject_FindFirstSampleConditionSet_keyval3(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_SampleConditionSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_NmrProject_FindFirstSampleConditionSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.sampleConditionSets

child link to 
class SampleConditionSet
  @param  Nmr_NmrProject self
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
Nmr_SampleConditionSet Nmr_NmrProject_FindFirstSampleConditionSet_keyval4(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_SampleConditionSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_NmrProject_FindFirstSampleConditionSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.shiftReferences

child link to 
class ShiftReference
  @param  Nmr_NmrProject self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_ShiftReference Nmr_NmrProject_FindFirstShiftReference(Nmr_NmrProject self, ApiMap conditions)
{
  
  Nmr_ShiftReference obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstShiftReference");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'findFirstShiftReference'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'findFirstShiftReference' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.shiftReferences

child link to 
class ShiftReference
  @param  Nmr_NmrProject self
  @returns  the first value that satisfies the conditions 
**/
Nmr_ShiftReference Nmr_NmrProject_FindFirstShiftReference_keyval0(Nmr_NmrProject self)
{
  
  Nmr_ShiftReference  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_NmrProject_FindFirstShiftReference(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.shiftReferences

child link to 
class ShiftReference
  @param  Nmr_NmrProject self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_ShiftReference Nmr_NmrProject_FindFirstShiftReference_keyval1(Nmr_NmrProject self, char * key, ApiObject value)
{
  
  Nmr_ShiftReference  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_NmrProject_FindFirstShiftReference(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.shiftReferences

child link to 
class ShiftReference
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_ShiftReference Nmr_NmrProject_FindFirstShiftReference_keyval2(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_ShiftReference  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_NmrProject_FindFirstShiftReference(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.shiftReferences

child link to 
class ShiftReference
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_ShiftReference Nmr_NmrProject_FindFirstShiftReference_keyval3(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_ShiftReference  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_NmrProject_FindFirstShiftReference(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.shiftReferences

child link to 
class ShiftReference
  @param  Nmr_NmrProject self
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
Nmr_ShiftReference Nmr_NmrProject_FindFirstShiftReference_keyval4(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_ShiftReference  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_NmrProject_FindFirstShiftReference(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.structureAnalysiss

child link to 
class StructureAnalysis
  @param  Nmr_NmrProject self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_StructureAnalysis Nmr_NmrProject_FindFirstStructureAnalysis(Nmr_NmrProject self, ApiMap conditions)
{
  
  Nmr_StructureAnalysis obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstStructureAnalysis");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'findFirstStructureAnalysis'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'findFirstStructureAnalysis' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.structureAnalysiss

child link to 
class StructureAnalysis
  @param  Nmr_NmrProject self
  @returns  the first value that satisfies the conditions 
**/
Nmr_StructureAnalysis Nmr_NmrProject_FindFirstStructureAnalysis_keyval0(Nmr_NmrProject self)
{
  
  Nmr_StructureAnalysis  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_NmrProject_FindFirstStructureAnalysis(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.structureAnalysiss

child link to 
class StructureAnalysis
  @param  Nmr_NmrProject self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_StructureAnalysis Nmr_NmrProject_FindFirstStructureAnalysis_keyval1(Nmr_NmrProject self, char * key, ApiObject value)
{
  
  Nmr_StructureAnalysis  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_NmrProject_FindFirstStructureAnalysis(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.structureAnalysiss

child link to 
class StructureAnalysis
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_StructureAnalysis Nmr_NmrProject_FindFirstStructureAnalysis_keyval2(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_StructureAnalysis  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_NmrProject_FindFirstStructureAnalysis(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.structureAnalysiss

child link to 
class StructureAnalysis
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_StructureAnalysis Nmr_NmrProject_FindFirstStructureAnalysis_keyval3(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_StructureAnalysis  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_NmrProject_FindFirstStructureAnalysis(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.structureAnalysiss

child link to 
class StructureAnalysis
  @param  Nmr_NmrProject self
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
Nmr_StructureAnalysis Nmr_NmrProject_FindFirstStructureAnalysis_keyval4(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_StructureAnalysis  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_NmrProject_FindFirstStructureAnalysis(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.structureGenerations

child link to 
class StructureGeneration
  @param  Nmr_NmrProject self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_StructureGeneration Nmr_NmrProject_FindFirstStructureGeneration(Nmr_NmrProject self, ApiMap conditions)
{
  
  Nmr_StructureGeneration obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstStructureGeneration");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'findFirstStructureGeneration'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'findFirstStructureGeneration' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.structureGenerations

child link to 
class StructureGeneration
  @param  Nmr_NmrProject self
  @returns  the first value that satisfies the conditions 
**/
Nmr_StructureGeneration Nmr_NmrProject_FindFirstStructureGeneration_keyval0(Nmr_NmrProject self)
{
  
  Nmr_StructureGeneration  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_NmrProject_FindFirstStructureGeneration(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.structureGenerations

child link to 
class StructureGeneration
  @param  Nmr_NmrProject self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_StructureGeneration Nmr_NmrProject_FindFirstStructureGeneration_keyval1(Nmr_NmrProject self, char * key, ApiObject value)
{
  
  Nmr_StructureGeneration  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_NmrProject_FindFirstStructureGeneration(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.structureGenerations

child link to 
class StructureGeneration
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_StructureGeneration Nmr_NmrProject_FindFirstStructureGeneration_keyval2(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_StructureGeneration  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_NmrProject_FindFirstStructureGeneration(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.structureGenerations

child link to 
class StructureGeneration
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_StructureGeneration Nmr_NmrProject_FindFirstStructureGeneration_keyval3(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_StructureGeneration  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_NmrProject_FindFirstStructureGeneration(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.NmrProject.structureGenerations

child link to 
class StructureGeneration
  @param  Nmr_NmrProject self
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
Nmr_StructureGeneration Nmr_NmrProject_FindFirstStructureGeneration_keyval4(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_StructureGeneration  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_NmrProject_FindFirstStructureGeneration(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.NmrProject.structureValidationStores

ValidationStores 
relevant to NmrProject
  @param  Nmr_NmrProject self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Vald_ValidationStore Nmr_NmrProject_FindFirstValidationStore(Nmr_NmrProject self, ApiMap conditions)
{
  
  Vald_ValidationStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstValidationStore");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'findFirstValidationStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'findFirstValidationStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.NmrProject.structureValidationStores

ValidationStores 
relevant to NmrProject
  @param  Nmr_NmrProject self
  @returns  the first value that satisfies the conditions 
**/
Vald_ValidationStore Nmr_NmrProject_FindFirstValidationStore_keyval0(Nmr_NmrProject self)
{
  
  Vald_ValidationStore  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_NmrProject_FindFirstValidationStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.NmrProject.structureValidationStores

ValidationStores 
relevant to NmrProject
  @param  Nmr_NmrProject self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Vald_ValidationStore Nmr_NmrProject_FindFirstValidationStore_keyval1(Nmr_NmrProject self, char * key, ApiObject value)
{
  
  Vald_ValidationStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_NmrProject_FindFirstValidationStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.NmrProject.structureValidationStores

ValidationStores 
relevant to NmrProject
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Vald_ValidationStore Nmr_NmrProject_FindFirstValidationStore_keyval2(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Vald_ValidationStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_NmrProject_FindFirstValidationStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.NmrProject.structureValidationStores

ValidationStores 
relevant to NmrProject
  @param  Nmr_NmrProject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Vald_ValidationStore Nmr_NmrProject_FindFirstValidationStore_keyval3(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Vald_ValidationStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_NmrProject_FindFirstValidationStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.NmrProject.structureValidationStores

ValidationStores 
relevant to NmrProject
  @param  Nmr_NmrProject self
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
Vald_ValidationStore Nmr_NmrProject_FindFirstValidationStore_keyval4(Nmr_NmrProject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Vald_ValidationStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_NmrProject_FindFirstValidationStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.nmr.Nmr.NmrProject
  @param  Nmr_NmrProject self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Nmr_NmrProject_Get(Nmr_NmrProject self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_NmrProject self
  @returns   the result
**/
Acco_AccessObject Nmr_NmrProject_GetAccess(Nmr_NmrProject self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'getAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.TopObject.activeRepositories

Repositories 
on package search path that contains a copy of TopObject
  @param  Nmr_NmrProject self
  @returns   the result
**/
ApiList Nmr_NmrProject_GetActiveRepositories(Nmr_NmrProject self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveRepositories");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'getActiveRepositories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'getActiveRepositories' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.NmrProject.analysisProject

Analysis project that 
relates to the Nmr Project
  @param  Nmr_NmrProject self
  @returns   the result
**/
Anal_AnalysisProject Nmr_NmrProject_GetAnalysisProject(Nmr_NmrProject self)
{
  
  Anal_AnalysisProject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAnalysisProject");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'getAnalysisProject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'getAnalysisProject' is not callable");
  
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
  @param  Nmr_NmrProject self
  @returns   the result
**/
ApiList Nmr_NmrProject_GetApplicationData(Nmr_NmrProject self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.NmrProject.atomSets

child link to class AtomSet
  @param  Nmr_NmrProject self
  @returns   the result
**/
ApiSet Nmr_NmrProject_GetAtomSets(Nmr_NmrProject self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAtomSets");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'getAtomSets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'getAtomSets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.Nmr.NmrProject
  @param  Nmr_NmrProject self
  @param  Impl_MemopsRoot startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nmr_NmrProject Nmr_NmrProject_GetByKey(Nmr_NmrProject self, Impl_MemopsRoot startObj, ApiList fullKey)
{
  
  Nmr_NmrProject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'getByKey' is not callable");
  
  args = PyTuple_Pack(2, startObj, fullKey);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.NmrProject.chainStateSets

child link to class 
ChainStateSet
  @param  Nmr_NmrProject self
  @returns   the result
**/
ApiSet Nmr_NmrProject_GetChainStateSets(Nmr_NmrProject self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChainStateSets");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'getChainStateSets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'getChainStateSets' is not callable");
  
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
  @param  Nmr_NmrProject self
  @returns   the result
**/
ApiString Nmr_NmrProject_GetClassName(Nmr_NmrProject self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.TopObject.createdBy

user who created 
TopObject.
  @param  Nmr_NmrProject self
  @returns   the result
**/
ApiString Nmr_NmrProject_GetCreatedBy(Nmr_NmrProject self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCreatedBy");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'getCreatedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'getCreatedBy' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.NmrProject.derivedDataLists

child link to class 
DerivedDataList
  @param  Nmr_NmrProject self
  @returns   the result
**/
ApiSet Nmr_NmrProject_GetDerivedDataLists(Nmr_NmrProject self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDerivedDataLists");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'getDerivedDataLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'getDerivedDataLists' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.NmrProject.experiments

child link to class 
Experiment
  @param  Nmr_NmrProject self
  @returns   the result
**/
ApiSet Nmr_NmrProject_GetExperiments(Nmr_NmrProject self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExperiments");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'getExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'getExperiments' is not callable");
  
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
  @param  Nmr_NmrProject self
  @returns   the result
**/
ApiList Nmr_NmrProject_GetFieldNames(Nmr_NmrProject self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.nmr.Nmr.NmrProject
  @param  Nmr_NmrProject self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Nmr_NmrProject_GetFullKey(Nmr_NmrProject self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'getFullKey' is not callable");
  
  args = PyTuple_Pack(1, useGuid);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.TopObject.guid

global unique identifier - 
set by implementation.
  @param  Nmr_NmrProject self
  @returns   the result
**/
ApiString Nmr_NmrProject_GetGuid(Nmr_NmrProject self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getGuid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'getGuid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'getGuid' is not callable");
  
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
  @param  Nmr_NmrProject self
  @returns   the result
**/
ApiBoolean Nmr_NmrProject_GetInConstructor(Nmr_NmrProject self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'getInConstructor' is not callable");
  
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
  @param  Nmr_NmrProject self
  @returns   the result
**/
ApiBoolean Nmr_NmrProject_GetIsDeleted(Nmr_NmrProject self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.TopObject.isLoaded

Implementation 
attribute, set automatically. True if the data in the Storage are loaded 
into memory. As data are loaded automatically, this attribute should be 
of interest only for the implementation.
  @param  Nmr_NmrProject self
  @returns   the result
**/
ApiBoolean Nmr_NmrProject_GetIsLoaded(Nmr_NmrProject self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsLoaded");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'getIsLoaded'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'getIsLoaded' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.TopObject.isModifiable

True if the data 
corresponding to the storage may be modified. If isModifiable is false 
for a given package, attemps to modify the data will raise an error. 
Note that isModifiable can be set to true even if the corresponding file 
is read-only. 

For a Project, this atribute defines whether the 
Implementation package (not the entire project contents) can be 
modified. If the Implementation package is Read-Only, this will prohibit 
many changes in the other packages as well.

This parameter can be 
freely modified by users, so it is not a security feature, but rather a 
protection against accidental changes.
  @param  Nmr_NmrProject self
  @returns   the result
**/
ApiBoolean Nmr_NmrProject_GetIsModifiable(Nmr_NmrProject self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsModifiable");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'getIsModifiable'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'getIsModifiable' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.TopObject.isModified

Implementation 
attribute. True if the data corresponding to the Storage have been 
modified since being loaded. Serves to indicate which data need to be 
saved.
  @param  Nmr_NmrProject self
  @returns   the result
**/
ApiBoolean Nmr_NmrProject_GetIsModified(Nmr_NmrProject self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsModified");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'getIsModified'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'getIsModified' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.TopObject.isReading

Implementation 
attribute, set automatically. True if the data corresponding to the 
Storage are in the process of being read. As data loading is handled 
automatically, this attribute should be relevant only for the 
implementation, or possibly for programmers of multithreaded programs. 
Serves to suppress notifiers and validity checking during reading. Note 
that objects are not valid until the data loading is completed.
  @param  Nmr_NmrProject self
  @returns   the result
**/
ApiBoolean Nmr_NmrProject_GetIsReading(Nmr_NmrProject self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsReading");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'getIsReading'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'getIsReading' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.TopObject.lastUnlockedBy

User who last 
set TopObject.isModifiable to True.  Used to track if data have been 
modified. Provided data have isModifiable set to False, any modification 
in the underlying data will show up on lastUnlockedBy.
  @param  Nmr_NmrProject self
  @returns   the result
**/
ApiString Nmr_NmrProject_GetLastUnlockedBy(Nmr_NmrProject self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLastUnlockedBy");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'getLastUnlockedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'getLastUnlockedBy' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.nmr.Nmr.NmrProject
  @param  Nmr_NmrProject self
  @returns  Local object key
**/
ApiObject Nmr_NmrProject_GetLocalKey(Nmr_NmrProject self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.NmrProject.measurementLists

child link to class 
AbstractMeasurementList
  @param  Nmr_NmrProject self
  @returns   the result
**/
ApiSet Nmr_NmrProject_GetMeasurementLists(Nmr_NmrProject self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMeasurementLists");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'getMeasurementLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'getMeasurementLists' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.NmrProject.memopsRoot

parent link
  @param  Nmr_NmrProject self
  @returns   the result
**/
Impl_MemopsRoot Nmr_NmrProject_GetMemopsRoot(Nmr_NmrProject self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMemopsRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'getMemopsRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'getMemopsRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.NmrProject.name

name of NmrProject
  @param  Nmr_NmrProject self
  @returns   the result
**/
ApiString Nmr_NmrProject_GetName(Nmr_NmrProject self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'getName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.NmrProject.nmrConstraintStores

NmrConstraintStores 
that refer to the NmrProject
  @param  Nmr_NmrProject self
  @returns   the result
**/
ApiSet Nmr_NmrProject_GetNmrConstraintStores(Nmr_NmrProject self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrConstraintStores");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'getNmrConstraintStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'getNmrConstraintStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.NmrProject.nmrExpSeries

child link to class 
NmrExpSeries
  @param  Nmr_NmrProject self
  @returns   the result
**/
ApiSet Nmr_NmrProject_GetNmrExpSeries(Nmr_NmrProject self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrExpSeries");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'getNmrExpSeries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'getNmrExpSeries' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.TopObject.packageLocator

Package locator 
relevant for TopObject
  @param  Nmr_NmrProject self
  @returns   the result
**/
Impl_PackageLocator Nmr_NmrProject_GetPackageLocator(Nmr_NmrProject self)
{
  
  Impl_PackageLocator obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageLocator");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'getPackageLocator'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'getPackageLocator' is not callable");
  
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
  @param  Nmr_NmrProject self
  @returns   the result
**/
ApiString Nmr_NmrProject_GetPackageName(Nmr_NmrProject self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'getPackageName' is not callable");
  
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
  @param  Nmr_NmrProject self
  @returns   the result
**/
ApiString Nmr_NmrProject_GetPackageShortName(Nmr_NmrProject self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.NmrProject.parent

link to parent object - synonym 
for memopsRoot
  @param  Nmr_NmrProject self
  @returns   the result
**/
Impl_MemopsRoot Nmr_NmrProject_GetParent(Nmr_NmrProject self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.NmrProject.peakClusters

child link to class 
PeakCluster
  @param  Nmr_NmrProject self
  @returns   the result
**/
ApiSet Nmr_NmrProject_GetPeakClusters(Nmr_NmrProject self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPeakClusters");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'getPeakClusters'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'getPeakClusters' is not callable");
  
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
  @param  Nmr_NmrProject self
  @returns   the result
**/
ApiString Nmr_NmrProject_GetQualifiedName(Nmr_NmrProject self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.NmrProject.resonanceGroups

child link to class 
ResonanceGroup
  @param  Nmr_NmrProject self
  @returns   the result
**/
ApiSet Nmr_NmrProject_GetResonanceGroups(Nmr_NmrProject self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getResonanceGroups");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'getResonanceGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'getResonanceGroups' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.NmrProject.resonanceSets

child link to class 
ResonanceSet
  @param  Nmr_NmrProject self
  @returns   the result
**/
ApiSet Nmr_NmrProject_GetResonanceSets(Nmr_NmrProject self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getResonanceSets");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'getResonanceSets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'getResonanceSets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.NmrProject.resonances

child link to class Resonance
  @param  Nmr_NmrProject self
  @returns   the result
**/
ApiSet Nmr_NmrProject_GetResonances(Nmr_NmrProject self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getResonances");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'getResonances'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'getResonances' is not callable");
  
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
  @param  Nmr_NmrProject self
  @returns   the result
**/
Impl_MemopsRoot Nmr_NmrProject_GetRoot(Nmr_NmrProject self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.NmrProject.sampleConditionSets

child link to class 
SampleConditionSet
  @param  Nmr_NmrProject self
  @returns   the result
**/
ApiSet Nmr_NmrProject_GetSampleConditionSets(Nmr_NmrProject self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSampleConditionSets");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'getSampleConditionSets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'getSampleConditionSets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.NmrProject.shiftReferences

child link to class 
ShiftReference
  @param  Nmr_NmrProject self
  @returns   the result
**/
ApiSet Nmr_NmrProject_GetShiftReferences(Nmr_NmrProject self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getShiftReferences");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'getShiftReferences'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'getShiftReferences' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.NmrProject.structureAnalysiss

child link to class 
StructureAnalysis
  @param  Nmr_NmrProject self
  @returns   the result
**/
ApiSet Nmr_NmrProject_GetStructureAnalysiss(Nmr_NmrProject self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getStructureAnalysiss");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'getStructureAnalysiss'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'getStructureAnalysiss' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.NmrProject.structureGenerations

child link to class 
StructureGeneration
  @param  Nmr_NmrProject self
  @returns   the result
**/
ApiSet Nmr_NmrProject_GetStructureGenerations(Nmr_NmrProject self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getStructureGenerations");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'getStructureGenerations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'getStructureGenerations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.nmr.Nmr.NmrProject.structureValidationStores

ValidationStores 
relevant to NmrProject
  @param  Nmr_NmrProject self
  @returns   the result
**/
ApiSet Nmr_NmrProject_GetValidationStores(Nmr_NmrProject self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getValidationStores");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'getValidationStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'getValidationStores' is not callable");
  
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
  @param  Nmr_NmrProject self
  @returns   the result
**/
Impl_TopObject Nmr_NmrProject_GetTopObject(Nmr_NmrProject self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.nmr.Nmr.NmrProject
  @param  Impl_MemopsRoot parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_NmrProject Nmr_NmrProject_Init(Impl_MemopsRoot parent, ApiMap attrlinks)
{
  
  return Impl_MemopsRoot_NewNmrProject(parent, attrlinks);
}

/**
  Constructor for ccp.nmr.Nmr.NmrProject
  @param  Impl_MemopsRoot parent
  @param  char * name
  @returns  the new object
**/
Nmr_NmrProject Nmr_NmrProject_Init_reqd(Impl_MemopsRoot parent, char * name)
{
  
  Nmr_NmrProject  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Nmr_NmrProject_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.AtomSet
  @param  Nmr_NmrProject self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_AtomSet Nmr_NmrProject_NewAtomSet(Nmr_NmrProject self, ApiMap attrlinks)
{
  
  Nmr_AtomSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newAtomSet");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'newAtomSet'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'newAtomSet' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.AtomSet
  @param  Nmr_NmrProject self
  @param  ApiSet atoms
  @returns  the new object
**/
Nmr_AtomSet Nmr_NmrProject_NewAtomSet_reqd(Nmr_NmrProject self, ApiSet atoms)
{
  
  Nmr_AtomSet  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "atoms", atoms);
  
  obj = Nmr_NmrProject_NewAtomSet(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.ChainStateSet
  @param  Nmr_NmrProject self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_ChainStateSet Nmr_NmrProject_NewChainStateSet(Nmr_NmrProject self, ApiMap attrlinks)
{
  
  Nmr_ChainStateSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newChainStateSet");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'newChainStateSet'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'newChainStateSet' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.ChainStateSet
  @param  Nmr_NmrProject self
  @param  Mols_Chain chain
  @returns  the new object
**/
Nmr_ChainStateSet Nmr_NmrProject_NewChainStateSet_reqd(Nmr_NmrProject self, Mols_Chain chain)
{
  
  Nmr_ChainStateSet  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "chain", chain);
  
  obj = Nmr_NmrProject_NewChainStateSet(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.DataList
  @param  Nmr_NmrProject self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_DataList Nmr_NmrProject_NewDataList(Nmr_NmrProject self, ApiMap attrlinks)
{
  
  Nmr_DataList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newDataList");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'newDataList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'newDataList' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.DataList
  @param  Nmr_NmrProject self
  @param  char * unit
  @returns  the new object
**/
Nmr_DataList Nmr_NmrProject_NewDataList_reqd(Nmr_NmrProject self, char * unit)
{
  
  Nmr_DataList  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__unit = ApiString_New(unit);

  PyDict_SetItemString(attrlinks, "unit", api__unit);
  
  obj = Nmr_NmrProject_NewDataList(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__unit);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.DipolarRelaxList
  @param  Nmr_NmrProject self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_DipolarRelaxList Nmr_NmrProject_NewDipolarRelaxList(Nmr_NmrProject self, ApiMap attrlinks)
{
  
  Nmr_DipolarRelaxList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newDipolarRelaxList");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'newDipolarRelaxList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'newDipolarRelaxList' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.DipolarRelaxList
  @param  Nmr_NmrProject self
  @returns  the new object
**/
Nmr_DipolarRelaxList Nmr_NmrProject_NewDipolarRelaxList_reqd(Nmr_NmrProject self)
{
  
  Nmr_DipolarRelaxList  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Nmr_NmrProject_NewDipolarRelaxList(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.Experiment
  @param  Nmr_NmrProject self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_Experiment Nmr_NmrProject_NewExperiment(Nmr_NmrProject self, ApiMap attrlinks)
{
  
  Nmr_Experiment obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newExperiment");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'newExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'newExperiment' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.Experiment
  @param  Nmr_NmrProject self
  @param  char * name
  @param  ApiInteger numDim
  @returns  the new object
**/
Nmr_Experiment Nmr_NmrProject_NewExperiment_reqd(Nmr_NmrProject self, char * name, ApiInteger numDim)
{
  
  Nmr_Experiment  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  PyDict_SetItemString(attrlinks, "numDim", numDim);
  
  obj = Nmr_NmrProject_NewExperiment(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.ExternalShiftReference
  @param  Nmr_NmrProject self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_ExternalShiftReference Nmr_NmrProject_NewExternalShiftReference(Nmr_NmrProject self, ApiMap attrlinks)
{
  
  Nmr_ExternalShiftReference obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newExternalShiftReference");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'newExternalShiftReference'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'newExternalShiftReference' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.ExternalShiftReference
  @param  Nmr_NmrProject self
  @param  char * atomGroup
  @param  char * isotopeCode
  @param  char * molName
  @param  char * referenceType
  @param  float value
  @returns  the new object
**/
Nmr_ExternalShiftReference Nmr_NmrProject_NewExternalShiftReference_reqd(Nmr_NmrProject self, char * atomGroup, char * isotopeCode, char * molName, char * referenceType, float value)
{
  
  Nmr_ExternalShiftReference  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__atomGroup = ApiString_New(atomGroup);
  ApiString api__isotopeCode = ApiString_New(isotopeCode);
  ApiString api__molName = ApiString_New(molName);
  ApiString api__referenceType = ApiString_New(referenceType);
  ApiFloat api__value = ApiFloat_New(value);

  PyDict_SetItemString(attrlinks, "atomGroup", api__atomGroup);
  PyDict_SetItemString(attrlinks, "isotopeCode", api__isotopeCode);
  PyDict_SetItemString(attrlinks, "molName", api__molName);
  PyDict_SetItemString(attrlinks, "referenceType", api__referenceType);
  PyDict_SetItemString(attrlinks, "value", api__value);
  
  obj = Nmr_NmrProject_NewExternalShiftReference(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__atomGroup);
  Py_DECREF(api__isotopeCode);
  Py_DECREF(api__molName);
  Py_DECREF(api__referenceType);
  Py_DECREF(api__value);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.HExchProtectionList
  @param  Nmr_NmrProject self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_HExchProtectionList Nmr_NmrProject_NewHExchProtectionList(Nmr_NmrProject self, ApiMap attrlinks)
{
  
  Nmr_HExchProtectionList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newHExchProtectionList");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'newHExchProtectionList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'newHExchProtectionList' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.HExchProtectionList
  @param  Nmr_NmrProject self
  @returns  the new object
**/
Nmr_HExchProtectionList Nmr_NmrProject_NewHExchProtectionList_reqd(Nmr_NmrProject self)
{
  
  Nmr_HExchProtectionList  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Nmr_NmrProject_NewHExchProtectionList(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.HExchRateList
  @param  Nmr_NmrProject self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_HExchRateList Nmr_NmrProject_NewHExchRateList(Nmr_NmrProject self, ApiMap attrlinks)
{
  
  Nmr_HExchRateList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newHExchRateList");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'newHExchRateList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'newHExchRateList' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.HExchRateList
  @param  Nmr_NmrProject self
  @returns  the new object
**/
Nmr_HExchRateList Nmr_NmrProject_NewHExchRateList_reqd(Nmr_NmrProject self)
{
  
  Nmr_HExchRateList  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Nmr_NmrProject_NewHExchRateList(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.InternalShiftReference
  @param  Nmr_NmrProject self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_InternalShiftReference Nmr_NmrProject_NewInternalShiftReference(Nmr_NmrProject self, ApiMap attrlinks)
{
  
  Nmr_InternalShiftReference obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newInternalShiftReference");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'newInternalShiftReference'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'newInternalShiftReference' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.InternalShiftReference
  @param  Nmr_NmrProject self
  @param  char * atomGroup
  @param  char * isotopeCode
  @param  char * molName
  @param  char * referenceType
  @param  float value
  @returns  the new object
**/
Nmr_InternalShiftReference Nmr_NmrProject_NewInternalShiftReference_reqd(Nmr_NmrProject self, char * atomGroup, char * isotopeCode, char * molName, char * referenceType, float value)
{
  
  Nmr_InternalShiftReference  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__atomGroup = ApiString_New(atomGroup);
  ApiString api__isotopeCode = ApiString_New(isotopeCode);
  ApiString api__molName = ApiString_New(molName);
  ApiString api__referenceType = ApiString_New(referenceType);
  ApiFloat api__value = ApiFloat_New(value);

  PyDict_SetItemString(attrlinks, "atomGroup", api__atomGroup);
  PyDict_SetItemString(attrlinks, "isotopeCode", api__isotopeCode);
  PyDict_SetItemString(attrlinks, "molName", api__molName);
  PyDict_SetItemString(attrlinks, "referenceType", api__referenceType);
  PyDict_SetItemString(attrlinks, "value", api__value);
  
  obj = Nmr_NmrProject_NewInternalShiftReference(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__atomGroup);
  Py_DECREF(api__isotopeCode);
  Py_DECREF(api__molName);
  Py_DECREF(api__referenceType);
  Py_DECREF(api__value);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.IsotropicS2List
  @param  Nmr_NmrProject self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_IsotropicS2List Nmr_NmrProject_NewIsotropicS2List(Nmr_NmrProject self, ApiMap attrlinks)
{
  
  Nmr_IsotropicS2List obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newIsotropicS2List");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'newIsotropicS2List'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'newIsotropicS2List' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.IsotropicS2List
  @param  Nmr_NmrProject self
  @returns  the new object
**/
Nmr_IsotropicS2List Nmr_NmrProject_NewIsotropicS2List_reqd(Nmr_NmrProject self)
{
  
  Nmr_IsotropicS2List  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Nmr_NmrProject_NewIsotropicS2List(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.JCouplingList
  @param  Nmr_NmrProject self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_JCouplingList Nmr_NmrProject_NewJCouplingList(Nmr_NmrProject self, ApiMap attrlinks)
{
  
  Nmr_JCouplingList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newJCouplingList");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'newJCouplingList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'newJCouplingList' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.JCouplingList
  @param  Nmr_NmrProject self
  @returns  the new object
**/
Nmr_JCouplingList Nmr_NmrProject_NewJCouplingList_reqd(Nmr_NmrProject self)
{
  
  Nmr_JCouplingList  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Nmr_NmrProject_NewJCouplingList(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.NmrExpSeries
  @param  Nmr_NmrProject self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_NmrExpSeries Nmr_NmrProject_NewNmrExpSeries(Nmr_NmrProject self, ApiMap attrlinks)
{
  
  Nmr_NmrExpSeries obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newNmrExpSeries");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'newNmrExpSeries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'newNmrExpSeries' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.NmrExpSeries
  @param  Nmr_NmrProject self
  @param  ApiList conditionNames
  @returns  the new object
**/
Nmr_NmrExpSeries Nmr_NmrProject_NewNmrExpSeries_reqd(Nmr_NmrProject self, ApiList conditionNames)
{
  
  Nmr_NmrExpSeries  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "conditionNames", conditionNames);
  
  obj = Nmr_NmrProject_NewNmrExpSeries(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.NoeList
  @param  Nmr_NmrProject self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_NoeList Nmr_NmrProject_NewNoeList(Nmr_NmrProject self, ApiMap attrlinks)
{
  
  Nmr_NoeList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newNoeList");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'newNoeList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'newNoeList' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.NoeList
  @param  Nmr_NmrProject self
  @returns  the new object
**/
Nmr_NoeList Nmr_NmrProject_NewNoeList_reqd(Nmr_NmrProject self)
{
  
  Nmr_NoeList  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Nmr_NmrProject_NewNoeList(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.PeakCluster
  @param  Nmr_NmrProject self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_PeakCluster Nmr_NmrProject_NewPeakCluster(Nmr_NmrProject self, ApiMap attrlinks)
{
  
  Nmr_PeakCluster obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newPeakCluster");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'newPeakCluster'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'newPeakCluster' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.PeakCluster
  @param  Nmr_NmrProject self
  @param  char * clusterType
  @returns  the new object
**/
Nmr_PeakCluster Nmr_NmrProject_NewPeakCluster_reqd(Nmr_NmrProject self, char * clusterType)
{
  
  Nmr_PeakCluster  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__clusterType = ApiString_New(clusterType);

  PyDict_SetItemString(attrlinks, "clusterType", api__clusterType);
  
  obj = Nmr_NmrProject_NewPeakCluster(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__clusterType);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.PkaList
  @param  Nmr_NmrProject self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_PkaList Nmr_NmrProject_NewPkaList(Nmr_NmrProject self, ApiMap attrlinks)
{
  
  Nmr_PkaList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newPkaList");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'newPkaList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'newPkaList' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.PkaList
  @param  Nmr_NmrProject self
  @returns  the new object
**/
Nmr_PkaList Nmr_NmrProject_NewPkaList_reqd(Nmr_NmrProject self)
{
  
  Nmr_PkaList  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Nmr_NmrProject_NewPkaList(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.RdcList
  @param  Nmr_NmrProject self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_RdcList Nmr_NmrProject_NewRdcList(Nmr_NmrProject self, ApiMap attrlinks)
{
  
  Nmr_RdcList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newRdcList");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'newRdcList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'newRdcList' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.RdcList
  @param  Nmr_NmrProject self
  @returns  the new object
**/
Nmr_RdcList Nmr_NmrProject_NewRdcList_reqd(Nmr_NmrProject self)
{
  
  Nmr_RdcList  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Nmr_NmrProject_NewRdcList(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.Resonance
  @param  Nmr_NmrProject self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_Resonance Nmr_NmrProject_NewResonance(Nmr_NmrProject self, ApiMap attrlinks)
{
  
  Nmr_Resonance obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newResonance");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'newResonance'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'newResonance' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.ResonanceGroup
  @param  Nmr_NmrProject self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_ResonanceGroup Nmr_NmrProject_NewResonanceGroup(Nmr_NmrProject self, ApiMap attrlinks)
{
  
  Nmr_ResonanceGroup obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newResonanceGroup");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'newResonanceGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'newResonanceGroup' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.ResonanceGroup
  @param  Nmr_NmrProject self
  @returns  the new object
**/
Nmr_ResonanceGroup Nmr_NmrProject_NewResonanceGroup_reqd(Nmr_NmrProject self)
{
  
  Nmr_ResonanceGroup  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Nmr_NmrProject_NewResonanceGroup(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.ResonanceSet
  @param  Nmr_NmrProject self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_ResonanceSet Nmr_NmrProject_NewResonanceSet(Nmr_NmrProject self, ApiMap attrlinks)
{
  
  Nmr_ResonanceSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newResonanceSet");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'newResonanceSet'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'newResonanceSet' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.ResonanceSet
  @param  Nmr_NmrProject self
  @param  ApiSet atomSets
  @param  ApiSet resonances
  @returns  the new object
**/
Nmr_ResonanceSet Nmr_NmrProject_NewResonanceSet_reqd(Nmr_NmrProject self, ApiSet atomSets, ApiSet resonances)
{
  
  Nmr_ResonanceSet  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "atomSets", atomSets);
  PyDict_SetItemString(attrlinks, "resonances", resonances);
  
  obj = Nmr_NmrProject_NewResonanceSet(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.Resonance
  @param  Nmr_NmrProject self
  @param  char * isotopeCode
  @returns  the new object
**/
Nmr_Resonance Nmr_NmrProject_NewResonance_reqd(Nmr_NmrProject self, char * isotopeCode)
{
  
  Nmr_Resonance  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__isotopeCode = ApiString_New(isotopeCode);

  PyDict_SetItemString(attrlinks, "isotopeCode", api__isotopeCode);
  
  obj = Nmr_NmrProject_NewResonance(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__isotopeCode);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.SampleConditionSet
  @param  Nmr_NmrProject self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_SampleConditionSet Nmr_NmrProject_NewSampleConditionSet(Nmr_NmrProject self, ApiMap attrlinks)
{
  
  Nmr_SampleConditionSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newSampleConditionSet");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'newSampleConditionSet'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'newSampleConditionSet' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.SampleConditionSet
  @param  Nmr_NmrProject self
  @returns  the new object
**/
Nmr_SampleConditionSet Nmr_NmrProject_NewSampleConditionSet_reqd(Nmr_NmrProject self)
{
  
  Nmr_SampleConditionSet  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Nmr_NmrProject_NewSampleConditionSet(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.ShiftAnisotropyList
  @param  Nmr_NmrProject self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_ShiftAnisotropyList Nmr_NmrProject_NewShiftAnisotropyList(Nmr_NmrProject self, ApiMap attrlinks)
{
  
  Nmr_ShiftAnisotropyList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newShiftAnisotropyList");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'newShiftAnisotropyList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'newShiftAnisotropyList' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.ShiftAnisotropyList
  @param  Nmr_NmrProject self
  @returns  the new object
**/
Nmr_ShiftAnisotropyList Nmr_NmrProject_NewShiftAnisotropyList_reqd(Nmr_NmrProject self)
{
  
  Nmr_ShiftAnisotropyList  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Nmr_NmrProject_NewShiftAnisotropyList(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.ShiftDifferenceList
  @param  Nmr_NmrProject self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_ShiftDifferenceList Nmr_NmrProject_NewShiftDifferenceList(Nmr_NmrProject self, ApiMap attrlinks)
{
  
  Nmr_ShiftDifferenceList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newShiftDifferenceList");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'newShiftDifferenceList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'newShiftDifferenceList' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.ShiftDifferenceList
  @param  Nmr_NmrProject self
  @returns  the new object
**/
Nmr_ShiftDifferenceList Nmr_NmrProject_NewShiftDifferenceList_reqd(Nmr_NmrProject self)
{
  
  Nmr_ShiftDifferenceList  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Nmr_NmrProject_NewShiftDifferenceList(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.ShiftList
  @param  Nmr_NmrProject self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_ShiftList Nmr_NmrProject_NewShiftList(Nmr_NmrProject self, ApiMap attrlinks)
{
  
  Nmr_ShiftList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newShiftList");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'newShiftList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'newShiftList' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.ShiftList
  @param  Nmr_NmrProject self
  @returns  the new object
**/
Nmr_ShiftList Nmr_NmrProject_NewShiftList_reqd(Nmr_NmrProject self)
{
  
  Nmr_ShiftList  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Nmr_NmrProject_NewShiftList(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.SpectralDensityList
  @param  Nmr_NmrProject self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_SpectralDensityList Nmr_NmrProject_NewSpectralDensityList(Nmr_NmrProject self, ApiMap attrlinks)
{
  
  Nmr_SpectralDensityList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newSpectralDensityList");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'newSpectralDensityList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'newSpectralDensityList' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.SpectralDensityList
  @param  Nmr_NmrProject self
  @returns  the new object
**/
Nmr_SpectralDensityList Nmr_NmrProject_NewSpectralDensityList_reqd(Nmr_NmrProject self)
{
  
  Nmr_SpectralDensityList  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Nmr_NmrProject_NewSpectralDensityList(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.StructureAnalysis
  @param  Nmr_NmrProject self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_StructureAnalysis Nmr_NmrProject_NewStructureAnalysis(Nmr_NmrProject self, ApiMap attrlinks)
{
  
  Nmr_StructureAnalysis obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newStructureAnalysis");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'newStructureAnalysis'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'newStructureAnalysis' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.StructureAnalysis
  @param  Nmr_NmrProject self
  @returns  the new object
**/
Nmr_StructureAnalysis Nmr_NmrProject_NewStructureAnalysis_reqd(Nmr_NmrProject self)
{
  
  Nmr_StructureAnalysis  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Nmr_NmrProject_NewStructureAnalysis(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.StructureGeneration
  @param  Nmr_NmrProject self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_StructureGeneration Nmr_NmrProject_NewStructureGeneration(Nmr_NmrProject self, ApiMap attrlinks)
{
  
  Nmr_StructureGeneration obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newStructureGeneration");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'newStructureGeneration'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'newStructureGeneration' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.StructureGeneration
  @param  Nmr_NmrProject self
  @returns  the new object
**/
Nmr_StructureGeneration Nmr_NmrProject_NewStructureGeneration_reqd(Nmr_NmrProject self)
{
  
  Nmr_StructureGeneration  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Nmr_NmrProject_NewStructureGeneration(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.T1List
  @param  Nmr_NmrProject self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_T1List Nmr_NmrProject_NewT1List(Nmr_NmrProject self, ApiMap attrlinks)
{
  
  Nmr_T1List obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newT1List");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'newT1List'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'newT1List' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.T1List
  @param  Nmr_NmrProject self
  @param  float sf
  @returns  the new object
**/
Nmr_T1List Nmr_NmrProject_NewT1List_reqd(Nmr_NmrProject self, float sf)
{
  
  Nmr_T1List  obj;
  PyObject *attrlinks = PyDict_New();
  ApiFloat api__sf = ApiFloat_New(sf);

  PyDict_SetItemString(attrlinks, "sf", api__sf);
  
  obj = Nmr_NmrProject_NewT1List(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__sf);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.T1rhoList
  @param  Nmr_NmrProject self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_T1rhoList Nmr_NmrProject_NewT1rhoList(Nmr_NmrProject self, ApiMap attrlinks)
{
  
  Nmr_T1rhoList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newT1rhoList");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'newT1rhoList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'newT1rhoList' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.T1rhoList
  @param  Nmr_NmrProject self
  @param  float sf
  @returns  the new object
**/
Nmr_T1rhoList Nmr_NmrProject_NewT1rhoList_reqd(Nmr_NmrProject self, float sf)
{
  
  Nmr_T1rhoList  obj;
  PyObject *attrlinks = PyDict_New();
  ApiFloat api__sf = ApiFloat_New(sf);

  PyDict_SetItemString(attrlinks, "sf", api__sf);
  
  obj = Nmr_NmrProject_NewT1rhoList(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__sf);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.T2List
  @param  Nmr_NmrProject self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_T2List Nmr_NmrProject_NewT2List(Nmr_NmrProject self, ApiMap attrlinks)
{
  
  Nmr_T2List obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newT2List");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'newT2List'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'newT2List' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.T2List
  @param  Nmr_NmrProject self
  @param  float sf
  @returns  the new object
**/
Nmr_T2List Nmr_NmrProject_NewT2List_reqd(Nmr_NmrProject self, float sf)
{
  
  Nmr_T2List  obj;
  PyObject *attrlinks = PyDict_New();
  ApiFloat api__sf = ApiFloat_New(sf);

  PyDict_SetItemString(attrlinks, "sf", api__sf);
  
  obj = Nmr_NmrProject_NewT2List(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__sf);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_NmrProject self
  @param  Impl_ApplicationData value
**/
void *Nmr_NmrProject_RemoveApplicationData(Nmr_NmrProject self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
ccp.nmr.Nmr.NmrProject.structureValidationStores

ValidationStores 
relevant to NmrProject
  @param  Nmr_NmrProject self
  @param  Vald_ValidationStore value
**/
void *Nmr_NmrProject_RemoveValidationStore(Nmr_NmrProject self, Vald_ValidationStore value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeValidationStore");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'removeValidationStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'removeValidationStore' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.nmr.Nmr.NmrProject
  @param  Nmr_NmrProject self
  @param  ApiString name
  @param  ApiObject value
**/
void *Nmr_NmrProject_Set(Nmr_NmrProject self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_NmrProject self
  @param  Acco_AccessObject value
**/
void *Nmr_NmrProject_SetAccess(Nmr_NmrProject self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'setAccess' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.NmrProject.analysisProject

Analysis project that 
relates to the Nmr Project
  @param  Nmr_NmrProject self
  @param  Anal_AnalysisProject value
**/
void *Nmr_NmrProject_SetAnalysisProject(Nmr_NmrProject self, Anal_AnalysisProject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAnalysisProject");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'setAnalysisProject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'setAnalysisProject' is not callable");
  
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
  @param  Nmr_NmrProject self
  @param  ApiList values
**/
void *Nmr_NmrProject_SetApplicationData(Nmr_NmrProject self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.TopObject.createdBy

user who created 
TopObject.
  @param  Nmr_NmrProject self
  @param  ApiString value
**/
void *Nmr_NmrProject_SetCreatedBy(Nmr_NmrProject self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCreatedBy");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'setCreatedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'setCreatedBy' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.TopObject.guid

global unique identifier - 
set by implementation.
  @param  Nmr_NmrProject self
  @param  ApiString value
**/
void *Nmr_NmrProject_SetGuid(Nmr_NmrProject self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setGuid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'setGuid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'setGuid' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.TopObject.isModifiable

True if the data 
corresponding to the storage may be modified. If isModifiable is false 
for a given package, attemps to modify the data will raise an error. 
Note that isModifiable can be set to true even if the corresponding file 
is read-only. 

For a Project, this atribute defines whether the 
Implementation package (not the entire project contents) can be 
modified. If the Implementation package is Read-Only, this will prohibit 
many changes in the other packages as well.

This parameter can be 
freely modified by users, so it is not a security feature, but rather a 
protection against accidental changes.
  @param  Nmr_NmrProject self
  @param  ApiBoolean value
**/
void *Nmr_NmrProject_SetIsModifiable(Nmr_NmrProject self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsModifiable");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'setIsModifiable'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'setIsModifiable' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.TopObject.lastUnlockedBy

User who last 
set TopObject.isModifiable to True.  Used to track if data have been 
modified. Provided data have isModifiable set to False, any modification 
in the underlying data will show up on lastUnlockedBy.
  @param  Nmr_NmrProject self
  @param  ApiString value
**/
void *Nmr_NmrProject_SetLastUnlockedBy(Nmr_NmrProject self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLastUnlockedBy");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'setLastUnlockedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'setLastUnlockedBy' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.NmrProject.name

name of NmrProject
  @param  Nmr_NmrProject self
  @param  ApiString value
**/
void *Nmr_NmrProject_SetName(Nmr_NmrProject self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.NmrProject.nmrConstraintStores

NmrConstraintStores 
that refer to the NmrProject
  @param  Nmr_NmrProject self
  @param  ApiSet values
**/
void *Nmr_NmrProject_SetNmrConstraintStores(Nmr_NmrProject self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNmrConstraintStores");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'setNmrConstraintStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'setNmrConstraintStores' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.nmr.Nmr.NmrProject.structureValidationStores

ValidationStores 
relevant to NmrProject
  @param  Nmr_NmrProject self
  @param  ApiSet values
**/
void *Nmr_NmrProject_SetValidationStores(Nmr_NmrProject self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setValidationStores");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'setValidationStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'setValidationStores' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.NmrProject.atomSets

child link to class AtomSet
  @param  Nmr_NmrProject self
  @returns   the result
**/
ApiList Nmr_NmrProject_SortedAtomSets(Nmr_NmrProject self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedAtomSets");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'sortedAtomSets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'sortedAtomSets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.NmrProject.chainStateSets

child link to class 
ChainStateSet
  @param  Nmr_NmrProject self
  @returns   the result
**/
ApiList Nmr_NmrProject_SortedChainStateSets(Nmr_NmrProject self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChainStateSets");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'sortedChainStateSets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'sortedChainStateSets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.NmrProject.derivedDataLists

child link to class 
DerivedDataList
  @param  Nmr_NmrProject self
  @returns   the result
**/
ApiList Nmr_NmrProject_SortedDerivedDataLists(Nmr_NmrProject self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedDerivedDataLists");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'sortedDerivedDataLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'sortedDerivedDataLists' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.NmrProject.experiments

child link to class 
Experiment
  @param  Nmr_NmrProject self
  @returns   the result
**/
ApiList Nmr_NmrProject_SortedExperiments(Nmr_NmrProject self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedExperiments");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'sortedExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'sortedExperiments' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.NmrProject.measurementLists

child link to class 
AbstractMeasurementList
  @param  Nmr_NmrProject self
  @returns   the result
**/
ApiList Nmr_NmrProject_SortedMeasurementLists(Nmr_NmrProject self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedMeasurementLists");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'sortedMeasurementLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'sortedMeasurementLists' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.nmr.Nmr.NmrProject.nmrConstraintStores

NmrConstraintStores that 
refer to the NmrProject
  @param  Nmr_NmrProject self
  @returns   the result
**/
ApiList Nmr_NmrProject_SortedNmrConstraintStores(Nmr_NmrProject self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedNmrConstraintStores");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'sortedNmrConstraintStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'sortedNmrConstraintStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.NmrProject.nmrExpSeries

child link to class 
NmrExpSeries
  @param  Nmr_NmrProject self
  @returns   the result
**/
ApiList Nmr_NmrProject_SortedNmrExpSeries(Nmr_NmrProject self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedNmrExpSeries");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'sortedNmrExpSeries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'sortedNmrExpSeries' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.NmrProject.peakClusters

child link to class 
PeakCluster
  @param  Nmr_NmrProject self
  @returns   the result
**/
ApiList Nmr_NmrProject_SortedPeakClusters(Nmr_NmrProject self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedPeakClusters");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'sortedPeakClusters'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'sortedPeakClusters' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.NmrProject.resonanceGroups

child link to class 
ResonanceGroup
  @param  Nmr_NmrProject self
  @returns   the result
**/
ApiList Nmr_NmrProject_SortedResonanceGroups(Nmr_NmrProject self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedResonanceGroups");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'sortedResonanceGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'sortedResonanceGroups' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.NmrProject.resonanceSets

child link to class 
ResonanceSet
  @param  Nmr_NmrProject self
  @returns   the result
**/
ApiList Nmr_NmrProject_SortedResonanceSets(Nmr_NmrProject self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedResonanceSets");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'sortedResonanceSets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'sortedResonanceSets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.NmrProject.resonances

child link to class 
Resonance
  @param  Nmr_NmrProject self
  @returns   the result
**/
ApiList Nmr_NmrProject_SortedResonances(Nmr_NmrProject self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedResonances");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'sortedResonances'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'sortedResonances' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.NmrProject.sampleConditionSets

child link to 
class SampleConditionSet
  @param  Nmr_NmrProject self
  @returns   the result
**/
ApiList Nmr_NmrProject_SortedSampleConditionSets(Nmr_NmrProject self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedSampleConditionSets");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'sortedSampleConditionSets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'sortedSampleConditionSets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.NmrProject.shiftReferences

child link to class 
ShiftReference
  @param  Nmr_NmrProject self
  @returns   the result
**/
ApiList Nmr_NmrProject_SortedShiftReferences(Nmr_NmrProject self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedShiftReferences");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'sortedShiftReferences'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'sortedShiftReferences' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.NmrProject.structureAnalysiss

child link to 
class StructureAnalysis
  @param  Nmr_NmrProject self
  @returns   the result
**/
ApiList Nmr_NmrProject_SortedStructureAnalysiss(Nmr_NmrProject self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedStructureAnalysiss");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'sortedStructureAnalysiss'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'sortedStructureAnalysiss' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.NmrProject.structureGenerations

child link to 
class StructureGeneration
  @param  Nmr_NmrProject self
  @returns   the result
**/
ApiList Nmr_NmrProject_SortedStructureGenerations(Nmr_NmrProject self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedStructureGenerations");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'sortedStructureGenerations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'sortedStructureGenerations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.nmr.Nmr.NmrProject.structureValidationStores

ValidationStores 
relevant to NmrProject
  @param  Nmr_NmrProject self
  @returns   the result
**/
ApiList Nmr_NmrProject_SortedValidationStores(Nmr_NmrProject self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedValidationStores");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.NmrProject: cannot find method 'sortedValidationStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.NmrProject: method 'sortedValidationStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
