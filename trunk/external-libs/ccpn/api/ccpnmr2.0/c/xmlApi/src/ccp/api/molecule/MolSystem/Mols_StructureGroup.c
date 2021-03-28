
#include "ccp.h"

/*
  Group of Structure models. General purpose grouping mechanism for structures. May be from same or different generation cycles.
*/

/* package ccp.api.molecule.MolSystem */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_StructureGroup self
  @param  Impl_ApplicationData value
**/
void *Mols_StructureGroup_AddApplicationData(Mols_StructureGroup self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.molecule.MolSystem.StructureGroup.entries

Bmrb Entries for 
StructureGroup
  @param  Mols_StructureGroup self
  @param  Entr_Entry value
**/
void *Mols_StructureGroup_AddEntry(Mols_StructureGroup self, Entr_Entry value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addEntry");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: cannot find method 'addEntry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: method 'addEntry' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.molecule.MolSystem.StructureGroup.models

Models belonging 
to StructureGroup
  @param  Mols_StructureGroup self
  @param  Coor_Model value
**/
void *Mols_StructureGroup_AddModel(Mols_StructureGroup self, Coor_Model value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addModel");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: cannot find method 'addModel'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: method 'addModel' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.molecule.MolSystem.StructureGroup
  @param  Mols_StructureGroup self
  @param  ApiBoolean complete
**/
void *Mols_StructureGroup_CheckAllValid(Mols_StructureGroup self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.molecule.MolSystem.StructureGroup
  @param  Mols_StructureGroup self
  @param  ApiBoolean complete
**/
void *Mols_StructureGroup_CheckValid(Mols_StructureGroup self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: method 'checkValid' is not callable");
  
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
  @param  Mols_StructureGroup self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Mols_StructureGroup_FindAllApplicationData(Mols_StructureGroup self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: method 'findAllApplicationData' is not callable");
  
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
  @param  Mols_StructureGroup self
  @returns  all value that satisfy the conditions 
**/
ApiList Mols_StructureGroup_FindAllApplicationData_keyval0(Mols_StructureGroup self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mols_StructureGroup_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_StructureGroup self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Mols_StructureGroup_FindAllApplicationData_keyval1(Mols_StructureGroup self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mols_StructureGroup_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_StructureGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Mols_StructureGroup_FindAllApplicationData_keyval2(Mols_StructureGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mols_StructureGroup_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_StructureGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Mols_StructureGroup_FindAllApplicationData_keyval3(Mols_StructureGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mols_StructureGroup_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_StructureGroup self
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
ApiList Mols_StructureGroup_FindAllApplicationData_keyval4(Mols_StructureGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mols_StructureGroup_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.StructureGroup.entries

Bmrb Entries 
for StructureGroup
  @param  Mols_StructureGroup self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_StructureGroup_FindAllEntries(Mols_StructureGroup self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllEntries");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: cannot find method 'findAllEntries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: method 'findAllEntries' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.StructureGroup.entries

Bmrb Entries 
for StructureGroup
  @param  Mols_StructureGroup self
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_StructureGroup_FindAllEntries_keyval0(Mols_StructureGroup self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mols_StructureGroup_FindAllEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.StructureGroup.entries

Bmrb Entries 
for StructureGroup
  @param  Mols_StructureGroup self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_StructureGroup_FindAllEntries_keyval1(Mols_StructureGroup self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mols_StructureGroup_FindAllEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.StructureGroup.entries

Bmrb Entries 
for StructureGroup
  @param  Mols_StructureGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_StructureGroup_FindAllEntries_keyval2(Mols_StructureGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mols_StructureGroup_FindAllEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.StructureGroup.entries

Bmrb Entries 
for StructureGroup
  @param  Mols_StructureGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_StructureGroup_FindAllEntries_keyval3(Mols_StructureGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mols_StructureGroup_FindAllEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.StructureGroup.entries

Bmrb Entries 
for StructureGroup
  @param  Mols_StructureGroup self
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
ApiSet Mols_StructureGroup_FindAllEntries_keyval4(Mols_StructureGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mols_StructureGroup_FindAllEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.StructureGroup.models

Models 
belonging to StructureGroup
  @param  Mols_StructureGroup self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_StructureGroup_FindAllModels(Mols_StructureGroup self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllModels");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: cannot find method 'findAllModels'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: method 'findAllModels' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.StructureGroup.models

Models 
belonging to StructureGroup
  @param  Mols_StructureGroup self
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_StructureGroup_FindAllModels_keyval0(Mols_StructureGroup self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mols_StructureGroup_FindAllModels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.StructureGroup.models

Models 
belonging to StructureGroup
  @param  Mols_StructureGroup self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_StructureGroup_FindAllModels_keyval1(Mols_StructureGroup self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mols_StructureGroup_FindAllModels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.StructureGroup.models

Models 
belonging to StructureGroup
  @param  Mols_StructureGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_StructureGroup_FindAllModels_keyval2(Mols_StructureGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mols_StructureGroup_FindAllModels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.StructureGroup.models

Models 
belonging to StructureGroup
  @param  Mols_StructureGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_StructureGroup_FindAllModels_keyval3(Mols_StructureGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mols_StructureGroup_FindAllModels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.StructureGroup.models

Models 
belonging to StructureGroup
  @param  Mols_StructureGroup self
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
ApiSet Mols_StructureGroup_FindAllModels_keyval4(Mols_StructureGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mols_StructureGroup_FindAllModels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_StructureGroup self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Mols_StructureGroup_FindFirstApplicationData(Mols_StructureGroup self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: method 'findFirstApplicationData' is not callable");
  
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
  @param  Mols_StructureGroup self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Mols_StructureGroup_FindFirstApplicationData_keyval0(Mols_StructureGroup self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mols_StructureGroup_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_StructureGroup self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Mols_StructureGroup_FindFirstApplicationData_keyval1(Mols_StructureGroup self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mols_StructureGroup_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_StructureGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Mols_StructureGroup_FindFirstApplicationData_keyval2(Mols_StructureGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mols_StructureGroup_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_StructureGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Mols_StructureGroup_FindFirstApplicationData_keyval3(Mols_StructureGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mols_StructureGroup_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_StructureGroup self
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
Impl_ApplicationData Mols_StructureGroup_FindFirstApplicationData_keyval4(Mols_StructureGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mols_StructureGroup_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.StructureGroup.entries

Bmrb 
Entries for StructureGroup
  @param  Mols_StructureGroup self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Mols_StructureGroup_FindFirstEntry(Mols_StructureGroup self, ApiMap conditions)
{
  
  Entr_Entry obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstEntry");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: cannot find method 'findFirstEntry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: method 'findFirstEntry' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.StructureGroup.entries

Bmrb 
Entries for StructureGroup
  @param  Mols_StructureGroup self
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Mols_StructureGroup_FindFirstEntry_keyval0(Mols_StructureGroup self)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mols_StructureGroup_FindFirstEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.StructureGroup.entries

Bmrb 
Entries for StructureGroup
  @param  Mols_StructureGroup self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Mols_StructureGroup_FindFirstEntry_keyval1(Mols_StructureGroup self, char * key, ApiObject value)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mols_StructureGroup_FindFirstEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.StructureGroup.entries

Bmrb 
Entries for StructureGroup
  @param  Mols_StructureGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Mols_StructureGroup_FindFirstEntry_keyval2(Mols_StructureGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mols_StructureGroup_FindFirstEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.StructureGroup.entries

Bmrb 
Entries for StructureGroup
  @param  Mols_StructureGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Mols_StructureGroup_FindFirstEntry_keyval3(Mols_StructureGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mols_StructureGroup_FindFirstEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.StructureGroup.entries

Bmrb 
Entries for StructureGroup
  @param  Mols_StructureGroup self
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
Entr_Entry Mols_StructureGroup_FindFirstEntry_keyval4(Mols_StructureGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mols_StructureGroup_FindFirstEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.StructureGroup.models

Models 
belonging to StructureGroup
  @param  Mols_StructureGroup self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Coor_Model Mols_StructureGroup_FindFirstModel(Mols_StructureGroup self, ApiMap conditions)
{
  
  Coor_Model obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstModel");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: cannot find method 'findFirstModel'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: method 'findFirstModel' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.StructureGroup.models

Models 
belonging to StructureGroup
  @param  Mols_StructureGroup self
  @returns  the first value that satisfies the conditions 
**/
Coor_Model Mols_StructureGroup_FindFirstModel_keyval0(Mols_StructureGroup self)
{
  
  Coor_Model  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mols_StructureGroup_FindFirstModel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.StructureGroup.models

Models 
belonging to StructureGroup
  @param  Mols_StructureGroup self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Coor_Model Mols_StructureGroup_FindFirstModel_keyval1(Mols_StructureGroup self, char * key, ApiObject value)
{
  
  Coor_Model  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mols_StructureGroup_FindFirstModel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.StructureGroup.models

Models 
belonging to StructureGroup
  @param  Mols_StructureGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Coor_Model Mols_StructureGroup_FindFirstModel_keyval2(Mols_StructureGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Coor_Model  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mols_StructureGroup_FindFirstModel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.StructureGroup.models

Models 
belonging to StructureGroup
  @param  Mols_StructureGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Coor_Model Mols_StructureGroup_FindFirstModel_keyval3(Mols_StructureGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Coor_Model  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mols_StructureGroup_FindFirstModel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.StructureGroup.models

Models 
belonging to StructureGroup
  @param  Mols_StructureGroup self
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
Coor_Model Mols_StructureGroup_FindFirstModel_keyval4(Mols_StructureGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Coor_Model  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mols_StructureGroup_FindFirstModel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.molecule.MolSystem.StructureGroup
  @param  Mols_StructureGroup self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Mols_StructureGroup_Get(Mols_StructureGroup self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Mols_StructureGroup self
  @returns   the result
**/
Acco_AccessObject Mols_StructureGroup_GetAccess(Mols_StructureGroup self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: method 'getAccess' is not callable");
  
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
  @param  Mols_StructureGroup self
  @returns   the result
**/
ApiList Mols_StructureGroup_GetApplicationData(Mols_StructureGroup self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.molecule.MolSystem.StructureGroup
  @param  Mols_StructureGroup self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Mols_StructureGroup Mols_StructureGroup_GetByKey(Mols_StructureGroup self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Mols_StructureGroup obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: method 'getByKey' is not callable");
  
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
  @param  Mols_StructureGroup self
  @returns   the result
**/
ApiString Mols_StructureGroup_GetClassName(Mols_StructureGroup self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolSystem.StructureGroup.detail

Detailed 
description of StructureModelGroup
  @param  Mols_StructureGroup self
  @returns   the result
**/
ApiString Mols_StructureGroup_GetDetail(Mols_StructureGroup self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetail");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: cannot find method 'getDetail'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: method 'getDetail' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolSystem.StructureGroup.entries

Bmrb Entries for 
StructureGroup
  @param  Mols_StructureGroup self
  @returns   the result
**/
ApiSet Mols_StructureGroup_GetEntries(Mols_StructureGroup self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getEntries");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: cannot find method 'getEntries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: method 'getEntries' is not callable");
  
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
  @param  Mols_StructureGroup self
  @returns   the result
**/
ApiList Mols_StructureGroup_GetFieldNames(Mols_StructureGroup self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.molecule.MolSystem.StructureGroup
  @param  Mols_StructureGroup self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Mols_StructureGroup_GetFullKey(Mols_StructureGroup self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: method 'getFullKey' is not callable");
  
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
  @param  Mols_StructureGroup self
  @returns   the result
**/
ApiBoolean Mols_StructureGroup_GetInConstructor(Mols_StructureGroup self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: method 'getInConstructor' is not callable");
  
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
  @param  Mols_StructureGroup self
  @returns   the result
**/
ApiBoolean Mols_StructureGroup_GetIsDeleted(Mols_StructureGroup self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.molecule.MolSystem.StructureGroup
  @param  Mols_StructureGroup self
  @returns  Local object key
**/
ApiObject Mols_StructureGroup_GetLocalKey(Mols_StructureGroup self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolSystem.StructureGroup.models

Models belonging 
to StructureGroup
  @param  Mols_StructureGroup self
  @returns   the result
**/
ApiSet Mols_StructureGroup_GetModels(Mols_StructureGroup self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getModels");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: cannot find method 'getModels'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: method 'getModels' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolSystem.StructureGroup.molSystem

parent link
  @param  Mols_StructureGroup self
  @returns   the result
**/
Mols_MolSystem Mols_StructureGroup_GetMolSystem(Mols_StructureGroup self)
{
  
  Mols_MolSystem obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolSystem");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: cannot find method 'getMolSystem'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: method 'getMolSystem' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolSystem.StructureGroup.name

name of 
StructureModelGroup
  @param  Mols_StructureGroup self
  @returns   the result
**/
ApiString Mols_StructureGroup_GetName(Mols_StructureGroup self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: method 'getName' is not callable");
  
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
  @param  Mols_StructureGroup self
  @returns   the result
**/
ApiString Mols_StructureGroup_GetPackageName(Mols_StructureGroup self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: method 'getPackageName' is not callable");
  
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
  @param  Mols_StructureGroup self
  @returns   the result
**/
ApiString Mols_StructureGroup_GetPackageShortName(Mols_StructureGroup self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolSystem.StructureGroup.parent

link to parent 
object - synonym for molSystem
  @param  Mols_StructureGroup self
  @returns   the result
**/
Mols_MolSystem Mols_StructureGroup_GetParent(Mols_StructureGroup self)
{
  
  Mols_MolSystem obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: method 'getParent' is not callable");
  
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
  @param  Mols_StructureGroup self
  @returns   the result
**/
ApiString Mols_StructureGroup_GetQualifiedName(Mols_StructureGroup self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: method 'getQualifiedName' is not callable");
  
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
  @param  Mols_StructureGroup self
  @returns   the result
**/
Impl_MemopsRoot Mols_StructureGroup_GetRoot(Mols_StructureGroup self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolSystem.StructureGroup.serial

The serial number 
is the key for class StructureModelGroup and together with the parent 
object serves as a unique identifier for the StructureModelGroup.
Serial 
numbers are generated by the API. Serial numbers of deleted objects are 
not reused.
  @param  Mols_StructureGroup self
  @returns   the result
**/
ApiInteger Mols_StructureGroup_GetSerial(Mols_StructureGroup self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: method 'getSerial' is not callable");
  
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
  @param  Mols_StructureGroup self
  @returns   the result
**/
Impl_TopObject Mols_StructureGroup_GetTopObject(Mols_StructureGroup self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.molecule.MolSystem.StructureGroup
  @param  Mols_MolSystem parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Mols_StructureGroup Mols_StructureGroup_Init(Mols_MolSystem parent, ApiMap attrlinks)
{
  
  return Mols_MolSystem_NewStructureGroup(parent, attrlinks);
}

/**
  Constructor for ccp.molecule.MolSystem.StructureGroup
  @param  Mols_MolSystem parent
  @returns  the new object
**/
Mols_StructureGroup Mols_StructureGroup_Init_reqd(Mols_MolSystem parent)
{
  
  Mols_StructureGroup  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Mols_StructureGroup_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_StructureGroup self
  @param  Impl_ApplicationData value
**/
void *Mols_StructureGroup_RemoveApplicationData(Mols_StructureGroup self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.molecule.MolSystem.StructureGroup.entries

Bmrb Entries 
for StructureGroup
  @param  Mols_StructureGroup self
  @param  Entr_Entry value
**/
void *Mols_StructureGroup_RemoveEntry(Mols_StructureGroup self, Entr_Entry value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeEntry");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: cannot find method 'removeEntry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: method 'removeEntry' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.molecule.MolSystem.StructureGroup.models

Models 
belonging to StructureGroup
  @param  Mols_StructureGroup self
  @param  Coor_Model value
**/
void *Mols_StructureGroup_RemoveModel(Mols_StructureGroup self, Coor_Model value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeModel");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: cannot find method 'removeModel'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: method 'removeModel' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.molecule.MolSystem.StructureGroup
  @param  Mols_StructureGroup self
  @param  ApiString name
  @param  ApiObject value
**/
void *Mols_StructureGroup_Set(Mols_StructureGroup self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Mols_StructureGroup self
  @param  Acco_AccessObject value
**/
void *Mols_StructureGroup_SetAccess(Mols_StructureGroup self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: method 'setAccess' is not callable");
  
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
  @param  Mols_StructureGroup self
  @param  ApiList values
**/
void *Mols_StructureGroup_SetApplicationData(Mols_StructureGroup self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.MolSystem.StructureGroup.detail

Detailed 
description of StructureModelGroup
  @param  Mols_StructureGroup self
  @param  ApiString value
**/
void *Mols_StructureGroup_SetDetail(Mols_StructureGroup self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetail");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: cannot find method 'setDetail'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: method 'setDetail' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.MolSystem.StructureGroup.entries

Bmrb Entries for 
StructureGroup
  @param  Mols_StructureGroup self
  @param  ApiSet values
**/
void *Mols_StructureGroup_SetEntries(Mols_StructureGroup self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setEntries");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: cannot find method 'setEntries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: method 'setEntries' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.MolSystem.StructureGroup.models

Models belonging 
to StructureGroup
  @param  Mols_StructureGroup self
  @param  ApiSet values
**/
void *Mols_StructureGroup_SetModels(Mols_StructureGroup self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setModels");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: cannot find method 'setModels'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: method 'setModels' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.MolSystem.StructureGroup.name

name of 
StructureModelGroup
  @param  Mols_StructureGroup self
  @param  ApiString value
**/
void *Mols_StructureGroup_SetName(Mols_StructureGroup self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.MolSystem.StructureGroup.serial

The serial number 
is the key for class StructureModelGroup and together with the parent 
object serves as a unique identifier for the StructureModelGroup.
Serial 
numbers are generated by the API. Serial numbers of deleted objects are 
not reused.
  @param  Mols_StructureGroup self
  @param  ApiInteger value
**/
void *Mols_StructureGroup_SetSerial(Mols_StructureGroup self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.MolSystem.StructureGroup.entries

Bmrb Entries 
for StructureGroup
  @param  Mols_StructureGroup self
  @returns   the result
**/
ApiList Mols_StructureGroup_SortedEntries(Mols_StructureGroup self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedEntries");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: cannot find method 'sortedEntries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: method 'sortedEntries' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.MolSystem.StructureGroup.models

Models 
belonging to StructureGroup
  @param  Mols_StructureGroup self
  @returns   the result
**/
ApiList Mols_StructureGroup_SortedModels(Mols_StructureGroup self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedModels");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: cannot find method 'sortedModels'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.StructureGroup: method 'sortedModels' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
