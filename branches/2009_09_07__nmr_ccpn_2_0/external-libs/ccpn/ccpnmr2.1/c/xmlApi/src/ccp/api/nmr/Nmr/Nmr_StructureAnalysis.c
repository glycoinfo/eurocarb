
#include "ccp.h"

/*
  A sstructure analysis with associated structures and constraint lists
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
ccp.nmr.Nmr.StructureAnalysis.additionalConstraintStores

Additional 
NmrConstraintStores used in analysis
  @param  Nmr_StructureAnalysis self
  @param  Nmrc_NmrConstraintStore value
**/
void *Nmr_StructureAnalysis_AddAdditionalConstraintStore(Nmr_StructureAnalysis self, Nmrc_NmrConstraintStore value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addAdditionalConstraintStore");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: cannot find method 'addAdditionalConstraintStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: method 'addAdditionalConstraintStore' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_StructureAnalysis self
  @param  Impl_ApplicationData value
**/
void *Nmr_StructureAnalysis_AddApplicationData(Nmr_StructureAnalysis self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.Nmr.StructureAnalysis.entries

Deposition Entries for 
StructureAnalysis
  @param  Nmr_StructureAnalysis self
  @param  Entr_Entry value
**/
void *Nmr_StructureAnalysis_AddEntry(Nmr_StructureAnalysis self, Entr_Entry value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addEntry");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: cannot find method 'addEntry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: method 'addEntry' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.Nmr.StructureAnalysis.structureEnsembles

Structure 
Ensembles used for Structure Analysis
  @param  Nmr_StructureAnalysis self
  @param  Coor_StructureEnsemble value
**/
void *Nmr_StructureAnalysis_AddStructureEnsemble(Nmr_StructureAnalysis self, Coor_StructureEnsemble value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addStructureEnsemble");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: cannot find method 'addStructureEnsemble'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: method 'addStructureEnsemble' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.nmr.Nmr.StructureAnalysis
  @param  Nmr_StructureAnalysis self
  @param  ApiBoolean complete
**/
void *Nmr_StructureAnalysis_CheckAllValid(Nmr_StructureAnalysis self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.nmr.Nmr.StructureAnalysis
  @param  Nmr_StructureAnalysis self
  @param  ApiBoolean complete
**/
void *Nmr_StructureAnalysis_CheckValid(Nmr_StructureAnalysis self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: method 'checkValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.StructureAnalysis.additionalConstraintStores

Additional 
NmrConstraintStores used in analysis
  @param  Nmr_StructureAnalysis self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_StructureAnalysis_FindAllAdditionalConstraintStores(Nmr_StructureAnalysis self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllAdditionalConstraintStores");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: cannot find method 'findAllAdditionalConstraintStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: method 'findAllAdditionalConstraintStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.StructureAnalysis.additionalConstraintStores

Additional 
NmrConstraintStores used in analysis
  @param  Nmr_StructureAnalysis self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_StructureAnalysis_FindAllAdditionalConstraintStores_keyval0(Nmr_StructureAnalysis self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_StructureAnalysis_FindAllAdditionalConstraintStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.StructureAnalysis.additionalConstraintStores

Additional 
NmrConstraintStores used in analysis
  @param  Nmr_StructureAnalysis self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_StructureAnalysis_FindAllAdditionalConstraintStores_keyval1(Nmr_StructureAnalysis self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_StructureAnalysis_FindAllAdditionalConstraintStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.StructureAnalysis.additionalConstraintStores

Additional 
NmrConstraintStores used in analysis
  @param  Nmr_StructureAnalysis self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_StructureAnalysis_FindAllAdditionalConstraintStores_keyval2(Nmr_StructureAnalysis self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_StructureAnalysis_FindAllAdditionalConstraintStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.StructureAnalysis.additionalConstraintStores

Additional 
NmrConstraintStores used in analysis
  @param  Nmr_StructureAnalysis self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_StructureAnalysis_FindAllAdditionalConstraintStores_keyval3(Nmr_StructureAnalysis self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_StructureAnalysis_FindAllAdditionalConstraintStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.StructureAnalysis.additionalConstraintStores

Additional 
NmrConstraintStores used in analysis
  @param  Nmr_StructureAnalysis self
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
ApiSet Nmr_StructureAnalysis_FindAllAdditionalConstraintStores_keyval4(Nmr_StructureAnalysis self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_StructureAnalysis_FindAllAdditionalConstraintStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_StructureAnalysis self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_StructureAnalysis_FindAllApplicationData(Nmr_StructureAnalysis self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: method 'findAllApplicationData' is not callable");
  
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
  @param  Nmr_StructureAnalysis self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_StructureAnalysis_FindAllApplicationData_keyval0(Nmr_StructureAnalysis self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_StructureAnalysis_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_StructureAnalysis self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_StructureAnalysis_FindAllApplicationData_keyval1(Nmr_StructureAnalysis self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_StructureAnalysis_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_StructureAnalysis self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_StructureAnalysis_FindAllApplicationData_keyval2(Nmr_StructureAnalysis self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_StructureAnalysis_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_StructureAnalysis self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_StructureAnalysis_FindAllApplicationData_keyval3(Nmr_StructureAnalysis self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_StructureAnalysis_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_StructureAnalysis self
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
ApiList Nmr_StructureAnalysis_FindAllApplicationData_keyval4(Nmr_StructureAnalysis self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_StructureAnalysis_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.StructureAnalysis.entries

Deposition Entries 
for StructureAnalysis
  @param  Nmr_StructureAnalysis self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_StructureAnalysis_FindAllEntries(Nmr_StructureAnalysis self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllEntries");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: cannot find method 'findAllEntries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: method 'findAllEntries' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.StructureAnalysis.entries

Deposition Entries 
for StructureAnalysis
  @param  Nmr_StructureAnalysis self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_StructureAnalysis_FindAllEntries_keyval0(Nmr_StructureAnalysis self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_StructureAnalysis_FindAllEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.StructureAnalysis.entries

Deposition Entries 
for StructureAnalysis
  @param  Nmr_StructureAnalysis self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_StructureAnalysis_FindAllEntries_keyval1(Nmr_StructureAnalysis self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_StructureAnalysis_FindAllEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.StructureAnalysis.entries

Deposition Entries 
for StructureAnalysis
  @param  Nmr_StructureAnalysis self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_StructureAnalysis_FindAllEntries_keyval2(Nmr_StructureAnalysis self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_StructureAnalysis_FindAllEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.StructureAnalysis.entries

Deposition Entries 
for StructureAnalysis
  @param  Nmr_StructureAnalysis self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_StructureAnalysis_FindAllEntries_keyval3(Nmr_StructureAnalysis self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_StructureAnalysis_FindAllEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.StructureAnalysis.entries

Deposition Entries 
for StructureAnalysis
  @param  Nmr_StructureAnalysis self
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
ApiSet Nmr_StructureAnalysis_FindAllEntries_keyval4(Nmr_StructureAnalysis self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_StructureAnalysis_FindAllEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.StructureAnalysis.structureEnsembles

Structure 
Ensembles used for Structure Analysis
  @param  Nmr_StructureAnalysis self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_StructureAnalysis_FindAllStructureEnsembles(Nmr_StructureAnalysis self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllStructureEnsembles");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: cannot find method 'findAllStructureEnsembles'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: method 'findAllStructureEnsembles' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.StructureAnalysis.structureEnsembles

Structure 
Ensembles used for Structure Analysis
  @param  Nmr_StructureAnalysis self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_StructureAnalysis_FindAllStructureEnsembles_keyval0(Nmr_StructureAnalysis self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_StructureAnalysis_FindAllStructureEnsembles(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.StructureAnalysis.structureEnsembles

Structure 
Ensembles used for Structure Analysis
  @param  Nmr_StructureAnalysis self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_StructureAnalysis_FindAllStructureEnsembles_keyval1(Nmr_StructureAnalysis self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_StructureAnalysis_FindAllStructureEnsembles(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.StructureAnalysis.structureEnsembles

Structure 
Ensembles used for Structure Analysis
  @param  Nmr_StructureAnalysis self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_StructureAnalysis_FindAllStructureEnsembles_keyval2(Nmr_StructureAnalysis self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_StructureAnalysis_FindAllStructureEnsembles(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.StructureAnalysis.structureEnsembles

Structure 
Ensembles used for Structure Analysis
  @param  Nmr_StructureAnalysis self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_StructureAnalysis_FindAllStructureEnsembles_keyval3(Nmr_StructureAnalysis self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_StructureAnalysis_FindAllStructureEnsembles(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.StructureAnalysis.structureEnsembles

Structure 
Ensembles used for Structure Analysis
  @param  Nmr_StructureAnalysis self
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
ApiSet Nmr_StructureAnalysis_FindAllStructureEnsembles_keyval4(Nmr_StructureAnalysis self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_StructureAnalysis_FindAllStructureEnsembles(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.StructureAnalysis.additionalConstraintStores

Additional 
NmrConstraintStores used in analysis
  @param  Nmr_StructureAnalysis self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmrc_NmrConstraintStore Nmr_StructureAnalysis_FindFirstAdditionalConstraintStore(Nmr_StructureAnalysis self, ApiMap conditions)
{
  
  Nmrc_NmrConstraintStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstAdditionalConstraintStore");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: cannot find method 'findFirstAdditionalConstraintStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: method 'findFirstAdditionalConstraintStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.StructureAnalysis.additionalConstraintStores

Additional 
NmrConstraintStores used in analysis
  @param  Nmr_StructureAnalysis self
  @returns  the first value that satisfies the conditions 
**/
Nmrc_NmrConstraintStore Nmr_StructureAnalysis_FindFirstAdditionalConstraintStore_keyval0(Nmr_StructureAnalysis self)
{
  
  Nmrc_NmrConstraintStore  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_StructureAnalysis_FindFirstAdditionalConstraintStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.StructureAnalysis.additionalConstraintStores

Additional 
NmrConstraintStores used in analysis
  @param  Nmr_StructureAnalysis self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmrc_NmrConstraintStore Nmr_StructureAnalysis_FindFirstAdditionalConstraintStore_keyval1(Nmr_StructureAnalysis self, char * key, ApiObject value)
{
  
  Nmrc_NmrConstraintStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_StructureAnalysis_FindFirstAdditionalConstraintStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.StructureAnalysis.additionalConstraintStores

Additional 
NmrConstraintStores used in analysis
  @param  Nmr_StructureAnalysis self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmrc_NmrConstraintStore Nmr_StructureAnalysis_FindFirstAdditionalConstraintStore_keyval2(Nmr_StructureAnalysis self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmrc_NmrConstraintStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_StructureAnalysis_FindFirstAdditionalConstraintStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.StructureAnalysis.additionalConstraintStores

Additional 
NmrConstraintStores used in analysis
  @param  Nmr_StructureAnalysis self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmrc_NmrConstraintStore Nmr_StructureAnalysis_FindFirstAdditionalConstraintStore_keyval3(Nmr_StructureAnalysis self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmrc_NmrConstraintStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_StructureAnalysis_FindFirstAdditionalConstraintStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.StructureAnalysis.additionalConstraintStores

Additional 
NmrConstraintStores used in analysis
  @param  Nmr_StructureAnalysis self
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
Nmrc_NmrConstraintStore Nmr_StructureAnalysis_FindFirstAdditionalConstraintStore_keyval4(Nmr_StructureAnalysis self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmrc_NmrConstraintStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_StructureAnalysis_FindFirstAdditionalConstraintStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_StructureAnalysis self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_StructureAnalysis_FindFirstApplicationData(Nmr_StructureAnalysis self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nmr_StructureAnalysis self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_StructureAnalysis_FindFirstApplicationData_keyval0(Nmr_StructureAnalysis self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_StructureAnalysis_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_StructureAnalysis self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_StructureAnalysis_FindFirstApplicationData_keyval1(Nmr_StructureAnalysis self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_StructureAnalysis_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_StructureAnalysis self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_StructureAnalysis_FindFirstApplicationData_keyval2(Nmr_StructureAnalysis self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_StructureAnalysis_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_StructureAnalysis self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_StructureAnalysis_FindFirstApplicationData_keyval3(Nmr_StructureAnalysis self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_StructureAnalysis_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_StructureAnalysis self
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
Impl_ApplicationData Nmr_StructureAnalysis_FindFirstApplicationData_keyval4(Nmr_StructureAnalysis self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_StructureAnalysis_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.StructureAnalysis.entries

Deposition Entries 
for StructureAnalysis
  @param  Nmr_StructureAnalysis self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Nmr_StructureAnalysis_FindFirstEntry(Nmr_StructureAnalysis self, ApiMap conditions)
{
  
  Entr_Entry obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstEntry");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: cannot find method 'findFirstEntry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: method 'findFirstEntry' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.StructureAnalysis.entries

Deposition Entries 
for StructureAnalysis
  @param  Nmr_StructureAnalysis self
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Nmr_StructureAnalysis_FindFirstEntry_keyval0(Nmr_StructureAnalysis self)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_StructureAnalysis_FindFirstEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.StructureAnalysis.entries

Deposition Entries 
for StructureAnalysis
  @param  Nmr_StructureAnalysis self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Nmr_StructureAnalysis_FindFirstEntry_keyval1(Nmr_StructureAnalysis self, char * key, ApiObject value)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_StructureAnalysis_FindFirstEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.StructureAnalysis.entries

Deposition Entries 
for StructureAnalysis
  @param  Nmr_StructureAnalysis self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Nmr_StructureAnalysis_FindFirstEntry_keyval2(Nmr_StructureAnalysis self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_StructureAnalysis_FindFirstEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.StructureAnalysis.entries

Deposition Entries 
for StructureAnalysis
  @param  Nmr_StructureAnalysis self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Nmr_StructureAnalysis_FindFirstEntry_keyval3(Nmr_StructureAnalysis self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_StructureAnalysis_FindFirstEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.StructureAnalysis.entries

Deposition Entries 
for StructureAnalysis
  @param  Nmr_StructureAnalysis self
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
Entr_Entry Nmr_StructureAnalysis_FindFirstEntry_keyval4(Nmr_StructureAnalysis self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_StructureAnalysis_FindFirstEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.StructureAnalysis.structureEnsembles

Structure Ensembles 
used for Structure Analysis
  @param  Nmr_StructureAnalysis self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Coor_StructureEnsemble Nmr_StructureAnalysis_FindFirstStructureEnsemble(Nmr_StructureAnalysis self, ApiMap conditions)
{
  
  Coor_StructureEnsemble obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstStructureEnsemble");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: cannot find method 'findFirstStructureEnsemble'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: method 'findFirstStructureEnsemble' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.StructureAnalysis.structureEnsembles

Structure Ensembles 
used for Structure Analysis
  @param  Nmr_StructureAnalysis self
  @returns  the first value that satisfies the conditions 
**/
Coor_StructureEnsemble Nmr_StructureAnalysis_FindFirstStructureEnsemble_keyval0(Nmr_StructureAnalysis self)
{
  
  Coor_StructureEnsemble  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_StructureAnalysis_FindFirstStructureEnsemble(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.StructureAnalysis.structureEnsembles

Structure Ensembles 
used for Structure Analysis
  @param  Nmr_StructureAnalysis self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Coor_StructureEnsemble Nmr_StructureAnalysis_FindFirstStructureEnsemble_keyval1(Nmr_StructureAnalysis self, char * key, ApiObject value)
{
  
  Coor_StructureEnsemble  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_StructureAnalysis_FindFirstStructureEnsemble(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.StructureAnalysis.structureEnsembles

Structure Ensembles 
used for Structure Analysis
  @param  Nmr_StructureAnalysis self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Coor_StructureEnsemble Nmr_StructureAnalysis_FindFirstStructureEnsemble_keyval2(Nmr_StructureAnalysis self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Coor_StructureEnsemble  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_StructureAnalysis_FindFirstStructureEnsemble(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.StructureAnalysis.structureEnsembles

Structure Ensembles 
used for Structure Analysis
  @param  Nmr_StructureAnalysis self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Coor_StructureEnsemble Nmr_StructureAnalysis_FindFirstStructureEnsemble_keyval3(Nmr_StructureAnalysis self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Coor_StructureEnsemble  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_StructureAnalysis_FindFirstStructureEnsemble(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.StructureAnalysis.structureEnsembles

Structure Ensembles 
used for Structure Analysis
  @param  Nmr_StructureAnalysis self
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
Coor_StructureEnsemble Nmr_StructureAnalysis_FindFirstStructureEnsemble_keyval4(Nmr_StructureAnalysis self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Coor_StructureEnsemble  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_StructureAnalysis_FindFirstStructureEnsemble(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.nmr.Nmr.StructureAnalysis
  @param  Nmr_StructureAnalysis self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Nmr_StructureAnalysis_Get(Nmr_StructureAnalysis self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_StructureAnalysis self
  @returns   the result
**/
Acco_AccessObject Nmr_StructureAnalysis_GetAccess(Nmr_StructureAnalysis self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: method 'getAccess' is not callable");
  
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
  @param  Nmr_StructureAnalysis self
  @returns   the result
**/
Acco_AccessObject Nmr_StructureAnalysis_GetActiveAccess(Nmr_StructureAnalysis self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: method 'getActiveAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.nmr.Nmr.StructureAnalysis.additionalConstraintStores

Additional 
NmrConstraintStores used in analysis
  @param  Nmr_StructureAnalysis self
  @returns   the result
**/
ApiSet Nmr_StructureAnalysis_GetAdditionalConstraintStores(Nmr_StructureAnalysis self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAdditionalConstraintStores");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: cannot find method 'getAdditionalConstraintStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: method 'getAdditionalConstraintStores' is not callable");
  
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
  @param  Nmr_StructureAnalysis self
  @returns   the result
**/
ApiList Nmr_StructureAnalysis_GetApplicationData(Nmr_StructureAnalysis self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.Nmr.StructureAnalysis
  @param  Nmr_StructureAnalysis self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nmr_StructureAnalysis Nmr_StructureAnalysis_GetByKey(Nmr_StructureAnalysis self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Nmr_StructureAnalysis obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: method 'getByKey' is not callable");
  
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
  @param  Nmr_StructureAnalysis self
  @returns   the result
**/
ApiString Nmr_StructureAnalysis_GetClassName(Nmr_StructureAnalysis self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.StructureAnalysis.details

Free text, for notes, 
explanatory comments, etc.
  @param  Nmr_StructureAnalysis self
  @returns   the result
**/
ApiString Nmr_StructureAnalysis_GetDetails(Nmr_StructureAnalysis self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: method 'getDetails' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.StructureAnalysis.entries

Deposition Entries for 
StructureAnalysis
  @param  Nmr_StructureAnalysis self
  @returns   the result
**/
ApiSet Nmr_StructureAnalysis_GetEntries(Nmr_StructureAnalysis self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getEntries");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: cannot find method 'getEntries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: method 'getEntries' is not callable");
  
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
  @param  Nmr_StructureAnalysis self
  @returns   the result
**/
ApiList Nmr_StructureAnalysis_GetFieldNames(Nmr_StructureAnalysis self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.nmr.Nmr.StructureAnalysis
  @param  Nmr_StructureAnalysis self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Nmr_StructureAnalysis_GetFullKey(Nmr_StructureAnalysis self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: method 'getFullKey' is not callable");
  
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
  @param  Nmr_StructureAnalysis self
  @returns   the result
**/
ApiBoolean Nmr_StructureAnalysis_GetInConstructor(Nmr_StructureAnalysis self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: method 'getInConstructor' is not callable");
  
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
  @param  Nmr_StructureAnalysis self
  @returns   the result
**/
ApiBoolean Nmr_StructureAnalysis_GetIsDeleted(Nmr_StructureAnalysis self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.nmr.Nmr.StructureAnalysis
  @param  Nmr_StructureAnalysis self
  @returns  Local object key
**/
ApiObject Nmr_StructureAnalysis_GetLocalKey(Nmr_StructureAnalysis self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.StructureAnalysis.method

Method sued for structure 
analysis
  @param  Nmr_StructureAnalysis self
  @returns   the result
**/
Meth_Method Nmr_StructureAnalysis_GetMethod(Nmr_StructureAnalysis self)
{
  
  Meth_Method obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMethod");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: cannot find method 'getMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: method 'getMethod' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.StructureAnalysis.name

name of Structure Analysis
  @param  Nmr_StructureAnalysis self
  @returns   the result
**/
ApiString Nmr_StructureAnalysis_GetName(Nmr_StructureAnalysis self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: method 'getName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.StructureAnalysis.nmrConstraintStore

Primary set of 
NmrConstraints
  @param  Nmr_StructureAnalysis self
  @returns   the result
**/
Nmrc_NmrConstraintStore Nmr_StructureAnalysis_GetNmrConstraintStore(Nmr_StructureAnalysis self)
{
  
  Nmrc_NmrConstraintStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrConstraintStore");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: cannot find method 'getNmrConstraintStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: method 'getNmrConstraintStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.StructureAnalysis.nmrProject

parent link
  @param  Nmr_StructureAnalysis self
  @returns   the result
**/
Nmr_NmrProject Nmr_StructureAnalysis_GetNmrProject(Nmr_StructureAnalysis self)
{
  
  Nmr_NmrProject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrProject");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: cannot find method 'getNmrProject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: method 'getNmrProject' is not callable");
  
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
  @param  Nmr_StructureAnalysis self
  @returns   the result
**/
ApiString Nmr_StructureAnalysis_GetPackageName(Nmr_StructureAnalysis self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: method 'getPackageName' is not callable");
  
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
  @param  Nmr_StructureAnalysis self
  @returns   the result
**/
ApiString Nmr_StructureAnalysis_GetPackageShortName(Nmr_StructureAnalysis self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.StructureAnalysis.parent

link to parent object - 
synonym for nmrProject
  @param  Nmr_StructureAnalysis self
  @returns   the result
**/
Nmr_NmrProject Nmr_StructureAnalysis_GetParent(Nmr_StructureAnalysis self)
{
  
  Nmr_NmrProject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: method 'getParent' is not callable");
  
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
  @param  Nmr_StructureAnalysis self
  @returns   the result
**/
ApiString Nmr_StructureAnalysis_GetQualifiedName(Nmr_StructureAnalysis self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: method 'getQualifiedName' is not callable");
  
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
  @param  Nmr_StructureAnalysis self
  @returns   the result
**/
Impl_MemopsRoot Nmr_StructureAnalysis_GetRoot(Nmr_StructureAnalysis self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.StructureAnalysis.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Nmr_StructureAnalysis self
  @returns   the result
**/
ApiInteger Nmr_StructureAnalysis_GetSerial(Nmr_StructureAnalysis self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: method 'getSerial' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.StructureAnalysis.structureEnsembles

Structure 
Ensembles used for Structure Analysis
  @param  Nmr_StructureAnalysis self
  @returns   the result
**/
ApiSet Nmr_StructureAnalysis_GetStructureEnsembles(Nmr_StructureAnalysis self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getStructureEnsembles");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: cannot find method 'getStructureEnsembles'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: method 'getStructureEnsembles' is not callable");
  
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
  @param  Nmr_StructureAnalysis self
  @returns   the result
**/
Impl_TopObject Nmr_StructureAnalysis_GetTopObject(Nmr_StructureAnalysis self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.nmr.Nmr.StructureAnalysis
  @param  Nmr_NmrProject parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_StructureAnalysis Nmr_StructureAnalysis_Init(Nmr_NmrProject parent, ApiMap attrlinks)
{
  
  return Nmr_NmrProject_NewStructureAnalysis(parent, attrlinks);
}

/**
  Constructor for ccp.nmr.Nmr.StructureAnalysis
  @param  Nmr_NmrProject parent
  @returns  the new object
**/
Nmr_StructureAnalysis Nmr_StructureAnalysis_Init_reqd(Nmr_NmrProject parent)
{
  
  Nmr_StructureAnalysis  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Nmr_StructureAnalysis_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
ccp.nmr.Nmr.StructureAnalysis.additionalConstraintStores

Additional 
NmrConstraintStores used in analysis
  @param  Nmr_StructureAnalysis self
  @param  Nmrc_NmrConstraintStore value
**/
void *Nmr_StructureAnalysis_RemoveAdditionalConstraintStore(Nmr_StructureAnalysis self, Nmrc_NmrConstraintStore value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeAdditionalConstraintStore");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: cannot find method 'removeAdditionalConstraintStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: method 'removeAdditionalConstraintStore' is not callable");
  
  args = PyTuple_Pack(1, value);
  
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
  @param  Nmr_StructureAnalysis self
  @param  Impl_ApplicationData value
**/
void *Nmr_StructureAnalysis_RemoveApplicationData(Nmr_StructureAnalysis self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.Nmr.StructureAnalysis.entries

Deposition Entries for 
StructureAnalysis
  @param  Nmr_StructureAnalysis self
  @param  Entr_Entry value
**/
void *Nmr_StructureAnalysis_RemoveEntry(Nmr_StructureAnalysis self, Entr_Entry value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeEntry");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: cannot find method 'removeEntry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: method 'removeEntry' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.Nmr.StructureAnalysis.structureEnsembles

Structure 
Ensembles used for Structure Analysis
  @param  Nmr_StructureAnalysis self
  @param  Coor_StructureEnsemble value
**/
void *Nmr_StructureAnalysis_RemoveStructureEnsemble(Nmr_StructureAnalysis self, Coor_StructureEnsemble value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeStructureEnsemble");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: cannot find method 'removeStructureEnsemble'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: method 'removeStructureEnsemble' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.nmr.Nmr.StructureAnalysis
  @param  Nmr_StructureAnalysis self
  @param  ApiString name
  @param  ApiObject value
**/
void *Nmr_StructureAnalysis_Set(Nmr_StructureAnalysis self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_StructureAnalysis self
  @param  Acco_AccessObject value
**/
void *Nmr_StructureAnalysis_SetAccess(Nmr_StructureAnalysis self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: method 'setAccess' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.nmr.Nmr.StructureAnalysis.additionalConstraintStores

Additional 
NmrConstraintStores used in analysis
  @param  Nmr_StructureAnalysis self
  @param  ApiSet values
**/
void *Nmr_StructureAnalysis_SetAdditionalConstraintStores(Nmr_StructureAnalysis self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAdditionalConstraintStores");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: cannot find method 'setAdditionalConstraintStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: method 'setAdditionalConstraintStores' is not callable");
  
  args = PyTuple_Pack(1, values);
  
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
  @param  Nmr_StructureAnalysis self
  @param  ApiList values
**/
void *Nmr_StructureAnalysis_SetApplicationData(Nmr_StructureAnalysis self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.StructureAnalysis.details

Free text, for notes, 
explanatory comments, etc.
  @param  Nmr_StructureAnalysis self
  @param  ApiString value
**/
void *Nmr_StructureAnalysis_SetDetails(Nmr_StructureAnalysis self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.StructureAnalysis.entries

Deposition Entries for 
StructureAnalysis
  @param  Nmr_StructureAnalysis self
  @param  ApiSet values
**/
void *Nmr_StructureAnalysis_SetEntries(Nmr_StructureAnalysis self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setEntries");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: cannot find method 'setEntries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: method 'setEntries' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.StructureAnalysis.method

Method sued for structure 
analysis
  @param  Nmr_StructureAnalysis self
  @param  Meth_Method value
**/
void *Nmr_StructureAnalysis_SetMethod(Nmr_StructureAnalysis self, Meth_Method value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMethod");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: cannot find method 'setMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: method 'setMethod' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.StructureAnalysis.name

name of Structure Analysis
  @param  Nmr_StructureAnalysis self
  @param  ApiString value
**/
void *Nmr_StructureAnalysis_SetName(Nmr_StructureAnalysis self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.StructureAnalysis.nmrConstraintStore

Primary set of 
NmrConstraints
  @param  Nmr_StructureAnalysis self
  @param  Nmrc_NmrConstraintStore value
**/
void *Nmr_StructureAnalysis_SetNmrConstraintStore(Nmr_StructureAnalysis self, Nmrc_NmrConstraintStore value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNmrConstraintStore");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: cannot find method 'setNmrConstraintStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: method 'setNmrConstraintStore' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.StructureAnalysis.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Nmr_StructureAnalysis self
  @param  ApiInteger value
**/
void *Nmr_StructureAnalysis_SetSerial(Nmr_StructureAnalysis self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.StructureAnalysis.structureEnsembles

Structure 
Ensembles used for Structure Analysis
  @param  Nmr_StructureAnalysis self
  @param  ApiSet values
**/
void *Nmr_StructureAnalysis_SetStructureEnsembles(Nmr_StructureAnalysis self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setStructureEnsembles");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: cannot find method 'setStructureEnsembles'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: method 'setStructureEnsembles' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.nmr.Nmr.StructureAnalysis.additionalConstraintStores

Additional 
NmrConstraintStores used in analysis
  @param  Nmr_StructureAnalysis self
  @returns   the result
**/
ApiList Nmr_StructureAnalysis_SortedAdditionalConstraintStores(Nmr_StructureAnalysis self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedAdditionalConstraintStores");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: cannot find method 'sortedAdditionalConstraintStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: method 'sortedAdditionalConstraintStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.StructureAnalysis.entries

Deposition Entries for 
StructureAnalysis
  @param  Nmr_StructureAnalysis self
  @returns   the result
**/
ApiList Nmr_StructureAnalysis_SortedEntries(Nmr_StructureAnalysis self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedEntries");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: cannot find method 'sortedEntries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: method 'sortedEntries' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.StructureAnalysis.structureEnsembles

Structure 
Ensembles used for Structure Analysis
  @param  Nmr_StructureAnalysis self
  @returns   the result
**/
ApiList Nmr_StructureAnalysis_SortedStructureEnsembles(Nmr_StructureAnalysis self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedStructureEnsembles");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: cannot find method 'sortedStructureEnsembles'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.StructureAnalysis: method 'sortedStructureEnsembles' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
