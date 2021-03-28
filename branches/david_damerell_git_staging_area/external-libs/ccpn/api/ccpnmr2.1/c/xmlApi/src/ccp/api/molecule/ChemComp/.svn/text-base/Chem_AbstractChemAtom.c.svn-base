
#include "ccp.h"

/*
  Atom in topology sense. E.g. Arg CB.
  
  The AbstractChemAtoms within a ChemComp comprise all atomds (including link atoms) contained in any form of the ChemComp. The ChemCompVars then select the appropriate subset of AbstractChemAtoms. Bonds, angles, Stereochemistry etc. are relevant only for the ChemCompVars that contain all AbstractChemAtoms involved.
  
  ChemAtom names are (should be) IUPAC and follow from the nature of the ChemComp. LinkAtom names (should) reflect the linkCode of the LinkEnd they are part of; the recommended style is that a LinkEnd with a linkCode 'prev' should have link atoms named 'prev_1' for the LinkAtom partaking in the bond and 'prev_2' for the other LinkAtom.
*/

/* package ccp.api.molecule.ChemComp */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_AbstractChemAtom self
  @param  Impl_ApplicationData value
**/
void *Chem_AbstractChemAtom_AddApplicationData(Chem_AbstractChemAtom self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: method 'addApplicationData' is not callable");
  
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
  @param  Chem_AbstractChemAtom self
  @param  Chem_ChemCompVar value
**/
void *Chem_AbstractChemAtom_AddChemCompVar(Chem_AbstractChemAtom self, Chem_ChemCompVar value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addChemCompVar");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: cannot find method 'addChemCompVar'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: method 'addChemCompVar' is not callable");
  
  args = PyTuple_Pack(1, value);
  
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
  @param  Chem_AbstractChemAtom self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_AbstractChemAtom_FindAllApplicationData(Chem_AbstractChemAtom self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: method 'findAllApplicationData' is not callable");
  
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
  @param  Chem_AbstractChemAtom self
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_AbstractChemAtom_FindAllApplicationData_keyval0(Chem_AbstractChemAtom self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_AbstractChemAtom_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_AbstractChemAtom self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_AbstractChemAtom_FindAllApplicationData_keyval1(Chem_AbstractChemAtom self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_AbstractChemAtom_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_AbstractChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_AbstractChemAtom_FindAllApplicationData_keyval2(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_AbstractChemAtom_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_AbstractChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_AbstractChemAtom_FindAllApplicationData_keyval3(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_AbstractChemAtom_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_AbstractChemAtom self
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
ApiList Chem_AbstractChemAtom_FindAllApplicationData_keyval4(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_AbstractChemAtom_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemAngles

ChemAngles involving 
AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_AbstractChemAtom_FindAllChemAngles(Chem_AbstractChemAtom self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChemAngles");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: cannot find method 'findAllChemAngles'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: method 'findAllChemAngles' is not callable");
  
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
  @param  Chem_AbstractChemAtom self
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_AbstractChemAtom_FindAllChemAngles_keyval0(Chem_AbstractChemAtom self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_AbstractChemAtom_FindAllChemAngles(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemAngles

ChemAngles involving 
AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_AbstractChemAtom_FindAllChemAngles_keyval1(Chem_AbstractChemAtom self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_AbstractChemAtom_FindAllChemAngles(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemAngles

ChemAngles involving 
AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_AbstractChemAtom_FindAllChemAngles_keyval2(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_AbstractChemAtom_FindAllChemAngles(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemAngles

ChemAngles involving 
AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_AbstractChemAtom_FindAllChemAngles_keyval3(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_AbstractChemAtom_FindAllChemAngles(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemAngles

ChemAngles involving 
AbstractChemAtom
  @param  Chem_AbstractChemAtom self
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
ApiSet Chem_AbstractChemAtom_FindAllChemAngles_keyval4(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_AbstractChemAtom_FindAllChemAngles(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.AbstractChemAtom.chemBonds

ChemBonds 
involving AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_AbstractChemAtom_FindAllChemBonds(Chem_AbstractChemAtom self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChemBonds");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: cannot find method 'findAllChemBonds'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: method 'findAllChemBonds' is not callable");
  
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
  @param  Chem_AbstractChemAtom self
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_AbstractChemAtom_FindAllChemBonds_keyval0(Chem_AbstractChemAtom self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_AbstractChemAtom_FindAllChemBonds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.AbstractChemAtom.chemBonds

ChemBonds 
involving AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_AbstractChemAtom_FindAllChemBonds_keyval1(Chem_AbstractChemAtom self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_AbstractChemAtom_FindAllChemBonds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.AbstractChemAtom.chemBonds

ChemBonds 
involving AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_AbstractChemAtom_FindAllChemBonds_keyval2(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_AbstractChemAtom_FindAllChemBonds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.AbstractChemAtom.chemBonds

ChemBonds 
involving AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_AbstractChemAtom_FindAllChemBonds_keyval3(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_AbstractChemAtom_FindAllChemBonds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.AbstractChemAtom.chemBonds

ChemBonds 
involving AbstractChemAtom
  @param  Chem_AbstractChemAtom self
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
ApiSet Chem_AbstractChemAtom_FindAllChemBonds_keyval4(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_AbstractChemAtom_FindAllChemBonds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemCompVars

ChemCompVars that 
contain AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_AbstractChemAtom_FindAllChemCompVars(Chem_AbstractChemAtom self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChemCompVars");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: cannot find method 'findAllChemCompVars'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: method 'findAllChemCompVars' is not callable");
  
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
  @param  Chem_AbstractChemAtom self
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_AbstractChemAtom_FindAllChemCompVars_keyval0(Chem_AbstractChemAtom self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_AbstractChemAtom_FindAllChemCompVars(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemCompVars

ChemCompVars that 
contain AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_AbstractChemAtom_FindAllChemCompVars_keyval1(Chem_AbstractChemAtom self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_AbstractChemAtom_FindAllChemCompVars(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemCompVars

ChemCompVars that 
contain AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_AbstractChemAtom_FindAllChemCompVars_keyval2(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_AbstractChemAtom_FindAllChemCompVars(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemCompVars

ChemCompVars that 
contain AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_AbstractChemAtom_FindAllChemCompVars_keyval3(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_AbstractChemAtom_FindAllChemCompVars(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemCompVars

ChemCompVars that 
contain AbstractChemAtom
  @param  Chem_AbstractChemAtom self
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
ApiSet Chem_AbstractChemAtom_FindAllChemCompVars_keyval4(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_AbstractChemAtom_FindAllChemCompVars(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemTorsions

ChemTorsions 
involving AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_AbstractChemAtom_FindAllChemTorsions(Chem_AbstractChemAtom self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChemTorsions");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: cannot find method 'findAllChemTorsions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: method 'findAllChemTorsions' is not callable");
  
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
  @param  Chem_AbstractChemAtom self
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_AbstractChemAtom_FindAllChemTorsions_keyval0(Chem_AbstractChemAtom self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_AbstractChemAtom_FindAllChemTorsions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemTorsions

ChemTorsions 
involving AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_AbstractChemAtom_FindAllChemTorsions_keyval1(Chem_AbstractChemAtom self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_AbstractChemAtom_FindAllChemTorsions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemTorsions

ChemTorsions 
involving AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_AbstractChemAtom_FindAllChemTorsions_keyval2(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_AbstractChemAtom_FindAllChemTorsions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemTorsions

ChemTorsions 
involving AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_AbstractChemAtom_FindAllChemTorsions_keyval3(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_AbstractChemAtom_FindAllChemTorsions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemTorsions

ChemTorsions 
involving AbstractChemAtom
  @param  Chem_AbstractChemAtom self
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
ApiSet Chem_AbstractChemAtom_FindAllChemTorsions_keyval4(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_AbstractChemAtom_FindAllChemTorsions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.stereochemistries

StereoChemistry 
objects that involve AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_AbstractChemAtom_FindAllStereochemistries(Chem_AbstractChemAtom self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllStereochemistries");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: cannot find method 'findAllStereochemistries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: method 'findAllStereochemistries' is not callable");
  
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
  @param  Chem_AbstractChemAtom self
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_AbstractChemAtom_FindAllStereochemistries_keyval0(Chem_AbstractChemAtom self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_AbstractChemAtom_FindAllStereochemistries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.stereochemistries

StereoChemistry 
objects that involve AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_AbstractChemAtom_FindAllStereochemistries_keyval1(Chem_AbstractChemAtom self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_AbstractChemAtom_FindAllStereochemistries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.stereochemistries

StereoChemistry 
objects that involve AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_AbstractChemAtom_FindAllStereochemistries_keyval2(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_AbstractChemAtom_FindAllStereochemistries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.stereochemistries

StereoChemistry 
objects that involve AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_AbstractChemAtom_FindAllStereochemistries_keyval3(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_AbstractChemAtom_FindAllStereochemistries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.stereochemistries

StereoChemistry 
objects that involve AbstractChemAtom
  @param  Chem_AbstractChemAtom self
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
ApiSet Chem_AbstractChemAtom_FindAllStereochemistries_keyval4(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_AbstractChemAtom_FindAllStereochemistries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_AbstractChemAtom self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chem_AbstractChemAtom_FindFirstApplicationData(Chem_AbstractChemAtom self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: method 'findFirstApplicationData' is not callable");
  
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
  @param  Chem_AbstractChemAtom self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chem_AbstractChemAtom_FindFirstApplicationData_keyval0(Chem_AbstractChemAtom self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_AbstractChemAtom_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_AbstractChemAtom self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chem_AbstractChemAtom_FindFirstApplicationData_keyval1(Chem_AbstractChemAtom self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_AbstractChemAtom_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_AbstractChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chem_AbstractChemAtom_FindFirstApplicationData_keyval2(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_AbstractChemAtom_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_AbstractChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chem_AbstractChemAtom_FindFirstApplicationData_keyval3(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_AbstractChemAtom_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_AbstractChemAtom self
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
Impl_ApplicationData Chem_AbstractChemAtom_FindFirstApplicationData_keyval4(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_AbstractChemAtom_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemAngles

ChemAngles involving 
AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemAngle Chem_AbstractChemAtom_FindFirstChemAngle(Chem_AbstractChemAtom self, ApiMap conditions)
{
  
  Chem_ChemAngle obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChemAngle");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: cannot find method 'findFirstChemAngle'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: method 'findFirstChemAngle' is not callable");
  
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
  @param  Chem_AbstractChemAtom self
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemAngle Chem_AbstractChemAtom_FindFirstChemAngle_keyval0(Chem_AbstractChemAtom self)
{
  
  Chem_ChemAngle  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_AbstractChemAtom_FindFirstChemAngle(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemAngles

ChemAngles involving 
AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemAngle Chem_AbstractChemAtom_FindFirstChemAngle_keyval1(Chem_AbstractChemAtom self, char * key, ApiObject value)
{
  
  Chem_ChemAngle  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_AbstractChemAtom_FindFirstChemAngle(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemAngles

ChemAngles involving 
AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemAngle Chem_AbstractChemAtom_FindFirstChemAngle_keyval2(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chem_ChemAngle  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_AbstractChemAtom_FindFirstChemAngle(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemAngles

ChemAngles involving 
AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemAngle Chem_AbstractChemAtom_FindFirstChemAngle_keyval3(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chem_ChemAngle  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_AbstractChemAtom_FindFirstChemAngle(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemAngles

ChemAngles involving 
AbstractChemAtom
  @param  Chem_AbstractChemAtom self
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
Chem_ChemAngle Chem_AbstractChemAtom_FindFirstChemAngle_keyval4(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chem_ChemAngle  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_AbstractChemAtom_FindFirstChemAngle(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemBonds

ChemBonds involving 
AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemBond Chem_AbstractChemAtom_FindFirstChemBond(Chem_AbstractChemAtom self, ApiMap conditions)
{
  
  Chem_ChemBond obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChemBond");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: cannot find method 'findFirstChemBond'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: method 'findFirstChemBond' is not callable");
  
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
  @param  Chem_AbstractChemAtom self
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemBond Chem_AbstractChemAtom_FindFirstChemBond_keyval0(Chem_AbstractChemAtom self)
{
  
  Chem_ChemBond  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_AbstractChemAtom_FindFirstChemBond(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemBonds

ChemBonds involving 
AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemBond Chem_AbstractChemAtom_FindFirstChemBond_keyval1(Chem_AbstractChemAtom self, char * key, ApiObject value)
{
  
  Chem_ChemBond  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_AbstractChemAtom_FindFirstChemBond(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemBonds

ChemBonds involving 
AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemBond Chem_AbstractChemAtom_FindFirstChemBond_keyval2(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chem_ChemBond  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_AbstractChemAtom_FindFirstChemBond(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemBonds

ChemBonds involving 
AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemBond Chem_AbstractChemAtom_FindFirstChemBond_keyval3(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chem_ChemBond  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_AbstractChemAtom_FindFirstChemBond(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemBonds

ChemBonds involving 
AbstractChemAtom
  @param  Chem_AbstractChemAtom self
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
Chem_ChemBond Chem_AbstractChemAtom_FindFirstChemBond_keyval4(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chem_ChemBond  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_AbstractChemAtom_FindFirstChemBond(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemCompVars

ChemCompVars that 
contain AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemCompVar Chem_AbstractChemAtom_FindFirstChemCompVar(Chem_AbstractChemAtom self, ApiMap conditions)
{
  
  Chem_ChemCompVar obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChemCompVar");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: cannot find method 'findFirstChemCompVar'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: method 'findFirstChemCompVar' is not callable");
  
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
  @param  Chem_AbstractChemAtom self
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemCompVar Chem_AbstractChemAtom_FindFirstChemCompVar_keyval0(Chem_AbstractChemAtom self)
{
  
  Chem_ChemCompVar  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_AbstractChemAtom_FindFirstChemCompVar(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemCompVars

ChemCompVars that 
contain AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemCompVar Chem_AbstractChemAtom_FindFirstChemCompVar_keyval1(Chem_AbstractChemAtom self, char * key, ApiObject value)
{
  
  Chem_ChemCompVar  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_AbstractChemAtom_FindFirstChemCompVar(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemCompVars

ChemCompVars that 
contain AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemCompVar Chem_AbstractChemAtom_FindFirstChemCompVar_keyval2(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chem_ChemCompVar  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_AbstractChemAtom_FindFirstChemCompVar(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemCompVars

ChemCompVars that 
contain AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemCompVar Chem_AbstractChemAtom_FindFirstChemCompVar_keyval3(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chem_ChemCompVar  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_AbstractChemAtom_FindFirstChemCompVar(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemCompVars

ChemCompVars that 
contain AbstractChemAtom
  @param  Chem_AbstractChemAtom self
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
Chem_ChemCompVar Chem_AbstractChemAtom_FindFirstChemCompVar_keyval4(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chem_ChemCompVar  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_AbstractChemAtom_FindFirstChemCompVar(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemTorsions

ChemTorsions 
involving AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemTorsion Chem_AbstractChemAtom_FindFirstChemTorsion(Chem_AbstractChemAtom self, ApiMap conditions)
{
  
  Chem_ChemTorsion obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChemTorsion");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: cannot find method 'findFirstChemTorsion'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: method 'findFirstChemTorsion' is not callable");
  
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
  @param  Chem_AbstractChemAtom self
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemTorsion Chem_AbstractChemAtom_FindFirstChemTorsion_keyval0(Chem_AbstractChemAtom self)
{
  
  Chem_ChemTorsion  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_AbstractChemAtom_FindFirstChemTorsion(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemTorsions

ChemTorsions 
involving AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemTorsion Chem_AbstractChemAtom_FindFirstChemTorsion_keyval1(Chem_AbstractChemAtom self, char * key, ApiObject value)
{
  
  Chem_ChemTorsion  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_AbstractChemAtom_FindFirstChemTorsion(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemTorsions

ChemTorsions 
involving AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemTorsion Chem_AbstractChemAtom_FindFirstChemTorsion_keyval2(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chem_ChemTorsion  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_AbstractChemAtom_FindFirstChemTorsion(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemTorsions

ChemTorsions 
involving AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemTorsion Chem_AbstractChemAtom_FindFirstChemTorsion_keyval3(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chem_ChemTorsion  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_AbstractChemAtom_FindFirstChemTorsion(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemTorsions

ChemTorsions 
involving AbstractChemAtom
  @param  Chem_AbstractChemAtom self
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
Chem_ChemTorsion Chem_AbstractChemAtom_FindFirstChemTorsion_keyval4(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chem_ChemTorsion  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_AbstractChemAtom_FindFirstChemTorsion(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.stereochemistries

StereoChemistry 
objects that involve AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chem_Stereochemistry Chem_AbstractChemAtom_FindFirstStereochemistry(Chem_AbstractChemAtom self, ApiMap conditions)
{
  
  Chem_Stereochemistry obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstStereochemistry");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: cannot find method 'findFirstStereochemistry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: method 'findFirstStereochemistry' is not callable");
  
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
  @param  Chem_AbstractChemAtom self
  @returns  the first value that satisfies the conditions 
**/
Chem_Stereochemistry Chem_AbstractChemAtom_FindFirstStereochemistry_keyval0(Chem_AbstractChemAtom self)
{
  
  Chem_Stereochemistry  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_AbstractChemAtom_FindFirstStereochemistry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.stereochemistries

StereoChemistry 
objects that involve AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chem_Stereochemistry Chem_AbstractChemAtom_FindFirstStereochemistry_keyval1(Chem_AbstractChemAtom self, char * key, ApiObject value)
{
  
  Chem_Stereochemistry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_AbstractChemAtom_FindFirstStereochemistry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.stereochemistries

StereoChemistry 
objects that involve AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chem_Stereochemistry Chem_AbstractChemAtom_FindFirstStereochemistry_keyval2(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chem_Stereochemistry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_AbstractChemAtom_FindFirstStereochemistry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.stereochemistries

StereoChemistry 
objects that involve AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chem_Stereochemistry Chem_AbstractChemAtom_FindFirstStereochemistry_keyval3(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chem_Stereochemistry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_AbstractChemAtom_FindFirstStereochemistry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.stereochemistries

StereoChemistry 
objects that involve AbstractChemAtom
  @param  Chem_AbstractChemAtom self
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
Chem_Stereochemistry Chem_AbstractChemAtom_FindFirstStereochemistry_keyval4(Chem_AbstractChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chem_Stereochemistry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_AbstractChemAtom_FindFirstStereochemistry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Chem_AbstractChemAtom self
  @returns   the result
**/
Acco_AccessObject Chem_AbstractChemAtom_GetAccess(Chem_AbstractChemAtom self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: method 'getAccess' is not callable");
  
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
  @param  Chem_AbstractChemAtom self
  @returns   the result
**/
Acco_AccessObject Chem_AbstractChemAtom_GetActiveAccess(Chem_AbstractChemAtom self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: method 'getActiveAccess' is not callable");
  
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
  @param  Chem_AbstractChemAtom self
  @returns   the result
**/
ApiList Chem_AbstractChemAtom_GetApplicationData(Chem_AbstractChemAtom self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.molecule.ChemComp.AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Chem_AbstractChemAtom Chem_AbstractChemAtom_GetByKey(Chem_AbstractChemAtom self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Chem_AbstractChemAtom obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: method 'getByKey' is not callable");
  
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
  @param  Chem_AbstractChemAtom self
  @returns   the result
**/
ApiSet Chem_AbstractChemAtom_GetChemAngles(Chem_AbstractChemAtom self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemAngles");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: cannot find method 'getChemAngles'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: method 'getChemAngles' is not callable");
  
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
  @param  Chem_AbstractChemAtom self
  @returns   the result
**/
ApiSet Chem_AbstractChemAtom_GetChemBonds(Chem_AbstractChemAtom self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemBonds");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: cannot find method 'getChemBonds'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: method 'getChemBonds' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.AbstractChemAtom.chemComp

parent link
  @param  Chem_AbstractChemAtom self
  @returns   the result
**/
Chem_ChemComp Chem_AbstractChemAtom_GetChemComp(Chem_AbstractChemAtom self)
{
  
  Chem_ChemComp obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemComp");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: cannot find method 'getChemComp'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: method 'getChemComp' is not callable");
  
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
  @param  Chem_AbstractChemAtom self
  @returns   the result
**/
ApiSet Chem_AbstractChemAtom_GetChemCompVars(Chem_AbstractChemAtom self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemCompVars");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: cannot find method 'getChemCompVars'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: method 'getChemCompVars' is not callable");
  
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
  @param  Chem_AbstractChemAtom self
  @returns   the result
**/
ApiSet Chem_AbstractChemAtom_GetChemTorsions(Chem_AbstractChemAtom self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemTorsions");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: cannot find method 'getChemTorsions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: method 'getChemTorsions' is not callable");
  
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
  @param  Chem_AbstractChemAtom self
  @returns   the result
**/
ApiString Chem_AbstractChemAtom_GetClassName(Chem_AbstractChemAtom self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: method 'getClassName' is not callable");
  
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
  @param  Chem_AbstractChemAtom self
  @returns   the result
**/
ApiList Chem_AbstractChemAtom_GetFieldNames(Chem_AbstractChemAtom self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.molecule.ChemComp.AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Chem_AbstractChemAtom_GetFullKey(Chem_AbstractChemAtom self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: method 'getFullKey' is not callable");
  
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
  @param  Chem_AbstractChemAtom self
  @returns   the result
**/
ApiBoolean Chem_AbstractChemAtom_GetInConstructor(Chem_AbstractChemAtom self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: method 'getInConstructor' is not callable");
  
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
  @param  Chem_AbstractChemAtom self
  @returns   the result
**/
ApiBoolean Chem_AbstractChemAtom_GetIsDeleted(Chem_AbstractChemAtom self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.molecule.ChemComp.AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @returns  Local object key
**/
ApiObject Chem_AbstractChemAtom_GetLocalKey(Chem_AbstractChemAtom self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.AbstractChemAtom.name

name of ChemAtom
  @param  Chem_AbstractChemAtom self
  @returns   the result
**/
ApiString Chem_AbstractChemAtom_GetName(Chem_AbstractChemAtom self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: method 'getName' is not callable");
  
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
  @param  Chem_AbstractChemAtom self
  @returns   the result
**/
ApiString Chem_AbstractChemAtom_GetPackageName(Chem_AbstractChemAtom self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: method 'getPackageName' is not callable");
  
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
  @param  Chem_AbstractChemAtom self
  @returns   the result
**/
ApiString Chem_AbstractChemAtom_GetPackageShortName(Chem_AbstractChemAtom self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: method 'getPackageShortName' is not callable");
  
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
  @param  Chem_AbstractChemAtom self
  @returns   the result
**/
Chem_ChemComp Chem_AbstractChemAtom_GetParent(Chem_AbstractChemAtom self)
{
  
  Chem_ChemComp obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: method 'getParent' is not callable");
  
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
  @param  Chem_AbstractChemAtom self
  @returns   the result
**/
ApiString Chem_AbstractChemAtom_GetQualifiedName(Chem_AbstractChemAtom self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: method 'getQualifiedName' is not callable");
  
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
  @param  Chem_AbstractChemAtom self
  @returns   the result
**/
Impl_MemopsRoot Chem_AbstractChemAtom_GetRoot(Chem_AbstractChemAtom self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: method 'getRoot' is not callable");
  
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
  @param  Chem_AbstractChemAtom self
  @returns   the result
**/
ApiSet Chem_AbstractChemAtom_GetStereochemistries(Chem_AbstractChemAtom self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getStereochemistries");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: cannot find method 'getStereochemistries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: method 'getStereochemistries' is not callable");
  
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
  @param  Chem_AbstractChemAtom self
  @returns   the result
**/
ApiInteger Chem_AbstractChemAtom_GetSubType(Chem_AbstractChemAtom self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSubType");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: cannot find method 'getSubType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: method 'getSubType' is not callable");
  
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
  @param  Chem_AbstractChemAtom self
  @returns   the result
**/
Impl_TopObject Chem_AbstractChemAtom_GetTopObject(Chem_AbstractChemAtom self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_AbstractChemAtom self
  @param  Impl_ApplicationData value
**/
void *Chem_AbstractChemAtom_RemoveApplicationData(Chem_AbstractChemAtom self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: method 'removeApplicationData' is not callable");
  
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
  @param  Chem_AbstractChemAtom self
  @param  Chem_ChemCompVar value
**/
void *Chem_AbstractChemAtom_RemoveChemCompVar(Chem_AbstractChemAtom self, Chem_ChemCompVar value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeChemCompVar");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: cannot find method 'removeChemCompVar'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: method 'removeChemCompVar' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Chem_AbstractChemAtom self
  @param  Acco_AccessObject value
**/
void *Chem_AbstractChemAtom_SetAccess(Chem_AbstractChemAtom self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: method 'setAccess' is not callable");
  
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
  @param  Chem_AbstractChemAtom self
  @param  ApiList values
**/
void *Chem_AbstractChemAtom_SetApplicationData(Chem_AbstractChemAtom self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.AbstractChemAtom.chemAngles

ChemAngles 
involving AbstractChemAtom
  @param  Chem_AbstractChemAtom self
  @param  ApiSet values
**/
void *Chem_AbstractChemAtom_SetChemAngles(Chem_AbstractChemAtom self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setChemAngles");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: cannot find method 'setChemAngles'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: method 'setChemAngles' is not callable");
  
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
  @param  Chem_AbstractChemAtom self
  @param  ApiSet values
**/
void *Chem_AbstractChemAtom_SetChemBonds(Chem_AbstractChemAtom self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setChemBonds");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: cannot find method 'setChemBonds'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: method 'setChemBonds' is not callable");
  
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
  @param  Chem_AbstractChemAtom self
  @param  ApiSet values
**/
void *Chem_AbstractChemAtom_SetChemCompVars(Chem_AbstractChemAtom self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setChemCompVars");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: cannot find method 'setChemCompVars'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: method 'setChemCompVars' is not callable");
  
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
  @param  Chem_AbstractChemAtom self
  @param  ApiSet values
**/
void *Chem_AbstractChemAtom_SetChemTorsions(Chem_AbstractChemAtom self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setChemTorsions");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: cannot find method 'setChemTorsions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: method 'setChemTorsions' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.AbstractChemAtom.name

name of ChemAtom
  @param  Chem_AbstractChemAtom self
  @param  ApiString value
**/
void *Chem_AbstractChemAtom_SetName(Chem_AbstractChemAtom self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: method 'setName' is not callable");
  
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
  @param  Chem_AbstractChemAtom self
  @param  ApiSet values
**/
void *Chem_AbstractChemAtom_SetStereochemistries(Chem_AbstractChemAtom self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setStereochemistries");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: cannot find method 'setStereochemistries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: method 'setStereochemistries' is not callable");
  
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
  @param  Chem_AbstractChemAtom self
  @param  ApiInteger value
**/
void *Chem_AbstractChemAtom_SetSubType(Chem_AbstractChemAtom self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSubType");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: cannot find method 'setSubType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: method 'setSubType' is not callable");
  
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
  @param  Chem_AbstractChemAtom self
  @returns   the result
**/
ApiList Chem_AbstractChemAtom_SortedChemAngles(Chem_AbstractChemAtom self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChemAngles");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: cannot find method 'sortedChemAngles'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: method 'sortedChemAngles' is not callable");
  
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
  @param  Chem_AbstractChemAtom self
  @returns   the result
**/
ApiList Chem_AbstractChemAtom_SortedChemBonds(Chem_AbstractChemAtom self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChemBonds");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: cannot find method 'sortedChemBonds'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: method 'sortedChemBonds' is not callable");
  
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
  @param  Chem_AbstractChemAtom self
  @returns   the result
**/
ApiList Chem_AbstractChemAtom_SortedChemCompVars(Chem_AbstractChemAtom self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChemCompVars");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: cannot find method 'sortedChemCompVars'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: method 'sortedChemCompVars' is not callable");
  
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
  @param  Chem_AbstractChemAtom self
  @returns   the result
**/
ApiList Chem_AbstractChemAtom_SortedChemTorsions(Chem_AbstractChemAtom self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChemTorsions");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: cannot find method 'sortedChemTorsions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: method 'sortedChemTorsions' is not callable");
  
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
  @param  Chem_AbstractChemAtom self
  @returns   the result
**/
ApiList Chem_AbstractChemAtom_SortedStereochemistries(Chem_AbstractChemAtom self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedStereochemistries");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: cannot find method 'sortedStereochemistries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AbstractChemAtom: method 'sortedStereochemistries' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
