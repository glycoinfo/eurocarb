
#include "ccp.h"

/*
  Fixed version of AtomSet. When a Structure Generation run is started, AtomSets and ResonanceSets are copied to FixedAtomSets and FixedResonanceSets in order to preserve the Resonance-Atom assignment valid for a StructureGeneration and the associated ConstraintLists.
*/

/* package ccp.api.nmr.NmrConstraint */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_FixedAtomSet self
  @param  Impl_ApplicationData value
**/
void *Nmrc_FixedAtomSet_AddApplicationData(Nmrc_FixedAtomSet self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.NmrConstraint.FixedAtomSet.atoms

Atoms making up 
FixedAtomSet
  @param  Nmrc_FixedAtomSet self
  @param  Mols_Atom value
**/
void *Nmrc_FixedAtomSet_AddAtom(Nmrc_FixedAtomSet self, Mols_Atom value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addAtom");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: cannot find method 'addAtom'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: method 'addAtom' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for 
ccp.nmr.NmrConstraint.FixedAtomSet.resonanceSets

FixedResonanceSets 
associated with FixedAtomSet.
  @param  Nmrc_FixedAtomSet self
  @param  Nmrc_FixedResonanceSet value
**/
void *Nmrc_FixedAtomSet_AddResonanceSet(Nmrc_FixedAtomSet self, Nmrc_FixedResonanceSet value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addResonanceSet");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: cannot find method 'addResonanceSet'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: method 'addResonanceSet' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.nmr.NmrConstraint.FixedAtomSet
  @param  Nmrc_FixedAtomSet self
  @param  ApiBoolean complete
**/
void *Nmrc_FixedAtomSet_CheckAllValid(Nmrc_FixedAtomSet self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.nmr.NmrConstraint.FixedAtomSet
  @param  Nmrc_FixedAtomSet self
  @param  ApiBoolean complete
**/
void *Nmrc_FixedAtomSet_CheckValid(Nmrc_FixedAtomSet self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: method 'checkValid' is not callable");
  
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
  @param  Nmrc_FixedAtomSet self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_FixedAtomSet_FindAllApplicationData(Nmrc_FixedAtomSet self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: method 'findAllApplicationData' is not callable");
  
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
  @param  Nmrc_FixedAtomSet self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_FixedAtomSet_FindAllApplicationData_keyval0(Nmrc_FixedAtomSet self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_FixedAtomSet_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_FixedAtomSet self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_FixedAtomSet_FindAllApplicationData_keyval1(Nmrc_FixedAtomSet self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_FixedAtomSet_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_FixedAtomSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_FixedAtomSet_FindAllApplicationData_keyval2(Nmrc_FixedAtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_FixedAtomSet_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_FixedAtomSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_FixedAtomSet_FindAllApplicationData_keyval3(Nmrc_FixedAtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_FixedAtomSet_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_FixedAtomSet self
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
ApiList Nmrc_FixedAtomSet_FindAllApplicationData_keyval4(Nmrc_FixedAtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_FixedAtomSet_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.FixedAtomSet.atoms

Atoms making up 
FixedAtomSet
  @param  Nmrc_FixedAtomSet self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_FixedAtomSet_FindAllAtoms(Nmrc_FixedAtomSet self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllAtoms");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: cannot find method 'findAllAtoms'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: method 'findAllAtoms' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.FixedAtomSet.atoms

Atoms making up 
FixedAtomSet
  @param  Nmrc_FixedAtomSet self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_FixedAtomSet_FindAllAtoms_keyval0(Nmrc_FixedAtomSet self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_FixedAtomSet_FindAllAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.FixedAtomSet.atoms

Atoms making up 
FixedAtomSet
  @param  Nmrc_FixedAtomSet self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_FixedAtomSet_FindAllAtoms_keyval1(Nmrc_FixedAtomSet self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_FixedAtomSet_FindAllAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.FixedAtomSet.atoms

Atoms making up 
FixedAtomSet
  @param  Nmrc_FixedAtomSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_FixedAtomSet_FindAllAtoms_keyval2(Nmrc_FixedAtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_FixedAtomSet_FindAllAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.FixedAtomSet.atoms

Atoms making up 
FixedAtomSet
  @param  Nmrc_FixedAtomSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_FixedAtomSet_FindAllAtoms_keyval3(Nmrc_FixedAtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_FixedAtomSet_FindAllAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.FixedAtomSet.atoms

Atoms making up 
FixedAtomSet
  @param  Nmrc_FixedAtomSet self
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
ApiSet Nmrc_FixedAtomSet_FindAllAtoms_keyval4(Nmrc_FixedAtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_FixedAtomSet_FindAllAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.FixedAtomSet.resonanceSets

FixedResonanceSets 
associated with FixedAtomSet.
  @param  Nmrc_FixedAtomSet self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_FixedAtomSet_FindAllResonanceSets(Nmrc_FixedAtomSet self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllResonanceSets");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: cannot find method 'findAllResonanceSets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: method 'findAllResonanceSets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.FixedAtomSet.resonanceSets

FixedResonanceSets 
associated with FixedAtomSet.
  @param  Nmrc_FixedAtomSet self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_FixedAtomSet_FindAllResonanceSets_keyval0(Nmrc_FixedAtomSet self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_FixedAtomSet_FindAllResonanceSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.FixedAtomSet.resonanceSets

FixedResonanceSets 
associated with FixedAtomSet.
  @param  Nmrc_FixedAtomSet self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_FixedAtomSet_FindAllResonanceSets_keyval1(Nmrc_FixedAtomSet self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_FixedAtomSet_FindAllResonanceSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.FixedAtomSet.resonanceSets

FixedResonanceSets 
associated with FixedAtomSet.
  @param  Nmrc_FixedAtomSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_FixedAtomSet_FindAllResonanceSets_keyval2(Nmrc_FixedAtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_FixedAtomSet_FindAllResonanceSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.FixedAtomSet.resonanceSets

FixedResonanceSets 
associated with FixedAtomSet.
  @param  Nmrc_FixedAtomSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_FixedAtomSet_FindAllResonanceSets_keyval3(Nmrc_FixedAtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_FixedAtomSet_FindAllResonanceSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.FixedAtomSet.resonanceSets

FixedResonanceSets 
associated with FixedAtomSet.
  @param  Nmrc_FixedAtomSet self
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
ApiSet Nmrc_FixedAtomSet_FindAllResonanceSets_keyval4(Nmrc_FixedAtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_FixedAtomSet_FindAllResonanceSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_FixedAtomSet self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrc_FixedAtomSet_FindFirstApplicationData(Nmrc_FixedAtomSet self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nmrc_FixedAtomSet self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrc_FixedAtomSet_FindFirstApplicationData_keyval0(Nmrc_FixedAtomSet self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_FixedAtomSet_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_FixedAtomSet self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrc_FixedAtomSet_FindFirstApplicationData_keyval1(Nmrc_FixedAtomSet self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_FixedAtomSet_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_FixedAtomSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrc_FixedAtomSet_FindFirstApplicationData_keyval2(Nmrc_FixedAtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_FixedAtomSet_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_FixedAtomSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrc_FixedAtomSet_FindFirstApplicationData_keyval3(Nmrc_FixedAtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_FixedAtomSet_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_FixedAtomSet self
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
Impl_ApplicationData Nmrc_FixedAtomSet_FindFirstApplicationData_keyval4(Nmrc_FixedAtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_FixedAtomSet_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrConstraint.FixedAtomSet.atoms

Atoms making up 
FixedAtomSet
  @param  Nmrc_FixedAtomSet self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Mols_Atom Nmrc_FixedAtomSet_FindFirstAtom(Nmrc_FixedAtomSet self, ApiMap conditions)
{
  
  Mols_Atom obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstAtom");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: cannot find method 'findFirstAtom'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: method 'findFirstAtom' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrConstraint.FixedAtomSet.atoms

Atoms making up 
FixedAtomSet
  @param  Nmrc_FixedAtomSet self
  @returns  the first value that satisfies the conditions 
**/
Mols_Atom Nmrc_FixedAtomSet_FindFirstAtom_keyval0(Nmrc_FixedAtomSet self)
{
  
  Mols_Atom  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_FixedAtomSet_FindFirstAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrConstraint.FixedAtomSet.atoms

Atoms making up 
FixedAtomSet
  @param  Nmrc_FixedAtomSet self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Mols_Atom Nmrc_FixedAtomSet_FindFirstAtom_keyval1(Nmrc_FixedAtomSet self, char * key, ApiObject value)
{
  
  Mols_Atom  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_FixedAtomSet_FindFirstAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrConstraint.FixedAtomSet.atoms

Atoms making up 
FixedAtomSet
  @param  Nmrc_FixedAtomSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Mols_Atom Nmrc_FixedAtomSet_FindFirstAtom_keyval2(Nmrc_FixedAtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Mols_Atom  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_FixedAtomSet_FindFirstAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrConstraint.FixedAtomSet.atoms

Atoms making up 
FixedAtomSet
  @param  Nmrc_FixedAtomSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Mols_Atom Nmrc_FixedAtomSet_FindFirstAtom_keyval3(Nmrc_FixedAtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Mols_Atom  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_FixedAtomSet_FindFirstAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrConstraint.FixedAtomSet.atoms

Atoms making up 
FixedAtomSet
  @param  Nmrc_FixedAtomSet self
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
Mols_Atom Nmrc_FixedAtomSet_FindFirstAtom_keyval4(Nmrc_FixedAtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Mols_Atom  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_FixedAtomSet_FindFirstAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedAtomSet.resonanceSets

FixedResonanceSets 
associated with FixedAtomSet.
  @param  Nmrc_FixedAtomSet self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmrc_FixedResonanceSet Nmrc_FixedAtomSet_FindFirstResonanceSet(Nmrc_FixedAtomSet self, ApiMap conditions)
{
  
  Nmrc_FixedResonanceSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstResonanceSet");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: cannot find method 'findFirstResonanceSet'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: method 'findFirstResonanceSet' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedAtomSet.resonanceSets

FixedResonanceSets 
associated with FixedAtomSet.
  @param  Nmrc_FixedAtomSet self
  @returns  the first value that satisfies the conditions 
**/
Nmrc_FixedResonanceSet Nmrc_FixedAtomSet_FindFirstResonanceSet_keyval0(Nmrc_FixedAtomSet self)
{
  
  Nmrc_FixedResonanceSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_FixedAtomSet_FindFirstResonanceSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedAtomSet.resonanceSets

FixedResonanceSets 
associated with FixedAtomSet.
  @param  Nmrc_FixedAtomSet self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmrc_FixedResonanceSet Nmrc_FixedAtomSet_FindFirstResonanceSet_keyval1(Nmrc_FixedAtomSet self, char * key, ApiObject value)
{
  
  Nmrc_FixedResonanceSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_FixedAtomSet_FindFirstResonanceSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedAtomSet.resonanceSets

FixedResonanceSets 
associated with FixedAtomSet.
  @param  Nmrc_FixedAtomSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmrc_FixedResonanceSet Nmrc_FixedAtomSet_FindFirstResonanceSet_keyval2(Nmrc_FixedAtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmrc_FixedResonanceSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_FixedAtomSet_FindFirstResonanceSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedAtomSet.resonanceSets

FixedResonanceSets 
associated with FixedAtomSet.
  @param  Nmrc_FixedAtomSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmrc_FixedResonanceSet Nmrc_FixedAtomSet_FindFirstResonanceSet_keyval3(Nmrc_FixedAtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmrc_FixedResonanceSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_FixedAtomSet_FindFirstResonanceSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedAtomSet.resonanceSets

FixedResonanceSets 
associated with FixedAtomSet.
  @param  Nmrc_FixedAtomSet self
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
Nmrc_FixedResonanceSet Nmrc_FixedAtomSet_FindFirstResonanceSet_keyval4(Nmrc_FixedAtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmrc_FixedResonanceSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_FixedAtomSet_FindFirstResonanceSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.nmr.NmrConstraint.FixedAtomSet
  @param  Nmrc_FixedAtomSet self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Nmrc_FixedAtomSet_Get(Nmrc_FixedAtomSet self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrc_FixedAtomSet self
  @returns   the result
**/
Acco_AccessObject Nmrc_FixedAtomSet_GetAccess(Nmrc_FixedAtomSet self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: method 'getAccess' is not callable");
  
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
  @param  Nmrc_FixedAtomSet self
  @returns   the result
**/
Acco_AccessObject Nmrc_FixedAtomSet_GetActiveAccess(Nmrc_FixedAtomSet self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: method 'getActiveAccess' is not callable");
  
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
  @param  Nmrc_FixedAtomSet self
  @returns   the result
**/
ApiList Nmrc_FixedAtomSet_GetApplicationData(Nmrc_FixedAtomSet self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrConstraint.FixedAtomSet.atoms

Atoms making up 
FixedAtomSet
  @param  Nmrc_FixedAtomSet self
  @returns   the result
**/
ApiSet Nmrc_FixedAtomSet_GetAtoms(Nmrc_FixedAtomSet self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAtoms");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: cannot find method 'getAtoms'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: method 'getAtoms' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.NmrConstraint.FixedAtomSet
  @param  Nmrc_FixedAtomSet self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nmrc_FixedAtomSet Nmrc_FixedAtomSet_GetByKey(Nmrc_FixedAtomSet self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Nmrc_FixedAtomSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: method 'getByKey' is not callable");
  
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
  @param  Nmrc_FixedAtomSet self
  @returns   the result
**/
ApiString Nmrc_FixedAtomSet_GetClassName(Nmrc_FixedAtomSet self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: method 'getClassName' is not callable");
  
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
  @param  Nmrc_FixedAtomSet self
  @returns   the result
**/
ApiList Nmrc_FixedAtomSet_GetFieldNames(Nmrc_FixedAtomSet self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.nmr.NmrConstraint.FixedAtomSet
  @param  Nmrc_FixedAtomSet self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Nmrc_FixedAtomSet_GetFullKey(Nmrc_FixedAtomSet self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: method 'getFullKey' is not callable");
  
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
  @param  Nmrc_FixedAtomSet self
  @returns   the result
**/
ApiBoolean Nmrc_FixedAtomSet_GetInConstructor(Nmrc_FixedAtomSet self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: method 'getInConstructor' is not callable");
  
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
  @param  Nmrc_FixedAtomSet self
  @returns   the result
**/
ApiBoolean Nmrc_FixedAtomSet_GetIsDeleted(Nmrc_FixedAtomSet self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.nmr.NmrConstraint.FixedAtomSet
  @param  Nmrc_FixedAtomSet self
  @returns  Local object key
**/
ApiObject Nmrc_FixedAtomSet_GetLocalKey(Nmrc_FixedAtomSet self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrConstraint.FixedAtomSet.name

name of FixedAtomSet
  @param  Nmrc_FixedAtomSet self
  @returns   the result
**/
ApiString Nmrc_FixedAtomSet_GetName(Nmrc_FixedAtomSet self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: method 'getName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrConstraint.FixedAtomSet.nmrConstraintStore

parent 
link
  @param  Nmrc_FixedAtomSet self
  @returns   the result
**/
Nmrc_NmrConstraintStore Nmrc_FixedAtomSet_GetNmrConstraintStore(Nmrc_FixedAtomSet self)
{
  
  Nmrc_NmrConstraintStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrConstraintStore");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: cannot find method 'getNmrConstraintStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: method 'getNmrConstraintStore' is not callable");
  
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
  @param  Nmrc_FixedAtomSet self
  @returns   the result
**/
ApiString Nmrc_FixedAtomSet_GetPackageName(Nmrc_FixedAtomSet self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: method 'getPackageName' is not callable");
  
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
  @param  Nmrc_FixedAtomSet self
  @returns   the result
**/
ApiString Nmrc_FixedAtomSet_GetPackageShortName(Nmrc_FixedAtomSet self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrConstraint.FixedAtomSet.parent

link to parent object 
- synonym for nmrConstraintStore
  @param  Nmrc_FixedAtomSet self
  @returns   the result
**/
Nmrc_NmrConstraintStore Nmrc_FixedAtomSet_GetParent(Nmrc_FixedAtomSet self)
{
  
  Nmrc_NmrConstraintStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: method 'getParent' is not callable");
  
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
  @param  Nmrc_FixedAtomSet self
  @returns   the result
**/
ApiString Nmrc_FixedAtomSet_GetQualifiedName(Nmrc_FixedAtomSet self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.nmr.NmrConstraint.FixedAtomSet.resonanceSets

FixedResonanceSets 
associated with FixedAtomSet.
  @param  Nmrc_FixedAtomSet self
  @returns   the result
**/
ApiSet Nmrc_FixedAtomSet_GetResonanceSets(Nmrc_FixedAtomSet self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getResonanceSets");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: cannot find method 'getResonanceSets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: method 'getResonanceSets' is not callable");
  
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
  @param  Nmrc_FixedAtomSet self
  @returns   the result
**/
Impl_MemopsRoot Nmrc_FixedAtomSet_GetRoot(Nmrc_FixedAtomSet self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrConstraint.FixedAtomSet.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmrc_FixedAtomSet self
  @returns   the result
**/
ApiInteger Nmrc_FixedAtomSet_GetSerial(Nmrc_FixedAtomSet self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: method 'getSerial' is not callable");
  
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
  @param  Nmrc_FixedAtomSet self
  @returns   the result
**/
Impl_TopObject Nmrc_FixedAtomSet_GetTopObject(Nmrc_FixedAtomSet self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.nmr.NmrConstraint.FixedAtomSet
  @param  Nmrc_NmrConstraintStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmrc_FixedAtomSet Nmrc_FixedAtomSet_Init(Nmrc_NmrConstraintStore parent, ApiMap attrlinks)
{
  
  return Nmrc_NmrConstraintStore_NewFixedAtomSet(parent, attrlinks);
}

/**
  Constructor for ccp.nmr.NmrConstraint.FixedAtomSet
  @param  Nmrc_NmrConstraintStore parent
  @param  ApiSet atoms
  @returns  the new object
**/
Nmrc_FixedAtomSet Nmrc_FixedAtomSet_Init_reqd(Nmrc_NmrConstraintStore parent, ApiSet atoms)
{
  
  Nmrc_FixedAtomSet  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "atoms", atoms);
  
  obj = Nmrc_FixedAtomSet_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_FixedAtomSet self
  @param  Impl_ApplicationData value
**/
void *Nmrc_FixedAtomSet_RemoveApplicationData(Nmrc_FixedAtomSet self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.NmrConstraint.FixedAtomSet.atoms

Atoms making up 
FixedAtomSet
  @param  Nmrc_FixedAtomSet self
  @param  Mols_Atom value
**/
void *Nmrc_FixedAtomSet_RemoveAtom(Nmrc_FixedAtomSet self, Mols_Atom value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeAtom");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: cannot find method 'removeAtom'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: method 'removeAtom' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
ccp.nmr.NmrConstraint.FixedAtomSet.resonanceSets

FixedResonanceSets 
associated with FixedAtomSet.
  @param  Nmrc_FixedAtomSet self
  @param  Nmrc_FixedResonanceSet value
**/
void *Nmrc_FixedAtomSet_RemoveResonanceSet(Nmrc_FixedAtomSet self, Nmrc_FixedResonanceSet value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeResonanceSet");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: cannot find method 'removeResonanceSet'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: method 'removeResonanceSet' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.nmr.NmrConstraint.FixedAtomSet
  @param  Nmrc_FixedAtomSet self
  @param  ApiString name
  @param  ApiObject value
**/
void *Nmrc_FixedAtomSet_Set(Nmrc_FixedAtomSet self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrc_FixedAtomSet self
  @param  Acco_AccessObject value
**/
void *Nmrc_FixedAtomSet_SetAccess(Nmrc_FixedAtomSet self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: method 'setAccess' is not callable");
  
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
  @param  Nmrc_FixedAtomSet self
  @param  ApiList values
**/
void *Nmrc_FixedAtomSet_SetApplicationData(Nmrc_FixedAtomSet self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrConstraint.FixedAtomSet.atoms

Atoms making up 
FixedAtomSet
  @param  Nmrc_FixedAtomSet self
  @param  ApiSet values
**/
void *Nmrc_FixedAtomSet_SetAtoms(Nmrc_FixedAtomSet self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAtoms");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: cannot find method 'setAtoms'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: method 'setAtoms' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrConstraint.FixedAtomSet.name

name of FixedAtomSet
  @param  Nmrc_FixedAtomSet self
  @param  ApiString value
**/
void *Nmrc_FixedAtomSet_SetName(Nmrc_FixedAtomSet self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.nmr.NmrConstraint.FixedAtomSet.resonanceSets

FixedResonanceSets 
associated with FixedAtomSet.
  @param  Nmrc_FixedAtomSet self
  @param  ApiSet values
**/
void *Nmrc_FixedAtomSet_SetResonanceSets(Nmrc_FixedAtomSet self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setResonanceSets");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: cannot find method 'setResonanceSets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: method 'setResonanceSets' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrConstraint.FixedAtomSet.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmrc_FixedAtomSet self
  @param  ApiInteger value
**/
void *Nmrc_FixedAtomSet_SetSerial(Nmrc_FixedAtomSet self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.NmrConstraint.FixedAtomSet.atoms

Atoms making up 
FixedAtomSet
  @param  Nmrc_FixedAtomSet self
  @returns   the result
**/
ApiList Nmrc_FixedAtomSet_SortedAtoms(Nmrc_FixedAtomSet self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedAtoms");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: cannot find method 'sortedAtoms'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: method 'sortedAtoms' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.nmr.NmrConstraint.FixedAtomSet.resonanceSets

FixedResonanceSets 
associated with FixedAtomSet.
  @param  Nmrc_FixedAtomSet self
  @returns   the result
**/
ApiList Nmrc_FixedAtomSet_SortedResonanceSets(Nmrc_FixedAtomSet self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedResonanceSets");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: cannot find method 'sortedResonanceSets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedAtomSet: method 'sortedResonanceSets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
