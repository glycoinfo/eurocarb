
#include "ccp.h"

/*
  Tosrion angle between four ChenmAtoms. Serves as definition for reference.
*/

/* package ccp.api.molecule.ChemComp */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemTorsion self
  @param  Impl_ApplicationData value
**/
void *Chem_ChemTorsion_AddApplicationData(Chem_ChemTorsion self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemTorsion: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemTorsion: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.molecule.ChemComp.ChemTorsion
  @param  Chem_ChemTorsion self
  @param  ApiBoolean complete
**/
void *Chem_ChemTorsion_CheckAllValid(Chem_ChemTorsion self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemTorsion: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemTorsion: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.molecule.ChemComp.ChemTorsion
  @param  Chem_ChemTorsion self
  @param  ApiBoolean complete
**/
void *Chem_ChemTorsion_CheckValid(Chem_ChemTorsion self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemTorsion: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemTorsion: method 'checkValid' is not callable");
  
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
  @param  Chem_ChemTorsion self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_ChemTorsion_FindAllApplicationData(Chem_ChemTorsion self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemTorsion: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemTorsion: method 'findAllApplicationData' is not callable");
  
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
  @param  Chem_ChemTorsion self
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_ChemTorsion_FindAllApplicationData_keyval0(Chem_ChemTorsion self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_ChemTorsion_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemTorsion self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_ChemTorsion_FindAllApplicationData_keyval1(Chem_ChemTorsion self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_ChemTorsion_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemTorsion self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_ChemTorsion_FindAllApplicationData_keyval2(Chem_ChemTorsion self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_ChemTorsion_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemTorsion self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_ChemTorsion_FindAllApplicationData_keyval3(Chem_ChemTorsion self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_ChemTorsion_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemTorsion self
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
ApiList Chem_ChemTorsion_FindAllApplicationData_keyval4(Chem_ChemTorsion self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_ChemTorsion_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.ChemTorsion.chemAtoms

AbstractChemAtoms making up 
ChemTorsion
  @param  Chem_ChemTorsion self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_ChemTorsion_FindAllChemAtoms(Chem_ChemTorsion self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChemAtoms");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemTorsion: cannot find method 'findAllChemAtoms'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemTorsion: method 'findAllChemAtoms' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.ChemTorsion.chemAtoms

AbstractChemAtoms making up 
ChemTorsion
  @param  Chem_ChemTorsion self
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_ChemTorsion_FindAllChemAtoms_keyval0(Chem_ChemTorsion self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_ChemTorsion_FindAllChemAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.ChemTorsion.chemAtoms

AbstractChemAtoms making up 
ChemTorsion
  @param  Chem_ChemTorsion self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_ChemTorsion_FindAllChemAtoms_keyval1(Chem_ChemTorsion self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_ChemTorsion_FindAllChemAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.ChemTorsion.chemAtoms

AbstractChemAtoms making up 
ChemTorsion
  @param  Chem_ChemTorsion self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_ChemTorsion_FindAllChemAtoms_keyval2(Chem_ChemTorsion self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_ChemTorsion_FindAllChemAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.ChemTorsion.chemAtoms

AbstractChemAtoms making up 
ChemTorsion
  @param  Chem_ChemTorsion self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_ChemTorsion_FindAllChemAtoms_keyval3(Chem_ChemTorsion self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_ChemTorsion_FindAllChemAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.ChemTorsion.chemAtoms

AbstractChemAtoms making up 
ChemTorsion
  @param  Chem_ChemTorsion self
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
ApiList Chem_ChemTorsion_FindAllChemAtoms_keyval4(Chem_ChemTorsion self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_ChemTorsion_FindAllChemAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.ChemTorsion.sysNames

ChemTorsionSysNames that 
apply to ChemTorsion. Describe systematic names in various naming 
systems
  @param  Chem_ChemTorsion self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemTorsion_FindAllSysNames(Chem_ChemTorsion self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllSysNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemTorsion: cannot find method 'findAllSysNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemTorsion: method 'findAllSysNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.ChemTorsion.sysNames

ChemTorsionSysNames that 
apply to ChemTorsion. Describe systematic names in various naming 
systems
  @param  Chem_ChemTorsion self
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemTorsion_FindAllSysNames_keyval0(Chem_ChemTorsion self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_ChemTorsion_FindAllSysNames(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.ChemTorsion.sysNames

ChemTorsionSysNames that 
apply to ChemTorsion. Describe systematic names in various naming 
systems
  @param  Chem_ChemTorsion self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemTorsion_FindAllSysNames_keyval1(Chem_ChemTorsion self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_ChemTorsion_FindAllSysNames(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.ChemTorsion.sysNames

ChemTorsionSysNames that 
apply to ChemTorsion. Describe systematic names in various naming 
systems
  @param  Chem_ChemTorsion self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemTorsion_FindAllSysNames_keyval2(Chem_ChemTorsion self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_ChemTorsion_FindAllSysNames(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.ChemTorsion.sysNames

ChemTorsionSysNames that 
apply to ChemTorsion. Describe systematic names in various naming 
systems
  @param  Chem_ChemTorsion self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemTorsion_FindAllSysNames_keyval3(Chem_ChemTorsion self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_ChemTorsion_FindAllSysNames(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.ChemTorsion.sysNames

ChemTorsionSysNames that 
apply to ChemTorsion. Describe systematic names in various naming 
systems
  @param  Chem_ChemTorsion self
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
ApiSet Chem_ChemTorsion_FindAllSysNames_keyval4(Chem_ChemTorsion self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_ChemTorsion_FindAllSysNames(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemTorsion self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chem_ChemTorsion_FindFirstApplicationData(Chem_ChemTorsion self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemTorsion: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemTorsion: method 'findFirstApplicationData' is not callable");
  
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
  @param  Chem_ChemTorsion self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chem_ChemTorsion_FindFirstApplicationData_keyval0(Chem_ChemTorsion self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_ChemTorsion_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemTorsion self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chem_ChemTorsion_FindFirstApplicationData_keyval1(Chem_ChemTorsion self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_ChemTorsion_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemTorsion self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chem_ChemTorsion_FindFirstApplicationData_keyval2(Chem_ChemTorsion self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_ChemTorsion_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemTorsion self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chem_ChemTorsion_FindFirstApplicationData_keyval3(Chem_ChemTorsion self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_ChemTorsion_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemTorsion self
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
Impl_ApplicationData Chem_ChemTorsion_FindFirstApplicationData_keyval4(Chem_ChemTorsion self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_ChemTorsion_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemTorsion.chemAtoms

AbstractChemAtoms making up 
ChemTorsion
  @param  Chem_ChemTorsion self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chem_AbstractChemAtom Chem_ChemTorsion_FindFirstChemAtom(Chem_ChemTorsion self, ApiMap conditions)
{
  
  Chem_AbstractChemAtom obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChemAtom");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemTorsion: cannot find method 'findFirstChemAtom'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemTorsion: method 'findFirstChemAtom' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemTorsion.chemAtoms

AbstractChemAtoms making up 
ChemTorsion
  @param  Chem_ChemTorsion self
  @returns  the first value that satisfies the conditions 
**/
Chem_AbstractChemAtom Chem_ChemTorsion_FindFirstChemAtom_keyval0(Chem_ChemTorsion self)
{
  
  Chem_AbstractChemAtom  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_ChemTorsion_FindFirstChemAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemTorsion.chemAtoms

AbstractChemAtoms making up 
ChemTorsion
  @param  Chem_ChemTorsion self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chem_AbstractChemAtom Chem_ChemTorsion_FindFirstChemAtom_keyval1(Chem_ChemTorsion self, char * key, ApiObject value)
{
  
  Chem_AbstractChemAtom  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_ChemTorsion_FindFirstChemAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemTorsion.chemAtoms

AbstractChemAtoms making up 
ChemTorsion
  @param  Chem_ChemTorsion self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chem_AbstractChemAtom Chem_ChemTorsion_FindFirstChemAtom_keyval2(Chem_ChemTorsion self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chem_AbstractChemAtom  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_ChemTorsion_FindFirstChemAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemTorsion.chemAtoms

AbstractChemAtoms making up 
ChemTorsion
  @param  Chem_ChemTorsion self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chem_AbstractChemAtom Chem_ChemTorsion_FindFirstChemAtom_keyval3(Chem_ChemTorsion self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chem_AbstractChemAtom  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_ChemTorsion_FindFirstChemAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemTorsion.chemAtoms

AbstractChemAtoms making up 
ChemTorsion
  @param  Chem_ChemTorsion self
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
Chem_AbstractChemAtom Chem_ChemTorsion_FindFirstChemAtom_keyval4(Chem_ChemTorsion self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chem_AbstractChemAtom  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_ChemTorsion_FindFirstChemAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemTorsion.sysNames

ChemTorsionSysNames that 
apply to ChemTorsion. Describe systematic names in various naming 
systems
  @param  Chem_ChemTorsion self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemTorsionSysName Chem_ChemTorsion_FindFirstSysName(Chem_ChemTorsion self, ApiMap conditions)
{
  
  Chem_ChemTorsionSysName obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstSysName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemTorsion: cannot find method 'findFirstSysName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemTorsion: method 'findFirstSysName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemTorsion.sysNames

ChemTorsionSysNames that 
apply to ChemTorsion. Describe systematic names in various naming 
systems
  @param  Chem_ChemTorsion self
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemTorsionSysName Chem_ChemTorsion_FindFirstSysName_keyval0(Chem_ChemTorsion self)
{
  
  Chem_ChemTorsionSysName  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_ChemTorsion_FindFirstSysName(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemTorsion.sysNames

ChemTorsionSysNames that 
apply to ChemTorsion. Describe systematic names in various naming 
systems
  @param  Chem_ChemTorsion self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemTorsionSysName Chem_ChemTorsion_FindFirstSysName_keyval1(Chem_ChemTorsion self, char * key, ApiObject value)
{
  
  Chem_ChemTorsionSysName  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_ChemTorsion_FindFirstSysName(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemTorsion.sysNames

ChemTorsionSysNames that 
apply to ChemTorsion. Describe systematic names in various naming 
systems
  @param  Chem_ChemTorsion self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemTorsionSysName Chem_ChemTorsion_FindFirstSysName_keyval2(Chem_ChemTorsion self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chem_ChemTorsionSysName  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_ChemTorsion_FindFirstSysName(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemTorsion.sysNames

ChemTorsionSysNames that 
apply to ChemTorsion. Describe systematic names in various naming 
systems
  @param  Chem_ChemTorsion self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemTorsionSysName Chem_ChemTorsion_FindFirstSysName_keyval3(Chem_ChemTorsion self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chem_ChemTorsionSysName  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_ChemTorsion_FindFirstSysName(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemTorsion.sysNames

ChemTorsionSysNames that 
apply to ChemTorsion. Describe systematic names in various naming 
systems
  @param  Chem_ChemTorsion self
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
Chem_ChemTorsionSysName Chem_ChemTorsion_FindFirstSysName_keyval4(Chem_ChemTorsion self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chem_ChemTorsionSysName  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_ChemTorsion_FindFirstSysName(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.molecule.ChemComp.ChemTorsion
  @param  Chem_ChemTorsion self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Chem_ChemTorsion_Get(Chem_ChemTorsion self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Chem_ChemTorsion self
  @returns   the result
**/
Acco_AccessObject Chem_ChemTorsion_GetAccess(Chem_ChemTorsion self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemTorsion: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemTorsion: method 'getAccess' is not callable");
  
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
  @param  Chem_ChemTorsion self
  @returns   the result
**/
ApiList Chem_ChemTorsion_GetApplicationData(Chem_ChemTorsion self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemTorsion: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemTorsion: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.molecule.ChemComp.ChemTorsion
  @param  Chem_ChemTorsion self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Chem_ChemTorsion Chem_ChemTorsion_GetByKey(Chem_ChemTorsion self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Chem_ChemTorsion obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemTorsion: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemTorsion: method 'getByKey' is not callable");
  
  args = PyTuple_Pack(2, startObj, fullKey);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemTorsion.chemAtoms

AbstractChemAtoms 
making up ChemTorsion
  @param  Chem_ChemTorsion self
  @returns   the result
**/
ApiList Chem_ChemTorsion_GetChemAtoms(Chem_ChemTorsion self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemAtoms");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemTorsion: cannot find method 'getChemAtoms'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemTorsion: method 'getChemAtoms' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemTorsion.chemComp

parent link
  @param  Chem_ChemTorsion self
  @returns   the result
**/
Chem_ChemComp Chem_ChemTorsion_GetChemComp(Chem_ChemTorsion self)
{
  
  Chem_ChemComp obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemComp");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemTorsion: cannot find method 'getChemComp'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemTorsion: method 'getChemComp' is not callable");
  
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
  @param  Chem_ChemTorsion self
  @returns   the result
**/
ApiString Chem_ChemTorsion_GetClassName(Chem_ChemTorsion self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemTorsion: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemTorsion: method 'getClassName' is not callable");
  
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
  @param  Chem_ChemTorsion self
  @returns   the result
**/
ApiList Chem_ChemTorsion_GetFieldNames(Chem_ChemTorsion self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemTorsion: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemTorsion: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.molecule.ChemComp.ChemTorsion
  @param  Chem_ChemTorsion self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Chem_ChemTorsion_GetFullKey(Chem_ChemTorsion self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemTorsion: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemTorsion: method 'getFullKey' is not callable");
  
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
  @param  Chem_ChemTorsion self
  @returns   the result
**/
ApiBoolean Chem_ChemTorsion_GetInConstructor(Chem_ChemTorsion self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemTorsion: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemTorsion: method 'getInConstructor' is not callable");
  
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
  @param  Chem_ChemTorsion self
  @returns   the result
**/
ApiBoolean Chem_ChemTorsion_GetIsDeleted(Chem_ChemTorsion self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemTorsion: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemTorsion: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.molecule.ChemComp.ChemTorsion
  @param  Chem_ChemTorsion self
  @returns  Local object key
**/
ApiObject Chem_ChemTorsion_GetLocalKey(Chem_ChemTorsion self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemTorsion: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemTorsion: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemTorsion.name

name of ChemTorsion
  @param  Chem_ChemTorsion self
  @returns   the result
**/
ApiString Chem_ChemTorsion_GetName(Chem_ChemTorsion self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemTorsion: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemTorsion: method 'getName' is not callable");
  
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
  @param  Chem_ChemTorsion self
  @returns   the result
**/
ApiString Chem_ChemTorsion_GetPackageName(Chem_ChemTorsion self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemTorsion: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemTorsion: method 'getPackageName' is not callable");
  
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
  @param  Chem_ChemTorsion self
  @returns   the result
**/
ApiString Chem_ChemTorsion_GetPackageShortName(Chem_ChemTorsion self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemTorsion: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemTorsion: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemTorsion.parent

link to parent object 
- synonym for chemComp
  @param  Chem_ChemTorsion self
  @returns   the result
**/
Chem_ChemComp Chem_ChemTorsion_GetParent(Chem_ChemTorsion self)
{
  
  Chem_ChemComp obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemTorsion: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemTorsion: method 'getParent' is not callable");
  
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
  @param  Chem_ChemTorsion self
  @returns   the result
**/
ApiString Chem_ChemTorsion_GetQualifiedName(Chem_ChemTorsion self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemTorsion: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemTorsion: method 'getQualifiedName' is not callable");
  
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
  @param  Chem_ChemTorsion self
  @returns   the result
**/
Impl_MemopsRoot Chem_ChemTorsion_GetRoot(Chem_ChemTorsion self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemTorsion: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemTorsion: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemTorsion.sysNames

ChemTorsionSysNames 
that apply to ChemTorsion. Describe systematic names in various naming 
systems
  @param  Chem_ChemTorsion self
  @returns   the result
**/
ApiSet Chem_ChemTorsion_GetSysNames(Chem_ChemTorsion self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSysNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemTorsion: cannot find method 'getSysNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemTorsion: method 'getSysNames' is not callable");
  
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
  @param  Chem_ChemTorsion self
  @returns   the result
**/
Impl_TopObject Chem_ChemTorsion_GetTopObject(Chem_ChemTorsion self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemTorsion: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemTorsion: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.molecule.ChemComp.ChemTorsion
  @param  Chem_ChemComp parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Chem_ChemTorsion Chem_ChemTorsion_Init(Chem_ChemComp parent, ApiMap attrlinks)
{
  
  return Chem_ChemComp_NewChemTorsion(parent, attrlinks);
}

/**
  Constructor for ccp.molecule.ChemComp.ChemTorsion
  @param  Chem_ChemComp parent
  @param  ApiList chemAtoms
  @returns  the new object
**/
Chem_ChemTorsion Chem_ChemTorsion_Init_reqd(Chem_ChemComp parent, ApiList chemAtoms)
{
  
  Chem_ChemTorsion  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "chemAtoms", chemAtoms);
  
  obj = Chem_ChemTorsion_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemTorsion self
  @param  Impl_ApplicationData value
**/
void *Chem_ChemTorsion_RemoveApplicationData(Chem_ChemTorsion self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemTorsion: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemTorsion: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.molecule.ChemComp.ChemTorsion
  @param  Chem_ChemTorsion self
  @param  ApiString name
  @param  ApiObject value
**/
void *Chem_ChemTorsion_Set(Chem_ChemTorsion self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Chem_ChemTorsion self
  @param  Acco_AccessObject value
**/
void *Chem_ChemTorsion_SetAccess(Chem_ChemTorsion self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemTorsion: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemTorsion: method 'setAccess' is not callable");
  
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
  @param  Chem_ChemTorsion self
  @param  ApiList values
**/
void *Chem_ChemTorsion_SetApplicationData(Chem_ChemTorsion self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemTorsion: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemTorsion: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.ChemTorsion.chemAtoms

AbstractChemAtoms 
making up ChemTorsion
  @param  Chem_ChemTorsion self
  @param  ApiList values
**/
void *Chem_ChemTorsion_SetChemAtoms(Chem_ChemTorsion self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setChemAtoms");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemTorsion: cannot find method 'setChemAtoms'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemTorsion: method 'setChemAtoms' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.ChemTorsion.name

name of ChemTorsion
  @param  Chem_ChemTorsion self
  @param  ApiString value
**/
void *Chem_ChemTorsion_SetName(Chem_ChemTorsion self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemTorsion: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemTorsion: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.ChemTorsion.sysNames

ChemTorsionSysNames 
that apply to ChemTorsion. Describe systematic names in various naming 
systems
  @param  Chem_ChemTorsion self
  @param  ApiSet values
**/
void *Chem_ChemTorsion_SetSysNames(Chem_ChemTorsion self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSysNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemTorsion: cannot find method 'setSysNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemTorsion: method 'setSysNames' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.molecule.ChemComp.ChemTorsion.sysNames

ChemTorsionSysNames that 
apply to ChemTorsion. Describe systematic names in various naming 
systems
  @param  Chem_ChemTorsion self
  @returns   the result
**/
ApiList Chem_ChemTorsion_SortedSysNames(Chem_ChemTorsion self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedSysNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemTorsion: cannot find method 'sortedSysNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemTorsion: method 'sortedSysNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
