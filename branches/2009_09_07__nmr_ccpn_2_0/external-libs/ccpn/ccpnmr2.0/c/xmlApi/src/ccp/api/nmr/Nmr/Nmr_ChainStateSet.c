
#include "ccp.h"

/*
  Defines a set of states that apply to a chain. The ChainStates in a ChainStateSet are mutually exclusive. Their exact nature is defined by the StateSiteType. 
  
  ChainStates serve to distinguish Resonances that arise from the same atom in different states of the chain, to describe the State of molecules used for a structure generation, and to define the state (including fast exchange) of a chain under the conditions of a given experiment. 
  
  A ChainState only describes the situation for one particular set of alternatives, and implies nothing about others. For example, a molecule with seven prolines in slow cis/trans equilibrium would have seven ChainStateSets. A given resonance could then be described (by linking it to ChainStates) as Pro-47 cis, Pro-112 trans, without implying anything about the state of the remaining five prolines.  
  
  stateSetType and ChainState.name are freely changeable, reflecting the fact that the origin of sets of observed resonances is often unknown until a late stage of analysis. Once the precise situation is known, the following procedures should be used where applicable:
  
  stateSetType: cis/trans
  ChainState names: cis, trans
  Links: to the two atoms that are cis or trans (in the case of peptide bonds to the two alpha carbons of the residues involved). 
  
  stateSetType: protonation
  ChainState names: protonated, deprotonated
  Links: To the proton that is removed on deprotonation.
  
  stateSetType: isotopomer
  ChainState names : isotope codes of the relevant isotopes (e.g. 12C, 13C)
  Links: To the atom(s) that change isotope.
  NB this mechanism only handles atoms of the same type that change in parallel. If the isotope substitution pattern is more complex, is may be necessary to define several ChainStateSets, possibly redefining the ChainStates when the situation has been analysed.
  
  stateSetType: folding
  ChainState names: folded, unfolded
  Links : to the residues involved in the transition.
  
  stateSetType : conformation
  ChainState names: can be chosen freely
  Links: to the residues changing conformation.
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ChainStateSet self
  @param  Impl_ApplicationData value
**/
void *Nmr_ChainStateSet_AddApplicationData(Nmr_ChainStateSet self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.Nmr.ChainStateSet.atoms

Atoms 'involved' in a 
ChainStateSet. The intention is that the link should describe atoms that 
change chemically or conformationally, rather than atoms that merely 
have changed NMR parameters. See documentation of ChainStateSet for 
recommendations for handling protonation, cis/trans, and isotopomers.
  @param  Nmr_ChainStateSet self
  @param  Mols_Atom value
**/
void *Nmr_ChainStateSet_AddAtom(Nmr_ChainStateSet self, Mols_Atom value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addAtom");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: cannot find method 'addAtom'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: method 'addAtom' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.Nmr.ChainStateSet.residues

Residues involved in 
chainStates.
  @param  Nmr_ChainStateSet self
  @param  Mols_Residue value
**/
void *Nmr_ChainStateSet_AddResidue(Nmr_ChainStateSet self, Mols_Residue value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addResidue");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: cannot find method 'addResidue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: method 'addResidue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.nmr.Nmr.ChainStateSet
  @param  Nmr_ChainStateSet self
  @param  ApiBoolean complete
**/
void *Nmr_ChainStateSet_CheckAllValid(Nmr_ChainStateSet self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.nmr.Nmr.ChainStateSet
  @param  Nmr_ChainStateSet self
  @param  ApiBoolean complete
**/
void *Nmr_ChainStateSet_CheckValid(Nmr_ChainStateSet self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: method 'checkValid' is not callable");
  
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
  @param  Nmr_ChainStateSet self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_ChainStateSet_FindAllApplicationData(Nmr_ChainStateSet self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: method 'findAllApplicationData' is not callable");
  
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
  @param  Nmr_ChainStateSet self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_ChainStateSet_FindAllApplicationData_keyval0(Nmr_ChainStateSet self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ChainStateSet_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ChainStateSet self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_ChainStateSet_FindAllApplicationData_keyval1(Nmr_ChainStateSet self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ChainStateSet_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ChainStateSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_ChainStateSet_FindAllApplicationData_keyval2(Nmr_ChainStateSet self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ChainStateSet_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ChainStateSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_ChainStateSet_FindAllApplicationData_keyval3(Nmr_ChainStateSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ChainStateSet_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ChainStateSet self
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
ApiList Nmr_ChainStateSet_FindAllApplicationData_keyval4(Nmr_ChainStateSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ChainStateSet_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ChainStateSet.atoms

Atoms 'involved' in a 
ChainStateSet. The intention is that the link should describe atoms that 
change chemically or conformationally, rather than atoms that merely 
have changed NMR parameters. See documentation of ChainStateSet for 
recommendations for handling protonation, cis/trans, and isotopomers.
  @param  Nmr_ChainStateSet self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ChainStateSet_FindAllAtoms(Nmr_ChainStateSet self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllAtoms");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: cannot find method 'findAllAtoms'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: method 'findAllAtoms' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ChainStateSet.atoms

Atoms 'involved' in a 
ChainStateSet. The intention is that the link should describe atoms that 
change chemically or conformationally, rather than atoms that merely 
have changed NMR parameters. See documentation of ChainStateSet for 
recommendations for handling protonation, cis/trans, and isotopomers.
  @param  Nmr_ChainStateSet self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ChainStateSet_FindAllAtoms_keyval0(Nmr_ChainStateSet self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ChainStateSet_FindAllAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ChainStateSet.atoms

Atoms 'involved' in a 
ChainStateSet. The intention is that the link should describe atoms that 
change chemically or conformationally, rather than atoms that merely 
have changed NMR parameters. See documentation of ChainStateSet for 
recommendations for handling protonation, cis/trans, and isotopomers.
  @param  Nmr_ChainStateSet self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ChainStateSet_FindAllAtoms_keyval1(Nmr_ChainStateSet self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ChainStateSet_FindAllAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ChainStateSet.atoms

Atoms 'involved' in a 
ChainStateSet. The intention is that the link should describe atoms that 
change chemically or conformationally, rather than atoms that merely 
have changed NMR parameters. See documentation of ChainStateSet for 
recommendations for handling protonation, cis/trans, and isotopomers.
  @param  Nmr_ChainStateSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ChainStateSet_FindAllAtoms_keyval2(Nmr_ChainStateSet self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ChainStateSet_FindAllAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ChainStateSet.atoms

Atoms 'involved' in a 
ChainStateSet. The intention is that the link should describe atoms that 
change chemically or conformationally, rather than atoms that merely 
have changed NMR parameters. See documentation of ChainStateSet for 
recommendations for handling protonation, cis/trans, and isotopomers.
  @param  Nmr_ChainStateSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ChainStateSet_FindAllAtoms_keyval3(Nmr_ChainStateSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ChainStateSet_FindAllAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ChainStateSet.atoms

Atoms 'involved' in a 
ChainStateSet. The intention is that the link should describe atoms that 
change chemically or conformationally, rather than atoms that merely 
have changed NMR parameters. See documentation of ChainStateSet for 
recommendations for handling protonation, cis/trans, and isotopomers.
  @param  Nmr_ChainStateSet self
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
ApiSet Nmr_ChainStateSet_FindAllAtoms_keyval4(Nmr_ChainStateSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ChainStateSet_FindAllAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ChainStateSet.chainStates

child link to class 
ChainState
  @param  Nmr_ChainStateSet self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ChainStateSet_FindAllChainStates(Nmr_ChainStateSet self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChainStates");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: cannot find method 'findAllChainStates'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: method 'findAllChainStates' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ChainStateSet.chainStates

child link to class 
ChainState
  @param  Nmr_ChainStateSet self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ChainStateSet_FindAllChainStates_keyval0(Nmr_ChainStateSet self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ChainStateSet_FindAllChainStates(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ChainStateSet.chainStates

child link to class 
ChainState
  @param  Nmr_ChainStateSet self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ChainStateSet_FindAllChainStates_keyval1(Nmr_ChainStateSet self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ChainStateSet_FindAllChainStates(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ChainStateSet.chainStates

child link to class 
ChainState
  @param  Nmr_ChainStateSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ChainStateSet_FindAllChainStates_keyval2(Nmr_ChainStateSet self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ChainStateSet_FindAllChainStates(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ChainStateSet.chainStates

child link to class 
ChainState
  @param  Nmr_ChainStateSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ChainStateSet_FindAllChainStates_keyval3(Nmr_ChainStateSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ChainStateSet_FindAllChainStates(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ChainStateSet.chainStates

child link to class 
ChainState
  @param  Nmr_ChainStateSet self
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
ApiSet Nmr_ChainStateSet_FindAllChainStates_keyval4(Nmr_ChainStateSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ChainStateSet_FindAllChainStates(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ChainStateSet.residues

Residues involved in 
chainStates.
  @param  Nmr_ChainStateSet self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ChainStateSet_FindAllResidues(Nmr_ChainStateSet self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllResidues");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: cannot find method 'findAllResidues'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: method 'findAllResidues' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ChainStateSet.residues

Residues involved in 
chainStates.
  @param  Nmr_ChainStateSet self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ChainStateSet_FindAllResidues_keyval0(Nmr_ChainStateSet self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ChainStateSet_FindAllResidues(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ChainStateSet.residues

Residues involved in 
chainStates.
  @param  Nmr_ChainStateSet self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ChainStateSet_FindAllResidues_keyval1(Nmr_ChainStateSet self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ChainStateSet_FindAllResidues(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ChainStateSet.residues

Residues involved in 
chainStates.
  @param  Nmr_ChainStateSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ChainStateSet_FindAllResidues_keyval2(Nmr_ChainStateSet self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ChainStateSet_FindAllResidues(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ChainStateSet.residues

Residues involved in 
chainStates.
  @param  Nmr_ChainStateSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ChainStateSet_FindAllResidues_keyval3(Nmr_ChainStateSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ChainStateSet_FindAllResidues(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ChainStateSet.residues

Residues involved in 
chainStates.
  @param  Nmr_ChainStateSet self
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
ApiSet Nmr_ChainStateSet_FindAllResidues_keyval4(Nmr_ChainStateSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ChainStateSet_FindAllResidues(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ChainStateSet self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_ChainStateSet_FindFirstApplicationData(Nmr_ChainStateSet self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nmr_ChainStateSet self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_ChainStateSet_FindFirstApplicationData_keyval0(Nmr_ChainStateSet self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ChainStateSet_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ChainStateSet self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_ChainStateSet_FindFirstApplicationData_keyval1(Nmr_ChainStateSet self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ChainStateSet_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ChainStateSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_ChainStateSet_FindFirstApplicationData_keyval2(Nmr_ChainStateSet self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ChainStateSet_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ChainStateSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_ChainStateSet_FindFirstApplicationData_keyval3(Nmr_ChainStateSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ChainStateSet_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ChainStateSet self
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
Impl_ApplicationData Nmr_ChainStateSet_FindFirstApplicationData_keyval4(Nmr_ChainStateSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ChainStateSet_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ChainStateSet.atoms

Atoms 'involved' in a 
ChainStateSet. The intention is that the link should describe atoms that 
change chemically or conformationally, rather than atoms that merely 
have changed NMR parameters. See documentation of ChainStateSet for 
recommendations for handling protonation, cis/trans, and isotopomers.
  @param  Nmr_ChainStateSet self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Mols_Atom Nmr_ChainStateSet_FindFirstAtom(Nmr_ChainStateSet self, ApiMap conditions)
{
  
  Mols_Atom obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstAtom");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: cannot find method 'findFirstAtom'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: method 'findFirstAtom' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ChainStateSet.atoms

Atoms 'involved' in a 
ChainStateSet. The intention is that the link should describe atoms that 
change chemically or conformationally, rather than atoms that merely 
have changed NMR parameters. See documentation of ChainStateSet for 
recommendations for handling protonation, cis/trans, and isotopomers.
  @param  Nmr_ChainStateSet self
  @returns  the first value that satisfies the conditions 
**/
Mols_Atom Nmr_ChainStateSet_FindFirstAtom_keyval0(Nmr_ChainStateSet self)
{
  
  Mols_Atom  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ChainStateSet_FindFirstAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ChainStateSet.atoms

Atoms 'involved' in a 
ChainStateSet. The intention is that the link should describe atoms that 
change chemically or conformationally, rather than atoms that merely 
have changed NMR parameters. See documentation of ChainStateSet for 
recommendations for handling protonation, cis/trans, and isotopomers.
  @param  Nmr_ChainStateSet self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Mols_Atom Nmr_ChainStateSet_FindFirstAtom_keyval1(Nmr_ChainStateSet self, char * key, ApiObject value)
{
  
  Mols_Atom  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ChainStateSet_FindFirstAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ChainStateSet.atoms

Atoms 'involved' in a 
ChainStateSet. The intention is that the link should describe atoms that 
change chemically or conformationally, rather than atoms that merely 
have changed NMR parameters. See documentation of ChainStateSet for 
recommendations for handling protonation, cis/trans, and isotopomers.
  @param  Nmr_ChainStateSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Mols_Atom Nmr_ChainStateSet_FindFirstAtom_keyval2(Nmr_ChainStateSet self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Mols_Atom  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ChainStateSet_FindFirstAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ChainStateSet.atoms

Atoms 'involved' in a 
ChainStateSet. The intention is that the link should describe atoms that 
change chemically or conformationally, rather than atoms that merely 
have changed NMR parameters. See documentation of ChainStateSet for 
recommendations for handling protonation, cis/trans, and isotopomers.
  @param  Nmr_ChainStateSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Mols_Atom Nmr_ChainStateSet_FindFirstAtom_keyval3(Nmr_ChainStateSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Mols_Atom  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ChainStateSet_FindFirstAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ChainStateSet.atoms

Atoms 'involved' in a 
ChainStateSet. The intention is that the link should describe atoms that 
change chemically or conformationally, rather than atoms that merely 
have changed NMR parameters. See documentation of ChainStateSet for 
recommendations for handling protonation, cis/trans, and isotopomers.
  @param  Nmr_ChainStateSet self
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
Mols_Atom Nmr_ChainStateSet_FindFirstAtom_keyval4(Nmr_ChainStateSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Mols_Atom  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ChainStateSet_FindFirstAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ChainStateSet.chainStates

child link to class 
ChainState
  @param  Nmr_ChainStateSet self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_ChainState Nmr_ChainStateSet_FindFirstChainState(Nmr_ChainStateSet self, ApiMap conditions)
{
  
  Nmr_ChainState obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChainState");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: cannot find method 'findFirstChainState'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: method 'findFirstChainState' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ChainStateSet.chainStates

child link to class 
ChainState
  @param  Nmr_ChainStateSet self
  @returns  the first value that satisfies the conditions 
**/
Nmr_ChainState Nmr_ChainStateSet_FindFirstChainState_keyval0(Nmr_ChainStateSet self)
{
  
  Nmr_ChainState  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ChainStateSet_FindFirstChainState(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ChainStateSet.chainStates

child link to class 
ChainState
  @param  Nmr_ChainStateSet self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_ChainState Nmr_ChainStateSet_FindFirstChainState_keyval1(Nmr_ChainStateSet self, char * key, ApiObject value)
{
  
  Nmr_ChainState  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ChainStateSet_FindFirstChainState(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ChainStateSet.chainStates

child link to class 
ChainState
  @param  Nmr_ChainStateSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_ChainState Nmr_ChainStateSet_FindFirstChainState_keyval2(Nmr_ChainStateSet self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_ChainState  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ChainStateSet_FindFirstChainState(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ChainStateSet.chainStates

child link to class 
ChainState
  @param  Nmr_ChainStateSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_ChainState Nmr_ChainStateSet_FindFirstChainState_keyval3(Nmr_ChainStateSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_ChainState  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ChainStateSet_FindFirstChainState(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ChainStateSet.chainStates

child link to class 
ChainState
  @param  Nmr_ChainStateSet self
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
Nmr_ChainState Nmr_ChainStateSet_FindFirstChainState_keyval4(Nmr_ChainStateSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_ChainState  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ChainStateSet_FindFirstChainState(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ChainStateSet.residues

Residues involved in 
chainStates.
  @param  Nmr_ChainStateSet self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Mols_Residue Nmr_ChainStateSet_FindFirstResidue(Nmr_ChainStateSet self, ApiMap conditions)
{
  
  Mols_Residue obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstResidue");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: cannot find method 'findFirstResidue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: method 'findFirstResidue' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ChainStateSet.residues

Residues involved in 
chainStates.
  @param  Nmr_ChainStateSet self
  @returns  the first value that satisfies the conditions 
**/
Mols_Residue Nmr_ChainStateSet_FindFirstResidue_keyval0(Nmr_ChainStateSet self)
{
  
  Mols_Residue  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ChainStateSet_FindFirstResidue(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ChainStateSet.residues

Residues involved in 
chainStates.
  @param  Nmr_ChainStateSet self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Mols_Residue Nmr_ChainStateSet_FindFirstResidue_keyval1(Nmr_ChainStateSet self, char * key, ApiObject value)
{
  
  Mols_Residue  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ChainStateSet_FindFirstResidue(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ChainStateSet.residues

Residues involved in 
chainStates.
  @param  Nmr_ChainStateSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Mols_Residue Nmr_ChainStateSet_FindFirstResidue_keyval2(Nmr_ChainStateSet self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Mols_Residue  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ChainStateSet_FindFirstResidue(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ChainStateSet.residues

Residues involved in 
chainStates.
  @param  Nmr_ChainStateSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Mols_Residue Nmr_ChainStateSet_FindFirstResidue_keyval3(Nmr_ChainStateSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Mols_Residue  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ChainStateSet_FindFirstResidue(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ChainStateSet.residues

Residues involved in 
chainStates.
  @param  Nmr_ChainStateSet self
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
Mols_Residue Nmr_ChainStateSet_FindFirstResidue_keyval4(Nmr_ChainStateSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Mols_Residue  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ChainStateSet_FindFirstResidue(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.nmr.Nmr.ChainStateSet
  @param  Nmr_ChainStateSet self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Nmr_ChainStateSet_Get(Nmr_ChainStateSet self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_ChainStateSet self
  @returns   the result
**/
Acco_AccessObject Nmr_ChainStateSet_GetAccess(Nmr_ChainStateSet self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: method 'getAccess' is not callable");
  
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
  @param  Nmr_ChainStateSet self
  @returns   the result
**/
ApiList Nmr_ChainStateSet_GetApplicationData(Nmr_ChainStateSet self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ChainStateSet.atoms

Atoms 'involved' in a 
ChainStateSet. The intention is that the link should describe atoms that 
change chemically or conformationally, rather than atoms that merely 
have changed NMR parameters. See documentation of ChainStateSet for 
recommendations for handling protonation, cis/trans, and isotopomers.
  @param  Nmr_ChainStateSet self
  @returns   the result
**/
ApiSet Nmr_ChainStateSet_GetAtoms(Nmr_ChainStateSet self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAtoms");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: cannot find method 'getAtoms'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: method 'getAtoms' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.Nmr.ChainStateSet
  @param  Nmr_ChainStateSet self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nmr_ChainStateSet Nmr_ChainStateSet_GetByKey(Nmr_ChainStateSet self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Nmr_ChainStateSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: method 'getByKey' is not callable");
  
  args = PyTuple_Pack(2, startObj, fullKey);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ChainStateSet.chain

Chain to which ChainStateSet 
belongs
  @param  Nmr_ChainStateSet self
  @returns   the result
**/
Mols_Chain Nmr_ChainStateSet_GetChain(Nmr_ChainStateSet self)
{
  
  Mols_Chain obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChain");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: cannot find method 'getChain'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: method 'getChain' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ChainStateSet.chainStates

child link to class 
ChainState
  @param  Nmr_ChainStateSet self
  @returns   the result
**/
ApiSet Nmr_ChainStateSet_GetChainStates(Nmr_ChainStateSet self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChainStates");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: cannot find method 'getChainStates'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: method 'getChainStates' is not callable");
  
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
  @param  Nmr_ChainStateSet self
  @returns   the result
**/
ApiString Nmr_ChainStateSet_GetClassName(Nmr_ChainStateSet self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ChainStateSet.details

Free text, for notes, 
explanatory comments, etc.
  @param  Nmr_ChainStateSet self
  @returns   the result
**/
ApiString Nmr_ChainStateSet_GetDetails(Nmr_ChainStateSet self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: method 'getDetails' is not callable");
  
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
  @param  Nmr_ChainStateSet self
  @returns   the result
**/
ApiList Nmr_ChainStateSet_GetFieldNames(Nmr_ChainStateSet self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.nmr.Nmr.ChainStateSet
  @param  Nmr_ChainStateSet self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Nmr_ChainStateSet_GetFullKey(Nmr_ChainStateSet self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: method 'getFullKey' is not callable");
  
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
  @param  Nmr_ChainStateSet self
  @returns   the result
**/
ApiBoolean Nmr_ChainStateSet_GetInConstructor(Nmr_ChainStateSet self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: method 'getInConstructor' is not callable");
  
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
  @param  Nmr_ChainStateSet self
  @returns   the result
**/
ApiBoolean Nmr_ChainStateSet_GetIsDeleted(Nmr_ChainStateSet self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.nmr.Nmr.ChainStateSet
  @param  Nmr_ChainStateSet self
  @returns  Local object key
**/
ApiObject Nmr_ChainStateSet_GetLocalKey(Nmr_ChainStateSet self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ChainStateSet.nmrProject

parent link
  @param  Nmr_ChainStateSet self
  @returns   the result
**/
Nmr_NmrProject Nmr_ChainStateSet_GetNmrProject(Nmr_ChainStateSet self)
{
  
  Nmr_NmrProject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrProject");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: cannot find method 'getNmrProject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: method 'getNmrProject' is not callable");
  
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
  @param  Nmr_ChainStateSet self
  @returns   the result
**/
ApiString Nmr_ChainStateSet_GetPackageName(Nmr_ChainStateSet self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: method 'getPackageName' is not callable");
  
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
  @param  Nmr_ChainStateSet self
  @returns   the result
**/
ApiString Nmr_ChainStateSet_GetPackageShortName(Nmr_ChainStateSet self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ChainStateSet.parent

link to parent object - 
synonym for nmrProject
  @param  Nmr_ChainStateSet self
  @returns   the result
**/
Nmr_NmrProject Nmr_ChainStateSet_GetParent(Nmr_ChainStateSet self)
{
  
  Nmr_NmrProject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: method 'getParent' is not callable");
  
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
  @param  Nmr_ChainStateSet self
  @returns   the result
**/
ApiString Nmr_ChainStateSet_GetQualifiedName(Nmr_ChainStateSet self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ChainStateSet.residues

Residues involved in 
chainStates.
  @param  Nmr_ChainStateSet self
  @returns   the result
**/
ApiSet Nmr_ChainStateSet_GetResidues(Nmr_ChainStateSet self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getResidues");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: cannot find method 'getResidues'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: method 'getResidues' is not callable");
  
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
  @param  Nmr_ChainStateSet self
  @returns   the result
**/
Impl_MemopsRoot Nmr_ChainStateSet_GetRoot(Nmr_ChainStateSet self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ChainStateSet.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Nmr_ChainStateSet self
  @returns   the result
**/
ApiInteger Nmr_ChainStateSet_GetSerial(Nmr_ChainStateSet self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: method 'getSerial' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ChainStateSet.stateSetType

Type of State Set. 
Describes which factor distinguishes the various chainstates, be it 
protonation state, cis/trants isomerism, conformation, ... If the 
distinguishing factor is  unknown,  stateSetType should not be set.
  @param  Nmr_ChainStateSet self
  @returns   the result
**/
ApiString Nmr_ChainStateSet_GetStateSetType(Nmr_ChainStateSet self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getStateSetType");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: cannot find method 'getStateSetType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: method 'getStateSetType' is not callable");
  
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
  @param  Nmr_ChainStateSet self
  @returns   the result
**/
Impl_TopObject Nmr_ChainStateSet_GetTopObject(Nmr_ChainStateSet self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.nmr.Nmr.ChainStateSet
  @param  Nmr_NmrProject parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_ChainStateSet Nmr_ChainStateSet_Init(Nmr_NmrProject parent, ApiMap attrlinks)
{
  
  return Nmr_NmrProject_NewChainStateSet(parent, attrlinks);
}

/**
  Constructor for ccp.nmr.Nmr.ChainStateSet
  @param  Nmr_NmrProject parent
  @param  Mols_Chain chain
  @returns  the new object
**/
Nmr_ChainStateSet Nmr_ChainStateSet_Init_reqd(Nmr_NmrProject parent, Mols_Chain chain)
{
  
  Nmr_ChainStateSet  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "chain", chain);
  
  obj = Nmr_ChainStateSet_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.ChainState
  @param  Nmr_ChainStateSet self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_ChainState Nmr_ChainStateSet_NewChainState(Nmr_ChainStateSet self, ApiMap attrlinks)
{
  
  Nmr_ChainState obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newChainState");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: cannot find method 'newChainState'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: method 'newChainState' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.ChainState
  @param  Nmr_ChainStateSet self
  @returns  the new object
**/
Nmr_ChainState Nmr_ChainStateSet_NewChainState_reqd(Nmr_ChainStateSet self)
{
  
  Nmr_ChainState  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Nmr_ChainStateSet_NewChainState(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ChainStateSet self
  @param  Impl_ApplicationData value
**/
void *Nmr_ChainStateSet_RemoveApplicationData(Nmr_ChainStateSet self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.Nmr.ChainStateSet.atoms

Atoms 'involved' in a 
ChainStateSet. The intention is that the link should describe atoms that 
change chemically or conformationally, rather than atoms that merely 
have changed NMR parameters. See documentation of ChainStateSet for 
recommendations for handling protonation, cis/trans, and isotopomers.
  @param  Nmr_ChainStateSet self
  @param  Mols_Atom value
**/
void *Nmr_ChainStateSet_RemoveAtom(Nmr_ChainStateSet self, Mols_Atom value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeAtom");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: cannot find method 'removeAtom'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: method 'removeAtom' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.Nmr.ChainStateSet.residues

Residues involved in 
chainStates.
  @param  Nmr_ChainStateSet self
  @param  Mols_Residue value
**/
void *Nmr_ChainStateSet_RemoveResidue(Nmr_ChainStateSet self, Mols_Residue value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeResidue");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: cannot find method 'removeResidue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: method 'removeResidue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.nmr.Nmr.ChainStateSet
  @param  Nmr_ChainStateSet self
  @param  ApiString name
  @param  ApiObject value
**/
void *Nmr_ChainStateSet_Set(Nmr_ChainStateSet self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_ChainStateSet self
  @param  Acco_AccessObject value
**/
void *Nmr_ChainStateSet_SetAccess(Nmr_ChainStateSet self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: method 'setAccess' is not callable");
  
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
  @param  Nmr_ChainStateSet self
  @param  ApiList values
**/
void *Nmr_ChainStateSet_SetApplicationData(Nmr_ChainStateSet self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ChainStateSet.atoms

Atoms 'involved' in a 
ChainStateSet. The intention is that the link should describe atoms that 
change chemically or conformationally, rather than atoms that merely 
have changed NMR parameters. See documentation of ChainStateSet for 
recommendations for handling protonation, cis/trans, and isotopomers.
  @param  Nmr_ChainStateSet self
  @param  ApiSet values
**/
void *Nmr_ChainStateSet_SetAtoms(Nmr_ChainStateSet self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAtoms");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: cannot find method 'setAtoms'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: method 'setAtoms' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ChainStateSet.chain

Chain to which ChainStateSet 
belongs
  @param  Nmr_ChainStateSet self
  @param  Mols_Chain value
**/
void *Nmr_ChainStateSet_SetChain(Nmr_ChainStateSet self, Mols_Chain value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setChain");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: cannot find method 'setChain'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: method 'setChain' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ChainStateSet.details

Free text, for notes, 
explanatory comments, etc.
  @param  Nmr_ChainStateSet self
  @param  ApiString value
**/
void *Nmr_ChainStateSet_SetDetails(Nmr_ChainStateSet self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ChainStateSet.residues

Residues involved in 
chainStates.
  @param  Nmr_ChainStateSet self
  @param  ApiSet values
**/
void *Nmr_ChainStateSet_SetResidues(Nmr_ChainStateSet self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setResidues");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: cannot find method 'setResidues'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: method 'setResidues' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ChainStateSet.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Nmr_ChainStateSet self
  @param  ApiInteger value
**/
void *Nmr_ChainStateSet_SetSerial(Nmr_ChainStateSet self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ChainStateSet.stateSetType

Type of State Set. 
Describes which factor distinguishes the various chainstates, be it 
protonation state, cis/trants isomerism, conformation, ... If the 
distinguishing factor is  unknown,  stateSetType should not be set.
  @param  Nmr_ChainStateSet self
  @param  ApiString value
**/
void *Nmr_ChainStateSet_SetStateSetType(Nmr_ChainStateSet self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setStateSetType");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: cannot find method 'setStateSetType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: method 'setStateSetType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.ChainStateSet.atoms

Atoms 'involved' in a 
ChainStateSet. The intention is that the link should describe atoms that 
change chemically or conformationally, rather than atoms that merely 
have changed NMR parameters. See documentation of ChainStateSet for 
recommendations for handling protonation, cis/trans, and isotopomers.
  @param  Nmr_ChainStateSet self
  @returns   the result
**/
ApiList Nmr_ChainStateSet_SortedAtoms(Nmr_ChainStateSet self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedAtoms");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: cannot find method 'sortedAtoms'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: method 'sortedAtoms' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.ChainStateSet.chainStates

child link to class 
ChainState
  @param  Nmr_ChainStateSet self
  @returns   the result
**/
ApiList Nmr_ChainStateSet_SortedChainStates(Nmr_ChainStateSet self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChainStates");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: cannot find method 'sortedChainStates'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: method 'sortedChainStates' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.ChainStateSet.residues

Residues involved in 
chainStates.
  @param  Nmr_ChainStateSet self
  @returns   the result
**/
ApiList Nmr_ChainStateSet_SortedResidues(Nmr_ChainStateSet self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedResidues");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: cannot find method 'sortedResidues'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ChainStateSet: method 'sortedResidues' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
