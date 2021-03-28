
#include "ccp.h"

/*
  A monomer part of a specific molecule in a specific environment (Chain)). 
*/

/* package ccp.api.molecule.MolSystem */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Residue self
  @param  Impl_ApplicationData value
**/
void *Mols_Residue_AddApplicationData(Mols_Residue self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.molecule.MolSystem.Residue.chainStateSets

ChainStateSets 
relevant for Residue
  @param  Mols_Residue self
  @param  Nmr_ChainStateSet value
**/
void *Mols_Residue_AddChainStateSet(Mols_Residue self, Nmr_ChainStateSet value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addChainStateSet");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'addChainStateSet'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'addChainStateSet' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for 
ccp.molecule.MolSystem.Residue.molSysResidueValidations

Validation 
results for Residue
  @param  Mols_Residue self
  @param  Vald_MolSysResidueValidation value
**/
void *Mols_Residue_AddMolSysResidueValidation(Mols_Residue self, Vald_MolSysResidueValidation value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addMolSysResidueValidation");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'addMolSysResidueValidation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'addMolSysResidueValidation' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.molecule.MolSystem.Residue.resonanceGroups

ResonanceGroups 
that are definitely assigned to this residue
  @param  Mols_Residue self
  @param  Nmr_ResonanceGroup value
**/
void *Mols_Residue_AddResonanceGroup(Mols_Residue self, Nmr_ResonanceGroup value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addResonanceGroup");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'addResonanceGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'addResonanceGroup' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.molecule.MolSystem.Residue
  @param  Mols_Residue self
  @param  ApiBoolean complete
**/
void *Mols_Residue_CheckAllValid(Mols_Residue self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.molecule.MolSystem.Residue
  @param  Mols_Residue self
  @param  ApiBoolean complete
**/
void *Mols_Residue_CheckValid(Mols_Residue self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'checkValid' is not callable");
  
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
  @param  Mols_Residue self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Mols_Residue_FindAllApplicationData(Mols_Residue self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'findAllApplicationData' is not callable");
  
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
  @param  Mols_Residue self
  @returns  all value that satisfy the conditions 
**/
ApiList Mols_Residue_FindAllApplicationData_keyval0(Mols_Residue self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mols_Residue_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Residue self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Mols_Residue_FindAllApplicationData_keyval1(Mols_Residue self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mols_Residue_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Mols_Residue_FindAllApplicationData_keyval2(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mols_Residue_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Mols_Residue_FindAllApplicationData_keyval3(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mols_Residue_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Residue self
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
ApiList Mols_Residue_FindAllApplicationData_keyval4(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mols_Residue_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Residue.atoms

child link
  @param  Mols_Residue self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Residue_FindAllAtoms(Mols_Residue self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllAtoms");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'findAllAtoms'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'findAllAtoms' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Residue.atoms

child link
  @param  Mols_Residue self
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Residue_FindAllAtoms_keyval0(Mols_Residue self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mols_Residue_FindAllAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Residue.atoms

child link
  @param  Mols_Residue self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Residue_FindAllAtoms_keyval1(Mols_Residue self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mols_Residue_FindAllAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Residue.atoms

child link
  @param  Mols_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Residue_FindAllAtoms_keyval2(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mols_Residue_FindAllAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Residue.atoms

child link
  @param  Mols_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Residue_FindAllAtoms_keyval3(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mols_Residue_FindAllAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Residue.atoms

child link
  @param  Mols_Residue self
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
ApiSet Mols_Residue_FindAllAtoms_keyval4(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mols_Residue_FindAllAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolSystem.Residue.chainStateSets

ChainStateSets relevant 
for Residue
  @param  Mols_Residue self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Residue_FindAllChainStateSets(Mols_Residue self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChainStateSets");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'findAllChainStateSets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'findAllChainStateSets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolSystem.Residue.chainStateSets

ChainStateSets relevant 
for Residue
  @param  Mols_Residue self
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Residue_FindAllChainStateSets_keyval0(Mols_Residue self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mols_Residue_FindAllChainStateSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolSystem.Residue.chainStateSets

ChainStateSets relevant 
for Residue
  @param  Mols_Residue self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Residue_FindAllChainStateSets_keyval1(Mols_Residue self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mols_Residue_FindAllChainStateSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolSystem.Residue.chainStateSets

ChainStateSets relevant 
for Residue
  @param  Mols_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Residue_FindAllChainStateSets_keyval2(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mols_Residue_FindAllChainStateSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolSystem.Residue.chainStateSets

ChainStateSets relevant 
for Residue
  @param  Mols_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Residue_FindAllChainStateSets_keyval3(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mols_Residue_FindAllChainStateSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolSystem.Residue.chainStateSets

ChainStateSets relevant 
for Residue
  @param  Mols_Residue self
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
ApiSet Mols_Residue_FindAllChainStateSets_keyval4(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mols_Residue_FindAllChainStateSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Residue.dangleResidues

DangleResidue 
with predicted angles
  @param  Mols_Residue self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Residue_FindAllDangleResidues(Mols_Residue self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllDangleResidues");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'findAllDangleResidues'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'findAllDangleResidues' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Residue.dangleResidues

DangleResidue 
with predicted angles
  @param  Mols_Residue self
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Residue_FindAllDangleResidues_keyval0(Mols_Residue self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mols_Residue_FindAllDangleResidues(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Residue.dangleResidues

DangleResidue 
with predicted angles
  @param  Mols_Residue self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Residue_FindAllDangleResidues_keyval1(Mols_Residue self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mols_Residue_FindAllDangleResidues(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Residue.dangleResidues

DangleResidue 
with predicted angles
  @param  Mols_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Residue_FindAllDangleResidues_keyval2(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mols_Residue_FindAllDangleResidues(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Residue.dangleResidues

DangleResidue 
with predicted angles
  @param  Mols_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Residue_FindAllDangleResidues_keyval3(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mols_Residue_FindAllDangleResidues(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Residue.dangleResidues

DangleResidue 
with predicted angles
  @param  Mols_Residue self
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
ApiSet Mols_Residue_FindAllDangleResidues_keyval4(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mols_Residue_FindAllDangleResidues(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolSystem.Residue.molSysResidueValidations

Validation 
results for Residue
  @param  Mols_Residue self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Residue_FindAllMolSysResidueValidations(Mols_Residue self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllMolSysResidueValidations");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'findAllMolSysResidueValidations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'findAllMolSysResidueValidations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolSystem.Residue.molSysResidueValidations

Validation 
results for Residue
  @param  Mols_Residue self
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Residue_FindAllMolSysResidueValidations_keyval0(Mols_Residue self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mols_Residue_FindAllMolSysResidueValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolSystem.Residue.molSysResidueValidations

Validation 
results for Residue
  @param  Mols_Residue self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Residue_FindAllMolSysResidueValidations_keyval1(Mols_Residue self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mols_Residue_FindAllMolSysResidueValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolSystem.Residue.molSysResidueValidations

Validation 
results for Residue
  @param  Mols_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Residue_FindAllMolSysResidueValidations_keyval2(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mols_Residue_FindAllMolSysResidueValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolSystem.Residue.molSysResidueValidations

Validation 
results for Residue
  @param  Mols_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Residue_FindAllMolSysResidueValidations_keyval3(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mols_Residue_FindAllMolSysResidueValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolSystem.Residue.molSysResidueValidations

Validation 
results for Residue
  @param  Mols_Residue self
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
ApiSet Mols_Residue_FindAllMolSysResidueValidations_keyval4(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mols_Residue_FindAllMolSysResidueValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Residue.molSystemLinkEnds

child link 
to class MolSystemLinkEnd
  @param  Mols_Residue self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Residue_FindAllMolSystemLinkEnds(Mols_Residue self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllMolSystemLinkEnds");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'findAllMolSystemLinkEnds'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'findAllMolSystemLinkEnds' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Residue.molSystemLinkEnds

child link 
to class MolSystemLinkEnd
  @param  Mols_Residue self
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Residue_FindAllMolSystemLinkEnds_keyval0(Mols_Residue self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mols_Residue_FindAllMolSystemLinkEnds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Residue.molSystemLinkEnds

child link 
to class MolSystemLinkEnd
  @param  Mols_Residue self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Residue_FindAllMolSystemLinkEnds_keyval1(Mols_Residue self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mols_Residue_FindAllMolSystemLinkEnds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Residue.molSystemLinkEnds

child link 
to class MolSystemLinkEnd
  @param  Mols_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Residue_FindAllMolSystemLinkEnds_keyval2(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mols_Residue_FindAllMolSystemLinkEnds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Residue.molSystemLinkEnds

child link 
to class MolSystemLinkEnd
  @param  Mols_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Residue_FindAllMolSystemLinkEnds_keyval3(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mols_Residue_FindAllMolSystemLinkEnds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Residue.molSystemLinkEnds

child link 
to class MolSystemLinkEnd
  @param  Mols_Residue self
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
ApiSet Mols_Residue_FindAllMolSystemLinkEnds_keyval4(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mols_Residue_FindAllMolSystemLinkEnds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Residue.residueProbs

ResidueProb 
describing ResonanceGroups with a probability of corresponding to this 
residue.
  @param  Mols_Residue self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Residue_FindAllResidueProbs(Mols_Residue self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllResidueProbs");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'findAllResidueProbs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'findAllResidueProbs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Residue.residueProbs

ResidueProb 
describing ResonanceGroups with a probability of corresponding to this 
residue.
  @param  Mols_Residue self
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Residue_FindAllResidueProbs_keyval0(Mols_Residue self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mols_Residue_FindAllResidueProbs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Residue.residueProbs

ResidueProb 
describing ResonanceGroups with a probability of corresponding to this 
residue.
  @param  Mols_Residue self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Residue_FindAllResidueProbs_keyval1(Mols_Residue self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mols_Residue_FindAllResidueProbs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Residue.residueProbs

ResidueProb 
describing ResonanceGroups with a probability of corresponding to this 
residue.
  @param  Mols_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Residue_FindAllResidueProbs_keyval2(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mols_Residue_FindAllResidueProbs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Residue.residueProbs

ResidueProb 
describing ResonanceGroups with a probability of corresponding to this 
residue.
  @param  Mols_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Residue_FindAllResidueProbs_keyval3(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mols_Residue_FindAllResidueProbs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Residue.residueProbs

ResidueProb 
describing ResonanceGroups with a probability of corresponding to this 
residue.
  @param  Mols_Residue self
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
ApiSet Mols_Residue_FindAllResidueProbs_keyval4(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mols_Residue_FindAllResidueProbs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolSystem.Residue.resonanceGroups

ResonanceGroups that are 
definitely assigned to this residue
  @param  Mols_Residue self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Residue_FindAllResonanceGroups(Mols_Residue self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllResonanceGroups");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'findAllResonanceGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'findAllResonanceGroups' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolSystem.Residue.resonanceGroups

ResonanceGroups that are 
definitely assigned to this residue
  @param  Mols_Residue self
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Residue_FindAllResonanceGroups_keyval0(Mols_Residue self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mols_Residue_FindAllResonanceGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolSystem.Residue.resonanceGroups

ResonanceGroups that are 
definitely assigned to this residue
  @param  Mols_Residue self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Residue_FindAllResonanceGroups_keyval1(Mols_Residue self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mols_Residue_FindAllResonanceGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolSystem.Residue.resonanceGroups

ResonanceGroups that are 
definitely assigned to this residue
  @param  Mols_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Residue_FindAllResonanceGroups_keyval2(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mols_Residue_FindAllResonanceGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolSystem.Residue.resonanceGroups

ResonanceGroups that are 
definitely assigned to this residue
  @param  Mols_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Residue_FindAllResonanceGroups_keyval3(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mols_Residue_FindAllResonanceGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolSystem.Residue.resonanceGroups

ResonanceGroups that are 
definitely assigned to this residue
  @param  Mols_Residue self
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
ApiSet Mols_Residue_FindAllResonanceGroups_keyval4(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mols_Residue_FindAllResonanceGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Residue self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Mols_Residue_FindFirstApplicationData(Mols_Residue self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'findFirstApplicationData' is not callable");
  
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
  @param  Mols_Residue self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Mols_Residue_FindFirstApplicationData_keyval0(Mols_Residue self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mols_Residue_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Residue self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Mols_Residue_FindFirstApplicationData_keyval1(Mols_Residue self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mols_Residue_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Mols_Residue_FindFirstApplicationData_keyval2(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mols_Residue_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Mols_Residue_FindFirstApplicationData_keyval3(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mols_Residue_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Residue self
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
Impl_ApplicationData Mols_Residue_FindFirstApplicationData_keyval4(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mols_Residue_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.Residue.atoms

child link
  @param  Mols_Residue self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Mols_Atom Mols_Residue_FindFirstAtom(Mols_Residue self, ApiMap conditions)
{
  
  Mols_Atom obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstAtom");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'findFirstAtom'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'findFirstAtom' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.Residue.atoms

child link
  @param  Mols_Residue self
  @returns  the first value that satisfies the conditions 
**/
Mols_Atom Mols_Residue_FindFirstAtom_keyval0(Mols_Residue self)
{
  
  Mols_Atom  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mols_Residue_FindFirstAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.Residue.atoms

child link
  @param  Mols_Residue self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Mols_Atom Mols_Residue_FindFirstAtom_keyval1(Mols_Residue self, char * key, ApiObject value)
{
  
  Mols_Atom  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mols_Residue_FindFirstAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.Residue.atoms

child link
  @param  Mols_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Mols_Atom Mols_Residue_FindFirstAtom_keyval2(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Mols_Atom  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mols_Residue_FindFirstAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.Residue.atoms

child link
  @param  Mols_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Mols_Atom Mols_Residue_FindFirstAtom_keyval3(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Mols_Atom  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mols_Residue_FindFirstAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.Residue.atoms

child link
  @param  Mols_Residue self
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
Mols_Atom Mols_Residue_FindFirstAtom_keyval4(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Mols_Atom  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mols_Residue_FindFirstAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolSystem.Residue.chainStateSets

ChainStateSets relevant 
for Residue
  @param  Mols_Residue self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_ChainStateSet Mols_Residue_FindFirstChainStateSet(Mols_Residue self, ApiMap conditions)
{
  
  Nmr_ChainStateSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChainStateSet");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'findFirstChainStateSet'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'findFirstChainStateSet' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolSystem.Residue.chainStateSets

ChainStateSets relevant 
for Residue
  @param  Mols_Residue self
  @returns  the first value that satisfies the conditions 
**/
Nmr_ChainStateSet Mols_Residue_FindFirstChainStateSet_keyval0(Mols_Residue self)
{
  
  Nmr_ChainStateSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mols_Residue_FindFirstChainStateSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolSystem.Residue.chainStateSets

ChainStateSets relevant 
for Residue
  @param  Mols_Residue self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_ChainStateSet Mols_Residue_FindFirstChainStateSet_keyval1(Mols_Residue self, char * key, ApiObject value)
{
  
  Nmr_ChainStateSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mols_Residue_FindFirstChainStateSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolSystem.Residue.chainStateSets

ChainStateSets relevant 
for Residue
  @param  Mols_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_ChainStateSet Mols_Residue_FindFirstChainStateSet_keyval2(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_ChainStateSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mols_Residue_FindFirstChainStateSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolSystem.Residue.chainStateSets

ChainStateSets relevant 
for Residue
  @param  Mols_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_ChainStateSet Mols_Residue_FindFirstChainStateSet_keyval3(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_ChainStateSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mols_Residue_FindFirstChainStateSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolSystem.Residue.chainStateSets

ChainStateSets relevant 
for Residue
  @param  Mols_Residue self
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
Nmr_ChainStateSet Mols_Residue_FindFirstChainStateSet_keyval4(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_ChainStateSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mols_Residue_FindFirstChainStateSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolSystem.Residue.dangleResidues

DangleResidue with 
predicted angles
  @param  Mols_Residue self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Dang_DangleResidue Mols_Residue_FindFirstDangleResidue(Mols_Residue self, ApiMap conditions)
{
  
  Dang_DangleResidue obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstDangleResidue");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'findFirstDangleResidue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'findFirstDangleResidue' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolSystem.Residue.dangleResidues

DangleResidue with 
predicted angles
  @param  Mols_Residue self
  @returns  the first value that satisfies the conditions 
**/
Dang_DangleResidue Mols_Residue_FindFirstDangleResidue_keyval0(Mols_Residue self)
{
  
  Dang_DangleResidue  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mols_Residue_FindFirstDangleResidue(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolSystem.Residue.dangleResidues

DangleResidue with 
predicted angles
  @param  Mols_Residue self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Dang_DangleResidue Mols_Residue_FindFirstDangleResidue_keyval1(Mols_Residue self, char * key, ApiObject value)
{
  
  Dang_DangleResidue  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mols_Residue_FindFirstDangleResidue(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolSystem.Residue.dangleResidues

DangleResidue with 
predicted angles
  @param  Mols_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Dang_DangleResidue Mols_Residue_FindFirstDangleResidue_keyval2(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Dang_DangleResidue  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mols_Residue_FindFirstDangleResidue(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolSystem.Residue.dangleResidues

DangleResidue with 
predicted angles
  @param  Mols_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Dang_DangleResidue Mols_Residue_FindFirstDangleResidue_keyval3(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Dang_DangleResidue  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mols_Residue_FindFirstDangleResidue(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolSystem.Residue.dangleResidues

DangleResidue with 
predicted angles
  @param  Mols_Residue self
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
Dang_DangleResidue Mols_Residue_FindFirstDangleResidue_keyval4(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Dang_DangleResidue  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mols_Residue_FindFirstDangleResidue(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolSystem.Residue.molSysResidueValidations

Validation 
results for Residue
  @param  Mols_Residue self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Vald_MolSysResidueValidation Mols_Residue_FindFirstMolSysResidueValidation(Mols_Residue self, ApiMap conditions)
{
  
  Vald_MolSysResidueValidation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstMolSysResidueValidation");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'findFirstMolSysResidueValidation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'findFirstMolSysResidueValidation' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolSystem.Residue.molSysResidueValidations

Validation 
results for Residue
  @param  Mols_Residue self
  @returns  the first value that satisfies the conditions 
**/
Vald_MolSysResidueValidation Mols_Residue_FindFirstMolSysResidueValidation_keyval0(Mols_Residue self)
{
  
  Vald_MolSysResidueValidation  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mols_Residue_FindFirstMolSysResidueValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolSystem.Residue.molSysResidueValidations

Validation 
results for Residue
  @param  Mols_Residue self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Vald_MolSysResidueValidation Mols_Residue_FindFirstMolSysResidueValidation_keyval1(Mols_Residue self, char * key, ApiObject value)
{
  
  Vald_MolSysResidueValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mols_Residue_FindFirstMolSysResidueValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolSystem.Residue.molSysResidueValidations

Validation 
results for Residue
  @param  Mols_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Vald_MolSysResidueValidation Mols_Residue_FindFirstMolSysResidueValidation_keyval2(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Vald_MolSysResidueValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mols_Residue_FindFirstMolSysResidueValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolSystem.Residue.molSysResidueValidations

Validation 
results for Residue
  @param  Mols_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Vald_MolSysResidueValidation Mols_Residue_FindFirstMolSysResidueValidation_keyval3(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Vald_MolSysResidueValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mols_Residue_FindFirstMolSysResidueValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolSystem.Residue.molSysResidueValidations

Validation 
results for Residue
  @param  Mols_Residue self
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
Vald_MolSysResidueValidation Mols_Residue_FindFirstMolSysResidueValidation_keyval4(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Vald_MolSysResidueValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mols_Residue_FindFirstMolSysResidueValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.Residue.molSystemLinkEnds

child 
link to class MolSystemLinkEnd
  @param  Mols_Residue self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Mols_MolSystemLinkEnd Mols_Residue_FindFirstMolSystemLinkEnd(Mols_Residue self, ApiMap conditions)
{
  
  Mols_MolSystemLinkEnd obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstMolSystemLinkEnd");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'findFirstMolSystemLinkEnd'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'findFirstMolSystemLinkEnd' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.Residue.molSystemLinkEnds

child 
link to class MolSystemLinkEnd
  @param  Mols_Residue self
  @returns  the first value that satisfies the conditions 
**/
Mols_MolSystemLinkEnd Mols_Residue_FindFirstMolSystemLinkEnd_keyval0(Mols_Residue self)
{
  
  Mols_MolSystemLinkEnd  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mols_Residue_FindFirstMolSystemLinkEnd(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.Residue.molSystemLinkEnds

child 
link to class MolSystemLinkEnd
  @param  Mols_Residue self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Mols_MolSystemLinkEnd Mols_Residue_FindFirstMolSystemLinkEnd_keyval1(Mols_Residue self, char * key, ApiObject value)
{
  
  Mols_MolSystemLinkEnd  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mols_Residue_FindFirstMolSystemLinkEnd(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.Residue.molSystemLinkEnds

child 
link to class MolSystemLinkEnd
  @param  Mols_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Mols_MolSystemLinkEnd Mols_Residue_FindFirstMolSystemLinkEnd_keyval2(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Mols_MolSystemLinkEnd  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mols_Residue_FindFirstMolSystemLinkEnd(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.Residue.molSystemLinkEnds

child 
link to class MolSystemLinkEnd
  @param  Mols_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Mols_MolSystemLinkEnd Mols_Residue_FindFirstMolSystemLinkEnd_keyval3(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Mols_MolSystemLinkEnd  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mols_Residue_FindFirstMolSystemLinkEnd(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.Residue.molSystemLinkEnds

child 
link to class MolSystemLinkEnd
  @param  Mols_Residue self
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
Mols_MolSystemLinkEnd Mols_Residue_FindFirstMolSystemLinkEnd_keyval4(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Mols_MolSystemLinkEnd  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mols_Residue_FindFirstMolSystemLinkEnd(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.Residue.residueProbs

ResidueProb 
describing ResonanceGroups with a probability of corresponding to this 
residue.
  @param  Mols_Residue self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResidueProb Mols_Residue_FindFirstResidueProb(Mols_Residue self, ApiMap conditions)
{
  
  Nmr_ResidueProb obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstResidueProb");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'findFirstResidueProb'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'findFirstResidueProb' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.Residue.residueProbs

ResidueProb 
describing ResonanceGroups with a probability of corresponding to this 
residue.
  @param  Mols_Residue self
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResidueProb Mols_Residue_FindFirstResidueProb_keyval0(Mols_Residue self)
{
  
  Nmr_ResidueProb  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mols_Residue_FindFirstResidueProb(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.Residue.residueProbs

ResidueProb 
describing ResonanceGroups with a probability of corresponding to this 
residue.
  @param  Mols_Residue self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResidueProb Mols_Residue_FindFirstResidueProb_keyval1(Mols_Residue self, char * key, ApiObject value)
{
  
  Nmr_ResidueProb  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mols_Residue_FindFirstResidueProb(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.Residue.residueProbs

ResidueProb 
describing ResonanceGroups with a probability of corresponding to this 
residue.
  @param  Mols_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResidueProb Mols_Residue_FindFirstResidueProb_keyval2(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_ResidueProb  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mols_Residue_FindFirstResidueProb(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.Residue.residueProbs

ResidueProb 
describing ResonanceGroups with a probability of corresponding to this 
residue.
  @param  Mols_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResidueProb Mols_Residue_FindFirstResidueProb_keyval3(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_ResidueProb  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mols_Residue_FindFirstResidueProb(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.Residue.residueProbs

ResidueProb 
describing ResonanceGroups with a probability of corresponding to this 
residue.
  @param  Mols_Residue self
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
Nmr_ResidueProb Mols_Residue_FindFirstResidueProb_keyval4(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_ResidueProb  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mols_Residue_FindFirstResidueProb(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolSystem.Residue.resonanceGroups

ResonanceGroups that are 
definitely assigned to this residue
  @param  Mols_Residue self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResonanceGroup Mols_Residue_FindFirstResonanceGroup(Mols_Residue self, ApiMap conditions)
{
  
  Nmr_ResonanceGroup obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstResonanceGroup");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'findFirstResonanceGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'findFirstResonanceGroup' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolSystem.Residue.resonanceGroups

ResonanceGroups that are 
definitely assigned to this residue
  @param  Mols_Residue self
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResonanceGroup Mols_Residue_FindFirstResonanceGroup_keyval0(Mols_Residue self)
{
  
  Nmr_ResonanceGroup  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mols_Residue_FindFirstResonanceGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolSystem.Residue.resonanceGroups

ResonanceGroups that are 
definitely assigned to this residue
  @param  Mols_Residue self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResonanceGroup Mols_Residue_FindFirstResonanceGroup_keyval1(Mols_Residue self, char * key, ApiObject value)
{
  
  Nmr_ResonanceGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mols_Residue_FindFirstResonanceGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolSystem.Residue.resonanceGroups

ResonanceGroups that are 
definitely assigned to this residue
  @param  Mols_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResonanceGroup Mols_Residue_FindFirstResonanceGroup_keyval2(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_ResonanceGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mols_Residue_FindFirstResonanceGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolSystem.Residue.resonanceGroups

ResonanceGroups that are 
definitely assigned to this residue
  @param  Mols_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResonanceGroup Mols_Residue_FindFirstResonanceGroup_keyval3(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_ResonanceGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mols_Residue_FindFirstResonanceGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolSystem.Residue.resonanceGroups

ResonanceGroups that are 
definitely assigned to this residue
  @param  Mols_Residue self
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
Nmr_ResonanceGroup Mols_Residue_FindFirstResonanceGroup_keyval4(Mols_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_ResonanceGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mols_Residue_FindFirstResonanceGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.molecule.MolSystem.Residue
  @param  Mols_Residue self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Mols_Residue_Get(Mols_Residue self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Mols_Residue self
  @returns   the result
**/
Acco_AccessObject Mols_Residue_GetAccess(Mols_Residue self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'getAccess' is not callable");
  
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
  @param  Mols_Residue self
  @returns   the result
**/
Acco_AccessObject Mols_Residue_GetActiveAccess(Mols_Residue self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'getActiveAccess' is not callable");
  
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
  @param  Mols_Residue self
  @returns   the result
**/
ApiList Mols_Residue_GetApplicationData(Mols_Residue self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolSystem.Residue.atoms

child link
  @param  Mols_Residue self
  @returns   the result
**/
ApiSet Mols_Residue_GetAtoms(Mols_Residue self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAtoms");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'getAtoms'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'getAtoms' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.molecule.MolSystem.Residue
  @param  Mols_Residue self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Mols_Residue Mols_Residue_GetByKey(Mols_Residue self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Mols_Residue obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'getByKey' is not callable");
  
  args = PyTuple_Pack(2, startObj, fullKey);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived attribute ccpCode
  @param  Mols_Residue self
  @returns   the result
**/
ApiString Mols_Residue_GetCcpCode(Mols_Residue self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCcpCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'getCcpCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'getCcpCode' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolSystem.Residue.chain

parent link
  @param  Mols_Residue self
  @returns   the result
**/
Mols_Chain Mols_Residue_GetChain(Mols_Residue self)
{
  
  Mols_Chain obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChain");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'getChain'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'getChain' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolSystem.Residue.chainFragment

ChainFragment to 
which Residue belongs. When Chains are created, each Residue will 
automatically be linked to a ChainFragment, so that the Chain is divided 
in Fragments of uniform molType.
  @param  Mols_Residue self
  @returns   the result
**/
Mols_ChainFragment Mols_Residue_GetChainFragment(Mols_Residue self)
{
  
  Mols_ChainFragment obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChainFragment");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'getChainFragment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'getChainFragment' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolSystem.Residue.chainStateSets

ChainStateSets 
relevant for Residue
  @param  Mols_Residue self
  @returns   the result
**/
ApiSet Mols_Residue_GetChainStateSets(Mols_Residue self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChainStateSets");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'getChainStateSets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'getChainStateSets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived link chemCompVar
  @param  Mols_Residue self
  @returns   the result
**/
Chem_ChemCompVar Mols_Residue_GetChemCompVar(Mols_Residue self)
{
  
  Chem_ChemCompVar obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemCompVar");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'getChemCompVar'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'getChemCompVar' is not callable");
  
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
  @param  Mols_Residue self
  @returns   the result
**/
ApiString Mols_Residue_GetClassName(Mols_Residue self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolSystem.Residue.dangleResidues

DangleResidue 
with predicted angles
  @param  Mols_Residue self
  @returns   the result
**/
ApiSet Mols_Residue_GetDangleResidues(Mols_Residue self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDangleResidues");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'getDangleResidues'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'getDangleResidues' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolSystem.Residue.descriptor

descriptor of 
ChemCompVar corresponding to Residue. Describes topological variant, 
i.e. protonation state or (for Polymers) non-polymer type 
substitution.

 linking and descriptor may be changed for existing 
Residues, thus changing the identity of the corresponding ChemCompVar. 

The new chemCompVar must contain a ChemAtom to correspond to every 
existing Atom, and a LinkEnd to correspond to every existing 
MolSystemLinkEnd, as well as every existing MolResLinkEnd in the 
MolResidue. Note that this may require that Atom and MolSsytemLinkEnd 
objects be deleted before the linking and descriptor can be modified.
  @param  Mols_Residue self
  @returns   the result
**/
ApiString Mols_Residue_GetDescriptor(Mols_Residue self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDescriptor");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'getDescriptor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'getDescriptor' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolSystem.Residue.details

free text for notes, 
etc.
  @param  Mols_Residue self
  @returns   the result
**/
ApiString Mols_Residue_GetDetails(Mols_Residue self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'getDetails' is not callable");
  
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
  @param  Mols_Residue self
  @returns   the result
**/
ApiList Mols_Residue_GetFieldNames(Mols_Residue self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.molecule.MolSystem.Residue
  @param  Mols_Residue self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Mols_Residue_GetFullKey(Mols_Residue self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'getFullKey' is not callable");
  
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
  @param  Mols_Residue self
  @returns   the result
**/
ApiBoolean Mols_Residue_GetInConstructor(Mols_Residue self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'getInConstructor' is not callable");
  
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
  @param  Mols_Residue self
  @returns   the result
**/
ApiBoolean Mols_Residue_GetIsDeleted(Mols_Residue self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolSystem.Residue.linking

linking (substitution 
pattern) of ChemCompVar corresponding to Residue. linking and descriptor 
may be changed for existing Residues, thus changing the identity of the 
corresponding ChemCompVar. 
The new chemCompVar must contain a ChemAtom 
to correspond to every existing Atom, and a LinkEnd to correspond to 
every existing MolSystemLinkEnd, as well as every existing MolResLinkEnd 
in the MolResidue. Note that this may require that Atom and 
MolSsytemLinkEnd objects be deleted before the linking and descriptor 
can be modified.
  @param  Mols_Residue self
  @returns   the result
**/
ApiString Mols_Residue_GetLinking(Mols_Residue self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLinking");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'getLinking'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'getLinking' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.molecule.MolSystem.Residue
  @param  Mols_Residue self
  @returns  Local object key
**/
ApiObject Mols_Residue_GetLocalKey(Mols_Residue self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter function for derived link molResidue
  @param  Mols_Residue self
  @returns   the result
**/
Mole_MolResidue Mols_Residue_GetMolResidue(Mols_Residue self)
{
  
  Mole_MolResidue obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolResidue");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'getMolResidue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'getMolResidue' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.molecule.MolSystem.Residue.molSysResidueValidations

Validation 
results for Residue
  @param  Mols_Residue self
  @returns   the result
**/
ApiSet Mols_Residue_GetMolSysResidueValidations(Mols_Residue self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolSysResidueValidations");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'getMolSysResidueValidations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'getMolSysResidueValidations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolSystem.Residue.molSystemLinkEnds

child link to 
class MolSystemLinkEnd
  @param  Mols_Residue self
  @returns   the result
**/
ApiSet Mols_Residue_GetMolSystemLinkEnds(Mols_Residue self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolSystemLinkEnds");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'getMolSystemLinkEnds'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'getMolSystemLinkEnds' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived attribute molType
  @param  Mols_Residue self
  @returns   the result
**/
ApiString Mols_Residue_GetMolType(Mols_Residue self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolType");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'getMolType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'getMolType' is not callable");
  
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
  @param  Mols_Residue self
  @returns   the result
**/
ApiString Mols_Residue_GetPackageName(Mols_Residue self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'getPackageName' is not callable");
  
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
  @param  Mols_Residue self
  @returns   the result
**/
ApiString Mols_Residue_GetPackageShortName(Mols_Residue self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolSystem.Residue.parent

link to parent object - 
synonym for chain
  @param  Mols_Residue self
  @returns   the result
**/
Mols_Chain Mols_Residue_GetParent(Mols_Residue self)
{
  
  Mols_Chain obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'getParent' is not callable");
  
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
  @param  Mols_Residue self
  @returns   the result
**/
ApiString Mols_Residue_GetQualifiedName(Mols_Residue self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolSystem.Residue.residueProbs

ResidueProb 
describing ResonanceGroups with a probability of corresponding to this 
residue.
  @param  Mols_Residue self
  @returns   the result
**/
ApiSet Mols_Residue_GetResidueProbs(Mols_Residue self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getResidueProbs");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'getResidueProbs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'getResidueProbs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolSystem.Residue.resonanceGroups

ResonanceGroups 
that are definitely assigned to this residue
  @param  Mols_Residue self
  @returns   the result
**/
ApiSet Mols_Residue_GetResonanceGroups(Mols_Residue self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getResonanceGroups");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'getResonanceGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'getResonanceGroups' is not callable");
  
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
  @param  Mols_Residue self
  @returns   the result
**/
Impl_MemopsRoot Mols_Residue_GetRoot(Mols_Residue self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolSystem.Residue.seqCode

Author sequence 
identifier. Defaults to the MolResidue.seqCode
  @param  Mols_Residue self
  @returns   the result
**/
ApiInteger Mols_Residue_GetSeqCode(Mols_Residue self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSeqCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'getSeqCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'getSeqCode' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolSystem.Residue.seqId

Identifier corresponding 
to the molResidue identifier (self.molResidue.serial)
  @param  Mols_Residue self
  @returns   the result
**/
ApiInteger Mols_Residue_GetSeqId(Mols_Residue self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSeqId");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'getSeqId'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'getSeqId' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolSystem.Residue.seqInsertCode

Author insertion 
code. Defaults to MolResidue.seqInsertCode (which again defaults to a 
single white space ' ').
  @param  Mols_Residue self
  @returns   the result
**/
ApiString Mols_Residue_GetSeqInsertCode(Mols_Residue self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSeqInsertCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'getSeqInsertCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'getSeqInsertCode' is not callable");
  
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
  @param  Mols_Residue self
  @returns   the result
**/
Impl_TopObject Mols_Residue_GetTopObject(Mols_Residue self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.molecule.MolSystem.Residue
  @param  Mols_Chain parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Mols_Residue Mols_Residue_Init(Mols_Chain parent, ApiMap attrlinks)
{
  
  return Mols_Chain_NewResidue(parent, attrlinks);
}

/**
  Constructor for ccp.molecule.MolSystem.Residue
  @param  Mols_Chain parent
  @param  char * descriptor
  @param  char * linking
  @param  ApiInteger seqCode
  @param  ApiInteger seqId
  @returns  the new object
**/
Mols_Residue Mols_Residue_Init_reqd(Mols_Chain parent, char * descriptor, char * linking, ApiInteger seqCode, ApiInteger seqId)
{
  
  Mols_Residue  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__descriptor = ApiString_New(descriptor);
  ApiString api__linking = ApiString_New(linking);

  PyDict_SetItemString(attrlinks, "descriptor", api__descriptor);
  PyDict_SetItemString(attrlinks, "linking", api__linking);
  PyDict_SetItemString(attrlinks, "seqCode", seqCode);
  PyDict_SetItemString(attrlinks, "seqId", seqId);
  
  obj = Mols_Residue_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__descriptor);
  Py_DECREF(api__linking);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.MolSystem.Atom
  @param  Mols_Residue self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Mols_Atom Mols_Residue_NewAtom(Mols_Residue self, ApiMap attrlinks)
{
  
  Mols_Atom obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newAtom");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'newAtom'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'newAtom' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.MolSystem.Atom
  @param  Mols_Residue self
  @param  char * name
  @returns  the new object
**/
Mols_Atom Mols_Residue_NewAtom_reqd(Mols_Residue self, char * name)
{
  
  Mols_Atom  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Mols_Residue_NewAtom(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.MolSystem.MolSystemLinkEnd
  @param  Mols_Residue self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Mols_MolSystemLinkEnd Mols_Residue_NewMolSystemLinkEnd(Mols_Residue self, ApiMap attrlinks)
{
  
  Mols_MolSystemLinkEnd obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newMolSystemLinkEnd");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'newMolSystemLinkEnd'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'newMolSystemLinkEnd' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.MolSystem.MolSystemLinkEnd
  @param  Mols_Residue self
  @param  char * linkCode
  @returns  the new object
**/
Mols_MolSystemLinkEnd Mols_Residue_NewMolSystemLinkEnd_reqd(Mols_Residue self, char * linkCode)
{
  
  Mols_MolSystemLinkEnd  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__linkCode = ApiString_New(linkCode);

  PyDict_SetItemString(attrlinks, "linkCode", api__linkCode);
  
  obj = Mols_Residue_NewMolSystemLinkEnd(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__linkCode);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Residue self
  @param  Impl_ApplicationData value
**/
void *Mols_Residue_RemoveApplicationData(Mols_Residue self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.molecule.MolSystem.Residue.chainStateSets

ChainStateSets 
relevant for Residue
  @param  Mols_Residue self
  @param  Nmr_ChainStateSet value
**/
void *Mols_Residue_RemoveChainStateSet(Mols_Residue self, Nmr_ChainStateSet value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeChainStateSet");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'removeChainStateSet'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'removeChainStateSet' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
ccp.molecule.MolSystem.Residue.molSysResidueValidations

Validation 
results for Residue
  @param  Mols_Residue self
  @param  Vald_MolSysResidueValidation value
**/
void *Mols_Residue_RemoveMolSysResidueValidation(Mols_Residue self, Vald_MolSysResidueValidation value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeMolSysResidueValidation");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'removeMolSysResidueValidation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'removeMolSysResidueValidation' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
ccp.molecule.MolSystem.Residue.resonanceGroups

ResonanceGroups that are 
definitely assigned to this residue
  @param  Mols_Residue self
  @param  Nmr_ResonanceGroup value
**/
void *Mols_Residue_RemoveResonanceGroup(Mols_Residue self, Nmr_ResonanceGroup value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeResonanceGroup");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'removeResonanceGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'removeResonanceGroup' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.molecule.MolSystem.Residue
  @param  Mols_Residue self
  @param  ApiString name
  @param  ApiObject value
**/
void *Mols_Residue_Set(Mols_Residue self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Mols_Residue self
  @param  Acco_AccessObject value
**/
void *Mols_Residue_SetAccess(Mols_Residue self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'setAccess' is not callable");
  
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
  @param  Mols_Residue self
  @param  ApiList values
**/
void *Mols_Residue_SetApplicationData(Mols_Residue self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.MolSystem.Residue.chainFragment

ChainFragment to 
which Residue belongs. When Chains are created, each Residue will 
automatically be linked to a ChainFragment, so that the Chain is divided 
in Fragments of uniform molType.
  @param  Mols_Residue self
  @param  Mols_ChainFragment value
**/
void *Mols_Residue_SetChainFragment(Mols_Residue self, Mols_ChainFragment value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setChainFragment");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'setChainFragment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'setChainFragment' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.MolSystem.Residue.chainStateSets

ChainStateSets 
relevant for Residue
  @param  Mols_Residue self
  @param  ApiSet values
**/
void *Mols_Residue_SetChainStateSets(Mols_Residue self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setChainStateSets");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'setChainStateSets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'setChainStateSets' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.MolSystem.Residue.dangleResidues

DangleResidue 
with predicted angles
  @param  Mols_Residue self
  @param  ApiSet values
**/
void *Mols_Residue_SetDangleResidues(Mols_Residue self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDangleResidues");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'setDangleResidues'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'setDangleResidues' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.MolSystem.Residue.descriptor

descriptor of 
ChemCompVar corresponding to Residue. Describes topological variant, 
i.e. protonation state or (for Polymers) non-polymer type 
substitution.

 linking and descriptor may be changed for existing 
Residues, thus changing the identity of the corresponding ChemCompVar. 

The new chemCompVar must contain a ChemAtom to correspond to every 
existing Atom, and a LinkEnd to correspond to every existing 
MolSystemLinkEnd, as well as every existing MolResLinkEnd in the 
MolResidue. Note that this may require that Atom and MolSsytemLinkEnd 
objects be deleted before the linking and descriptor can be modified.
  @param  Mols_Residue self
  @param  ApiString value
**/
void *Mols_Residue_SetDescriptor(Mols_Residue self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDescriptor");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'setDescriptor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'setDescriptor' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.MolSystem.Residue.details

free text for notes, 
etc.
  @param  Mols_Residue self
  @param  ApiString value
**/
void *Mols_Residue_SetDetails(Mols_Residue self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.MolSystem.Residue.linking

linking (substitution 
pattern) of ChemCompVar corresponding to Residue. linking and descriptor 
may be changed for existing Residues, thus changing the identity of the 
corresponding ChemCompVar. 
The new chemCompVar must contain a ChemAtom 
to correspond to every existing Atom, and a LinkEnd to correspond to 
every existing MolSystemLinkEnd, as well as every existing MolResLinkEnd 
in the MolResidue. Note that this may require that Atom and 
MolSsytemLinkEnd objects be deleted before the linking and descriptor 
can be modified.
  @param  Mols_Residue self
  @param  ApiString value
**/
void *Mols_Residue_SetLinking(Mols_Residue self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLinking");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'setLinking'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'setLinking' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.molecule.MolSystem.Residue.molSysResidueValidations

Validation 
results for Residue
  @param  Mols_Residue self
  @param  ApiSet values
**/
void *Mols_Residue_SetMolSysResidueValidations(Mols_Residue self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMolSysResidueValidations");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'setMolSysResidueValidations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'setMolSysResidueValidations' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.MolSystem.Residue.residueProbs

ResidueProb 
describing ResonanceGroups with a probability of corresponding to this 
residue.
  @param  Mols_Residue self
  @param  ApiSet values
**/
void *Mols_Residue_SetResidueProbs(Mols_Residue self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setResidueProbs");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'setResidueProbs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'setResidueProbs' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.MolSystem.Residue.resonanceGroups

ResonanceGroups 
that are definitely assigned to this residue
  @param  Mols_Residue self
  @param  ApiSet values
**/
void *Mols_Residue_SetResonanceGroups(Mols_Residue self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setResonanceGroups");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'setResonanceGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'setResonanceGroups' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.MolSystem.Residue.seqCode

Author sequence 
identifier. Defaults to the MolResidue.seqCode
  @param  Mols_Residue self
  @param  ApiInteger value
**/
void *Mols_Residue_SetSeqCode(Mols_Residue self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSeqCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'setSeqCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'setSeqCode' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.MolSystem.Residue.seqId

Identifier corresponding 
to the molResidue identifier (self.molResidue.serial)
  @param  Mols_Residue self
  @param  ApiInteger value
**/
void *Mols_Residue_SetSeqId(Mols_Residue self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSeqId");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'setSeqId'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'setSeqId' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.MolSystem.Residue.seqInsertCode

Author insertion 
code. Defaults to MolResidue.seqInsertCode (which again defaults to a 
single white space ' ').
  @param  Mols_Residue self
  @param  ApiString value
**/
void *Mols_Residue_SetSeqInsertCode(Mols_Residue self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSeqInsertCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'setSeqInsertCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'setSeqInsertCode' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.MolSystem.Residue.atoms

child link
  @param  Mols_Residue self
  @returns   the result
**/
ApiList Mols_Residue_SortedAtoms(Mols_Residue self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedAtoms");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'sortedAtoms'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'sortedAtoms' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.MolSystem.Residue.chainStateSets

ChainStateSets 
relevant for Residue
  @param  Mols_Residue self
  @returns   the result
**/
ApiList Mols_Residue_SortedChainStateSets(Mols_Residue self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChainStateSets");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'sortedChainStateSets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'sortedChainStateSets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.MolSystem.Residue.dangleResidues

DangleResidue 
with predicted angles
  @param  Mols_Residue self
  @returns   the result
**/
ApiList Mols_Residue_SortedDangleResidues(Mols_Residue self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedDangleResidues");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'sortedDangleResidues'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'sortedDangleResidues' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.molecule.MolSystem.Residue.molSysResidueValidations

Validation 
results for Residue
  @param  Mols_Residue self
  @returns   the result
**/
ApiList Mols_Residue_SortedMolSysResidueValidations(Mols_Residue self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedMolSysResidueValidations");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'sortedMolSysResidueValidations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'sortedMolSysResidueValidations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.MolSystem.Residue.molSystemLinkEnds

child link 
to class MolSystemLinkEnd
  @param  Mols_Residue self
  @returns   the result
**/
ApiList Mols_Residue_SortedMolSystemLinkEnds(Mols_Residue self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedMolSystemLinkEnds");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'sortedMolSystemLinkEnds'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'sortedMolSystemLinkEnds' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.MolSystem.Residue.residueProbs

ResidueProb 
describing ResonanceGroups with a probability of corresponding to this 
residue.
  @param  Mols_Residue self
  @returns   the result
**/
ApiList Mols_Residue_SortedResidueProbs(Mols_Residue self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedResidueProbs");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'sortedResidueProbs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'sortedResidueProbs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.molecule.MolSystem.Residue.resonanceGroups

ResonanceGroups that are 
definitely assigned to this residue
  @param  Mols_Residue self
  @returns   the result
**/
ApiList Mols_Residue_SortedResonanceGroups(Mols_Residue self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedResonanceGroups");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Residue: cannot find method 'sortedResonanceGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Residue: method 'sortedResonanceGroups' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
