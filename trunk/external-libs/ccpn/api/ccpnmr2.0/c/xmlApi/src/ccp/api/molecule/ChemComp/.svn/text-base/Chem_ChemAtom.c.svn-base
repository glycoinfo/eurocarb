
#include "ccp.h"

/*
  Atom, in the sense of a part of a toplogical description of a ChemComp. ChemAtoms, unlike LinkAtoms, are part of the ChemComp itself.
*/

/* package ccp.api.molecule.ChemComp */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemAtom self
  @param  Impl_ApplicationData value
**/
void *Chem_ChemAtom_AddApplicationData(Chem_ChemAtom self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'addApplicationData' is not callable");
  
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
  @param  Chem_ChemAtom self
  @param  Chem_ChemCompVar value
**/
void *Chem_ChemAtom_AddChemCompVar(Chem_ChemAtom self, Chem_ChemCompVar value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addChemCompVar");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'addChemCompVar'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'addChemCompVar' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.molecule.ChemComp.ChemAtom
  @param  Chem_ChemAtom self
  @param  ApiBoolean complete
**/
void *Chem_ChemAtom_CheckAllValid(Chem_ChemAtom self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.molecule.ChemComp.ChemAtom
  @param  Chem_ChemAtom self
  @param  ApiBoolean complete
**/
void *Chem_ChemAtom_CheckValid(Chem_ChemAtom self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'checkValid' is not callable");
  
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
  @param  Chem_ChemAtom self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_ChemAtom_FindAllApplicationData(Chem_ChemAtom self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'findAllApplicationData' is not callable");
  
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
  @param  Chem_ChemAtom self
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_ChemAtom_FindAllApplicationData_keyval0(Chem_ChemAtom self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_ChemAtom_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemAtom self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_ChemAtom_FindAllApplicationData_keyval1(Chem_ChemAtom self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_ChemAtom_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_ChemAtom_FindAllApplicationData_keyval2(Chem_ChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_ChemAtom_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_ChemAtom_FindAllApplicationData_keyval3(Chem_ChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_ChemAtom_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemAtom self
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
ApiList Chem_ChemAtom_FindAllApplicationData_keyval4(Chem_ChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_ChemAtom_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemAtom.boundLinkEnds

linkEnds with 
an out-of-ChemComp bond parting directly from ChemAtom.
  @param  Chem_ChemAtom self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemAtom_FindAllBoundLinkEnds(Chem_ChemAtom self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllBoundLinkEnds");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'findAllBoundLinkEnds'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'findAllBoundLinkEnds' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemAtom.boundLinkEnds

linkEnds with 
an out-of-ChemComp bond parting directly from ChemAtom.
  @param  Chem_ChemAtom self
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemAtom_FindAllBoundLinkEnds_keyval0(Chem_ChemAtom self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_ChemAtom_FindAllBoundLinkEnds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemAtom.boundLinkEnds

linkEnds with 
an out-of-ChemComp bond parting directly from ChemAtom.
  @param  Chem_ChemAtom self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemAtom_FindAllBoundLinkEnds_keyval1(Chem_ChemAtom self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_ChemAtom_FindAllBoundLinkEnds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemAtom.boundLinkEnds

linkEnds with 
an out-of-ChemComp bond parting directly from ChemAtom.
  @param  Chem_ChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemAtom_FindAllBoundLinkEnds_keyval2(Chem_ChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_ChemAtom_FindAllBoundLinkEnds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemAtom.boundLinkEnds

linkEnds with 
an out-of-ChemComp bond parting directly from ChemAtom.
  @param  Chem_ChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemAtom_FindAllBoundLinkEnds_keyval3(Chem_ChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_ChemAtom_FindAllBoundLinkEnds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemAtom.boundLinkEnds

linkEnds with 
an out-of-ChemComp bond parting directly from ChemAtom.
  @param  Chem_ChemAtom self
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
ApiSet Chem_ChemAtom_FindAllBoundLinkEnds_keyval4(Chem_ChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_ChemAtom_FindAllBoundLinkEnds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemAngles

ChemAngles involving 
AbstractChemAtom
  @param  Chem_ChemAtom self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemAtom_FindAllChemAngles(Chem_ChemAtom self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChemAngles");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'findAllChemAngles'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'findAllChemAngles' is not callable");
  
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
  @param  Chem_ChemAtom self
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemAtom_FindAllChemAngles_keyval0(Chem_ChemAtom self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_ChemAtom_FindAllChemAngles(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemAngles

ChemAngles involving 
AbstractChemAtom
  @param  Chem_ChemAtom self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemAtom_FindAllChemAngles_keyval1(Chem_ChemAtom self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_ChemAtom_FindAllChemAngles(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemAngles

ChemAngles involving 
AbstractChemAtom
  @param  Chem_ChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemAtom_FindAllChemAngles_keyval2(Chem_ChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_ChemAtom_FindAllChemAngles(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemAngles

ChemAngles involving 
AbstractChemAtom
  @param  Chem_ChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemAtom_FindAllChemAngles_keyval3(Chem_ChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_ChemAtom_FindAllChemAngles(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemAngles

ChemAngles involving 
AbstractChemAtom
  @param  Chem_ChemAtom self
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
ApiSet Chem_ChemAtom_FindAllChemAngles_keyval4(Chem_ChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_ChemAtom_FindAllChemAngles(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.AbstractChemAtom.chemBonds

ChemBonds 
involving AbstractChemAtom
  @param  Chem_ChemAtom self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemAtom_FindAllChemBonds(Chem_ChemAtom self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChemBonds");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'findAllChemBonds'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'findAllChemBonds' is not callable");
  
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
  @param  Chem_ChemAtom self
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemAtom_FindAllChemBonds_keyval0(Chem_ChemAtom self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_ChemAtom_FindAllChemBonds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.AbstractChemAtom.chemBonds

ChemBonds 
involving AbstractChemAtom
  @param  Chem_ChemAtom self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemAtom_FindAllChemBonds_keyval1(Chem_ChemAtom self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_ChemAtom_FindAllChemBonds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.AbstractChemAtom.chemBonds

ChemBonds 
involving AbstractChemAtom
  @param  Chem_ChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemAtom_FindAllChemBonds_keyval2(Chem_ChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_ChemAtom_FindAllChemBonds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.AbstractChemAtom.chemBonds

ChemBonds 
involving AbstractChemAtom
  @param  Chem_ChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemAtom_FindAllChemBonds_keyval3(Chem_ChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_ChemAtom_FindAllChemBonds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.AbstractChemAtom.chemBonds

ChemBonds 
involving AbstractChemAtom
  @param  Chem_ChemAtom self
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
ApiSet Chem_ChemAtom_FindAllChemBonds_keyval4(Chem_ChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_ChemAtom_FindAllChemBonds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemCompVars

ChemCompVars that 
contain AbstractChemAtom
  @param  Chem_ChemAtom self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemAtom_FindAllChemCompVars(Chem_ChemAtom self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChemCompVars");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'findAllChemCompVars'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'findAllChemCompVars' is not callable");
  
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
  @param  Chem_ChemAtom self
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemAtom_FindAllChemCompVars_keyval0(Chem_ChemAtom self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_ChemAtom_FindAllChemCompVars(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemCompVars

ChemCompVars that 
contain AbstractChemAtom
  @param  Chem_ChemAtom self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemAtom_FindAllChemCompVars_keyval1(Chem_ChemAtom self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_ChemAtom_FindAllChemCompVars(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemCompVars

ChemCompVars that 
contain AbstractChemAtom
  @param  Chem_ChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemAtom_FindAllChemCompVars_keyval2(Chem_ChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_ChemAtom_FindAllChemCompVars(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemCompVars

ChemCompVars that 
contain AbstractChemAtom
  @param  Chem_ChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemAtom_FindAllChemCompVars_keyval3(Chem_ChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_ChemAtom_FindAllChemCompVars(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemCompVars

ChemCompVars that 
contain AbstractChemAtom
  @param  Chem_ChemAtom self
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
ApiSet Chem_ChemAtom_FindAllChemCompVars_keyval4(Chem_ChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_ChemAtom_FindAllChemCompVars(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemTorsions

ChemTorsions 
involving AbstractChemAtom
  @param  Chem_ChemAtom self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemAtom_FindAllChemTorsions(Chem_ChemAtom self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChemTorsions");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'findAllChemTorsions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'findAllChemTorsions' is not callable");
  
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
  @param  Chem_ChemAtom self
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemAtom_FindAllChemTorsions_keyval0(Chem_ChemAtom self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_ChemAtom_FindAllChemTorsions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemTorsions

ChemTorsions 
involving AbstractChemAtom
  @param  Chem_ChemAtom self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemAtom_FindAllChemTorsions_keyval1(Chem_ChemAtom self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_ChemAtom_FindAllChemTorsions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemTorsions

ChemTorsions 
involving AbstractChemAtom
  @param  Chem_ChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemAtom_FindAllChemTorsions_keyval2(Chem_ChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_ChemAtom_FindAllChemTorsions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemTorsions

ChemTorsions 
involving AbstractChemAtom
  @param  Chem_ChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemAtom_FindAllChemTorsions_keyval3(Chem_ChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_ChemAtom_FindAllChemTorsions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.chemTorsions

ChemTorsions 
involving AbstractChemAtom
  @param  Chem_ChemAtom self
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
ApiSet Chem_ChemAtom_FindAllChemTorsions_keyval4(Chem_ChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_ChemAtom_FindAllChemTorsions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemAtom.remoteLinkEnds

LinkEnds 
where ChemAtom participates as remote ChemAtom
  @param  Chem_ChemAtom self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemAtom_FindAllRemoteLinkEnds(Chem_ChemAtom self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllRemoteLinkEnds");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'findAllRemoteLinkEnds'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'findAllRemoteLinkEnds' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemAtom.remoteLinkEnds

LinkEnds 
where ChemAtom participates as remote ChemAtom
  @param  Chem_ChemAtom self
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemAtom_FindAllRemoteLinkEnds_keyval0(Chem_ChemAtom self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_ChemAtom_FindAllRemoteLinkEnds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemAtom.remoteLinkEnds

LinkEnds 
where ChemAtom participates as remote ChemAtom
  @param  Chem_ChemAtom self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemAtom_FindAllRemoteLinkEnds_keyval1(Chem_ChemAtom self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_ChemAtom_FindAllRemoteLinkEnds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemAtom.remoteLinkEnds

LinkEnds 
where ChemAtom participates as remote ChemAtom
  @param  Chem_ChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemAtom_FindAllRemoteLinkEnds_keyval2(Chem_ChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_ChemAtom_FindAllRemoteLinkEnds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemAtom.remoteLinkEnds

LinkEnds 
where ChemAtom participates as remote ChemAtom
  @param  Chem_ChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemAtom_FindAllRemoteLinkEnds_keyval3(Chem_ChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_ChemAtom_FindAllRemoteLinkEnds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemAtom.remoteLinkEnds

LinkEnds 
where ChemAtom participates as remote ChemAtom
  @param  Chem_ChemAtom self
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
ApiSet Chem_ChemAtom_FindAllRemoteLinkEnds_keyval4(Chem_ChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_ChemAtom_FindAllRemoteLinkEnds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.stereochemistries

StereoChemistry 
objects that involve AbstractChemAtom
  @param  Chem_ChemAtom self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemAtom_FindAllStereochemistries(Chem_ChemAtom self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllStereochemistries");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'findAllStereochemistries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'findAllStereochemistries' is not callable");
  
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
  @param  Chem_ChemAtom self
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemAtom_FindAllStereochemistries_keyval0(Chem_ChemAtom self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_ChemAtom_FindAllStereochemistries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.stereochemistries

StereoChemistry 
objects that involve AbstractChemAtom
  @param  Chem_ChemAtom self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemAtom_FindAllStereochemistries_keyval1(Chem_ChemAtom self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_ChemAtom_FindAllStereochemistries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.stereochemistries

StereoChemistry 
objects that involve AbstractChemAtom
  @param  Chem_ChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemAtom_FindAllStereochemistries_keyval2(Chem_ChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_ChemAtom_FindAllStereochemistries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.stereochemistries

StereoChemistry 
objects that involve AbstractChemAtom
  @param  Chem_ChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemAtom_FindAllStereochemistries_keyval3(Chem_ChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_ChemAtom_FindAllStereochemistries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.AbstractChemAtom.stereochemistries

StereoChemistry 
objects that involve AbstractChemAtom
  @param  Chem_ChemAtom self
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
ApiSet Chem_ChemAtom_FindAllStereochemistries_keyval4(Chem_ChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_ChemAtom_FindAllStereochemistries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemAtom self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chem_ChemAtom_FindFirstApplicationData(Chem_ChemAtom self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'findFirstApplicationData' is not callable");
  
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
  @param  Chem_ChemAtom self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chem_ChemAtom_FindFirstApplicationData_keyval0(Chem_ChemAtom self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_ChemAtom_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemAtom self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chem_ChemAtom_FindFirstApplicationData_keyval1(Chem_ChemAtom self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_ChemAtom_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chem_ChemAtom_FindFirstApplicationData_keyval2(Chem_ChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_ChemAtom_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chem_ChemAtom_FindFirstApplicationData_keyval3(Chem_ChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_ChemAtom_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemAtom self
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
Impl_ApplicationData Chem_ChemAtom_FindFirstApplicationData_keyval4(Chem_ChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_ChemAtom_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemAtom.boundLinkEnds

linkEnds 
with an out-of-ChemComp bond parting directly from ChemAtom.
  @param  Chem_ChemAtom self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chem_LinkEnd Chem_ChemAtom_FindFirstBoundLinkEnd(Chem_ChemAtom self, ApiMap conditions)
{
  
  Chem_LinkEnd obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstBoundLinkEnd");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'findFirstBoundLinkEnd'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'findFirstBoundLinkEnd' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemAtom.boundLinkEnds

linkEnds 
with an out-of-ChemComp bond parting directly from ChemAtom.
  @param  Chem_ChemAtom self
  @returns  the first value that satisfies the conditions 
**/
Chem_LinkEnd Chem_ChemAtom_FindFirstBoundLinkEnd_keyval0(Chem_ChemAtom self)
{
  
  Chem_LinkEnd  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_ChemAtom_FindFirstBoundLinkEnd(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemAtom.boundLinkEnds

linkEnds 
with an out-of-ChemComp bond parting directly from ChemAtom.
  @param  Chem_ChemAtom self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chem_LinkEnd Chem_ChemAtom_FindFirstBoundLinkEnd_keyval1(Chem_ChemAtom self, char * key, ApiObject value)
{
  
  Chem_LinkEnd  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_ChemAtom_FindFirstBoundLinkEnd(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemAtom.boundLinkEnds

linkEnds 
with an out-of-ChemComp bond parting directly from ChemAtom.
  @param  Chem_ChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chem_LinkEnd Chem_ChemAtom_FindFirstBoundLinkEnd_keyval2(Chem_ChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chem_LinkEnd  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_ChemAtom_FindFirstBoundLinkEnd(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemAtom.boundLinkEnds

linkEnds 
with an out-of-ChemComp bond parting directly from ChemAtom.
  @param  Chem_ChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chem_LinkEnd Chem_ChemAtom_FindFirstBoundLinkEnd_keyval3(Chem_ChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chem_LinkEnd  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_ChemAtom_FindFirstBoundLinkEnd(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemAtom.boundLinkEnds

linkEnds 
with an out-of-ChemComp bond parting directly from ChemAtom.
  @param  Chem_ChemAtom self
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
Chem_LinkEnd Chem_ChemAtom_FindFirstBoundLinkEnd_keyval4(Chem_ChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chem_LinkEnd  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_ChemAtom_FindFirstBoundLinkEnd(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemAngles

ChemAngles involving 
AbstractChemAtom
  @param  Chem_ChemAtom self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemAngle Chem_ChemAtom_FindFirstChemAngle(Chem_ChemAtom self, ApiMap conditions)
{
  
  Chem_ChemAngle obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChemAngle");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'findFirstChemAngle'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'findFirstChemAngle' is not callable");
  
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
  @param  Chem_ChemAtom self
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemAngle Chem_ChemAtom_FindFirstChemAngle_keyval0(Chem_ChemAtom self)
{
  
  Chem_ChemAngle  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_ChemAtom_FindFirstChemAngle(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemAngles

ChemAngles involving 
AbstractChemAtom
  @param  Chem_ChemAtom self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemAngle Chem_ChemAtom_FindFirstChemAngle_keyval1(Chem_ChemAtom self, char * key, ApiObject value)
{
  
  Chem_ChemAngle  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_ChemAtom_FindFirstChemAngle(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemAngles

ChemAngles involving 
AbstractChemAtom
  @param  Chem_ChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemAngle Chem_ChemAtom_FindFirstChemAngle_keyval2(Chem_ChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chem_ChemAngle  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_ChemAtom_FindFirstChemAngle(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemAngles

ChemAngles involving 
AbstractChemAtom
  @param  Chem_ChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemAngle Chem_ChemAtom_FindFirstChemAngle_keyval3(Chem_ChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chem_ChemAngle  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_ChemAtom_FindFirstChemAngle(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemAngles

ChemAngles involving 
AbstractChemAtom
  @param  Chem_ChemAtom self
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
Chem_ChemAngle Chem_ChemAtom_FindFirstChemAngle_keyval4(Chem_ChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chem_ChemAngle  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_ChemAtom_FindFirstChemAngle(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemBonds

ChemBonds involving 
AbstractChemAtom
  @param  Chem_ChemAtom self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemBond Chem_ChemAtom_FindFirstChemBond(Chem_ChemAtom self, ApiMap conditions)
{
  
  Chem_ChemBond obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChemBond");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'findFirstChemBond'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'findFirstChemBond' is not callable");
  
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
  @param  Chem_ChemAtom self
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemBond Chem_ChemAtom_FindFirstChemBond_keyval0(Chem_ChemAtom self)
{
  
  Chem_ChemBond  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_ChemAtom_FindFirstChemBond(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemBonds

ChemBonds involving 
AbstractChemAtom
  @param  Chem_ChemAtom self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemBond Chem_ChemAtom_FindFirstChemBond_keyval1(Chem_ChemAtom self, char * key, ApiObject value)
{
  
  Chem_ChemBond  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_ChemAtom_FindFirstChemBond(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemBonds

ChemBonds involving 
AbstractChemAtom
  @param  Chem_ChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemBond Chem_ChemAtom_FindFirstChemBond_keyval2(Chem_ChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chem_ChemBond  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_ChemAtom_FindFirstChemBond(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemBonds

ChemBonds involving 
AbstractChemAtom
  @param  Chem_ChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemBond Chem_ChemAtom_FindFirstChemBond_keyval3(Chem_ChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chem_ChemBond  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_ChemAtom_FindFirstChemBond(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemBonds

ChemBonds involving 
AbstractChemAtom
  @param  Chem_ChemAtom self
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
Chem_ChemBond Chem_ChemAtom_FindFirstChemBond_keyval4(Chem_ChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chem_ChemBond  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_ChemAtom_FindFirstChemBond(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemCompVars

ChemCompVars that 
contain AbstractChemAtom
  @param  Chem_ChemAtom self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemCompVar Chem_ChemAtom_FindFirstChemCompVar(Chem_ChemAtom self, ApiMap conditions)
{
  
  Chem_ChemCompVar obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChemCompVar");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'findFirstChemCompVar'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'findFirstChemCompVar' is not callable");
  
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
  @param  Chem_ChemAtom self
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemCompVar Chem_ChemAtom_FindFirstChemCompVar_keyval0(Chem_ChemAtom self)
{
  
  Chem_ChemCompVar  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_ChemAtom_FindFirstChemCompVar(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemCompVars

ChemCompVars that 
contain AbstractChemAtom
  @param  Chem_ChemAtom self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemCompVar Chem_ChemAtom_FindFirstChemCompVar_keyval1(Chem_ChemAtom self, char * key, ApiObject value)
{
  
  Chem_ChemCompVar  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_ChemAtom_FindFirstChemCompVar(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemCompVars

ChemCompVars that 
contain AbstractChemAtom
  @param  Chem_ChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemCompVar Chem_ChemAtom_FindFirstChemCompVar_keyval2(Chem_ChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chem_ChemCompVar  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_ChemAtom_FindFirstChemCompVar(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemCompVars

ChemCompVars that 
contain AbstractChemAtom
  @param  Chem_ChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemCompVar Chem_ChemAtom_FindFirstChemCompVar_keyval3(Chem_ChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chem_ChemCompVar  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_ChemAtom_FindFirstChemCompVar(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemCompVars

ChemCompVars that 
contain AbstractChemAtom
  @param  Chem_ChemAtom self
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
Chem_ChemCompVar Chem_ChemAtom_FindFirstChemCompVar_keyval4(Chem_ChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chem_ChemCompVar  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_ChemAtom_FindFirstChemCompVar(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemTorsions

ChemTorsions 
involving AbstractChemAtom
  @param  Chem_ChemAtom self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemTorsion Chem_ChemAtom_FindFirstChemTorsion(Chem_ChemAtom self, ApiMap conditions)
{
  
  Chem_ChemTorsion obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChemTorsion");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'findFirstChemTorsion'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'findFirstChemTorsion' is not callable");
  
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
  @param  Chem_ChemAtom self
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemTorsion Chem_ChemAtom_FindFirstChemTorsion_keyval0(Chem_ChemAtom self)
{
  
  Chem_ChemTorsion  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_ChemAtom_FindFirstChemTorsion(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemTorsions

ChemTorsions 
involving AbstractChemAtom
  @param  Chem_ChemAtom self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemTorsion Chem_ChemAtom_FindFirstChemTorsion_keyval1(Chem_ChemAtom self, char * key, ApiObject value)
{
  
  Chem_ChemTorsion  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_ChemAtom_FindFirstChemTorsion(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemTorsions

ChemTorsions 
involving AbstractChemAtom
  @param  Chem_ChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemTorsion Chem_ChemAtom_FindFirstChemTorsion_keyval2(Chem_ChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chem_ChemTorsion  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_ChemAtom_FindFirstChemTorsion(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemTorsions

ChemTorsions 
involving AbstractChemAtom
  @param  Chem_ChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemTorsion Chem_ChemAtom_FindFirstChemTorsion_keyval3(Chem_ChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chem_ChemTorsion  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_ChemAtom_FindFirstChemTorsion(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.chemTorsions

ChemTorsions 
involving AbstractChemAtom
  @param  Chem_ChemAtom self
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
Chem_ChemTorsion Chem_ChemAtom_FindFirstChemTorsion_keyval4(Chem_ChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chem_ChemTorsion  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_ChemAtom_FindFirstChemTorsion(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemAtom.remoteLinkEnds

LinkEnds 
where ChemAtom participates as remote ChemAtom
  @param  Chem_ChemAtom self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chem_LinkEnd Chem_ChemAtom_FindFirstRemoteLinkEnd(Chem_ChemAtom self, ApiMap conditions)
{
  
  Chem_LinkEnd obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstRemoteLinkEnd");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'findFirstRemoteLinkEnd'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'findFirstRemoteLinkEnd' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemAtom.remoteLinkEnds

LinkEnds 
where ChemAtom participates as remote ChemAtom
  @param  Chem_ChemAtom self
  @returns  the first value that satisfies the conditions 
**/
Chem_LinkEnd Chem_ChemAtom_FindFirstRemoteLinkEnd_keyval0(Chem_ChemAtom self)
{
  
  Chem_LinkEnd  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_ChemAtom_FindFirstRemoteLinkEnd(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemAtom.remoteLinkEnds

LinkEnds 
where ChemAtom participates as remote ChemAtom
  @param  Chem_ChemAtom self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chem_LinkEnd Chem_ChemAtom_FindFirstRemoteLinkEnd_keyval1(Chem_ChemAtom self, char * key, ApiObject value)
{
  
  Chem_LinkEnd  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_ChemAtom_FindFirstRemoteLinkEnd(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemAtom.remoteLinkEnds

LinkEnds 
where ChemAtom participates as remote ChemAtom
  @param  Chem_ChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chem_LinkEnd Chem_ChemAtom_FindFirstRemoteLinkEnd_keyval2(Chem_ChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chem_LinkEnd  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_ChemAtom_FindFirstRemoteLinkEnd(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemAtom.remoteLinkEnds

LinkEnds 
where ChemAtom participates as remote ChemAtom
  @param  Chem_ChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chem_LinkEnd Chem_ChemAtom_FindFirstRemoteLinkEnd_keyval3(Chem_ChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chem_LinkEnd  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_ChemAtom_FindFirstRemoteLinkEnd(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemAtom.remoteLinkEnds

LinkEnds 
where ChemAtom participates as remote ChemAtom
  @param  Chem_ChemAtom self
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
Chem_LinkEnd Chem_ChemAtom_FindFirstRemoteLinkEnd_keyval4(Chem_ChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chem_LinkEnd  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_ChemAtom_FindFirstRemoteLinkEnd(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.stereochemistries

StereoChemistry 
objects that involve AbstractChemAtom
  @param  Chem_ChemAtom self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chem_Stereochemistry Chem_ChemAtom_FindFirstStereochemistry(Chem_ChemAtom self, ApiMap conditions)
{
  
  Chem_Stereochemistry obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstStereochemistry");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'findFirstStereochemistry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'findFirstStereochemistry' is not callable");
  
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
  @param  Chem_ChemAtom self
  @returns  the first value that satisfies the conditions 
**/
Chem_Stereochemistry Chem_ChemAtom_FindFirstStereochemistry_keyval0(Chem_ChemAtom self)
{
  
  Chem_Stereochemistry  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_ChemAtom_FindFirstStereochemistry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.stereochemistries

StereoChemistry 
objects that involve AbstractChemAtom
  @param  Chem_ChemAtom self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chem_Stereochemistry Chem_ChemAtom_FindFirstStereochemistry_keyval1(Chem_ChemAtom self, char * key, ApiObject value)
{
  
  Chem_Stereochemistry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_ChemAtom_FindFirstStereochemistry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.stereochemistries

StereoChemistry 
objects that involve AbstractChemAtom
  @param  Chem_ChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chem_Stereochemistry Chem_ChemAtom_FindFirstStereochemistry_keyval2(Chem_ChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chem_Stereochemistry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_ChemAtom_FindFirstStereochemistry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.stereochemistries

StereoChemistry 
objects that involve AbstractChemAtom
  @param  Chem_ChemAtom self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chem_Stereochemistry Chem_ChemAtom_FindFirstStereochemistry_keyval3(Chem_ChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chem_Stereochemistry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_ChemAtom_FindFirstStereochemistry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.AbstractChemAtom.stereochemistries

StereoChemistry 
objects that involve AbstractChemAtom
  @param  Chem_ChemAtom self
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
Chem_Stereochemistry Chem_ChemAtom_FindFirstStereochemistry_keyval4(Chem_ChemAtom self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chem_Stereochemistry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_ChemAtom_FindFirstStereochemistry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.molecule.ChemComp.ChemAtom
  @param  Chem_ChemAtom self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Chem_ChemAtom_Get(Chem_ChemAtom self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Chem_ChemAtom self
  @returns   the result
**/
Acco_AccessObject Chem_ChemAtom_GetAccess(Chem_ChemAtom self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'getAccess' is not callable");
  
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
  @param  Chem_ChemAtom self
  @returns   the result
**/
ApiList Chem_ChemAtom_GetApplicationData(Chem_ChemAtom self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemAtom.boundLinkEnds

linkEnds with an 
out-of-ChemComp bond parting directly from ChemAtom.
  @param  Chem_ChemAtom self
  @returns   the result
**/
ApiSet Chem_ChemAtom_GetBoundLinkEnds(Chem_ChemAtom self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getBoundLinkEnds");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'getBoundLinkEnds'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'getBoundLinkEnds' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.molecule.ChemComp.ChemAtom
  @param  Chem_ChemAtom self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Chem_ChemAtom Chem_ChemAtom_GetByKey(Chem_ChemAtom self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Chem_ChemAtom obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'getByKey' is not callable");
  
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
  @param  Chem_ChemAtom self
  @returns   the result
**/
ApiSet Chem_ChemAtom_GetChemAngles(Chem_ChemAtom self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemAngles");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'getChemAngles'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'getChemAngles' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemAtom.chemAtomSet

ChemAtomSet that 
ChemAtom is contained in.
  @param  Chem_ChemAtom self
  @returns   the result
**/
Chem_ChemAtomSet Chem_ChemAtom_GetChemAtomSet(Chem_ChemAtom self)
{
  
  Chem_ChemAtomSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemAtomSet");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'getChemAtomSet'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'getChemAtomSet' is not callable");
  
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
  @param  Chem_ChemAtom self
  @returns   the result
**/
ApiSet Chem_ChemAtom_GetChemBonds(Chem_ChemAtom self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemBonds");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'getChemBonds'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'getChemBonds' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.AbstractChemAtom.chemComp

parent link
  @param  Chem_ChemAtom self
  @returns   the result
**/
Chem_ChemComp Chem_ChemAtom_GetChemComp(Chem_ChemAtom self)
{
  
  Chem_ChemComp obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemComp");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'getChemComp'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'getChemComp' is not callable");
  
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
  @param  Chem_ChemAtom self
  @returns   the result
**/
ApiSet Chem_ChemAtom_GetChemCompVars(Chem_ChemAtom self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemCompVars");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'getChemCompVars'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'getChemCompVars' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived link chemElement
  @param  Chem_ChemAtom self
  @returns   the result
**/
Chel_ChemElement Chem_ChemAtom_GetChemElement(Chem_ChemAtom self)
{
  
  Chel_ChemElement obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemElement");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'getChemElement'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'getChemElement' is not callable");
  
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
  @param  Chem_ChemAtom self
  @returns   the result
**/
ApiSet Chem_ChemAtom_GetChemTorsions(Chem_ChemAtom self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemTorsions");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'getChemTorsions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'getChemTorsions' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemAtom.chirality

Chirality of atom 
according to IUPAC R/S system. Note for some chiral atoms chirality 
cannot be specified according to this system but only using the 
Stereochemistry class. An example would be a chirality that involves a 
LinkAtom susbstituent.
  @param  Chem_ChemAtom self
  @returns   the result
**/
ApiString Chem_ChemAtom_GetChirality(Chem_ChemAtom self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChirality");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'getChirality'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'getChirality' is not callable");
  
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
  @param  Chem_ChemAtom self
  @returns   the result
**/
ApiString Chem_ChemAtom_GetClassName(Chem_ChemAtom self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemAtom.elementSymbol

Chemical symbol of 
the atom. Strictly speaking an enum .E.g. H, C, Mg, Pt. Serves as key to 
derived link chemElement.
  @param  Chem_ChemAtom self
  @returns   the result
**/
ApiString Chem_ChemAtom_GetElementSymbol(Chem_ChemAtom self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getElementSymbol");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'getElementSymbol'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'getElementSymbol' is not callable");
  
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
  @param  Chem_ChemAtom self
  @returns   the result
**/
ApiList Chem_ChemAtom_GetFieldNames(Chem_ChemAtom self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'getFieldNames' is not callable");
  
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
  @param  Chem_ChemAtom self
  @returns   the result
**/
ApiBoolean Chem_ChemAtom_GetInConstructor(Chem_ChemAtom self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'getInConstructor' is not callable");
  
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
  @param  Chem_ChemAtom self
  @returns   the result
**/
ApiBoolean Chem_ChemAtom_GetIsDeleted(Chem_ChemAtom self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.AbstractChemAtom.name

name of ChemAtom
  @param  Chem_ChemAtom self
  @returns   the result
**/
ApiString Chem_ChemAtom_GetName(Chem_ChemAtom self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'getName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemAtom.nuclGroupType

String to 
determine Atom Group (for assignment purposes). Proposed 
possibilities:
'CH0','CH2','CH3','CHx','NH0','NH2','NH3', NHx, OH0m OH1, 
OH2, .. etc. 'OTHER'.
  @param  Chem_ChemAtom self
  @returns   the result
**/
ApiString Chem_ChemAtom_GetNuclGroupType(Chem_ChemAtom self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNuclGroupType");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'getNuclGroupType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'getNuclGroupType' is not callable");
  
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
  @param  Chem_ChemAtom self
  @returns   the result
**/
ApiString Chem_ChemAtom_GetPackageName(Chem_ChemAtom self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'getPackageName' is not callable");
  
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
  @param  Chem_ChemAtom self
  @returns   the result
**/
ApiString Chem_ChemAtom_GetPackageShortName(Chem_ChemAtom self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'getPackageShortName' is not callable");
  
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
  @param  Chem_ChemAtom self
  @returns   the result
**/
Chem_ChemComp Chem_ChemAtom_GetParent(Chem_ChemAtom self)
{
  
  Chem_ChemComp obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'getParent' is not callable");
  
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
  @param  Chem_ChemAtom self
  @returns   the result
**/
ApiString Chem_ChemAtom_GetQualifiedName(Chem_ChemAtom self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemAtom.remoteLinkEnds

LinkEnds where 
ChemAtom participates as remote ChemAtom
  @param  Chem_ChemAtom self
  @returns   the result
**/
ApiSet Chem_ChemAtom_GetRemoteLinkEnds(Chem_ChemAtom self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRemoteLinkEnds");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'getRemoteLinkEnds'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'getRemoteLinkEnds' is not callable");
  
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
  @param  Chem_ChemAtom self
  @returns   the result
**/
Impl_MemopsRoot Chem_ChemAtom_GetRoot(Chem_ChemAtom self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemAtom.shortVegaType

VegaType for atom, 
covering only the atom itself, e.g (100) or (451). The full Vega Type is 
derived from the short Vegatype of the atom and the atoms bound to it.
  @param  Chem_ChemAtom self
  @returns   the result
**/
ApiString Chem_ChemAtom_GetShortVegaType(Chem_ChemAtom self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getShortVegaType");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'getShortVegaType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'getShortVegaType' is not callable");
  
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
  @param  Chem_ChemAtom self
  @returns   the result
**/
ApiSet Chem_ChemAtom_GetStereochemistries(Chem_ChemAtom self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getStereochemistries");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'getStereochemistries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'getStereochemistries' is not callable");
  
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
  @param  Chem_ChemAtom self
  @returns   the result
**/
ApiInteger Chem_ChemAtom_GetSubType(Chem_ChemAtom self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSubType");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'getSubType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'getSubType' is not callable");
  
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
  @param  Chem_ChemAtom self
  @returns   the result
**/
Impl_TopObject Chem_ChemAtom_GetTopObject(Chem_ChemAtom self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemAtom.waterExchangeable

Is this atom 
exchanging fast with solvent under aqueous conditions ( i.e. on a 
timescale of a milisecond or less)? Most atoms are not. The exceptions 
are e.g. protons bound to oxygen, or protons in  amine groups or NH2 in 
guanidinium groups.
  @param  Chem_ChemAtom self
  @returns   the result
**/
ApiBoolean Chem_ChemAtom_GetWaterExchangeable(Chem_ChemAtom self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getWaterExchangeable");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'getWaterExchangeable'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'getWaterExchangeable' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.molecule.ChemComp.ChemAtom
  @param  Chem_ChemComp parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Chem_ChemAtom Chem_ChemAtom_Init(Chem_ChemComp parent, ApiMap attrlinks)
{
  
  return Chem_ChemComp_NewChemAtom(parent, attrlinks);
}

/**
  Constructor for ccp.molecule.ChemComp.ChemAtom
  @param  Chem_ChemComp parent
  @param  char * elementSymbol
  @param  char * name
  @returns  the new object
**/
Chem_ChemAtom Chem_ChemAtom_Init_reqd(Chem_ChemComp parent, char * elementSymbol, char * name)
{
  
  Chem_ChemAtom  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__elementSymbol = ApiString_New(elementSymbol);
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "elementSymbol", api__elementSymbol);
  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Chem_ChemAtom_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__elementSymbol);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemAtom self
  @param  Impl_ApplicationData value
**/
void *Chem_ChemAtom_RemoveApplicationData(Chem_ChemAtom self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'removeApplicationData' is not callable");
  
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
  @param  Chem_ChemAtom self
  @param  Chem_ChemCompVar value
**/
void *Chem_ChemAtom_RemoveChemCompVar(Chem_ChemAtom self, Chem_ChemCompVar value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeChemCompVar");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'removeChemCompVar'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'removeChemCompVar' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.molecule.ChemComp.ChemAtom
  @param  Chem_ChemAtom self
  @param  ApiString name
  @param  ApiObject value
**/
void *Chem_ChemAtom_Set(Chem_ChemAtom self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Chem_ChemAtom self
  @param  Acco_AccessObject value
**/
void *Chem_ChemAtom_SetAccess(Chem_ChemAtom self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'setAccess' is not callable");
  
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
  @param  Chem_ChemAtom self
  @param  ApiList values
**/
void *Chem_ChemAtom_SetApplicationData(Chem_ChemAtom self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.ChemAtom.boundLinkEnds

linkEnds with an 
out-of-ChemComp bond parting directly from ChemAtom.
  @param  Chem_ChemAtom self
  @param  ApiSet values
**/
void *Chem_ChemAtom_SetBoundLinkEnds(Chem_ChemAtom self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setBoundLinkEnds");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'setBoundLinkEnds'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'setBoundLinkEnds' is not callable");
  
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
  @param  Chem_ChemAtom self
  @param  ApiSet values
**/
void *Chem_ChemAtom_SetChemAngles(Chem_ChemAtom self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setChemAngles");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'setChemAngles'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'setChemAngles' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.ChemAtom.chemAtomSet

ChemAtomSet that 
ChemAtom is contained in.
  @param  Chem_ChemAtom self
  @param  Chem_ChemAtomSet value
**/
void *Chem_ChemAtom_SetChemAtomSet(Chem_ChemAtom self, Chem_ChemAtomSet value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setChemAtomSet");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'setChemAtomSet'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'setChemAtomSet' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.AbstractChemAtom.chemBonds

ChemBonds 
involving AbstractChemAtom
  @param  Chem_ChemAtom self
  @param  ApiSet values
**/
void *Chem_ChemAtom_SetChemBonds(Chem_ChemAtom self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setChemBonds");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'setChemBonds'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'setChemBonds' is not callable");
  
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
  @param  Chem_ChemAtom self
  @param  ApiSet values
**/
void *Chem_ChemAtom_SetChemCompVars(Chem_ChemAtom self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setChemCompVars");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'setChemCompVars'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'setChemCompVars' is not callable");
  
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
  @param  Chem_ChemAtom self
  @param  ApiSet values
**/
void *Chem_ChemAtom_SetChemTorsions(Chem_ChemAtom self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setChemTorsions");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'setChemTorsions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'setChemTorsions' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.ChemAtom.chirality

Chirality of atom 
according to IUPAC R/S system. Note for some chiral atoms chirality 
cannot be specified according to this system but only using the 
Stereochemistry class. An example would be a chirality that involves a 
LinkAtom susbstituent.
  @param  Chem_ChemAtom self
  @param  ApiString value
**/
void *Chem_ChemAtom_SetChirality(Chem_ChemAtom self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setChirality");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'setChirality'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'setChirality' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.ChemAtom.elementSymbol

Chemical symbol of 
the atom. Strictly speaking an enum .E.g. H, C, Mg, Pt. Serves as key to 
derived link chemElement.
  @param  Chem_ChemAtom self
  @param  ApiString value
**/
void *Chem_ChemAtom_SetElementSymbol(Chem_ChemAtom self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setElementSymbol");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'setElementSymbol'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'setElementSymbol' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.AbstractChemAtom.name

name of ChemAtom
  @param  Chem_ChemAtom self
  @param  ApiString value
**/
void *Chem_ChemAtom_SetName(Chem_ChemAtom self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.ChemAtom.nuclGroupType

String to 
determine Atom Group (for assignment purposes). Proposed 
possibilities:
'CH0','CH2','CH3','CHx','NH0','NH2','NH3', NHx, OH0m OH1, 
OH2, .. etc. 'OTHER'.
  @param  Chem_ChemAtom self
  @param  ApiString value
**/
void *Chem_ChemAtom_SetNuclGroupType(Chem_ChemAtom self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNuclGroupType");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'setNuclGroupType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'setNuclGroupType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.ChemAtom.remoteLinkEnds

LinkEnds where 
ChemAtom participates as remote ChemAtom
  @param  Chem_ChemAtom self
  @param  ApiSet values
**/
void *Chem_ChemAtom_SetRemoteLinkEnds(Chem_ChemAtom self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRemoteLinkEnds");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'setRemoteLinkEnds'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'setRemoteLinkEnds' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.ChemAtom.shortVegaType

VegaType for atom, 
covering only the atom itself, e.g (100) or (451). The full Vega Type is 
derived from the short Vegatype of the atom and the atoms bound to it.
  @param  Chem_ChemAtom self
  @param  ApiString value
**/
void *Chem_ChemAtom_SetShortVegaType(Chem_ChemAtom self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setShortVegaType");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'setShortVegaType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'setShortVegaType' is not callable");
  
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
  @param  Chem_ChemAtom self
  @param  ApiSet values
**/
void *Chem_ChemAtom_SetStereochemistries(Chem_ChemAtom self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setStereochemistries");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'setStereochemistries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'setStereochemistries' is not callable");
  
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
  @param  Chem_ChemAtom self
  @param  ApiInteger value
**/
void *Chem_ChemAtom_SetSubType(Chem_ChemAtom self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSubType");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'setSubType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'setSubType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.ChemAtom.waterExchangeable

Is this atom 
exchanging fast with solvent under aqueous conditions ( i.e. on a 
timescale of a milisecond or less)? Most atoms are not. The exceptions 
are e.g. protons bound to oxygen, or protons in  amine groups or NH2 in 
guanidinium groups.
  @param  Chem_ChemAtom self
  @param  ApiBoolean value
**/
void *Chem_ChemAtom_SetWaterExchangeable(Chem_ChemAtom self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setWaterExchangeable");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'setWaterExchangeable'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'setWaterExchangeable' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.ChemComp.ChemAtom.boundLinkEnds

linkEnds with 
an out-of-ChemComp bond parting directly from ChemAtom.
  @param  Chem_ChemAtom self
  @returns   the result
**/
ApiList Chem_ChemAtom_SortedBoundLinkEnds(Chem_ChemAtom self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedBoundLinkEnds");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'sortedBoundLinkEnds'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'sortedBoundLinkEnds' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.ChemComp.AbstractChemAtom.chemAngles

ChemAngles 
involving AbstractChemAtom
  @param  Chem_ChemAtom self
  @returns   the result
**/
ApiList Chem_ChemAtom_SortedChemAngles(Chem_ChemAtom self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChemAngles");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'sortedChemAngles'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'sortedChemAngles' is not callable");
  
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
  @param  Chem_ChemAtom self
  @returns   the result
**/
ApiList Chem_ChemAtom_SortedChemBonds(Chem_ChemAtom self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChemBonds");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'sortedChemBonds'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'sortedChemBonds' is not callable");
  
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
  @param  Chem_ChemAtom self
  @returns   the result
**/
ApiList Chem_ChemAtom_SortedChemCompVars(Chem_ChemAtom self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChemCompVars");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'sortedChemCompVars'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'sortedChemCompVars' is not callable");
  
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
  @param  Chem_ChemAtom self
  @returns   the result
**/
ApiList Chem_ChemAtom_SortedChemTorsions(Chem_ChemAtom self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChemTorsions");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'sortedChemTorsions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'sortedChemTorsions' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.ChemComp.ChemAtom.remoteLinkEnds

LinkEnds where 
ChemAtom participates as remote ChemAtom
  @param  Chem_ChemAtom self
  @returns   the result
**/
ApiList Chem_ChemAtom_SortedRemoteLinkEnds(Chem_ChemAtom self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedRemoteLinkEnds");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'sortedRemoteLinkEnds'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'sortedRemoteLinkEnds' is not callable");
  
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
  @param  Chem_ChemAtom self
  @returns   the result
**/
ApiList Chem_ChemAtom_SortedStereochemistries(Chem_ChemAtom self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedStereochemistries");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: cannot find method 'sortedStereochemistries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemAtom: method 'sortedStereochemistries' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
