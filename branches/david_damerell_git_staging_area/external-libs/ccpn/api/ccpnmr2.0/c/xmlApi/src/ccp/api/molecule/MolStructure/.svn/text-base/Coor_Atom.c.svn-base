
#include "ccp.h"

/*
  Atom in Coordinate description - local equivalent of MolSystem.Atom for a given set of coordinates.
*/

/* package ccp.api.molecule.MolStructure */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_Atom self
  @param  Impl_ApplicationData value
**/
void *Coor_Atom_AddApplicationData(Coor_Atom self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Atom: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Atom: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.molecule.MolStructure.Atom.atomValidations

Validation 
results that include Atom
  @param  Coor_Atom self
  @param  Vald_AtomValidation value
**/
void *Coor_Atom_AddAtomValidation(Coor_Atom self, Vald_AtomValidation value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addAtomValidation");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Atom: cannot find method 'addAtomValidation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Atom: method 'addAtomValidation' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.molecule.MolStructure.Atom
  @param  Coor_Atom self
  @param  ApiBoolean complete
**/
void *Coor_Atom_CheckAllValid(Coor_Atom self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Atom: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Atom: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.molecule.MolStructure.Atom
  @param  Coor_Atom self
  @param  ApiBoolean complete
**/
void *Coor_Atom_CheckValid(Coor_Atom self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Atom: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Atom: method 'checkValid' is not callable");
  
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
  @param  Coor_Atom self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Coor_Atom_FindAllApplicationData(Coor_Atom self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Atom: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Atom: method 'findAllApplicationData' is not callable");
  
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
  @param  Coor_Atom self
  @returns  all value that satisfy the conditions 
**/
ApiList Coor_Atom_FindAllApplicationData_keyval0(Coor_Atom self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Coor_Atom_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_Atom self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Coor_Atom_FindAllApplicationData_keyval1(Coor_Atom self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Coor_Atom_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_Atom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Coor_Atom_FindAllApplicationData_keyval2(Coor_Atom self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Coor_Atom_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_Atom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Coor_Atom_FindAllApplicationData_keyval3(Coor_Atom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Coor_Atom_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_Atom self
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
ApiList Coor_Atom_FindAllApplicationData_keyval4(Coor_Atom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Coor_Atom_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolStructure.Atom.atomValidations

Validation 
results that include Atom
  @param  Coor_Atom self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_Atom_FindAllAtomValidations(Coor_Atom self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllAtomValidations");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Atom: cannot find method 'findAllAtomValidations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Atom: method 'findAllAtomValidations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolStructure.Atom.atomValidations

Validation 
results that include Atom
  @param  Coor_Atom self
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_Atom_FindAllAtomValidations_keyval0(Coor_Atom self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Coor_Atom_FindAllAtomValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolStructure.Atom.atomValidations

Validation 
results that include Atom
  @param  Coor_Atom self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_Atom_FindAllAtomValidations_keyval1(Coor_Atom self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Coor_Atom_FindAllAtomValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolStructure.Atom.atomValidations

Validation 
results that include Atom
  @param  Coor_Atom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_Atom_FindAllAtomValidations_keyval2(Coor_Atom self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Coor_Atom_FindAllAtomValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolStructure.Atom.atomValidations

Validation 
results that include Atom
  @param  Coor_Atom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_Atom_FindAllAtomValidations_keyval3(Coor_Atom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Coor_Atom_FindAllAtomValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolStructure.Atom.atomValidations

Validation 
results that include Atom
  @param  Coor_Atom self
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
ApiSet Coor_Atom_FindAllAtomValidations_keyval4(Coor_Atom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Coor_Atom_FindAllAtomValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolStructure.Atom.coords

child link to class 
Coord
  @param  Coor_Atom self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_Atom_FindAllCoords(Coor_Atom self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllCoords");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Atom: cannot find method 'findAllCoords'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Atom: method 'findAllCoords' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolStructure.Atom.coords

child link to class 
Coord
  @param  Coor_Atom self
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_Atom_FindAllCoords_keyval0(Coor_Atom self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Coor_Atom_FindAllCoords(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolStructure.Atom.coords

child link to class 
Coord
  @param  Coor_Atom self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_Atom_FindAllCoords_keyval1(Coor_Atom self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Coor_Atom_FindAllCoords(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolStructure.Atom.coords

child link to class 
Coord
  @param  Coor_Atom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_Atom_FindAllCoords_keyval2(Coor_Atom self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Coor_Atom_FindAllCoords(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolStructure.Atom.coords

child link to class 
Coord
  @param  Coor_Atom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_Atom_FindAllCoords_keyval3(Coor_Atom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Coor_Atom_FindAllCoords(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolStructure.Atom.coords

child link to class 
Coord
  @param  Coor_Atom self
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
ApiSet Coor_Atom_FindAllCoords_keyval4(Coor_Atom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Coor_Atom_FindAllCoords(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_Atom self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Coor_Atom_FindFirstApplicationData(Coor_Atom self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Atom: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Atom: method 'findFirstApplicationData' is not callable");
  
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
  @param  Coor_Atom self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Coor_Atom_FindFirstApplicationData_keyval0(Coor_Atom self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Coor_Atom_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_Atom self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Coor_Atom_FindFirstApplicationData_keyval1(Coor_Atom self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Coor_Atom_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_Atom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Coor_Atom_FindFirstApplicationData_keyval2(Coor_Atom self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Coor_Atom_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_Atom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Coor_Atom_FindFirstApplicationData_keyval3(Coor_Atom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Coor_Atom_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_Atom self
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
Impl_ApplicationData Coor_Atom_FindFirstApplicationData_keyval4(Coor_Atom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Coor_Atom_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolStructure.Atom.atomValidations

Validation 
results that include Atom
  @param  Coor_Atom self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Vald_AtomValidation Coor_Atom_FindFirstAtomValidation(Coor_Atom self, ApiMap conditions)
{
  
  Vald_AtomValidation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstAtomValidation");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Atom: cannot find method 'findFirstAtomValidation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Atom: method 'findFirstAtomValidation' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolStructure.Atom.atomValidations

Validation 
results that include Atom
  @param  Coor_Atom self
  @returns  the first value that satisfies the conditions 
**/
Vald_AtomValidation Coor_Atom_FindFirstAtomValidation_keyval0(Coor_Atom self)
{
  
  Vald_AtomValidation  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Coor_Atom_FindFirstAtomValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolStructure.Atom.atomValidations

Validation 
results that include Atom
  @param  Coor_Atom self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Vald_AtomValidation Coor_Atom_FindFirstAtomValidation_keyval1(Coor_Atom self, char * key, ApiObject value)
{
  
  Vald_AtomValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Coor_Atom_FindFirstAtomValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolStructure.Atom.atomValidations

Validation 
results that include Atom
  @param  Coor_Atom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Vald_AtomValidation Coor_Atom_FindFirstAtomValidation_keyval2(Coor_Atom self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Vald_AtomValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Coor_Atom_FindFirstAtomValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolStructure.Atom.atomValidations

Validation 
results that include Atom
  @param  Coor_Atom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Vald_AtomValidation Coor_Atom_FindFirstAtomValidation_keyval3(Coor_Atom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Vald_AtomValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Coor_Atom_FindFirstAtomValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolStructure.Atom.atomValidations

Validation 
results that include Atom
  @param  Coor_Atom self
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
Vald_AtomValidation Coor_Atom_FindFirstAtomValidation_keyval4(Coor_Atom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Vald_AtomValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Coor_Atom_FindFirstAtomValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolStructure.Atom.coords

child link to class 
Coord
  @param  Coor_Atom self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Coor_Coord Coor_Atom_FindFirstCoord(Coor_Atom self, ApiMap conditions)
{
  
  Coor_Coord obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstCoord");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Atom: cannot find method 'findFirstCoord'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Atom: method 'findFirstCoord' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolStructure.Atom.coords

child link to class 
Coord
  @param  Coor_Atom self
  @returns  the first value that satisfies the conditions 
**/
Coor_Coord Coor_Atom_FindFirstCoord_keyval0(Coor_Atom self)
{
  
  Coor_Coord  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Coor_Atom_FindFirstCoord(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolStructure.Atom.coords

child link to class 
Coord
  @param  Coor_Atom self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Coor_Coord Coor_Atom_FindFirstCoord_keyval1(Coor_Atom self, char * key, ApiObject value)
{
  
  Coor_Coord  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Coor_Atom_FindFirstCoord(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolStructure.Atom.coords

child link to class 
Coord
  @param  Coor_Atom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Coor_Coord Coor_Atom_FindFirstCoord_keyval2(Coor_Atom self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Coor_Coord  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Coor_Atom_FindFirstCoord(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolStructure.Atom.coords

child link to class 
Coord
  @param  Coor_Atom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Coor_Coord Coor_Atom_FindFirstCoord_keyval3(Coor_Atom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Coor_Coord  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Coor_Atom_FindFirstCoord(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolStructure.Atom.coords

child link to class 
Coord
  @param  Coor_Atom self
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
Coor_Coord Coor_Atom_FindFirstCoord_keyval4(Coor_Atom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Coor_Coord  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Coor_Atom_FindFirstCoord(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.molecule.MolStructure.Atom
  @param  Coor_Atom self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Coor_Atom_Get(Coor_Atom self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Coor_Atom self
  @returns   the result
**/
Acco_AccessObject Coor_Atom_GetAccess(Coor_Atom self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Atom: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Atom: method 'getAccess' is not callable");
  
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
  @param  Coor_Atom self
  @returns   the result
**/
ApiList Coor_Atom_GetApplicationData(Coor_Atom self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Atom: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Atom: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived link 'atom'
  @param  Coor_Atom self
  @returns   the result
**/
Mols_Atom Coor_Atom_GetAtom(Coor_Atom self)
{
  
  Mols_Atom obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAtom");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Atom: cannot find method 'getAtom'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Atom: method 'getAtom' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolStructure.Atom.atomValidations

Validation 
results that include Atom
  @param  Coor_Atom self
  @returns   the result
**/
ApiSet Coor_Atom_GetAtomValidations(Coor_Atom self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAtomValidations");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Atom: cannot find method 'getAtomValidations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Atom: method 'getAtomValidations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.molecule.MolStructure.Atom
  @param  Coor_Atom self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Coor_Atom Coor_Atom_GetByKey(Coor_Atom self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Coor_Atom obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Atom: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Atom: method 'getByKey' is not callable");
  
  args = PyTuple_Pack(2, startObj, fullKey);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived link ChemAtom
  @param  Coor_Atom self
  @returns   the result
**/
Chem_ChemAtom Coor_Atom_GetChemAtom(Coor_Atom self)
{
  
  Chem_ChemAtom obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemAtom");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Atom: cannot find method 'getChemAtom'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Atom: method 'getChemAtom' is not callable");
  
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
  @param  Coor_Atom self
  @returns   the result
**/
ApiString Coor_Atom_GetClassName(Coor_Atom self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Atom: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Atom: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolStructure.Atom.coords

child link to class Coord
  @param  Coor_Atom self
  @returns   the result
**/
ApiSet Coor_Atom_GetCoords(Coor_Atom self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCoords");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Atom: cannot find method 'getCoords'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Atom: method 'getCoords' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived attribute elementSymbol
  @param  Coor_Atom self
  @returns   the result
**/
ApiString Coor_Atom_GetElementSymbol(Coor_Atom self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getElementSymbol");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Atom: cannot find method 'getElementSymbol'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Atom: method 'getElementSymbol' is not callable");
  
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
  @param  Coor_Atom self
  @returns   the result
**/
ApiList Coor_Atom_GetFieldNames(Coor_Atom self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Atom: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Atom: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.molecule.MolStructure.Atom
  @param  Coor_Atom self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Coor_Atom_GetFullKey(Coor_Atom self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Atom: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Atom: method 'getFullKey' is not callable");
  
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
  @param  Coor_Atom self
  @returns   the result
**/
ApiBoolean Coor_Atom_GetInConstructor(Coor_Atom self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Atom: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Atom: method 'getInConstructor' is not callable");
  
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
  @param  Coor_Atom self
  @returns   the result
**/
ApiBoolean Coor_Atom_GetIsDeleted(Coor_Atom self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Atom: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Atom: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.molecule.MolStructure.Atom
  @param  Coor_Atom self
  @returns  Local object key
**/
ApiObject Coor_Atom_GetLocalKey(Coor_Atom self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Atom: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Atom: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolStructure.Atom.name

Atom Name - identical to 
Molsystem.Atom.name of corersponding Molsysterm Atom. Part of object 
key, and foreign key used for deriving the link to MolSystem.Atom
  @param  Coor_Atom self
  @returns   the result
**/
ApiString Coor_Atom_GetName(Coor_Atom self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Atom: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Atom: method 'getName' is not callable");
  
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
  @param  Coor_Atom self
  @returns   the result
**/
ApiString Coor_Atom_GetPackageName(Coor_Atom self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Atom: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Atom: method 'getPackageName' is not callable");
  
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
  @param  Coor_Atom self
  @returns   the result
**/
ApiString Coor_Atom_GetPackageShortName(Coor_Atom self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Atom: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Atom: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolStructure.Atom.parent

link to parent object - 
synonym for residue
  @param  Coor_Atom self
  @returns   the result
**/
Coor_Residue Coor_Atom_GetParent(Coor_Atom self)
{
  
  Coor_Residue obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Atom: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Atom: method 'getParent' is not callable");
  
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
  @param  Coor_Atom self
  @returns   the result
**/
ApiString Coor_Atom_GetQualifiedName(Coor_Atom self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Atom: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Atom: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolStructure.Atom.residue

parent link
  @param  Coor_Atom self
  @returns   the result
**/
Coor_Residue Coor_Atom_GetResidue(Coor_Atom self)
{
  
  Coor_Residue obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getResidue");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Atom: cannot find method 'getResidue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Atom: method 'getResidue' is not callable");
  
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
  @param  Coor_Atom self
  @returns   the result
**/
Impl_MemopsRoot Coor_Atom_GetRoot(Coor_Atom self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Atom: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Atom: method 'getRoot' is not callable");
  
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
  @param  Coor_Atom self
  @returns   the result
**/
Impl_TopObject Coor_Atom_GetTopObject(Coor_Atom self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Atom: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Atom: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.molecule.MolStructure.Atom
  @param  Coor_Residue parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Coor_Atom Coor_Atom_Init(Coor_Residue parent, ApiMap attrlinks)
{
  
  return Coor_Residue_NewAtom(parent, attrlinks);
}

/**
  Constructor for ccp.molecule.MolStructure.Atom
  @param  Coor_Residue parent
  @param  char * name
  @returns  the new object
**/
Coor_Atom Coor_Atom_Init_reqd(Coor_Residue parent, char * name)
{
  
  Coor_Atom  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Coor_Atom_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.MolStructure.Coord
  @param  Coor_Atom self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Coor_Coord Coor_Atom_NewCoord(Coor_Atom self, ApiMap attrlinks)
{
  
  Coor_Coord obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newCoord");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Atom: cannot find method 'newCoord'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Atom: method 'newCoord' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.MolStructure.Coord
  @param  Coor_Atom self
  @param  Coor_Model model
  @returns  the new object
**/
Coor_Coord Coor_Atom_NewCoord_reqd(Coor_Atom self, Coor_Model model)
{
  
  Coor_Coord  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "model", model);
  
  obj = Coor_Atom_NewCoord(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_Atom self
  @param  Impl_ApplicationData value
**/
void *Coor_Atom_RemoveApplicationData(Coor_Atom self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Atom: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Atom: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.molecule.MolStructure.Atom.atomValidations

Validation 
results that include Atom
  @param  Coor_Atom self
  @param  Vald_AtomValidation value
**/
void *Coor_Atom_RemoveAtomValidation(Coor_Atom self, Vald_AtomValidation value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeAtomValidation");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Atom: cannot find method 'removeAtomValidation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Atom: method 'removeAtomValidation' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.molecule.MolStructure.Atom
  @param  Coor_Atom self
  @param  ApiString name
  @param  ApiObject value
**/
void *Coor_Atom_Set(Coor_Atom self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Coor_Atom self
  @param  Acco_AccessObject value
**/
void *Coor_Atom_SetAccess(Coor_Atom self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Atom: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Atom: method 'setAccess' is not callable");
  
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
  @param  Coor_Atom self
  @param  ApiList values
**/
void *Coor_Atom_SetApplicationData(Coor_Atom self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Atom: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Atom: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.MolStructure.Atom.atomValidations

Validation 
results that include Atom
  @param  Coor_Atom self
  @param  ApiSet values
**/
void *Coor_Atom_SetAtomValidations(Coor_Atom self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAtomValidations");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Atom: cannot find method 'setAtomValidations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Atom: method 'setAtomValidations' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.MolStructure.Atom.name

Atom Name - identical to 
Molsystem.Atom.name of corersponding Molsysterm Atom. Part of object 
key, and foreign key used for deriving the link to MolSystem.Atom
  @param  Coor_Atom self
  @param  ApiString value
**/
void *Coor_Atom_SetName(Coor_Atom self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Atom: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Atom: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.MolStructure.Atom.atomValidations

Validation 
results that include Atom
  @param  Coor_Atom self
  @returns   the result
**/
ApiList Coor_Atom_SortedAtomValidations(Coor_Atom self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedAtomValidations");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Atom: cannot find method 'sortedAtomValidations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Atom: method 'sortedAtomValidations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.MolStructure.Atom.coords

child link to class 
Coord
  @param  Coor_Atom self
  @returns   the result
**/
ApiList Coor_Atom_SortedCoords(Coor_Atom self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedCoords");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Atom: cannot find method 'sortedCoords'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Atom: method 'sortedCoords' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
