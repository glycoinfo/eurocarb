
#include "ccp.h"

/*
  A specific instance of a given molecule in a specific environment. E.g. one of the chains for a homodimer.
  
  The Chain corresponds to a specific Molecule, but may differ in some ways. 
  
  Creating a Chain automatically creates the Residue and Atom objects corresponding to it. 
*/

/* package ccp.api.molecule.MolSystem */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Chain self
  @param  Impl_ApplicationData value
**/
void *Mols_Chain_AddApplicationData(Mols_Chain self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.molecule.MolSystem.Chain.molSysChainValidations

Validation 
results for Chain
  @param  Mols_Chain self
  @param  Vald_MolSysChainValidation value
**/
void *Mols_Chain_AddMolSysChainValidation(Mols_Chain self, Vald_MolSysChainValidation value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addMolSysChainValidation");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'addMolSysChainValidation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'addMolSysChainValidation' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.molecule.MolSystem.Chain.resonanceGroups

ResonanceGroups 
that may be relevant to Chain
  @param  Mols_Chain self
  @param  Nmr_ResonanceGroup value
**/
void *Mols_Chain_AddResonanceGroup(Mols_Chain self, Nmr_ResonanceGroup value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addResonanceGroup");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'addResonanceGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'addResonanceGroup' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.molecule.MolSystem.Chain
  @param  Mols_Chain self
  @param  ApiBoolean complete
**/
void *Mols_Chain_CheckAllValid(Mols_Chain self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.molecule.MolSystem.Chain
  @param  Mols_Chain self
  @param  ApiBoolean complete
**/
void *Mols_Chain_CheckValid(Mols_Chain self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'checkValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Creates ChainFragments for all Residues that do not already have them, 
while making no modification to existing ChainFragments or their 
contents. Is called automatically on Chain creation. Any program that 
modifies the automatically created ChainFragments should call this 
function at the end, to ensure that every Residue belongs to a  
ChainFragment. 

The function  divides the residues in four molTypes: 
protein, carbohydrate, DNA/RNA ,and other. Within each molType, 
stretches of linear polymer of two or more residues are identified 
without regard to the seqId value of the residues. These are put in 
separate ChainFragments, with the residues ordered by sequence rather 
than seqID. Subsequently,  residues not part of a linear polymer are 
grouped in the largest directly connected fragments of uniform molType. 
Finally, for fragments of type DNA/RNA the molType is set to DNA or RNA 
if this is the only molType that happens to be present, to DNA/RNA 
otherwise.
  @param  Mols_Chain self
**/
void *Mols_Chain_CreateChainFragments(Mols_Chain self)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "createChainFragments");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'createChainFragments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'createChainFragments' is not callable");
  
  args = PyTuple_New(0);
  
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
  @param  Mols_Chain self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Mols_Chain_FindAllApplicationData(Mols_Chain self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'findAllApplicationData' is not callable");
  
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
  @param  Mols_Chain self
  @returns  all value that satisfy the conditions 
**/
ApiList Mols_Chain_FindAllApplicationData_keyval0(Mols_Chain self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mols_Chain_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Chain self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Mols_Chain_FindAllApplicationData_keyval1(Mols_Chain self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mols_Chain_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Mols_Chain_FindAllApplicationData_keyval2(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mols_Chain_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Mols_Chain_FindAllApplicationData_keyval3(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mols_Chain_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Chain self
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
ApiList Mols_Chain_FindAllApplicationData_keyval4(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mols_Chain_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Chain.chainFragments

child link to 
class ChainFragment
  @param  Mols_Chain self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Chain_FindAllChainFragments(Mols_Chain self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChainFragments");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'findAllChainFragments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'findAllChainFragments' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Chain.chainFragments

child link to 
class ChainFragment
  @param  Mols_Chain self
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Chain_FindAllChainFragments_keyval0(Mols_Chain self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mols_Chain_FindAllChainFragments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Chain.chainFragments

child link to 
class ChainFragment
  @param  Mols_Chain self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Chain_FindAllChainFragments_keyval1(Mols_Chain self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mols_Chain_FindAllChainFragments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Chain.chainFragments

child link to 
class ChainFragment
  @param  Mols_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Chain_FindAllChainFragments_keyval2(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mols_Chain_FindAllChainFragments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Chain.chainFragments

child link to 
class ChainFragment
  @param  Mols_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Chain_FindAllChainFragments_keyval3(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mols_Chain_FindAllChainFragments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Chain.chainFragments

child link to 
class ChainFragment
  @param  Mols_Chain self
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
ApiSet Mols_Chain_FindAllChainFragments_keyval4(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mols_Chain_FindAllChainFragments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Chain.chainInteractions

An 
interaction of a given type between a pair  of Chains
  @param  Mols_Chain self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Chain_FindAllChainInteractions(Mols_Chain self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChainInteractions");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'findAllChainInteractions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'findAllChainInteractions' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Chain.chainInteractions

An 
interaction of a given type between a pair  of Chains
  @param  Mols_Chain self
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Chain_FindAllChainInteractions_keyval0(Mols_Chain self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mols_Chain_FindAllChainInteractions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Chain.chainInteractions

An 
interaction of a given type between a pair  of Chains
  @param  Mols_Chain self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Chain_FindAllChainInteractions_keyval1(Mols_Chain self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mols_Chain_FindAllChainInteractions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Chain.chainInteractions

An 
interaction of a given type between a pair  of Chains
  @param  Mols_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Chain_FindAllChainInteractions_keyval2(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mols_Chain_FindAllChainInteractions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Chain.chainInteractions

An 
interaction of a given type between a pair  of Chains
  @param  Mols_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Chain_FindAllChainInteractions_keyval3(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mols_Chain_FindAllChainInteractions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Chain.chainInteractions

An 
interaction of a given type between a pair  of Chains
  @param  Mols_Chain self
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
ApiSet Mols_Chain_FindAllChainInteractions_keyval4(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mols_Chain_FindAllChainInteractions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Chain.chainStateSets

ChainStateSets 
belonging to Chain
  @param  Mols_Chain self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Chain_FindAllChainStateSets(Mols_Chain self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChainStateSets");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'findAllChainStateSets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'findAllChainStateSets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Chain.chainStateSets

ChainStateSets 
belonging to Chain
  @param  Mols_Chain self
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Chain_FindAllChainStateSets_keyval0(Mols_Chain self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mols_Chain_FindAllChainStateSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Chain.chainStateSets

ChainStateSets 
belonging to Chain
  @param  Mols_Chain self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Chain_FindAllChainStateSets_keyval1(Mols_Chain self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mols_Chain_FindAllChainStateSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Chain.chainStateSets

ChainStateSets 
belonging to Chain
  @param  Mols_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Chain_FindAllChainStateSets_keyval2(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mols_Chain_FindAllChainStateSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Chain.chainStateSets

ChainStateSets 
belonging to Chain
  @param  Mols_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Chain_FindAllChainStateSets_keyval3(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mols_Chain_FindAllChainStateSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Chain.chainStateSets

ChainStateSets 
belonging to Chain
  @param  Mols_Chain self
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
ApiSet Mols_Chain_FindAllChainStateSets_keyval4(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mols_Chain_FindAllChainStateSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Chain.dangleChains

Chains with 
Dangle dihedral angle predictions
  @param  Mols_Chain self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Chain_FindAllDangleChains(Mols_Chain self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllDangleChains");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'findAllDangleChains'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'findAllDangleChains' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Chain.dangleChains

Chains with 
Dangle dihedral angle predictions
  @param  Mols_Chain self
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Chain_FindAllDangleChains_keyval0(Mols_Chain self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mols_Chain_FindAllDangleChains(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Chain.dangleChains

Chains with 
Dangle dihedral angle predictions
  @param  Mols_Chain self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Chain_FindAllDangleChains_keyval1(Mols_Chain self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mols_Chain_FindAllDangleChains(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Chain.dangleChains

Chains with 
Dangle dihedral angle predictions
  @param  Mols_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Chain_FindAllDangleChains_keyval2(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mols_Chain_FindAllDangleChains(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Chain.dangleChains

Chains with 
Dangle dihedral angle predictions
  @param  Mols_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Chain_FindAllDangleChains_keyval3(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mols_Chain_FindAllDangleChains(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Chain.dangleChains

Chains with 
Dangle dihedral angle predictions
  @param  Mols_Chain self
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
ApiSet Mols_Chain_FindAllDangleChains_keyval4(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mols_Chain_FindAllDangleChains(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolSystem.Chain.molSysChainValidations

Validation results 
for Chain
  @param  Mols_Chain self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Chain_FindAllMolSysChainValidations(Mols_Chain self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllMolSysChainValidations");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'findAllMolSysChainValidations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'findAllMolSysChainValidations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolSystem.Chain.molSysChainValidations

Validation results 
for Chain
  @param  Mols_Chain self
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Chain_FindAllMolSysChainValidations_keyval0(Mols_Chain self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mols_Chain_FindAllMolSysChainValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolSystem.Chain.molSysChainValidations

Validation results 
for Chain
  @param  Mols_Chain self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Chain_FindAllMolSysChainValidations_keyval1(Mols_Chain self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mols_Chain_FindAllMolSysChainValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolSystem.Chain.molSysChainValidations

Validation results 
for Chain
  @param  Mols_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Chain_FindAllMolSysChainValidations_keyval2(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mols_Chain_FindAllMolSysChainValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolSystem.Chain.molSysChainValidations

Validation results 
for Chain
  @param  Mols_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Chain_FindAllMolSysChainValidations_keyval3(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mols_Chain_FindAllMolSysChainValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolSystem.Chain.molSysChainValidations

Validation results 
for Chain
  @param  Mols_Chain self
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
ApiSet Mols_Chain_FindAllMolSysChainValidations_keyval4(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mols_Chain_FindAllMolSysChainValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Chain.residues

child link
  @param  Mols_Chain self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Chain_FindAllResidues(Mols_Chain self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllResidues");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'findAllResidues'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'findAllResidues' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Chain.residues

child link
  @param  Mols_Chain self
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Chain_FindAllResidues_keyval0(Mols_Chain self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mols_Chain_FindAllResidues(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Chain.residues

child link
  @param  Mols_Chain self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Chain_FindAllResidues_keyval1(Mols_Chain self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mols_Chain_FindAllResidues(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Chain.residues

child link
  @param  Mols_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Chain_FindAllResidues_keyval2(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mols_Chain_FindAllResidues(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Chain.residues

child link
  @param  Mols_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Chain_FindAllResidues_keyval3(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mols_Chain_FindAllResidues(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolSystem.Chain.residues

child link
  @param  Mols_Chain self
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
ApiSet Mols_Chain_FindAllResidues_keyval4(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mols_Chain_FindAllResidues(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolSystem.Chain.resonanceGroups

ResonanceGroups that may 
be relevant to Chain
  @param  Mols_Chain self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Chain_FindAllResonanceGroups(Mols_Chain self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllResonanceGroups");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'findAllResonanceGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'findAllResonanceGroups' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolSystem.Chain.resonanceGroups

ResonanceGroups that may 
be relevant to Chain
  @param  Mols_Chain self
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Chain_FindAllResonanceGroups_keyval0(Mols_Chain self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mols_Chain_FindAllResonanceGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolSystem.Chain.resonanceGroups

ResonanceGroups that may 
be relevant to Chain
  @param  Mols_Chain self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Chain_FindAllResonanceGroups_keyval1(Mols_Chain self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mols_Chain_FindAllResonanceGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolSystem.Chain.resonanceGroups

ResonanceGroups that may 
be relevant to Chain
  @param  Mols_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Chain_FindAllResonanceGroups_keyval2(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mols_Chain_FindAllResonanceGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolSystem.Chain.resonanceGroups

ResonanceGroups that may 
be relevant to Chain
  @param  Mols_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_Chain_FindAllResonanceGroups_keyval3(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mols_Chain_FindAllResonanceGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolSystem.Chain.resonanceGroups

ResonanceGroups that may 
be relevant to Chain
  @param  Mols_Chain self
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
ApiSet Mols_Chain_FindAllResonanceGroups_keyval4(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mols_Chain_FindAllResonanceGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Chain self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Mols_Chain_FindFirstApplicationData(Mols_Chain self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'findFirstApplicationData' is not callable");
  
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
  @param  Mols_Chain self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Mols_Chain_FindFirstApplicationData_keyval0(Mols_Chain self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mols_Chain_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Chain self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Mols_Chain_FindFirstApplicationData_keyval1(Mols_Chain self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mols_Chain_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Mols_Chain_FindFirstApplicationData_keyval2(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mols_Chain_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Mols_Chain_FindFirstApplicationData_keyval3(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mols_Chain_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Chain self
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
Impl_ApplicationData Mols_Chain_FindFirstApplicationData_keyval4(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mols_Chain_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.Chain.chainFragments

child link to 
class ChainFragment
  @param  Mols_Chain self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Mols_ChainFragment Mols_Chain_FindFirstChainFragment(Mols_Chain self, ApiMap conditions)
{
  
  Mols_ChainFragment obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChainFragment");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'findFirstChainFragment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'findFirstChainFragment' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.Chain.chainFragments

child link to 
class ChainFragment
  @param  Mols_Chain self
  @returns  the first value that satisfies the conditions 
**/
Mols_ChainFragment Mols_Chain_FindFirstChainFragment_keyval0(Mols_Chain self)
{
  
  Mols_ChainFragment  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mols_Chain_FindFirstChainFragment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.Chain.chainFragments

child link to 
class ChainFragment
  @param  Mols_Chain self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Mols_ChainFragment Mols_Chain_FindFirstChainFragment_keyval1(Mols_Chain self, char * key, ApiObject value)
{
  
  Mols_ChainFragment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mols_Chain_FindFirstChainFragment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.Chain.chainFragments

child link to 
class ChainFragment
  @param  Mols_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Mols_ChainFragment Mols_Chain_FindFirstChainFragment_keyval2(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Mols_ChainFragment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mols_Chain_FindFirstChainFragment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.Chain.chainFragments

child link to 
class ChainFragment
  @param  Mols_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Mols_ChainFragment Mols_Chain_FindFirstChainFragment_keyval3(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Mols_ChainFragment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mols_Chain_FindFirstChainFragment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.Chain.chainFragments

child link to 
class ChainFragment
  @param  Mols_Chain self
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
Mols_ChainFragment Mols_Chain_FindFirstChainFragment_keyval4(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Mols_ChainFragment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mols_Chain_FindFirstChainFragment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.Chain.chainInteractions

An 
interaction of a given type between a pair  of Chains
  @param  Mols_Chain self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Mols_ChainInteraction Mols_Chain_FindFirstChainInteraction(Mols_Chain self, ApiMap conditions)
{
  
  Mols_ChainInteraction obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChainInteraction");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'findFirstChainInteraction'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'findFirstChainInteraction' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.Chain.chainInteractions

An 
interaction of a given type between a pair  of Chains
  @param  Mols_Chain self
  @returns  the first value that satisfies the conditions 
**/
Mols_ChainInteraction Mols_Chain_FindFirstChainInteraction_keyval0(Mols_Chain self)
{
  
  Mols_ChainInteraction  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mols_Chain_FindFirstChainInteraction(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.Chain.chainInteractions

An 
interaction of a given type between a pair  of Chains
  @param  Mols_Chain self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Mols_ChainInteraction Mols_Chain_FindFirstChainInteraction_keyval1(Mols_Chain self, char * key, ApiObject value)
{
  
  Mols_ChainInteraction  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mols_Chain_FindFirstChainInteraction(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.Chain.chainInteractions

An 
interaction of a given type between a pair  of Chains
  @param  Mols_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Mols_ChainInteraction Mols_Chain_FindFirstChainInteraction_keyval2(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Mols_ChainInteraction  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mols_Chain_FindFirstChainInteraction(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.Chain.chainInteractions

An 
interaction of a given type between a pair  of Chains
  @param  Mols_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Mols_ChainInteraction Mols_Chain_FindFirstChainInteraction_keyval3(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Mols_ChainInteraction  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mols_Chain_FindFirstChainInteraction(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.Chain.chainInteractions

An 
interaction of a given type between a pair  of Chains
  @param  Mols_Chain self
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
Mols_ChainInteraction Mols_Chain_FindFirstChainInteraction_keyval4(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Mols_ChainInteraction  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mols_Chain_FindFirstChainInteraction(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolSystem.Chain.chainStateSets

ChainStateSets belonging to 
Chain
  @param  Mols_Chain self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_ChainStateSet Mols_Chain_FindFirstChainStateSet(Mols_Chain self, ApiMap conditions)
{
  
  Nmr_ChainStateSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChainStateSet");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'findFirstChainStateSet'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'findFirstChainStateSet' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolSystem.Chain.chainStateSets

ChainStateSets belonging to 
Chain
  @param  Mols_Chain self
  @returns  the first value that satisfies the conditions 
**/
Nmr_ChainStateSet Mols_Chain_FindFirstChainStateSet_keyval0(Mols_Chain self)
{
  
  Nmr_ChainStateSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mols_Chain_FindFirstChainStateSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolSystem.Chain.chainStateSets

ChainStateSets belonging to 
Chain
  @param  Mols_Chain self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_ChainStateSet Mols_Chain_FindFirstChainStateSet_keyval1(Mols_Chain self, char * key, ApiObject value)
{
  
  Nmr_ChainStateSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mols_Chain_FindFirstChainStateSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolSystem.Chain.chainStateSets

ChainStateSets belonging to 
Chain
  @param  Mols_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_ChainStateSet Mols_Chain_FindFirstChainStateSet_keyval2(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_ChainStateSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mols_Chain_FindFirstChainStateSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolSystem.Chain.chainStateSets

ChainStateSets belonging to 
Chain
  @param  Mols_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_ChainStateSet Mols_Chain_FindFirstChainStateSet_keyval3(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_ChainStateSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mols_Chain_FindFirstChainStateSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolSystem.Chain.chainStateSets

ChainStateSets belonging to 
Chain
  @param  Mols_Chain self
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
Nmr_ChainStateSet Mols_Chain_FindFirstChainStateSet_keyval4(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_ChainStateSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mols_Chain_FindFirstChainStateSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.Chain.dangleChains

Chains with 
Dangle dihedral angle predictions
  @param  Mols_Chain self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Dang_DangleChain Mols_Chain_FindFirstDangleChain(Mols_Chain self, ApiMap conditions)
{
  
  Dang_DangleChain obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstDangleChain");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'findFirstDangleChain'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'findFirstDangleChain' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.Chain.dangleChains

Chains with 
Dangle dihedral angle predictions
  @param  Mols_Chain self
  @returns  the first value that satisfies the conditions 
**/
Dang_DangleChain Mols_Chain_FindFirstDangleChain_keyval0(Mols_Chain self)
{
  
  Dang_DangleChain  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mols_Chain_FindFirstDangleChain(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.Chain.dangleChains

Chains with 
Dangle dihedral angle predictions
  @param  Mols_Chain self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Dang_DangleChain Mols_Chain_FindFirstDangleChain_keyval1(Mols_Chain self, char * key, ApiObject value)
{
  
  Dang_DangleChain  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mols_Chain_FindFirstDangleChain(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.Chain.dangleChains

Chains with 
Dangle dihedral angle predictions
  @param  Mols_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Dang_DangleChain Mols_Chain_FindFirstDangleChain_keyval2(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Dang_DangleChain  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mols_Chain_FindFirstDangleChain(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.Chain.dangleChains

Chains with 
Dangle dihedral angle predictions
  @param  Mols_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Dang_DangleChain Mols_Chain_FindFirstDangleChain_keyval3(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Dang_DangleChain  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mols_Chain_FindFirstDangleChain(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.Chain.dangleChains

Chains with 
Dangle dihedral angle predictions
  @param  Mols_Chain self
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
Dang_DangleChain Mols_Chain_FindFirstDangleChain_keyval4(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Dang_DangleChain  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mols_Chain_FindFirstDangleChain(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolSystem.Chain.molSysChainValidations

Validation results 
for Chain
  @param  Mols_Chain self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Vald_MolSysChainValidation Mols_Chain_FindFirstMolSysChainValidation(Mols_Chain self, ApiMap conditions)
{
  
  Vald_MolSysChainValidation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstMolSysChainValidation");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'findFirstMolSysChainValidation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'findFirstMolSysChainValidation' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolSystem.Chain.molSysChainValidations

Validation results 
for Chain
  @param  Mols_Chain self
  @returns  the first value that satisfies the conditions 
**/
Vald_MolSysChainValidation Mols_Chain_FindFirstMolSysChainValidation_keyval0(Mols_Chain self)
{
  
  Vald_MolSysChainValidation  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mols_Chain_FindFirstMolSysChainValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolSystem.Chain.molSysChainValidations

Validation results 
for Chain
  @param  Mols_Chain self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Vald_MolSysChainValidation Mols_Chain_FindFirstMolSysChainValidation_keyval1(Mols_Chain self, char * key, ApiObject value)
{
  
  Vald_MolSysChainValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mols_Chain_FindFirstMolSysChainValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolSystem.Chain.molSysChainValidations

Validation results 
for Chain
  @param  Mols_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Vald_MolSysChainValidation Mols_Chain_FindFirstMolSysChainValidation_keyval2(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Vald_MolSysChainValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mols_Chain_FindFirstMolSysChainValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolSystem.Chain.molSysChainValidations

Validation results 
for Chain
  @param  Mols_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Vald_MolSysChainValidation Mols_Chain_FindFirstMolSysChainValidation_keyval3(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Vald_MolSysChainValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mols_Chain_FindFirstMolSysChainValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolSystem.Chain.molSysChainValidations

Validation results 
for Chain
  @param  Mols_Chain self
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
Vald_MolSysChainValidation Mols_Chain_FindFirstMolSysChainValidation_keyval4(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Vald_MolSysChainValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mols_Chain_FindFirstMolSysChainValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.Chain.residues

child link
  @param  Mols_Chain self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Mols_Residue Mols_Chain_FindFirstResidue(Mols_Chain self, ApiMap conditions)
{
  
  Mols_Residue obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstResidue");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'findFirstResidue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'findFirstResidue' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.Chain.residues

child link
  @param  Mols_Chain self
  @returns  the first value that satisfies the conditions 
**/
Mols_Residue Mols_Chain_FindFirstResidue_keyval0(Mols_Chain self)
{
  
  Mols_Residue  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mols_Chain_FindFirstResidue(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.Chain.residues

child link
  @param  Mols_Chain self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Mols_Residue Mols_Chain_FindFirstResidue_keyval1(Mols_Chain self, char * key, ApiObject value)
{
  
  Mols_Residue  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mols_Chain_FindFirstResidue(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.Chain.residues

child link
  @param  Mols_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Mols_Residue Mols_Chain_FindFirstResidue_keyval2(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Mols_Residue  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mols_Chain_FindFirstResidue(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.Chain.residues

child link
  @param  Mols_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Mols_Residue Mols_Chain_FindFirstResidue_keyval3(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Mols_Residue  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mols_Chain_FindFirstResidue(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolSystem.Chain.residues

child link
  @param  Mols_Chain self
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
Mols_Residue Mols_Chain_FindFirstResidue_keyval4(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Mols_Residue  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mols_Chain_FindFirstResidue(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolSystem.Chain.resonanceGroups

ResonanceGroups that may 
be relevant to Chain
  @param  Mols_Chain self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResonanceGroup Mols_Chain_FindFirstResonanceGroup(Mols_Chain self, ApiMap conditions)
{
  
  Nmr_ResonanceGroup obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstResonanceGroup");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'findFirstResonanceGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'findFirstResonanceGroup' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolSystem.Chain.resonanceGroups

ResonanceGroups that may 
be relevant to Chain
  @param  Mols_Chain self
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResonanceGroup Mols_Chain_FindFirstResonanceGroup_keyval0(Mols_Chain self)
{
  
  Nmr_ResonanceGroup  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mols_Chain_FindFirstResonanceGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolSystem.Chain.resonanceGroups

ResonanceGroups that may 
be relevant to Chain
  @param  Mols_Chain self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResonanceGroup Mols_Chain_FindFirstResonanceGroup_keyval1(Mols_Chain self, char * key, ApiObject value)
{
  
  Nmr_ResonanceGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mols_Chain_FindFirstResonanceGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolSystem.Chain.resonanceGroups

ResonanceGroups that may 
be relevant to Chain
  @param  Mols_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResonanceGroup Mols_Chain_FindFirstResonanceGroup_keyval2(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_ResonanceGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mols_Chain_FindFirstResonanceGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolSystem.Chain.resonanceGroups

ResonanceGroups that may 
be relevant to Chain
  @param  Mols_Chain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResonanceGroup Mols_Chain_FindFirstResonanceGroup_keyval3(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_ResonanceGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mols_Chain_FindFirstResonanceGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolSystem.Chain.resonanceGroups

ResonanceGroups that may 
be relevant to Chain
  @param  Mols_Chain self
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
Nmr_ResonanceGroup Mols_Chain_FindFirstResonanceGroup_keyval4(Mols_Chain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_ResonanceGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mols_Chain_FindFirstResonanceGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.molecule.MolSystem.Chain
  @param  Mols_Chain self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Mols_Chain_Get(Mols_Chain self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Mols_Chain self
  @returns   the result
**/
Acco_AccessObject Mols_Chain_GetAccess(Mols_Chain self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'getAccess' is not callable");
  
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
  @param  Mols_Chain self
  @returns   the result
**/
Acco_AccessObject Mols_Chain_GetActiveAccess(Mols_Chain self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'getActiveAccess' is not callable");
  
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
  @param  Mols_Chain self
  @returns   the result
**/
ApiList Mols_Chain_GetApplicationData(Mols_Chain self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.molecule.MolSystem.Chain
  @param  Mols_Chain self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Mols_Chain Mols_Chain_GetByKey(Mols_Chain self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Mols_Chain obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'getByKey' is not callable");
  
  args = PyTuple_Pack(2, startObj, fullKey);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolSystem.Chain.chainFragments

child link to class 
ChainFragment
  @param  Mols_Chain self
  @returns   the result
**/
ApiSet Mols_Chain_GetChainFragments(Mols_Chain self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChainFragments");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'getChainFragments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'getChainFragments' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolSystem.Chain.chainInteractions

An interaction 
of a given type between a pair  of Chains
  @param  Mols_Chain self
  @returns   the result
**/
ApiSet Mols_Chain_GetChainInteractions(Mols_Chain self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChainInteractions");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'getChainInteractions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'getChainInteractions' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolSystem.Chain.chainStateSets

ChainStateSets 
belonging to Chain
  @param  Mols_Chain self
  @returns   the result
**/
ApiSet Mols_Chain_GetChainStateSets(Mols_Chain self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChainStateSets");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'getChainStateSets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'getChainStateSets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolSystem.Chain.chemExchangeState

for NMR 
spectroscopy. Short text describing the chemical exchange state.
  @param  Mols_Chain self
  @returns   the result
**/
ApiString Mols_Chain_GetChemExchangeState(Mols_Chain self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemExchangeState");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'getChemExchangeState'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'getChemExchangeState' is not callable");
  
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
  @param  Mols_Chain self
  @returns   the result
**/
ApiString Mols_Chain_GetClassName(Mols_Chain self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolSystem.Chain.code

ChainCode - key for the Chain 
class. Should ideally be a single letter, if possible.
  @param  Mols_Chain self
  @returns   the result
**/
ApiString Mols_Chain_GetCode(Mols_Chain self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'getCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'getCode' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolSystem.Chain.conformationalIsomer

short text 
describing the conformational isomer
  @param  Mols_Chain self
  @returns   the result
**/
ApiString Mols_Chain_GetConformationalIsomer(Mols_Chain self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getConformationalIsomer");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'getConformationalIsomer'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'getConformationalIsomer' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolSystem.Chain.dangleChains

Chains with Dangle 
dihedral angle predictions
  @param  Mols_Chain self
  @returns   the result
**/
ApiSet Mols_Chain_GetDangleChains(Mols_Chain self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDangleChains");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'getDangleChains'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'getDangleChains' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolSystem.Chain.details

Free text, for notes, 
explanatory comments, etc.
  @param  Mols_Chain self
  @returns   the result
**/
ApiString Mols_Chain_GetDetails(Mols_Chain self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'getDetails' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived attribute empiricalFormula
  @param  Mols_Chain self
  @returns   the result
**/
ApiString Mols_Chain_GetEmpiricalFormula(Mols_Chain self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getEmpiricalFormula");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'getEmpiricalFormula'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'getEmpiricalFormula' is not callable");
  
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
  @param  Mols_Chain self
  @returns   the result
**/
ApiList Mols_Chain_GetFieldNames(Mols_Chain self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived attribute formalCharge
  @param  Mols_Chain self
  @returns   the result
**/
ApiInteger Mols_Chain_GetFormalCharge(Mols_Chain self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFormalCharge");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'getFormalCharge'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'getFormalCharge' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.molecule.MolSystem.Chain
  @param  Mols_Chain self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Mols_Chain_GetFullKey(Mols_Chain self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'getFullKey' is not callable");
  
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
  @param  Mols_Chain self
  @returns   the result
**/
ApiBoolean Mols_Chain_GetInConstructor(Mols_Chain self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'getInConstructor' is not callable");
  
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
  @param  Mols_Chain self
  @returns   the result
**/
ApiBoolean Mols_Chain_GetIsDeleted(Mols_Chain self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.molecule.MolSystem.Chain
  @param  Mols_Chain self
  @returns  Local object key
**/
ApiObject Mols_Chain_GetLocalKey(Mols_Chain self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolSystem.Chain.magnEquivalenceCode

For NMR data. 
Chains with the same magnEquivalenceCode are magnetically equivalent 
within the MolSystem. If not set no chains are magnetically equivalent.
  @param  Mols_Chain self
  @returns   the result
**/
ApiString Mols_Chain_GetMagnEquivalenceCode(Mols_Chain self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMagnEquivalenceCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'getMagnEquivalenceCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'getMagnEquivalenceCode' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolSystem.Chain.molSysChainValidations

Validation 
results for Chain
  @param  Mols_Chain self
  @returns   the result
**/
ApiSet Mols_Chain_GetMolSysChainValidations(Mols_Chain self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolSysChainValidations");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'getMolSysChainValidations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'getMolSysChainValidations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolSystem.Chain.molSystem

parent link
  @param  Mols_Chain self
  @returns   the result
**/
Mols_MolSystem Mols_Chain_GetMolSystem(Mols_Chain self)
{
  
  Mols_MolSystem obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolSystem");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'getMolSystem'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'getMolSystem' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived attribute molecularMass
  @param  Mols_Chain self
  @returns   the result
**/
ApiFloat Mols_Chain_GetMolecularMass(Mols_Chain self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolecularMass");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'getMolecularMass'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'getMolecularMass' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolSystem.Chain.molecule

Molecule to which Chain 
corresponds
  @param  Mols_Chain self
  @returns   the result
**/
Mole_Molecule Mols_Chain_GetMolecule(Mols_Chain self)
{
  
  Mole_Molecule obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolecule");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'getMolecule'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'getMolecule' is not callable");
  
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
  @param  Mols_Chain self
  @returns   the result
**/
ApiString Mols_Chain_GetPackageName(Mols_Chain self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'getPackageName' is not callable");
  
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
  @param  Mols_Chain self
  @returns   the result
**/
ApiString Mols_Chain_GetPackageShortName(Mols_Chain self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolSystem.Chain.parent

link to parent object - 
synonym for molSystem
  @param  Mols_Chain self
  @returns   the result
**/
Mols_MolSystem Mols_Chain_GetParent(Mols_Chain self)
{
  
  Mols_MolSystem obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolSystem.Chain.pdbOneLetterCode

One letter chain 
identifier. Will be used by PDB (and programs that use similar 
conventions). WARNING: having same oneLetterCode for different chains is 
legal but may cause serious confusion.
  @param  Mols_Chain self
  @returns   the result
**/
ApiString Mols_Chain_GetPdbOneLetterCode(Mols_Chain self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPdbOneLetterCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'getPdbOneLetterCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'getPdbOneLetterCode' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolSystem.Chain.physicalState

e.g. folded/unfolded
  @param  Mols_Chain self
  @returns   the result
**/
ApiString Mols_Chain_GetPhysicalState(Mols_Chain self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPhysicalState");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'getPhysicalState'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'getPhysicalState' is not callable");
  
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
  @param  Mols_Chain self
  @returns   the result
**/
ApiString Mols_Chain_GetQualifiedName(Mols_Chain self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolSystem.Chain.residues

child link
  @param  Mols_Chain self
  @returns   the result
**/
ApiSet Mols_Chain_GetResidues(Mols_Chain self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getResidues");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'getResidues'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'getResidues' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolSystem.Chain.resonanceGroups

ResonanceGroups 
that may be relevant to Chain
  @param  Mols_Chain self
  @returns   the result
**/
ApiSet Mols_Chain_GetResonanceGroups(Mols_Chain self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getResonanceGroups");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'getResonanceGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'getResonanceGroups' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolSystem.Chain.role

Role of Chain within 
MolSystem
  @param  Mols_Chain self
  @returns   the result
**/
ApiString Mols_Chain_GetRole(Mols_Chain self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRole");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'getRole'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'getRole' is not callable");
  
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
  @param  Mols_Chain self
  @returns   the result
**/
Impl_MemopsRoot Mols_Chain_GetRoot(Mols_Chain self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'getRoot' is not callable");
  
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
  @param  Mols_Chain self
  @returns   the result
**/
Impl_TopObject Mols_Chain_GetTopObject(Mols_Chain self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.molecule.MolSystem.Chain
  @param  Mols_MolSystem parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Mols_Chain Mols_Chain_Init(Mols_MolSystem parent, ApiMap attrlinks)
{
  
  return Mols_MolSystem_NewChain(parent, attrlinks);
}

/**
  Constructor for ccp.molecule.MolSystem.Chain
  @param  Mols_MolSystem parent
  @param  char * code
  @param  Mole_Molecule molecule
  @returns  the new object
**/
Mols_Chain Mols_Chain_Init_reqd(Mols_MolSystem parent, char * code, Mole_Molecule molecule)
{
  
  Mols_Chain  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__code = ApiString_New(code);

  PyDict_SetItemString(attrlinks, "code", api__code);
  PyDict_SetItemString(attrlinks, "molecule", molecule);
  
  obj = Mols_Chain_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__code);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.MolSystem.ChainFragment
  @param  Mols_Chain self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Mols_ChainFragment Mols_Chain_NewChainFragment(Mols_Chain self, ApiMap attrlinks)
{
  
  Mols_ChainFragment obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newChainFragment");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'newChainFragment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'newChainFragment' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.MolSystem.ChainFragment
  @param  Mols_Chain self
  @param  int isLinearPolymer
  @param  char * molType
  @returns  the new object
**/
Mols_ChainFragment Mols_Chain_NewChainFragment_reqd(Mols_Chain self, int isLinearPolymer, char * molType)
{
  
  Mols_ChainFragment  obj;
  PyObject *attrlinks = PyDict_New();
  ApiBoolean api__isLinearPolymer = ApiBoolean_New(isLinearPolymer);
  ApiString api__molType = ApiString_New(molType);

  PyDict_SetItemString(attrlinks, "isLinearPolymer", api__isLinearPolymer);
  PyDict_SetItemString(attrlinks, "molType", api__molType);
  
  obj = Mols_Chain_NewChainFragment(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__isLinearPolymer);
  Py_DECREF(api__molType);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.MolSystem.Residue
  @param  Mols_Chain self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Mols_Residue Mols_Chain_NewResidue(Mols_Chain self, ApiMap attrlinks)
{
  
  Mols_Residue obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newResidue");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'newResidue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'newResidue' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.MolSystem.Residue
  @param  Mols_Chain self
  @param  char * descriptor
  @param  char * linking
  @param  ApiInteger seqCode
  @param  ApiInteger seqId
  @returns  the new object
**/
Mols_Residue Mols_Chain_NewResidue_reqd(Mols_Chain self, char * descriptor, char * linking, ApiInteger seqCode, ApiInteger seqId)
{
  
  Mols_Residue  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__descriptor = ApiString_New(descriptor);
  ApiString api__linking = ApiString_New(linking);

  PyDict_SetItemString(attrlinks, "descriptor", api__descriptor);
  PyDict_SetItemString(attrlinks, "linking", api__linking);
  PyDict_SetItemString(attrlinks, "seqCode", seqCode);
  PyDict_SetItemString(attrlinks, "seqId", seqId);
  
  obj = Mols_Chain_NewResidue(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__descriptor);
  Py_DECREF(api__linking);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_Chain self
  @param  Impl_ApplicationData value
**/
void *Mols_Chain_RemoveApplicationData(Mols_Chain self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
ccp.molecule.MolSystem.Chain.molSysChainValidations

Validation results 
for Chain
  @param  Mols_Chain self
  @param  Vald_MolSysChainValidation value
**/
void *Mols_Chain_RemoveMolSysChainValidation(Mols_Chain self, Vald_MolSysChainValidation value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeMolSysChainValidation");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'removeMolSysChainValidation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'removeMolSysChainValidation' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.molecule.MolSystem.Chain.resonanceGroups

ResonanceGroups 
that may be relevant to Chain
  @param  Mols_Chain self
  @param  Nmr_ResonanceGroup value
**/
void *Mols_Chain_RemoveResonanceGroup(Mols_Chain self, Nmr_ResonanceGroup value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeResonanceGroup");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'removeResonanceGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'removeResonanceGroup' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.molecule.MolSystem.Chain
  @param  Mols_Chain self
  @param  ApiString name
  @param  ApiObject value
**/
void *Mols_Chain_Set(Mols_Chain self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Mols_Chain self
  @param  Acco_AccessObject value
**/
void *Mols_Chain_SetAccess(Mols_Chain self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'setAccess' is not callable");
  
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
  @param  Mols_Chain self
  @param  ApiList values
**/
void *Mols_Chain_SetApplicationData(Mols_Chain self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.MolSystem.Chain.chainInteractions

An interaction 
of a given type between a pair  of Chains
  @param  Mols_Chain self
  @param  ApiSet values
**/
void *Mols_Chain_SetChainInteractions(Mols_Chain self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setChainInteractions");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'setChainInteractions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'setChainInteractions' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.MolSystem.Chain.chainStateSets

ChainStateSets 
belonging to Chain
  @param  Mols_Chain self
  @param  ApiSet values
**/
void *Mols_Chain_SetChainStateSets(Mols_Chain self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setChainStateSets");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'setChainStateSets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'setChainStateSets' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.MolSystem.Chain.chemExchangeState

for NMR 
spectroscopy. Short text describing the chemical exchange state.
  @param  Mols_Chain self
  @param  ApiString value
**/
void *Mols_Chain_SetChemExchangeState(Mols_Chain self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setChemExchangeState");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'setChemExchangeState'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'setChemExchangeState' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.MolSystem.Chain.code

ChainCode - key for the Chain 
class. Should ideally be a single letter, if possible.
  @param  Mols_Chain self
  @param  ApiString value
**/
void *Mols_Chain_SetCode(Mols_Chain self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'setCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'setCode' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.MolSystem.Chain.conformationalIsomer

short text 
describing the conformational isomer
  @param  Mols_Chain self
  @param  ApiString value
**/
void *Mols_Chain_SetConformationalIsomer(Mols_Chain self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setConformationalIsomer");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'setConformationalIsomer'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'setConformationalIsomer' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.MolSystem.Chain.dangleChains

Chains with Dangle 
dihedral angle predictions
  @param  Mols_Chain self
  @param  ApiSet values
**/
void *Mols_Chain_SetDangleChains(Mols_Chain self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDangleChains");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'setDangleChains'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'setDangleChains' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.MolSystem.Chain.details

Free text, for notes, 
explanatory comments, etc.
  @param  Mols_Chain self
  @param  ApiString value
**/
void *Mols_Chain_SetDetails(Mols_Chain self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.MolSystem.Chain.magnEquivalenceCode

For NMR data. 
Chains with the same magnEquivalenceCode are magnetically equivalent 
within the MolSystem. If not set no chains are magnetically equivalent.
  @param  Mols_Chain self
  @param  ApiString value
**/
void *Mols_Chain_SetMagnEquivalenceCode(Mols_Chain self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMagnEquivalenceCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'setMagnEquivalenceCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'setMagnEquivalenceCode' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.MolSystem.Chain.molSysChainValidations

Validation 
results for Chain
  @param  Mols_Chain self
  @param  ApiSet values
**/
void *Mols_Chain_SetMolSysChainValidations(Mols_Chain self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMolSysChainValidations");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'setMolSysChainValidations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'setMolSysChainValidations' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.MolSystem.Chain.molecule

Molecule to which Chain 
corresponds
  @param  Mols_Chain self
  @param  Mole_Molecule value
**/
void *Mols_Chain_SetMolecule(Mols_Chain self, Mole_Molecule value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMolecule");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'setMolecule'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'setMolecule' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.MolSystem.Chain.pdbOneLetterCode

One letter chain 
identifier. Will be used by PDB (and programs that use similar 
conventions). WARNING: having same oneLetterCode for different chains is 
legal but may cause serious confusion.
  @param  Mols_Chain self
  @param  ApiString value
**/
void *Mols_Chain_SetPdbOneLetterCode(Mols_Chain self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPdbOneLetterCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'setPdbOneLetterCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'setPdbOneLetterCode' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.MolSystem.Chain.physicalState

e.g. folded/unfolded
  @param  Mols_Chain self
  @param  ApiString value
**/
void *Mols_Chain_SetPhysicalState(Mols_Chain self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPhysicalState");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'setPhysicalState'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'setPhysicalState' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.MolSystem.Chain.resonanceGroups

ResonanceGroups 
that may be relevant to Chain
  @param  Mols_Chain self
  @param  ApiSet values
**/
void *Mols_Chain_SetResonanceGroups(Mols_Chain self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setResonanceGroups");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'setResonanceGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'setResonanceGroups' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.MolSystem.Chain.role

Role of Chain within 
MolSystem
  @param  Mols_Chain self
  @param  ApiString value
**/
void *Mols_Chain_SetRole(Mols_Chain self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRole");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'setRole'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'setRole' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.MolSystem.Chain.chainFragments

child link to 
class ChainFragment
  @param  Mols_Chain self
  @returns   the result
**/
ApiList Mols_Chain_SortedChainFragments(Mols_Chain self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChainFragments");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'sortedChainFragments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'sortedChainFragments' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.MolSystem.Chain.chainInteractions

An 
interaction of a given type between a pair  of Chains
  @param  Mols_Chain self
  @returns   the result
**/
ApiList Mols_Chain_SortedChainInteractions(Mols_Chain self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChainInteractions");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'sortedChainInteractions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'sortedChainInteractions' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.MolSystem.Chain.chainStateSets

ChainStateSets 
belonging to Chain
  @param  Mols_Chain self
  @returns   the result
**/
ApiList Mols_Chain_SortedChainStateSets(Mols_Chain self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChainStateSets");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'sortedChainStateSets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'sortedChainStateSets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.MolSystem.Chain.dangleChains

Chains with Dangle 
dihedral angle predictions
  @param  Mols_Chain self
  @returns   the result
**/
ApiList Mols_Chain_SortedDangleChains(Mols_Chain self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedDangleChains");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'sortedDangleChains'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'sortedDangleChains' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.molecule.MolSystem.Chain.molSysChainValidations

Validation results 
for Chain
  @param  Mols_Chain self
  @returns   the result
**/
ApiList Mols_Chain_SortedMolSysChainValidations(Mols_Chain self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedMolSysChainValidations");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'sortedMolSysChainValidations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'sortedMolSysChainValidations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.MolSystem.Chain.residues

child link
  @param  Mols_Chain self
  @returns   the result
**/
ApiList Mols_Chain_SortedResidues(Mols_Chain self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedResidues");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'sortedResidues'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'sortedResidues' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.MolSystem.Chain.resonanceGroups

ResonanceGroups 
that may be relevant to Chain
  @param  Mols_Chain self
  @returns   the result
**/
ApiList Mols_Chain_SortedResonanceGroups(Mols_Chain self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedResonanceGroups");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.Chain: cannot find method 'sortedResonanceGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.Chain: method 'sortedResonanceGroups' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
