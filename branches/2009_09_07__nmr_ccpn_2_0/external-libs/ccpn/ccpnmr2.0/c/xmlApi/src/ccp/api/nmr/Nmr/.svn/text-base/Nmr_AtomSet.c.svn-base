
#include "ccp.h"

/*
  Group of Atoms for use in Assignment. Connects Resonance and Atom records. All Atoms connected to an AtomSet are by definition equivalent and in fast exchange throughout the project. Atoms in an atomSet could be e.g. the protons of any -CH3 or -NH3 group, or HD1/HD2 in a fast-flipping Phe, or free water protons with either bound water protons (molecular exchange) or Ser OH protons (proton exchange). Atoms that can not be in an AtomSet are e.g. a Lys epsilon CH2 (not in fast exchange) or Phe HD1/HD2 if the Phe is in slow exchange under any circumstances within the project.
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AtomSet self
  @param  Impl_ApplicationData value
**/
void *Nmr_AtomSet_AddApplicationData(Nmr_AtomSet self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AtomSet: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AtomSet: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.Nmr.AtomSet.resonanceSets

ResonanceSets corresponding 
to AtomSet. Part of assigning Atoms to Resonances
  @param  Nmr_AtomSet self
  @param  Nmr_ResonanceSet value
**/
void *Nmr_AtomSet_AddResonanceSet(Nmr_AtomSet self, Nmr_ResonanceSet value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addResonanceSet");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AtomSet: cannot find method 'addResonanceSet'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AtomSet: method 'addResonanceSet' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.nmr.Nmr.AtomSet
  @param  Nmr_AtomSet self
  @param  ApiBoolean complete
**/
void *Nmr_AtomSet_CheckAllValid(Nmr_AtomSet self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AtomSet: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AtomSet: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.nmr.Nmr.AtomSet
  @param  Nmr_AtomSet self
  @param  ApiBoolean complete
**/
void *Nmr_AtomSet_CheckValid(Nmr_AtomSet self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AtomSet: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AtomSet: method 'checkValid' is not callable");
  
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
  @param  Nmr_AtomSet self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_AtomSet_FindAllApplicationData(Nmr_AtomSet self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AtomSet: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AtomSet: method 'findAllApplicationData' is not callable");
  
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
  @param  Nmr_AtomSet self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_AtomSet_FindAllApplicationData_keyval0(Nmr_AtomSet self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_AtomSet_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AtomSet self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_AtomSet_FindAllApplicationData_keyval1(Nmr_AtomSet self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_AtomSet_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AtomSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_AtomSet_FindAllApplicationData_keyval2(Nmr_AtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_AtomSet_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AtomSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_AtomSet_FindAllApplicationData_keyval3(Nmr_AtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_AtomSet_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AtomSet self
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
ApiList Nmr_AtomSet_FindAllApplicationData_keyval4(Nmr_AtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_AtomSet_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AtomSet.atoms

Atoms making up the AtomSet. 
Atoms that are part of the same AtomSet are by definition equivalent and 
in fast exchange on the NMR time scale throughout the project.
  @param  Nmr_AtomSet self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_AtomSet_FindAllAtoms(Nmr_AtomSet self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllAtoms");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AtomSet: cannot find method 'findAllAtoms'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AtomSet: method 'findAllAtoms' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AtomSet.atoms

Atoms making up the AtomSet. 
Atoms that are part of the same AtomSet are by definition equivalent and 
in fast exchange on the NMR time scale throughout the project.
  @param  Nmr_AtomSet self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_AtomSet_FindAllAtoms_keyval0(Nmr_AtomSet self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_AtomSet_FindAllAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AtomSet.atoms

Atoms making up the AtomSet. 
Atoms that are part of the same AtomSet are by definition equivalent and 
in fast exchange on the NMR time scale throughout the project.
  @param  Nmr_AtomSet self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_AtomSet_FindAllAtoms_keyval1(Nmr_AtomSet self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_AtomSet_FindAllAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AtomSet.atoms

Atoms making up the AtomSet. 
Atoms that are part of the same AtomSet are by definition equivalent and 
in fast exchange on the NMR time scale throughout the project.
  @param  Nmr_AtomSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_AtomSet_FindAllAtoms_keyval2(Nmr_AtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_AtomSet_FindAllAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AtomSet.atoms

Atoms making up the AtomSet. 
Atoms that are part of the same AtomSet are by definition equivalent and 
in fast exchange on the NMR time scale throughout the project.
  @param  Nmr_AtomSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_AtomSet_FindAllAtoms_keyval3(Nmr_AtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_AtomSet_FindAllAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AtomSet.atoms

Atoms making up the AtomSet. 
Atoms that are part of the same AtomSet are by definition equivalent and 
in fast exchange on the NMR time scale throughout the project.
  @param  Nmr_AtomSet self
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
ApiSet Nmr_AtomSet_FindAllAtoms_keyval4(Nmr_AtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_AtomSet_FindAllAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AtomSet.resonanceSets

ResonanceSets 
corresponding to AtomSet. Part of assigning Atoms to Resonances
  @param  Nmr_AtomSet self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_AtomSet_FindAllResonanceSets(Nmr_AtomSet self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllResonanceSets");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AtomSet: cannot find method 'findAllResonanceSets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AtomSet: method 'findAllResonanceSets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AtomSet.resonanceSets

ResonanceSets 
corresponding to AtomSet. Part of assigning Atoms to Resonances
  @param  Nmr_AtomSet self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_AtomSet_FindAllResonanceSets_keyval0(Nmr_AtomSet self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_AtomSet_FindAllResonanceSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AtomSet.resonanceSets

ResonanceSets 
corresponding to AtomSet. Part of assigning Atoms to Resonances
  @param  Nmr_AtomSet self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_AtomSet_FindAllResonanceSets_keyval1(Nmr_AtomSet self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_AtomSet_FindAllResonanceSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AtomSet.resonanceSets

ResonanceSets 
corresponding to AtomSet. Part of assigning Atoms to Resonances
  @param  Nmr_AtomSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_AtomSet_FindAllResonanceSets_keyval2(Nmr_AtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_AtomSet_FindAllResonanceSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AtomSet.resonanceSets

ResonanceSets 
corresponding to AtomSet. Part of assigning Atoms to Resonances
  @param  Nmr_AtomSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_AtomSet_FindAllResonanceSets_keyval3(Nmr_AtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_AtomSet_FindAllResonanceSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.AtomSet.resonanceSets

ResonanceSets 
corresponding to AtomSet. Part of assigning Atoms to Resonances
  @param  Nmr_AtomSet self
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
ApiSet Nmr_AtomSet_FindAllResonanceSets_keyval4(Nmr_AtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_AtomSet_FindAllResonanceSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AtomSet self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_AtomSet_FindFirstApplicationData(Nmr_AtomSet self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AtomSet: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AtomSet: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nmr_AtomSet self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_AtomSet_FindFirstApplicationData_keyval0(Nmr_AtomSet self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_AtomSet_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AtomSet self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_AtomSet_FindFirstApplicationData_keyval1(Nmr_AtomSet self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_AtomSet_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AtomSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_AtomSet_FindFirstApplicationData_keyval2(Nmr_AtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_AtomSet_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AtomSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_AtomSet_FindFirstApplicationData_keyval3(Nmr_AtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_AtomSet_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AtomSet self
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
Impl_ApplicationData Nmr_AtomSet_FindFirstApplicationData_keyval4(Nmr_AtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_AtomSet_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AtomSet.atoms

Atoms making up the AtomSet. 
Atoms that are part of the same AtomSet are by definition equivalent and 
in fast exchange on the NMR time scale throughout the project.
  @param  Nmr_AtomSet self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Mols_Atom Nmr_AtomSet_FindFirstAtom(Nmr_AtomSet self, ApiMap conditions)
{
  
  Mols_Atom obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstAtom");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AtomSet: cannot find method 'findFirstAtom'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AtomSet: method 'findFirstAtom' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AtomSet.atoms

Atoms making up the AtomSet. 
Atoms that are part of the same AtomSet are by definition equivalent and 
in fast exchange on the NMR time scale throughout the project.
  @param  Nmr_AtomSet self
  @returns  the first value that satisfies the conditions 
**/
Mols_Atom Nmr_AtomSet_FindFirstAtom_keyval0(Nmr_AtomSet self)
{
  
  Mols_Atom  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_AtomSet_FindFirstAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AtomSet.atoms

Atoms making up the AtomSet. 
Atoms that are part of the same AtomSet are by definition equivalent and 
in fast exchange on the NMR time scale throughout the project.
  @param  Nmr_AtomSet self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Mols_Atom Nmr_AtomSet_FindFirstAtom_keyval1(Nmr_AtomSet self, char * key, ApiObject value)
{
  
  Mols_Atom  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_AtomSet_FindFirstAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AtomSet.atoms

Atoms making up the AtomSet. 
Atoms that are part of the same AtomSet are by definition equivalent and 
in fast exchange on the NMR time scale throughout the project.
  @param  Nmr_AtomSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Mols_Atom Nmr_AtomSet_FindFirstAtom_keyval2(Nmr_AtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Mols_Atom  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_AtomSet_FindFirstAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AtomSet.atoms

Atoms making up the AtomSet. 
Atoms that are part of the same AtomSet are by definition equivalent and 
in fast exchange on the NMR time scale throughout the project.
  @param  Nmr_AtomSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Mols_Atom Nmr_AtomSet_FindFirstAtom_keyval3(Nmr_AtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Mols_Atom  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_AtomSet_FindFirstAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AtomSet.atoms

Atoms making up the AtomSet. 
Atoms that are part of the same AtomSet are by definition equivalent and 
in fast exchange on the NMR time scale throughout the project.
  @param  Nmr_AtomSet self
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
Mols_Atom Nmr_AtomSet_FindFirstAtom_keyval4(Nmr_AtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Mols_Atom  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_AtomSet_FindFirstAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AtomSet.resonanceSets

ResonanceSets 
corresponding to AtomSet. Part of assigning Atoms to Resonances
  @param  Nmr_AtomSet self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResonanceSet Nmr_AtomSet_FindFirstResonanceSet(Nmr_AtomSet self, ApiMap conditions)
{
  
  Nmr_ResonanceSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstResonanceSet");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AtomSet: cannot find method 'findFirstResonanceSet'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AtomSet: method 'findFirstResonanceSet' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AtomSet.resonanceSets

ResonanceSets 
corresponding to AtomSet. Part of assigning Atoms to Resonances
  @param  Nmr_AtomSet self
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResonanceSet Nmr_AtomSet_FindFirstResonanceSet_keyval0(Nmr_AtomSet self)
{
  
  Nmr_ResonanceSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_AtomSet_FindFirstResonanceSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AtomSet.resonanceSets

ResonanceSets 
corresponding to AtomSet. Part of assigning Atoms to Resonances
  @param  Nmr_AtomSet self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResonanceSet Nmr_AtomSet_FindFirstResonanceSet_keyval1(Nmr_AtomSet self, char * key, ApiObject value)
{
  
  Nmr_ResonanceSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_AtomSet_FindFirstResonanceSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AtomSet.resonanceSets

ResonanceSets 
corresponding to AtomSet. Part of assigning Atoms to Resonances
  @param  Nmr_AtomSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResonanceSet Nmr_AtomSet_FindFirstResonanceSet_keyval2(Nmr_AtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_ResonanceSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_AtomSet_FindFirstResonanceSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AtomSet.resonanceSets

ResonanceSets 
corresponding to AtomSet. Part of assigning Atoms to Resonances
  @param  Nmr_AtomSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResonanceSet Nmr_AtomSet_FindFirstResonanceSet_keyval3(Nmr_AtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_ResonanceSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_AtomSet_FindFirstResonanceSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.AtomSet.resonanceSets

ResonanceSets 
corresponding to AtomSet. Part of assigning Atoms to Resonances
  @param  Nmr_AtomSet self
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
Nmr_ResonanceSet Nmr_AtomSet_FindFirstResonanceSet_keyval4(Nmr_AtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_ResonanceSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_AtomSet_FindFirstResonanceSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.nmr.Nmr.AtomSet
  @param  Nmr_AtomSet self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Nmr_AtomSet_Get(Nmr_AtomSet self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_AtomSet self
  @returns   the result
**/
Acco_AccessObject Nmr_AtomSet_GetAccess(Nmr_AtomSet self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AtomSet: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AtomSet: method 'getAccess' is not callable");
  
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
  @param  Nmr_AtomSet self
  @returns   the result
**/
ApiList Nmr_AtomSet_GetApplicationData(Nmr_AtomSet self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AtomSet: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AtomSet: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.AtomSet.atoms

Atoms making up the AtomSet. Atoms 
that are part of the same AtomSet are by definition equivalent and in 
fast exchange on the NMR time scale throughout the project.
  @param  Nmr_AtomSet self
  @returns   the result
**/
ApiSet Nmr_AtomSet_GetAtoms(Nmr_AtomSet self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAtoms");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AtomSet: cannot find method 'getAtoms'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AtomSet: method 'getAtoms' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.Nmr.AtomSet
  @param  Nmr_AtomSet self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nmr_AtomSet Nmr_AtomSet_GetByKey(Nmr_AtomSet self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Nmr_AtomSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AtomSet: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AtomSet: method 'getByKey' is not callable");
  
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
  @param  Nmr_AtomSet self
  @returns   the result
**/
ApiString Nmr_AtomSet_GetClassName(Nmr_AtomSet self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AtomSet: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AtomSet: method 'getClassName' is not callable");
  
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
  @param  Nmr_AtomSet self
  @returns   the result
**/
ApiList Nmr_AtomSet_GetFieldNames(Nmr_AtomSet self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AtomSet: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AtomSet: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.nmr.Nmr.AtomSet
  @param  Nmr_AtomSet self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Nmr_AtomSet_GetFullKey(Nmr_AtomSet self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AtomSet: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AtomSet: method 'getFullKey' is not callable");
  
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
  @param  Nmr_AtomSet self
  @returns   the result
**/
ApiBoolean Nmr_AtomSet_GetInConstructor(Nmr_AtomSet self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AtomSet: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AtomSet: method 'getInConstructor' is not callable");
  
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
  @param  Nmr_AtomSet self
  @returns   the result
**/
ApiBoolean Nmr_AtomSet_GetIsDeleted(Nmr_AtomSet self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AtomSet: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AtomSet: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.nmr.Nmr.AtomSet
  @param  Nmr_AtomSet self
  @returns  Local object key
**/
ApiObject Nmr_AtomSet_GetLocalKey(Nmr_AtomSet self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AtomSet: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AtomSet: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.AtomSet.name

name of AtomSet
  @param  Nmr_AtomSet self
  @returns   the result
**/
ApiString Nmr_AtomSet_GetName(Nmr_AtomSet self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AtomSet: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AtomSet: method 'getName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.AtomSet.nmrProject

parent link
  @param  Nmr_AtomSet self
  @returns   the result
**/
Nmr_NmrProject Nmr_AtomSet_GetNmrProject(Nmr_AtomSet self)
{
  
  Nmr_NmrProject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrProject");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AtomSet: cannot find method 'getNmrProject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AtomSet: method 'getNmrProject' is not callable");
  
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
  @param  Nmr_AtomSet self
  @returns   the result
**/
ApiString Nmr_AtomSet_GetPackageName(Nmr_AtomSet self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AtomSet: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AtomSet: method 'getPackageName' is not callable");
  
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
  @param  Nmr_AtomSet self
  @returns   the result
**/
ApiString Nmr_AtomSet_GetPackageShortName(Nmr_AtomSet self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AtomSet: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AtomSet: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.AtomSet.parent

link to parent object - synonym for 
nmrProject
  @param  Nmr_AtomSet self
  @returns   the result
**/
Nmr_NmrProject Nmr_AtomSet_GetParent(Nmr_AtomSet self)
{
  
  Nmr_NmrProject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AtomSet: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AtomSet: method 'getParent' is not callable");
  
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
  @param  Nmr_AtomSet self
  @returns   the result
**/
ApiString Nmr_AtomSet_GetQualifiedName(Nmr_AtomSet self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AtomSet: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AtomSet: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.AtomSet.resonanceSets

ResonanceSets corresponding 
to AtomSet. Part of assigning Atoms to Resonances
  @param  Nmr_AtomSet self
  @returns   the result
**/
ApiSet Nmr_AtomSet_GetResonanceSets(Nmr_AtomSet self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getResonanceSets");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AtomSet: cannot find method 'getResonanceSets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AtomSet: method 'getResonanceSets' is not callable");
  
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
  @param  Nmr_AtomSet self
  @returns   the result
**/
Impl_MemopsRoot Nmr_AtomSet_GetRoot(Nmr_AtomSet self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AtomSet: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AtomSet: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.AtomSet.serial

Serial number of object. Serves as 
object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Nmr_AtomSet self
  @returns   the result
**/
ApiInteger Nmr_AtomSet_GetSerial(Nmr_AtomSet self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AtomSet: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AtomSet: method 'getSerial' is not callable");
  
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
  @param  Nmr_AtomSet self
  @returns   the result
**/
Impl_TopObject Nmr_AtomSet_GetTopObject(Nmr_AtomSet self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AtomSet: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AtomSet: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.nmr.Nmr.AtomSet
  @param  Nmr_NmrProject parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_AtomSet Nmr_AtomSet_Init(Nmr_NmrProject parent, ApiMap attrlinks)
{
  
  return Nmr_NmrProject_NewAtomSet(parent, attrlinks);
}

/**
  Constructor for ccp.nmr.Nmr.AtomSet
  @param  Nmr_NmrProject parent
  @param  ApiSet atoms
  @returns  the new object
**/
Nmr_AtomSet Nmr_AtomSet_Init_reqd(Nmr_NmrProject parent, ApiSet atoms)
{
  
  Nmr_AtomSet  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "atoms", atoms);
  
  obj = Nmr_AtomSet_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AtomSet self
  @param  Impl_ApplicationData value
**/
void *Nmr_AtomSet_RemoveApplicationData(Nmr_AtomSet self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AtomSet: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AtomSet: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.Nmr.AtomSet.resonanceSets

ResonanceSets 
corresponding to AtomSet. Part of assigning Atoms to Resonances
  @param  Nmr_AtomSet self
  @param  Nmr_ResonanceSet value
**/
void *Nmr_AtomSet_RemoveResonanceSet(Nmr_AtomSet self, Nmr_ResonanceSet value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeResonanceSet");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AtomSet: cannot find method 'removeResonanceSet'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AtomSet: method 'removeResonanceSet' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.nmr.Nmr.AtomSet
  @param  Nmr_AtomSet self
  @param  ApiString name
  @param  ApiObject value
**/
void *Nmr_AtomSet_Set(Nmr_AtomSet self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_AtomSet self
  @param  Acco_AccessObject value
**/
void *Nmr_AtomSet_SetAccess(Nmr_AtomSet self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AtomSet: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AtomSet: method 'setAccess' is not callable");
  
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
  @param  Nmr_AtomSet self
  @param  ApiList values
**/
void *Nmr_AtomSet_SetApplicationData(Nmr_AtomSet self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AtomSet: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AtomSet: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.AtomSet.atoms

Atoms making up the AtomSet. Atoms 
that are part of the same AtomSet are by definition equivalent and in 
fast exchange on the NMR time scale throughout the project.
  @param  Nmr_AtomSet self
  @param  ApiSet values
**/
void *Nmr_AtomSet_SetAtoms(Nmr_AtomSet self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAtoms");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AtomSet: cannot find method 'setAtoms'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AtomSet: method 'setAtoms' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.AtomSet.name

name of AtomSet
  @param  Nmr_AtomSet self
  @param  ApiString value
**/
void *Nmr_AtomSet_SetName(Nmr_AtomSet self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AtomSet: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AtomSet: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.AtomSet.resonanceSets

ResonanceSets corresponding 
to AtomSet. Part of assigning Atoms to Resonances
  @param  Nmr_AtomSet self
  @param  ApiSet values
**/
void *Nmr_AtomSet_SetResonanceSets(Nmr_AtomSet self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setResonanceSets");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AtomSet: cannot find method 'setResonanceSets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AtomSet: method 'setResonanceSets' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.AtomSet.serial

Serial number of object. Serves as 
object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Nmr_AtomSet self
  @param  ApiInteger value
**/
void *Nmr_AtomSet_SetSerial(Nmr_AtomSet self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AtomSet: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AtomSet: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.AtomSet.atoms

Atoms making up the AtomSet. Atoms 
that are part of the same AtomSet are by definition equivalent and in 
fast exchange on the NMR time scale throughout the project.
  @param  Nmr_AtomSet self
  @returns   the result
**/
ApiList Nmr_AtomSet_SortedAtoms(Nmr_AtomSet self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedAtoms");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AtomSet: cannot find method 'sortedAtoms'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AtomSet: method 'sortedAtoms' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.AtomSet.resonanceSets

ResonanceSets 
corresponding to AtomSet. Part of assigning Atoms to Resonances
  @param  Nmr_AtomSet self
  @returns   the result
**/
ApiList Nmr_AtomSet_SortedResonanceSets(Nmr_AtomSet self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedResonanceSets");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.AtomSet: cannot find method 'sortedResonanceSets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.AtomSet: method 'sortedResonanceSets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
