
#include "ccp.h"

/*
  Residue in Molsystem Coordinate description
*/

/* package ccp.api.molecule.MolStructure */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_Residue self
  @param  Impl_ApplicationData value
**/
void *Coor_Residue_AddApplicationData(Coor_Residue self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Residue: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Residue: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.molecule.MolStructure.Residue.residueValidations

Validation 
results that include Residue
  @param  Coor_Residue self
  @param  Vald_ResidueValidation value
**/
void *Coor_Residue_AddResidueValidation(Coor_Residue self, Vald_ResidueValidation value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addResidueValidation");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Residue: cannot find method 'addResidueValidation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Residue: method 'addResidueValidation' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.molecule.MolStructure.Residue
  @param  Coor_Residue self
  @param  ApiBoolean complete
**/
void *Coor_Residue_CheckAllValid(Coor_Residue self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Residue: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Residue: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.molecule.MolStructure.Residue
  @param  Coor_Residue self
  @param  ApiBoolean complete
**/
void *Coor_Residue_CheckValid(Coor_Residue self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Residue: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Residue: method 'checkValid' is not callable");
  
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
  @param  Coor_Residue self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Coor_Residue_FindAllApplicationData(Coor_Residue self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Residue: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Residue: method 'findAllApplicationData' is not callable");
  
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
  @param  Coor_Residue self
  @returns  all value that satisfy the conditions 
**/
ApiList Coor_Residue_FindAllApplicationData_keyval0(Coor_Residue self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Coor_Residue_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_Residue self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Coor_Residue_FindAllApplicationData_keyval1(Coor_Residue self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Coor_Residue_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Coor_Residue_FindAllApplicationData_keyval2(Coor_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Coor_Residue_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Coor_Residue_FindAllApplicationData_keyval3(Coor_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Coor_Residue_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_Residue self
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
ApiList Coor_Residue_FindAllApplicationData_keyval4(Coor_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Coor_Residue_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolStructure.Residue.atoms

child link to class 
Atom
  @param  Coor_Residue self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_Residue_FindAllAtoms(Coor_Residue self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllAtoms");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Residue: cannot find method 'findAllAtoms'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Residue: method 'findAllAtoms' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolStructure.Residue.atoms

child link to class 
Atom
  @param  Coor_Residue self
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_Residue_FindAllAtoms_keyval0(Coor_Residue self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Coor_Residue_FindAllAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolStructure.Residue.atoms

child link to class 
Atom
  @param  Coor_Residue self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_Residue_FindAllAtoms_keyval1(Coor_Residue self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Coor_Residue_FindAllAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolStructure.Residue.atoms

child link to class 
Atom
  @param  Coor_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_Residue_FindAllAtoms_keyval2(Coor_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Coor_Residue_FindAllAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolStructure.Residue.atoms

child link to class 
Atom
  @param  Coor_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_Residue_FindAllAtoms_keyval3(Coor_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Coor_Residue_FindAllAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.MolStructure.Residue.atoms

child link to class 
Atom
  @param  Coor_Residue self
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
ApiSet Coor_Residue_FindAllAtoms_keyval4(Coor_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Coor_Residue_FindAllAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolStructure.Residue.residueValidations

Validation results 
that include Residue
  @param  Coor_Residue self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_Residue_FindAllResidueValidations(Coor_Residue self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllResidueValidations");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Residue: cannot find method 'findAllResidueValidations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Residue: method 'findAllResidueValidations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolStructure.Residue.residueValidations

Validation results 
that include Residue
  @param  Coor_Residue self
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_Residue_FindAllResidueValidations_keyval0(Coor_Residue self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Coor_Residue_FindAllResidueValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolStructure.Residue.residueValidations

Validation results 
that include Residue
  @param  Coor_Residue self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_Residue_FindAllResidueValidations_keyval1(Coor_Residue self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Coor_Residue_FindAllResidueValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolStructure.Residue.residueValidations

Validation results 
that include Residue
  @param  Coor_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_Residue_FindAllResidueValidations_keyval2(Coor_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Coor_Residue_FindAllResidueValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolStructure.Residue.residueValidations

Validation results 
that include Residue
  @param  Coor_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Coor_Residue_FindAllResidueValidations_keyval3(Coor_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Coor_Residue_FindAllResidueValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolStructure.Residue.residueValidations

Validation results 
that include Residue
  @param  Coor_Residue self
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
ApiSet Coor_Residue_FindAllResidueValidations_keyval4(Coor_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Coor_Residue_FindAllResidueValidations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_Residue self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Coor_Residue_FindFirstApplicationData(Coor_Residue self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Residue: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Residue: method 'findFirstApplicationData' is not callable");
  
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
  @param  Coor_Residue self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Coor_Residue_FindFirstApplicationData_keyval0(Coor_Residue self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Coor_Residue_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_Residue self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Coor_Residue_FindFirstApplicationData_keyval1(Coor_Residue self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Coor_Residue_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Coor_Residue_FindFirstApplicationData_keyval2(Coor_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Coor_Residue_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Coor_Residue_FindFirstApplicationData_keyval3(Coor_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Coor_Residue_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_Residue self
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
Impl_ApplicationData Coor_Residue_FindFirstApplicationData_keyval4(Coor_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Coor_Residue_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolStructure.Residue.atoms

child link to 
class Atom
  @param  Coor_Residue self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Coor_Atom Coor_Residue_FindFirstAtom(Coor_Residue self, ApiMap conditions)
{
  
  Coor_Atom obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstAtom");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Residue: cannot find method 'findFirstAtom'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Residue: method 'findFirstAtom' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolStructure.Residue.atoms

child link to 
class Atom
  @param  Coor_Residue self
  @returns  the first value that satisfies the conditions 
**/
Coor_Atom Coor_Residue_FindFirstAtom_keyval0(Coor_Residue self)
{
  
  Coor_Atom  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Coor_Residue_FindFirstAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolStructure.Residue.atoms

child link to 
class Atom
  @param  Coor_Residue self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Coor_Atom Coor_Residue_FindFirstAtom_keyval1(Coor_Residue self, char * key, ApiObject value)
{
  
  Coor_Atom  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Coor_Residue_FindFirstAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolStructure.Residue.atoms

child link to 
class Atom
  @param  Coor_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Coor_Atom Coor_Residue_FindFirstAtom_keyval2(Coor_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Coor_Atom  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Coor_Residue_FindFirstAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolStructure.Residue.atoms

child link to 
class Atom
  @param  Coor_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Coor_Atom Coor_Residue_FindFirstAtom_keyval3(Coor_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Coor_Atom  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Coor_Residue_FindFirstAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.MolStructure.Residue.atoms

child link to 
class Atom
  @param  Coor_Residue self
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
Coor_Atom Coor_Residue_FindFirstAtom_keyval4(Coor_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Coor_Atom  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Coor_Residue_FindFirstAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolStructure.Residue.residueValidations

Validation results 
that include Residue
  @param  Coor_Residue self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Vald_ResidueValidation Coor_Residue_FindFirstResidueValidation(Coor_Residue self, ApiMap conditions)
{
  
  Vald_ResidueValidation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstResidueValidation");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Residue: cannot find method 'findFirstResidueValidation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Residue: method 'findFirstResidueValidation' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolStructure.Residue.residueValidations

Validation results 
that include Residue
  @param  Coor_Residue self
  @returns  the first value that satisfies the conditions 
**/
Vald_ResidueValidation Coor_Residue_FindFirstResidueValidation_keyval0(Coor_Residue self)
{
  
  Vald_ResidueValidation  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Coor_Residue_FindFirstResidueValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolStructure.Residue.residueValidations

Validation results 
that include Residue
  @param  Coor_Residue self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Vald_ResidueValidation Coor_Residue_FindFirstResidueValidation_keyval1(Coor_Residue self, char * key, ApiObject value)
{
  
  Vald_ResidueValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Coor_Residue_FindFirstResidueValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolStructure.Residue.residueValidations

Validation results 
that include Residue
  @param  Coor_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Vald_ResidueValidation Coor_Residue_FindFirstResidueValidation_keyval2(Coor_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Vald_ResidueValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Coor_Residue_FindFirstResidueValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolStructure.Residue.residueValidations

Validation results 
that include Residue
  @param  Coor_Residue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Vald_ResidueValidation Coor_Residue_FindFirstResidueValidation_keyval3(Coor_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Vald_ResidueValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Coor_Residue_FindFirstResidueValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolStructure.Residue.residueValidations

Validation results 
that include Residue
  @param  Coor_Residue self
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
Vald_ResidueValidation Coor_Residue_FindFirstResidueValidation_keyval4(Coor_Residue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Vald_ResidueValidation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Coor_Residue_FindFirstResidueValidation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.molecule.MolStructure.Residue
  @param  Coor_Residue self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Coor_Residue_Get(Coor_Residue self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Coor_Residue self
  @returns   the result
**/
Acco_AccessObject Coor_Residue_GetAccess(Coor_Residue self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Residue: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Residue: method 'getAccess' is not callable");
  
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
  @param  Coor_Residue self
  @returns   the result
**/
ApiList Coor_Residue_GetApplicationData(Coor_Residue self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Residue: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Residue: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolStructure.Residue.atoms

child link to class 
Atom
  @param  Coor_Residue self
  @returns   the result
**/
ApiSet Coor_Residue_GetAtoms(Coor_Residue self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAtoms");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Residue: cannot find method 'getAtoms'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Residue: method 'getAtoms' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.molecule.MolStructure.Residue
  @param  Coor_Residue self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Coor_Residue Coor_Residue_GetByKey(Coor_Residue self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Coor_Residue obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Residue: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Residue: method 'getByKey' is not callable");
  
  args = PyTuple_Pack(2, startObj, fullKey);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolStructure.Residue.chain

parent link
  @param  Coor_Residue self
  @returns   the result
**/
Coor_Chain Coor_Residue_GetChain(Coor_Residue self)
{
  
  Coor_Chain obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChain");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Residue: cannot find method 'getChain'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Residue: method 'getChain' is not callable");
  
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
  @param  Coor_Residue self
  @returns   the result
**/
ApiString Coor_Residue_GetClassName(Coor_Residue self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Residue: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Residue: method 'getClassName' is not callable");
  
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
  @param  Coor_Residue self
  @returns   the result
**/
ApiList Coor_Residue_GetFieldNames(Coor_Residue self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Residue: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Residue: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.molecule.MolStructure.Residue
  @param  Coor_Residue self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Coor_Residue_GetFullKey(Coor_Residue self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Residue: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Residue: method 'getFullKey' is not callable");
  
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
  @param  Coor_Residue self
  @returns   the result
**/
ApiBoolean Coor_Residue_GetInConstructor(Coor_Residue self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Residue: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Residue: method 'getInConstructor' is not callable");
  
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
  @param  Coor_Residue self
  @returns   the result
**/
ApiBoolean Coor_Residue_GetIsDeleted(Coor_Residue self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Residue: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Residue: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.molecule.MolStructure.Residue
  @param  Coor_Residue self
  @returns  Local object key
**/
ApiObject Coor_Residue_GetLocalKey(Coor_Residue self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Residue: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Residue: method 'getLocalKey' is not callable");
  
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
  @param  Coor_Residue self
  @returns   the result
**/
ApiString Coor_Residue_GetPackageName(Coor_Residue self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Residue: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Residue: method 'getPackageName' is not callable");
  
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
  @param  Coor_Residue self
  @returns   the result
**/
ApiString Coor_Residue_GetPackageShortName(Coor_Residue self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Residue: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Residue: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolStructure.Residue.parent

link to parent object 
- synonym for chain
  @param  Coor_Residue self
  @returns   the result
**/
Coor_Chain Coor_Residue_GetParent(Coor_Residue self)
{
  
  Coor_Chain obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Residue: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Residue: method 'getParent' is not callable");
  
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
  @param  Coor_Residue self
  @returns   the result
**/
ApiString Coor_Residue_GetQualifiedName(Coor_Residue self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Residue: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Residue: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived link 'residue'
  @param  Coor_Residue self
  @returns   the result
**/
Mols_Residue Coor_Residue_GetResidue(Coor_Residue self)
{
  
  Mols_Residue obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getResidue");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Residue: cannot find method 'getResidue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Residue: method 'getResidue' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolStructure.Residue.residueValidations

Validation 
results that include Residue
  @param  Coor_Residue self
  @returns   the result
**/
ApiSet Coor_Residue_GetResidueValidations(Coor_Residue self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getResidueValidations");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Residue: cannot find method 'getResidueValidations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Residue: method 'getResidueValidations' is not callable");
  
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
  @param  Coor_Residue self
  @returns   the result
**/
Impl_MemopsRoot Coor_Residue_GetRoot(Coor_Residue self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Residue: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Residue: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolStructure.Residue.seqCode

Molecular sequence 
number as used in Coordinate description.
  @param  Coor_Residue self
  @returns   the result
**/
ApiInteger Coor_Residue_GetSeqCode(Coor_Residue self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSeqCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Residue: cannot find method 'getSeqCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Residue: method 'getSeqCode' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolStructure.Residue.seqId

Identifier 
corresponding to the molResidue identifier 
(self.residue.molResidue.serial)
  @param  Coor_Residue self
  @returns   the result
**/
ApiInteger Coor_Residue_GetSeqId(Coor_Residue self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSeqId");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Residue: cannot find method 'getSeqId'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Residue: method 'getSeqId' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolStructure.Residue.seqInsertCode

Molecular 
sequence insert code as used in Coordinate description.
  @param  Coor_Residue self
  @returns   the result
**/
ApiString Coor_Residue_GetSeqInsertCode(Coor_Residue self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSeqInsertCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Residue: cannot find method 'getSeqInsertCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Residue: method 'getSeqInsertCode' is not callable");
  
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
  @param  Coor_Residue self
  @returns   the result
**/
Impl_TopObject Coor_Residue_GetTopObject(Coor_Residue self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Residue: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Residue: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.molecule.MolStructure.Residue
  @param  Coor_Chain parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Coor_Residue Coor_Residue_Init(Coor_Chain parent, ApiMap attrlinks)
{
  
  return Coor_Chain_NewResidue(parent, attrlinks);
}

/**
  Constructor for ccp.molecule.MolStructure.Residue
  @param  Coor_Chain parent
  @param  ApiInteger seqCode
  @param  ApiInteger seqId
  @returns  the new object
**/
Coor_Residue Coor_Residue_Init_reqd(Coor_Chain parent, ApiInteger seqCode, ApiInteger seqId)
{
  
  Coor_Residue  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "seqCode", seqCode);
  PyDict_SetItemString(attrlinks, "seqId", seqId);
  
  obj = Coor_Residue_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.MolStructure.Atom
  @param  Coor_Residue self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Coor_Atom Coor_Residue_NewAtom(Coor_Residue self, ApiMap attrlinks)
{
  
  Coor_Atom obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newAtom");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Residue: cannot find method 'newAtom'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Residue: method 'newAtom' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.MolStructure.Atom
  @param  Coor_Residue self
  @param  char * name
  @returns  the new object
**/
Coor_Atom Coor_Residue_NewAtom_reqd(Coor_Residue self, char * name)
{
  
  Coor_Atom  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Coor_Residue_NewAtom(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_Residue self
  @param  Impl_ApplicationData value
**/
void *Coor_Residue_RemoveApplicationData(Coor_Residue self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Residue: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Residue: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
ccp.molecule.MolStructure.Residue.residueValidations

Validation results 
that include Residue
  @param  Coor_Residue self
  @param  Vald_ResidueValidation value
**/
void *Coor_Residue_RemoveResidueValidation(Coor_Residue self, Vald_ResidueValidation value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeResidueValidation");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Residue: cannot find method 'removeResidueValidation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Residue: method 'removeResidueValidation' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.molecule.MolStructure.Residue
  @param  Coor_Residue self
  @param  ApiString name
  @param  ApiObject value
**/
void *Coor_Residue_Set(Coor_Residue self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Coor_Residue self
  @param  Acco_AccessObject value
**/
void *Coor_Residue_SetAccess(Coor_Residue self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Residue: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Residue: method 'setAccess' is not callable");
  
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
  @param  Coor_Residue self
  @param  ApiList values
**/
void *Coor_Residue_SetApplicationData(Coor_Residue self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Residue: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Residue: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.MolStructure.Residue.residueValidations

Validation 
results that include Residue
  @param  Coor_Residue self
  @param  ApiSet values
**/
void *Coor_Residue_SetResidueValidations(Coor_Residue self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setResidueValidations");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Residue: cannot find method 'setResidueValidations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Residue: method 'setResidueValidations' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.MolStructure.Residue.seqCode

Molecular sequence 
number as used in Coordinate description.
  @param  Coor_Residue self
  @param  ApiInteger value
**/
void *Coor_Residue_SetSeqCode(Coor_Residue self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSeqCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Residue: cannot find method 'setSeqCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Residue: method 'setSeqCode' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.MolStructure.Residue.seqId

Identifier 
corresponding to the molResidue identifier 
(self.residue.molResidue.serial)
  @param  Coor_Residue self
  @param  ApiInteger value
**/
void *Coor_Residue_SetSeqId(Coor_Residue self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSeqId");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Residue: cannot find method 'setSeqId'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Residue: method 'setSeqId' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.MolStructure.Residue.seqInsertCode

Molecular 
sequence insert code as used in Coordinate description.
  @param  Coor_Residue self
  @param  ApiString value
**/
void *Coor_Residue_SetSeqInsertCode(Coor_Residue self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSeqInsertCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Residue: cannot find method 'setSeqInsertCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Residue: method 'setSeqInsertCode' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.MolStructure.Residue.atoms

child link to class 
Atom
  @param  Coor_Residue self
  @returns   the result
**/
ApiList Coor_Residue_SortedAtoms(Coor_Residue self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedAtoms");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Residue: cannot find method 'sortedAtoms'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Residue: method 'sortedAtoms' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.molecule.MolStructure.Residue.residueValidations

Validation results 
that include Residue
  @param  Coor_Residue self
  @returns   the result
**/
ApiList Coor_Residue_SortedResidueValidations(Coor_Residue self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedResidueValidations");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Residue: cannot find method 'sortedResidueValidations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Residue: method 'sortedResidueValidations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
