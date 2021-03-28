
#include "ccp.h"

/*
  ChemComp with a given chain location (for polymers) or sybstitution/lin king pattern (for non-polymers) and a given topological variant. Topological variants are e.g. protonation states, and in general topological variations that can change over time for a given molecule. For Polymers topological variations (defined through the descriptor attribute) also include linking patterns in addition to those that make up the linear polymer links.
  
  A Polymer ChemComp is any ChemComp with at least one ChemCompVar with  linking 'start', 'middle', or 'end'.  
  If linking is 'start', there must be a 'next' link but no 'prev' link
  if linking is 'end' there must be a 'prev' link but no 'next' link
  if linking is 'middle' there must be both a 'next' and 'a prev'
  if linking is neither there must be neither a 'next' nor a 'prev' link
  if linking is 'none' and the ChemComp is not a linear polymer, there must be no links at all.
  If there are no links, liking must be 'none'
  
  The relevant constraints are placed on ChemCompVar and LinkEnd.
*/

/* package ccp.api.molecule.ChemComp */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemCompVar self
  @param  Impl_ApplicationData value
**/
void *Chem_ChemCompVar_AddApplicationData(Chem_ChemCompVar self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.molecule.ChemComp.ChemCompVar.chemAtoms

AbstractChemAtoms 
making up ChemCompVar
  @param  Chem_ChemCompVar self
  @param  Chem_AbstractChemAtom value
**/
void *Chem_ChemCompVar_AddChemAtom(Chem_ChemCompVar self, Chem_AbstractChemAtom value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addChemAtom");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'addChemAtom'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'addChemAtom' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.molecule.ChemComp.ChemCompVar.specificSysNames

Systematic 
names that are valid for this ChemCompVar but not for all others. In 
addition to the specific ChemCompSysNames in this link, any 
ChemCompSysName that is not linked to specific ChemCompVars is valid for 
all ChemCompVars. Each ChemCompVar can have only one ChemCompSysName 
within a given naming system.
  @param  Chem_ChemCompVar self
  @param  Chem_ChemCompSysName value
**/
void *Chem_ChemCompVar_AddSpecificSysName(Chem_ChemCompVar self, Chem_ChemCompSysName value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addSpecificSysName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'addSpecificSysName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'addSpecificSysName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.molecule.ChemComp.ChemCompVar
  @param  Chem_ChemCompVar self
  @param  ApiBoolean complete
**/
void *Chem_ChemCompVar_CheckAllValid(Chem_ChemCompVar self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.molecule.ChemComp.ChemCompVar
  @param  Chem_ChemCompVar self
  @param  ApiBoolean complete
**/
void *Chem_ChemCompVar_CheckValid(Chem_ChemCompVar self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'checkValid' is not callable");
  
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
  @param  Chem_ChemCompVar self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_ChemCompVar_FindAllApplicationData(Chem_ChemCompVar self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'findAllApplicationData' is not callable");
  
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
  @param  Chem_ChemCompVar self
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_ChemCompVar_FindAllApplicationData_keyval0(Chem_ChemCompVar self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_ChemCompVar_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemCompVar self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_ChemCompVar_FindAllApplicationData_keyval1(Chem_ChemCompVar self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_ChemCompVar_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_ChemCompVar_FindAllApplicationData_keyval2(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_ChemCompVar_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_ChemCompVar_FindAllApplicationData_keyval3(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_ChemCompVar_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemCompVar self
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
ApiList Chem_ChemCompVar_FindAllApplicationData_keyval4(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_ChemCompVar_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.chemAngles

chemAngles 
that lie within ChemCompVar
  @param  Chem_ChemCompVar self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemCompVar_FindAllChemAngles(Chem_ChemCompVar self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChemAngles");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'findAllChemAngles'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'findAllChemAngles' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.chemAngles

chemAngles 
that lie within ChemCompVar
  @param  Chem_ChemCompVar self
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemCompVar_FindAllChemAngles_keyval0(Chem_ChemCompVar self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_ChemCompVar_FindAllChemAngles(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.chemAngles

chemAngles 
that lie within ChemCompVar
  @param  Chem_ChemCompVar self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemCompVar_FindAllChemAngles_keyval1(Chem_ChemCompVar self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_ChemCompVar_FindAllChemAngles(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.chemAngles

chemAngles 
that lie within ChemCompVar
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemCompVar_FindAllChemAngles_keyval2(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_ChemCompVar_FindAllChemAngles(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.chemAngles

chemAngles 
that lie within ChemCompVar
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemCompVar_FindAllChemAngles_keyval3(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_ChemCompVar_FindAllChemAngles(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.chemAngles

chemAngles 
that lie within ChemCompVar
  @param  Chem_ChemCompVar self
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
ApiSet Chem_ChemCompVar_FindAllChemAngles_keyval4(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_ChemCompVar_FindAllChemAngles(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.chemAtomSets

ChemAtomSets 
contained in ChemCompVar. The setsa are
  @param  Chem_ChemCompVar self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemCompVar_FindAllChemAtomSets(Chem_ChemCompVar self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChemAtomSets");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'findAllChemAtomSets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'findAllChemAtomSets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.chemAtomSets

ChemAtomSets 
contained in ChemCompVar. The setsa are
  @param  Chem_ChemCompVar self
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemCompVar_FindAllChemAtomSets_keyval0(Chem_ChemCompVar self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_ChemCompVar_FindAllChemAtomSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.chemAtomSets

ChemAtomSets 
contained in ChemCompVar. The setsa are
  @param  Chem_ChemCompVar self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemCompVar_FindAllChemAtomSets_keyval1(Chem_ChemCompVar self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_ChemCompVar_FindAllChemAtomSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.chemAtomSets

ChemAtomSets 
contained in ChemCompVar. The setsa are
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemCompVar_FindAllChemAtomSets_keyval2(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_ChemCompVar_FindAllChemAtomSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.chemAtomSets

ChemAtomSets 
contained in ChemCompVar. The setsa are
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemCompVar_FindAllChemAtomSets_keyval3(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_ChemCompVar_FindAllChemAtomSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.chemAtomSets

ChemAtomSets 
contained in ChemCompVar. The setsa are
  @param  Chem_ChemCompVar self
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
ApiSet Chem_ChemCompVar_FindAllChemAtomSets_keyval4(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_ChemCompVar_FindAllChemAtomSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.ChemCompVar.chemAtoms

AbstractChemAtoms making up 
ChemCompVar
  @param  Chem_ChemCompVar self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemCompVar_FindAllChemAtoms(Chem_ChemCompVar self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChemAtoms");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'findAllChemAtoms'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'findAllChemAtoms' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.ChemCompVar.chemAtoms

AbstractChemAtoms making up 
ChemCompVar
  @param  Chem_ChemCompVar self
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemCompVar_FindAllChemAtoms_keyval0(Chem_ChemCompVar self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_ChemCompVar_FindAllChemAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.ChemCompVar.chemAtoms

AbstractChemAtoms making up 
ChemCompVar
  @param  Chem_ChemCompVar self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemCompVar_FindAllChemAtoms_keyval1(Chem_ChemCompVar self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_ChemCompVar_FindAllChemAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.ChemCompVar.chemAtoms

AbstractChemAtoms making up 
ChemCompVar
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemCompVar_FindAllChemAtoms_keyval2(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_ChemCompVar_FindAllChemAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.ChemCompVar.chemAtoms

AbstractChemAtoms making up 
ChemCompVar
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemCompVar_FindAllChemAtoms_keyval3(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_ChemCompVar_FindAllChemAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.ChemCompVar.chemAtoms

AbstractChemAtoms making up 
ChemCompVar
  @param  Chem_ChemCompVar self
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
ApiSet Chem_ChemCompVar_FindAllChemAtoms_keyval4(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_ChemCompVar_FindAllChemAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.chemBonds

Bonds contained 
in ChemCompVar
  @param  Chem_ChemCompVar self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemCompVar_FindAllChemBonds(Chem_ChemCompVar self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChemBonds");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'findAllChemBonds'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'findAllChemBonds' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.chemBonds

Bonds contained 
in ChemCompVar
  @param  Chem_ChemCompVar self
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemCompVar_FindAllChemBonds_keyval0(Chem_ChemCompVar self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_ChemCompVar_FindAllChemBonds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.chemBonds

Bonds contained 
in ChemCompVar
  @param  Chem_ChemCompVar self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemCompVar_FindAllChemBonds_keyval1(Chem_ChemCompVar self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_ChemCompVar_FindAllChemBonds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.chemBonds

Bonds contained 
in ChemCompVar
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemCompVar_FindAllChemBonds_keyval2(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_ChemCompVar_FindAllChemBonds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.chemBonds

Bonds contained 
in ChemCompVar
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemCompVar_FindAllChemBonds_keyval3(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_ChemCompVar_FindAllChemBonds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.chemBonds

Bonds contained 
in ChemCompVar
  @param  Chem_ChemCompVar self
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
ApiSet Chem_ChemCompVar_FindAllChemBonds_keyval4(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_ChemCompVar_FindAllChemBonds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.chemCompSysNames

All 
chemCompSysNames relevant to ChemCompVar
  @param  Chem_ChemCompVar self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemCompVar_FindAllChemCompSysNames(Chem_ChemCompVar self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChemCompSysNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'findAllChemCompSysNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'findAllChemCompSysNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.chemCompSysNames

All 
chemCompSysNames relevant to ChemCompVar
  @param  Chem_ChemCompVar self
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemCompVar_FindAllChemCompSysNames_keyval0(Chem_ChemCompVar self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_ChemCompVar_FindAllChemCompSysNames(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.chemCompSysNames

All 
chemCompSysNames relevant to ChemCompVar
  @param  Chem_ChemCompVar self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemCompVar_FindAllChemCompSysNames_keyval1(Chem_ChemCompVar self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_ChemCompVar_FindAllChemCompSysNames(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.chemCompSysNames

All 
chemCompSysNames relevant to ChemCompVar
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemCompVar_FindAllChemCompSysNames_keyval2(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_ChemCompVar_FindAllChemCompSysNames(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.chemCompSysNames

All 
chemCompSysNames relevant to ChemCompVar
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemCompVar_FindAllChemCompSysNames_keyval3(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_ChemCompVar_FindAllChemCompSysNames(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.chemCompSysNames

All 
chemCompSysNames relevant to ChemCompVar
  @param  Chem_ChemCompVar self
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
ApiSet Chem_ChemCompVar_FindAllChemCompSysNames_keyval4(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_ChemCompVar_FindAllChemCompSysNames(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.chemTorsions

chemTorsions 
that lie within ChemCompVar
  @param  Chem_ChemCompVar self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemCompVar_FindAllChemTorsions(Chem_ChemCompVar self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChemTorsions");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'findAllChemTorsions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'findAllChemTorsions' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.chemTorsions

chemTorsions 
that lie within ChemCompVar
  @param  Chem_ChemCompVar self
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemCompVar_FindAllChemTorsions_keyval0(Chem_ChemCompVar self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_ChemCompVar_FindAllChemTorsions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.chemTorsions

chemTorsions 
that lie within ChemCompVar
  @param  Chem_ChemCompVar self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemCompVar_FindAllChemTorsions_keyval1(Chem_ChemCompVar self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_ChemCompVar_FindAllChemTorsions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.chemTorsions

chemTorsions 
that lie within ChemCompVar
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemCompVar_FindAllChemTorsions_keyval2(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_ChemCompVar_FindAllChemTorsions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.chemTorsions

chemTorsions 
that lie within ChemCompVar
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemCompVar_FindAllChemTorsions_keyval3(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_ChemCompVar_FindAllChemTorsions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.chemTorsions

chemTorsions 
that lie within ChemCompVar
  @param  Chem_ChemCompVar self
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
ApiSet Chem_ChemCompVar_FindAllChemTorsions_keyval4(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_ChemCompVar_FindAllChemTorsions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.linkEnds

linkEnds 
available to ChemCompVar. A LinkEnd belongs to a ChemCompVar if and only 
if the LinkEnd.boundLinkAtom belongs to the ChemCompVAr.
  @param  Chem_ChemCompVar self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemCompVar_FindAllLinkEnds(Chem_ChemCompVar self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllLinkEnds");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'findAllLinkEnds'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'findAllLinkEnds' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.linkEnds

linkEnds 
available to ChemCompVar. A LinkEnd belongs to a ChemCompVar if and only 
if the LinkEnd.boundLinkAtom belongs to the ChemCompVAr.
  @param  Chem_ChemCompVar self
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemCompVar_FindAllLinkEnds_keyval0(Chem_ChemCompVar self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_ChemCompVar_FindAllLinkEnds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.linkEnds

linkEnds 
available to ChemCompVar. A LinkEnd belongs to a ChemCompVar if and only 
if the LinkEnd.boundLinkAtom belongs to the ChemCompVAr.
  @param  Chem_ChemCompVar self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemCompVar_FindAllLinkEnds_keyval1(Chem_ChemCompVar self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_ChemCompVar_FindAllLinkEnds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.linkEnds

linkEnds 
available to ChemCompVar. A LinkEnd belongs to a ChemCompVar if and only 
if the LinkEnd.boundLinkAtom belongs to the ChemCompVAr.
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemCompVar_FindAllLinkEnds_keyval2(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_ChemCompVar_FindAllLinkEnds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.linkEnds

linkEnds 
available to ChemCompVar. A LinkEnd belongs to a ChemCompVar if and only 
if the LinkEnd.boundLinkAtom belongs to the ChemCompVAr.
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemCompVar_FindAllLinkEnds_keyval3(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_ChemCompVar_FindAllLinkEnds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemCompVar.linkEnds

linkEnds 
available to ChemCompVar. A LinkEnd belongs to a ChemCompVar if and only 
if the LinkEnd.boundLinkAtom belongs to the ChemCompVAr.
  @param  Chem_ChemCompVar self
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
ApiSet Chem_ChemCompVar_FindAllLinkEnds_keyval4(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_ChemCompVar_FindAllLinkEnds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.ChemCompVar.specificSysNames

Systematic names 
that are valid for this ChemCompVar but not for all others. In addition 
to the specific ChemCompSysNames in this link, any ChemCompSysName that 
is not linked to specific ChemCompVars is valid for all ChemCompVars. 
Each ChemCompVar can have only one ChemCompSysName within a given naming 
system.
  @param  Chem_ChemCompVar self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemCompVar_FindAllSpecificSysNames(Chem_ChemCompVar self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllSpecificSysNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'findAllSpecificSysNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'findAllSpecificSysNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.ChemCompVar.specificSysNames

Systematic names 
that are valid for this ChemCompVar but not for all others. In addition 
to the specific ChemCompSysNames in this link, any ChemCompSysName that 
is not linked to specific ChemCompVars is valid for all ChemCompVars. 
Each ChemCompVar can have only one ChemCompSysName within a given naming 
system.
  @param  Chem_ChemCompVar self
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemCompVar_FindAllSpecificSysNames_keyval0(Chem_ChemCompVar self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_ChemCompVar_FindAllSpecificSysNames(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.ChemCompVar.specificSysNames

Systematic names 
that are valid for this ChemCompVar but not for all others. In addition 
to the specific ChemCompSysNames in this link, any ChemCompSysName that 
is not linked to specific ChemCompVars is valid for all ChemCompVars. 
Each ChemCompVar can have only one ChemCompSysName within a given naming 
system.
  @param  Chem_ChemCompVar self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemCompVar_FindAllSpecificSysNames_keyval1(Chem_ChemCompVar self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_ChemCompVar_FindAllSpecificSysNames(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.ChemCompVar.specificSysNames

Systematic names 
that are valid for this ChemCompVar but not for all others. In addition 
to the specific ChemCompSysNames in this link, any ChemCompSysName that 
is not linked to specific ChemCompVars is valid for all ChemCompVars. 
Each ChemCompVar can have only one ChemCompSysName within a given naming 
system.
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemCompVar_FindAllSpecificSysNames_keyval2(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_ChemCompVar_FindAllSpecificSysNames(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.ChemCompVar.specificSysNames

Systematic names 
that are valid for this ChemCompVar but not for all others. In addition 
to the specific ChemCompSysNames in this link, any ChemCompSysName that 
is not linked to specific ChemCompVars is valid for all ChemCompVars. 
Each ChemCompVar can have only one ChemCompSysName within a given naming 
system.
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemCompVar_FindAllSpecificSysNames_keyval3(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_ChemCompVar_FindAllSpecificSysNames(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.ChemCompVar.specificSysNames

Systematic names 
that are valid for this ChemCompVar but not for all others. In addition 
to the specific ChemCompSysNames in this link, any ChemCompSysName that 
is not linked to specific ChemCompVars is valid for all ChemCompVars. 
Each ChemCompVar can have only one ChemCompSysName within a given naming 
system.
  @param  Chem_ChemCompVar self
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
ApiSet Chem_ChemCompVar_FindAllSpecificSysNames_keyval4(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_ChemCompVar_FindAllSpecificSysNames(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemCompVar self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chem_ChemCompVar_FindFirstApplicationData(Chem_ChemCompVar self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'findFirstApplicationData' is not callable");
  
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
  @param  Chem_ChemCompVar self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chem_ChemCompVar_FindFirstApplicationData_keyval0(Chem_ChemCompVar self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_ChemCompVar_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemCompVar self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chem_ChemCompVar_FindFirstApplicationData_keyval1(Chem_ChemCompVar self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_ChemCompVar_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chem_ChemCompVar_FindFirstApplicationData_keyval2(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_ChemCompVar_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chem_ChemCompVar_FindFirstApplicationData_keyval3(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_ChemCompVar_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemCompVar self
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
Impl_ApplicationData Chem_ChemCompVar_FindFirstApplicationData_keyval4(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_ChemCompVar_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemCompVar.chemAngles

chemAngles 
that lie within ChemCompVar
  @param  Chem_ChemCompVar self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemAngle Chem_ChemCompVar_FindFirstChemAngle(Chem_ChemCompVar self, ApiMap conditions)
{
  
  Chem_ChemAngle obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChemAngle");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'findFirstChemAngle'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'findFirstChemAngle' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemCompVar.chemAngles

chemAngles 
that lie within ChemCompVar
  @param  Chem_ChemCompVar self
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemAngle Chem_ChemCompVar_FindFirstChemAngle_keyval0(Chem_ChemCompVar self)
{
  
  Chem_ChemAngle  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_ChemCompVar_FindFirstChemAngle(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemCompVar.chemAngles

chemAngles 
that lie within ChemCompVar
  @param  Chem_ChemCompVar self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemAngle Chem_ChemCompVar_FindFirstChemAngle_keyval1(Chem_ChemCompVar self, char * key, ApiObject value)
{
  
  Chem_ChemAngle  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_ChemCompVar_FindFirstChemAngle(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemCompVar.chemAngles

chemAngles 
that lie within ChemCompVar
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemAngle Chem_ChemCompVar_FindFirstChemAngle_keyval2(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chem_ChemAngle  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_ChemCompVar_FindFirstChemAngle(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemCompVar.chemAngles

chemAngles 
that lie within ChemCompVar
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemAngle Chem_ChemCompVar_FindFirstChemAngle_keyval3(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chem_ChemAngle  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_ChemCompVar_FindFirstChemAngle(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemCompVar.chemAngles

chemAngles 
that lie within ChemCompVar
  @param  Chem_ChemCompVar self
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
Chem_ChemAngle Chem_ChemCompVar_FindFirstChemAngle_keyval4(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chem_ChemAngle  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_ChemCompVar_FindFirstChemAngle(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemCompVar.chemAtoms

AbstractChemAtoms making up 
ChemCompVar
  @param  Chem_ChemCompVar self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chem_AbstractChemAtom Chem_ChemCompVar_FindFirstChemAtom(Chem_ChemCompVar self, ApiMap conditions)
{
  
  Chem_AbstractChemAtom obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChemAtom");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'findFirstChemAtom'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'findFirstChemAtom' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemCompVar.chemAtomSets

ChemAtomSets contained 
in ChemCompVar. The setsa are
  @param  Chem_ChemCompVar self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemAtomSet Chem_ChemCompVar_FindFirstChemAtomSet(Chem_ChemCompVar self, ApiMap conditions)
{
  
  Chem_ChemAtomSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChemAtomSet");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'findFirstChemAtomSet'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'findFirstChemAtomSet' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemCompVar.chemAtomSets

ChemAtomSets contained 
in ChemCompVar. The setsa are
  @param  Chem_ChemCompVar self
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemAtomSet Chem_ChemCompVar_FindFirstChemAtomSet_keyval0(Chem_ChemCompVar self)
{
  
  Chem_ChemAtomSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_ChemCompVar_FindFirstChemAtomSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemCompVar.chemAtomSets

ChemAtomSets contained 
in ChemCompVar. The setsa are
  @param  Chem_ChemCompVar self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemAtomSet Chem_ChemCompVar_FindFirstChemAtomSet_keyval1(Chem_ChemCompVar self, char * key, ApiObject value)
{
  
  Chem_ChemAtomSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_ChemCompVar_FindFirstChemAtomSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemCompVar.chemAtomSets

ChemAtomSets contained 
in ChemCompVar. The setsa are
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemAtomSet Chem_ChemCompVar_FindFirstChemAtomSet_keyval2(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chem_ChemAtomSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_ChemCompVar_FindFirstChemAtomSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemCompVar.chemAtomSets

ChemAtomSets contained 
in ChemCompVar. The setsa are
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemAtomSet Chem_ChemCompVar_FindFirstChemAtomSet_keyval3(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chem_ChemAtomSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_ChemCompVar_FindFirstChemAtomSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemCompVar.chemAtomSets

ChemAtomSets contained 
in ChemCompVar. The setsa are
  @param  Chem_ChemCompVar self
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
Chem_ChemAtomSet Chem_ChemCompVar_FindFirstChemAtomSet_keyval4(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chem_ChemAtomSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_ChemCompVar_FindFirstChemAtomSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemCompVar.chemAtoms

AbstractChemAtoms making up 
ChemCompVar
  @param  Chem_ChemCompVar self
  @returns  the first value that satisfies the conditions 
**/
Chem_AbstractChemAtom Chem_ChemCompVar_FindFirstChemAtom_keyval0(Chem_ChemCompVar self)
{
  
  Chem_AbstractChemAtom  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_ChemCompVar_FindFirstChemAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemCompVar.chemAtoms

AbstractChemAtoms making up 
ChemCompVar
  @param  Chem_ChemCompVar self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chem_AbstractChemAtom Chem_ChemCompVar_FindFirstChemAtom_keyval1(Chem_ChemCompVar self, char * key, ApiObject value)
{
  
  Chem_AbstractChemAtom  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_ChemCompVar_FindFirstChemAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemCompVar.chemAtoms

AbstractChemAtoms making up 
ChemCompVar
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chem_AbstractChemAtom Chem_ChemCompVar_FindFirstChemAtom_keyval2(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chem_AbstractChemAtom  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_ChemCompVar_FindFirstChemAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemCompVar.chemAtoms

AbstractChemAtoms making up 
ChemCompVar
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chem_AbstractChemAtom Chem_ChemCompVar_FindFirstChemAtom_keyval3(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chem_AbstractChemAtom  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_ChemCompVar_FindFirstChemAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemCompVar.chemAtoms

AbstractChemAtoms making up 
ChemCompVar
  @param  Chem_ChemCompVar self
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
Chem_AbstractChemAtom Chem_ChemCompVar_FindFirstChemAtom_keyval4(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chem_AbstractChemAtom  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_ChemCompVar_FindFirstChemAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemCompVar.chemBonds

Bonds 
contained in ChemCompVar
  @param  Chem_ChemCompVar self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemBond Chem_ChemCompVar_FindFirstChemBond(Chem_ChemCompVar self, ApiMap conditions)
{
  
  Chem_ChemBond obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChemBond");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'findFirstChemBond'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'findFirstChemBond' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemCompVar.chemBonds

Bonds 
contained in ChemCompVar
  @param  Chem_ChemCompVar self
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemBond Chem_ChemCompVar_FindFirstChemBond_keyval0(Chem_ChemCompVar self)
{
  
  Chem_ChemBond  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_ChemCompVar_FindFirstChemBond(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemCompVar.chemBonds

Bonds 
contained in ChemCompVar
  @param  Chem_ChemCompVar self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemBond Chem_ChemCompVar_FindFirstChemBond_keyval1(Chem_ChemCompVar self, char * key, ApiObject value)
{
  
  Chem_ChemBond  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_ChemCompVar_FindFirstChemBond(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemCompVar.chemBonds

Bonds 
contained in ChemCompVar
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemBond Chem_ChemCompVar_FindFirstChemBond_keyval2(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chem_ChemBond  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_ChemCompVar_FindFirstChemBond(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemCompVar.chemBonds

Bonds 
contained in ChemCompVar
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemBond Chem_ChemCompVar_FindFirstChemBond_keyval3(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chem_ChemBond  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_ChemCompVar_FindFirstChemBond(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemCompVar.chemBonds

Bonds 
contained in ChemCompVar
  @param  Chem_ChemCompVar self
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
Chem_ChemBond Chem_ChemCompVar_FindFirstChemBond_keyval4(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chem_ChemBond  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_ChemCompVar_FindFirstChemBond(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemCompVar.chemCompSysNames

All 
chemCompSysNames relevant to ChemCompVar
  @param  Chem_ChemCompVar self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemCompSysName Chem_ChemCompVar_FindFirstChemCompSysName(Chem_ChemCompVar self, ApiMap conditions)
{
  
  Chem_ChemCompSysName obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChemCompSysName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'findFirstChemCompSysName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'findFirstChemCompSysName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemCompVar.chemCompSysNames

All 
chemCompSysNames relevant to ChemCompVar
  @param  Chem_ChemCompVar self
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemCompSysName Chem_ChemCompVar_FindFirstChemCompSysName_keyval0(Chem_ChemCompVar self)
{
  
  Chem_ChemCompSysName  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_ChemCompVar_FindFirstChemCompSysName(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemCompVar.chemCompSysNames

All 
chemCompSysNames relevant to ChemCompVar
  @param  Chem_ChemCompVar self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemCompSysName Chem_ChemCompVar_FindFirstChemCompSysName_keyval1(Chem_ChemCompVar self, char * key, ApiObject value)
{
  
  Chem_ChemCompSysName  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_ChemCompVar_FindFirstChemCompSysName(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemCompVar.chemCompSysNames

All 
chemCompSysNames relevant to ChemCompVar
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemCompSysName Chem_ChemCompVar_FindFirstChemCompSysName_keyval2(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chem_ChemCompSysName  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_ChemCompVar_FindFirstChemCompSysName(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemCompVar.chemCompSysNames

All 
chemCompSysNames relevant to ChemCompVar
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemCompSysName Chem_ChemCompVar_FindFirstChemCompSysName_keyval3(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chem_ChemCompSysName  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_ChemCompVar_FindFirstChemCompSysName(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemCompVar.chemCompSysNames

All 
chemCompSysNames relevant to ChemCompVar
  @param  Chem_ChemCompVar self
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
Chem_ChemCompSysName Chem_ChemCompVar_FindFirstChemCompSysName_keyval4(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chem_ChemCompSysName  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_ChemCompVar_FindFirstChemCompSysName(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemCompVar.chemTorsions

chemTorsions that lie 
within ChemCompVar
  @param  Chem_ChemCompVar self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemTorsion Chem_ChemCompVar_FindFirstChemTorsion(Chem_ChemCompVar self, ApiMap conditions)
{
  
  Chem_ChemTorsion obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChemTorsion");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'findFirstChemTorsion'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'findFirstChemTorsion' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemCompVar.chemTorsions

chemTorsions that lie 
within ChemCompVar
  @param  Chem_ChemCompVar self
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemTorsion Chem_ChemCompVar_FindFirstChemTorsion_keyval0(Chem_ChemCompVar self)
{
  
  Chem_ChemTorsion  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_ChemCompVar_FindFirstChemTorsion(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemCompVar.chemTorsions

chemTorsions that lie 
within ChemCompVar
  @param  Chem_ChemCompVar self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemTorsion Chem_ChemCompVar_FindFirstChemTorsion_keyval1(Chem_ChemCompVar self, char * key, ApiObject value)
{
  
  Chem_ChemTorsion  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_ChemCompVar_FindFirstChemTorsion(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemCompVar.chemTorsions

chemTorsions that lie 
within ChemCompVar
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemTorsion Chem_ChemCompVar_FindFirstChemTorsion_keyval2(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chem_ChemTorsion  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_ChemCompVar_FindFirstChemTorsion(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemCompVar.chemTorsions

chemTorsions that lie 
within ChemCompVar
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemTorsion Chem_ChemCompVar_FindFirstChemTorsion_keyval3(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chem_ChemTorsion  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_ChemCompVar_FindFirstChemTorsion(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemCompVar.chemTorsions

chemTorsions that lie 
within ChemCompVar
  @param  Chem_ChemCompVar self
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
Chem_ChemTorsion Chem_ChemCompVar_FindFirstChemTorsion_keyval4(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chem_ChemTorsion  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_ChemCompVar_FindFirstChemTorsion(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemCompVar.linkEnds

linkEnds 
available to ChemCompVar. A LinkEnd belongs to a ChemCompVar if and only 
if the LinkEnd.boundLinkAtom belongs to the ChemCompVAr.
  @param  Chem_ChemCompVar self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chem_LinkEnd Chem_ChemCompVar_FindFirstLinkEnd(Chem_ChemCompVar self, ApiMap conditions)
{
  
  Chem_LinkEnd obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstLinkEnd");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'findFirstLinkEnd'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'findFirstLinkEnd' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemCompVar.linkEnds

linkEnds 
available to ChemCompVar. A LinkEnd belongs to a ChemCompVar if and only 
if the LinkEnd.boundLinkAtom belongs to the ChemCompVAr.
  @param  Chem_ChemCompVar self
  @returns  the first value that satisfies the conditions 
**/
Chem_LinkEnd Chem_ChemCompVar_FindFirstLinkEnd_keyval0(Chem_ChemCompVar self)
{
  
  Chem_LinkEnd  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_ChemCompVar_FindFirstLinkEnd(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemCompVar.linkEnds

linkEnds 
available to ChemCompVar. A LinkEnd belongs to a ChemCompVar if and only 
if the LinkEnd.boundLinkAtom belongs to the ChemCompVAr.
  @param  Chem_ChemCompVar self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chem_LinkEnd Chem_ChemCompVar_FindFirstLinkEnd_keyval1(Chem_ChemCompVar self, char * key, ApiObject value)
{
  
  Chem_LinkEnd  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_ChemCompVar_FindFirstLinkEnd(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemCompVar.linkEnds

linkEnds 
available to ChemCompVar. A LinkEnd belongs to a ChemCompVar if and only 
if the LinkEnd.boundLinkAtom belongs to the ChemCompVAr.
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chem_LinkEnd Chem_ChemCompVar_FindFirstLinkEnd_keyval2(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chem_LinkEnd  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_ChemCompVar_FindFirstLinkEnd(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemCompVar.linkEnds

linkEnds 
available to ChemCompVar. A LinkEnd belongs to a ChemCompVar if and only 
if the LinkEnd.boundLinkAtom belongs to the ChemCompVAr.
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chem_LinkEnd Chem_ChemCompVar_FindFirstLinkEnd_keyval3(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chem_LinkEnd  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_ChemCompVar_FindFirstLinkEnd(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemCompVar.linkEnds

linkEnds 
available to ChemCompVar. A LinkEnd belongs to a ChemCompVar if and only 
if the LinkEnd.boundLinkAtom belongs to the ChemCompVAr.
  @param  Chem_ChemCompVar self
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
Chem_LinkEnd Chem_ChemCompVar_FindFirstLinkEnd_keyval4(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chem_LinkEnd  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_ChemCompVar_FindFirstLinkEnd(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemCompVar.specificSysNames

Systematic names 
that are valid for this ChemCompVar but not for all others. In addition 
to the specific ChemCompSysNames in this link, any ChemCompSysName that 
is not linked to specific ChemCompVars is valid for all ChemCompVars. 
Each ChemCompVar can have only one ChemCompSysName within a given naming 
system.
  @param  Chem_ChemCompVar self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemCompSysName Chem_ChemCompVar_FindFirstSpecificSysName(Chem_ChemCompVar self, ApiMap conditions)
{
  
  Chem_ChemCompSysName obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstSpecificSysName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'findFirstSpecificSysName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'findFirstSpecificSysName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemCompVar.specificSysNames

Systematic names 
that are valid for this ChemCompVar but not for all others. In addition 
to the specific ChemCompSysNames in this link, any ChemCompSysName that 
is not linked to specific ChemCompVars is valid for all ChemCompVars. 
Each ChemCompVar can have only one ChemCompSysName within a given naming 
system.
  @param  Chem_ChemCompVar self
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemCompSysName Chem_ChemCompVar_FindFirstSpecificSysName_keyval0(Chem_ChemCompVar self)
{
  
  Chem_ChemCompSysName  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_ChemCompVar_FindFirstSpecificSysName(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemCompVar.specificSysNames

Systematic names 
that are valid for this ChemCompVar but not for all others. In addition 
to the specific ChemCompSysNames in this link, any ChemCompSysName that 
is not linked to specific ChemCompVars is valid for all ChemCompVars. 
Each ChemCompVar can have only one ChemCompSysName within a given naming 
system.
  @param  Chem_ChemCompVar self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemCompSysName Chem_ChemCompVar_FindFirstSpecificSysName_keyval1(Chem_ChemCompVar self, char * key, ApiObject value)
{
  
  Chem_ChemCompSysName  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_ChemCompVar_FindFirstSpecificSysName(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemCompVar.specificSysNames

Systematic names 
that are valid for this ChemCompVar but not for all others. In addition 
to the specific ChemCompSysNames in this link, any ChemCompSysName that 
is not linked to specific ChemCompVars is valid for all ChemCompVars. 
Each ChemCompVar can have only one ChemCompSysName within a given naming 
system.
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemCompSysName Chem_ChemCompVar_FindFirstSpecificSysName_keyval2(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chem_ChemCompSysName  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_ChemCompVar_FindFirstSpecificSysName(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemCompVar.specificSysNames

Systematic names 
that are valid for this ChemCompVar but not for all others. In addition 
to the specific ChemCompSysNames in this link, any ChemCompSysName that 
is not linked to specific ChemCompVars is valid for all ChemCompVars. 
Each ChemCompVar can have only one ChemCompSysName within a given naming 
system.
  @param  Chem_ChemCompVar self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemCompSysName Chem_ChemCompVar_FindFirstSpecificSysName_keyval3(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chem_ChemCompSysName  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_ChemCompVar_FindFirstSpecificSysName(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemCompVar.specificSysNames

Systematic names 
that are valid for this ChemCompVar but not for all others. In addition 
to the specific ChemCompSysNames in this link, any ChemCompSysName that 
is not linked to specific ChemCompVars is valid for all ChemCompVars. 
Each ChemCompVar can have only one ChemCompSysName within a given naming 
system.
  @param  Chem_ChemCompVar self
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
Chem_ChemCompSysName Chem_ChemCompVar_FindFirstSpecificSysName_keyval4(Chem_ChemCompVar self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chem_ChemCompSysName  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_ChemCompVar_FindFirstSpecificSysName(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.molecule.ChemComp.ChemCompVar
  @param  Chem_ChemCompVar self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Chem_ChemCompVar_Get(Chem_ChemCompVar self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Chem_ChemCompVar self
  @returns   the result
**/
Acco_AccessObject Chem_ChemCompVar_GetAccess(Chem_ChemCompVar self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'getAccess' is not callable");
  
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
  @param  Chem_ChemCompVar self
  @returns   the result
**/
Acco_AccessObject Chem_ChemCompVar_GetActiveAccess(Chem_ChemCompVar self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'getActiveAccess' is not callable");
  
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
  @param  Chem_ChemCompVar self
  @returns   the result
**/
ApiList Chem_ChemCompVar_GetApplicationData(Chem_ChemCompVar self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.molecule.ChemComp.ChemCompVar
  @param  Chem_ChemCompVar self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Chem_ChemCompVar Chem_ChemCompVar_GetByKey(Chem_ChemCompVar self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Chem_ChemCompVar obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'getByKey' is not callable");
  
  args = PyTuple_Pack(2, startObj, fullKey);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived link chemAngles
  @param  Chem_ChemCompVar self
  @returns   the result
**/
ApiSet Chem_ChemCompVar_GetChemAngles(Chem_ChemCompVar self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemAngles");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'getChemAngles'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'getChemAngles' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived link chemAtomSets
  @param  Chem_ChemCompVar self
  @returns   the result
**/
ApiSet Chem_ChemCompVar_GetChemAtomSets(Chem_ChemCompVar self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemAtomSets");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'getChemAtomSets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'getChemAtomSets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemCompVar.chemAtoms

AbstractChemAtoms 
making up ChemCompVar
  @param  Chem_ChemCompVar self
  @returns   the result
**/
ApiSet Chem_ChemCompVar_GetChemAtoms(Chem_ChemCompVar self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemAtoms");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'getChemAtoms'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'getChemAtoms' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived link chemBonds
  @param  Chem_ChemCompVar self
  @returns   the result
**/
ApiSet Chem_ChemCompVar_GetChemBonds(Chem_ChemCompVar self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemBonds");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'getChemBonds'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'getChemBonds' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemCompVar.chemComp

parent link
  @param  Chem_ChemCompVar self
  @returns   the result
**/
Chem_ChemComp Chem_ChemCompVar_GetChemComp(Chem_ChemCompVar self)
{
  
  Chem_ChemComp obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemComp");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'getChemComp'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'getChemComp' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived link chemCompSysNames
  @param  Chem_ChemCompVar self
  @returns   the result
**/
ApiSet Chem_ChemCompVar_GetChemCompSysNames(Chem_ChemCompVar self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemCompSysNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'getChemCompSysNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'getChemCompSysNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived link chemTorsions
  @param  Chem_ChemCompVar self
  @returns   the result
**/
ApiSet Chem_ChemCompVar_GetChemTorsions(Chem_ChemCompVar self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemTorsions");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'getChemTorsions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'getChemTorsions' is not callable");
  
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
  @param  Chem_ChemCompVar self
  @returns   the result
**/
ApiString Chem_ChemCompVar_GetClassName(Chem_ChemCompVar self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemCompVar.descriptor

Short string 
distinguishing the topological variant of the ChemCompVar (e.g. 
protonation state) of the ChemCompVar. For ChemComps of linear polymer 
type (only) also distinguishes substitution patterns not related to the 
polymer bonds. The formatting rules are complex - see comment in 
'descriptor_format_rule' constraint for details.
  @param  Chem_ChemCompVar self
  @returns   the result
**/
ApiString Chem_ChemCompVar_GetDescriptor(Chem_ChemCompVar self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDescriptor");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'getDescriptor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'getDescriptor' is not callable");
  
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
  @param  Chem_ChemCompVar self
  @returns   the result
**/
ApiList Chem_ChemCompVar_GetFieldNames(Chem_ChemCompVar self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemCompVar.formalCharge

Formal charge of 
ChemCompVar
  @param  Chem_ChemCompVar self
  @returns   the result
**/
ApiInteger Chem_ChemCompVar_GetFormalCharge(Chem_ChemCompVar self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFormalCharge");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'getFormalCharge'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'getFormalCharge' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived attribute formula
  @param  Chem_ChemCompVar self
  @returns   the result
**/
ApiString Chem_ChemCompVar_GetFormula(Chem_ChemCompVar self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFormula");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'getFormula'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'getFormula' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.molecule.ChemComp.ChemCompVar
  @param  Chem_ChemCompVar self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Chem_ChemCompVar_GetFullKey(Chem_ChemCompVar self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'getFullKey' is not callable");
  
  args = PyTuple_Pack(1, useGuid);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemCompVar.glycoCtCode

glycoCT 
chem_comp_code specific to ChemCompVar. If not set use 
chemComp.baseGlycoCtCode
  @param  Chem_ChemCompVar self
  @returns   the result
**/
ApiString Chem_ChemCompVar_GetGlycoCtCode(Chem_ChemCompVar self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getGlycoCtCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'getGlycoCtCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'getGlycoCtCode' is not callable");
  
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
  @param  Chem_ChemCompVar self
  @returns   the result
**/
ApiBoolean Chem_ChemCompVar_GetInConstructor(Chem_ChemCompVar self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'getInConstructor' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemCompVar.isAromatic

is ChemCompVar  
aromatic?
  @param  Chem_ChemCompVar self
  @returns   the result
**/
ApiBoolean Chem_ChemCompVar_GetIsAromatic(Chem_ChemCompVar self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsAromatic");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'getIsAromatic'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'getIsAromatic' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemCompVar.isDefaultVar

Is this 
ChemCompVar the default for its linking? Or, in other words, is this the 
ChemCompVar to use by default when creating a MolResidue with this 
particular molType, ccpCode, and linking? 
Note 
that
myChemComp.findAllChemCompVars(linking=x,isDefaultVar=True)

will 
return either one object or none for any value of x.
  @param  Chem_ChemCompVar self
  @returns   the result
**/
ApiBoolean Chem_ChemCompVar_GetIsDefaultVar(Chem_ChemCompVar self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDefaultVar");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'getIsDefaultVar'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'getIsDefaultVar' is not callable");
  
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
  @param  Chem_ChemCompVar self
  @returns   the result
**/
ApiBoolean Chem_ChemCompVar_GetIsDeleted(Chem_ChemCompVar self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemCompVar.isParamagnetic

is ChemCompVar 
paramagnetic?
  @param  Chem_ChemCompVar self
  @returns   the result
**/
ApiBoolean Chem_ChemCompVar_GetIsParamagnetic(Chem_ChemCompVar self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsParamagnetic");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'getIsParamagnetic'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'getIsParamagnetic' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived link linkEnds
  @param  Chem_ChemCompVar self
  @returns   the result
**/
ApiSet Chem_ChemCompVar_GetLinkEnds(Chem_ChemCompVar self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLinkEnds");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'getLinkEnds'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'getLinkEnds' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemCompVar.linking

String distinguishing 
the pattern of linkEnds (substitution pattern) of the ChemCompVar.  For 
a linear polymer type ChemComp linking must be 'start', 'middle', 'end', 
or 'none', and other linking patterns are taken care of by the 
descriptor attribute. For Other ChemComps linking distinguishes all 
possible substitution patterns. Here the format is 'link:' followed by a 
comma-separated list of the linkCodes for the active links. E.g. 
'link:SG,C1_2'
  @param  Chem_ChemCompVar self
  @returns   the result
**/
ApiString Chem_ChemCompVar_GetLinking(Chem_ChemCompVar self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLinking");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'getLinking'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'getLinking' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.molecule.ChemComp.ChemCompVar
  @param  Chem_ChemCompVar self
  @returns  Local object key
**/
ApiObject Chem_ChemCompVar_GetLocalKey(Chem_ChemCompVar self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived attribute molecularMass
  @param  Chem_ChemCompVar self
  @returns   the result
**/
ApiFloat Chem_ChemCompVar_GetMolecularMass(Chem_ChemCompVar self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolecularMass");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'getMolecularMass'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'getMolecularMass' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived attribute 'name'.
  @param  Chem_ChemCompVar self
  @returns   the result
**/
ApiString Chem_ChemCompVar_GetName(Chem_ChemCompVar self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'getName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemCompVar.nonStereoSmiles

Smiles 
description of topology (non-stereo)
  @param  Chem_ChemCompVar self
  @returns   the result
**/
ApiString Chem_ChemCompVar_GetNonStereoSmiles(Chem_ChemCompVar self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNonStereoSmiles");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'getNonStereoSmiles'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'getNonStereoSmiles' is not callable");
  
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
  @param  Chem_ChemCompVar self
  @returns   the result
**/
ApiString Chem_ChemCompVar_GetPackageName(Chem_ChemCompVar self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'getPackageName' is not callable");
  
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
  @param  Chem_ChemCompVar self
  @returns   the result
**/
ApiString Chem_ChemCompVar_GetPackageShortName(Chem_ChemCompVar self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemCompVar.parent

link to parent object 
- synonym for chemComp
  @param  Chem_ChemCompVar self
  @returns   the result
**/
Chem_ChemComp Chem_ChemCompVar_GetParent(Chem_ChemCompVar self)
{
  
  Chem_ChemComp obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'getParent' is not callable");
  
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
  @param  Chem_ChemCompVar self
  @returns   the result
**/
ApiString Chem_ChemCompVar_GetQualifiedName(Chem_ChemCompVar self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'getQualifiedName' is not callable");
  
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
  @param  Chem_ChemCompVar self
  @returns   the result
**/
Impl_MemopsRoot Chem_ChemCompVar_GetRoot(Chem_ChemCompVar self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemCompVar.specificSysNames

Systematic 
names that are valid for this ChemCompVar but not for all others. In 
addition to the specific ChemCompSysNames in this link, any 
ChemCompSysName that is not linked to specific ChemCompVars is valid for 
all ChemCompVars. Each ChemCompVar can have only one ChemCompSysName 
within a given naming system.
  @param  Chem_ChemCompVar self
  @returns   the result
**/
ApiSet Chem_ChemCompVar_GetSpecificSysNames(Chem_ChemCompVar self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSpecificSysNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'getSpecificSysNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'getSpecificSysNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemCompVar.stereoSmiles

Smiles 
description of topology (stereo)
  @param  Chem_ChemCompVar self
  @returns   the result
**/
ApiString Chem_ChemCompVar_GetStereoSmiles(Chem_ChemCompVar self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getStereoSmiles");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'getStereoSmiles'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'getStereoSmiles' is not callable");
  
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
  @param  Chem_ChemCompVar self
  @returns   the result
**/
Impl_TopObject Chem_ChemCompVar_GetTopObject(Chem_ChemCompVar self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemCompVar.varName

Name for ChemCompVar. 
Overrides ChemComp.name and should only be set when different from this. 
See ChemCompVar.name documentation
  @param  Chem_ChemCompVar self
  @returns   the result
**/
ApiString Chem_ChemCompVar_GetVarName(Chem_ChemCompVar self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getVarName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'getVarName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'getVarName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.molecule.ChemComp.ChemCompVar
  @param  Chem_ChemComp parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Chem_ChemCompVar Chem_ChemCompVar_Init(Chem_ChemComp parent, ApiMap attrlinks)
{
  
  return Chem_ChemComp_NewChemCompVar(parent, attrlinks);
}

/**
  Constructor for ccp.molecule.ChemComp.ChemCompVar
  @param  Chem_ChemComp parent
  @param  char * descriptor
  @param  ApiInteger formalCharge
  @param  int isAromatic
  @param  int isParamagnetic
  @param  char * linking
  @returns  the new object
**/
Chem_ChemCompVar Chem_ChemCompVar_Init_reqd(Chem_ChemComp parent, char * descriptor, ApiInteger formalCharge, int isAromatic, int isParamagnetic, char * linking)
{
  
  Chem_ChemCompVar  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__descriptor = ApiString_New(descriptor);
  ApiBoolean api__isAromatic = ApiBoolean_New(isAromatic);
  ApiBoolean api__isParamagnetic = ApiBoolean_New(isParamagnetic);
  ApiString api__linking = ApiString_New(linking);

  PyDict_SetItemString(attrlinks, "descriptor", api__descriptor);
  PyDict_SetItemString(attrlinks, "formalCharge", formalCharge);
  PyDict_SetItemString(attrlinks, "isAromatic", api__isAromatic);
  PyDict_SetItemString(attrlinks, "isParamagnetic", api__isParamagnetic);
  PyDict_SetItemString(attrlinks, "linking", api__linking);
  
  obj = Chem_ChemCompVar_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__descriptor);
  Py_DECREF(api__isAromatic);
  Py_DECREF(api__isParamagnetic);
  Py_DECREF(api__linking);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemCompVar self
  @param  Impl_ApplicationData value
**/
void *Chem_ChemCompVar_RemoveApplicationData(Chem_ChemCompVar self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
ccp.molecule.ChemComp.ChemCompVar.chemAtoms

AbstractChemAtoms making up 
ChemCompVar
  @param  Chem_ChemCompVar self
  @param  Chem_AbstractChemAtom value
**/
void *Chem_ChemCompVar_RemoveChemAtom(Chem_ChemCompVar self, Chem_AbstractChemAtom value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeChemAtom");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'removeChemAtom'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'removeChemAtom' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
ccp.molecule.ChemComp.ChemCompVar.specificSysNames

Systematic names 
that are valid for this ChemCompVar but not for all others. In addition 
to the specific ChemCompSysNames in this link, any ChemCompSysName that 
is not linked to specific ChemCompVars is valid for all ChemCompVars. 
Each ChemCompVar can have only one ChemCompSysName within a given naming 
system.
  @param  Chem_ChemCompVar self
  @param  Chem_ChemCompSysName value
**/
void *Chem_ChemCompVar_RemoveSpecificSysName(Chem_ChemCompVar self, Chem_ChemCompSysName value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeSpecificSysName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'removeSpecificSysName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'removeSpecificSysName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.molecule.ChemComp.ChemCompVar
  @param  Chem_ChemCompVar self
  @param  ApiString name
  @param  ApiObject value
**/
void *Chem_ChemCompVar_Set(Chem_ChemCompVar self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Chem_ChemCompVar self
  @param  Acco_AccessObject value
**/
void *Chem_ChemCompVar_SetAccess(Chem_ChemCompVar self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'setAccess' is not callable");
  
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
  @param  Chem_ChemCompVar self
  @param  ApiList values
**/
void *Chem_ChemCompVar_SetApplicationData(Chem_ChemCompVar self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.ChemCompVar.chemAtoms

AbstractChemAtoms 
making up ChemCompVar
  @param  Chem_ChemCompVar self
  @param  ApiSet values
**/
void *Chem_ChemCompVar_SetChemAtoms(Chem_ChemCompVar self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setChemAtoms");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'setChemAtoms'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'setChemAtoms' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.ChemCompVar.descriptor

Short string 
distinguishing the topological variant of the ChemCompVar (e.g. 
protonation state) of the ChemCompVar. For ChemComps of linear polymer 
type (only) also distinguishes substitution patterns not related to the 
polymer bonds. The formatting rules are complex - see comment in 
'descriptor_format_rule' constraint for details.
  @param  Chem_ChemCompVar self
  @param  ApiString value
**/
void *Chem_ChemCompVar_SetDescriptor(Chem_ChemCompVar self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDescriptor");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'setDescriptor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'setDescriptor' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.ChemCompVar.formalCharge

Formal charge of 
ChemCompVar
  @param  Chem_ChemCompVar self
  @param  ApiInteger value
**/
void *Chem_ChemCompVar_SetFormalCharge(Chem_ChemCompVar self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setFormalCharge");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'setFormalCharge'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'setFormalCharge' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.ChemCompVar.glycoCtCode

glycoCT 
chem_comp_code specific to ChemCompVar. If not set use 
chemComp.baseGlycoCtCode
  @param  Chem_ChemCompVar self
  @param  ApiString value
**/
void *Chem_ChemCompVar_SetGlycoCtCode(Chem_ChemCompVar self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setGlycoCtCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'setGlycoCtCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'setGlycoCtCode' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.ChemCompVar.isAromatic

is ChemCompVar  
aromatic?
  @param  Chem_ChemCompVar self
  @param  ApiBoolean value
**/
void *Chem_ChemCompVar_SetIsAromatic(Chem_ChemCompVar self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsAromatic");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'setIsAromatic'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'setIsAromatic' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.ChemCompVar.isDefaultVar

Is this 
ChemCompVar the default for its linking? Or, in other words, is this the 
ChemCompVar to use by default when creating a MolResidue with this 
particular molType, ccpCode, and linking? 
Note 
that
myChemComp.findAllChemCompVars(linking=x,isDefaultVar=True)

will 
return either one object or none for any value of x.
  @param  Chem_ChemCompVar self
  @param  ApiBoolean value
**/
void *Chem_ChemCompVar_SetIsDefaultVar(Chem_ChemCompVar self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsDefaultVar");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'setIsDefaultVar'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'setIsDefaultVar' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.ChemCompVar.isParamagnetic

is ChemCompVar 
paramagnetic?
  @param  Chem_ChemCompVar self
  @param  ApiBoolean value
**/
void *Chem_ChemCompVar_SetIsParamagnetic(Chem_ChemCompVar self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsParamagnetic");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'setIsParamagnetic'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'setIsParamagnetic' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.ChemCompVar.linking

String distinguishing 
the pattern of linkEnds (substitution pattern) of the ChemCompVar.  For 
a linear polymer type ChemComp linking must be 'start', 'middle', 'end', 
or 'none', and other linking patterns are taken care of by the 
descriptor attribute. For Other ChemComps linking distinguishes all 
possible substitution patterns. Here the format is 'link:' followed by a 
comma-separated list of the linkCodes for the active links. E.g. 
'link:SG,C1_2'
  @param  Chem_ChemCompVar self
  @param  ApiString value
**/
void *Chem_ChemCompVar_SetLinking(Chem_ChemCompVar self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLinking");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'setLinking'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'setLinking' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  setter for derived, settable attribute 'name'.
  @param  Chem_ChemCompVar self
  @param  ApiString value
**/
void *Chem_ChemCompVar_SetName(Chem_ChemCompVar self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.ChemCompVar.nonStereoSmiles

Smiles 
description of topology (non-stereo)
  @param  Chem_ChemCompVar self
  @param  ApiString value
**/
void *Chem_ChemCompVar_SetNonStereoSmiles(Chem_ChemCompVar self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNonStereoSmiles");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'setNonStereoSmiles'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'setNonStereoSmiles' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.ChemCompVar.specificSysNames

Systematic 
names that are valid for this ChemCompVar but not for all others. In 
addition to the specific ChemCompSysNames in this link, any 
ChemCompSysName that is not linked to specific ChemCompVars is valid for 
all ChemCompVars. Each ChemCompVar can have only one ChemCompSysName 
within a given naming system.
  @param  Chem_ChemCompVar self
  @param  ApiSet values
**/
void *Chem_ChemCompVar_SetSpecificSysNames(Chem_ChemCompVar self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSpecificSysNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'setSpecificSysNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'setSpecificSysNames' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.ChemCompVar.stereoSmiles

Smiles 
description of topology (stereo)
  @param  Chem_ChemCompVar self
  @param  ApiString value
**/
void *Chem_ChemCompVar_SetStereoSmiles(Chem_ChemCompVar self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setStereoSmiles");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'setStereoSmiles'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'setStereoSmiles' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.ChemCompVar.varName

Name for ChemCompVar. 
Overrides ChemComp.name and should only be set when different from this. 
See ChemCompVar.name documentation
  @param  Chem_ChemCompVar self
  @param  ApiString value
**/
void *Chem_ChemCompVar_SetVarName(Chem_ChemCompVar self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setVarName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'setVarName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'setVarName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.ChemComp.ChemCompVar.chemAngles

chemAngles that 
lie within ChemCompVar
  @param  Chem_ChemCompVar self
  @returns   the result
**/
ApiList Chem_ChemCompVar_SortedChemAngles(Chem_ChemCompVar self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChemAngles");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'sortedChemAngles'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'sortedChemAngles' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.ChemComp.ChemCompVar.chemAtomSets

ChemAtomSets 
contained in ChemCompVar. The setsa are
  @param  Chem_ChemCompVar self
  @returns   the result
**/
ApiList Chem_ChemCompVar_SortedChemAtomSets(Chem_ChemCompVar self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChemAtomSets");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'sortedChemAtomSets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'sortedChemAtomSets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.molecule.ChemComp.ChemCompVar.chemAtoms

AbstractChemAtoms making up 
ChemCompVar
  @param  Chem_ChemCompVar self
  @returns   the result
**/
ApiList Chem_ChemCompVar_SortedChemAtoms(Chem_ChemCompVar self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChemAtoms");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'sortedChemAtoms'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'sortedChemAtoms' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.ChemComp.ChemCompVar.chemBonds

Bonds contained 
in ChemCompVar
  @param  Chem_ChemCompVar self
  @returns   the result
**/
ApiList Chem_ChemCompVar_SortedChemBonds(Chem_ChemCompVar self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChemBonds");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'sortedChemBonds'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'sortedChemBonds' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.ChemComp.ChemCompVar.chemCompSysNames

All 
chemCompSysNames relevant to ChemCompVar
  @param  Chem_ChemCompVar self
  @returns   the result
**/
ApiList Chem_ChemCompVar_SortedChemCompSysNames(Chem_ChemCompVar self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChemCompSysNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'sortedChemCompSysNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'sortedChemCompSysNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.ChemComp.ChemCompVar.chemTorsions

chemTorsions 
that lie within ChemCompVar
  @param  Chem_ChemCompVar self
  @returns   the result
**/
ApiList Chem_ChemCompVar_SortedChemTorsions(Chem_ChemCompVar self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChemTorsions");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'sortedChemTorsions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'sortedChemTorsions' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.ChemComp.ChemCompVar.linkEnds

linkEnds 
available to ChemCompVar. A LinkEnd belongs to a ChemCompVar if and only 
if the LinkEnd.boundLinkAtom belongs to the ChemCompVAr.
  @param  Chem_ChemCompVar self
  @returns   the result
**/
ApiList Chem_ChemCompVar_SortedLinkEnds(Chem_ChemCompVar self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedLinkEnds");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'sortedLinkEnds'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'sortedLinkEnds' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.molecule.ChemComp.ChemCompVar.specificSysNames

Systematic names 
that are valid for this ChemCompVar but not for all others. In addition 
to the specific ChemCompSysNames in this link, any ChemCompSysName that 
is not linked to specific ChemCompVars is valid for all ChemCompVars. 
Each ChemCompVar can have only one ChemCompSysName within a given naming 
system.
  @param  Chem_ChemCompVar self
  @returns   the result
**/
ApiList Chem_ChemCompVar_SortedSpecificSysNames(Chem_ChemCompVar self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedSpecificSysNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: cannot find method 'sortedSpecificSysNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemCompVar: method 'sortedSpecificSysNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
