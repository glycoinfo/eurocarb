
#include "ccp.h"

/*
  Fixed version of ResonanceSet. When a Structure Generation run is started, AtomSets and ResonanceSets are copied to FixedAtomSets and FixedResonanceSets in order to preserve the Resonance-Atom assignment valid for a StructureGeneration and the associated ConstraintLists.
*/

/* package ccp.api.nmr.NmrConstraint */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_FixedResonanceSet self
  @param  Impl_ApplicationData value
**/
void *Nmrc_FixedResonanceSet_AddApplicationData(Nmrc_FixedResonanceSet self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.NmrConstraint.FixedResonanceSet.atomSets

FixedAtomSets 
making up FixedResonanceSet
  @param  Nmrc_FixedResonanceSet self
  @param  Nmrc_FixedAtomSet value
**/
void *Nmrc_FixedResonanceSet_AddAtomSet(Nmrc_FixedResonanceSet self, Nmrc_FixedAtomSet value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addAtomSet");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: cannot find method 'addAtomSet'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: method 'addAtomSet' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for 
ccp.nmr.NmrConstraint.FixedResonanceSet.resonances

FixedResonances 
making up FixedResonanceSet
  @param  Nmrc_FixedResonanceSet self
  @param  Nmrc_FixedResonance value
**/
void *Nmrc_FixedResonanceSet_AddResonance(Nmrc_FixedResonanceSet self, Nmrc_FixedResonance value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addResonance");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: cannot find method 'addResonance'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: method 'addResonance' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.nmr.NmrConstraint.FixedResonanceSet
  @param  Nmrc_FixedResonanceSet self
  @param  ApiBoolean complete
**/
void *Nmrc_FixedResonanceSet_CheckAllValid(Nmrc_FixedResonanceSet self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.nmr.NmrConstraint.FixedResonanceSet
  @param  Nmrc_FixedResonanceSet self
  @param  ApiBoolean complete
**/
void *Nmrc_FixedResonanceSet_CheckValid(Nmrc_FixedResonanceSet self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: method 'checkValid' is not callable");
  
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
  @param  Nmrc_FixedResonanceSet self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_FixedResonanceSet_FindAllApplicationData(Nmrc_FixedResonanceSet self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: method 'findAllApplicationData' is not callable");
  
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
  @param  Nmrc_FixedResonanceSet self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_FixedResonanceSet_FindAllApplicationData_keyval0(Nmrc_FixedResonanceSet self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_FixedResonanceSet_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_FixedResonanceSet self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_FixedResonanceSet_FindAllApplicationData_keyval1(Nmrc_FixedResonanceSet self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_FixedResonanceSet_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_FixedResonanceSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_FixedResonanceSet_FindAllApplicationData_keyval2(Nmrc_FixedResonanceSet self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_FixedResonanceSet_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_FixedResonanceSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_FixedResonanceSet_FindAllApplicationData_keyval3(Nmrc_FixedResonanceSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_FixedResonanceSet_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_FixedResonanceSet self
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
ApiList Nmrc_FixedResonanceSet_FindAllApplicationData_keyval4(Nmrc_FixedResonanceSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_FixedResonanceSet_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.FixedResonanceSet.atomSets

FixedAtomSets making 
up FixedResonanceSet
  @param  Nmrc_FixedResonanceSet self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_FixedResonanceSet_FindAllAtomSets(Nmrc_FixedResonanceSet self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllAtomSets");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: cannot find method 'findAllAtomSets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: method 'findAllAtomSets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.FixedResonanceSet.atomSets

FixedAtomSets making 
up FixedResonanceSet
  @param  Nmrc_FixedResonanceSet self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_FixedResonanceSet_FindAllAtomSets_keyval0(Nmrc_FixedResonanceSet self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_FixedResonanceSet_FindAllAtomSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.FixedResonanceSet.atomSets

FixedAtomSets making 
up FixedResonanceSet
  @param  Nmrc_FixedResonanceSet self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_FixedResonanceSet_FindAllAtomSets_keyval1(Nmrc_FixedResonanceSet self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_FixedResonanceSet_FindAllAtomSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.FixedResonanceSet.atomSets

FixedAtomSets making 
up FixedResonanceSet
  @param  Nmrc_FixedResonanceSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_FixedResonanceSet_FindAllAtomSets_keyval2(Nmrc_FixedResonanceSet self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_FixedResonanceSet_FindAllAtomSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.FixedResonanceSet.atomSets

FixedAtomSets making 
up FixedResonanceSet
  @param  Nmrc_FixedResonanceSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_FixedResonanceSet_FindAllAtomSets_keyval3(Nmrc_FixedResonanceSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_FixedResonanceSet_FindAllAtomSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.FixedResonanceSet.atomSets

FixedAtomSets making 
up FixedResonanceSet
  @param  Nmrc_FixedResonanceSet self
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
ApiSet Nmrc_FixedResonanceSet_FindAllAtomSets_keyval4(Nmrc_FixedResonanceSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_FixedResonanceSet_FindAllAtomSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.FixedResonanceSet.resonances

FixedResonances 
making up FixedResonanceSet
  @param  Nmrc_FixedResonanceSet self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_FixedResonanceSet_FindAllResonances(Nmrc_FixedResonanceSet self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllResonances");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: cannot find method 'findAllResonances'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: method 'findAllResonances' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.FixedResonanceSet.resonances

FixedResonances 
making up FixedResonanceSet
  @param  Nmrc_FixedResonanceSet self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_FixedResonanceSet_FindAllResonances_keyval0(Nmrc_FixedResonanceSet self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_FixedResonanceSet_FindAllResonances(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.FixedResonanceSet.resonances

FixedResonances 
making up FixedResonanceSet
  @param  Nmrc_FixedResonanceSet self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_FixedResonanceSet_FindAllResonances_keyval1(Nmrc_FixedResonanceSet self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_FixedResonanceSet_FindAllResonances(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.FixedResonanceSet.resonances

FixedResonances 
making up FixedResonanceSet
  @param  Nmrc_FixedResonanceSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_FixedResonanceSet_FindAllResonances_keyval2(Nmrc_FixedResonanceSet self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_FixedResonanceSet_FindAllResonances(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.FixedResonanceSet.resonances

FixedResonances 
making up FixedResonanceSet
  @param  Nmrc_FixedResonanceSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_FixedResonanceSet_FindAllResonances_keyval3(Nmrc_FixedResonanceSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_FixedResonanceSet_FindAllResonances(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.FixedResonanceSet.resonances

FixedResonances 
making up FixedResonanceSet
  @param  Nmrc_FixedResonanceSet self
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
ApiSet Nmrc_FixedResonanceSet_FindAllResonances_keyval4(Nmrc_FixedResonanceSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_FixedResonanceSet_FindAllResonances(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_FixedResonanceSet self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrc_FixedResonanceSet_FindFirstApplicationData(Nmrc_FixedResonanceSet self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nmrc_FixedResonanceSet self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrc_FixedResonanceSet_FindFirstApplicationData_keyval0(Nmrc_FixedResonanceSet self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_FixedResonanceSet_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_FixedResonanceSet self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrc_FixedResonanceSet_FindFirstApplicationData_keyval1(Nmrc_FixedResonanceSet self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_FixedResonanceSet_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_FixedResonanceSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrc_FixedResonanceSet_FindFirstApplicationData_keyval2(Nmrc_FixedResonanceSet self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_FixedResonanceSet_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_FixedResonanceSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrc_FixedResonanceSet_FindFirstApplicationData_keyval3(Nmrc_FixedResonanceSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_FixedResonanceSet_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_FixedResonanceSet self
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
Impl_ApplicationData Nmrc_FixedResonanceSet_FindFirstApplicationData_keyval4(Nmrc_FixedResonanceSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_FixedResonanceSet_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedResonanceSet.atomSets

FixedAtomSets making 
up FixedResonanceSet
  @param  Nmrc_FixedResonanceSet self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmrc_FixedAtomSet Nmrc_FixedResonanceSet_FindFirstAtomSet(Nmrc_FixedResonanceSet self, ApiMap conditions)
{
  
  Nmrc_FixedAtomSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstAtomSet");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: cannot find method 'findFirstAtomSet'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: method 'findFirstAtomSet' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedResonanceSet.atomSets

FixedAtomSets making 
up FixedResonanceSet
  @param  Nmrc_FixedResonanceSet self
  @returns  the first value that satisfies the conditions 
**/
Nmrc_FixedAtomSet Nmrc_FixedResonanceSet_FindFirstAtomSet_keyval0(Nmrc_FixedResonanceSet self)
{
  
  Nmrc_FixedAtomSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_FixedResonanceSet_FindFirstAtomSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedResonanceSet.atomSets

FixedAtomSets making 
up FixedResonanceSet
  @param  Nmrc_FixedResonanceSet self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmrc_FixedAtomSet Nmrc_FixedResonanceSet_FindFirstAtomSet_keyval1(Nmrc_FixedResonanceSet self, char * key, ApiObject value)
{
  
  Nmrc_FixedAtomSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_FixedResonanceSet_FindFirstAtomSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedResonanceSet.atomSets

FixedAtomSets making 
up FixedResonanceSet
  @param  Nmrc_FixedResonanceSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmrc_FixedAtomSet Nmrc_FixedResonanceSet_FindFirstAtomSet_keyval2(Nmrc_FixedResonanceSet self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmrc_FixedAtomSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_FixedResonanceSet_FindFirstAtomSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedResonanceSet.atomSets

FixedAtomSets making 
up FixedResonanceSet
  @param  Nmrc_FixedResonanceSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmrc_FixedAtomSet Nmrc_FixedResonanceSet_FindFirstAtomSet_keyval3(Nmrc_FixedResonanceSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmrc_FixedAtomSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_FixedResonanceSet_FindFirstAtomSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedResonanceSet.atomSets

FixedAtomSets making 
up FixedResonanceSet
  @param  Nmrc_FixedResonanceSet self
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
Nmrc_FixedAtomSet Nmrc_FixedResonanceSet_FindFirstAtomSet_keyval4(Nmrc_FixedResonanceSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmrc_FixedAtomSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_FixedResonanceSet_FindFirstAtomSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedResonanceSet.resonances

FixedResonances 
making up FixedResonanceSet
  @param  Nmrc_FixedResonanceSet self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmrc_FixedResonance Nmrc_FixedResonanceSet_FindFirstResonance(Nmrc_FixedResonanceSet self, ApiMap conditions)
{
  
  Nmrc_FixedResonance obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstResonance");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: cannot find method 'findFirstResonance'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: method 'findFirstResonance' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedResonanceSet.resonances

FixedResonances 
making up FixedResonanceSet
  @param  Nmrc_FixedResonanceSet self
  @returns  the first value that satisfies the conditions 
**/
Nmrc_FixedResonance Nmrc_FixedResonanceSet_FindFirstResonance_keyval0(Nmrc_FixedResonanceSet self)
{
  
  Nmrc_FixedResonance  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_FixedResonanceSet_FindFirstResonance(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedResonanceSet.resonances

FixedResonances 
making up FixedResonanceSet
  @param  Nmrc_FixedResonanceSet self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmrc_FixedResonance Nmrc_FixedResonanceSet_FindFirstResonance_keyval1(Nmrc_FixedResonanceSet self, char * key, ApiObject value)
{
  
  Nmrc_FixedResonance  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_FixedResonanceSet_FindFirstResonance(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedResonanceSet.resonances

FixedResonances 
making up FixedResonanceSet
  @param  Nmrc_FixedResonanceSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmrc_FixedResonance Nmrc_FixedResonanceSet_FindFirstResonance_keyval2(Nmrc_FixedResonanceSet self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmrc_FixedResonance  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_FixedResonanceSet_FindFirstResonance(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedResonanceSet.resonances

FixedResonances 
making up FixedResonanceSet
  @param  Nmrc_FixedResonanceSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmrc_FixedResonance Nmrc_FixedResonanceSet_FindFirstResonance_keyval3(Nmrc_FixedResonanceSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmrc_FixedResonance  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_FixedResonanceSet_FindFirstResonance(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedResonanceSet.resonances

FixedResonances 
making up FixedResonanceSet
  @param  Nmrc_FixedResonanceSet self
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
Nmrc_FixedResonance Nmrc_FixedResonanceSet_FindFirstResonance_keyval4(Nmrc_FixedResonanceSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmrc_FixedResonance  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_FixedResonanceSet_FindFirstResonance(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.nmr.NmrConstraint.FixedResonanceSet
  @param  Nmrc_FixedResonanceSet self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Nmrc_FixedResonanceSet_Get(Nmrc_FixedResonanceSet self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrc_FixedResonanceSet self
  @returns   the result
**/
Acco_AccessObject Nmrc_FixedResonanceSet_GetAccess(Nmrc_FixedResonanceSet self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: method 'getAccess' is not callable");
  
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
  @param  Nmrc_FixedResonanceSet self
  @returns   the result
**/
ApiList Nmrc_FixedResonanceSet_GetApplicationData(Nmrc_FixedResonanceSet self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrConstraint.FixedResonanceSet.atomSets

FixedAtomSets 
making up FixedResonanceSet
  @param  Nmrc_FixedResonanceSet self
  @returns   the result
**/
ApiSet Nmrc_FixedResonanceSet_GetAtomSets(Nmrc_FixedResonanceSet self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAtomSets");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: cannot find method 'getAtomSets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: method 'getAtomSets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.NmrConstraint.FixedResonanceSet
  @param  Nmrc_FixedResonanceSet self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nmrc_FixedResonanceSet Nmrc_FixedResonanceSet_GetByKey(Nmrc_FixedResonanceSet self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Nmrc_FixedResonanceSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: method 'getByKey' is not callable");
  
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
  @param  Nmrc_FixedResonanceSet self
  @returns   the result
**/
ApiString Nmrc_FixedResonanceSet_GetClassName(Nmrc_FixedResonanceSet self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: method 'getClassName' is not callable");
  
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
  @param  Nmrc_FixedResonanceSet self
  @returns   the result
**/
ApiList Nmrc_FixedResonanceSet_GetFieldNames(Nmrc_FixedResonanceSet self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.nmr.NmrConstraint.FixedResonanceSet
  @param  Nmrc_FixedResonanceSet self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Nmrc_FixedResonanceSet_GetFullKey(Nmrc_FixedResonanceSet self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: method 'getFullKey' is not callable");
  
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
  @param  Nmrc_FixedResonanceSet self
  @returns   the result
**/
ApiBoolean Nmrc_FixedResonanceSet_GetInConstructor(Nmrc_FixedResonanceSet self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: method 'getInConstructor' is not callable");
  
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
  @param  Nmrc_FixedResonanceSet self
  @returns   the result
**/
ApiBoolean Nmrc_FixedResonanceSet_GetIsDeleted(Nmrc_FixedResonanceSet self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.nmr.NmrConstraint.FixedResonanceSet
  @param  Nmrc_FixedResonanceSet self
  @returns  Local object key
**/
ApiObject Nmrc_FixedResonanceSet_GetLocalKey(Nmrc_FixedResonanceSet self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.nmr.NmrConstraint.FixedResonanceSet.nmrConstraintStore

parent link
  @param  Nmrc_FixedResonanceSet self
  @returns   the result
**/
Nmrc_NmrConstraintStore Nmrc_FixedResonanceSet_GetNmrConstraintStore(Nmrc_FixedResonanceSet self)
{
  
  Nmrc_NmrConstraintStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrConstraintStore");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: cannot find method 'getNmrConstraintStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: method 'getNmrConstraintStore' is not callable");
  
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
  @param  Nmrc_FixedResonanceSet self
  @returns   the result
**/
ApiString Nmrc_FixedResonanceSet_GetPackageName(Nmrc_FixedResonanceSet self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: method 'getPackageName' is not callable");
  
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
  @param  Nmrc_FixedResonanceSet self
  @returns   the result
**/
ApiString Nmrc_FixedResonanceSet_GetPackageShortName(Nmrc_FixedResonanceSet self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrConstraint.FixedResonanceSet.parent

link to parent 
object - synonym for nmrConstraintStore
  @param  Nmrc_FixedResonanceSet self
  @returns   the result
**/
Nmrc_NmrConstraintStore Nmrc_FixedResonanceSet_GetParent(Nmrc_FixedResonanceSet self)
{
  
  Nmrc_NmrConstraintStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: method 'getParent' is not callable");
  
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
  @param  Nmrc_FixedResonanceSet self
  @returns   the result
**/
ApiString Nmrc_FixedResonanceSet_GetQualifiedName(Nmrc_FixedResonanceSet self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.nmr.NmrConstraint.FixedResonanceSet.resonances

FixedResonances 
making up FixedResonanceSet
  @param  Nmrc_FixedResonanceSet self
  @returns   the result
**/
ApiSet Nmrc_FixedResonanceSet_GetResonances(Nmrc_FixedResonanceSet self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getResonances");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: cannot find method 'getResonances'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: method 'getResonances' is not callable");
  
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
  @param  Nmrc_FixedResonanceSet self
  @returns   the result
**/
Impl_MemopsRoot Nmrc_FixedResonanceSet_GetRoot(Nmrc_FixedResonanceSet self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrConstraint.FixedResonanceSet.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmrc_FixedResonanceSet self
  @returns   the result
**/
ApiInteger Nmrc_FixedResonanceSet_GetSerial(Nmrc_FixedResonanceSet self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: method 'getSerial' is not callable");
  
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
  @param  Nmrc_FixedResonanceSet self
  @returns   the result
**/
Impl_TopObject Nmrc_FixedResonanceSet_GetTopObject(Nmrc_FixedResonanceSet self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.nmr.NmrConstraint.FixedResonanceSet
  @param  Nmrc_NmrConstraintStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmrc_FixedResonanceSet Nmrc_FixedResonanceSet_Init(Nmrc_NmrConstraintStore parent, ApiMap attrlinks)
{
  
  return Nmrc_NmrConstraintStore_NewFixedResonanceSet(parent, attrlinks);
}

/**
  Constructor for ccp.nmr.NmrConstraint.FixedResonanceSet
  @param  Nmrc_NmrConstraintStore parent
  @param  ApiSet atomSets
  @param  ApiSet resonances
  @returns  the new object
**/
Nmrc_FixedResonanceSet Nmrc_FixedResonanceSet_Init_reqd(Nmrc_NmrConstraintStore parent, ApiSet atomSets, ApiSet resonances)
{
  
  Nmrc_FixedResonanceSet  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "atomSets", atomSets);
  PyDict_SetItemString(attrlinks, "resonances", resonances);
  
  obj = Nmrc_FixedResonanceSet_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_FixedResonanceSet self
  @param  Impl_ApplicationData value
**/
void *Nmrc_FixedResonanceSet_RemoveApplicationData(Nmrc_FixedResonanceSet self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
ccp.nmr.NmrConstraint.FixedResonanceSet.atomSets

FixedAtomSets making 
up FixedResonanceSet
  @param  Nmrc_FixedResonanceSet self
  @param  Nmrc_FixedAtomSet value
**/
void *Nmrc_FixedResonanceSet_RemoveAtomSet(Nmrc_FixedResonanceSet self, Nmrc_FixedAtomSet value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeAtomSet");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: cannot find method 'removeAtomSet'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: method 'removeAtomSet' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
ccp.nmr.NmrConstraint.FixedResonanceSet.resonances

FixedResonances 
making up FixedResonanceSet
  @param  Nmrc_FixedResonanceSet self
  @param  Nmrc_FixedResonance value
**/
void *Nmrc_FixedResonanceSet_RemoveResonance(Nmrc_FixedResonanceSet self, Nmrc_FixedResonance value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeResonance");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: cannot find method 'removeResonance'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: method 'removeResonance' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.nmr.NmrConstraint.FixedResonanceSet
  @param  Nmrc_FixedResonanceSet self
  @param  ApiString name
  @param  ApiObject value
**/
void *Nmrc_FixedResonanceSet_Set(Nmrc_FixedResonanceSet self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrc_FixedResonanceSet self
  @param  Acco_AccessObject value
**/
void *Nmrc_FixedResonanceSet_SetAccess(Nmrc_FixedResonanceSet self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: method 'setAccess' is not callable");
  
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
  @param  Nmrc_FixedResonanceSet self
  @param  ApiList values
**/
void *Nmrc_FixedResonanceSet_SetApplicationData(Nmrc_FixedResonanceSet self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrConstraint.FixedResonanceSet.atomSets

FixedAtomSets 
making up FixedResonanceSet
  @param  Nmrc_FixedResonanceSet self
  @param  ApiSet values
**/
void *Nmrc_FixedResonanceSet_SetAtomSets(Nmrc_FixedResonanceSet self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAtomSets");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: cannot find method 'setAtomSets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: method 'setAtomSets' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.nmr.NmrConstraint.FixedResonanceSet.resonances

FixedResonances 
making up FixedResonanceSet
  @param  Nmrc_FixedResonanceSet self
  @param  ApiSet values
**/
void *Nmrc_FixedResonanceSet_SetResonances(Nmrc_FixedResonanceSet self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setResonances");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: cannot find method 'setResonances'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: method 'setResonances' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrConstraint.FixedResonanceSet.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmrc_FixedResonanceSet self
  @param  ApiInteger value
**/
void *Nmrc_FixedResonanceSet_SetSerial(Nmrc_FixedResonanceSet self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.nmr.NmrConstraint.FixedResonanceSet.atomSets

FixedAtomSets making 
up FixedResonanceSet
  @param  Nmrc_FixedResonanceSet self
  @returns   the result
**/
ApiList Nmrc_FixedResonanceSet_SortedAtomSets(Nmrc_FixedResonanceSet self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedAtomSets");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: cannot find method 'sortedAtomSets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: method 'sortedAtomSets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.nmr.NmrConstraint.FixedResonanceSet.resonances

FixedResonances 
making up FixedResonanceSet
  @param  Nmrc_FixedResonanceSet self
  @returns   the result
**/
ApiList Nmrc_FixedResonanceSet_SortedResonances(Nmrc_FixedResonanceSet self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedResonances");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: cannot find method 'sortedResonances'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonanceSet: method 'sortedResonances' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
