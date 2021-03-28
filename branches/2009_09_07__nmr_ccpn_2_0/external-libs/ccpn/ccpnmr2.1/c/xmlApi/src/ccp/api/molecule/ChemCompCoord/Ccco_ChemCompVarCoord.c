
#include "ccp.h"

/*
  ChemCompVar to which chemAtomCoord children belong. Note: atoms belonging to Vars with an 'any' attribute must belong to all the relevant Vars
*/

/* package ccp.api.molecule.ChemCompCoord */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccco_ChemCompVarCoord self
  @param  Impl_ApplicationData value
**/
void *Ccco_ChemCompVarCoord_AddApplicationData(Ccco_ChemCompVarCoord self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for 
ccp.molecule.ChemCompCoord.ChemCompVarCoord.chemAtomCoords

ChemAtomCoords 
describing coordinates for the ChemAtoms making up the ChemCompVar
  @param  Ccco_ChemCompVarCoord self
  @param  Ccco_ChemAtomCoord value
**/
void *Ccco_ChemCompVarCoord_AddChemAtomCoord(Ccco_ChemCompVarCoord self, Ccco_ChemAtomCoord value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addChemAtomCoord");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: cannot find method 'addChemAtomCoord'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: method 'addChemAtomCoord' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.molecule.ChemCompCoord.ChemCompVarCoord
  @param  Ccco_ChemCompVarCoord self
  @param  ApiBoolean complete
**/
void *Ccco_ChemCompVarCoord_CheckAllValid(Ccco_ChemCompVarCoord self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.molecule.ChemCompCoord.ChemCompVarCoord
  @param  Ccco_ChemCompVarCoord self
  @param  ApiBoolean complete
**/
void *Ccco_ChemCompVarCoord_CheckValid(Ccco_ChemCompVarCoord self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: method 'checkValid' is not callable");
  
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
  @param  Ccco_ChemCompVarCoord self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Ccco_ChemCompVarCoord_FindAllApplicationData(Ccco_ChemCompVarCoord self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: method 'findAllApplicationData' is not callable");
  
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
  @param  Ccco_ChemCompVarCoord self
  @returns  all value that satisfy the conditions 
**/
ApiList Ccco_ChemCompVarCoord_FindAllApplicationData_keyval0(Ccco_ChemCompVarCoord self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Ccco_ChemCompVarCoord_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccco_ChemCompVarCoord self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Ccco_ChemCompVarCoord_FindAllApplicationData_keyval1(Ccco_ChemCompVarCoord self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Ccco_ChemCompVarCoord_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccco_ChemCompVarCoord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Ccco_ChemCompVarCoord_FindAllApplicationData_keyval2(Ccco_ChemCompVarCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Ccco_ChemCompVarCoord_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccco_ChemCompVarCoord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Ccco_ChemCompVarCoord_FindAllApplicationData_keyval3(Ccco_ChemCompVarCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Ccco_ChemCompVarCoord_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccco_ChemCompVarCoord self
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
ApiList Ccco_ChemCompVarCoord_FindAllApplicationData_keyval4(Ccco_ChemCompVarCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Ccco_ChemCompVarCoord_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemCompCoord.ChemCompVarCoord.chemAtomCoords

ChemAtomCoords 
describing coordinates for the ChemAtoms making up the ChemCompVar
  @param  Ccco_ChemCompVarCoord self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Ccco_ChemCompVarCoord_FindAllChemAtomCoords(Ccco_ChemCompVarCoord self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChemAtomCoords");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: cannot find method 'findAllChemAtomCoords'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: method 'findAllChemAtomCoords' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemCompCoord.ChemCompVarCoord.chemAtomCoords

ChemAtomCoords 
describing coordinates for the ChemAtoms making up the ChemCompVar
  @param  Ccco_ChemCompVarCoord self
  @returns  all value that satisfy the conditions 
**/
ApiSet Ccco_ChemCompVarCoord_FindAllChemAtomCoords_keyval0(Ccco_ChemCompVarCoord self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Ccco_ChemCompVarCoord_FindAllChemAtomCoords(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemCompCoord.ChemCompVarCoord.chemAtomCoords

ChemAtomCoords 
describing coordinates for the ChemAtoms making up the ChemCompVar
  @param  Ccco_ChemCompVarCoord self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Ccco_ChemCompVarCoord_FindAllChemAtomCoords_keyval1(Ccco_ChemCompVarCoord self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Ccco_ChemCompVarCoord_FindAllChemAtomCoords(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemCompCoord.ChemCompVarCoord.chemAtomCoords

ChemAtomCoords 
describing coordinates for the ChemAtoms making up the ChemCompVar
  @param  Ccco_ChemCompVarCoord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Ccco_ChemCompVarCoord_FindAllChemAtomCoords_keyval2(Ccco_ChemCompVarCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Ccco_ChemCompVarCoord_FindAllChemAtomCoords(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemCompCoord.ChemCompVarCoord.chemAtomCoords

ChemAtomCoords 
describing coordinates for the ChemAtoms making up the ChemCompVar
  @param  Ccco_ChemCompVarCoord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Ccco_ChemCompVarCoord_FindAllChemAtomCoords_keyval3(Ccco_ChemCompVarCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Ccco_ChemCompVarCoord_FindAllChemAtomCoords(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemCompCoord.ChemCompVarCoord.chemAtomCoords

ChemAtomCoords 
describing coordinates for the ChemAtoms making up the ChemCompVar
  @param  Ccco_ChemCompVarCoord self
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
ApiSet Ccco_ChemCompVarCoord_FindAllChemAtomCoords_keyval4(Ccco_ChemCompVarCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Ccco_ChemCompVarCoord_FindAllChemAtomCoords(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemCompCoord.ChemCompVarCoord.chemCompVars

corresponding 
ChemCompVar, to which coordinates refer
  @param  Ccco_ChemCompVarCoord self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Ccco_ChemCompVarCoord_FindAllChemCompVars(Ccco_ChemCompVarCoord self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChemCompVars");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: cannot find method 'findAllChemCompVars'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: method 'findAllChemCompVars' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemCompCoord.ChemCompVarCoord.chemCompVars

corresponding 
ChemCompVar, to which coordinates refer
  @param  Ccco_ChemCompVarCoord self
  @returns  all value that satisfy the conditions 
**/
ApiSet Ccco_ChemCompVarCoord_FindAllChemCompVars_keyval0(Ccco_ChemCompVarCoord self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Ccco_ChemCompVarCoord_FindAllChemCompVars(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemCompCoord.ChemCompVarCoord.chemCompVars

corresponding 
ChemCompVar, to which coordinates refer
  @param  Ccco_ChemCompVarCoord self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Ccco_ChemCompVarCoord_FindAllChemCompVars_keyval1(Ccco_ChemCompVarCoord self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Ccco_ChemCompVarCoord_FindAllChemCompVars(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemCompCoord.ChemCompVarCoord.chemCompVars

corresponding 
ChemCompVar, to which coordinates refer
  @param  Ccco_ChemCompVarCoord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Ccco_ChemCompVarCoord_FindAllChemCompVars_keyval2(Ccco_ChemCompVarCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Ccco_ChemCompVarCoord_FindAllChemCompVars(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemCompCoord.ChemCompVarCoord.chemCompVars

corresponding 
ChemCompVar, to which coordinates refer
  @param  Ccco_ChemCompVarCoord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Ccco_ChemCompVarCoord_FindAllChemCompVars_keyval3(Ccco_ChemCompVarCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Ccco_ChemCompVarCoord_FindAllChemCompVars(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemCompCoord.ChemCompVarCoord.chemCompVars

corresponding 
ChemCompVar, to which coordinates refer
  @param  Ccco_ChemCompVarCoord self
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
ApiSet Ccco_ChemCompVarCoord_FindAllChemCompVars_keyval4(Ccco_ChemCompVarCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Ccco_ChemCompVarCoord_FindAllChemCompVars(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccco_ChemCompVarCoord self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Ccco_ChemCompVarCoord_FindFirstApplicationData(Ccco_ChemCompVarCoord self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: method 'findFirstApplicationData' is not callable");
  
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
  @param  Ccco_ChemCompVarCoord self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Ccco_ChemCompVarCoord_FindFirstApplicationData_keyval0(Ccco_ChemCompVarCoord self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Ccco_ChemCompVarCoord_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccco_ChemCompVarCoord self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Ccco_ChemCompVarCoord_FindFirstApplicationData_keyval1(Ccco_ChemCompVarCoord self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Ccco_ChemCompVarCoord_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccco_ChemCompVarCoord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Ccco_ChemCompVarCoord_FindFirstApplicationData_keyval2(Ccco_ChemCompVarCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Ccco_ChemCompVarCoord_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccco_ChemCompVarCoord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Ccco_ChemCompVarCoord_FindFirstApplicationData_keyval3(Ccco_ChemCompVarCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Ccco_ChemCompVarCoord_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccco_ChemCompVarCoord self
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
Impl_ApplicationData Ccco_ChemCompVarCoord_FindFirstApplicationData_keyval4(Ccco_ChemCompVarCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Ccco_ChemCompVarCoord_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemCompCoord.ChemCompVarCoord.chemAtomCoords

ChemAtomCoords 
describing coordinates for the ChemAtoms making up the ChemCompVar
  @param  Ccco_ChemCompVarCoord self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Ccco_ChemAtomCoord Ccco_ChemCompVarCoord_FindFirstChemAtomCoord(Ccco_ChemCompVarCoord self, ApiMap conditions)
{
  
  Ccco_ChemAtomCoord obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChemAtomCoord");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: cannot find method 'findFirstChemAtomCoord'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: method 'findFirstChemAtomCoord' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemCompCoord.ChemCompVarCoord.chemAtomCoords

ChemAtomCoords 
describing coordinates for the ChemAtoms making up the ChemCompVar
  @param  Ccco_ChemCompVarCoord self
  @returns  the first value that satisfies the conditions 
**/
Ccco_ChemAtomCoord Ccco_ChemCompVarCoord_FindFirstChemAtomCoord_keyval0(Ccco_ChemCompVarCoord self)
{
  
  Ccco_ChemAtomCoord  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Ccco_ChemCompVarCoord_FindFirstChemAtomCoord(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemCompCoord.ChemCompVarCoord.chemAtomCoords

ChemAtomCoords 
describing coordinates for the ChemAtoms making up the ChemCompVar
  @param  Ccco_ChemCompVarCoord self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Ccco_ChemAtomCoord Ccco_ChemCompVarCoord_FindFirstChemAtomCoord_keyval1(Ccco_ChemCompVarCoord self, char * key, ApiObject value)
{
  
  Ccco_ChemAtomCoord  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Ccco_ChemCompVarCoord_FindFirstChemAtomCoord(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemCompCoord.ChemCompVarCoord.chemAtomCoords

ChemAtomCoords 
describing coordinates for the ChemAtoms making up the ChemCompVar
  @param  Ccco_ChemCompVarCoord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Ccco_ChemAtomCoord Ccco_ChemCompVarCoord_FindFirstChemAtomCoord_keyval2(Ccco_ChemCompVarCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Ccco_ChemAtomCoord  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Ccco_ChemCompVarCoord_FindFirstChemAtomCoord(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemCompCoord.ChemCompVarCoord.chemAtomCoords

ChemAtomCoords 
describing coordinates for the ChemAtoms making up the ChemCompVar
  @param  Ccco_ChemCompVarCoord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Ccco_ChemAtomCoord Ccco_ChemCompVarCoord_FindFirstChemAtomCoord_keyval3(Ccco_ChemCompVarCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Ccco_ChemAtomCoord  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Ccco_ChemCompVarCoord_FindFirstChemAtomCoord(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemCompCoord.ChemCompVarCoord.chemAtomCoords

ChemAtomCoords 
describing coordinates for the ChemAtoms making up the ChemCompVar
  @param  Ccco_ChemCompVarCoord self
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
Ccco_ChemAtomCoord Ccco_ChemCompVarCoord_FindFirstChemAtomCoord_keyval4(Ccco_ChemCompVarCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Ccco_ChemAtomCoord  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Ccco_ChemCompVarCoord_FindFirstChemAtomCoord(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemCompCoord.ChemCompVarCoord.chemCompVars

corresponding 
ChemCompVar, to which coordinates refer
  @param  Ccco_ChemCompVarCoord self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemCompVar Ccco_ChemCompVarCoord_FindFirstChemCompVar(Ccco_ChemCompVarCoord self, ApiMap conditions)
{
  
  Chem_ChemCompVar obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChemCompVar");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: cannot find method 'findFirstChemCompVar'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: method 'findFirstChemCompVar' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemCompCoord.ChemCompVarCoord.chemCompVars

corresponding 
ChemCompVar, to which coordinates refer
  @param  Ccco_ChemCompVarCoord self
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemCompVar Ccco_ChemCompVarCoord_FindFirstChemCompVar_keyval0(Ccco_ChemCompVarCoord self)
{
  
  Chem_ChemCompVar  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Ccco_ChemCompVarCoord_FindFirstChemCompVar(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemCompCoord.ChemCompVarCoord.chemCompVars

corresponding 
ChemCompVar, to which coordinates refer
  @param  Ccco_ChemCompVarCoord self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemCompVar Ccco_ChemCompVarCoord_FindFirstChemCompVar_keyval1(Ccco_ChemCompVarCoord self, char * key, ApiObject value)
{
  
  Chem_ChemCompVar  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Ccco_ChemCompVarCoord_FindFirstChemCompVar(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemCompCoord.ChemCompVarCoord.chemCompVars

corresponding 
ChemCompVar, to which coordinates refer
  @param  Ccco_ChemCompVarCoord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemCompVar Ccco_ChemCompVarCoord_FindFirstChemCompVar_keyval2(Ccco_ChemCompVarCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chem_ChemCompVar  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Ccco_ChemCompVarCoord_FindFirstChemCompVar(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemCompCoord.ChemCompVarCoord.chemCompVars

corresponding 
ChemCompVar, to which coordinates refer
  @param  Ccco_ChemCompVarCoord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemCompVar Ccco_ChemCompVarCoord_FindFirstChemCompVar_keyval3(Ccco_ChemCompVarCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chem_ChemCompVar  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Ccco_ChemCompVarCoord_FindFirstChemCompVar(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemCompCoord.ChemCompVarCoord.chemCompVars

corresponding 
ChemCompVar, to which coordinates refer
  @param  Ccco_ChemCompVarCoord self
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
Chem_ChemCompVar Ccco_ChemCompVarCoord_FindFirstChemCompVar_keyval4(Ccco_ChemCompVarCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chem_ChemCompVar  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Ccco_ChemCompVarCoord_FindFirstChemCompVar(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.molecule.ChemCompCoord.ChemCompVarCoord
  @param  Ccco_ChemCompVarCoord self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Ccco_ChemCompVarCoord_Get(Ccco_ChemCompVarCoord self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Ccco_ChemCompVarCoord self
  @returns   the result
**/
Acco_AccessObject Ccco_ChemCompVarCoord_GetAccess(Ccco_ChemCompVarCoord self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: method 'getAccess' is not callable");
  
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
  @param  Ccco_ChemCompVarCoord self
  @returns   the result
**/
Acco_AccessObject Ccco_ChemCompVarCoord_GetActiveAccess(Ccco_ChemCompVarCoord self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: method 'getActiveAccess' is not callable");
  
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
  @param  Ccco_ChemCompVarCoord self
  @returns   the result
**/
ApiList Ccco_ChemCompVarCoord_GetApplicationData(Ccco_ChemCompVarCoord self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.molecule.ChemCompCoord.ChemCompVarCoord
  @param  Ccco_ChemCompVarCoord self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Ccco_ChemCompVarCoord Ccco_ChemCompVarCoord_GetByKey(Ccco_ChemCompVarCoord self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Ccco_ChemCompVarCoord obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: method 'getByKey' is not callable");
  
  args = PyTuple_Pack(2, startObj, fullKey);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.molecule.ChemCompCoord.ChemCompVarCoord.chemAtomCoords

ChemAtomCoords 
describing coordinates for the ChemAtoms making up the ChemCompVar
  @param  Ccco_ChemCompVarCoord self
  @returns   the result
**/
ApiSet Ccco_ChemCompVarCoord_GetChemAtomCoords(Ccco_ChemCompVarCoord self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemAtomCoords");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: cannot find method 'getChemAtomCoords'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: method 'getChemAtomCoords' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.molecule.ChemCompCoord.ChemCompVarCoord.chemCompCoord

parent link
  @param  Ccco_ChemCompVarCoord self
  @returns   the result
**/
Ccco_ChemCompCoord Ccco_ChemCompVarCoord_GetChemCompCoord(Ccco_ChemCompVarCoord self)
{
  
  Ccco_ChemCompCoord obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemCompCoord");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: cannot find method 'getChemCompCoord'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: method 'getChemCompCoord' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived link chemCompVars
  @param  Ccco_ChemCompVarCoord self
  @returns   the result
**/
ApiSet Ccco_ChemCompVarCoord_GetChemCompVars(Ccco_ChemCompVarCoord self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemCompVars");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: cannot find method 'getChemCompVars'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: method 'getChemCompVars' is not callable");
  
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
  @param  Ccco_ChemCompVarCoord self
  @returns   the result
**/
ApiString Ccco_ChemCompVarCoord_GetClassName(Ccco_ChemCompVarCoord self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.molecule.ChemCompCoord.ChemCompVarCoord.descriptor

descriptor for 
corresponding chemCompVar
  @param  Ccco_ChemCompVarCoord self
  @returns   the result
**/
ApiString Ccco_ChemCompVarCoord_GetDescriptor(Ccco_ChemCompVarCoord self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDescriptor");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: cannot find method 'getDescriptor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: method 'getDescriptor' is not callable");
  
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
  @param  Ccco_ChemCompVarCoord self
  @returns   the result
**/
ApiList Ccco_ChemCompVarCoord_GetFieldNames(Ccco_ChemCompVarCoord self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.molecule.ChemCompCoord.ChemCompVarCoord
  @param  Ccco_ChemCompVarCoord self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Ccco_ChemCompVarCoord_GetFullKey(Ccco_ChemCompVarCoord self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: method 'getFullKey' is not callable");
  
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
  @param  Ccco_ChemCompVarCoord self
  @returns   the result
**/
ApiBoolean Ccco_ChemCompVarCoord_GetInConstructor(Ccco_ChemCompVarCoord self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: method 'getInConstructor' is not callable");
  
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
  @param  Ccco_ChemCompVarCoord self
  @returns   the result
**/
ApiBoolean Ccco_ChemCompVarCoord_GetIsDeleted(Ccco_ChemCompVarCoord self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemCompCoord.ChemCompVarCoord.linking

linking for 
corresponding ChemCompVar
  @param  Ccco_ChemCompVarCoord self
  @returns   the result
**/
ApiString Ccco_ChemCompVarCoord_GetLinking(Ccco_ChemCompVarCoord self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLinking");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: cannot find method 'getLinking'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: method 'getLinking' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.molecule.ChemCompCoord.ChemCompVarCoord
  @param  Ccco_ChemCompVarCoord self
  @returns  Local object key
**/
ApiObject Ccco_ChemCompVarCoord_GetLocalKey(Ccco_ChemCompVarCoord self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: method 'getLocalKey' is not callable");
  
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
  @param  Ccco_ChemCompVarCoord self
  @returns   the result
**/
ApiString Ccco_ChemCompVarCoord_GetPackageName(Ccco_ChemCompVarCoord self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: method 'getPackageName' is not callable");
  
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
  @param  Ccco_ChemCompVarCoord self
  @returns   the result
**/
ApiString Ccco_ChemCompVarCoord_GetPackageShortName(Ccco_ChemCompVarCoord self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemCompCoord.ChemCompVarCoord.parent

link to 
parent object - synonym for chemCompCoord
  @param  Ccco_ChemCompVarCoord self
  @returns   the result
**/
Ccco_ChemCompCoord Ccco_ChemCompVarCoord_GetParent(Ccco_ChemCompVarCoord self)
{
  
  Ccco_ChemCompCoord obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: method 'getParent' is not callable");
  
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
  @param  Ccco_ChemCompVarCoord self
  @returns   the result
**/
ApiString Ccco_ChemCompVarCoord_GetQualifiedName(Ccco_ChemCompVarCoord self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: method 'getQualifiedName' is not callable");
  
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
  @param  Ccco_ChemCompVarCoord self
  @returns   the result
**/
Impl_MemopsRoot Ccco_ChemCompVarCoord_GetRoot(Ccco_ChemCompVarCoord self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: method 'getRoot' is not callable");
  
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
  @param  Ccco_ChemCompVarCoord self
  @returns   the result
**/
Impl_TopObject Ccco_ChemCompVarCoord_GetTopObject(Ccco_ChemCompVarCoord self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.molecule.ChemCompCoord.ChemCompVarCoord
  @param  Ccco_ChemCompCoord parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Ccco_ChemCompVarCoord Ccco_ChemCompVarCoord_Init(Ccco_ChemCompCoord parent, ApiMap attrlinks)
{
  
  return Ccco_ChemCompCoord_NewChemCompVarCoord(parent, attrlinks);
}

/**
  Constructor for ccp.molecule.ChemCompCoord.ChemCompVarCoord
  @param  Ccco_ChemCompCoord parent
  @returns  the new object
**/
Ccco_ChemCompVarCoord Ccco_ChemCompVarCoord_Init_reqd(Ccco_ChemCompCoord parent)
{
  
  Ccco_ChemCompVarCoord  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Ccco_ChemCompVarCoord_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccco_ChemCompVarCoord self
  @param  Impl_ApplicationData value
**/
void *Ccco_ChemCompVarCoord_RemoveApplicationData(Ccco_ChemCompVarCoord self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
ccp.molecule.ChemCompCoord.ChemCompVarCoord.chemAtomCoords

ChemAtomCoords 
describing coordinates for the ChemAtoms making up the ChemCompVar
  @param  Ccco_ChemCompVarCoord self
  @param  Ccco_ChemAtomCoord value
**/
void *Ccco_ChemCompVarCoord_RemoveChemAtomCoord(Ccco_ChemCompVarCoord self, Ccco_ChemAtomCoord value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeChemAtomCoord");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: cannot find method 'removeChemAtomCoord'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: method 'removeChemAtomCoord' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.molecule.ChemCompCoord.ChemCompVarCoord
  @param  Ccco_ChemCompVarCoord self
  @param  ApiString name
  @param  ApiObject value
**/
void *Ccco_ChemCompVarCoord_Set(Ccco_ChemCompVarCoord self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Ccco_ChemCompVarCoord self
  @param  Acco_AccessObject value
**/
void *Ccco_ChemCompVarCoord_SetAccess(Ccco_ChemCompVarCoord self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: method 'setAccess' is not callable");
  
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
  @param  Ccco_ChemCompVarCoord self
  @param  ApiList values
**/
void *Ccco_ChemCompVarCoord_SetApplicationData(Ccco_ChemCompVarCoord self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.molecule.ChemCompCoord.ChemCompVarCoord.chemAtomCoords

ChemAtomCoords 
describing coordinates for the ChemAtoms making up the ChemCompVar
  @param  Ccco_ChemCompVarCoord self
  @param  ApiSet values
**/
void *Ccco_ChemCompVarCoord_SetChemAtomCoords(Ccco_ChemCompVarCoord self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setChemAtomCoords");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: cannot find method 'setChemAtomCoords'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: method 'setChemAtomCoords' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.molecule.ChemCompCoord.ChemCompVarCoord.descriptor

descriptor for 
corresponding chemCompVar
  @param  Ccco_ChemCompVarCoord self
  @param  ApiString value
**/
void *Ccco_ChemCompVarCoord_SetDescriptor(Ccco_ChemCompVarCoord self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDescriptor");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: cannot find method 'setDescriptor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: method 'setDescriptor' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemCompCoord.ChemCompVarCoord.linking

linking for 
corresponding ChemCompVar
  @param  Ccco_ChemCompVarCoord self
  @param  ApiString value
**/
void *Ccco_ChemCompVarCoord_SetLinking(Ccco_ChemCompVarCoord self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLinking");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: cannot find method 'setLinking'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: method 'setLinking' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.molecule.ChemCompCoord.ChemCompVarCoord.chemAtomCoords

ChemAtomCoords 
describing coordinates for the ChemAtoms making up the ChemCompVar
  @param  Ccco_ChemCompVarCoord self
  @returns   the result
**/
ApiList Ccco_ChemCompVarCoord_SortedChemAtomCoords(Ccco_ChemCompVarCoord self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChemAtomCoords");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: cannot find method 'sortedChemAtomCoords'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: method 'sortedChemAtomCoords' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.molecule.ChemCompCoord.ChemCompVarCoord.chemCompVars

corresponding 
ChemCompVar, to which coordinates refer
  @param  Ccco_ChemCompVarCoord self
  @returns   the result
**/
ApiList Ccco_ChemCompVarCoord_SortedChemCompVars(Ccco_ChemCompVarCoord self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChemCompVars");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: cannot find method 'sortedChemCompVars'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompVarCoord: method 'sortedChemCompVars' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
