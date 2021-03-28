
#include "ccp.h"

/*
  Natural source of molecule.
*/

/* package ccp.api.general.Taxonomy */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Taxo_NaturalSource self
  @param  Impl_ApplicationData value
**/
void *Taxo_NaturalSource_AddApplicationData(Taxo_NaturalSource self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.general.Taxonomy.NaturalSource.entries

Bmrb Entries for 
NaturalSource
  @param  Taxo_NaturalSource self
  @param  Entr_Entry value
**/
void *Taxo_NaturalSource_AddEntry(Taxo_NaturalSource self, Entr_Entry value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addEntry");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'addEntry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'addEntry' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.general.Taxonomy.NaturalSource.expEntries

Nmr Entries that 
have this as their experimental source
  @param  Taxo_NaturalSource self
  @param  Entr_Entry value
**/
void *Taxo_NaturalSource_AddExpEntry(Taxo_NaturalSource self, Entr_Entry value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addExpEntry");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'addExpEntry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'addExpEntry' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.general.Taxonomy.NaturalSource.molSeqFragments

MOlecule 
fragments arising from NaturalSource
  @param  Taxo_NaturalSource self
  @param  Mole_MolSeqFragment value
**/
void *Taxo_NaturalSource_AddMolSeqFragment(Taxo_NaturalSource self, Mole_MolSeqFragment value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addMolSeqFragment");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'addMolSeqFragment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'addMolSeqFragment' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.general.Taxonomy.NaturalSource.molecules

Molecules from 
natural source.
  @param  Taxo_NaturalSource self
  @param  Mole_Molecule value
**/
void *Taxo_NaturalSource_AddMolecule(Taxo_NaturalSource self, Mole_Molecule value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addMolecule");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'addMolecule'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'addMolecule' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.general.Taxonomy.NaturalSource.targets

Targets 
corresponding to this natural source.
  @param  Taxo_NaturalSource self
  @param  Targ_Target value
**/
void *Taxo_NaturalSource_AddTarget(Taxo_NaturalSource self, Targ_Target value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addTarget");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'addTarget'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'addTarget' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.general.Taxonomy.NaturalSource
  @param  Taxo_NaturalSource self
  @param  ApiBoolean complete
**/
void *Taxo_NaturalSource_CheckAllValid(Taxo_NaturalSource self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.general.Taxonomy.NaturalSource
  @param  Taxo_NaturalSource self
  @param  ApiBoolean complete
**/
void *Taxo_NaturalSource_CheckValid(Taxo_NaturalSource self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'checkValid' is not callable");
  
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
  @param  Taxo_NaturalSource self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Taxo_NaturalSource_FindAllApplicationData(Taxo_NaturalSource self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'findAllApplicationData' is not callable");
  
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
  @param  Taxo_NaturalSource self
  @returns  all value that satisfy the conditions 
**/
ApiList Taxo_NaturalSource_FindAllApplicationData_keyval0(Taxo_NaturalSource self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Taxo_NaturalSource_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Taxo_NaturalSource self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Taxo_NaturalSource_FindAllApplicationData_keyval1(Taxo_NaturalSource self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Taxo_NaturalSource_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Taxo_NaturalSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Taxo_NaturalSource_FindAllApplicationData_keyval2(Taxo_NaturalSource self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Taxo_NaturalSource_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Taxo_NaturalSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Taxo_NaturalSource_FindAllApplicationData_keyval3(Taxo_NaturalSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Taxo_NaturalSource_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Taxo_NaturalSource self
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
ApiList Taxo_NaturalSource_FindAllApplicationData_keyval4(Taxo_NaturalSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Taxo_NaturalSource_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Taxonomy.NaturalSource.entries

Bmrb Entries for 
NaturalSource
  @param  Taxo_NaturalSource self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Taxo_NaturalSource_FindAllEntries(Taxo_NaturalSource self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllEntries");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'findAllEntries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'findAllEntries' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.Taxonomy.NaturalSource.entries

Bmrb Entries for 
NaturalSource
  @param  Taxo_NaturalSource self
  @returns  all value that satisfy the conditions 
**/
ApiSet Taxo_NaturalSource_FindAllEntries_keyval0(Taxo_NaturalSource self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Taxo_NaturalSource_FindAllEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Taxonomy.NaturalSource.entries

Bmrb Entries for 
NaturalSource
  @param  Taxo_NaturalSource self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Taxo_NaturalSource_FindAllEntries_keyval1(Taxo_NaturalSource self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Taxo_NaturalSource_FindAllEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Taxonomy.NaturalSource.entries

Bmrb Entries for 
NaturalSource
  @param  Taxo_NaturalSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Taxo_NaturalSource_FindAllEntries_keyval2(Taxo_NaturalSource self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Taxo_NaturalSource_FindAllEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Taxonomy.NaturalSource.entries

Bmrb Entries for 
NaturalSource
  @param  Taxo_NaturalSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Taxo_NaturalSource_FindAllEntries_keyval3(Taxo_NaturalSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Taxo_NaturalSource_FindAllEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Taxonomy.NaturalSource.entries

Bmrb Entries for 
NaturalSource
  @param  Taxo_NaturalSource self
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
ApiSet Taxo_NaturalSource_FindAllEntries_keyval4(Taxo_NaturalSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Taxo_NaturalSource_FindAllEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Taxonomy.NaturalSource.expEntries

Nmr Entries 
that have this as their experimental source
  @param  Taxo_NaturalSource self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Taxo_NaturalSource_FindAllExpEntries(Taxo_NaturalSource self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllExpEntries");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'findAllExpEntries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'findAllExpEntries' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.Taxonomy.NaturalSource.expEntries

Nmr Entries 
that have this as their experimental source
  @param  Taxo_NaturalSource self
  @returns  all value that satisfy the conditions 
**/
ApiSet Taxo_NaturalSource_FindAllExpEntries_keyval0(Taxo_NaturalSource self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Taxo_NaturalSource_FindAllExpEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Taxonomy.NaturalSource.expEntries

Nmr Entries 
that have this as their experimental source
  @param  Taxo_NaturalSource self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Taxo_NaturalSource_FindAllExpEntries_keyval1(Taxo_NaturalSource self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Taxo_NaturalSource_FindAllExpEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Taxonomy.NaturalSource.expEntries

Nmr Entries 
that have this as their experimental source
  @param  Taxo_NaturalSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Taxo_NaturalSource_FindAllExpEntries_keyval2(Taxo_NaturalSource self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Taxo_NaturalSource_FindAllExpEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Taxonomy.NaturalSource.expEntries

Nmr Entries 
that have this as their experimental source
  @param  Taxo_NaturalSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Taxo_NaturalSource_FindAllExpEntries_keyval3(Taxo_NaturalSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Taxo_NaturalSource_FindAllExpEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Taxonomy.NaturalSource.expEntries

Nmr Entries 
that have this as their experimental source
  @param  Taxo_NaturalSource self
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
ApiSet Taxo_NaturalSource_FindAllExpEntries_keyval4(Taxo_NaturalSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Taxo_NaturalSource_FindAllExpEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Taxonomy.NaturalSource.molSeqFragments

MOlecule 
fragments arising from NaturalSource
  @param  Taxo_NaturalSource self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Taxo_NaturalSource_FindAllMolSeqFragments(Taxo_NaturalSource self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllMolSeqFragments");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'findAllMolSeqFragments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'findAllMolSeqFragments' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.Taxonomy.NaturalSource.molSeqFragments

MOlecule 
fragments arising from NaturalSource
  @param  Taxo_NaturalSource self
  @returns  all value that satisfy the conditions 
**/
ApiSet Taxo_NaturalSource_FindAllMolSeqFragments_keyval0(Taxo_NaturalSource self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Taxo_NaturalSource_FindAllMolSeqFragments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Taxonomy.NaturalSource.molSeqFragments

MOlecule 
fragments arising from NaturalSource
  @param  Taxo_NaturalSource self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Taxo_NaturalSource_FindAllMolSeqFragments_keyval1(Taxo_NaturalSource self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Taxo_NaturalSource_FindAllMolSeqFragments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Taxonomy.NaturalSource.molSeqFragments

MOlecule 
fragments arising from NaturalSource
  @param  Taxo_NaturalSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Taxo_NaturalSource_FindAllMolSeqFragments_keyval2(Taxo_NaturalSource self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Taxo_NaturalSource_FindAllMolSeqFragments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Taxonomy.NaturalSource.molSeqFragments

MOlecule 
fragments arising from NaturalSource
  @param  Taxo_NaturalSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Taxo_NaturalSource_FindAllMolSeqFragments_keyval3(Taxo_NaturalSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Taxo_NaturalSource_FindAllMolSeqFragments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Taxonomy.NaturalSource.molSeqFragments

MOlecule 
fragments arising from NaturalSource
  @param  Taxo_NaturalSource self
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
ApiSet Taxo_NaturalSource_FindAllMolSeqFragments_keyval4(Taxo_NaturalSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Taxo_NaturalSource_FindAllMolSeqFragments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Taxonomy.NaturalSource.molecules

Molecules from 
natural source.
  @param  Taxo_NaturalSource self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Taxo_NaturalSource_FindAllMolecules(Taxo_NaturalSource self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllMolecules");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'findAllMolecules'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'findAllMolecules' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.Taxonomy.NaturalSource.molecules

Molecules from 
natural source.
  @param  Taxo_NaturalSource self
  @returns  all value that satisfy the conditions 
**/
ApiSet Taxo_NaturalSource_FindAllMolecules_keyval0(Taxo_NaturalSource self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Taxo_NaturalSource_FindAllMolecules(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Taxonomy.NaturalSource.molecules

Molecules from 
natural source.
  @param  Taxo_NaturalSource self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Taxo_NaturalSource_FindAllMolecules_keyval1(Taxo_NaturalSource self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Taxo_NaturalSource_FindAllMolecules(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Taxonomy.NaturalSource.molecules

Molecules from 
natural source.
  @param  Taxo_NaturalSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Taxo_NaturalSource_FindAllMolecules_keyval2(Taxo_NaturalSource self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Taxo_NaturalSource_FindAllMolecules(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Taxonomy.NaturalSource.molecules

Molecules from 
natural source.
  @param  Taxo_NaturalSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Taxo_NaturalSource_FindAllMolecules_keyval3(Taxo_NaturalSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Taxo_NaturalSource_FindAllMolecules(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Taxonomy.NaturalSource.molecules

Molecules from 
natural source.
  @param  Taxo_NaturalSource self
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
ApiSet Taxo_NaturalSource_FindAllMolecules_keyval4(Taxo_NaturalSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Taxo_NaturalSource_FindAllMolecules(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Taxonomy.NaturalSource.targets

Targets 
corresponding to this natural source.
  @param  Taxo_NaturalSource self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Taxo_NaturalSource_FindAllTargets(Taxo_NaturalSource self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllTargets");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'findAllTargets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'findAllTargets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.Taxonomy.NaturalSource.targets

Targets 
corresponding to this natural source.
  @param  Taxo_NaturalSource self
  @returns  all value that satisfy the conditions 
**/
ApiSet Taxo_NaturalSource_FindAllTargets_keyval0(Taxo_NaturalSource self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Taxo_NaturalSource_FindAllTargets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Taxonomy.NaturalSource.targets

Targets 
corresponding to this natural source.
  @param  Taxo_NaturalSource self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Taxo_NaturalSource_FindAllTargets_keyval1(Taxo_NaturalSource self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Taxo_NaturalSource_FindAllTargets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Taxonomy.NaturalSource.targets

Targets 
corresponding to this natural source.
  @param  Taxo_NaturalSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Taxo_NaturalSource_FindAllTargets_keyval2(Taxo_NaturalSource self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Taxo_NaturalSource_FindAllTargets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Taxonomy.NaturalSource.targets

Targets 
corresponding to this natural source.
  @param  Taxo_NaturalSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Taxo_NaturalSource_FindAllTargets_keyval3(Taxo_NaturalSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Taxo_NaturalSource_FindAllTargets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Taxonomy.NaturalSource.targets

Targets 
corresponding to this natural source.
  @param  Taxo_NaturalSource self
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
ApiSet Taxo_NaturalSource_FindAllTargets_keyval4(Taxo_NaturalSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Taxo_NaturalSource_FindAllTargets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Taxo_NaturalSource self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Taxo_NaturalSource_FindFirstApplicationData(Taxo_NaturalSource self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'findFirstApplicationData' is not callable");
  
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
  @param  Taxo_NaturalSource self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Taxo_NaturalSource_FindFirstApplicationData_keyval0(Taxo_NaturalSource self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Taxo_NaturalSource_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Taxo_NaturalSource self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Taxo_NaturalSource_FindFirstApplicationData_keyval1(Taxo_NaturalSource self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Taxo_NaturalSource_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Taxo_NaturalSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Taxo_NaturalSource_FindFirstApplicationData_keyval2(Taxo_NaturalSource self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Taxo_NaturalSource_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Taxo_NaturalSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Taxo_NaturalSource_FindFirstApplicationData_keyval3(Taxo_NaturalSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Taxo_NaturalSource_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Taxo_NaturalSource self
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
Impl_ApplicationData Taxo_NaturalSource_FindFirstApplicationData_keyval4(Taxo_NaturalSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Taxo_NaturalSource_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Taxonomy.NaturalSource.entries

Bmrb Entries 
for NaturalSource
  @param  Taxo_NaturalSource self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Taxo_NaturalSource_FindFirstEntry(Taxo_NaturalSource self, ApiMap conditions)
{
  
  Entr_Entry obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstEntry");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'findFirstEntry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'findFirstEntry' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.general.Taxonomy.NaturalSource.entries

Bmrb Entries 
for NaturalSource
  @param  Taxo_NaturalSource self
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Taxo_NaturalSource_FindFirstEntry_keyval0(Taxo_NaturalSource self)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Taxo_NaturalSource_FindFirstEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Taxonomy.NaturalSource.entries

Bmrb Entries 
for NaturalSource
  @param  Taxo_NaturalSource self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Taxo_NaturalSource_FindFirstEntry_keyval1(Taxo_NaturalSource self, char * key, ApiObject value)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Taxo_NaturalSource_FindFirstEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Taxonomy.NaturalSource.entries

Bmrb Entries 
for NaturalSource
  @param  Taxo_NaturalSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Taxo_NaturalSource_FindFirstEntry_keyval2(Taxo_NaturalSource self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Taxo_NaturalSource_FindFirstEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Taxonomy.NaturalSource.entries

Bmrb Entries 
for NaturalSource
  @param  Taxo_NaturalSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Taxo_NaturalSource_FindFirstEntry_keyval3(Taxo_NaturalSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Taxo_NaturalSource_FindFirstEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Taxonomy.NaturalSource.entries

Bmrb Entries 
for NaturalSource
  @param  Taxo_NaturalSource self
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
Entr_Entry Taxo_NaturalSource_FindFirstEntry_keyval4(Taxo_NaturalSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Taxo_NaturalSource_FindFirstEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Taxonomy.NaturalSource.expEntries

Nmr Entries 
that have this as their experimental source
  @param  Taxo_NaturalSource self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Taxo_NaturalSource_FindFirstExpEntry(Taxo_NaturalSource self, ApiMap conditions)
{
  
  Entr_Entry obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstExpEntry");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'findFirstExpEntry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'findFirstExpEntry' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.general.Taxonomy.NaturalSource.expEntries

Nmr Entries 
that have this as their experimental source
  @param  Taxo_NaturalSource self
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Taxo_NaturalSource_FindFirstExpEntry_keyval0(Taxo_NaturalSource self)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Taxo_NaturalSource_FindFirstExpEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Taxonomy.NaturalSource.expEntries

Nmr Entries 
that have this as their experimental source
  @param  Taxo_NaturalSource self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Taxo_NaturalSource_FindFirstExpEntry_keyval1(Taxo_NaturalSource self, char * key, ApiObject value)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Taxo_NaturalSource_FindFirstExpEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Taxonomy.NaturalSource.expEntries

Nmr Entries 
that have this as their experimental source
  @param  Taxo_NaturalSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Taxo_NaturalSource_FindFirstExpEntry_keyval2(Taxo_NaturalSource self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Taxo_NaturalSource_FindFirstExpEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Taxonomy.NaturalSource.expEntries

Nmr Entries 
that have this as their experimental source
  @param  Taxo_NaturalSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Taxo_NaturalSource_FindFirstExpEntry_keyval3(Taxo_NaturalSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Taxo_NaturalSource_FindFirstExpEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Taxonomy.NaturalSource.expEntries

Nmr Entries 
that have this as their experimental source
  @param  Taxo_NaturalSource self
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
Entr_Entry Taxo_NaturalSource_FindFirstExpEntry_keyval4(Taxo_NaturalSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Taxo_NaturalSource_FindFirstExpEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.Taxonomy.NaturalSource.molSeqFragments

MOlecule fragments 
arising from NaturalSource
  @param  Taxo_NaturalSource self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Mole_MolSeqFragment Taxo_NaturalSource_FindFirstMolSeqFragment(Taxo_NaturalSource self, ApiMap conditions)
{
  
  Mole_MolSeqFragment obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstMolSeqFragment");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'findFirstMolSeqFragment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'findFirstMolSeqFragment' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.Taxonomy.NaturalSource.molSeqFragments

MOlecule fragments 
arising from NaturalSource
  @param  Taxo_NaturalSource self
  @returns  the first value that satisfies the conditions 
**/
Mole_MolSeqFragment Taxo_NaturalSource_FindFirstMolSeqFragment_keyval0(Taxo_NaturalSource self)
{
  
  Mole_MolSeqFragment  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Taxo_NaturalSource_FindFirstMolSeqFragment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.Taxonomy.NaturalSource.molSeqFragments

MOlecule fragments 
arising from NaturalSource
  @param  Taxo_NaturalSource self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Mole_MolSeqFragment Taxo_NaturalSource_FindFirstMolSeqFragment_keyval1(Taxo_NaturalSource self, char * key, ApiObject value)
{
  
  Mole_MolSeqFragment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Taxo_NaturalSource_FindFirstMolSeqFragment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.Taxonomy.NaturalSource.molSeqFragments

MOlecule fragments 
arising from NaturalSource
  @param  Taxo_NaturalSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Mole_MolSeqFragment Taxo_NaturalSource_FindFirstMolSeqFragment_keyval2(Taxo_NaturalSource self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Mole_MolSeqFragment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Taxo_NaturalSource_FindFirstMolSeqFragment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.Taxonomy.NaturalSource.molSeqFragments

MOlecule fragments 
arising from NaturalSource
  @param  Taxo_NaturalSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Mole_MolSeqFragment Taxo_NaturalSource_FindFirstMolSeqFragment_keyval3(Taxo_NaturalSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Mole_MolSeqFragment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Taxo_NaturalSource_FindFirstMolSeqFragment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.Taxonomy.NaturalSource.molSeqFragments

MOlecule fragments 
arising from NaturalSource
  @param  Taxo_NaturalSource self
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
Mole_MolSeqFragment Taxo_NaturalSource_FindFirstMolSeqFragment_keyval4(Taxo_NaturalSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Mole_MolSeqFragment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Taxo_NaturalSource_FindFirstMolSeqFragment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Taxonomy.NaturalSource.molecules

Molecules 
from natural source.
  @param  Taxo_NaturalSource self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Mole_Molecule Taxo_NaturalSource_FindFirstMolecule(Taxo_NaturalSource self, ApiMap conditions)
{
  
  Mole_Molecule obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstMolecule");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'findFirstMolecule'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'findFirstMolecule' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.general.Taxonomy.NaturalSource.molecules

Molecules 
from natural source.
  @param  Taxo_NaturalSource self
  @returns  the first value that satisfies the conditions 
**/
Mole_Molecule Taxo_NaturalSource_FindFirstMolecule_keyval0(Taxo_NaturalSource self)
{
  
  Mole_Molecule  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Taxo_NaturalSource_FindFirstMolecule(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Taxonomy.NaturalSource.molecules

Molecules 
from natural source.
  @param  Taxo_NaturalSource self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Mole_Molecule Taxo_NaturalSource_FindFirstMolecule_keyval1(Taxo_NaturalSource self, char * key, ApiObject value)
{
  
  Mole_Molecule  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Taxo_NaturalSource_FindFirstMolecule(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Taxonomy.NaturalSource.molecules

Molecules 
from natural source.
  @param  Taxo_NaturalSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Mole_Molecule Taxo_NaturalSource_FindFirstMolecule_keyval2(Taxo_NaturalSource self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Mole_Molecule  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Taxo_NaturalSource_FindFirstMolecule(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Taxonomy.NaturalSource.molecules

Molecules 
from natural source.
  @param  Taxo_NaturalSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Mole_Molecule Taxo_NaturalSource_FindFirstMolecule_keyval3(Taxo_NaturalSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Mole_Molecule  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Taxo_NaturalSource_FindFirstMolecule(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Taxonomy.NaturalSource.molecules

Molecules 
from natural source.
  @param  Taxo_NaturalSource self
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
Mole_Molecule Taxo_NaturalSource_FindFirstMolecule_keyval4(Taxo_NaturalSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Mole_Molecule  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Taxo_NaturalSource_FindFirstMolecule(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Taxonomy.NaturalSource.targets

Targets 
corresponding to this natural source.
  @param  Taxo_NaturalSource self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Targ_Target Taxo_NaturalSource_FindFirstTarget(Taxo_NaturalSource self, ApiMap conditions)
{
  
  Targ_Target obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstTarget");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'findFirstTarget'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'findFirstTarget' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.general.Taxonomy.NaturalSource.targets

Targets 
corresponding to this natural source.
  @param  Taxo_NaturalSource self
  @returns  the first value that satisfies the conditions 
**/
Targ_Target Taxo_NaturalSource_FindFirstTarget_keyval0(Taxo_NaturalSource self)
{
  
  Targ_Target  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Taxo_NaturalSource_FindFirstTarget(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Taxonomy.NaturalSource.targets

Targets 
corresponding to this natural source.
  @param  Taxo_NaturalSource self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Targ_Target Taxo_NaturalSource_FindFirstTarget_keyval1(Taxo_NaturalSource self, char * key, ApiObject value)
{
  
  Targ_Target  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Taxo_NaturalSource_FindFirstTarget(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Taxonomy.NaturalSource.targets

Targets 
corresponding to this natural source.
  @param  Taxo_NaturalSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Targ_Target Taxo_NaturalSource_FindFirstTarget_keyval2(Taxo_NaturalSource self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Targ_Target  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Taxo_NaturalSource_FindFirstTarget(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Taxonomy.NaturalSource.targets

Targets 
corresponding to this natural source.
  @param  Taxo_NaturalSource self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Targ_Target Taxo_NaturalSource_FindFirstTarget_keyval3(Taxo_NaturalSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Targ_Target  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Taxo_NaturalSource_FindFirstTarget(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Taxonomy.NaturalSource.targets

Targets 
corresponding to this natural source.
  @param  Taxo_NaturalSource self
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
Targ_Target Taxo_NaturalSource_FindFirstTarget_keyval4(Taxo_NaturalSource self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Targ_Target  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Taxo_NaturalSource_FindFirstTarget(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.general.Taxonomy.NaturalSource
  @param  Taxo_NaturalSource self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Taxo_NaturalSource_Get(Taxo_NaturalSource self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Taxo_NaturalSource self
  @returns   the result
**/
Acco_AccessObject Taxo_NaturalSource_GetAccess(Taxo_NaturalSource self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'getAccess' is not callable");
  
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
  @param  Taxo_NaturalSource self
  @returns   the result
**/
ApiList Taxo_NaturalSource_GetApplicationData(Taxo_NaturalSource self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Taxonomy.NaturalSource.atccNumber

ATCC number of 
cell line. Should be removed?
  @param  Taxo_NaturalSource self
  @returns   the result
**/
ApiString Taxo_NaturalSource_GetAtccNumber(Taxo_NaturalSource self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAtccNumber");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'getAtccNumber'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'getAtccNumber' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.general.Taxonomy.NaturalSource
  @param  Taxo_NaturalSource self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Taxo_NaturalSource Taxo_NaturalSource_GetByKey(Taxo_NaturalSource self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Taxo_NaturalSource obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'getByKey' is not callable");
  
  args = PyTuple_Pack(2, startObj, fullKey);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Taxonomy.NaturalSource.cellLine

Source cell line.
  @param  Taxo_NaturalSource self
  @returns   the result
**/
ApiString Taxo_NaturalSource_GetCellLine(Taxo_NaturalSource self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCellLine");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'getCellLine'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'getCellLine' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Taxonomy.NaturalSource.cellLocation

The source cell 
location.
  @param  Taxo_NaturalSource self
  @returns   the result
**/
ApiString Taxo_NaturalSource_GetCellLocation(Taxo_NaturalSource self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCellLocation");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'getCellLocation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'getCellLocation' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Taxonomy.NaturalSource.cellType

Source cell type.
  @param  Taxo_NaturalSource self
  @returns   the result
**/
ApiString Taxo_NaturalSource_GetCellType(Taxo_NaturalSource self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCellType");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'getCellType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'getCellType' is not callable");
  
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
  @param  Taxo_NaturalSource self
  @returns   the result
**/
ApiString Taxo_NaturalSource_GetClassName(Taxo_NaturalSource self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Taxonomy.NaturalSource.details

Details, comments, 
notes about natural source.
  @param  Taxo_NaturalSource self
  @returns   the result
**/
ApiString Taxo_NaturalSource_GetDetails(Taxo_NaturalSource self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'getDetails' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Taxonomy.NaturalSource.entries

Bmrb Entries for 
NaturalSource
  @param  Taxo_NaturalSource self
  @returns   the result
**/
ApiSet Taxo_NaturalSource_GetEntries(Taxo_NaturalSource self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getEntries");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'getEntries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'getEntries' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Taxonomy.NaturalSource.expEntries

Nmr Entries that 
have this as their experimental source
  @param  Taxo_NaturalSource self
  @returns   the result
**/
ApiSet Taxo_NaturalSource_GetExpEntries(Taxo_NaturalSource self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExpEntries");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'getExpEntries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'getExpEntries' is not callable");
  
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
  @param  Taxo_NaturalSource self
  @returns   the result
**/
ApiList Taxo_NaturalSource_GetFieldNames(Taxo_NaturalSource self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Taxonomy.NaturalSource.fraction

Is this the same as 
tissueFraction (which would then be a better name)?
  @param  Taxo_NaturalSource self
  @returns   the result
**/
ApiString Taxo_NaturalSource_GetFraction(Taxo_NaturalSource self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFraction");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'getFraction'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'getFraction' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.general.Taxonomy.NaturalSource
  @param  Taxo_NaturalSource self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Taxo_NaturalSource_GetFullKey(Taxo_NaturalSource self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'getFullKey' is not callable");
  
  args = PyTuple_Pack(1, useGuid);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Taxonomy.NaturalSource.geneMnemonic

Gene Mnemonic.
  @param  Taxo_NaturalSource self
  @returns   the result
**/
ApiString Taxo_NaturalSource_GetGeneMnemonic(Taxo_NaturalSource self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getGeneMnemonic");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'getGeneMnemonic'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'getGeneMnemonic' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Taxonomy.NaturalSource.genus

Organism genus.
  @param  Taxo_NaturalSource self
  @returns   the result
**/
ApiString Taxo_NaturalSource_GetGenus(Taxo_NaturalSource self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getGenus");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'getGenus'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'getGenus' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Taxonomy.NaturalSource.ictvCode

The code for the 
International Comitee on Taxonomy of Viruses.
  @param  Taxo_NaturalSource self
  @returns   the result
**/
ApiString Taxo_NaturalSource_GetIctvCode(Taxo_NaturalSource self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIctvCode");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'getIctvCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'getIctvCode' is not callable");
  
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
  @param  Taxo_NaturalSource self
  @returns   the result
**/
ApiBoolean Taxo_NaturalSource_GetInConstructor(Taxo_NaturalSource self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'getInConstructor' is not callable");
  
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
  @param  Taxo_NaturalSource self
  @returns   the result
**/
ApiBoolean Taxo_NaturalSource_GetIsDeleted(Taxo_NaturalSource self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.general.Taxonomy.NaturalSource
  @param  Taxo_NaturalSource self
  @returns  Local object key
**/
ApiObject Taxo_NaturalSource_GetLocalKey(Taxo_NaturalSource self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Taxonomy.NaturalSource.molSeqFragments

MOlecule 
fragments arising from NaturalSource
  @param  Taxo_NaturalSource self
  @returns   the result
**/
ApiSet Taxo_NaturalSource_GetMolSeqFragments(Taxo_NaturalSource self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolSeqFragments");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'getMolSeqFragments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'getMolSeqFragments' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Taxonomy.NaturalSource.molecules

Molecules from 
natural source.
  @param  Taxo_NaturalSource self
  @returns   the result
**/
ApiSet Taxo_NaturalSource_GetMolecules(Taxo_NaturalSource self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolecules");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'getMolecules'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'getMolecules' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Taxonomy.NaturalSource.ncbiTaxonomyId

The ID for 
the NCBI taxonomy node.
  @param  Taxo_NaturalSource self
  @returns   the result
**/
ApiString Taxo_NaturalSource_GetNcbiTaxonomyId(Taxo_NaturalSource self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNcbiTaxonomyId");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'getNcbiTaxonomyId'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'getNcbiTaxonomyId' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Taxonomy.NaturalSource.organ

Source Organ.
  @param  Taxo_NaturalSource self
  @returns   the result
**/
ApiString Taxo_NaturalSource_GetOrgan(Taxo_NaturalSource self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getOrgan");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'getOrgan'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'getOrgan' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Taxonomy.NaturalSource.organelle

Organelle from 
which molecule is derived.
  @param  Taxo_NaturalSource self
  @returns   the result
**/
ApiString Taxo_NaturalSource_GetOrganelle(Taxo_NaturalSource self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getOrganelle");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'getOrganelle'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'getOrganelle' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Taxonomy.NaturalSource.organismAcronym

The organism 
acronym.
  @param  Taxo_NaturalSource self
  @returns   the result
**/
ApiString Taxo_NaturalSource_GetOrganismAcronym(Taxo_NaturalSource self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getOrganismAcronym");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'getOrganismAcronym'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'getOrganismAcronym' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Taxonomy.NaturalSource.organismName

Common name of 
organism.
  @param  Taxo_NaturalSource self
  @returns   the result
**/
ApiString Taxo_NaturalSource_GetOrganismName(Taxo_NaturalSource self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getOrganismName");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'getOrganismName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'getOrganismName' is not callable");
  
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
  @param  Taxo_NaturalSource self
  @returns   the result
**/
ApiString Taxo_NaturalSource_GetPackageName(Taxo_NaturalSource self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'getPackageName' is not callable");
  
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
  @param  Taxo_NaturalSource self
  @returns   the result
**/
ApiString Taxo_NaturalSource_GetPackageShortName(Taxo_NaturalSource self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Taxonomy.NaturalSource.parent

link to parent object 
- synonym for taxonomy
  @param  Taxo_NaturalSource self
  @returns   the result
**/
Taxo_Taxonomy Taxo_NaturalSource_GetParent(Taxo_NaturalSource self)
{
  
  Taxo_Taxonomy obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Taxonomy.NaturalSource.plasmid

Plasmid name, if 
molecule is (part of) a plasmid.
  @param  Taxo_NaturalSource self
  @returns   the result
**/
ApiString Taxo_NaturalSource_GetPlasmid(Taxo_NaturalSource self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPlasmid");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'getPlasmid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'getPlasmid' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Taxonomy.NaturalSource.plasmidDetails

N/A
  @param  Taxo_NaturalSource self
  @returns   the result
**/
ApiString Taxo_NaturalSource_GetPlasmidDetails(Taxo_NaturalSource self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPlasmidDetails");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'getPlasmidDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'getPlasmidDetails' is not callable");
  
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
  @param  Taxo_NaturalSource self
  @returns   the result
**/
ApiString Taxo_NaturalSource_GetQualifiedName(Taxo_NaturalSource self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'getQualifiedName' is not callable");
  
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
  @param  Taxo_NaturalSource self
  @returns   the result
**/
Impl_MemopsRoot Taxo_NaturalSource_GetRoot(Taxo_NaturalSource self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Taxonomy.NaturalSource.scientificName

The NCBI 
scientific name. (= genius + species).
This should really be a derived 
attribute!
  @param  Taxo_NaturalSource self
  @returns   the result
**/
ApiString Taxo_NaturalSource_GetScientificName(Taxo_NaturalSource self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getScientificName");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'getScientificName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'getScientificName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Taxonomy.NaturalSource.secretion

Secretion from 
which molecule is derived.
  @param  Taxo_NaturalSource self
  @returns   the result
**/
ApiString Taxo_NaturalSource_GetSecretion(Taxo_NaturalSource self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSecretion");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'getSecretion'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'getSecretion' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Taxonomy.NaturalSource.serial

The serial number is 
the key for class NaturalSource and together with the parent object 
serves as a unique identifier for the NaturalSource.
Serial numbers are 
generated by the API. Serial numbers of deleted objects are not reused.
  @param  Taxo_NaturalSource self
  @returns   the result
**/
ApiInteger Taxo_NaturalSource_GetSerial(Taxo_NaturalSource self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'getSerial' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Taxonomy.NaturalSource.species

Organism species.
  @param  Taxo_NaturalSource self
  @returns   the result
**/
ApiString Taxo_NaturalSource_GetSpecies(Taxo_NaturalSource self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSpecies");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'getSpecies'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'getSpecies' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Taxonomy.NaturalSource.strain

Organism strain.
  @param  Taxo_NaturalSource self
  @returns   the result
**/
ApiString Taxo_NaturalSource_GetStrain(Taxo_NaturalSource self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getStrain");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'getStrain'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'getStrain' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Taxonomy.NaturalSource.subVariant

Organism 
sub-variant.
  @param  Taxo_NaturalSource self
  @returns   the result
**/
ApiString Taxo_NaturalSource_GetSubVariant(Taxo_NaturalSource self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSubVariant");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'getSubVariant'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'getSubVariant' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Taxonomy.NaturalSource.targets

Targets 
corresponding to this natural source.
  @param  Taxo_NaturalSource self
  @returns   the result
**/
ApiSet Taxo_NaturalSource_GetTargets(Taxo_NaturalSource self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTargets");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'getTargets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'getTargets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Taxonomy.NaturalSource.taxonomy

parent link
  @param  Taxo_NaturalSource self
  @returns   the result
**/
Taxo_Taxonomy Taxo_NaturalSource_GetTaxonomy(Taxo_NaturalSource self)
{
  
  Taxo_Taxonomy obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTaxonomy");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'getTaxonomy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'getTaxonomy' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Taxonomy.NaturalSource.tissue

Source tissue.
  @param  Taxo_NaturalSource self
  @returns   the result
**/
ApiString Taxo_NaturalSource_GetTissue(Taxo_NaturalSource self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTissue");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'getTissue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'getTissue' is not callable");
  
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
  @param  Taxo_NaturalSource self
  @returns   the result
**/
Impl_TopObject Taxo_NaturalSource_GetTopObject(Taxo_NaturalSource self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Taxonomy.NaturalSource.variant

Organism variant.
  @param  Taxo_NaturalSource self
  @returns   the result
**/
ApiString Taxo_NaturalSource_GetVariant(Taxo_NaturalSource self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getVariant");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'getVariant'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'getVariant' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.general.Taxonomy.NaturalSource
  @param  Taxo_Taxonomy parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Taxo_NaturalSource Taxo_NaturalSource_Init(Taxo_Taxonomy parent, ApiMap attrlinks)
{
  
  return Taxo_Taxonomy_NewNaturalSource(parent, attrlinks);
}

/**
  Constructor for ccp.general.Taxonomy.NaturalSource
  @param  Taxo_Taxonomy parent
  @param  char * organismName
  @returns  the new object
**/
Taxo_NaturalSource Taxo_NaturalSource_Init_reqd(Taxo_Taxonomy parent, char * organismName)
{
  
  Taxo_NaturalSource  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__organismName = ApiString_New(organismName);

  PyDict_SetItemString(attrlinks, "organismName", api__organismName);
  
  obj = Taxo_NaturalSource_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__organismName);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Taxo_NaturalSource self
  @param  Impl_ApplicationData value
**/
void *Taxo_NaturalSource_RemoveApplicationData(Taxo_NaturalSource self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.general.Taxonomy.NaturalSource.entries

Bmrb Entries for 
NaturalSource
  @param  Taxo_NaturalSource self
  @param  Entr_Entry value
**/
void *Taxo_NaturalSource_RemoveEntry(Taxo_NaturalSource self, Entr_Entry value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeEntry");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'removeEntry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'removeEntry' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.general.Taxonomy.NaturalSource.expEntries

Nmr Entries 
that have this as their experimental source
  @param  Taxo_NaturalSource self
  @param  Entr_Entry value
**/
void *Taxo_NaturalSource_RemoveExpEntry(Taxo_NaturalSource self, Entr_Entry value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeExpEntry");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'removeExpEntry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'removeExpEntry' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.general.Taxonomy.NaturalSource.molSeqFragments

MOlecule 
fragments arising from NaturalSource
  @param  Taxo_NaturalSource self
  @param  Mole_MolSeqFragment value
**/
void *Taxo_NaturalSource_RemoveMolSeqFragment(Taxo_NaturalSource self, Mole_MolSeqFragment value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeMolSeqFragment");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'removeMolSeqFragment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'removeMolSeqFragment' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.general.Taxonomy.NaturalSource.molecules

Molecules from 
natural source.
  @param  Taxo_NaturalSource self
  @param  Mole_Molecule value
**/
void *Taxo_NaturalSource_RemoveMolecule(Taxo_NaturalSource self, Mole_Molecule value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeMolecule");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'removeMolecule'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'removeMolecule' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.general.Taxonomy.NaturalSource.targets

Targets 
corresponding to this natural source.
  @param  Taxo_NaturalSource self
  @param  Targ_Target value
**/
void *Taxo_NaturalSource_RemoveTarget(Taxo_NaturalSource self, Targ_Target value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeTarget");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'removeTarget'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'removeTarget' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.general.Taxonomy.NaturalSource
  @param  Taxo_NaturalSource self
  @param  ApiString name
  @param  ApiObject value
**/
void *Taxo_NaturalSource_Set(Taxo_NaturalSource self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Taxo_NaturalSource self
  @param  Acco_AccessObject value
**/
void *Taxo_NaturalSource_SetAccess(Taxo_NaturalSource self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'setAccess' is not callable");
  
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
  @param  Taxo_NaturalSource self
  @param  ApiList values
**/
void *Taxo_NaturalSource_SetApplicationData(Taxo_NaturalSource self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Taxonomy.NaturalSource.atccNumber

ATCC number of 
cell line. Should be removed?
  @param  Taxo_NaturalSource self
  @param  ApiString value
**/
void *Taxo_NaturalSource_SetAtccNumber(Taxo_NaturalSource self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAtccNumber");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'setAtccNumber'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'setAtccNumber' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Taxonomy.NaturalSource.cellLine

Source cell line.
  @param  Taxo_NaturalSource self
  @param  ApiString value
**/
void *Taxo_NaturalSource_SetCellLine(Taxo_NaturalSource self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCellLine");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'setCellLine'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'setCellLine' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Taxonomy.NaturalSource.cellLocation

The source cell 
location.
  @param  Taxo_NaturalSource self
  @param  ApiString value
**/
void *Taxo_NaturalSource_SetCellLocation(Taxo_NaturalSource self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCellLocation");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'setCellLocation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'setCellLocation' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Taxonomy.NaturalSource.cellType

Source cell type.
  @param  Taxo_NaturalSource self
  @param  ApiString value
**/
void *Taxo_NaturalSource_SetCellType(Taxo_NaturalSource self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCellType");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'setCellType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'setCellType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Taxonomy.NaturalSource.details

Details, comments, 
notes about natural source.
  @param  Taxo_NaturalSource self
  @param  ApiString value
**/
void *Taxo_NaturalSource_SetDetails(Taxo_NaturalSource self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Taxonomy.NaturalSource.entries

Bmrb Entries for 
NaturalSource
  @param  Taxo_NaturalSource self
  @param  ApiSet values
**/
void *Taxo_NaturalSource_SetEntries(Taxo_NaturalSource self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setEntries");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'setEntries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'setEntries' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Taxonomy.NaturalSource.expEntries

Nmr Entries that 
have this as their experimental source
  @param  Taxo_NaturalSource self
  @param  ApiSet values
**/
void *Taxo_NaturalSource_SetExpEntries(Taxo_NaturalSource self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setExpEntries");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'setExpEntries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'setExpEntries' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Taxonomy.NaturalSource.fraction

Is this the same as 
tissueFraction (which would then be a better name)?
  @param  Taxo_NaturalSource self
  @param  ApiString value
**/
void *Taxo_NaturalSource_SetFraction(Taxo_NaturalSource self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setFraction");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'setFraction'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'setFraction' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Taxonomy.NaturalSource.geneMnemonic

Gene Mnemonic.
  @param  Taxo_NaturalSource self
  @param  ApiString value
**/
void *Taxo_NaturalSource_SetGeneMnemonic(Taxo_NaturalSource self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setGeneMnemonic");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'setGeneMnemonic'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'setGeneMnemonic' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Taxonomy.NaturalSource.genus

Organism genus.
  @param  Taxo_NaturalSource self
  @param  ApiString value
**/
void *Taxo_NaturalSource_SetGenus(Taxo_NaturalSource self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setGenus");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'setGenus'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'setGenus' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Taxonomy.NaturalSource.ictvCode

The code for the 
International Comitee on Taxonomy of Viruses.
  @param  Taxo_NaturalSource self
  @param  ApiString value
**/
void *Taxo_NaturalSource_SetIctvCode(Taxo_NaturalSource self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIctvCode");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'setIctvCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'setIctvCode' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Taxonomy.NaturalSource.molSeqFragments

MOlecule 
fragments arising from NaturalSource
  @param  Taxo_NaturalSource self
  @param  ApiSet values
**/
void *Taxo_NaturalSource_SetMolSeqFragments(Taxo_NaturalSource self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMolSeqFragments");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'setMolSeqFragments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'setMolSeqFragments' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Taxonomy.NaturalSource.molecules

Molecules from 
natural source.
  @param  Taxo_NaturalSource self
  @param  ApiSet values
**/
void *Taxo_NaturalSource_SetMolecules(Taxo_NaturalSource self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMolecules");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'setMolecules'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'setMolecules' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Taxonomy.NaturalSource.ncbiTaxonomyId

The ID for 
the NCBI taxonomy node.
  @param  Taxo_NaturalSource self
  @param  ApiString value
**/
void *Taxo_NaturalSource_SetNcbiTaxonomyId(Taxo_NaturalSource self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNcbiTaxonomyId");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'setNcbiTaxonomyId'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'setNcbiTaxonomyId' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Taxonomy.NaturalSource.organ

Source Organ.
  @param  Taxo_NaturalSource self
  @param  ApiString value
**/
void *Taxo_NaturalSource_SetOrgan(Taxo_NaturalSource self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setOrgan");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'setOrgan'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'setOrgan' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Taxonomy.NaturalSource.organelle

Organelle from 
which molecule is derived.
  @param  Taxo_NaturalSource self
  @param  ApiString value
**/
void *Taxo_NaturalSource_SetOrganelle(Taxo_NaturalSource self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setOrganelle");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'setOrganelle'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'setOrganelle' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Taxonomy.NaturalSource.organismAcronym

The organism 
acronym.
  @param  Taxo_NaturalSource self
  @param  ApiString value
**/
void *Taxo_NaturalSource_SetOrganismAcronym(Taxo_NaturalSource self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setOrganismAcronym");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'setOrganismAcronym'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'setOrganismAcronym' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Taxonomy.NaturalSource.organismName

Common name of 
organism.
  @param  Taxo_NaturalSource self
  @param  ApiString value
**/
void *Taxo_NaturalSource_SetOrganismName(Taxo_NaturalSource self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setOrganismName");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'setOrganismName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'setOrganismName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Taxonomy.NaturalSource.plasmid

Plasmid name, if 
molecule is (part of) a plasmid.
  @param  Taxo_NaturalSource self
  @param  ApiString value
**/
void *Taxo_NaturalSource_SetPlasmid(Taxo_NaturalSource self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPlasmid");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'setPlasmid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'setPlasmid' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Taxonomy.NaturalSource.plasmidDetails

N/A
  @param  Taxo_NaturalSource self
  @param  ApiString value
**/
void *Taxo_NaturalSource_SetPlasmidDetails(Taxo_NaturalSource self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPlasmidDetails");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'setPlasmidDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'setPlasmidDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Taxonomy.NaturalSource.scientificName

The NCBI 
scientific name. (= genius + species).
This should really be a derived 
attribute!
  @param  Taxo_NaturalSource self
  @param  ApiString value
**/
void *Taxo_NaturalSource_SetScientificName(Taxo_NaturalSource self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setScientificName");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'setScientificName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'setScientificName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Taxonomy.NaturalSource.secretion

Secretion from 
which molecule is derived.
  @param  Taxo_NaturalSource self
  @param  ApiString value
**/
void *Taxo_NaturalSource_SetSecretion(Taxo_NaturalSource self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSecretion");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'setSecretion'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'setSecretion' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Taxonomy.NaturalSource.serial

The serial number is 
the key for class NaturalSource and together with the parent object 
serves as a unique identifier for the NaturalSource.
Serial numbers are 
generated by the API. Serial numbers of deleted objects are not reused.
  @param  Taxo_NaturalSource self
  @param  ApiInteger value
**/
void *Taxo_NaturalSource_SetSerial(Taxo_NaturalSource self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Taxonomy.NaturalSource.species

Organism species.
  @param  Taxo_NaturalSource self
  @param  ApiString value
**/
void *Taxo_NaturalSource_SetSpecies(Taxo_NaturalSource self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSpecies");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'setSpecies'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'setSpecies' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Taxonomy.NaturalSource.strain

Organism strain.
  @param  Taxo_NaturalSource self
  @param  ApiString value
**/
void *Taxo_NaturalSource_SetStrain(Taxo_NaturalSource self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setStrain");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'setStrain'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'setStrain' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Taxonomy.NaturalSource.subVariant

Organism 
sub-variant.
  @param  Taxo_NaturalSource self
  @param  ApiString value
**/
void *Taxo_NaturalSource_SetSubVariant(Taxo_NaturalSource self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSubVariant");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'setSubVariant'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'setSubVariant' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Taxonomy.NaturalSource.targets

Targets 
corresponding to this natural source.
  @param  Taxo_NaturalSource self
  @param  ApiSet values
**/
void *Taxo_NaturalSource_SetTargets(Taxo_NaturalSource self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setTargets");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'setTargets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'setTargets' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Taxonomy.NaturalSource.tissue

Source tissue.
  @param  Taxo_NaturalSource self
  @param  ApiString value
**/
void *Taxo_NaturalSource_SetTissue(Taxo_NaturalSource self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setTissue");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'setTissue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'setTissue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Taxonomy.NaturalSource.variant

Organism variant.
  @param  Taxo_NaturalSource self
  @param  ApiString value
**/
void *Taxo_NaturalSource_SetVariant(Taxo_NaturalSource self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setVariant");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'setVariant'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'setVariant' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.general.Taxonomy.NaturalSource.entries

Bmrb Entries for 
NaturalSource
  @param  Taxo_NaturalSource self
  @returns   the result
**/
ApiList Taxo_NaturalSource_SortedEntries(Taxo_NaturalSource self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedEntries");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'sortedEntries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'sortedEntries' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.general.Taxonomy.NaturalSource.expEntries

Nmr Entries 
that have this as their experimental source
  @param  Taxo_NaturalSource self
  @returns   the result
**/
ApiList Taxo_NaturalSource_SortedExpEntries(Taxo_NaturalSource self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedExpEntries");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'sortedExpEntries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'sortedExpEntries' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.general.Taxonomy.NaturalSource.molSeqFragments

MOlecule 
fragments arising from NaturalSource
  @param  Taxo_NaturalSource self
  @returns   the result
**/
ApiList Taxo_NaturalSource_SortedMolSeqFragments(Taxo_NaturalSource self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedMolSeqFragments");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'sortedMolSeqFragments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'sortedMolSeqFragments' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.general.Taxonomy.NaturalSource.molecules

Molecules from 
natural source.
  @param  Taxo_NaturalSource self
  @returns   the result
**/
ApiList Taxo_NaturalSource_SortedMolecules(Taxo_NaturalSource self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedMolecules");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'sortedMolecules'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'sortedMolecules' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.general.Taxonomy.NaturalSource.targets

Targets 
corresponding to this natural source.
  @param  Taxo_NaturalSource self
  @returns   the result
**/
ApiList Taxo_NaturalSource_SortedTargets(Taxo_NaturalSource self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedTargets");
  
  if (!method)
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: cannot find method 'sortedTargets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Taxonomy.NaturalSource: method 'sortedTargets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
