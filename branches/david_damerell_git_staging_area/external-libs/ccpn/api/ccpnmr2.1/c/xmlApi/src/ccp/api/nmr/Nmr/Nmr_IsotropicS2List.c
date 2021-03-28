
#include "ccp.h"

/*
  List of order parameters (S2), calculated assuming isotropic motion.
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_IsotropicS2List self
  @param  Impl_ApplicationData value
**/
void *Nmr_IsotropicS2List_AddApplicationData(Nmr_IsotropicS2List self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.Nmr.DerivedDataList.entries

Entries which include 
DerivedDataList
  @param  Nmr_IsotropicS2List self
  @param  Entr_Entry value
**/
void *Nmr_IsotropicS2List_AddEntry(Nmr_IsotropicS2List self, Entr_Entry value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addEntry");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: cannot find method 'addEntry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: method 'addEntry' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.Nmr.IsotropicS2List.experiments

Experiments for which 
isotropic order parameter lis is valid.
  @param  Nmr_IsotropicS2List self
  @param  Nmr_Experiment value
**/
void *Nmr_IsotropicS2List_AddExperiment(Nmr_IsotropicS2List self, Nmr_Experiment value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addExperiment");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: cannot find method 'addExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: method 'addExperiment' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.nmr.Nmr.IsotropicS2List
  @param  Nmr_IsotropicS2List self
  @param  ApiBoolean complete
**/
void *Nmr_IsotropicS2List_CheckAllValid(Nmr_IsotropicS2List self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.nmr.Nmr.IsotropicS2List
  @param  Nmr_IsotropicS2List self
  @param  ApiBoolean complete
**/
void *Nmr_IsotropicS2List_CheckValid(Nmr_IsotropicS2List self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: method 'checkValid' is not callable");
  
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
  @param  Nmr_IsotropicS2List self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_IsotropicS2List_FindAllApplicationData(Nmr_IsotropicS2List self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: method 'findAllApplicationData' is not callable");
  
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
  @param  Nmr_IsotropicS2List self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_IsotropicS2List_FindAllApplicationData_keyval0(Nmr_IsotropicS2List self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_IsotropicS2List_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_IsotropicS2List self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_IsotropicS2List_FindAllApplicationData_keyval1(Nmr_IsotropicS2List self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_IsotropicS2List_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_IsotropicS2List self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_IsotropicS2List_FindAllApplicationData_keyval2(Nmr_IsotropicS2List self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_IsotropicS2List_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_IsotropicS2List self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_IsotropicS2List_FindAllApplicationData_keyval3(Nmr_IsotropicS2List self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_IsotropicS2List_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_IsotropicS2List self
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
ApiList Nmr_IsotropicS2List_FindAllApplicationData_keyval4(Nmr_IsotropicS2List self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_IsotropicS2List_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.IsotropicS2List.derivations

child link to class 
IsotropicS2Derivation
  @param  Nmr_IsotropicS2List self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_IsotropicS2List_FindAllDerivations(Nmr_IsotropicS2List self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllDerivations");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: cannot find method 'findAllDerivations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: method 'findAllDerivations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.IsotropicS2List.derivations

child link to class 
IsotropicS2Derivation
  @param  Nmr_IsotropicS2List self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_IsotropicS2List_FindAllDerivations_keyval0(Nmr_IsotropicS2List self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_IsotropicS2List_FindAllDerivations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.IsotropicS2List.derivations

child link to class 
IsotropicS2Derivation
  @param  Nmr_IsotropicS2List self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_IsotropicS2List_FindAllDerivations_keyval1(Nmr_IsotropicS2List self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_IsotropicS2List_FindAllDerivations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.IsotropicS2List.derivations

child link to class 
IsotropicS2Derivation
  @param  Nmr_IsotropicS2List self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_IsotropicS2List_FindAllDerivations_keyval2(Nmr_IsotropicS2List self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_IsotropicS2List_FindAllDerivations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.IsotropicS2List.derivations

child link to class 
IsotropicS2Derivation
  @param  Nmr_IsotropicS2List self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_IsotropicS2List_FindAllDerivations_keyval3(Nmr_IsotropicS2List self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_IsotropicS2List_FindAllDerivations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.IsotropicS2List.derivations

child link to class 
IsotropicS2Derivation
  @param  Nmr_IsotropicS2List self
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
ApiSet Nmr_IsotropicS2List_FindAllDerivations_keyval4(Nmr_IsotropicS2List self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_IsotropicS2List_FindAllDerivations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.DerivedDataList.entries

Entries which include 
DerivedDataList
  @param  Nmr_IsotropicS2List self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_IsotropicS2List_FindAllEntries(Nmr_IsotropicS2List self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllEntries");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: cannot find method 'findAllEntries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: method 'findAllEntries' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.DerivedDataList.entries

Entries which include 
DerivedDataList
  @param  Nmr_IsotropicS2List self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_IsotropicS2List_FindAllEntries_keyval0(Nmr_IsotropicS2List self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_IsotropicS2List_FindAllEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.DerivedDataList.entries

Entries which include 
DerivedDataList
  @param  Nmr_IsotropicS2List self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_IsotropicS2List_FindAllEntries_keyval1(Nmr_IsotropicS2List self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_IsotropicS2List_FindAllEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.DerivedDataList.entries

Entries which include 
DerivedDataList
  @param  Nmr_IsotropicS2List self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_IsotropicS2List_FindAllEntries_keyval2(Nmr_IsotropicS2List self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_IsotropicS2List_FindAllEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.DerivedDataList.entries

Entries which include 
DerivedDataList
  @param  Nmr_IsotropicS2List self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_IsotropicS2List_FindAllEntries_keyval3(Nmr_IsotropicS2List self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_IsotropicS2List_FindAllEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.DerivedDataList.entries

Entries which include 
DerivedDataList
  @param  Nmr_IsotropicS2List self
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
ApiSet Nmr_IsotropicS2List_FindAllEntries_keyval4(Nmr_IsotropicS2List self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_IsotropicS2List_FindAllEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.IsotropicS2List.experiments

Experiments for 
which isotropic order parameter lis is valid.
  @param  Nmr_IsotropicS2List self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_IsotropicS2List_FindAllExperiments(Nmr_IsotropicS2List self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllExperiments");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: cannot find method 'findAllExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: method 'findAllExperiments' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.IsotropicS2List.experiments

Experiments for 
which isotropic order parameter lis is valid.
  @param  Nmr_IsotropicS2List self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_IsotropicS2List_FindAllExperiments_keyval0(Nmr_IsotropicS2List self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_IsotropicS2List_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.IsotropicS2List.experiments

Experiments for 
which isotropic order parameter lis is valid.
  @param  Nmr_IsotropicS2List self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_IsotropicS2List_FindAllExperiments_keyval1(Nmr_IsotropicS2List self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_IsotropicS2List_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.IsotropicS2List.experiments

Experiments for 
which isotropic order parameter lis is valid.
  @param  Nmr_IsotropicS2List self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_IsotropicS2List_FindAllExperiments_keyval2(Nmr_IsotropicS2List self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_IsotropicS2List_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.IsotropicS2List.experiments

Experiments for 
which isotropic order parameter lis is valid.
  @param  Nmr_IsotropicS2List self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_IsotropicS2List_FindAllExperiments_keyval3(Nmr_IsotropicS2List self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_IsotropicS2List_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.IsotropicS2List.experiments

Experiments for 
which isotropic order parameter lis is valid.
  @param  Nmr_IsotropicS2List self
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
ApiSet Nmr_IsotropicS2List_FindAllExperiments_keyval4(Nmr_IsotropicS2List self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_IsotropicS2List_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_IsotropicS2List self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_IsotropicS2List_FindFirstApplicationData(Nmr_IsotropicS2List self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nmr_IsotropicS2List self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_IsotropicS2List_FindFirstApplicationData_keyval0(Nmr_IsotropicS2List self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_IsotropicS2List_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_IsotropicS2List self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_IsotropicS2List_FindFirstApplicationData_keyval1(Nmr_IsotropicS2List self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_IsotropicS2List_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_IsotropicS2List self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_IsotropicS2List_FindFirstApplicationData_keyval2(Nmr_IsotropicS2List self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_IsotropicS2List_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_IsotropicS2List self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_IsotropicS2List_FindFirstApplicationData_keyval3(Nmr_IsotropicS2List self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_IsotropicS2List_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_IsotropicS2List self
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
Impl_ApplicationData Nmr_IsotropicS2List_FindFirstApplicationData_keyval4(Nmr_IsotropicS2List self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_IsotropicS2List_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.IsotropicS2List.derivations

child link to 
class IsotropicS2Derivation
  @param  Nmr_IsotropicS2List self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_IsotropicS2Derivation Nmr_IsotropicS2List_FindFirstDerivation(Nmr_IsotropicS2List self, ApiMap conditions)
{
  
  Nmr_IsotropicS2Derivation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstDerivation");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: cannot find method 'findFirstDerivation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: method 'findFirstDerivation' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.IsotropicS2List.derivations

child link to 
class IsotropicS2Derivation
  @param  Nmr_IsotropicS2List self
  @returns  the first value that satisfies the conditions 
**/
Nmr_IsotropicS2Derivation Nmr_IsotropicS2List_FindFirstDerivation_keyval0(Nmr_IsotropicS2List self)
{
  
  Nmr_IsotropicS2Derivation  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_IsotropicS2List_FindFirstDerivation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.IsotropicS2List.derivations

child link to 
class IsotropicS2Derivation
  @param  Nmr_IsotropicS2List self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_IsotropicS2Derivation Nmr_IsotropicS2List_FindFirstDerivation_keyval1(Nmr_IsotropicS2List self, char * key, ApiObject value)
{
  
  Nmr_IsotropicS2Derivation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_IsotropicS2List_FindFirstDerivation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.IsotropicS2List.derivations

child link to 
class IsotropicS2Derivation
  @param  Nmr_IsotropicS2List self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_IsotropicS2Derivation Nmr_IsotropicS2List_FindFirstDerivation_keyval2(Nmr_IsotropicS2List self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_IsotropicS2Derivation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_IsotropicS2List_FindFirstDerivation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.IsotropicS2List.derivations

child link to 
class IsotropicS2Derivation
  @param  Nmr_IsotropicS2List self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_IsotropicS2Derivation Nmr_IsotropicS2List_FindFirstDerivation_keyval3(Nmr_IsotropicS2List self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_IsotropicS2Derivation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_IsotropicS2List_FindFirstDerivation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.IsotropicS2List.derivations

child link to 
class IsotropicS2Derivation
  @param  Nmr_IsotropicS2List self
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
Nmr_IsotropicS2Derivation Nmr_IsotropicS2List_FindFirstDerivation_keyval4(Nmr_IsotropicS2List self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_IsotropicS2Derivation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_IsotropicS2List_FindFirstDerivation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.DerivedDataList.entries

Entries which include 
DerivedDataList
  @param  Nmr_IsotropicS2List self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Nmr_IsotropicS2List_FindFirstEntry(Nmr_IsotropicS2List self, ApiMap conditions)
{
  
  Entr_Entry obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstEntry");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: cannot find method 'findFirstEntry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: method 'findFirstEntry' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.DerivedDataList.entries

Entries which include 
DerivedDataList
  @param  Nmr_IsotropicS2List self
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Nmr_IsotropicS2List_FindFirstEntry_keyval0(Nmr_IsotropicS2List self)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_IsotropicS2List_FindFirstEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.DerivedDataList.entries

Entries which include 
DerivedDataList
  @param  Nmr_IsotropicS2List self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Nmr_IsotropicS2List_FindFirstEntry_keyval1(Nmr_IsotropicS2List self, char * key, ApiObject value)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_IsotropicS2List_FindFirstEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.DerivedDataList.entries

Entries which include 
DerivedDataList
  @param  Nmr_IsotropicS2List self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Nmr_IsotropicS2List_FindFirstEntry_keyval2(Nmr_IsotropicS2List self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_IsotropicS2List_FindFirstEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.DerivedDataList.entries

Entries which include 
DerivedDataList
  @param  Nmr_IsotropicS2List self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Nmr_IsotropicS2List_FindFirstEntry_keyval3(Nmr_IsotropicS2List self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_IsotropicS2List_FindFirstEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.DerivedDataList.entries

Entries which include 
DerivedDataList
  @param  Nmr_IsotropicS2List self
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
Entr_Entry Nmr_IsotropicS2List_FindFirstEntry_keyval4(Nmr_IsotropicS2List self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_IsotropicS2List_FindFirstEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.IsotropicS2List.experiments

Experiments for 
which isotropic order parameter lis is valid.
  @param  Nmr_IsotropicS2List self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Nmr_IsotropicS2List_FindFirstExperiment(Nmr_IsotropicS2List self, ApiMap conditions)
{
  
  Nmr_Experiment obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstExperiment");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: cannot find method 'findFirstExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: method 'findFirstExperiment' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.IsotropicS2List.experiments

Experiments for 
which isotropic order parameter lis is valid.
  @param  Nmr_IsotropicS2List self
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Nmr_IsotropicS2List_FindFirstExperiment_keyval0(Nmr_IsotropicS2List self)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_IsotropicS2List_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.IsotropicS2List.experiments

Experiments for 
which isotropic order parameter lis is valid.
  @param  Nmr_IsotropicS2List self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Nmr_IsotropicS2List_FindFirstExperiment_keyval1(Nmr_IsotropicS2List self, char * key, ApiObject value)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_IsotropicS2List_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.IsotropicS2List.experiments

Experiments for 
which isotropic order parameter lis is valid.
  @param  Nmr_IsotropicS2List self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Nmr_IsotropicS2List_FindFirstExperiment_keyval2(Nmr_IsotropicS2List self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_IsotropicS2List_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.IsotropicS2List.experiments

Experiments for 
which isotropic order parameter lis is valid.
  @param  Nmr_IsotropicS2List self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Nmr_IsotropicS2List_FindFirstExperiment_keyval3(Nmr_IsotropicS2List self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_IsotropicS2List_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.IsotropicS2List.experiments

Experiments for 
which isotropic order parameter lis is valid.
  @param  Nmr_IsotropicS2List self
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
Nmr_Experiment Nmr_IsotropicS2List_FindFirstExperiment_keyval4(Nmr_IsotropicS2List self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_IsotropicS2List_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.nmr.Nmr.IsotropicS2List
  @param  Nmr_IsotropicS2List self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Nmr_IsotropicS2List_Get(Nmr_IsotropicS2List self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_IsotropicS2List self
  @returns   the result
**/
Acco_AccessObject Nmr_IsotropicS2List_GetAccess(Nmr_IsotropicS2List self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: method 'getAccess' is not callable");
  
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
  @param  Nmr_IsotropicS2List self
  @returns   the result
**/
Acco_AccessObject Nmr_IsotropicS2List_GetActiveAccess(Nmr_IsotropicS2List self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: method 'getActiveAccess' is not callable");
  
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
  @param  Nmr_IsotropicS2List self
  @returns   the result
**/
ApiList Nmr_IsotropicS2List_GetApplicationData(Nmr_IsotropicS2List self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.Nmr.IsotropicS2List
  @param  Nmr_IsotropicS2List self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nmr_IsotropicS2List Nmr_IsotropicS2List_GetByKey(Nmr_IsotropicS2List self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Nmr_IsotropicS2List obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: method 'getByKey' is not callable");
  
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
  @param  Nmr_IsotropicS2List self
  @returns   the result
**/
ApiString Nmr_IsotropicS2List_GetClassName(Nmr_IsotropicS2List self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.IsotropicS2List.derivations

child link to class 
IsotropicS2Derivation
  @param  Nmr_IsotropicS2List self
  @returns   the result
**/
ApiSet Nmr_IsotropicS2List_GetDerivations(Nmr_IsotropicS2List self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDerivations");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: cannot find method 'getDerivations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: method 'getDerivations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.DerivedDataList.details

Free text, for notes, 
explanatory comments, etc.
  @param  Nmr_IsotropicS2List self
  @returns   the result
**/
ApiString Nmr_IsotropicS2List_GetDetails(Nmr_IsotropicS2List self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: method 'getDetails' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.DerivedDataList.entries

Entries which include 
DerivedDataList
  @param  Nmr_IsotropicS2List self
  @returns   the result
**/
ApiSet Nmr_IsotropicS2List_GetEntries(Nmr_IsotropicS2List self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getEntries");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: cannot find method 'getEntries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: method 'getEntries' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.IsotropicS2List.experiments

Experiments for which 
isotropic order parameter lis is valid.
  @param  Nmr_IsotropicS2List self
  @returns   the result
**/
ApiSet Nmr_IsotropicS2List_GetExperiments(Nmr_IsotropicS2List self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExperiments");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: cannot find method 'getExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: method 'getExperiments' is not callable");
  
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
  @param  Nmr_IsotropicS2List self
  @returns   the result
**/
ApiList Nmr_IsotropicS2List_GetFieldNames(Nmr_IsotropicS2List self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: method 'getFieldNames' is not callable");
  
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
  @param  Nmr_IsotropicS2List self
  @returns   the result
**/
ApiBoolean Nmr_IsotropicS2List_GetInConstructor(Nmr_IsotropicS2List self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: method 'getInConstructor' is not callable");
  
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
  @param  Nmr_IsotropicS2List self
  @returns   the result
**/
ApiBoolean Nmr_IsotropicS2List_GetIsDeleted(Nmr_IsotropicS2List self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.DerivedDataList.method

Default method used for 
deriving Meassurements in list. This method is overridden by the methods 
given for the individual derivation, if any.
  @param  Nmr_IsotropicS2List self
  @returns   the result
**/
Meth_Method Nmr_IsotropicS2List_GetMethod(Nmr_IsotropicS2List self)
{
  
  Meth_Method obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMethod");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: cannot find method 'getMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: method 'getMethod' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.DerivedDataList.nmrProject

parent link
  @param  Nmr_IsotropicS2List self
  @returns   the result
**/
Nmr_NmrProject Nmr_IsotropicS2List_GetNmrProject(Nmr_IsotropicS2List self)
{
  
  Nmr_NmrProject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrProject");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: cannot find method 'getNmrProject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: method 'getNmrProject' is not callable");
  
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
  @param  Nmr_IsotropicS2List self
  @returns   the result
**/
ApiString Nmr_IsotropicS2List_GetPackageName(Nmr_IsotropicS2List self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: method 'getPackageName' is not callable");
  
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
  @param  Nmr_IsotropicS2List self
  @returns   the result
**/
ApiString Nmr_IsotropicS2List_GetPackageShortName(Nmr_IsotropicS2List self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.DerivedDataList.parent

link to parent object - 
synonym for nmrProject
  @param  Nmr_IsotropicS2List self
  @returns   the result
**/
Nmr_NmrProject Nmr_IsotropicS2List_GetParent(Nmr_IsotropicS2List self)
{
  
  Nmr_NmrProject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: method 'getParent' is not callable");
  
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
  @param  Nmr_IsotropicS2List self
  @returns   the result
**/
ApiString Nmr_IsotropicS2List_GetQualifiedName(Nmr_IsotropicS2List self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: method 'getQualifiedName' is not callable");
  
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
  @param  Nmr_IsotropicS2List self
  @returns   the result
**/
Impl_MemopsRoot Nmr_IsotropicS2List_GetRoot(Nmr_IsotropicS2List self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.DerivedDataList.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Nmr_IsotropicS2List self
  @returns   the result
**/
ApiInteger Nmr_IsotropicS2List_GetSerial(Nmr_IsotropicS2List self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: method 'getSerial' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.IsotropicS2List.sf

Spectrometer frequency (in MHz) 
where order parameters were determined.
  @param  Nmr_IsotropicS2List self
  @returns   the result
**/
ApiFloat Nmr_IsotropicS2List_GetSf(Nmr_IsotropicS2List self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSf");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: cannot find method 'getSf'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: method 'getSf' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.IsotropicS2List.tauEUnit

Unit for tau-e (overall 
correlation time).
  @param  Nmr_IsotropicS2List self
  @returns   the result
**/
ApiString Nmr_IsotropicS2List_GetTauEUnit(Nmr_IsotropicS2List self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTauEUnit");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: cannot find method 'getTauEUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: method 'getTauEUnit' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.IsotropicS2List.tauSUnit

Unit for tau-s (internal 
motion correlation time).
  @param  Nmr_IsotropicS2List self
  @returns   the result
**/
ApiString Nmr_IsotropicS2List_GetTauSUnit(Nmr_IsotropicS2List self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTauSUnit");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: cannot find method 'getTauSUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: method 'getTauSUnit' is not callable");
  
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
  @param  Nmr_IsotropicS2List self
  @returns   the result
**/
Impl_TopObject Nmr_IsotropicS2List_GetTopObject(Nmr_IsotropicS2List self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.nmr.Nmr.IsotropicS2List
  @param  Nmr_NmrProject parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_IsotropicS2List Nmr_IsotropicS2List_Init(Nmr_NmrProject parent, ApiMap attrlinks)
{
  
  return Nmr_NmrProject_NewIsotropicS2List(parent, attrlinks);
}

/**
  Constructor for ccp.nmr.Nmr.IsotropicS2List
  @param  Nmr_NmrProject parent
  @returns  the new object
**/
Nmr_IsotropicS2List Nmr_IsotropicS2List_Init_reqd(Nmr_NmrProject parent)
{
  
  Nmr_IsotropicS2List  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Nmr_IsotropicS2List_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.IsotropicS2Derivation
  @param  Nmr_IsotropicS2List self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_IsotropicS2Derivation Nmr_IsotropicS2List_NewIsotropicS2Derivation(Nmr_IsotropicS2List self, ApiMap attrlinks)
{
  
  Nmr_IsotropicS2Derivation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newIsotropicS2Derivation");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: cannot find method 'newIsotropicS2Derivation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: method 'newIsotropicS2Derivation' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.IsotropicS2Derivation
  @param  Nmr_IsotropicS2List self
  @returns  the new object
**/
Nmr_IsotropicS2Derivation Nmr_IsotropicS2List_NewIsotropicS2Derivation_reqd(Nmr_IsotropicS2List self)
{
  
  Nmr_IsotropicS2Derivation  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Nmr_IsotropicS2List_NewIsotropicS2Derivation(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_IsotropicS2List self
  @param  Impl_ApplicationData value
**/
void *Nmr_IsotropicS2List_RemoveApplicationData(Nmr_IsotropicS2List self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.Nmr.DerivedDataList.entries

Entries which include 
DerivedDataList
  @param  Nmr_IsotropicS2List self
  @param  Entr_Entry value
**/
void *Nmr_IsotropicS2List_RemoveEntry(Nmr_IsotropicS2List self, Entr_Entry value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeEntry");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: cannot find method 'removeEntry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: method 'removeEntry' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.Nmr.IsotropicS2List.experiments

Experiments for 
which isotropic order parameter lis is valid.
  @param  Nmr_IsotropicS2List self
  @param  Nmr_Experiment value
**/
void *Nmr_IsotropicS2List_RemoveExperiment(Nmr_IsotropicS2List self, Nmr_Experiment value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeExperiment");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: cannot find method 'removeExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: method 'removeExperiment' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.nmr.Nmr.IsotropicS2List
  @param  Nmr_IsotropicS2List self
  @param  ApiString name
  @param  ApiObject value
**/
void *Nmr_IsotropicS2List_Set(Nmr_IsotropicS2List self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_IsotropicS2List self
  @param  Acco_AccessObject value
**/
void *Nmr_IsotropicS2List_SetAccess(Nmr_IsotropicS2List self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: method 'setAccess' is not callable");
  
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
  @param  Nmr_IsotropicS2List self
  @param  ApiList values
**/
void *Nmr_IsotropicS2List_SetApplicationData(Nmr_IsotropicS2List self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.DerivedDataList.details

Free text, for notes, 
explanatory comments, etc.
  @param  Nmr_IsotropicS2List self
  @param  ApiString value
**/
void *Nmr_IsotropicS2List_SetDetails(Nmr_IsotropicS2List self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.DerivedDataList.entries

Entries which include 
DerivedDataList
  @param  Nmr_IsotropicS2List self
  @param  ApiSet values
**/
void *Nmr_IsotropicS2List_SetEntries(Nmr_IsotropicS2List self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setEntries");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: cannot find method 'setEntries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: method 'setEntries' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.IsotropicS2List.experiments

Experiments for which 
isotropic order parameter lis is valid.
  @param  Nmr_IsotropicS2List self
  @param  ApiSet values
**/
void *Nmr_IsotropicS2List_SetExperiments(Nmr_IsotropicS2List self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setExperiments");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: cannot find method 'setExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: method 'setExperiments' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.DerivedDataList.method

Default method used for 
deriving Meassurements in list. This method is overridden by the methods 
given for the individual derivation, if any.
  @param  Nmr_IsotropicS2List self
  @param  Meth_Method value
**/
void *Nmr_IsotropicS2List_SetMethod(Nmr_IsotropicS2List self, Meth_Method value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMethod");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: cannot find method 'setMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: method 'setMethod' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.DerivedDataList.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Nmr_IsotropicS2List self
  @param  ApiInteger value
**/
void *Nmr_IsotropicS2List_SetSerial(Nmr_IsotropicS2List self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.IsotropicS2List.sf

Spectrometer frequency (in MHz) 
where order parameters were determined.
  @param  Nmr_IsotropicS2List self
  @param  ApiFloat value
**/
void *Nmr_IsotropicS2List_SetSf(Nmr_IsotropicS2List self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSf");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: cannot find method 'setSf'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: method 'setSf' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.IsotropicS2List.tauEUnit

Unit for tau-e (overall 
correlation time).
  @param  Nmr_IsotropicS2List self
  @param  ApiString value
**/
void *Nmr_IsotropicS2List_SetTauEUnit(Nmr_IsotropicS2List self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setTauEUnit");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: cannot find method 'setTauEUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: method 'setTauEUnit' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.IsotropicS2List.tauSUnit

Unit for tau-s (internal 
motion correlation time).
  @param  Nmr_IsotropicS2List self
  @param  ApiString value
**/
void *Nmr_IsotropicS2List_SetTauSUnit(Nmr_IsotropicS2List self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setTauSUnit");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: cannot find method 'setTauSUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: method 'setTauSUnit' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.IsotropicS2List.derivations

child link to class 
IsotropicS2Derivation
  @param  Nmr_IsotropicS2List self
  @returns   the result
**/
ApiList Nmr_IsotropicS2List_SortedDerivations(Nmr_IsotropicS2List self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedDerivations");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: cannot find method 'sortedDerivations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: method 'sortedDerivations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.DerivedDataList.entries

Entries which include 
DerivedDataList
  @param  Nmr_IsotropicS2List self
  @returns   the result
**/
ApiList Nmr_IsotropicS2List_SortedEntries(Nmr_IsotropicS2List self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedEntries");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: cannot find method 'sortedEntries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: method 'sortedEntries' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.IsotropicS2List.experiments

Experiments for 
which isotropic order parameter lis is valid.
  @param  Nmr_IsotropicS2List self
  @returns   the result
**/
ApiList Nmr_IsotropicS2List_SortedExperiments(Nmr_IsotropicS2List self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedExperiments");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: cannot find method 'sortedExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2List: method 'sortedExperiments' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
