
#include "ccp.h"

/*
  Validation result for one or more Atoms
*/

/* package ccp.api.molecule.StructureValidation */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_AtomValidation self
  @param  Impl_ApplicationData value
**/
void *Vald_AtomValidation_AddApplicationData(Vald_AtomValidation self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.molecule.StructureValidation.AtomValidation.atoms

Atoms 
being validated
  @param  Vald_AtomValidation self
  @param  Coor_Atom value
**/
void *Vald_AtomValidation_AddAtom(Vald_AtomValidation self, Coor_Atom value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addAtom");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: cannot find method 'addAtom'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: method 'addAtom' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.molecule.StructureValidation.AtomValidation
  @param  Vald_AtomValidation self
  @param  ApiBoolean complete
**/
void *Vald_AtomValidation_CheckAllValid(Vald_AtomValidation self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.molecule.StructureValidation.AtomValidation
  @param  Vald_AtomValidation self
  @param  ApiBoolean complete
**/
void *Vald_AtomValidation_CheckValid(Vald_AtomValidation self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: method 'checkValid' is not callable");
  
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
  @param  Vald_AtomValidation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Vald_AtomValidation_FindAllApplicationData(Vald_AtomValidation self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: method 'findAllApplicationData' is not callable");
  
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
  @param  Vald_AtomValidation self
  @returns  all value that satisfy the conditions 
**/
ApiList Vald_AtomValidation_FindAllApplicationData_keyval0(Vald_AtomValidation self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Vald_AtomValidation_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_AtomValidation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Vald_AtomValidation_FindAllApplicationData_keyval1(Vald_AtomValidation self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Vald_AtomValidation_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_AtomValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Vald_AtomValidation_FindAllApplicationData_keyval2(Vald_AtomValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Vald_AtomValidation_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_AtomValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Vald_AtomValidation_FindAllApplicationData_keyval3(Vald_AtomValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Vald_AtomValidation_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_AtomValidation self
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
ApiList Vald_AtomValidation_FindAllApplicationData_keyval4(Vald_AtomValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Vald_AtomValidation_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.StructureValidation.AtomValidation.atoms

Atoms 
being validated
  @param  Vald_AtomValidation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Vald_AtomValidation_FindAllAtoms(Vald_AtomValidation self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllAtoms");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: cannot find method 'findAllAtoms'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: method 'findAllAtoms' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.molecule.StructureValidation.AtomValidation.atoms

Atoms 
being validated
  @param  Vald_AtomValidation self
  @returns  all value that satisfy the conditions 
**/
ApiSet Vald_AtomValidation_FindAllAtoms_keyval0(Vald_AtomValidation self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Vald_AtomValidation_FindAllAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.StructureValidation.AtomValidation.atoms

Atoms 
being validated
  @param  Vald_AtomValidation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Vald_AtomValidation_FindAllAtoms_keyval1(Vald_AtomValidation self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Vald_AtomValidation_FindAllAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.StructureValidation.AtomValidation.atoms

Atoms 
being validated
  @param  Vald_AtomValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Vald_AtomValidation_FindAllAtoms_keyval2(Vald_AtomValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Vald_AtomValidation_FindAllAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.StructureValidation.AtomValidation.atoms

Atoms 
being validated
  @param  Vald_AtomValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Vald_AtomValidation_FindAllAtoms_keyval3(Vald_AtomValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Vald_AtomValidation_FindAllAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.StructureValidation.AtomValidation.atoms

Atoms 
being validated
  @param  Vald_AtomValidation self
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
ApiSet Vald_AtomValidation_FindAllAtoms_keyval4(Vald_AtomValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Vald_AtomValidation_FindAllAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_AtomValidation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Vald_AtomValidation_FindFirstApplicationData(Vald_AtomValidation self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: method 'findFirstApplicationData' is not callable");
  
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
  @param  Vald_AtomValidation self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Vald_AtomValidation_FindFirstApplicationData_keyval0(Vald_AtomValidation self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Vald_AtomValidation_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_AtomValidation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Vald_AtomValidation_FindFirstApplicationData_keyval1(Vald_AtomValidation self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Vald_AtomValidation_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_AtomValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Vald_AtomValidation_FindFirstApplicationData_keyval2(Vald_AtomValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Vald_AtomValidation_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_AtomValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Vald_AtomValidation_FindFirstApplicationData_keyval3(Vald_AtomValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Vald_AtomValidation_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_AtomValidation self
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
Impl_ApplicationData Vald_AtomValidation_FindFirstApplicationData_keyval4(Vald_AtomValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Vald_AtomValidation_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.StructureValidation.AtomValidation.atoms

Atoms being 
validated
  @param  Vald_AtomValidation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Coor_Atom Vald_AtomValidation_FindFirstAtom(Vald_AtomValidation self, ApiMap conditions)
{
  
  Coor_Atom obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstAtom");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: cannot find method 'findFirstAtom'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: method 'findFirstAtom' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.StructureValidation.AtomValidation.atoms

Atoms being 
validated
  @param  Vald_AtomValidation self
  @returns  the first value that satisfies the conditions 
**/
Coor_Atom Vald_AtomValidation_FindFirstAtom_keyval0(Vald_AtomValidation self)
{
  
  Coor_Atom  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Vald_AtomValidation_FindFirstAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.StructureValidation.AtomValidation.atoms

Atoms being 
validated
  @param  Vald_AtomValidation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Coor_Atom Vald_AtomValidation_FindFirstAtom_keyval1(Vald_AtomValidation self, char * key, ApiObject value)
{
  
  Coor_Atom  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Vald_AtomValidation_FindFirstAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.StructureValidation.AtomValidation.atoms

Atoms being 
validated
  @param  Vald_AtomValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Coor_Atom Vald_AtomValidation_FindFirstAtom_keyval2(Vald_AtomValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Coor_Atom  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Vald_AtomValidation_FindFirstAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.StructureValidation.AtomValidation.atoms

Atoms being 
validated
  @param  Vald_AtomValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Coor_Atom Vald_AtomValidation_FindFirstAtom_keyval3(Vald_AtomValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Coor_Atom  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Vald_AtomValidation_FindFirstAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.StructureValidation.AtomValidation.atoms

Atoms being 
validated
  @param  Vald_AtomValidation self
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
Coor_Atom Vald_AtomValidation_FindFirstAtom_keyval4(Vald_AtomValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Coor_Atom  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Vald_AtomValidation_FindFirstAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.molecule.StructureValidation.AtomValidation
  @param  Vald_AtomValidation self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Vald_AtomValidation_Get(Vald_AtomValidation self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Vald_AtomValidation self
  @returns   the result
**/
Acco_AccessObject Vald_AtomValidation_GetAccess(Vald_AtomValidation self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: method 'getAccess' is not callable");
  
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
  @param  Vald_AtomValidation self
  @returns   the result
**/
ApiList Vald_AtomValidation_GetApplicationData(Vald_AtomValidation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.StructureValidation.AtomValidation.atoms

Atoms 
being validated
  @param  Vald_AtomValidation self
  @returns   the result
**/
ApiSet Vald_AtomValidation_GetAtoms(Vald_AtomValidation self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAtoms");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: cannot find method 'getAtoms'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: method 'getAtoms' is not callable");
  
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
  @param  Vald_AtomValidation self
  @returns   the result
**/
ApiBoolean Vald_AtomValidation_GetBooleanValue(Vald_AtomValidation self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getBooleanValue");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: cannot find method 'getBooleanValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: method 'getBooleanValue' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.molecule.StructureValidation.AtomValidation
  @param  Vald_AtomValidation self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Vald_AtomValidation Vald_AtomValidation_GetByKey(Vald_AtomValidation self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Vald_AtomValidation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: method 'getByKey' is not callable");
  
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
  @param  Vald_AtomValidation self
  @returns   the result
**/
ApiString Vald_AtomValidation_GetClassName(Vald_AtomValidation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.StructureValidation.ValidationResult.context

The 
context where tthe keyword and value is defined. Typically the name of a 
program that both defines the parameter and calculates its value.E.g. 
'PROCHECK', 'SHIFTX', ...Used to derive the keywordDefinition
  @param  Vald_AtomValidation self
  @returns   the result
**/
ApiString Vald_AtomValidation_GetContext(Vald_AtomValidation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getContext");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: cannot find method 'getContext'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: method 'getContext' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.StructureValidation.ValidationResult.details

Free 
text, for notes, explanatory comments, etc.
  @param  Vald_AtomValidation self
  @returns   the result
**/
ApiString Vald_AtomValidation_GetDetails(Vald_AtomValidation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: method 'getDetails' is not callable");
  
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
  @param  Vald_AtomValidation self
  @returns   the result
**/
ApiList Vald_AtomValidation_GetFieldNames(Vald_AtomValidation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.molecule.StructureValidation.ValidationResult.figOfMerit

Figure of 
merit for validated result - 1.0 is perfect, 0.0 is totally wrong.
  @param  Vald_AtomValidation self
  @returns   the result
**/
ApiFloat Vald_AtomValidation_GetFigOfMerit(Vald_AtomValidation self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFigOfMerit");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: cannot find method 'getFigOfMerit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: method 'getFigOfMerit' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Template.MultiTypeValue.floatValue

Float type value
  @param  Vald_AtomValidation self
  @returns   the result
**/
ApiFloat Vald_AtomValidation_GetFloatValue(Vald_AtomValidation self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFloatValue");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: cannot find method 'getFloatValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: method 'getFloatValue' is not callable");
  
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
  @param  Vald_AtomValidation self
  @returns   the result
**/
ApiBoolean Vald_AtomValidation_GetInConstructor(Vald_AtomValidation self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: method 'getInConstructor' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Template.MultiTypeValue.intValue

Integer type value
  @param  Vald_AtomValidation self
  @returns   the result
**/
ApiInteger Vald_AtomValidation_GetIntValue(Vald_AtomValidation self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIntValue");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: cannot find method 'getIntValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: method 'getIntValue' is not callable");
  
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
  @param  Vald_AtomValidation self
  @returns   the result
**/
ApiBoolean Vald_AtomValidation_GetIsDeleted(Vald_AtomValidation self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.molecule.StructureValidation.ValidationResult.keyword

keyword that 
defines the validation result
  @param  Vald_AtomValidation self
  @returns   the result
**/
ApiString Vald_AtomValidation_GetKeyword(Vald_AtomValidation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getKeyword");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: cannot find method 'getKeyword'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: method 'getKeyword' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.molecule.StructureValidation.ValidationResult.keywordDefinition
  @param  Vald_AtomValidation self
  @returns   the result
**/
Kwdf_KeywordDefinition Vald_AtomValidation_GetKeywordDefinition(Vald_AtomValidation self)
{
  
  Kwdf_KeywordDefinition obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getKeywordDefinition");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: cannot find method 'getKeywordDefinition'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: method 'getKeywordDefinition' is not callable");
  
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
  @param  Vald_AtomValidation self
  @returns   the result
**/
ApiString Vald_AtomValidation_GetPackageName(Vald_AtomValidation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: method 'getPackageName' is not callable");
  
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
  @param  Vald_AtomValidation self
  @returns   the result
**/
ApiString Vald_AtomValidation_GetPackageShortName(Vald_AtomValidation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.StructureValidation.ValidationResult.parent

link 
to parent object - synonym for structureValidationStore
  @param  Vald_AtomValidation self
  @returns   the result
**/
Vald_ValidationStore Vald_AtomValidation_GetParent(Vald_AtomValidation self)
{
  
  Vald_ValidationStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: method 'getParent' is not callable");
  
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
  @param  Vald_AtomValidation self
  @returns   the result
**/
ApiString Vald_AtomValidation_GetQualifiedName(Vald_AtomValidation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: method 'getQualifiedName' is not callable");
  
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
  @param  Vald_AtomValidation self
  @returns   the result
**/
Impl_MemopsRoot Vald_AtomValidation_GetRoot(Vald_AtomValidation self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.StructureValidation.ValidationResult.serial

Serial 
number of object. Serves as object main key. Serial numbers of deleted 
objects are not re-used. Serial numbers can only be set by the 
implementation. Values are in practice always positive, since negative 
values are interpreted as a signal to set the next free serial
  @param  Vald_AtomValidation self
  @returns   the result
**/
ApiInteger Vald_AtomValidation_GetSerial(Vald_AtomValidation self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: method 'getSerial' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.molecule.StructureValidation.ValidationResult.structureValidationStore

parent 
link
  @param  Vald_AtomValidation self
  @returns   the result
**/
Vald_ValidationStore Vald_AtomValidation_GetValidationStore(Vald_AtomValidation self)
{
  
  Vald_ValidationStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getValidationStore");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: cannot find method 'getValidationStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: method 'getValidationStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Template.MultiTypeValue.textValue

Text type value
  @param  Vald_AtomValidation self
  @returns   the result
**/
ApiString Vald_AtomValidation_GetTextValue(Vald_AtomValidation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTextValue");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: cannot find method 'getTextValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: method 'getTextValue' is not callable");
  
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
  @param  Vald_AtomValidation self
  @returns   the result
**/
Impl_TopObject Vald_AtomValidation_GetTopObject(Vald_AtomValidation self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.molecule.StructureValidation.AtomValidation
  @param  Vald_ValidationStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Vald_AtomValidation Vald_AtomValidation_Init(Vald_ValidationStore parent, ApiMap attrlinks)
{
  
  return Vald_ValidationStore_NewAtomValidation(parent, attrlinks);
}

/**
  Constructor for ccp.molecule.StructureValidation.AtomValidation
  @param  Vald_ValidationStore parent
  @param  char * context
  @param  char * keyword
  @returns  the new object
**/
Vald_AtomValidation Vald_AtomValidation_Init_reqd(Vald_ValidationStore parent, char * context, char * keyword)
{
  
  Vald_AtomValidation  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__context = ApiString_New(context);
  ApiString api__keyword = ApiString_New(keyword);

  PyDict_SetItemString(attrlinks, "context", api__context);
  PyDict_SetItemString(attrlinks, "keyword", api__keyword);
  
  obj = Vald_AtomValidation_Init(parent, attrlinks);
  
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
  @param  Vald_AtomValidation self
  @param  Impl_ApplicationData value
**/
void *Vald_AtomValidation_RemoveApplicationData(Vald_AtomValidation self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.molecule.StructureValidation.AtomValidation.atoms

Atoms 
being validated
  @param  Vald_AtomValidation self
  @param  Coor_Atom value
**/
void *Vald_AtomValidation_RemoveAtom(Vald_AtomValidation self, Coor_Atom value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeAtom");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: cannot find method 'removeAtom'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: method 'removeAtom' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.molecule.StructureValidation.AtomValidation
  @param  Vald_AtomValidation self
  @param  ApiString name
  @param  ApiObject value
**/
void *Vald_AtomValidation_Set(Vald_AtomValidation self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Vald_AtomValidation self
  @param  Acco_AccessObject value
**/
void *Vald_AtomValidation_SetAccess(Vald_AtomValidation self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: method 'setAccess' is not callable");
  
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
  @param  Vald_AtomValidation self
  @param  ApiList values
**/
void *Vald_AtomValidation_SetApplicationData(Vald_AtomValidation self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.StructureValidation.AtomValidation.atoms

Atoms 
being validated
  @param  Vald_AtomValidation self
  @param  ApiSet values
**/
void *Vald_AtomValidation_SetAtoms(Vald_AtomValidation self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAtoms");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: cannot find method 'setAtoms'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: method 'setAtoms' is not callable");
  
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
  @param  Vald_AtomValidation self
  @param  ApiBoolean value
**/
void *Vald_AtomValidation_SetBooleanValue(Vald_AtomValidation self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setBooleanValue");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: cannot find method 'setBooleanValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: method 'setBooleanValue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.StructureValidation.ValidationResult.context

The 
context where tthe keyword and value is defined. Typically the name of a 
program that both defines the parameter and calculates its value.E.g. 
'PROCHECK', 'SHIFTX', ...Used to derive the keywordDefinition
  @param  Vald_AtomValidation self
  @param  ApiString value
**/
void *Vald_AtomValidation_SetContext(Vald_AtomValidation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setContext");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: cannot find method 'setContext'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: method 'setContext' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.StructureValidation.ValidationResult.details

Free 
text, for notes, explanatory comments, etc.
  @param  Vald_AtomValidation self
  @param  ApiString value
**/
void *Vald_AtomValidation_SetDetails(Vald_AtomValidation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.molecule.StructureValidation.ValidationResult.figOfMerit

Figure of 
merit for validated result - 1.0 is perfect, 0.0 is totally wrong.
  @param  Vald_AtomValidation self
  @param  ApiFloat value
**/
void *Vald_AtomValidation_SetFigOfMerit(Vald_AtomValidation self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setFigOfMerit");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: cannot find method 'setFigOfMerit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: method 'setFigOfMerit' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Template.MultiTypeValue.floatValue

Float type value
  @param  Vald_AtomValidation self
  @param  ApiFloat value
**/
void *Vald_AtomValidation_SetFloatValue(Vald_AtomValidation self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setFloatValue");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: cannot find method 'setFloatValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: method 'setFloatValue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Template.MultiTypeValue.intValue

Integer type value
  @param  Vald_AtomValidation self
  @param  ApiInteger value
**/
void *Vald_AtomValidation_SetIntValue(Vald_AtomValidation self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIntValue");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: cannot find method 'setIntValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: method 'setIntValue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.molecule.StructureValidation.ValidationResult.keyword

keyword that 
defines the validation result
  @param  Vald_AtomValidation self
  @param  ApiString value
**/
void *Vald_AtomValidation_SetKeyword(Vald_AtomValidation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setKeyword");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: cannot find method 'setKeyword'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: method 'setKeyword' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.StructureValidation.ValidationResult.serial

Serial 
number of object. Serves as object main key. Serial numbers of deleted 
objects are not re-used. Serial numbers can only be set by the 
implementation. Values are in practice always positive, since negative 
values are interpreted as a signal to set the next free serial
  @param  Vald_AtomValidation self
  @param  ApiInteger value
**/
void *Vald_AtomValidation_SetSerial(Vald_AtomValidation self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Template.MultiTypeValue.textValue

Text type value
  @param  Vald_AtomValidation self
  @param  ApiString value
**/
void *Vald_AtomValidation_SetTextValue(Vald_AtomValidation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setTextValue");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: cannot find method 'setTextValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: method 'setTextValue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.StructureValidation.AtomValidation.atoms

Atoms 
being validated
  @param  Vald_AtomValidation self
  @returns   the result
**/
ApiList Vald_AtomValidation_SortedAtoms(Vald_AtomValidation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedAtoms");
  
  if (!method)
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: cannot find method 'sortedAtoms'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.StructureValidation.AtomValidation: method 'sortedAtoms' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
