
#include "ccp.h"

/*
   Atom used to specify LinkEnds. Serves as a placeholder for ChemAtoms that are not part of the present ChemComp but of other ChemComps linked to it. As such allows the definition of bonds, Torsions, Stereochemistry etc. involving ChemAtoms from several ChemComps. The key element in the definition of LinkEnds. 
*/

/* package ccp.api.molecule.ChemComp */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_LinkAtom self
  @param  Impl_ApplicationData value
**/
void *Chem_LinkAtom_AddApplicationData(Chem_LinkAtom self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for 
ccp.molecule.ChemComp.AbstractChemAtom.chemCompVars

ChemCompVars that 
contain AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  Chem_ChemCompVar value
**/
void *Chem_LinkAtom_AddChemCompVar(Chem_LinkAtom self, Chem_ChemCompVar value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addChemCompVar");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: cannot find method 'addChemCompVar'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: method 'addChemCompVar' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.molecule.ChemComp.LinkAtom
  @param  Chem_LinkAtom self
  @param  ApiBoolean complete
**/
void *Chem_LinkAtom_CheckAllValid(Chem_LinkAtom self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.molecule.ChemComp.LinkAtom
  @param  Chem_LinkAtom self
  @param  ApiBoolean complete
**/
void *Chem_LinkAtom_CheckValid(Chem_LinkAtom self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: method 'checkValid' is not callable");
  
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
  @param  Chem_LinkAtom self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_LinkAtom_FindAllApplicationData(Chem_LinkAtom self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: method 'findAllApplicationData' is not callable");
  
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
  @param  Chem_LinkAtom self
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_LinkAtom_FindAllApplicationData_keyval0(Chem_LinkAtom self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_LinkAtom_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_LinkAtom self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_LinkAtom_FindAllApplicationData_keyval1(Chem_LinkAtom self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_LinkAtom_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_LinkAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_LinkAtom_FindAllApplicationData_keyval2(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_LinkAtom_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_LinkAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_LinkAtom_FindAllApplicationData_keyval3(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_LinkAtom_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_LinkAtom self
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
ApiList Chem_LinkAtom_FindAllApplicationData_keyval4(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_LinkAtom_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemAngles

ChemAngles involving 
AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_LinkAtom_FindAllChemAngles(Chem_LinkAtom self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChemAngles");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: cannot find method 'findAllChemAngles'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: method 'findAllChemAngles' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemAngles

ChemAngles involving 
AbstractChemAtom
  @param  Chem_LinkAtom self
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_LinkAtom_FindAllChemAngles_keyval0(Chem_LinkAtom self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_LinkAtom_FindAllChemAngles(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemAngles

ChemAngles involving 
AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_LinkAtom_FindAllChemAngles_keyval1(Chem_LinkAtom self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_LinkAtom_FindAllChemAngles(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemAngles

ChemAngles involving 
AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_LinkAtom_FindAllChemAngles_keyval2(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_LinkAtom_FindAllChemAngles(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemAngles

ChemAngles involving 
AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_LinkAtom_FindAllChemAngles_keyval3(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_LinkAtom_FindAllChemAngles(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemAngles

ChemAngles involving 
AbstractChemAtom
  @param  Chem_LinkAtom self
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
ApiSet Chem_LinkAtom_FindAllChemAngles_keyval4(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_LinkAtom_FindAllChemAngles(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.AbstractChemAtom.chemBonds

ChemBonds 
involving AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_LinkAtom_FindAllChemBonds(Chem_LinkAtom self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChemBonds");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: cannot find method 'findAllChemBonds'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: method 'findAllChemBonds' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.AbstractChemAtom.chemBonds

ChemBonds 
involving AbstractChemAtom
  @param  Chem_LinkAtom self
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_LinkAtom_FindAllChemBonds_keyval0(Chem_LinkAtom self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_LinkAtom_FindAllChemBonds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.AbstractChemAtom.chemBonds

ChemBonds 
involving AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_LinkAtom_FindAllChemBonds_keyval1(Chem_LinkAtom self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_LinkAtom_FindAllChemBonds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.AbstractChemAtom.chemBonds

ChemBonds 
involving AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_LinkAtom_FindAllChemBonds_keyval2(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_LinkAtom_FindAllChemBonds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.AbstractChemAtom.chemBonds

ChemBonds 
involving AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_LinkAtom_FindAllChemBonds_keyval3(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_LinkAtom_FindAllChemBonds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.AbstractChemAtom.chemBonds

ChemBonds 
involving AbstractChemAtom
  @param  Chem_LinkAtom self
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
ApiSet Chem_LinkAtom_FindAllChemBonds_keyval4(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_LinkAtom_FindAllChemBonds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemCompVars

ChemCompVars that 
contain AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_LinkAtom_FindAllChemCompVars(Chem_LinkAtom self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChemCompVars");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: cannot find method 'findAllChemCompVars'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: method 'findAllChemCompVars' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemCompVars

ChemCompVars that 
contain AbstractChemAtom
  @param  Chem_LinkAtom self
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_LinkAtom_FindAllChemCompVars_keyval0(Chem_LinkAtom self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_LinkAtom_FindAllChemCompVars(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemCompVars

ChemCompVars that 
contain AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_LinkAtom_FindAllChemCompVars_keyval1(Chem_LinkAtom self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_LinkAtom_FindAllChemCompVars(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemCompVars

ChemCompVars that 
contain AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_LinkAtom_FindAllChemCompVars_keyval2(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_LinkAtom_FindAllChemCompVars(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemCompVars

ChemCompVars that 
contain AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_LinkAtom_FindAllChemCompVars_keyval3(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_LinkAtom_FindAllChemCompVars(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemCompVars

ChemCompVars that 
contain AbstractChemAtom
  @param  Chem_LinkAtom self
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
ApiSet Chem_LinkAtom_FindAllChemCompVars_keyval4(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_LinkAtom_FindAllChemCompVars(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemTorsions

ChemTorsions 
involving AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_LinkAtom_FindAllChemTorsions(Chem_LinkAtom self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChemTorsions");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: cannot find method 'findAllChemTorsions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: method 'findAllChemTorsions' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemTorsions

ChemTorsions 
involving AbstractChemAtom
  @param  Chem_LinkAtom self
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_LinkAtom_FindAllChemTorsions_keyval0(Chem_LinkAtom self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_LinkAtom_FindAllChemTorsions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemTorsions

ChemTorsions 
involving AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_LinkAtom_FindAllChemTorsions_keyval1(Chem_LinkAtom self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_LinkAtom_FindAllChemTorsions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemTorsions

ChemTorsions 
involving AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_LinkAtom_FindAllChemTorsions_keyval2(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_LinkAtom_FindAllChemTorsions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemTorsions

ChemTorsions 
involving AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_LinkAtom_FindAllChemTorsions_keyval3(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_LinkAtom_FindAllChemTorsions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemTorsions

ChemTorsions 
involving AbstractChemAtom
  @param  Chem_LinkAtom self
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
ApiSet Chem_LinkAtom_FindAllChemTorsions_keyval4(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_LinkAtom_FindAllChemTorsions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.stereochemistries

StereoChemistry 
objects that involve AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_LinkAtom_FindAllStereochemistries(Chem_LinkAtom self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllStereochemistries");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: cannot find method 'findAllStereochemistries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: method 'findAllStereochemistries' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.stereochemistries

StereoChemistry 
objects that involve AbstractChemAtom
  @param  Chem_LinkAtom self
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_LinkAtom_FindAllStereochemistries_keyval0(Chem_LinkAtom self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_LinkAtom_FindAllStereochemistries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.stereochemistries

StereoChemistry 
objects that involve AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_LinkAtom_FindAllStereochemistries_keyval1(Chem_LinkAtom self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_LinkAtom_FindAllStereochemistries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.stereochemistries

StereoChemistry 
objects that involve AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_LinkAtom_FindAllStereochemistries_keyval2(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_LinkAtom_FindAllStereochemistries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.stereochemistries

StereoChemistry 
objects that involve AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_LinkAtom_FindAllStereochemistries_keyval3(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_LinkAtom_FindAllStereochemistries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.stereochemistries

StereoChemistry 
objects that involve AbstractChemAtom
  @param  Chem_LinkAtom self
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
ApiSet Chem_LinkAtom_FindAllStereochemistries_keyval4(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_LinkAtom_FindAllStereochemistries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_LinkAtom self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chem_LinkAtom_FindFirstApplicationData(Chem_LinkAtom self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: method 'findFirstApplicationData' is not callable");
  
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
  @param  Chem_LinkAtom self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chem_LinkAtom_FindFirstApplicationData_keyval0(Chem_LinkAtom self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_LinkAtom_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_LinkAtom self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chem_LinkAtom_FindFirstApplicationData_keyval1(Chem_LinkAtom self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_LinkAtom_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_LinkAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chem_LinkAtom_FindFirstApplicationData_keyval2(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_LinkAtom_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_LinkAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chem_LinkAtom_FindFirstApplicationData_keyval3(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_LinkAtom_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_LinkAtom self
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
Impl_ApplicationData Chem_LinkAtom_FindFirstApplicationData_keyval4(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_LinkAtom_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemAngles

ChemAngles involving 
AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemAngle Chem_LinkAtom_FindFirstChemAngle(Chem_LinkAtom self, ApiMap conditions)
{
  
  Chem_ChemAngle obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChemAngle");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: cannot find method 'findFirstChemAngle'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: method 'findFirstChemAngle' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemAngles

ChemAngles involving 
AbstractChemAtom
  @param  Chem_LinkAtom self
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemAngle Chem_LinkAtom_FindFirstChemAngle_keyval0(Chem_LinkAtom self)
{
  
  Chem_ChemAngle  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_LinkAtom_FindFirstChemAngle(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemAngles

ChemAngles involving 
AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemAngle Chem_LinkAtom_FindFirstChemAngle_keyval1(Chem_LinkAtom self, char * key, ApiObject value)
{
  
  Chem_ChemAngle  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_LinkAtom_FindFirstChemAngle(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemAngles

ChemAngles involving 
AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemAngle Chem_LinkAtom_FindFirstChemAngle_keyval2(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chem_ChemAngle  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_LinkAtom_FindFirstChemAngle(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemAngles

ChemAngles involving 
AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemAngle Chem_LinkAtom_FindFirstChemAngle_keyval3(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chem_ChemAngle  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_LinkAtom_FindFirstChemAngle(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemAngles

ChemAngles involving 
AbstractChemAtom
  @param  Chem_LinkAtom self
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
Chem_ChemAngle Chem_LinkAtom_FindFirstChemAngle_keyval4(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chem_ChemAngle  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_LinkAtom_FindFirstChemAngle(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemBonds

ChemBonds involving 
AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemBond Chem_LinkAtom_FindFirstChemBond(Chem_LinkAtom self, ApiMap conditions)
{
  
  Chem_ChemBond obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChemBond");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: cannot find method 'findFirstChemBond'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: method 'findFirstChemBond' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemBonds

ChemBonds involving 
AbstractChemAtom
  @param  Chem_LinkAtom self
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemBond Chem_LinkAtom_FindFirstChemBond_keyval0(Chem_LinkAtom self)
{
  
  Chem_ChemBond  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_LinkAtom_FindFirstChemBond(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemBonds

ChemBonds involving 
AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemBond Chem_LinkAtom_FindFirstChemBond_keyval1(Chem_LinkAtom self, char * key, ApiObject value)
{
  
  Chem_ChemBond  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_LinkAtom_FindFirstChemBond(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemBonds

ChemBonds involving 
AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemBond Chem_LinkAtom_FindFirstChemBond_keyval2(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chem_ChemBond  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_LinkAtom_FindFirstChemBond(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemBonds

ChemBonds involving 
AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemBond Chem_LinkAtom_FindFirstChemBond_keyval3(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chem_ChemBond  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_LinkAtom_FindFirstChemBond(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemBonds

ChemBonds involving 
AbstractChemAtom
  @param  Chem_LinkAtom self
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
Chem_ChemBond Chem_LinkAtom_FindFirstChemBond_keyval4(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chem_ChemBond  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_LinkAtom_FindFirstChemBond(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemCompVars

ChemCompVars that 
contain AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemCompVar Chem_LinkAtom_FindFirstChemCompVar(Chem_LinkAtom self, ApiMap conditions)
{
  
  Chem_ChemCompVar obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChemCompVar");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: cannot find method 'findFirstChemCompVar'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: method 'findFirstChemCompVar' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemCompVars

ChemCompVars that 
contain AbstractChemAtom
  @param  Chem_LinkAtom self
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemCompVar Chem_LinkAtom_FindFirstChemCompVar_keyval0(Chem_LinkAtom self)
{
  
  Chem_ChemCompVar  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_LinkAtom_FindFirstChemCompVar(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemCompVars

ChemCompVars that 
contain AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemCompVar Chem_LinkAtom_FindFirstChemCompVar_keyval1(Chem_LinkAtom self, char * key, ApiObject value)
{
  
  Chem_ChemCompVar  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_LinkAtom_FindFirstChemCompVar(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemCompVars

ChemCompVars that 
contain AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemCompVar Chem_LinkAtom_FindFirstChemCompVar_keyval2(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chem_ChemCompVar  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_LinkAtom_FindFirstChemCompVar(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemCompVars

ChemCompVars that 
contain AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemCompVar Chem_LinkAtom_FindFirstChemCompVar_keyval3(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chem_ChemCompVar  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_LinkAtom_FindFirstChemCompVar(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemCompVars

ChemCompVars that 
contain AbstractChemAtom
  @param  Chem_LinkAtom self
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
Chem_ChemCompVar Chem_LinkAtom_FindFirstChemCompVar_keyval4(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chem_ChemCompVar  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_LinkAtom_FindFirstChemCompVar(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemTorsions

ChemTorsions 
involving AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemTorsion Chem_LinkAtom_FindFirstChemTorsion(Chem_LinkAtom self, ApiMap conditions)
{
  
  Chem_ChemTorsion obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChemTorsion");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: cannot find method 'findFirstChemTorsion'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: method 'findFirstChemTorsion' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemTorsions

ChemTorsions 
involving AbstractChemAtom
  @param  Chem_LinkAtom self
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemTorsion Chem_LinkAtom_FindFirstChemTorsion_keyval0(Chem_LinkAtom self)
{
  
  Chem_ChemTorsion  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_LinkAtom_FindFirstChemTorsion(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemTorsions

ChemTorsions 
involving AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemTorsion Chem_LinkAtom_FindFirstChemTorsion_keyval1(Chem_LinkAtom self, char * key, ApiObject value)
{
  
  Chem_ChemTorsion  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_LinkAtom_FindFirstChemTorsion(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemTorsions

ChemTorsions 
involving AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemTorsion Chem_LinkAtom_FindFirstChemTorsion_keyval2(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chem_ChemTorsion  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_LinkAtom_FindFirstChemTorsion(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemTorsions

ChemTorsions 
involving AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemTorsion Chem_LinkAtom_FindFirstChemTorsion_keyval3(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chem_ChemTorsion  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_LinkAtom_FindFirstChemTorsion(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemTorsions

ChemTorsions 
involving AbstractChemAtom
  @param  Chem_LinkAtom self
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
Chem_ChemTorsion Chem_LinkAtom_FindFirstChemTorsion_keyval4(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chem_ChemTorsion  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_LinkAtom_FindFirstChemTorsion(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.stereochemistries

StereoChemistry 
objects that involve AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chem_Stereochemistry Chem_LinkAtom_FindFirstStereochemistry(Chem_LinkAtom self, ApiMap conditions)
{
  
  Chem_Stereochemistry obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstStereochemistry");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: cannot find method 'findFirstStereochemistry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: method 'findFirstStereochemistry' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.stereochemistries

StereoChemistry 
objects that involve AbstractChemAtom
  @param  Chem_LinkAtom self
  @returns  the first value that satisfies the conditions 
**/
Chem_Stereochemistry Chem_LinkAtom_FindFirstStereochemistry_keyval0(Chem_LinkAtom self)
{
  
  Chem_Stereochemistry  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_LinkAtom_FindFirstStereochemistry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.stereochemistries

StereoChemistry 
objects that involve AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chem_Stereochemistry Chem_LinkAtom_FindFirstStereochemistry_keyval1(Chem_LinkAtom self, char * key, ApiObject value)
{
  
  Chem_Stereochemistry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_LinkAtom_FindFirstStereochemistry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.stereochemistries

StereoChemistry 
objects that involve AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chem_Stereochemistry Chem_LinkAtom_FindFirstStereochemistry_keyval2(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chem_Stereochemistry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_LinkAtom_FindFirstStereochemistry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.stereochemistries

StereoChemistry 
objects that involve AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chem_Stereochemistry Chem_LinkAtom_FindFirstStereochemistry_keyval3(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chem_Stereochemistry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_LinkAtom_FindFirstStereochemistry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.stereochemistries

StereoChemistry 
objects that involve AbstractChemAtom
  @param  Chem_LinkAtom self
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
Chem_Stereochemistry Chem_LinkAtom_FindFirstStereochemistry_keyval4(Chem_LinkAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chem_Stereochemistry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_LinkAtom_FindFirstStereochemistry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.molecule.ChemComp.LinkAtom
  @param  Chem_LinkAtom self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Chem_LinkAtom_Get(Chem_LinkAtom self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Chem_LinkAtom self
  @returns   the result
**/
Acco_AccessObject Chem_LinkAtom_GetAccess(Chem_LinkAtom self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: method 'getAccess' is not callable");
  
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
  @param  Chem_LinkAtom self
  @returns   the result
**/
Acco_AccessObject Chem_LinkAtom_GetActiveAccess(Chem_LinkAtom self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: method 'getActiveAccess' is not callable");
  
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
  @param  Chem_LinkAtom self
  @returns   the result
**/
ApiList Chem_LinkAtom_GetApplicationData(Chem_LinkAtom self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.LinkAtom.boundLinkEnd

linkEnd with link 
directly bound to LinkAtom
  @param  Chem_LinkAtom self
  @returns   the result
**/
Chem_LinkEnd Chem_LinkAtom_GetBoundLinkEnd(Chem_LinkAtom self)
{
  
  Chem_LinkEnd obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getBoundLinkEnd");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: cannot find method 'getBoundLinkEnd'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: method 'getBoundLinkEnd' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.molecule.ChemComp.LinkAtom
  @param  Chem_LinkAtom self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Chem_LinkAtom Chem_LinkAtom_GetByKey(Chem_LinkAtom self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Chem_LinkAtom obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: method 'getByKey' is not callable");
  
  args = PyTuple_Pack(2, startObj, fullKey);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.AbstractChemAtom.chemAngles

ChemAngles 
involving AbstractChemAtom
  @param  Chem_LinkAtom self
  @returns   the result
**/
ApiSet Chem_LinkAtom_GetChemAngles(Chem_LinkAtom self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemAngles");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: cannot find method 'getChemAngles'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: method 'getChemAngles' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.AbstractChemAtom.chemBonds

ChemBonds 
involving AbstractChemAtom
  @param  Chem_LinkAtom self
  @returns   the result
**/
ApiSet Chem_LinkAtom_GetChemBonds(Chem_LinkAtom self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemBonds");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: cannot find method 'getChemBonds'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: method 'getChemBonds' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.AbstractChemAtom.chemComp

parent link
  @param  Chem_LinkAtom self
  @returns   the result
**/
Chem_ChemComp Chem_LinkAtom_GetChemComp(Chem_LinkAtom self)
{
  
  Chem_ChemComp obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemComp");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: cannot find method 'getChemComp'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: method 'getChemComp' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.molecule.ChemComp.AbstractChemAtom.chemCompVars

ChemCompVars that 
contain AbstractChemAtom
  @param  Chem_LinkAtom self
  @returns   the result
**/
ApiSet Chem_LinkAtom_GetChemCompVars(Chem_LinkAtom self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemCompVars");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: cannot find method 'getChemCompVars'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: method 'getChemCompVars' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.molecule.ChemComp.AbstractChemAtom.chemTorsions

ChemTorsions 
involving AbstractChemAtom
  @param  Chem_LinkAtom self
  @returns   the result
**/
ApiSet Chem_LinkAtom_GetChemTorsions(Chem_LinkAtom self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemTorsions");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: cannot find method 'getChemTorsions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: method 'getChemTorsions' is not callable");
  
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
  @param  Chem_LinkAtom self
  @returns   the result
**/
ApiString Chem_LinkAtom_GetClassName(Chem_LinkAtom self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived attribute elementSymbol
  @param  Chem_LinkAtom self
  @returns   the result
**/
ApiString Chem_LinkAtom_GetElementSymbol(Chem_LinkAtom self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getElementSymbol");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: cannot find method 'getElementSymbol'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: method 'getElementSymbol' is not callable");
  
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
  @param  Chem_LinkAtom self
  @returns   the result
**/
ApiList Chem_LinkAtom_GetFieldNames(Chem_LinkAtom self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: method 'getFieldNames' is not callable");
  
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
  @param  Chem_LinkAtom self
  @returns   the result
**/
ApiBoolean Chem_LinkAtom_GetInConstructor(Chem_LinkAtom self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: method 'getInConstructor' is not callable");
  
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
  @param  Chem_LinkAtom self
  @returns   the result
**/
ApiBoolean Chem_LinkAtom_GetIsDeleted(Chem_LinkAtom self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.AbstractChemAtom.name

name of ChemAtom
  @param  Chem_LinkAtom self
  @returns   the result
**/
ApiString Chem_LinkAtom_GetName(Chem_LinkAtom self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: method 'getName' is not callable");
  
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
  @param  Chem_LinkAtom self
  @returns   the result
**/
ApiString Chem_LinkAtom_GetPackageName(Chem_LinkAtom self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: method 'getPackageName' is not callable");
  
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
  @param  Chem_LinkAtom self
  @returns   the result
**/
ApiString Chem_LinkAtom_GetPackageShortName(Chem_LinkAtom self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.AbstractChemAtom.parent

link to parent 
object - synonym for chemComp
  @param  Chem_LinkAtom self
  @returns   the result
**/
Chem_ChemComp Chem_LinkAtom_GetParent(Chem_LinkAtom self)
{
  
  Chem_ChemComp obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: method 'getParent' is not callable");
  
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
  @param  Chem_LinkAtom self
  @returns   the result
**/
ApiString Chem_LinkAtom_GetQualifiedName(Chem_LinkAtom self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.LinkAtom.remoteLinkEnd

LinkEnd where 
LinkAtom is remoteLinkAtom
  @param  Chem_LinkAtom self
  @returns   the result
**/
Chem_LinkEnd Chem_LinkAtom_GetRemoteLinkEnd(Chem_LinkAtom self)
{
  
  Chem_LinkEnd obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRemoteLinkEnd");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: cannot find method 'getRemoteLinkEnd'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: method 'getRemoteLinkEnd' is not callable");
  
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
  @param  Chem_LinkAtom self
  @returns   the result
**/
Impl_MemopsRoot Chem_LinkAtom_GetRoot(Chem_LinkAtom self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.molecule.ChemComp.AbstractChemAtom.stereochemistries

StereoChemistry 
objects that involve AbstractChemAtom
  @param  Chem_LinkAtom self
  @returns   the result
**/
ApiSet Chem_LinkAtom_GetStereochemistries(Chem_LinkAtom self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getStereochemistries");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: cannot find method 'getStereochemistries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: method 'getStereochemistries' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.AbstractChemAtom.subType

Subtype of 
AbstractChemAtom, used to distinguish Atoms with the same names but 
different characteristics, to be used in diferent ChemCompVars.
  @param  Chem_LinkAtom self
  @returns   the result
**/
ApiInteger Chem_LinkAtom_GetSubType(Chem_LinkAtom self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSubType");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: cannot find method 'getSubType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: method 'getSubType' is not callable");
  
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
  @param  Chem_LinkAtom self
  @returns   the result
**/
Impl_TopObject Chem_LinkAtom_GetTopObject(Chem_LinkAtom self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.molecule.ChemComp.LinkAtom
  @param  Chem_ChemComp parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Chem_LinkAtom Chem_LinkAtom_Init(Chem_ChemComp parent, ApiMap attrlinks)
{
  
  return Chem_ChemComp_NewLinkAtom(parent, attrlinks);
}

/**
  Constructor for ccp.molecule.ChemComp.LinkAtom
  @param  Chem_ChemComp parent
  @param  char * name
  @returns  the new object
**/
Chem_LinkAtom Chem_LinkAtom_Init_reqd(Chem_ChemComp parent, char * name)
{
  
  Chem_LinkAtom  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Chem_LinkAtom_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_LinkAtom self
  @param  Impl_ApplicationData value
**/
void *Chem_LinkAtom_RemoveApplicationData(Chem_LinkAtom self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
ccp.molecule.ChemComp.AbstractChemAtom.chemCompVars

ChemCompVars that 
contain AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  Chem_ChemCompVar value
**/
void *Chem_LinkAtom_RemoveChemCompVar(Chem_LinkAtom self, Chem_ChemCompVar value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeChemCompVar");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: cannot find method 'removeChemCompVar'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: method 'removeChemCompVar' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.molecule.ChemComp.LinkAtom
  @param  Chem_LinkAtom self
  @param  ApiString name
  @param  ApiObject value
**/
void *Chem_LinkAtom_Set(Chem_LinkAtom self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Chem_LinkAtom self
  @param  Acco_AccessObject value
**/
void *Chem_LinkAtom_SetAccess(Chem_LinkAtom self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: method 'setAccess' is not callable");
  
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
  @param  Chem_LinkAtom self
  @param  ApiList values
**/
void *Chem_LinkAtom_SetApplicationData(Chem_LinkAtom self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.LinkAtom.boundLinkEnd

linkEnd with link 
directly bound to LinkAtom
  @param  Chem_LinkAtom self
  @param  Chem_LinkEnd value
**/
void *Chem_LinkAtom_SetBoundLinkEnd(Chem_LinkAtom self, Chem_LinkEnd value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setBoundLinkEnd");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: cannot find method 'setBoundLinkEnd'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: method 'setBoundLinkEnd' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.AbstractChemAtom.chemAngles

ChemAngles 
involving AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  ApiSet values
**/
void *Chem_LinkAtom_SetChemAngles(Chem_LinkAtom self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setChemAngles");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: cannot find method 'setChemAngles'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: method 'setChemAngles' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.AbstractChemAtom.chemBonds

ChemBonds 
involving AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  ApiSet values
**/
void *Chem_LinkAtom_SetChemBonds(Chem_LinkAtom self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setChemBonds");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: cannot find method 'setChemBonds'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: method 'setChemBonds' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.molecule.ChemComp.AbstractChemAtom.chemCompVars

ChemCompVars that 
contain AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  ApiSet values
**/
void *Chem_LinkAtom_SetChemCompVars(Chem_LinkAtom self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setChemCompVars");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: cannot find method 'setChemCompVars'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: method 'setChemCompVars' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.molecule.ChemComp.AbstractChemAtom.chemTorsions

ChemTorsions 
involving AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  ApiSet values
**/
void *Chem_LinkAtom_SetChemTorsions(Chem_LinkAtom self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setChemTorsions");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: cannot find method 'setChemTorsions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: method 'setChemTorsions' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.AbstractChemAtom.name

name of ChemAtom
  @param  Chem_LinkAtom self
  @param  ApiString value
**/
void *Chem_LinkAtom_SetName(Chem_LinkAtom self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.LinkAtom.remoteLinkEnd

LinkEnd where 
LinkAtom is remoteLinkAtom
  @param  Chem_LinkAtom self
  @param  Chem_LinkEnd value
**/
void *Chem_LinkAtom_SetRemoteLinkEnd(Chem_LinkAtom self, Chem_LinkEnd value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRemoteLinkEnd");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: cannot find method 'setRemoteLinkEnd'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: method 'setRemoteLinkEnd' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.molecule.ChemComp.AbstractChemAtom.stereochemistries

StereoChemistry 
objects that involve AbstractChemAtom
  @param  Chem_LinkAtom self
  @param  ApiSet values
**/
void *Chem_LinkAtom_SetStereochemistries(Chem_LinkAtom self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setStereochemistries");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: cannot find method 'setStereochemistries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: method 'setStereochemistries' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.AbstractChemAtom.subType

Subtype of 
AbstractChemAtom, used to distinguish Atoms with the same names but 
different characteristics, to be used in diferent ChemCompVars.
  @param  Chem_LinkAtom self
  @param  ApiInteger value
**/
void *Chem_LinkAtom_SetSubType(Chem_LinkAtom self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSubType");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: cannot find method 'setSubType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: method 'setSubType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.ChemComp.AbstractChemAtom.chemAngles

ChemAngles 
involving AbstractChemAtom
  @param  Chem_LinkAtom self
  @returns   the result
**/
ApiList Chem_LinkAtom_SortedChemAngles(Chem_LinkAtom self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChemAngles");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: cannot find method 'sortedChemAngles'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: method 'sortedChemAngles' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.ChemComp.AbstractChemAtom.chemBonds

ChemBonds 
involving AbstractChemAtom
  @param  Chem_LinkAtom self
  @returns   the result
**/
ApiList Chem_LinkAtom_SortedChemBonds(Chem_LinkAtom self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChemBonds");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: cannot find method 'sortedChemBonds'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: method 'sortedChemBonds' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.molecule.ChemComp.AbstractChemAtom.chemCompVars

ChemCompVars that 
contain AbstractChemAtom
  @param  Chem_LinkAtom self
  @returns   the result
**/
ApiList Chem_LinkAtom_SortedChemCompVars(Chem_LinkAtom self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChemCompVars");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: cannot find method 'sortedChemCompVars'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: method 'sortedChemCompVars' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.molecule.ChemComp.AbstractChemAtom.chemTorsions

ChemTorsions 
involving AbstractChemAtom
  @param  Chem_LinkAtom self
  @returns   the result
**/
ApiList Chem_LinkAtom_SortedChemTorsions(Chem_LinkAtom self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChemTorsions");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: cannot find method 'sortedChemTorsions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: method 'sortedChemTorsions' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.molecule.ChemComp.AbstractChemAtom.stereochemistries

StereoChemistry 
objects that involve AbstractChemAtom
  @param  Chem_LinkAtom self
  @returns   the result
**/
ApiList Chem_LinkAtom_SortedStereochemistries(Chem_LinkAtom self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedStereochemistries");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: cannot find method 'sortedStereochemistries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkAtom: method 'sortedStereochemistries' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
