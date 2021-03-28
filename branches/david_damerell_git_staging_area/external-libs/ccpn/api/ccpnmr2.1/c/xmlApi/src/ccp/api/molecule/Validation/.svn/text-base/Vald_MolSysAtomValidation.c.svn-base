
#include "ccp.h"

/*
  Validation result for MolSystem Atom
*/

/* package ccp.api.molecule.Validation */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_MolSysAtomValidation self
  @param  Impl_ApplicationData value
**/
void *Vald_MolSysAtomValidation_AddApplicationData(Vald_MolSysAtomValidation self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.molecule.Validation.MolSysAtomValidation.atoms

MolSystem 
Atoms being validated
  @param  Vald_MolSysAtomValidation self
  @param  Mols_Atom value
**/
void *Vald_MolSysAtomValidation_AddAtom(Vald_MolSysAtomValidation self, Mols_Atom value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addAtom");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: cannot find method 'addAtom'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: method 'addAtom' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.molecule.Validation.MolSysAtomValidation
  @param  Vald_MolSysAtomValidation self
  @param  ApiBoolean complete
**/
void *Vald_MolSysAtomValidation_CheckAllValid(Vald_MolSysAtomValidation self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.molecule.Validation.MolSysAtomValidation
  @param  Vald_MolSysAtomValidation self
  @param  ApiBoolean complete
**/
void *Vald_MolSysAtomValidation_CheckValid(Vald_MolSysAtomValidation self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: method 'checkValid' is not callable");
  
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
  @param  Vald_MolSysAtomValidation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Vald_MolSysAtomValidation_FindAllApplicationData(Vald_MolSysAtomValidation self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: method 'findAllApplicationData' is not callable");
  
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
  @param  Vald_MolSysAtomValidation self
  @returns  all value that satisfy the conditions 
**/
ApiList Vald_MolSysAtomValidation_FindAllApplicationData_keyval0(Vald_MolSysAtomValidation self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Vald_MolSysAtomValidation_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_MolSysAtomValidation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Vald_MolSysAtomValidation_FindAllApplicationData_keyval1(Vald_MolSysAtomValidation self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Vald_MolSysAtomValidation_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_MolSysAtomValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Vald_MolSysAtomValidation_FindAllApplicationData_keyval2(Vald_MolSysAtomValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Vald_MolSysAtomValidation_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_MolSysAtomValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Vald_MolSysAtomValidation_FindAllApplicationData_keyval3(Vald_MolSysAtomValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Vald_MolSysAtomValidation_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_MolSysAtomValidation self
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
ApiList Vald_MolSysAtomValidation_FindAllApplicationData_keyval4(Vald_MolSysAtomValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Vald_MolSysAtomValidation_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.Validation.MolSysAtomValidation.atoms

MolSystem Atoms 
being validated
  @param  Vald_MolSysAtomValidation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Vald_MolSysAtomValidation_FindAllAtoms(Vald_MolSysAtomValidation self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllAtoms");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: cannot find method 'findAllAtoms'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: method 'findAllAtoms' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.Validation.MolSysAtomValidation.atoms

MolSystem Atoms 
being validated
  @param  Vald_MolSysAtomValidation self
  @returns  all value that satisfy the conditions 
**/
ApiSet Vald_MolSysAtomValidation_FindAllAtoms_keyval0(Vald_MolSysAtomValidation self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Vald_MolSysAtomValidation_FindAllAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.Validation.MolSysAtomValidation.atoms

MolSystem Atoms 
being validated
  @param  Vald_MolSysAtomValidation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Vald_MolSysAtomValidation_FindAllAtoms_keyval1(Vald_MolSysAtomValidation self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Vald_MolSysAtomValidation_FindAllAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.Validation.MolSysAtomValidation.atoms

MolSystem Atoms 
being validated
  @param  Vald_MolSysAtomValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Vald_MolSysAtomValidation_FindAllAtoms_keyval2(Vald_MolSysAtomValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Vald_MolSysAtomValidation_FindAllAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.Validation.MolSysAtomValidation.atoms

MolSystem Atoms 
being validated
  @param  Vald_MolSysAtomValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Vald_MolSysAtomValidation_FindAllAtoms_keyval3(Vald_MolSysAtomValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Vald_MolSysAtomValidation_FindAllAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.Validation.MolSysAtomValidation.atoms

MolSystem Atoms 
being validated
  @param  Vald_MolSysAtomValidation self
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
ApiSet Vald_MolSysAtomValidation_FindAllAtoms_keyval4(Vald_MolSysAtomValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Vald_MolSysAtomValidation_FindAllAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_MolSysAtomValidation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Vald_MolSysAtomValidation_FindFirstApplicationData(Vald_MolSysAtomValidation self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: method 'findFirstApplicationData' is not callable");
  
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
  @param  Vald_MolSysAtomValidation self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Vald_MolSysAtomValidation_FindFirstApplicationData_keyval0(Vald_MolSysAtomValidation self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Vald_MolSysAtomValidation_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_MolSysAtomValidation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Vald_MolSysAtomValidation_FindFirstApplicationData_keyval1(Vald_MolSysAtomValidation self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Vald_MolSysAtomValidation_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_MolSysAtomValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Vald_MolSysAtomValidation_FindFirstApplicationData_keyval2(Vald_MolSysAtomValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Vald_MolSysAtomValidation_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_MolSysAtomValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Vald_MolSysAtomValidation_FindFirstApplicationData_keyval3(Vald_MolSysAtomValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Vald_MolSysAtomValidation_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_MolSysAtomValidation self
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
Impl_ApplicationData Vald_MolSysAtomValidation_FindFirstApplicationData_keyval4(Vald_MolSysAtomValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Vald_MolSysAtomValidation_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.Validation.MolSysAtomValidation.atoms

MolSystem Atoms 
being validated
  @param  Vald_MolSysAtomValidation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Mols_Atom Vald_MolSysAtomValidation_FindFirstAtom(Vald_MolSysAtomValidation self, ApiMap conditions)
{
  
  Mols_Atom obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstAtom");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: cannot find method 'findFirstAtom'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: method 'findFirstAtom' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.Validation.MolSysAtomValidation.atoms

MolSystem Atoms 
being validated
  @param  Vald_MolSysAtomValidation self
  @returns  the first value that satisfies the conditions 
**/
Mols_Atom Vald_MolSysAtomValidation_FindFirstAtom_keyval0(Vald_MolSysAtomValidation self)
{
  
  Mols_Atom  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Vald_MolSysAtomValidation_FindFirstAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.Validation.MolSysAtomValidation.atoms

MolSystem Atoms 
being validated
  @param  Vald_MolSysAtomValidation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Mols_Atom Vald_MolSysAtomValidation_FindFirstAtom_keyval1(Vald_MolSysAtomValidation self, char * key, ApiObject value)
{
  
  Mols_Atom  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Vald_MolSysAtomValidation_FindFirstAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.Validation.MolSysAtomValidation.atoms

MolSystem Atoms 
being validated
  @param  Vald_MolSysAtomValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Mols_Atom Vald_MolSysAtomValidation_FindFirstAtom_keyval2(Vald_MolSysAtomValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Mols_Atom  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Vald_MolSysAtomValidation_FindFirstAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.Validation.MolSysAtomValidation.atoms

MolSystem Atoms 
being validated
  @param  Vald_MolSysAtomValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Mols_Atom Vald_MolSysAtomValidation_FindFirstAtom_keyval3(Vald_MolSysAtomValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Mols_Atom  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Vald_MolSysAtomValidation_FindFirstAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.Validation.MolSysAtomValidation.atoms

MolSystem Atoms 
being validated
  @param  Vald_MolSysAtomValidation self
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
Mols_Atom Vald_MolSysAtomValidation_FindFirstAtom_keyval4(Vald_MolSysAtomValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Mols_Atom  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Vald_MolSysAtomValidation_FindFirstAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.molecule.Validation.MolSysAtomValidation
  @param  Vald_MolSysAtomValidation self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Vald_MolSysAtomValidation_Get(Vald_MolSysAtomValidation self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Vald_MolSysAtomValidation self
  @returns   the result
**/
Acco_AccessObject Vald_MolSysAtomValidation_GetAccess(Vald_MolSysAtomValidation self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: method 'getAccess' is not callable");
  
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
  @param  Vald_MolSysAtomValidation self
  @returns   the result
**/
Acco_AccessObject Vald_MolSysAtomValidation_GetActiveAccess(Vald_MolSysAtomValidation self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: method 'getActiveAccess' is not callable");
  
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
  @param  Vald_MolSysAtomValidation self
  @returns   the result
**/
ApiList Vald_MolSysAtomValidation_GetApplicationData(Vald_MolSysAtomValidation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Validation.MolSysAtomValidation.atoms

MolSystem 
Atoms being validated
  @param  Vald_MolSysAtomValidation self
  @returns   the result
**/
ApiSet Vald_MolSysAtomValidation_GetAtoms(Vald_MolSysAtomValidation self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAtoms");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: cannot find method 'getAtoms'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: method 'getAtoms' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Template.MultiTypeValue.booleanValue

Boolean type 
value
  @param  Vald_MolSysAtomValidation self
  @returns   the result
**/
ApiBoolean Vald_MolSysAtomValidation_GetBooleanValue(Vald_MolSysAtomValidation self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getBooleanValue");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: cannot find method 'getBooleanValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: method 'getBooleanValue' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.molecule.Validation.MolSysAtomValidation
  @param  Vald_MolSysAtomValidation self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Vald_MolSysAtomValidation Vald_MolSysAtomValidation_GetByKey(Vald_MolSysAtomValidation self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Vald_MolSysAtomValidation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: method 'getByKey' is not callable");
  
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
  @param  Vald_MolSysAtomValidation self
  @returns   the result
**/
ApiString Vald_MolSysAtomValidation_GetClassName(Vald_MolSysAtomValidation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Validation.ValidationResult.context

The context 
where tthe keyword and value is defined. Typically the name of a program 
that both defines the parameter and calculates its value.E.g. 
'PROCHECK', 'SHIFTX', ...Used to derive the keywordDefinition
  @param  Vald_MolSysAtomValidation self
  @returns   the result
**/
ApiString Vald_MolSysAtomValidation_GetContext(Vald_MolSysAtomValidation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getContext");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: cannot find method 'getContext'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: method 'getContext' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Validation.ValidationResult.details

Free text, for 
notes, explanatory comments, etc.
  @param  Vald_MolSysAtomValidation self
  @returns   the result
**/
ApiString Vald_MolSysAtomValidation_GetDetails(Vald_MolSysAtomValidation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: method 'getDetails' is not callable");
  
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
  @param  Vald_MolSysAtomValidation self
  @returns   the result
**/
ApiList Vald_MolSysAtomValidation_GetFieldNames(Vald_MolSysAtomValidation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Validation.ValidationResult.figOfMerit

Figure of 
merit for validated result - 1.0 is perfect, 0.0 is totally wrong.
  @param  Vald_MolSysAtomValidation self
  @returns   the result
**/
ApiFloat Vald_MolSysAtomValidation_GetFigOfMerit(Vald_MolSysAtomValidation self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFigOfMerit");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: cannot find method 'getFigOfMerit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: method 'getFigOfMerit' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Template.MultiTypeValue.floatValue

Float type value
  @param  Vald_MolSysAtomValidation self
  @returns   the result
**/
ApiFloat Vald_MolSysAtomValidation_GetFloatValue(Vald_MolSysAtomValidation self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFloatValue");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: cannot find method 'getFloatValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: method 'getFloatValue' is not callable");
  
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
  @param  Vald_MolSysAtomValidation self
  @returns   the result
**/
ApiBoolean Vald_MolSysAtomValidation_GetInConstructor(Vald_MolSysAtomValidation self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: method 'getInConstructor' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Template.MultiTypeValue.intValue

Integer type value
  @param  Vald_MolSysAtomValidation self
  @returns   the result
**/
ApiInteger Vald_MolSysAtomValidation_GetIntValue(Vald_MolSysAtomValidation self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIntValue");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: cannot find method 'getIntValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: method 'getIntValue' is not callable");
  
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
  @param  Vald_MolSysAtomValidation self
  @returns   the result
**/
ApiBoolean Vald_MolSysAtomValidation_GetIsDeleted(Vald_MolSysAtomValidation self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Validation.ValidationResult.keyword

keyword that 
defines the validation result
  @param  Vald_MolSysAtomValidation self
  @returns   the result
**/
ApiString Vald_MolSysAtomValidation_GetKeyword(Vald_MolSysAtomValidation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getKeyword");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: cannot find method 'getKeyword'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: method 'getKeyword' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Validation.ValidationResult.keywordDefinition
  @param  Vald_MolSysAtomValidation self
  @returns   the result
**/
Kwdf_KeywordDefinition Vald_MolSysAtomValidation_GetKeywordDefinition(Vald_MolSysAtomValidation self)
{
  
  Kwdf_KeywordDefinition obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getKeywordDefinition");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: cannot find method 'getKeywordDefinition'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: method 'getKeywordDefinition' is not callable");
  
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
  @param  Vald_MolSysAtomValidation self
  @returns   the result
**/
ApiString Vald_MolSysAtomValidation_GetPackageName(Vald_MolSysAtomValidation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: method 'getPackageName' is not callable");
  
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
  @param  Vald_MolSysAtomValidation self
  @returns   the result
**/
ApiString Vald_MolSysAtomValidation_GetPackageShortName(Vald_MolSysAtomValidation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Validation.ValidationResult.parent

link to parent 
object - synonym for validationStore
  @param  Vald_MolSysAtomValidation self
  @returns   the result
**/
Vald_ValidationStore Vald_MolSysAtomValidation_GetParent(Vald_MolSysAtomValidation self)
{
  
  Vald_ValidationStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: method 'getParent' is not callable");
  
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
  @param  Vald_MolSysAtomValidation self
  @returns   the result
**/
ApiString Vald_MolSysAtomValidation_GetQualifiedName(Vald_MolSysAtomValidation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: method 'getQualifiedName' is not callable");
  
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
  @param  Vald_MolSysAtomValidation self
  @returns   the result
**/
Impl_MemopsRoot Vald_MolSysAtomValidation_GetRoot(Vald_MolSysAtomValidation self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Validation.ValidationResult.serial

Serial number 
of object. Serves as object main key. Serial numbers of deleted objects 
are not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Vald_MolSysAtomValidation self
  @returns   the result
**/
ApiInteger Vald_MolSysAtomValidation_GetSerial(Vald_MolSysAtomValidation self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: method 'getSerial' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Template.MultiTypeValue.textValue

Text type value
  @param  Vald_MolSysAtomValidation self
  @returns   the result
**/
ApiString Vald_MolSysAtomValidation_GetTextValue(Vald_MolSysAtomValidation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTextValue");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: cannot find method 'getTextValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: method 'getTextValue' is not callable");
  
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
  @param  Vald_MolSysAtomValidation self
  @returns   the result
**/
Impl_TopObject Vald_MolSysAtomValidation_GetTopObject(Vald_MolSysAtomValidation self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Validation.ValidationResult.validationStore

parent 
link
  @param  Vald_MolSysAtomValidation self
  @returns   the result
**/
Vald_ValidationStore Vald_MolSysAtomValidation_GetValidationStore(Vald_MolSysAtomValidation self)
{
  
  Vald_ValidationStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getValidationStore");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: cannot find method 'getValidationStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: method 'getValidationStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.molecule.Validation.MolSysAtomValidation
  @param  Vald_ValidationStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Vald_MolSysAtomValidation Vald_MolSysAtomValidation_Init(Vald_ValidationStore parent, ApiMap attrlinks)
{
  
  return Vald_ValidationStore_NewMolSysAtomValidation(parent, attrlinks);
}

/**
  Constructor for ccp.molecule.Validation.MolSysAtomValidation
  @param  Vald_ValidationStore parent
  @param  char * context
  @param  char * keyword
  @returns  the new object
**/
Vald_MolSysAtomValidation Vald_MolSysAtomValidation_Init_reqd(Vald_ValidationStore parent, char * context, char * keyword)
{
  
  Vald_MolSysAtomValidation  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__context = ApiString_New(context);
  ApiString api__keyword = ApiString_New(keyword);

  PyDict_SetItemString(attrlinks, "context", api__context);
  PyDict_SetItemString(attrlinks, "keyword", api__keyword);
  
  obj = Vald_MolSysAtomValidation_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__context);
  Py_DECREF(api__keyword);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_MolSysAtomValidation self
  @param  Impl_ApplicationData value
**/
void *Vald_MolSysAtomValidation_RemoveApplicationData(Vald_MolSysAtomValidation self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.molecule.Validation.MolSysAtomValidation.atoms

MolSystem 
Atoms being validated
  @param  Vald_MolSysAtomValidation self
  @param  Mols_Atom value
**/
void *Vald_MolSysAtomValidation_RemoveAtom(Vald_MolSysAtomValidation self, Mols_Atom value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeAtom");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: cannot find method 'removeAtom'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: method 'removeAtom' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.molecule.Validation.MolSysAtomValidation
  @param  Vald_MolSysAtomValidation self
  @param  ApiString name
  @param  ApiObject value
**/
void *Vald_MolSysAtomValidation_Set(Vald_MolSysAtomValidation self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Vald_MolSysAtomValidation self
  @param  Acco_AccessObject value
**/
void *Vald_MolSysAtomValidation_SetAccess(Vald_MolSysAtomValidation self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: method 'setAccess' is not callable");
  
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
  @param  Vald_MolSysAtomValidation self
  @param  ApiList values
**/
void *Vald_MolSysAtomValidation_SetApplicationData(Vald_MolSysAtomValidation self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.Validation.MolSysAtomValidation.atoms

MolSystem 
Atoms being validated
  @param  Vald_MolSysAtomValidation self
  @param  ApiSet values
**/
void *Vald_MolSysAtomValidation_SetAtoms(Vald_MolSysAtomValidation self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAtoms");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: cannot find method 'setAtoms'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: method 'setAtoms' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Template.MultiTypeValue.booleanValue

Boolean type 
value
  @param  Vald_MolSysAtomValidation self
  @param  ApiBoolean value
**/
void *Vald_MolSysAtomValidation_SetBooleanValue(Vald_MolSysAtomValidation self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setBooleanValue");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: cannot find method 'setBooleanValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: method 'setBooleanValue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.Validation.ValidationResult.context

The context 
where tthe keyword and value is defined. Typically the name of a program 
that both defines the parameter and calculates its value.E.g. 
'PROCHECK', 'SHIFTX', ...Used to derive the keywordDefinition
  @param  Vald_MolSysAtomValidation self
  @param  ApiString value
**/
void *Vald_MolSysAtomValidation_SetContext(Vald_MolSysAtomValidation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setContext");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: cannot find method 'setContext'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: method 'setContext' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.Validation.ValidationResult.details

Free text, for 
notes, explanatory comments, etc.
  @param  Vald_MolSysAtomValidation self
  @param  ApiString value
**/
void *Vald_MolSysAtomValidation_SetDetails(Vald_MolSysAtomValidation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.Validation.ValidationResult.figOfMerit

Figure of 
merit for validated result - 1.0 is perfect, 0.0 is totally wrong.
  @param  Vald_MolSysAtomValidation self
  @param  ApiFloat value
**/
void *Vald_MolSysAtomValidation_SetFigOfMerit(Vald_MolSysAtomValidation self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setFigOfMerit");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: cannot find method 'setFigOfMerit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: method 'setFigOfMerit' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Template.MultiTypeValue.floatValue

Float type value
  @param  Vald_MolSysAtomValidation self
  @param  ApiFloat value
**/
void *Vald_MolSysAtomValidation_SetFloatValue(Vald_MolSysAtomValidation self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setFloatValue");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: cannot find method 'setFloatValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: method 'setFloatValue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Template.MultiTypeValue.intValue

Integer type value
  @param  Vald_MolSysAtomValidation self
  @param  ApiInteger value
**/
void *Vald_MolSysAtomValidation_SetIntValue(Vald_MolSysAtomValidation self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIntValue");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: cannot find method 'setIntValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: method 'setIntValue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.Validation.ValidationResult.keyword

keyword that 
defines the validation result
  @param  Vald_MolSysAtomValidation self
  @param  ApiString value
**/
void *Vald_MolSysAtomValidation_SetKeyword(Vald_MolSysAtomValidation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setKeyword");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: cannot find method 'setKeyword'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: method 'setKeyword' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.Validation.ValidationResult.serial

Serial number 
of object. Serves as object main key. Serial numbers of deleted objects 
are not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Vald_MolSysAtomValidation self
  @param  ApiInteger value
**/
void *Vald_MolSysAtomValidation_SetSerial(Vald_MolSysAtomValidation self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Template.MultiTypeValue.textValue

Text type value
  @param  Vald_MolSysAtomValidation self
  @param  ApiString value
**/
void *Vald_MolSysAtomValidation_SetTextValue(Vald_MolSysAtomValidation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setTextValue");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: cannot find method 'setTextValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: method 'setTextValue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.Validation.MolSysAtomValidation.atoms

MolSystem 
Atoms being validated
  @param  Vald_MolSysAtomValidation self
  @returns   the result
**/
ApiList Vald_MolSysAtomValidation_SortedAtoms(Vald_MolSysAtomValidation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedAtoms");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: cannot find method 'sortedAtoms'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.MolSysAtomValidation: method 'sortedAtoms' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
