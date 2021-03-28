
#include "ccp.h"

/*
  Group of chem atoms that may form a pseudoatom. A ChemAtomSet may consist of either other ChemAtomSets or of ChemAtoms, but not both. All ChemAtomSets are relevant for all ChemCompVars, but they (or some of the ChemAtomSets they consist of) may contain fewer or even no atoms in some ChemCompVars.
*/

/* package ccp.api.molecule.ChemComp */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemAtomSet self
  @param  Impl_ApplicationData value
**/
void *Chem_ChemAtomSet_AddApplicationData(Chem_ChemAtomSet self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.molecule.ChemComp.ChemAtomSet.chemAtoms

ChemAtoms that make 
up ChemAtomSet.
  @param  Chem_ChemAtomSet self
  @param  Chem_ChemAtom value
**/
void *Chem_ChemAtomSet_AddChemAtom(Chem_ChemAtomSet self, Chem_ChemAtom value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addChemAtom");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: cannot find method 'addChemAtom'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: method 'addChemAtom' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.molecule.ChemComp.ChemAtomSet.chemAtomSets

ChemAtomSets 
that make up ChemAtomSet
  @param  Chem_ChemAtomSet self
  @param  Chem_ChemAtomSet value
**/
void *Chem_ChemAtomSet_AddChemAtomSet(Chem_ChemAtomSet self, Chem_ChemAtomSet value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addChemAtomSet");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: cannot find method 'addChemAtomSet'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: method 'addChemAtomSet' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.molecule.ChemComp.ChemAtomSet
  @param  Chem_ChemAtomSet self
  @param  ApiBoolean complete
**/
void *Chem_ChemAtomSet_CheckAllValid(Chem_ChemAtomSet self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.molecule.ChemComp.ChemAtomSet
  @param  Chem_ChemAtomSet self
  @param  ApiBoolean complete
**/
void *Chem_ChemAtomSet_CheckValid(Chem_ChemAtomSet self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: method 'checkValid' is not callable");
  
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
  @param  Chem_ChemAtomSet self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_ChemAtomSet_FindAllApplicationData(Chem_ChemAtomSet self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: method 'findAllApplicationData' is not callable");
  
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
  @param  Chem_ChemAtomSet self
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_ChemAtomSet_FindAllApplicationData_keyval0(Chem_ChemAtomSet self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_ChemAtomSet_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemAtomSet self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_ChemAtomSet_FindAllApplicationData_keyval1(Chem_ChemAtomSet self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_ChemAtomSet_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemAtomSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_ChemAtomSet_FindAllApplicationData_keyval2(Chem_ChemAtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_ChemAtomSet_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemAtomSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_ChemAtomSet_FindAllApplicationData_keyval3(Chem_ChemAtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_ChemAtomSet_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemAtomSet self
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
ApiList Chem_ChemAtomSet_FindAllApplicationData_keyval4(Chem_ChemAtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_ChemAtomSet_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemAtomSet.chemAtomSets

ChemAtomSets 
that make up ChemAtomSet
  @param  Chem_ChemAtomSet self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemAtomSet_FindAllChemAtomSets(Chem_ChemAtomSet self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChemAtomSets");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: cannot find method 'findAllChemAtomSets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: method 'findAllChemAtomSets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemAtomSet.chemAtomSets

ChemAtomSets 
that make up ChemAtomSet
  @param  Chem_ChemAtomSet self
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemAtomSet_FindAllChemAtomSets_keyval0(Chem_ChemAtomSet self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_ChemAtomSet_FindAllChemAtomSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemAtomSet.chemAtomSets

ChemAtomSets 
that make up ChemAtomSet
  @param  Chem_ChemAtomSet self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemAtomSet_FindAllChemAtomSets_keyval1(Chem_ChemAtomSet self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_ChemAtomSet_FindAllChemAtomSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemAtomSet.chemAtomSets

ChemAtomSets 
that make up ChemAtomSet
  @param  Chem_ChemAtomSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemAtomSet_FindAllChemAtomSets_keyval2(Chem_ChemAtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_ChemAtomSet_FindAllChemAtomSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemAtomSet.chemAtomSets

ChemAtomSets 
that make up ChemAtomSet
  @param  Chem_ChemAtomSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemAtomSet_FindAllChemAtomSets_keyval3(Chem_ChemAtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_ChemAtomSet_FindAllChemAtomSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemAtomSet.chemAtomSets

ChemAtomSets 
that make up ChemAtomSet
  @param  Chem_ChemAtomSet self
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
ApiSet Chem_ChemAtomSet_FindAllChemAtomSets_keyval4(Chem_ChemAtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_ChemAtomSet_FindAllChemAtomSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemAtomSet.chemAtoms

ChemAtoms that 
make up ChemAtomSet.
  @param  Chem_ChemAtomSet self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemAtomSet_FindAllChemAtoms(Chem_ChemAtomSet self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChemAtoms");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: cannot find method 'findAllChemAtoms'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: method 'findAllChemAtoms' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemAtomSet.chemAtoms

ChemAtoms that 
make up ChemAtomSet.
  @param  Chem_ChemAtomSet self
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemAtomSet_FindAllChemAtoms_keyval0(Chem_ChemAtomSet self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_ChemAtomSet_FindAllChemAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemAtomSet.chemAtoms

ChemAtoms that 
make up ChemAtomSet.
  @param  Chem_ChemAtomSet self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemAtomSet_FindAllChemAtoms_keyval1(Chem_ChemAtomSet self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_ChemAtomSet_FindAllChemAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemAtomSet.chemAtoms

ChemAtoms that 
make up ChemAtomSet.
  @param  Chem_ChemAtomSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemAtomSet_FindAllChemAtoms_keyval2(Chem_ChemAtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_ChemAtomSet_FindAllChemAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemAtomSet.chemAtoms

ChemAtoms that 
make up ChemAtomSet.
  @param  Chem_ChemAtomSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemAtomSet_FindAllChemAtoms_keyval3(Chem_ChemAtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_ChemAtomSet_FindAllChemAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemAtomSet.chemAtoms

ChemAtoms that 
make up ChemAtomSet.
  @param  Chem_ChemAtomSet self
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
ApiSet Chem_ChemAtomSet_FindAllChemAtoms_keyval4(Chem_ChemAtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_ChemAtomSet_FindAllChemAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemAtomSet self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chem_ChemAtomSet_FindFirstApplicationData(Chem_ChemAtomSet self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: method 'findFirstApplicationData' is not callable");
  
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
  @param  Chem_ChemAtomSet self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chem_ChemAtomSet_FindFirstApplicationData_keyval0(Chem_ChemAtomSet self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_ChemAtomSet_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemAtomSet self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chem_ChemAtomSet_FindFirstApplicationData_keyval1(Chem_ChemAtomSet self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_ChemAtomSet_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemAtomSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chem_ChemAtomSet_FindFirstApplicationData_keyval2(Chem_ChemAtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_ChemAtomSet_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemAtomSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chem_ChemAtomSet_FindFirstApplicationData_keyval3(Chem_ChemAtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_ChemAtomSet_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemAtomSet self
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
Impl_ApplicationData Chem_ChemAtomSet_FindFirstApplicationData_keyval4(Chem_ChemAtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_ChemAtomSet_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemAtomSet.chemAtoms

ChemAtoms 
that make up ChemAtomSet.
  @param  Chem_ChemAtomSet self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemAtom Chem_ChemAtomSet_FindFirstChemAtom(Chem_ChemAtomSet self, ApiMap conditions)
{
  
  Chem_ChemAtom obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChemAtom");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: cannot find method 'findFirstChemAtom'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: method 'findFirstChemAtom' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemAtomSet.chemAtomSets

ChemAtomSets that make 
up ChemAtomSet
  @param  Chem_ChemAtomSet self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemAtomSet Chem_ChemAtomSet_FindFirstChemAtomSet(Chem_ChemAtomSet self, ApiMap conditions)
{
  
  Chem_ChemAtomSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChemAtomSet");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: cannot find method 'findFirstChemAtomSet'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: method 'findFirstChemAtomSet' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemAtomSet.chemAtomSets

ChemAtomSets that make 
up ChemAtomSet
  @param  Chem_ChemAtomSet self
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemAtomSet Chem_ChemAtomSet_FindFirstChemAtomSet_keyval0(Chem_ChemAtomSet self)
{
  
  Chem_ChemAtomSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_ChemAtomSet_FindFirstChemAtomSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemAtomSet.chemAtomSets

ChemAtomSets that make 
up ChemAtomSet
  @param  Chem_ChemAtomSet self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemAtomSet Chem_ChemAtomSet_FindFirstChemAtomSet_keyval1(Chem_ChemAtomSet self, char * key, ApiObject value)
{
  
  Chem_ChemAtomSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_ChemAtomSet_FindFirstChemAtomSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemAtomSet.chemAtomSets

ChemAtomSets that make 
up ChemAtomSet
  @param  Chem_ChemAtomSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemAtomSet Chem_ChemAtomSet_FindFirstChemAtomSet_keyval2(Chem_ChemAtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chem_ChemAtomSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_ChemAtomSet_FindFirstChemAtomSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemAtomSet.chemAtomSets

ChemAtomSets that make 
up ChemAtomSet
  @param  Chem_ChemAtomSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemAtomSet Chem_ChemAtomSet_FindFirstChemAtomSet_keyval3(Chem_ChemAtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chem_ChemAtomSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_ChemAtomSet_FindFirstChemAtomSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemAtomSet.chemAtomSets

ChemAtomSets that make 
up ChemAtomSet
  @param  Chem_ChemAtomSet self
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
Chem_ChemAtomSet Chem_ChemAtomSet_FindFirstChemAtomSet_keyval4(Chem_ChemAtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chem_ChemAtomSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_ChemAtomSet_FindFirstChemAtomSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemAtomSet.chemAtoms

ChemAtoms 
that make up ChemAtomSet.
  @param  Chem_ChemAtomSet self
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemAtom Chem_ChemAtomSet_FindFirstChemAtom_keyval0(Chem_ChemAtomSet self)
{
  
  Chem_ChemAtom  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_ChemAtomSet_FindFirstChemAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemAtomSet.chemAtoms

ChemAtoms 
that make up ChemAtomSet.
  @param  Chem_ChemAtomSet self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemAtom Chem_ChemAtomSet_FindFirstChemAtom_keyval1(Chem_ChemAtomSet self, char * key, ApiObject value)
{
  
  Chem_ChemAtom  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_ChemAtomSet_FindFirstChemAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemAtomSet.chemAtoms

ChemAtoms 
that make up ChemAtomSet.
  @param  Chem_ChemAtomSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemAtom Chem_ChemAtomSet_FindFirstChemAtom_keyval2(Chem_ChemAtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chem_ChemAtom  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_ChemAtomSet_FindFirstChemAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemAtomSet.chemAtoms

ChemAtoms 
that make up ChemAtomSet.
  @param  Chem_ChemAtomSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemAtom Chem_ChemAtomSet_FindFirstChemAtom_keyval3(Chem_ChemAtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chem_ChemAtom  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_ChemAtomSet_FindFirstChemAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemAtomSet.chemAtoms

ChemAtoms 
that make up ChemAtomSet.
  @param  Chem_ChemAtomSet self
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
Chem_ChemAtom Chem_ChemAtomSet_FindFirstChemAtom_keyval4(Chem_ChemAtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chem_ChemAtom  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_ChemAtomSet_FindFirstChemAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.molecule.ChemComp.ChemAtomSet
  @param  Chem_ChemAtomSet self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Chem_ChemAtomSet_Get(Chem_ChemAtomSet self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Chem_ChemAtomSet self
  @returns   the result
**/
Acco_AccessObject Chem_ChemAtomSet_GetAccess(Chem_ChemAtomSet self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: method 'getAccess' is not callable");
  
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
  @param  Chem_ChemAtomSet self
  @returns   the result
**/
ApiList Chem_ChemAtomSet_GetApplicationData(Chem_ChemAtomSet self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.molecule.ChemComp.ChemAtomSet
  @param  Chem_ChemAtomSet self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Chem_ChemAtomSet Chem_ChemAtomSet_GetByKey(Chem_ChemAtomSet self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Chem_ChemAtomSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: method 'getByKey' is not callable");
  
  args = PyTuple_Pack(2, startObj, fullKey);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemAtomSet.chemAtomSet

ChemAtomSet that 
ChemAtoms are part of
  @param  Chem_ChemAtomSet self
  @returns   the result
**/
Chem_ChemAtomSet Chem_ChemAtomSet_GetChemAtomSet(Chem_ChemAtomSet self)
{
  
  Chem_ChemAtomSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemAtomSet");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: cannot find method 'getChemAtomSet'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: method 'getChemAtomSet' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemAtomSet.chemAtomSets

ChemAtomSets 
that make up ChemAtomSet
  @param  Chem_ChemAtomSet self
  @returns   the result
**/
ApiSet Chem_ChemAtomSet_GetChemAtomSets(Chem_ChemAtomSet self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemAtomSets");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: cannot find method 'getChemAtomSets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: method 'getChemAtomSets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemAtomSet.chemAtoms

ChemAtoms that make 
up ChemAtomSet.
  @param  Chem_ChemAtomSet self
  @returns   the result
**/
ApiSet Chem_ChemAtomSet_GetChemAtoms(Chem_ChemAtomSet self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemAtoms");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: cannot find method 'getChemAtoms'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: method 'getChemAtoms' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemAtomSet.chemComp

parent link
  @param  Chem_ChemAtomSet self
  @returns   the result
**/
Chem_ChemComp Chem_ChemAtomSet_GetChemComp(Chem_ChemAtomSet self)
{
  
  Chem_ChemComp obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemComp");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: cannot find method 'getChemComp'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: method 'getChemComp' is not callable");
  
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
  @param  Chem_ChemAtomSet self
  @returns   the result
**/
ApiString Chem_ChemAtomSet_GetClassName(Chem_ChemAtomSet self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemAtomSet.distCorr

Distance Restraint 
Correction (in A) applied when making restraints to the pseudoatom 
defined here.
  @param  Chem_ChemAtomSet self
  @returns   the result
**/
ApiFloat Chem_ChemAtomSet_GetDistCorr(Chem_ChemAtomSet self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDistCorr");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: cannot find method 'getDistCorr'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: method 'getDistCorr' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived attribute elementSymbol
  @param  Chem_ChemAtomSet self
  @returns   the result
**/
ApiString Chem_ChemAtomSet_GetElementSymbol(Chem_ChemAtomSet self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getElementSymbol");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: cannot find method 'getElementSymbol'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: method 'getElementSymbol' is not callable");
  
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
  @param  Chem_ChemAtomSet self
  @returns   the result
**/
ApiList Chem_ChemAtomSet_GetFieldNames(Chem_ChemAtomSet self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.molecule.ChemComp.ChemAtomSet
  @param  Chem_ChemAtomSet self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Chem_ChemAtomSet_GetFullKey(Chem_ChemAtomSet self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: method 'getFullKey' is not callable");
  
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
  @param  Chem_ChemAtomSet self
  @returns   the result
**/
ApiBoolean Chem_ChemAtomSet_GetInConstructor(Chem_ChemAtomSet self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: method 'getInConstructor' is not callable");
  
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
  @param  Chem_ChemAtomSet self
  @returns   the result
**/
ApiBoolean Chem_ChemAtomSet_GetIsDeleted(Chem_ChemAtomSet self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemAtomSet.isEquivalent

Indicates 
whether the atoms in the ChemAtomSet are chemically equivalent (set to 
true, e.g. for a methyl group), non-equivalent (set to false, e.g. for  
a methylene group or for the NH2 protons of a glutamine side chain), or 
sometimes equivalent (not set, e.g. for the HD1/HD2 protons of a a Phe 
or Tyr aromatic ting)..
  @param  Chem_ChemAtomSet self
  @returns   the result
**/
ApiBoolean Chem_ChemAtomSet_GetIsEquivalent(Chem_ChemAtomSet self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsEquivalent");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: cannot find method 'getIsEquivalent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: method 'getIsEquivalent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemAtomSet.isProchiral

Indicates whether 
the two atoms or chemAtomSets in the ChemAtomSet form a prochiral pair, 
such as the b methylene group of serine..
  @param  Chem_ChemAtomSet self
  @returns   the result
**/
ApiBoolean Chem_ChemAtomSet_GetIsProchiral(Chem_ChemAtomSet self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsProchiral");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: cannot find method 'getIsProchiral'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: method 'getIsProchiral' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.molecule.ChemComp.ChemAtomSet
  @param  Chem_ChemAtomSet self
  @returns  Local object key
**/
ApiObject Chem_ChemAtomSet_GetLocalKey(Chem_ChemAtomSet self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemAtomSet.name

Pseudo atom name.
  @param  Chem_ChemAtomSet self
  @returns   the result
**/
ApiString Chem_ChemAtomSet_GetName(Chem_ChemAtomSet self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: method 'getName' is not callable");
  
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
  @param  Chem_ChemAtomSet self
  @returns   the result
**/
ApiString Chem_ChemAtomSet_GetPackageName(Chem_ChemAtomSet self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: method 'getPackageName' is not callable");
  
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
  @param  Chem_ChemAtomSet self
  @returns   the result
**/
ApiString Chem_ChemAtomSet_GetPackageShortName(Chem_ChemAtomSet self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemAtomSet.parent

link to parent object 
- synonym for chemComp
  @param  Chem_ChemAtomSet self
  @returns   the result
**/
Chem_ChemComp Chem_ChemAtomSet_GetParent(Chem_ChemAtomSet self)
{
  
  Chem_ChemComp obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: method 'getParent' is not callable");
  
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
  @param  Chem_ChemAtomSet self
  @returns   the result
**/
ApiString Chem_ChemAtomSet_GetQualifiedName(Chem_ChemAtomSet self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: method 'getQualifiedName' is not callable");
  
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
  @param  Chem_ChemAtomSet self
  @returns   the result
**/
Impl_MemopsRoot Chem_ChemAtomSet_GetRoot(Chem_ChemAtomSet self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemAtomSet.subType

Subtype of 
ChemAtomSet, used to distinguish ChemAtomSets with the same names but 
different characteristics, to be used in diferent ChemCompVars.
  @param  Chem_ChemAtomSet self
  @returns   the result
**/
ApiInteger Chem_ChemAtomSet_GetSubType(Chem_ChemAtomSet self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSubType");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: cannot find method 'getSubType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: method 'getSubType' is not callable");
  
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
  @param  Chem_ChemAtomSet self
  @returns   the result
**/
Impl_TopObject Chem_ChemAtomSet_GetTopObject(Chem_ChemAtomSet self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.molecule.ChemComp.ChemAtomSet
  @param  Chem_ChemComp parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Chem_ChemAtomSet Chem_ChemAtomSet_Init(Chem_ChemComp parent, ApiMap attrlinks)
{
  
  return Chem_ChemComp_NewChemAtomSet(parent, attrlinks);
}

/**
  Constructor for ccp.molecule.ChemComp.ChemAtomSet
  @param  Chem_ChemComp parent
  @param  int isProchiral
  @param  char * name
  @returns  the new object
**/
Chem_ChemAtomSet Chem_ChemAtomSet_Init_reqd(Chem_ChemComp parent, int isProchiral, char * name)
{
  
  Chem_ChemAtomSet  obj;
  PyObject *attrlinks = PyDict_New();
  ApiBoolean api__isProchiral = ApiBoolean_New(isProchiral);
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "isProchiral", api__isProchiral);
  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Chem_ChemAtomSet_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__isProchiral);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemAtomSet self
  @param  Impl_ApplicationData value
**/
void *Chem_ChemAtomSet_RemoveApplicationData(Chem_ChemAtomSet self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.molecule.ChemComp.ChemAtomSet.chemAtoms

ChemAtoms that 
make up ChemAtomSet.
  @param  Chem_ChemAtomSet self
  @param  Chem_ChemAtom value
**/
void *Chem_ChemAtomSet_RemoveChemAtom(Chem_ChemAtomSet self, Chem_ChemAtom value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeChemAtom");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: cannot find method 'removeChemAtom'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: method 'removeChemAtom' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.molecule.ChemComp.ChemAtomSet.chemAtomSets

ChemAtomSets 
that make up ChemAtomSet
  @param  Chem_ChemAtomSet self
  @param  Chem_ChemAtomSet value
**/
void *Chem_ChemAtomSet_RemoveChemAtomSet(Chem_ChemAtomSet self, Chem_ChemAtomSet value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeChemAtomSet");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: cannot find method 'removeChemAtomSet'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: method 'removeChemAtomSet' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.molecule.ChemComp.ChemAtomSet
  @param  Chem_ChemAtomSet self
  @param  ApiString name
  @param  ApiObject value
**/
void *Chem_ChemAtomSet_Set(Chem_ChemAtomSet self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Chem_ChemAtomSet self
  @param  Acco_AccessObject value
**/
void *Chem_ChemAtomSet_SetAccess(Chem_ChemAtomSet self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: method 'setAccess' is not callable");
  
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
  @param  Chem_ChemAtomSet self
  @param  ApiList values
**/
void *Chem_ChemAtomSet_SetApplicationData(Chem_ChemAtomSet self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.ChemAtomSet.chemAtomSet

ChemAtomSet that 
ChemAtoms are part of
  @param  Chem_ChemAtomSet self
  @param  Chem_ChemAtomSet value
**/
void *Chem_ChemAtomSet_SetChemAtomSet(Chem_ChemAtomSet self, Chem_ChemAtomSet value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setChemAtomSet");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: cannot find method 'setChemAtomSet'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: method 'setChemAtomSet' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.ChemAtomSet.chemAtomSets

ChemAtomSets 
that make up ChemAtomSet
  @param  Chem_ChemAtomSet self
  @param  ApiSet values
**/
void *Chem_ChemAtomSet_SetChemAtomSets(Chem_ChemAtomSet self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setChemAtomSets");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: cannot find method 'setChemAtomSets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: method 'setChemAtomSets' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.ChemAtomSet.chemAtoms

ChemAtoms that make 
up ChemAtomSet.
  @param  Chem_ChemAtomSet self
  @param  ApiSet values
**/
void *Chem_ChemAtomSet_SetChemAtoms(Chem_ChemAtomSet self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setChemAtoms");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: cannot find method 'setChemAtoms'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: method 'setChemAtoms' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.ChemAtomSet.distCorr

Distance Restraint 
Correction (in A) applied when making restraints to the pseudoatom 
defined here.
  @param  Chem_ChemAtomSet self
  @param  ApiFloat value
**/
void *Chem_ChemAtomSet_SetDistCorr(Chem_ChemAtomSet self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDistCorr");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: cannot find method 'setDistCorr'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: method 'setDistCorr' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.ChemAtomSet.isEquivalent

Indicates 
whether the atoms in the ChemAtomSet are chemically equivalent (set to 
true, e.g. for a methyl group), non-equivalent (set to false, e.g. for  
a methylene group or for the NH2 protons of a glutamine side chain), or 
sometimes equivalent (not set, e.g. for the HD1/HD2 protons of a a Phe 
or Tyr aromatic ting)..
  @param  Chem_ChemAtomSet self
  @param  ApiBoolean value
**/
void *Chem_ChemAtomSet_SetIsEquivalent(Chem_ChemAtomSet self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsEquivalent");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: cannot find method 'setIsEquivalent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: method 'setIsEquivalent' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.ChemAtomSet.isProchiral

Indicates whether 
the two atoms or chemAtomSets in the ChemAtomSet form a prochiral pair, 
such as the b methylene group of serine..
  @param  Chem_ChemAtomSet self
  @param  ApiBoolean value
**/
void *Chem_ChemAtomSet_SetIsProchiral(Chem_ChemAtomSet self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsProchiral");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: cannot find method 'setIsProchiral'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: method 'setIsProchiral' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.ChemAtomSet.name

Pseudo atom name.
  @param  Chem_ChemAtomSet self
  @param  ApiString value
**/
void *Chem_ChemAtomSet_SetName(Chem_ChemAtomSet self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.ChemAtomSet.subType

Subtype of 
ChemAtomSet, used to distinguish ChemAtomSets with the same names but 
different characteristics, to be used in diferent ChemCompVars.
  @param  Chem_ChemAtomSet self
  @param  ApiInteger value
**/
void *Chem_ChemAtomSet_SetSubType(Chem_ChemAtomSet self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSubType");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: cannot find method 'setSubType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: method 'setSubType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.ChemComp.ChemAtomSet.chemAtomSets

ChemAtomSets 
that make up ChemAtomSet
  @param  Chem_ChemAtomSet self
  @returns   the result
**/
ApiList Chem_ChemAtomSet_SortedChemAtomSets(Chem_ChemAtomSet self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChemAtomSets");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: cannot find method 'sortedChemAtomSets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: method 'sortedChemAtomSets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.ChemComp.ChemAtomSet.chemAtoms

ChemAtoms that 
make up ChemAtomSet.
  @param  Chem_ChemAtomSet self
  @returns   the result
**/
ApiList Chem_ChemAtomSet_SortedChemAtoms(Chem_ChemAtomSet self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChemAtoms");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: cannot find method 'sortedChemAtoms'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtomSet: method 'sortedChemAtoms' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
