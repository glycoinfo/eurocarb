
#include "ccp.h"

/*
  Atom in a specific location in a specific molecule in specific surroundings (Chain).
  
  Atoms can *not* be deleted while they are linked to FixedAtomSets. If this is desired the fixedAtomSets link must be cleared first.
*/

/* package ccp.api.molecule.MolSystem */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Atom self
  @param  Impl_ApplicationData value
**/
void *Mols_Atom_AddApplicationData(Mols_Atom self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Atom: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Atom: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.molecule.MolSystem.Atom.chainStateSets

ChainStateSets 
involving Atom.
  @param  Mols_Atom self
  @param  Nmr_ChainStateSet value
**/
void *Mols_Atom_AddChainStateSet(Mols_Atom self, Nmr_ChainStateSet value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addChainStateSet");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Atom: cannot find method 'addChainStateSet'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Atom: method 'addChainStateSet' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.molecule.MolSystem.Atom.fixedAtomSets

FixedAtomSets (part 
of Nmr Assignment for Nmr Constraint Lists) involving Atom
  @param  Mols_Atom self
  @param  Nmrc_FixedAtomSet value
**/
void *Mols_Atom_AddFixedAtomSet(Mols_Atom self, Nmrc_FixedAtomSet value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addFixedAtomSet");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Atom: cannot find method 'addFixedAtomSet'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Atom: method 'addFixedAtomSet' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.molecule.MolSystem.Atom
  @param  Mols_Atom self
  @param  ApiBoolean complete
**/
void *Mols_Atom_CheckAllValid(Mols_Atom self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Atom: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Atom: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.molecule.MolSystem.Atom
  @param  Mols_Atom self
  @param  ApiBoolean complete
**/
void *Mols_Atom_CheckValid(Mols_Atom self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Atom: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Atom: method 'checkValid' is not callable");
  
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
  @param  Mols_Atom self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Mols_Atom_FindAllApplicationData(Mols_Atom self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Atom: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Atom: method 'findAllApplicationData' is not callable");
  
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
  @param  Mols_Atom self
  @returns  all value that satisfy the conditions 
**/
ApiList Mols_Atom_FindAllApplicationData_keyval0(Mols_Atom self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mols_Atom_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Atom self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Mols_Atom_FindAllApplicationData_keyval1(Mols_Atom self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mols_Atom_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Atom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Mols_Atom_FindAllApplicationData_keyval2(Mols_Atom self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mols_Atom_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Atom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Mols_Atom_FindAllApplicationData_keyval3(Mols_Atom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mols_Atom_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Atom self
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
ApiList Mols_Atom_FindAllApplicationData_keyval4(Mols_Atom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mols_Atom_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Atom.chainStateSets

ChainStateSets 
involving Atom.
  @param  Mols_Atom self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Atom_FindAllChainStateSets(Mols_Atom self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChainStateSets");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Atom: cannot find method 'findAllChainStateSets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Atom: method 'findAllChainStateSets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Atom.chainStateSets

ChainStateSets 
involving Atom.
  @param  Mols_Atom self
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Atom_FindAllChainStateSets_keyval0(Mols_Atom self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mols_Atom_FindAllChainStateSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Atom.chainStateSets

ChainStateSets 
involving Atom.
  @param  Mols_Atom self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Atom_FindAllChainStateSets_keyval1(Mols_Atom self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mols_Atom_FindAllChainStateSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Atom.chainStateSets

ChainStateSets 
involving Atom.
  @param  Mols_Atom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Atom_FindAllChainStateSets_keyval2(Mols_Atom self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mols_Atom_FindAllChainStateSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Atom.chainStateSets

ChainStateSets 
involving Atom.
  @param  Mols_Atom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Atom_FindAllChainStateSets_keyval3(Mols_Atom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mols_Atom_FindAllChainStateSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Atom.chainStateSets

ChainStateSets 
involving Atom.
  @param  Mols_Atom self
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
ApiSet Mols_Atom_FindAllChainStateSets_keyval4(Mols_Atom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mols_Atom_FindAllChainStateSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Atom.fixedAtomSets

FixedAtomSets 
(part of Nmr Assignment for Nmr Constraint Lists) involving Atom
  @param  Mols_Atom self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Atom_FindAllFixedAtomSets(Mols_Atom self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllFixedAtomSets");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Atom: cannot find method 'findAllFixedAtomSets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Atom: method 'findAllFixedAtomSets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Atom.fixedAtomSets

FixedAtomSets 
(part of Nmr Assignment for Nmr Constraint Lists) involving Atom
  @param  Mols_Atom self
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Atom_FindAllFixedAtomSets_keyval0(Mols_Atom self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mols_Atom_FindAllFixedAtomSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Atom.fixedAtomSets

FixedAtomSets 
(part of Nmr Assignment for Nmr Constraint Lists) involving Atom
  @param  Mols_Atom self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Atom_FindAllFixedAtomSets_keyval1(Mols_Atom self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mols_Atom_FindAllFixedAtomSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Atom.fixedAtomSets

FixedAtomSets 
(part of Nmr Assignment for Nmr Constraint Lists) involving Atom
  @param  Mols_Atom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Atom_FindAllFixedAtomSets_keyval2(Mols_Atom self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mols_Atom_FindAllFixedAtomSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Atom.fixedAtomSets

FixedAtomSets 
(part of Nmr Assignment for Nmr Constraint Lists) involving Atom
  @param  Mols_Atom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Atom_FindAllFixedAtomSets_keyval3(Mols_Atom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mols_Atom_FindAllFixedAtomSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Atom.fixedAtomSets

FixedAtomSets 
(part of Nmr Assignment for Nmr Constraint Lists) involving Atom
  @param  Mols_Atom self
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
ApiSet Mols_Atom_FindAllFixedAtomSets_keyval4(Mols_Atom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mols_Atom_FindAllFixedAtomSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Atom.nonCovalentBonds

Non-covalent 
bonds in which the atom takes part.
  @param  Mols_Atom self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Atom_FindAllNonCovalentBonds(Mols_Atom self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllNonCovalentBonds");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Atom: cannot find method 'findAllNonCovalentBonds'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Atom: method 'findAllNonCovalentBonds' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Atom.nonCovalentBonds

Non-covalent 
bonds in which the atom takes part.
  @param  Mols_Atom self
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Atom_FindAllNonCovalentBonds_keyval0(Mols_Atom self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mols_Atom_FindAllNonCovalentBonds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Atom.nonCovalentBonds

Non-covalent 
bonds in which the atom takes part.
  @param  Mols_Atom self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Atom_FindAllNonCovalentBonds_keyval1(Mols_Atom self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mols_Atom_FindAllNonCovalentBonds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Atom.nonCovalentBonds

Non-covalent 
bonds in which the atom takes part.
  @param  Mols_Atom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Atom_FindAllNonCovalentBonds_keyval2(Mols_Atom self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mols_Atom_FindAllNonCovalentBonds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Atom.nonCovalentBonds

Non-covalent 
bonds in which the atom takes part.
  @param  Mols_Atom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Atom_FindAllNonCovalentBonds_keyval3(Mols_Atom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mols_Atom_FindAllNonCovalentBonds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Atom.nonCovalentBonds

Non-covalent 
bonds in which the atom takes part.
  @param  Mols_Atom self
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
ApiSet Mols_Atom_FindAllNonCovalentBonds_keyval4(Mols_Atom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mols_Atom_FindAllNonCovalentBonds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Atom self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Mols_Atom_FindFirstApplicationData(Mols_Atom self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Atom: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Atom: method 'findFirstApplicationData' is not callable");
  
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
  @param  Mols_Atom self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Mols_Atom_FindFirstApplicationData_keyval0(Mols_Atom self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mols_Atom_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Atom self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Mols_Atom_FindFirstApplicationData_keyval1(Mols_Atom self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mols_Atom_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Atom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Mols_Atom_FindFirstApplicationData_keyval2(Mols_Atom self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mols_Atom_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Atom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Mols_Atom_FindFirstApplicationData_keyval3(Mols_Atom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mols_Atom_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Atom self
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
Impl_ApplicationData Mols_Atom_FindFirstApplicationData_keyval4(Mols_Atom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mols_Atom_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.Atom.chainStateSets

ChainStateSets 
involving Atom.
  @param  Mols_Atom self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_ChainStateSet Mols_Atom_FindFirstChainStateSet(Mols_Atom self, ApiMap conditions)
{
  
  Nmr_ChainStateSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChainStateSet");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Atom: cannot find method 'findFirstChainStateSet'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Atom: method 'findFirstChainStateSet' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.Atom.chainStateSets

ChainStateSets 
involving Atom.
  @param  Mols_Atom self
  @returns  the first value that satisfies the conditions 
**/
Nmr_ChainStateSet Mols_Atom_FindFirstChainStateSet_keyval0(Mols_Atom self)
{
  
  Nmr_ChainStateSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mols_Atom_FindFirstChainStateSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.Atom.chainStateSets

ChainStateSets 
involving Atom.
  @param  Mols_Atom self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_ChainStateSet Mols_Atom_FindFirstChainStateSet_keyval1(Mols_Atom self, char * key, ApiObject value)
{
  
  Nmr_ChainStateSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mols_Atom_FindFirstChainStateSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.Atom.chainStateSets

ChainStateSets 
involving Atom.
  @param  Mols_Atom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_ChainStateSet Mols_Atom_FindFirstChainStateSet_keyval2(Mols_Atom self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_ChainStateSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mols_Atom_FindFirstChainStateSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.Atom.chainStateSets

ChainStateSets 
involving Atom.
  @param  Mols_Atom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_ChainStateSet Mols_Atom_FindFirstChainStateSet_keyval3(Mols_Atom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_ChainStateSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mols_Atom_FindFirstChainStateSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.Atom.chainStateSets

ChainStateSets 
involving Atom.
  @param  Mols_Atom self
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
Nmr_ChainStateSet Mols_Atom_FindFirstChainStateSet_keyval4(Mols_Atom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_ChainStateSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mols_Atom_FindFirstChainStateSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.Atom.fixedAtomSets

FixedAtomSets 
(part of Nmr Assignment for Nmr Constraint Lists) involving Atom
  @param  Mols_Atom self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmrc_FixedAtomSet Mols_Atom_FindFirstFixedAtomSet(Mols_Atom self, ApiMap conditions)
{
  
  Nmrc_FixedAtomSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstFixedAtomSet");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Atom: cannot find method 'findFirstFixedAtomSet'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Atom: method 'findFirstFixedAtomSet' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.Atom.fixedAtomSets

FixedAtomSets 
(part of Nmr Assignment for Nmr Constraint Lists) involving Atom
  @param  Mols_Atom self
  @returns  the first value that satisfies the conditions 
**/
Nmrc_FixedAtomSet Mols_Atom_FindFirstFixedAtomSet_keyval0(Mols_Atom self)
{
  
  Nmrc_FixedAtomSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mols_Atom_FindFirstFixedAtomSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.Atom.fixedAtomSets

FixedAtomSets 
(part of Nmr Assignment for Nmr Constraint Lists) involving Atom
  @param  Mols_Atom self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmrc_FixedAtomSet Mols_Atom_FindFirstFixedAtomSet_keyval1(Mols_Atom self, char * key, ApiObject value)
{
  
  Nmrc_FixedAtomSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mols_Atom_FindFirstFixedAtomSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.Atom.fixedAtomSets

FixedAtomSets 
(part of Nmr Assignment for Nmr Constraint Lists) involving Atom
  @param  Mols_Atom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmrc_FixedAtomSet Mols_Atom_FindFirstFixedAtomSet_keyval2(Mols_Atom self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmrc_FixedAtomSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mols_Atom_FindFirstFixedAtomSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.Atom.fixedAtomSets

FixedAtomSets 
(part of Nmr Assignment for Nmr Constraint Lists) involving Atom
  @param  Mols_Atom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmrc_FixedAtomSet Mols_Atom_FindFirstFixedAtomSet_keyval3(Mols_Atom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmrc_FixedAtomSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mols_Atom_FindFirstFixedAtomSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.Atom.fixedAtomSets

FixedAtomSets 
(part of Nmr Assignment for Nmr Constraint Lists) involving Atom
  @param  Mols_Atom self
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
Nmrc_FixedAtomSet Mols_Atom_FindFirstFixedAtomSet_keyval4(Mols_Atom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmrc_FixedAtomSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mols_Atom_FindFirstFixedAtomSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.Atom.nonCovalentBonds

Non-covalent 
bonds in which the atom takes part.
  @param  Mols_Atom self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Mols_NonCovalentBond Mols_Atom_FindFirstNonCovalentBond(Mols_Atom self, ApiMap conditions)
{
  
  Mols_NonCovalentBond obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstNonCovalentBond");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Atom: cannot find method 'findFirstNonCovalentBond'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Atom: method 'findFirstNonCovalentBond' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.Atom.nonCovalentBonds

Non-covalent 
bonds in which the atom takes part.
  @param  Mols_Atom self
  @returns  the first value that satisfies the conditions 
**/
Mols_NonCovalentBond Mols_Atom_FindFirstNonCovalentBond_keyval0(Mols_Atom self)
{
  
  Mols_NonCovalentBond  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mols_Atom_FindFirstNonCovalentBond(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.Atom.nonCovalentBonds

Non-covalent 
bonds in which the atom takes part.
  @param  Mols_Atom self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Mols_NonCovalentBond Mols_Atom_FindFirstNonCovalentBond_keyval1(Mols_Atom self, char * key, ApiObject value)
{
  
  Mols_NonCovalentBond  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mols_Atom_FindFirstNonCovalentBond(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.Atom.nonCovalentBonds

Non-covalent 
bonds in which the atom takes part.
  @param  Mols_Atom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Mols_NonCovalentBond Mols_Atom_FindFirstNonCovalentBond_keyval2(Mols_Atom self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Mols_NonCovalentBond  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mols_Atom_FindFirstNonCovalentBond(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.Atom.nonCovalentBonds

Non-covalent 
bonds in which the atom takes part.
  @param  Mols_Atom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Mols_NonCovalentBond Mols_Atom_FindFirstNonCovalentBond_keyval3(Mols_Atom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Mols_NonCovalentBond  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mols_Atom_FindFirstNonCovalentBond(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.Atom.nonCovalentBonds

Non-covalent 
bonds in which the atom takes part.
  @param  Mols_Atom self
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
Mols_NonCovalentBond Mols_Atom_FindFirstNonCovalentBond_keyval4(Mols_Atom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Mols_NonCovalentBond  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mols_Atom_FindFirstNonCovalentBond(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.molecule.MolSystem.Atom
  @param  Mols_Atom self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Mols_Atom_Get(Mols_Atom self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Mols_Atom self
  @returns   the result
**/
Acco_AccessObject Mols_Atom_GetAccess(Mols_Atom self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Atom: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Atom: method 'getAccess' is not callable");
  
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
  @param  Mols_Atom self
  @returns   the result
**/
ApiList Mols_Atom_GetApplicationData(Mols_Atom self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Atom: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Atom: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolSystem.Atom.atomSet

Set of atoms in fast 
exchange with Atom.
  @param  Mols_Atom self
  @returns   the result
**/
Nmr_AtomSet Mols_Atom_GetAtomSet(Mols_Atom self)
{
  
  Nmr_AtomSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAtomSet");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Atom: cannot find method 'getAtomSet'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Atom: method 'getAtomSet' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.molecule.MolSystem.Atom
  @param  Mols_Atom self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Mols_Atom Mols_Atom_GetByKey(Mols_Atom self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Mols_Atom obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Atom: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Atom: method 'getByKey' is not callable");
  
  args = PyTuple_Pack(2, startObj, fullKey);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolSystem.Atom.chainStateSets

ChainStateSets 
involving Atom.
  @param  Mols_Atom self
  @returns   the result
**/
ApiSet Mols_Atom_GetChainStateSets(Mols_Atom self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChainStateSets");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Atom: cannot find method 'getChainStateSets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Atom: method 'getChainStateSets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get function for derived link to ChemAtom
  @param  Mols_Atom self
  @returns   the result
**/
Chem_ChemAtom Mols_Atom_GetChemAtom(Mols_Atom self)
{
  
  Chem_ChemAtom obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemAtom");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Atom: cannot find method 'getChemAtom'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Atom: method 'getChemAtom' is not callable");
  
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
  @param  Mols_Atom self
  @returns   the result
**/
ApiString Mols_Atom_GetClassName(Mols_Atom self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Atom: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Atom: method 'getClassName' is not callable");
  
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
  @param  Mols_Atom self
  @returns   the result
**/
ApiList Mols_Atom_GetFieldNames(Mols_Atom self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Atom: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Atom: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolSystem.Atom.fixedAtomSets

FixedAtomSets (part 
of Nmr Assignment for Nmr Constraint Lists) involving Atom
  @param  Mols_Atom self
  @returns   the result
**/
ApiSet Mols_Atom_GetFixedAtomSets(Mols_Atom self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFixedAtomSets");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Atom: cannot find method 'getFixedAtomSets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Atom: method 'getFixedAtomSets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.molecule.MolSystem.Atom
  @param  Mols_Atom self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Mols_Atom_GetFullKey(Mols_Atom self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Atom: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Atom: method 'getFullKey' is not callable");
  
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
  @param  Mols_Atom self
  @returns   the result
**/
ApiBoolean Mols_Atom_GetInConstructor(Mols_Atom self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Atom: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Atom: method 'getInConstructor' is not callable");
  
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
  @param  Mols_Atom self
  @returns   the result
**/
ApiBoolean Mols_Atom_GetIsDeleted(Mols_Atom self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Atom: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Atom: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.molecule.MolSystem.Atom
  @param  Mols_Atom self
  @returns  Local object key
**/
ApiObject Mols_Atom_GetLocalKey(Mols_Atom self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Atom: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Atom: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolSystem.Atom.name

name of Atom.
  @param  Mols_Atom self
  @returns   the result
**/
ApiString Mols_Atom_GetName(Mols_Atom self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Atom: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Atom: method 'getName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolSystem.Atom.nonCovalentBonds

Non-covalent bonds 
in which the atom takes part.
  @param  Mols_Atom self
  @returns   the result
**/
ApiSet Mols_Atom_GetNonCovalentBonds(Mols_Atom self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNonCovalentBonds");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Atom: cannot find method 'getNonCovalentBonds'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Atom: method 'getNonCovalentBonds' is not callable");
  
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
  @param  Mols_Atom self
  @returns   the result
**/
ApiString Mols_Atom_GetPackageName(Mols_Atom self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Atom: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Atom: method 'getPackageName' is not callable");
  
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
  @param  Mols_Atom self
  @returns   the result
**/
ApiString Mols_Atom_GetPackageShortName(Mols_Atom self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Atom: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Atom: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolSystem.Atom.parent

link to parent object - 
synonym for residue
  @param  Mols_Atom self
  @returns   the result
**/
Mols_Residue Mols_Atom_GetParent(Mols_Atom self)
{
  
  Mols_Residue obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Atom: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Atom: method 'getParent' is not callable");
  
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
  @param  Mols_Atom self
  @returns   the result
**/
ApiString Mols_Atom_GetQualifiedName(Mols_Atom self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Atom: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Atom: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolSystem.Atom.residue

parent link
  @param  Mols_Atom self
  @returns   the result
**/
Mols_Residue Mols_Atom_GetResidue(Mols_Atom self)
{
  
  Mols_Residue obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getResidue");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Atom: cannot find method 'getResidue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Atom: method 'getResidue' is not callable");
  
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
  @param  Mols_Atom self
  @returns   the result
**/
Impl_MemopsRoot Mols_Atom_GetRoot(Mols_Atom self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Atom: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Atom: method 'getRoot' is not callable");
  
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
  @param  Mols_Atom self
  @returns   the result
**/
Impl_TopObject Mols_Atom_GetTopObject(Mols_Atom self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Atom: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Atom: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.molecule.MolSystem.Atom
  @param  Mols_Residue parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Mols_Atom Mols_Atom_Init(Mols_Residue parent, ApiMap attrlinks)
{
  
  return Mols_Residue_NewAtom(parent, attrlinks);
}

/**
  Constructor for ccp.molecule.MolSystem.Atom
  @param  Mols_Residue parent
  @param  char * name
  @returns  the new object
**/
Mols_Atom Mols_Atom_Init_reqd(Mols_Residue parent, char * name)
{
  
  Mols_Atom  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Mols_Atom_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Atom self
  @param  Impl_ApplicationData value
**/
void *Mols_Atom_RemoveApplicationData(Mols_Atom self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Atom: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Atom: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.molecule.MolSystem.Atom.chainStateSets

ChainStateSets 
involving Atom.
  @param  Mols_Atom self
  @param  Nmr_ChainStateSet value
**/
void *Mols_Atom_RemoveChainStateSet(Mols_Atom self, Nmr_ChainStateSet value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeChainStateSet");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Atom: cannot find method 'removeChainStateSet'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Atom: method 'removeChainStateSet' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.molecule.MolSystem.Atom.fixedAtomSets

FixedAtomSets 
(part of Nmr Assignment for Nmr Constraint Lists) involving Atom
  @param  Mols_Atom self
  @param  Nmrc_FixedAtomSet value
**/
void *Mols_Atom_RemoveFixedAtomSet(Mols_Atom self, Nmrc_FixedAtomSet value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeFixedAtomSet");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Atom: cannot find method 'removeFixedAtomSet'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Atom: method 'removeFixedAtomSet' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.molecule.MolSystem.Atom
  @param  Mols_Atom self
  @param  ApiString name
  @param  ApiObject value
**/
void *Mols_Atom_Set(Mols_Atom self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Mols_Atom self
  @param  Acco_AccessObject value
**/
void *Mols_Atom_SetAccess(Mols_Atom self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Atom: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Atom: method 'setAccess' is not callable");
  
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
  @param  Mols_Atom self
  @param  ApiList values
**/
void *Mols_Atom_SetApplicationData(Mols_Atom self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Atom: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Atom: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.MolSystem.Atom.atomSet

Set of atoms in fast 
exchange with Atom.
  @param  Mols_Atom self
  @param  Nmr_AtomSet value
**/
void *Mols_Atom_SetAtomSet(Mols_Atom self, Nmr_AtomSet value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAtomSet");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Atom: cannot find method 'setAtomSet'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Atom: method 'setAtomSet' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.MolSystem.Atom.chainStateSets

ChainStateSets 
involving Atom.
  @param  Mols_Atom self
  @param  ApiSet values
**/
void *Mols_Atom_SetChainStateSets(Mols_Atom self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setChainStateSets");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Atom: cannot find method 'setChainStateSets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Atom: method 'setChainStateSets' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.MolSystem.Atom.fixedAtomSets

FixedAtomSets (part 
of Nmr Assignment for Nmr Constraint Lists) involving Atom
  @param  Mols_Atom self
  @param  ApiSet values
**/
void *Mols_Atom_SetFixedAtomSets(Mols_Atom self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setFixedAtomSets");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Atom: cannot find method 'setFixedAtomSets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Atom: method 'setFixedAtomSets' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.MolSystem.Atom.name

name of Atom.
  @param  Mols_Atom self
  @param  ApiString value
**/
void *Mols_Atom_SetName(Mols_Atom self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Atom: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Atom: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.MolSystem.Atom.nonCovalentBonds

Non-covalent bonds 
in which the atom takes part.
  @param  Mols_Atom self
  @param  ApiSet values
**/
void *Mols_Atom_SetNonCovalentBonds(Mols_Atom self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNonCovalentBonds");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Atom: cannot find method 'setNonCovalentBonds'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Atom: method 'setNonCovalentBonds' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.MolSystem.Atom.chainStateSets

ChainStateSets 
involving Atom.
  @param  Mols_Atom self
  @returns   the result
**/
ApiList Mols_Atom_SortedChainStateSets(Mols_Atom self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChainStateSets");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Atom: cannot find method 'sortedChainStateSets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Atom: method 'sortedChainStateSets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.MolSystem.Atom.fixedAtomSets

FixedAtomSets 
(part of Nmr Assignment for Nmr Constraint Lists) involving Atom
  @param  Mols_Atom self
  @returns   the result
**/
ApiList Mols_Atom_SortedFixedAtomSets(Mols_Atom self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedFixedAtomSets");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Atom: cannot find method 'sortedFixedAtomSets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Atom: method 'sortedFixedAtomSets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.MolSystem.Atom.nonCovalentBonds

Non-covalent 
bonds in which the atom takes part.
  @param  Mols_Atom self
  @returns   the result
**/
ApiList Mols_Atom_SortedNonCovalentBonds(Mols_Atom self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedNonCovalentBonds");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Atom: cannot find method 'sortedNonCovalentBonds'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Atom: method 'sortedNonCovalentBonds' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
