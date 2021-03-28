
#include "ccp.h"

/*
  One cycle of Nmr Structure generation, with associated constraints, protocol, parameters, etc., producing one family of structures. NB protocol etc. information still not modeled. 
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_StructureGeneration self
  @param  Impl_ApplicationData value
**/
void *Nmr_StructureGeneration_AddApplicationData(Nmr_StructureGeneration self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.Nmr.StructureGeneration.entries

Deposition Entries for 
StructureGeneration
  @param  Nmr_StructureGeneration self
  @param  Entr_Entry value
**/
void *Nmr_StructureGeneration_AddEntry(Nmr_StructureGeneration self, Entr_Entry value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addEntry");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: cannot find method 'addEntry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: method 'addEntry' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.Nmr.StructureGeneration.runs

NmrCalc runs used in 
structure generation
  @param  Nmr_StructureGeneration self
  @param  Calc_Run value
**/
void *Nmr_StructureGeneration_AddRun(Nmr_StructureGeneration self, Calc_Run value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addRun");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: cannot find method 'addRun'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: method 'addRun' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.nmr.Nmr.StructureGeneration
  @param  Nmr_StructureGeneration self
  @param  ApiBoolean complete
**/
void *Nmr_StructureGeneration_CheckAllValid(Nmr_StructureGeneration self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.nmr.Nmr.StructureGeneration
  @param  Nmr_StructureGeneration self
  @param  ApiBoolean complete
**/
void *Nmr_StructureGeneration_CheckValid(Nmr_StructureGeneration self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: method 'checkValid' is not callable");
  
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
  @param  Nmr_StructureGeneration self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_StructureGeneration_FindAllApplicationData(Nmr_StructureGeneration self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: method 'findAllApplicationData' is not callable");
  
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
  @param  Nmr_StructureGeneration self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_StructureGeneration_FindAllApplicationData_keyval0(Nmr_StructureGeneration self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_StructureGeneration_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_StructureGeneration self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_StructureGeneration_FindAllApplicationData_keyval1(Nmr_StructureGeneration self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_StructureGeneration_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_StructureGeneration self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_StructureGeneration_FindAllApplicationData_keyval2(Nmr_StructureGeneration self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_StructureGeneration_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_StructureGeneration self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_StructureGeneration_FindAllApplicationData_keyval3(Nmr_StructureGeneration self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_StructureGeneration_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_StructureGeneration self
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
ApiList Nmr_StructureGeneration_FindAllApplicationData_keyval4(Nmr_StructureGeneration self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_StructureGeneration_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.StructureGeneration.entries

Deposition Entries 
for StructureGeneration
  @param  Nmr_StructureGeneration self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_StructureGeneration_FindAllEntries(Nmr_StructureGeneration self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllEntries");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: cannot find method 'findAllEntries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: method 'findAllEntries' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.StructureGeneration.entries

Deposition Entries 
for StructureGeneration
  @param  Nmr_StructureGeneration self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_StructureGeneration_FindAllEntries_keyval0(Nmr_StructureGeneration self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_StructureGeneration_FindAllEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.StructureGeneration.entries

Deposition Entries 
for StructureGeneration
  @param  Nmr_StructureGeneration self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_StructureGeneration_FindAllEntries_keyval1(Nmr_StructureGeneration self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_StructureGeneration_FindAllEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.StructureGeneration.entries

Deposition Entries 
for StructureGeneration
  @param  Nmr_StructureGeneration self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_StructureGeneration_FindAllEntries_keyval2(Nmr_StructureGeneration self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_StructureGeneration_FindAllEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.StructureGeneration.entries

Deposition Entries 
for StructureGeneration
  @param  Nmr_StructureGeneration self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_StructureGeneration_FindAllEntries_keyval3(Nmr_StructureGeneration self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_StructureGeneration_FindAllEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.StructureGeneration.entries

Deposition Entries 
for StructureGeneration
  @param  Nmr_StructureGeneration self
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
ApiSet Nmr_StructureGeneration_FindAllEntries_keyval4(Nmr_StructureGeneration self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_StructureGeneration_FindAllEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.StructureGeneration.runs

NmrCalc runs used in 
structure generation
  @param  Nmr_StructureGeneration self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_StructureGeneration_FindAllRuns(Nmr_StructureGeneration self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllRuns");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: cannot find method 'findAllRuns'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: method 'findAllRuns' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.StructureGeneration.runs

NmrCalc runs used in 
structure generation
  @param  Nmr_StructureGeneration self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_StructureGeneration_FindAllRuns_keyval0(Nmr_StructureGeneration self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_StructureGeneration_FindAllRuns(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.StructureGeneration.runs

NmrCalc runs used in 
structure generation
  @param  Nmr_StructureGeneration self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_StructureGeneration_FindAllRuns_keyval1(Nmr_StructureGeneration self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_StructureGeneration_FindAllRuns(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.StructureGeneration.runs

NmrCalc runs used in 
structure generation
  @param  Nmr_StructureGeneration self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_StructureGeneration_FindAllRuns_keyval2(Nmr_StructureGeneration self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_StructureGeneration_FindAllRuns(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.StructureGeneration.runs

NmrCalc runs used in 
structure generation
  @param  Nmr_StructureGeneration self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_StructureGeneration_FindAllRuns_keyval3(Nmr_StructureGeneration self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_StructureGeneration_FindAllRuns(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.StructureGeneration.runs

NmrCalc runs used in 
structure generation
  @param  Nmr_StructureGeneration self
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
ApiSet Nmr_StructureGeneration_FindAllRuns_keyval4(Nmr_StructureGeneration self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_StructureGeneration_FindAllRuns(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_StructureGeneration self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_StructureGeneration_FindFirstApplicationData(Nmr_StructureGeneration self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nmr_StructureGeneration self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_StructureGeneration_FindFirstApplicationData_keyval0(Nmr_StructureGeneration self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_StructureGeneration_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_StructureGeneration self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_StructureGeneration_FindFirstApplicationData_keyval1(Nmr_StructureGeneration self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_StructureGeneration_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_StructureGeneration self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_StructureGeneration_FindFirstApplicationData_keyval2(Nmr_StructureGeneration self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_StructureGeneration_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_StructureGeneration self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_StructureGeneration_FindFirstApplicationData_keyval3(Nmr_StructureGeneration self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_StructureGeneration_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_StructureGeneration self
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
Impl_ApplicationData Nmr_StructureGeneration_FindFirstApplicationData_keyval4(Nmr_StructureGeneration self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_StructureGeneration_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.StructureGeneration.entries

Deposition 
Entries for StructureGeneration
  @param  Nmr_StructureGeneration self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Nmr_StructureGeneration_FindFirstEntry(Nmr_StructureGeneration self, ApiMap conditions)
{
  
  Entr_Entry obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstEntry");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: cannot find method 'findFirstEntry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: method 'findFirstEntry' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.StructureGeneration.entries

Deposition 
Entries for StructureGeneration
  @param  Nmr_StructureGeneration self
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Nmr_StructureGeneration_FindFirstEntry_keyval0(Nmr_StructureGeneration self)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_StructureGeneration_FindFirstEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.StructureGeneration.entries

Deposition 
Entries for StructureGeneration
  @param  Nmr_StructureGeneration self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Nmr_StructureGeneration_FindFirstEntry_keyval1(Nmr_StructureGeneration self, char * key, ApiObject value)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_StructureGeneration_FindFirstEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.StructureGeneration.entries

Deposition 
Entries for StructureGeneration
  @param  Nmr_StructureGeneration self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Nmr_StructureGeneration_FindFirstEntry_keyval2(Nmr_StructureGeneration self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_StructureGeneration_FindFirstEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.StructureGeneration.entries

Deposition 
Entries for StructureGeneration
  @param  Nmr_StructureGeneration self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Nmr_StructureGeneration_FindFirstEntry_keyval3(Nmr_StructureGeneration self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_StructureGeneration_FindFirstEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.StructureGeneration.entries

Deposition 
Entries for StructureGeneration
  @param  Nmr_StructureGeneration self
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
Entr_Entry Nmr_StructureGeneration_FindFirstEntry_keyval4(Nmr_StructureGeneration self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_StructureGeneration_FindFirstEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.StructureGeneration.runs

NmrCalc runs used in 
structure generation
  @param  Nmr_StructureGeneration self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Calc_Run Nmr_StructureGeneration_FindFirstRun(Nmr_StructureGeneration self, ApiMap conditions)
{
  
  Calc_Run obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstRun");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: cannot find method 'findFirstRun'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: method 'findFirstRun' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.StructureGeneration.runs

NmrCalc runs used in 
structure generation
  @param  Nmr_StructureGeneration self
  @returns  the first value that satisfies the conditions 
**/
Calc_Run Nmr_StructureGeneration_FindFirstRun_keyval0(Nmr_StructureGeneration self)
{
  
  Calc_Run  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_StructureGeneration_FindFirstRun(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.StructureGeneration.runs

NmrCalc runs used in 
structure generation
  @param  Nmr_StructureGeneration self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Calc_Run Nmr_StructureGeneration_FindFirstRun_keyval1(Nmr_StructureGeneration self, char * key, ApiObject value)
{
  
  Calc_Run  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_StructureGeneration_FindFirstRun(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.StructureGeneration.runs

NmrCalc runs used in 
structure generation
  @param  Nmr_StructureGeneration self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Calc_Run Nmr_StructureGeneration_FindFirstRun_keyval2(Nmr_StructureGeneration self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Calc_Run  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_StructureGeneration_FindFirstRun(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.StructureGeneration.runs

NmrCalc runs used in 
structure generation
  @param  Nmr_StructureGeneration self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Calc_Run Nmr_StructureGeneration_FindFirstRun_keyval3(Nmr_StructureGeneration self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Calc_Run  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_StructureGeneration_FindFirstRun(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.StructureGeneration.runs

NmrCalc runs used in 
structure generation
  @param  Nmr_StructureGeneration self
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
Calc_Run Nmr_StructureGeneration_FindFirstRun_keyval4(Nmr_StructureGeneration self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Calc_Run  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_StructureGeneration_FindFirstRun(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.nmr.Nmr.StructureGeneration
  @param  Nmr_StructureGeneration self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Nmr_StructureGeneration_Get(Nmr_StructureGeneration self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_StructureGeneration self
  @returns   the result
**/
Acco_AccessObject Nmr_StructureGeneration_GetAccess(Nmr_StructureGeneration self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: method 'getAccess' is not callable");
  
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
  @param  Nmr_StructureGeneration self
  @returns   the result
**/
Acco_AccessObject Nmr_StructureGeneration_GetActiveAccess(Nmr_StructureGeneration self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: method 'getActiveAccess' is not callable");
  
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
  @param  Nmr_StructureGeneration self
  @returns   the result
**/
ApiList Nmr_StructureGeneration_GetApplicationData(Nmr_StructureGeneration self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.Nmr.StructureGeneration
  @param  Nmr_StructureGeneration self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nmr_StructureGeneration Nmr_StructureGeneration_GetByKey(Nmr_StructureGeneration self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Nmr_StructureGeneration obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: method 'getByKey' is not callable");
  
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
  @param  Nmr_StructureGeneration self
  @returns   the result
**/
ApiString Nmr_StructureGeneration_GetClassName(Nmr_StructureGeneration self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.StructureGeneration.details

Free text, for notes, 
explanatory comments, etc.
  @param  Nmr_StructureGeneration self
  @returns   the result
**/
ApiString Nmr_StructureGeneration_GetDetails(Nmr_StructureGeneration self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: method 'getDetails' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.StructureGeneration.entries

Deposition Entries for 
StructureGeneration
  @param  Nmr_StructureGeneration self
  @returns   the result
**/
ApiSet Nmr_StructureGeneration_GetEntries(Nmr_StructureGeneration self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getEntries");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: cannot find method 'getEntries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: method 'getEntries' is not callable");
  
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
  @param  Nmr_StructureGeneration self
  @returns   the result
**/
ApiList Nmr_StructureGeneration_GetFieldNames(Nmr_StructureGeneration self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.nmr.Nmr.StructureGeneration
  @param  Nmr_StructureGeneration self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Nmr_StructureGeneration_GetFullKey(Nmr_StructureGeneration self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: method 'getFullKey' is not callable");
  
  args = PyTuple_Pack(1, useGuid);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.StructureGeneration.generationType

Generation type 
(denovo, refinement).
  @param  Nmr_StructureGeneration self
  @returns   the result
**/
ApiString Nmr_StructureGeneration_GetGenerationType(Nmr_StructureGeneration self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getGenerationType");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: cannot find method 'getGenerationType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: method 'getGenerationType' is not callable");
  
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
  @param  Nmr_StructureGeneration self
  @returns   the result
**/
ApiBoolean Nmr_StructureGeneration_GetInConstructor(Nmr_StructureGeneration self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: method 'getInConstructor' is not callable");
  
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
  @param  Nmr_StructureGeneration self
  @returns   the result
**/
ApiBoolean Nmr_StructureGeneration_GetIsDeleted(Nmr_StructureGeneration self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.nmr.Nmr.StructureGeneration
  @param  Nmr_StructureGeneration self
  @returns  Local object key
**/
ApiObject Nmr_StructureGeneration_GetLocalKey(Nmr_StructureGeneration self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.StructureGeneration.method

Method used for 
generating structures
  @param  Nmr_StructureGeneration self
  @returns   the result
**/
Meth_Method Nmr_StructureGeneration_GetMethod(Nmr_StructureGeneration self)
{
  
  Meth_Method obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMethod");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: cannot find method 'getMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: method 'getMethod' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.StructureGeneration.name

StructureGeneration name - 
to specify more precisely the nature of the particular structure 
generation.
  @param  Nmr_StructureGeneration self
  @returns   the result
**/
ApiString Nmr_StructureGeneration_GetName(Nmr_StructureGeneration self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: method 'getName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.nmr.Nmr.StructureGeneration.nmrConstraintStore

NmrConstraintStore 
holding constraints used in StructureGeneration
  @param  Nmr_StructureGeneration self
  @returns   the result
**/
Nmrc_NmrConstraintStore Nmr_StructureGeneration_GetNmrConstraintStore(Nmr_StructureGeneration self)
{
  
  Nmrc_NmrConstraintStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrConstraintStore");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: cannot find method 'getNmrConstraintStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: method 'getNmrConstraintStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.StructureGeneration.nmrProject

parent link
  @param  Nmr_StructureGeneration self
  @returns   the result
**/
Nmr_NmrProject Nmr_StructureGeneration_GetNmrProject(Nmr_StructureGeneration self)
{
  
  Nmr_NmrProject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrProject");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: cannot find method 'getNmrProject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: method 'getNmrProject' is not callable");
  
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
  @param  Nmr_StructureGeneration self
  @returns   the result
**/
ApiString Nmr_StructureGeneration_GetPackageName(Nmr_StructureGeneration self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: method 'getPackageName' is not callable");
  
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
  @param  Nmr_StructureGeneration self
  @returns   the result
**/
ApiString Nmr_StructureGeneration_GetPackageShortName(Nmr_StructureGeneration self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.StructureGeneration.parent

link to parent object - 
synonym for nmrProject
  @param  Nmr_StructureGeneration self
  @returns   the result
**/
Nmr_NmrProject Nmr_StructureGeneration_GetParent(Nmr_StructureGeneration self)
{
  
  Nmr_NmrProject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: method 'getParent' is not callable");
  
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
  @param  Nmr_StructureGeneration self
  @returns   the result
**/
ApiString Nmr_StructureGeneration_GetQualifiedName(Nmr_StructureGeneration self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: method 'getQualifiedName' is not callable");
  
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
  @param  Nmr_StructureGeneration self
  @returns   the result
**/
Impl_MemopsRoot Nmr_StructureGeneration_GetRoot(Nmr_StructureGeneration self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.StructureGeneration.runs

NmrCalc runs used in 
structure generation
  @param  Nmr_StructureGeneration self
  @returns   the result
**/
ApiSet Nmr_StructureGeneration_GetRuns(Nmr_StructureGeneration self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRuns");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: cannot find method 'getRuns'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: method 'getRuns' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.StructureGeneration.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Nmr_StructureGeneration self
  @returns   the result
**/
ApiInteger Nmr_StructureGeneration_GetSerial(Nmr_StructureGeneration self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: method 'getSerial' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.nmr.Nmr.StructureGeneration.structureEnsemble

StructureEnsemble 
generated during StructureGeneration
  @param  Nmr_StructureGeneration self
  @returns   the result
**/
Coor_StructureEnsemble Nmr_StructureGeneration_GetStructureEnsemble(Nmr_StructureGeneration self)
{
  
  Coor_StructureEnsemble obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getStructureEnsemble");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: cannot find method 'getStructureEnsemble'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: method 'getStructureEnsemble' is not callable");
  
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
  @param  Nmr_StructureGeneration self
  @returns   the result
**/
Impl_TopObject Nmr_StructureGeneration_GetTopObject(Nmr_StructureGeneration self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.nmr.Nmr.StructureGeneration
  @param  Nmr_NmrProject parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_StructureGeneration Nmr_StructureGeneration_Init(Nmr_NmrProject parent, ApiMap attrlinks)
{
  
  return Nmr_NmrProject_NewStructureGeneration(parent, attrlinks);
}

/**
  Constructor for ccp.nmr.Nmr.StructureGeneration
  @param  Nmr_NmrProject parent
  @returns  the new object
**/
Nmr_StructureGeneration Nmr_StructureGeneration_Init_reqd(Nmr_NmrProject parent)
{
  
  Nmr_StructureGeneration  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Nmr_StructureGeneration_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_StructureGeneration self
  @param  Impl_ApplicationData value
**/
void *Nmr_StructureGeneration_RemoveApplicationData(Nmr_StructureGeneration self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.Nmr.StructureGeneration.entries

Deposition Entries 
for StructureGeneration
  @param  Nmr_StructureGeneration self
  @param  Entr_Entry value
**/
void *Nmr_StructureGeneration_RemoveEntry(Nmr_StructureGeneration self, Entr_Entry value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeEntry");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: cannot find method 'removeEntry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: method 'removeEntry' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.Nmr.StructureGeneration.runs

NmrCalc runs used in 
structure generation
  @param  Nmr_StructureGeneration self
  @param  Calc_Run value
**/
void *Nmr_StructureGeneration_RemoveRun(Nmr_StructureGeneration self, Calc_Run value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeRun");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: cannot find method 'removeRun'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: method 'removeRun' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.nmr.Nmr.StructureGeneration
  @param  Nmr_StructureGeneration self
  @param  ApiString name
  @param  ApiObject value
**/
void *Nmr_StructureGeneration_Set(Nmr_StructureGeneration self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_StructureGeneration self
  @param  Acco_AccessObject value
**/
void *Nmr_StructureGeneration_SetAccess(Nmr_StructureGeneration self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: method 'setAccess' is not callable");
  
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
  @param  Nmr_StructureGeneration self
  @param  ApiList values
**/
void *Nmr_StructureGeneration_SetApplicationData(Nmr_StructureGeneration self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.StructureGeneration.details

Free text, for notes, 
explanatory comments, etc.
  @param  Nmr_StructureGeneration self
  @param  ApiString value
**/
void *Nmr_StructureGeneration_SetDetails(Nmr_StructureGeneration self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.StructureGeneration.entries

Deposition Entries for 
StructureGeneration
  @param  Nmr_StructureGeneration self
  @param  ApiSet values
**/
void *Nmr_StructureGeneration_SetEntries(Nmr_StructureGeneration self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setEntries");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: cannot find method 'setEntries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: method 'setEntries' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.StructureGeneration.generationType

Generation type 
(denovo, refinement).
  @param  Nmr_StructureGeneration self
  @param  ApiString value
**/
void *Nmr_StructureGeneration_SetGenerationType(Nmr_StructureGeneration self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setGenerationType");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: cannot find method 'setGenerationType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: method 'setGenerationType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.StructureGeneration.method

Method used for 
generating structures
  @param  Nmr_StructureGeneration self
  @param  Meth_Method value
**/
void *Nmr_StructureGeneration_SetMethod(Nmr_StructureGeneration self, Meth_Method value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMethod");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: cannot find method 'setMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: method 'setMethod' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.StructureGeneration.name

StructureGeneration name - 
to specify more precisely the nature of the particular structure 
generation.
  @param  Nmr_StructureGeneration self
  @param  ApiString value
**/
void *Nmr_StructureGeneration_SetName(Nmr_StructureGeneration self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.nmr.Nmr.StructureGeneration.nmrConstraintStore

NmrConstraintStore 
holding constraints used in StructureGeneration
  @param  Nmr_StructureGeneration self
  @param  Nmrc_NmrConstraintStore value
**/
void *Nmr_StructureGeneration_SetNmrConstraintStore(Nmr_StructureGeneration self, Nmrc_NmrConstraintStore value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNmrConstraintStore");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: cannot find method 'setNmrConstraintStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: method 'setNmrConstraintStore' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.StructureGeneration.runs

NmrCalc runs used in 
structure generation
  @param  Nmr_StructureGeneration self
  @param  ApiSet values
**/
void *Nmr_StructureGeneration_SetRuns(Nmr_StructureGeneration self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRuns");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: cannot find method 'setRuns'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: method 'setRuns' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.StructureGeneration.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Nmr_StructureGeneration self
  @param  ApiInteger value
**/
void *Nmr_StructureGeneration_SetSerial(Nmr_StructureGeneration self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.nmr.Nmr.StructureGeneration.structureEnsemble

StructureEnsemble 
generated during StructureGeneration
  @param  Nmr_StructureGeneration self
  @param  Coor_StructureEnsemble value
**/
void *Nmr_StructureGeneration_SetStructureEnsemble(Nmr_StructureGeneration self, Coor_StructureEnsemble value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setStructureEnsemble");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: cannot find method 'setStructureEnsemble'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: method 'setStructureEnsemble' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.StructureGeneration.entries

Deposition Entries 
for StructureGeneration
  @param  Nmr_StructureGeneration self
  @returns   the result
**/
ApiList Nmr_StructureGeneration_SortedEntries(Nmr_StructureGeneration self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedEntries");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: cannot find method 'sortedEntries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: method 'sortedEntries' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.StructureGeneration.runs

NmrCalc runs used in 
structure generation
  @param  Nmr_StructureGeneration self
  @returns   the result
**/
ApiList Nmr_StructureGeneration_SortedRuns(Nmr_StructureGeneration self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedRuns");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: cannot find method 'sortedRuns'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureGeneration: method 'sortedRuns' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
