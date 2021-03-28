
#include "ccp.h"

/*
  ChemComp naming system. Serves as container for ChemComp and Atom/AtomSet systematic names. May be defined relative to a reference, in which case only names that differ from those in the reference are given explicitly
*/

/* package ccp.api.molecule.ChemComp */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_NamingSystem self
  @param  Impl_ApplicationData value
**/
void *Chem_NamingSystem_AddApplicationData(Chem_NamingSystem self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for 
ccp.molecule.ChemComp.NamingSystem.atomSetVariantSystems

variant naming 
systems that use the present one for atom name reference
  @param  Chem_NamingSystem self
  @param  Chem_NamingSystem value
**/
void *Chem_NamingSystem_AddAtomSetVariantSystem(Chem_NamingSystem self, Chem_NamingSystem value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addAtomSetVariantSystem");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: cannot find method 'addAtomSetVariantSystem'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: method 'addAtomSetVariantSystem' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.molecule.ChemComp.NamingSystem.atomVariantSystems

variant 
naming systems that use the present one for atom name reference
  @param  Chem_NamingSystem self
  @param  Chem_NamingSystem value
**/
void *Chem_NamingSystem_AddAtomVariantSystem(Chem_NamingSystem self, Chem_NamingSystem value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addAtomVariantSystem");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: cannot find method 'addAtomVariantSystem'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: method 'addAtomVariantSystem' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.molecule.ChemComp.NamingSystem
  @param  Chem_NamingSystem self
  @param  ApiBoolean complete
**/
void *Chem_NamingSystem_CheckAllValid(Chem_NamingSystem self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.molecule.ChemComp.NamingSystem
  @param  Chem_NamingSystem self
  @param  ApiBoolean complete
**/
void *Chem_NamingSystem_CheckValid(Chem_NamingSystem self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: method 'checkValid' is not callable");
  
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
  @param  Chem_NamingSystem self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_NamingSystem_FindAllApplicationData(Chem_NamingSystem self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: method 'findAllApplicationData' is not callable");
  
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
  @param  Chem_NamingSystem self
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_NamingSystem_FindAllApplicationData_keyval0(Chem_NamingSystem self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_NamingSystem_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_NamingSystem self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_NamingSystem_FindAllApplicationData_keyval1(Chem_NamingSystem self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_NamingSystem_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_NamingSystem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_NamingSystem_FindAllApplicationData_keyval2(Chem_NamingSystem self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_NamingSystem_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_NamingSystem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_NamingSystem_FindAllApplicationData_keyval3(Chem_NamingSystem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_NamingSystem_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_NamingSystem self
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
ApiList Chem_NamingSystem_FindAllApplicationData_keyval4(Chem_NamingSystem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_NamingSystem_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.NamingSystem.atomSetVariantSystems

variant naming 
systems that use the present one for atom name reference
  @param  Chem_NamingSystem self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NamingSystem_FindAllAtomSetVariantSystems(Chem_NamingSystem self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllAtomSetVariantSystems");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: cannot find method 'findAllAtomSetVariantSystems'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: method 'findAllAtomSetVariantSystems' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.NamingSystem.atomSetVariantSystems

variant naming 
systems that use the present one for atom name reference
  @param  Chem_NamingSystem self
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NamingSystem_FindAllAtomSetVariantSystems_keyval0(Chem_NamingSystem self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_NamingSystem_FindAllAtomSetVariantSystems(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.NamingSystem.atomSetVariantSystems

variant naming 
systems that use the present one for atom name reference
  @param  Chem_NamingSystem self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NamingSystem_FindAllAtomSetVariantSystems_keyval1(Chem_NamingSystem self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_NamingSystem_FindAllAtomSetVariantSystems(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.NamingSystem.atomSetVariantSystems

variant naming 
systems that use the present one for atom name reference
  @param  Chem_NamingSystem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NamingSystem_FindAllAtomSetVariantSystems_keyval2(Chem_NamingSystem self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_NamingSystem_FindAllAtomSetVariantSystems(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.NamingSystem.atomSetVariantSystems

variant naming 
systems that use the present one for atom name reference
  @param  Chem_NamingSystem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NamingSystem_FindAllAtomSetVariantSystems_keyval3(Chem_NamingSystem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_NamingSystem_FindAllAtomSetVariantSystems(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.NamingSystem.atomSetVariantSystems

variant naming 
systems that use the present one for atom name reference
  @param  Chem_NamingSystem self
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
ApiSet Chem_NamingSystem_FindAllAtomSetVariantSystems_keyval4(Chem_NamingSystem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_NamingSystem_FindAllAtomSetVariantSystems(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.NamingSystem.atomSysNames

child link 
to class AtomSysName
  @param  Chem_NamingSystem self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NamingSystem_FindAllAtomSysNames(Chem_NamingSystem self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllAtomSysNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: cannot find method 'findAllAtomSysNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: method 'findAllAtomSysNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.NamingSystem.atomSysNames

child link 
to class AtomSysName
  @param  Chem_NamingSystem self
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NamingSystem_FindAllAtomSysNames_keyval0(Chem_NamingSystem self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_NamingSystem_FindAllAtomSysNames(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.NamingSystem.atomSysNames

child link 
to class AtomSysName
  @param  Chem_NamingSystem self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NamingSystem_FindAllAtomSysNames_keyval1(Chem_NamingSystem self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_NamingSystem_FindAllAtomSysNames(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.NamingSystem.atomSysNames

child link 
to class AtomSysName
  @param  Chem_NamingSystem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NamingSystem_FindAllAtomSysNames_keyval2(Chem_NamingSystem self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_NamingSystem_FindAllAtomSysNames(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.NamingSystem.atomSysNames

child link 
to class AtomSysName
  @param  Chem_NamingSystem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NamingSystem_FindAllAtomSysNames_keyval3(Chem_NamingSystem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_NamingSystem_FindAllAtomSysNames(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.NamingSystem.atomSysNames

child link 
to class AtomSysName
  @param  Chem_NamingSystem self
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
ApiSet Chem_NamingSystem_FindAllAtomSysNames_keyval4(Chem_NamingSystem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_NamingSystem_FindAllAtomSysNames(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.NamingSystem.atomVariantSystems

variant naming 
systems that use the present one for atom name reference
  @param  Chem_NamingSystem self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NamingSystem_FindAllAtomVariantSystems(Chem_NamingSystem self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllAtomVariantSystems");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: cannot find method 'findAllAtomVariantSystems'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: method 'findAllAtomVariantSystems' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.NamingSystem.atomVariantSystems

variant naming 
systems that use the present one for atom name reference
  @param  Chem_NamingSystem self
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NamingSystem_FindAllAtomVariantSystems_keyval0(Chem_NamingSystem self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_NamingSystem_FindAllAtomVariantSystems(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.NamingSystem.atomVariantSystems

variant naming 
systems that use the present one for atom name reference
  @param  Chem_NamingSystem self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NamingSystem_FindAllAtomVariantSystems_keyval1(Chem_NamingSystem self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_NamingSystem_FindAllAtomVariantSystems(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.NamingSystem.atomVariantSystems

variant naming 
systems that use the present one for atom name reference
  @param  Chem_NamingSystem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NamingSystem_FindAllAtomVariantSystems_keyval2(Chem_NamingSystem self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_NamingSystem_FindAllAtomVariantSystems(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.NamingSystem.atomVariantSystems

variant naming 
systems that use the present one for atom name reference
  @param  Chem_NamingSystem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NamingSystem_FindAllAtomVariantSystems_keyval3(Chem_NamingSystem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_NamingSystem_FindAllAtomVariantSystems(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.NamingSystem.atomVariantSystems

variant naming 
systems that use the present one for atom name reference
  @param  Chem_NamingSystem self
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
ApiSet Chem_NamingSystem_FindAllAtomVariantSystems_keyval4(Chem_NamingSystem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_NamingSystem_FindAllAtomVariantSystems(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.NamingSystem.chemCompSysNames

child 
link to class ChemCompSysName
  @param  Chem_NamingSystem self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NamingSystem_FindAllChemCompSysNames(Chem_NamingSystem self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChemCompSysNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: cannot find method 'findAllChemCompSysNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: method 'findAllChemCompSysNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.NamingSystem.chemCompSysNames

child 
link to class ChemCompSysName
  @param  Chem_NamingSystem self
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NamingSystem_FindAllChemCompSysNames_keyval0(Chem_NamingSystem self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_NamingSystem_FindAllChemCompSysNames(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.NamingSystem.chemCompSysNames

child 
link to class ChemCompSysName
  @param  Chem_NamingSystem self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NamingSystem_FindAllChemCompSysNames_keyval1(Chem_NamingSystem self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_NamingSystem_FindAllChemCompSysNames(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.NamingSystem.chemCompSysNames

child 
link to class ChemCompSysName
  @param  Chem_NamingSystem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NamingSystem_FindAllChemCompSysNames_keyval2(Chem_NamingSystem self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_NamingSystem_FindAllChemCompSysNames(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.NamingSystem.chemCompSysNames

child 
link to class ChemCompSysName
  @param  Chem_NamingSystem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NamingSystem_FindAllChemCompSysNames_keyval3(Chem_NamingSystem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_NamingSystem_FindAllChemCompSysNames(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.NamingSystem.chemCompSysNames

child 
link to class ChemCompSysName
  @param  Chem_NamingSystem self
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
ApiSet Chem_NamingSystem_FindAllChemCompSysNames_keyval4(Chem_NamingSystem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_NamingSystem_FindAllChemCompSysNames(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.NamingSystem.chemTorsionSysNames

child link to 
class ChemTorsionSysName
  @param  Chem_NamingSystem self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NamingSystem_FindAllChemTorsionSysNames(Chem_NamingSystem self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChemTorsionSysNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: cannot find method 'findAllChemTorsionSysNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: method 'findAllChemTorsionSysNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.NamingSystem.chemTorsionSysNames

child link to 
class ChemTorsionSysName
  @param  Chem_NamingSystem self
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NamingSystem_FindAllChemTorsionSysNames_keyval0(Chem_NamingSystem self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_NamingSystem_FindAllChemTorsionSysNames(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.NamingSystem.chemTorsionSysNames

child link to 
class ChemTorsionSysName
  @param  Chem_NamingSystem self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NamingSystem_FindAllChemTorsionSysNames_keyval1(Chem_NamingSystem self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_NamingSystem_FindAllChemTorsionSysNames(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.NamingSystem.chemTorsionSysNames

child link to 
class ChemTorsionSysName
  @param  Chem_NamingSystem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NamingSystem_FindAllChemTorsionSysNames_keyval2(Chem_NamingSystem self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_NamingSystem_FindAllChemTorsionSysNames(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.NamingSystem.chemTorsionSysNames

child link to 
class ChemTorsionSysName
  @param  Chem_NamingSystem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NamingSystem_FindAllChemTorsionSysNames_keyval3(Chem_NamingSystem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_NamingSystem_FindAllChemTorsionSysNames(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.NamingSystem.chemTorsionSysNames

child link to 
class ChemTorsionSysName
  @param  Chem_NamingSystem self
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
ApiSet Chem_NamingSystem_FindAllChemTorsionSysNames_keyval4(Chem_NamingSystem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_NamingSystem_FindAllChemTorsionSysNames(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_NamingSystem self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chem_NamingSystem_FindFirstApplicationData(Chem_NamingSystem self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: method 'findFirstApplicationData' is not callable");
  
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
  @param  Chem_NamingSystem self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chem_NamingSystem_FindFirstApplicationData_keyval0(Chem_NamingSystem self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_NamingSystem_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_NamingSystem self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chem_NamingSystem_FindFirstApplicationData_keyval1(Chem_NamingSystem self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_NamingSystem_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_NamingSystem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chem_NamingSystem_FindFirstApplicationData_keyval2(Chem_NamingSystem self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_NamingSystem_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_NamingSystem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chem_NamingSystem_FindFirstApplicationData_keyval3(Chem_NamingSystem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_NamingSystem_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_NamingSystem self
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
Impl_ApplicationData Chem_NamingSystem_FindFirstApplicationData_keyval4(Chem_NamingSystem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_NamingSystem_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.NamingSystem.atomSetVariantSystems

variant naming 
systems that use the present one for atom name reference
  @param  Chem_NamingSystem self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chem_NamingSystem Chem_NamingSystem_FindFirstAtomSetVariantSystem(Chem_NamingSystem self, ApiMap conditions)
{
  
  Chem_NamingSystem obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstAtomSetVariantSystem");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: cannot find method 'findFirstAtomSetVariantSystem'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: method 'findFirstAtomSetVariantSystem' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.NamingSystem.atomSetVariantSystems

variant naming 
systems that use the present one for atom name reference
  @param  Chem_NamingSystem self
  @returns  the first value that satisfies the conditions 
**/
Chem_NamingSystem Chem_NamingSystem_FindFirstAtomSetVariantSystem_keyval0(Chem_NamingSystem self)
{
  
  Chem_NamingSystem  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_NamingSystem_FindFirstAtomSetVariantSystem(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.NamingSystem.atomSetVariantSystems

variant naming 
systems that use the present one for atom name reference
  @param  Chem_NamingSystem self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chem_NamingSystem Chem_NamingSystem_FindFirstAtomSetVariantSystem_keyval1(Chem_NamingSystem self, char * key, ApiObject value)
{
  
  Chem_NamingSystem  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_NamingSystem_FindFirstAtomSetVariantSystem(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.NamingSystem.atomSetVariantSystems

variant naming 
systems that use the present one for atom name reference
  @param  Chem_NamingSystem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chem_NamingSystem Chem_NamingSystem_FindFirstAtomSetVariantSystem_keyval2(Chem_NamingSystem self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chem_NamingSystem  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_NamingSystem_FindFirstAtomSetVariantSystem(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.NamingSystem.atomSetVariantSystems

variant naming 
systems that use the present one for atom name reference
  @param  Chem_NamingSystem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chem_NamingSystem Chem_NamingSystem_FindFirstAtomSetVariantSystem_keyval3(Chem_NamingSystem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chem_NamingSystem  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_NamingSystem_FindFirstAtomSetVariantSystem(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.NamingSystem.atomSetVariantSystems

variant naming 
systems that use the present one for atom name reference
  @param  Chem_NamingSystem self
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
Chem_NamingSystem Chem_NamingSystem_FindFirstAtomSetVariantSystem_keyval4(Chem_NamingSystem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chem_NamingSystem  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_NamingSystem_FindFirstAtomSetVariantSystem(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.NamingSystem.atomSysNames

child 
link to class AtomSysName
  @param  Chem_NamingSystem self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chem_AtomSysName Chem_NamingSystem_FindFirstAtomSysName(Chem_NamingSystem self, ApiMap conditions)
{
  
  Chem_AtomSysName obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstAtomSysName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: cannot find method 'findFirstAtomSysName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: method 'findFirstAtomSysName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.NamingSystem.atomSysNames

child 
link to class AtomSysName
  @param  Chem_NamingSystem self
  @returns  the first value that satisfies the conditions 
**/
Chem_AtomSysName Chem_NamingSystem_FindFirstAtomSysName_keyval0(Chem_NamingSystem self)
{
  
  Chem_AtomSysName  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_NamingSystem_FindFirstAtomSysName(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.NamingSystem.atomSysNames

child 
link to class AtomSysName
  @param  Chem_NamingSystem self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chem_AtomSysName Chem_NamingSystem_FindFirstAtomSysName_keyval1(Chem_NamingSystem self, char * key, ApiObject value)
{
  
  Chem_AtomSysName  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_NamingSystem_FindFirstAtomSysName(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.NamingSystem.atomSysNames

child 
link to class AtomSysName
  @param  Chem_NamingSystem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chem_AtomSysName Chem_NamingSystem_FindFirstAtomSysName_keyval2(Chem_NamingSystem self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chem_AtomSysName  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_NamingSystem_FindFirstAtomSysName(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.NamingSystem.atomSysNames

child 
link to class AtomSysName
  @param  Chem_NamingSystem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chem_AtomSysName Chem_NamingSystem_FindFirstAtomSysName_keyval3(Chem_NamingSystem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chem_AtomSysName  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_NamingSystem_FindFirstAtomSysName(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.NamingSystem.atomSysNames

child 
link to class AtomSysName
  @param  Chem_NamingSystem self
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
Chem_AtomSysName Chem_NamingSystem_FindFirstAtomSysName_keyval4(Chem_NamingSystem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chem_AtomSysName  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_NamingSystem_FindFirstAtomSysName(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.NamingSystem.atomVariantSystems

variant naming 
systems that use the present one for atom name reference
  @param  Chem_NamingSystem self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chem_NamingSystem Chem_NamingSystem_FindFirstAtomVariantSystem(Chem_NamingSystem self, ApiMap conditions)
{
  
  Chem_NamingSystem obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstAtomVariantSystem");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: cannot find method 'findFirstAtomVariantSystem'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: method 'findFirstAtomVariantSystem' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.NamingSystem.atomVariantSystems

variant naming 
systems that use the present one for atom name reference
  @param  Chem_NamingSystem self
  @returns  the first value that satisfies the conditions 
**/
Chem_NamingSystem Chem_NamingSystem_FindFirstAtomVariantSystem_keyval0(Chem_NamingSystem self)
{
  
  Chem_NamingSystem  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_NamingSystem_FindFirstAtomVariantSystem(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.NamingSystem.atomVariantSystems

variant naming 
systems that use the present one for atom name reference
  @param  Chem_NamingSystem self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chem_NamingSystem Chem_NamingSystem_FindFirstAtomVariantSystem_keyval1(Chem_NamingSystem self, char * key, ApiObject value)
{
  
  Chem_NamingSystem  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_NamingSystem_FindFirstAtomVariantSystem(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.NamingSystem.atomVariantSystems

variant naming 
systems that use the present one for atom name reference
  @param  Chem_NamingSystem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chem_NamingSystem Chem_NamingSystem_FindFirstAtomVariantSystem_keyval2(Chem_NamingSystem self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chem_NamingSystem  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_NamingSystem_FindFirstAtomVariantSystem(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.NamingSystem.atomVariantSystems

variant naming 
systems that use the present one for atom name reference
  @param  Chem_NamingSystem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chem_NamingSystem Chem_NamingSystem_FindFirstAtomVariantSystem_keyval3(Chem_NamingSystem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chem_NamingSystem  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_NamingSystem_FindFirstAtomVariantSystem(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.NamingSystem.atomVariantSystems

variant naming 
systems that use the present one for atom name reference
  @param  Chem_NamingSystem self
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
Chem_NamingSystem Chem_NamingSystem_FindFirstAtomVariantSystem_keyval4(Chem_NamingSystem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chem_NamingSystem  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_NamingSystem_FindFirstAtomVariantSystem(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.NamingSystem.chemCompSysNames

child 
link to class ChemCompSysName
  @param  Chem_NamingSystem self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemCompSysName Chem_NamingSystem_FindFirstChemCompSysName(Chem_NamingSystem self, ApiMap conditions)
{
  
  Chem_ChemCompSysName obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChemCompSysName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: cannot find method 'findFirstChemCompSysName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: method 'findFirstChemCompSysName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.NamingSystem.chemCompSysNames

child 
link to class ChemCompSysName
  @param  Chem_NamingSystem self
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemCompSysName Chem_NamingSystem_FindFirstChemCompSysName_keyval0(Chem_NamingSystem self)
{
  
  Chem_ChemCompSysName  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_NamingSystem_FindFirstChemCompSysName(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.NamingSystem.chemCompSysNames

child 
link to class ChemCompSysName
  @param  Chem_NamingSystem self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemCompSysName Chem_NamingSystem_FindFirstChemCompSysName_keyval1(Chem_NamingSystem self, char * key, ApiObject value)
{
  
  Chem_ChemCompSysName  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_NamingSystem_FindFirstChemCompSysName(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.NamingSystem.chemCompSysNames

child 
link to class ChemCompSysName
  @param  Chem_NamingSystem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemCompSysName Chem_NamingSystem_FindFirstChemCompSysName_keyval2(Chem_NamingSystem self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chem_ChemCompSysName  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_NamingSystem_FindFirstChemCompSysName(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.NamingSystem.chemCompSysNames

child 
link to class ChemCompSysName
  @param  Chem_NamingSystem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemCompSysName Chem_NamingSystem_FindFirstChemCompSysName_keyval3(Chem_NamingSystem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chem_ChemCompSysName  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_NamingSystem_FindFirstChemCompSysName(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.NamingSystem.chemCompSysNames

child 
link to class ChemCompSysName
  @param  Chem_NamingSystem self
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
Chem_ChemCompSysName Chem_NamingSystem_FindFirstChemCompSysName_keyval4(Chem_NamingSystem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chem_ChemCompSysName  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_NamingSystem_FindFirstChemCompSysName(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.NamingSystem.chemTorsionSysNames

child link to 
class ChemTorsionSysName
  @param  Chem_NamingSystem self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemTorsionSysName Chem_NamingSystem_FindFirstChemTorsionSysName(Chem_NamingSystem self, ApiMap conditions)
{
  
  Chem_ChemTorsionSysName obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChemTorsionSysName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: cannot find method 'findFirstChemTorsionSysName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: method 'findFirstChemTorsionSysName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.NamingSystem.chemTorsionSysNames

child link to 
class ChemTorsionSysName
  @param  Chem_NamingSystem self
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemTorsionSysName Chem_NamingSystem_FindFirstChemTorsionSysName_keyval0(Chem_NamingSystem self)
{
  
  Chem_ChemTorsionSysName  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_NamingSystem_FindFirstChemTorsionSysName(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.NamingSystem.chemTorsionSysNames

child link to 
class ChemTorsionSysName
  @param  Chem_NamingSystem self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemTorsionSysName Chem_NamingSystem_FindFirstChemTorsionSysName_keyval1(Chem_NamingSystem self, char * key, ApiObject value)
{
  
  Chem_ChemTorsionSysName  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_NamingSystem_FindFirstChemTorsionSysName(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.NamingSystem.chemTorsionSysNames

child link to 
class ChemTorsionSysName
  @param  Chem_NamingSystem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemTorsionSysName Chem_NamingSystem_FindFirstChemTorsionSysName_keyval2(Chem_NamingSystem self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chem_ChemTorsionSysName  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_NamingSystem_FindFirstChemTorsionSysName(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.NamingSystem.chemTorsionSysNames

child link to 
class ChemTorsionSysName
  @param  Chem_NamingSystem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemTorsionSysName Chem_NamingSystem_FindFirstChemTorsionSysName_keyval3(Chem_NamingSystem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chem_ChemTorsionSysName  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_NamingSystem_FindFirstChemTorsionSysName(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.NamingSystem.chemTorsionSysNames

child link to 
class ChemTorsionSysName
  @param  Chem_NamingSystem self
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
Chem_ChemTorsionSysName Chem_NamingSystem_FindFirstChemTorsionSysName_keyval4(Chem_NamingSystem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chem_ChemTorsionSysName  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_NamingSystem_FindFirstChemTorsionSysName(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.molecule.ChemComp.NamingSystem
  @param  Chem_NamingSystem self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Chem_NamingSystem_Get(Chem_NamingSystem self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Chem_NamingSystem self
  @returns   the result
**/
Acco_AccessObject Chem_NamingSystem_GetAccess(Chem_NamingSystem self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: method 'getAccess' is not callable");
  
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
  @param  Chem_NamingSystem self
  @returns   the result
**/
Acco_AccessObject Chem_NamingSystem_GetActiveAccess(Chem_NamingSystem self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: method 'getActiveAccess' is not callable");
  
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
  @param  Chem_NamingSystem self
  @returns   the result
**/
ApiList Chem_NamingSystem_GetApplicationData(Chem_NamingSystem self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.NamingSystem.atomReference

Reference 
naming system for atom names. Any atom names not found under the 
namingSystem itself should be sought in the reference NamingSystem
  @param  Chem_NamingSystem self
  @returns   the result
**/
Chem_NamingSystem Chem_NamingSystem_GetAtomReference(Chem_NamingSystem self)
{
  
  Chem_NamingSystem obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAtomReference");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: cannot find method 'getAtomReference'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: method 'getAtomReference' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.NamingSystem.atomSetReference

Reference 
naming system for atom set names. Any atom names not found under the 
namingSystem itself should be sought in the reference NamingSystem
  @param  Chem_NamingSystem self
  @returns   the result
**/
Chem_NamingSystem Chem_NamingSystem_GetAtomSetReference(Chem_NamingSystem self)
{
  
  Chem_NamingSystem obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAtomSetReference");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: cannot find method 'getAtomSetReference'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: method 'getAtomSetReference' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.molecule.ChemComp.NamingSystem.atomSetVariantSystems

variant naming 
systems that use the present one for atom name reference
  @param  Chem_NamingSystem self
  @returns   the result
**/
ApiSet Chem_NamingSystem_GetAtomSetVariantSystems(Chem_NamingSystem self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAtomSetVariantSystems");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: cannot find method 'getAtomSetVariantSystems'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: method 'getAtomSetVariantSystems' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.NamingSystem.atomSysNames

child link to 
class AtomSysName
  @param  Chem_NamingSystem self
  @returns   the result
**/
ApiSet Chem_NamingSystem_GetAtomSysNames(Chem_NamingSystem self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAtomSysNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: cannot find method 'getAtomSysNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: method 'getAtomSysNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.NamingSystem.atomVariantSystems

variant 
naming systems that use the present one for atom name reference
  @param  Chem_NamingSystem self
  @returns   the result
**/
ApiSet Chem_NamingSystem_GetAtomVariantSystems(Chem_NamingSystem self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAtomVariantSystems");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: cannot find method 'getAtomVariantSystems'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: method 'getAtomVariantSystems' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.molecule.ChemComp.NamingSystem
  @param  Chem_NamingSystem self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Chem_NamingSystem Chem_NamingSystem_GetByKey(Chem_NamingSystem self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Chem_NamingSystem obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: method 'getByKey' is not callable");
  
  args = PyTuple_Pack(2, startObj, fullKey);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.NamingSystem.chemComp

parent link
  @param  Chem_NamingSystem self
  @returns   the result
**/
Chem_ChemComp Chem_NamingSystem_GetChemComp(Chem_NamingSystem self)
{
  
  Chem_ChemComp obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemComp");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: cannot find method 'getChemComp'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: method 'getChemComp' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.NamingSystem.chemCompSysNames

child link 
to class ChemCompSysName
  @param  Chem_NamingSystem self
  @returns   the result
**/
ApiSet Chem_NamingSystem_GetChemCompSysNames(Chem_NamingSystem self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemCompSysNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: cannot find method 'getChemCompSysNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: method 'getChemCompSysNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.NamingSystem.chemTorsionSysNames

child 
link to class ChemTorsionSysName
  @param  Chem_NamingSystem self
  @returns   the result
**/
ApiSet Chem_NamingSystem_GetChemTorsionSysNames(Chem_NamingSystem self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemTorsionSysNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: cannot find method 'getChemTorsionSysNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: method 'getChemTorsionSysNames' is not callable");
  
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
  @param  Chem_NamingSystem self
  @returns   the result
**/
ApiString Chem_NamingSystem_GetClassName(Chem_NamingSystem self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: method 'getClassName' is not callable");
  
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
  @param  Chem_NamingSystem self
  @returns   the result
**/
ApiList Chem_NamingSystem_GetFieldNames(Chem_NamingSystem self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.molecule.ChemComp.NamingSystem
  @param  Chem_NamingSystem self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Chem_NamingSystem_GetFullKey(Chem_NamingSystem self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: method 'getFullKey' is not callable");
  
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
  @param  Chem_NamingSystem self
  @returns   the result
**/
ApiBoolean Chem_NamingSystem_GetInConstructor(Chem_NamingSystem self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: method 'getInConstructor' is not callable");
  
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
  @param  Chem_NamingSystem self
  @returns   the result
**/
ApiBoolean Chem_NamingSystem_GetIsDeleted(Chem_NamingSystem self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.molecule.ChemComp.NamingSystem
  @param  Chem_NamingSystem self
  @returns  Local object key
**/
ApiObject Chem_NamingSystem_GetLocalKey(Chem_NamingSystem self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived link mainChemCompSysName
  @param  Chem_NamingSystem self
  @returns   the result
**/
Chem_ChemCompSysName Chem_NamingSystem_GetMainChemCompSysName(Chem_NamingSystem self)
{
  
  Chem_ChemCompSysName obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMainChemCompSysName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: cannot find method 'getMainChemCompSysName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: method 'getMainChemCompSysName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.NamingSystem.name

naming system within 
which systematic names are defined
  @param  Chem_NamingSystem self
  @returns   the result
**/
ApiString Chem_NamingSystem_GetName(Chem_NamingSystem self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: method 'getName' is not callable");
  
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
  @param  Chem_NamingSystem self
  @returns   the result
**/
ApiString Chem_NamingSystem_GetPackageName(Chem_NamingSystem self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: method 'getPackageName' is not callable");
  
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
  @param  Chem_NamingSystem self
  @returns   the result
**/
ApiString Chem_NamingSystem_GetPackageShortName(Chem_NamingSystem self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.NamingSystem.parent

link to parent object 
- synonym for chemComp
  @param  Chem_NamingSystem self
  @returns   the result
**/
Chem_ChemComp Chem_NamingSystem_GetParent(Chem_NamingSystem self)
{
  
  Chem_ChemComp obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: method 'getParent' is not callable");
  
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
  @param  Chem_NamingSystem self
  @returns   the result
**/
ApiString Chem_NamingSystem_GetQualifiedName(Chem_NamingSystem self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: method 'getQualifiedName' is not callable");
  
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
  @param  Chem_NamingSystem self
  @returns   the result
**/
Impl_MemopsRoot Chem_NamingSystem_GetRoot(Chem_NamingSystem self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: method 'getRoot' is not callable");
  
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
  @param  Chem_NamingSystem self
  @returns   the result
**/
Impl_TopObject Chem_NamingSystem_GetTopObject(Chem_NamingSystem self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.molecule.ChemComp.NamingSystem
  @param  Chem_ChemComp parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Chem_NamingSystem Chem_NamingSystem_Init(Chem_ChemComp parent, ApiMap attrlinks)
{
  
  return Chem_ChemComp_NewNamingSystem(parent, attrlinks);
}

/**
  Constructor for ccp.molecule.ChemComp.NamingSystem
  @param  Chem_ChemComp parent
  @param  char * name
  @returns  the new object
**/
Chem_NamingSystem Chem_NamingSystem_Init_reqd(Chem_ChemComp parent, char * name)
{
  
  Chem_NamingSystem  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Chem_NamingSystem_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.ChemComp.AtomSysName
  @param  Chem_NamingSystem self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Chem_AtomSysName Chem_NamingSystem_NewAtomSysName(Chem_NamingSystem self, ApiMap attrlinks)
{
  
  Chem_AtomSysName obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newAtomSysName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: cannot find method 'newAtomSysName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: method 'newAtomSysName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.ChemComp.AtomSysName
  @param  Chem_NamingSystem self
  @param  char * atomName
  @param  char * sysName
  @returns  the new object
**/
Chem_AtomSysName Chem_NamingSystem_NewAtomSysName_reqd(Chem_NamingSystem self, char * atomName, char * sysName)
{
  
  Chem_AtomSysName  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__atomName = ApiString_New(atomName);
  ApiString api__sysName = ApiString_New(sysName);

  PyDict_SetItemString(attrlinks, "atomName", api__atomName);
  PyDict_SetItemString(attrlinks, "sysName", api__sysName);
  
  obj = Chem_NamingSystem_NewAtomSysName(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__atomName);
  Py_DECREF(api__sysName);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.ChemComp.ChemCompSysName
  @param  Chem_NamingSystem self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Chem_ChemCompSysName Chem_NamingSystem_NewChemCompSysName(Chem_NamingSystem self, ApiMap attrlinks)
{
  
  Chem_ChemCompSysName obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newChemCompSysName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: cannot find method 'newChemCompSysName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: method 'newChemCompSysName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.ChemComp.ChemCompSysName
  @param  Chem_NamingSystem self
  @param  char * sysName
  @returns  the new object
**/
Chem_ChemCompSysName Chem_NamingSystem_NewChemCompSysName_reqd(Chem_NamingSystem self, char * sysName)
{
  
  Chem_ChemCompSysName  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__sysName = ApiString_New(sysName);

  PyDict_SetItemString(attrlinks, "sysName", api__sysName);
  
  obj = Chem_NamingSystem_NewChemCompSysName(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__sysName);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.ChemComp.ChemTorsionSysName
  @param  Chem_NamingSystem self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Chem_ChemTorsionSysName Chem_NamingSystem_NewChemTorsionSysName(Chem_NamingSystem self, ApiMap attrlinks)
{
  
  Chem_ChemTorsionSysName obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newChemTorsionSysName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: cannot find method 'newChemTorsionSysName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: method 'newChemTorsionSysName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.ChemComp.ChemTorsionSysName
  @param  Chem_NamingSystem self
  @param  Chem_ChemTorsion chemTorsion
  @returns  the new object
**/
Chem_ChemTorsionSysName Chem_NamingSystem_NewChemTorsionSysName_reqd(Chem_NamingSystem self, Chem_ChemTorsion chemTorsion)
{
  
  Chem_ChemTorsionSysName  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "chemTorsion", chemTorsion);
  
  obj = Chem_NamingSystem_NewChemTorsionSysName(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_NamingSystem self
  @param  Impl_ApplicationData value
**/
void *Chem_NamingSystem_RemoveApplicationData(Chem_NamingSystem self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
ccp.molecule.ChemComp.NamingSystem.atomSetVariantSystems

variant naming 
systems that use the present one for atom name reference
  @param  Chem_NamingSystem self
  @param  Chem_NamingSystem value
**/
void *Chem_NamingSystem_RemoveAtomSetVariantSystem(Chem_NamingSystem self, Chem_NamingSystem value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeAtomSetVariantSystem");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: cannot find method 'removeAtomSetVariantSystem'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: method 'removeAtomSetVariantSystem' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
ccp.molecule.ChemComp.NamingSystem.atomVariantSystems

variant naming 
systems that use the present one for atom name reference
  @param  Chem_NamingSystem self
  @param  Chem_NamingSystem value
**/
void *Chem_NamingSystem_RemoveAtomVariantSystem(Chem_NamingSystem self, Chem_NamingSystem value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeAtomVariantSystem");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: cannot find method 'removeAtomVariantSystem'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: method 'removeAtomVariantSystem' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.molecule.ChemComp.NamingSystem
  @param  Chem_NamingSystem self
  @param  ApiString name
  @param  ApiObject value
**/
void *Chem_NamingSystem_Set(Chem_NamingSystem self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Chem_NamingSystem self
  @param  Acco_AccessObject value
**/
void *Chem_NamingSystem_SetAccess(Chem_NamingSystem self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: method 'setAccess' is not callable");
  
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
  @param  Chem_NamingSystem self
  @param  ApiList values
**/
void *Chem_NamingSystem_SetApplicationData(Chem_NamingSystem self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.NamingSystem.atomReference

Reference 
naming system for atom names. Any atom names not found under the 
namingSystem itself should be sought in the reference NamingSystem
  @param  Chem_NamingSystem self
  @param  Chem_NamingSystem value
**/
void *Chem_NamingSystem_SetAtomReference(Chem_NamingSystem self, Chem_NamingSystem value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAtomReference");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: cannot find method 'setAtomReference'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: method 'setAtomReference' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.NamingSystem.atomSetReference

Reference 
naming system for atom set names. Any atom names not found under the 
namingSystem itself should be sought in the reference NamingSystem
  @param  Chem_NamingSystem self
  @param  Chem_NamingSystem value
**/
void *Chem_NamingSystem_SetAtomSetReference(Chem_NamingSystem self, Chem_NamingSystem value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAtomSetReference");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: cannot find method 'setAtomSetReference'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: method 'setAtomSetReference' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.molecule.ChemComp.NamingSystem.atomSetVariantSystems

variant naming 
systems that use the present one for atom name reference
  @param  Chem_NamingSystem self
  @param  ApiSet values
**/
void *Chem_NamingSystem_SetAtomSetVariantSystems(Chem_NamingSystem self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAtomSetVariantSystems");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: cannot find method 'setAtomSetVariantSystems'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: method 'setAtomSetVariantSystems' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.NamingSystem.atomVariantSystems

variant 
naming systems that use the present one for atom name reference
  @param  Chem_NamingSystem self
  @param  ApiSet values
**/
void *Chem_NamingSystem_SetAtomVariantSystems(Chem_NamingSystem self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAtomVariantSystems");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: cannot find method 'setAtomVariantSystems'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: method 'setAtomVariantSystems' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.NamingSystem.name

naming system within 
which systematic names are defined
  @param  Chem_NamingSystem self
  @param  ApiString value
**/
void *Chem_NamingSystem_SetName(Chem_NamingSystem self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.molecule.ChemComp.NamingSystem.atomSetVariantSystems

variant naming 
systems that use the present one for atom name reference
  @param  Chem_NamingSystem self
  @returns   the result
**/
ApiList Chem_NamingSystem_SortedAtomSetVariantSystems(Chem_NamingSystem self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedAtomSetVariantSystems");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: cannot find method 'sortedAtomSetVariantSystems'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: method 'sortedAtomSetVariantSystems' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.ChemComp.NamingSystem.atomSysNames

child link 
to class AtomSysName
  @param  Chem_NamingSystem self
  @returns   the result
**/
ApiList Chem_NamingSystem_SortedAtomSysNames(Chem_NamingSystem self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedAtomSysNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: cannot find method 'sortedAtomSysNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: method 'sortedAtomSysNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.molecule.ChemComp.NamingSystem.atomVariantSystems

variant naming 
systems that use the present one for atom name reference
  @param  Chem_NamingSystem self
  @returns   the result
**/
ApiList Chem_NamingSystem_SortedAtomVariantSystems(Chem_NamingSystem self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedAtomVariantSystems");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: cannot find method 'sortedAtomVariantSystems'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: method 'sortedAtomVariantSystems' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.ChemComp.NamingSystem.chemCompSysNames

child 
link to class ChemCompSysName
  @param  Chem_NamingSystem self
  @returns   the result
**/
ApiList Chem_NamingSystem_SortedChemCompSysNames(Chem_NamingSystem self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChemCompSysNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: cannot find method 'sortedChemCompSysNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: method 'sortedChemCompSysNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.ChemComp.NamingSystem.chemTorsionSysNames

child 
link to class ChemTorsionSysName
  @param  Chem_NamingSystem self
  @returns   the result
**/
ApiList Chem_NamingSystem_SortedChemTorsionSysNames(Chem_NamingSystem self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChemTorsionSysNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: cannot find method 'sortedChemTorsionSysNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NamingSystem: method 'sortedChemTorsionSysNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
