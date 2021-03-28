
#include "ccp.h"

/*
  Default coordinates for ChemAtom in ChemCompVar
*/

/* package ccp.api.molecule.ChemCompCoord */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccco_ChemAtomCoord self
  @param  Impl_ApplicationData value
**/
void *Ccco_ChemAtomCoord_AddApplicationData(Ccco_ChemAtomCoord self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for 
ccp.molecule.ChemCompCoord.ChemAtomCoord.chemCompVarCoords

ChemCompVarCoords 
where ChemAtomCoord is involved.  NBNB TBD - cardinality should be 1..*. 
Current value is temporary, pending a rewrite of the ChemCompCoords.
  @param  Ccco_ChemAtomCoord self
  @param  Ccco_ChemCompVarCoord value
**/
void *Ccco_ChemAtomCoord_AddChemCompVarCoord(Ccco_ChemAtomCoord self, Ccco_ChemCompVarCoord value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addChemCompVarCoord");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: cannot find method 'addChemCompVarCoord'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: method 'addChemCompVarCoord' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.molecule.ChemCompCoord.ChemAtomCoord
  @param  Ccco_ChemAtomCoord self
  @param  ApiBoolean complete
**/
void *Ccco_ChemAtomCoord_CheckAllValid(Ccco_ChemAtomCoord self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.molecule.ChemCompCoord.ChemAtomCoord
  @param  Ccco_ChemAtomCoord self
  @param  ApiBoolean complete
**/
void *Ccco_ChemAtomCoord_CheckValid(Ccco_ChemAtomCoord self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: method 'checkValid' is not callable");
  
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
  @param  Ccco_ChemAtomCoord self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Ccco_ChemAtomCoord_FindAllApplicationData(Ccco_ChemAtomCoord self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: method 'findAllApplicationData' is not callable");
  
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
  @param  Ccco_ChemAtomCoord self
  @returns  all value that satisfy the conditions 
**/
ApiList Ccco_ChemAtomCoord_FindAllApplicationData_keyval0(Ccco_ChemAtomCoord self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Ccco_ChemAtomCoord_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccco_ChemAtomCoord self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Ccco_ChemAtomCoord_FindAllApplicationData_keyval1(Ccco_ChemAtomCoord self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Ccco_ChemAtomCoord_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccco_ChemAtomCoord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Ccco_ChemAtomCoord_FindAllApplicationData_keyval2(Ccco_ChemAtomCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Ccco_ChemAtomCoord_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccco_ChemAtomCoord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Ccco_ChemAtomCoord_FindAllApplicationData_keyval3(Ccco_ChemAtomCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Ccco_ChemAtomCoord_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccco_ChemAtomCoord self
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
ApiList Ccco_ChemAtomCoord_FindAllApplicationData_keyval4(Ccco_ChemAtomCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Ccco_ChemAtomCoord_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemCompCoord.ChemAtomCoord.chemCompVarCoords

ChemCompVarCoords 
where ChemAtomCoord is involved.  NBNB TBD - cardinality should be 1..*. 
Current value is temporary, pending a rewrite of the ChemCompCoords.
  @param  Ccco_ChemAtomCoord self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Ccco_ChemAtomCoord_FindAllChemCompVarCoords(Ccco_ChemAtomCoord self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChemCompVarCoords");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: cannot find method 'findAllChemCompVarCoords'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: method 'findAllChemCompVarCoords' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemCompCoord.ChemAtomCoord.chemCompVarCoords

ChemCompVarCoords 
where ChemAtomCoord is involved.  NBNB TBD - cardinality should be 1..*. 
Current value is temporary, pending a rewrite of the ChemCompCoords.
  @param  Ccco_ChemAtomCoord self
  @returns  all value that satisfy the conditions 
**/
ApiSet Ccco_ChemAtomCoord_FindAllChemCompVarCoords_keyval0(Ccco_ChemAtomCoord self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Ccco_ChemAtomCoord_FindAllChemCompVarCoords(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemCompCoord.ChemAtomCoord.chemCompVarCoords

ChemCompVarCoords 
where ChemAtomCoord is involved.  NBNB TBD - cardinality should be 1..*. 
Current value is temporary, pending a rewrite of the ChemCompCoords.
  @param  Ccco_ChemAtomCoord self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Ccco_ChemAtomCoord_FindAllChemCompVarCoords_keyval1(Ccco_ChemAtomCoord self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Ccco_ChemAtomCoord_FindAllChemCompVarCoords(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemCompCoord.ChemAtomCoord.chemCompVarCoords

ChemCompVarCoords 
where ChemAtomCoord is involved.  NBNB TBD - cardinality should be 1..*. 
Current value is temporary, pending a rewrite of the ChemCompCoords.
  @param  Ccco_ChemAtomCoord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Ccco_ChemAtomCoord_FindAllChemCompVarCoords_keyval2(Ccco_ChemAtomCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Ccco_ChemAtomCoord_FindAllChemCompVarCoords(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemCompCoord.ChemAtomCoord.chemCompVarCoords

ChemCompVarCoords 
where ChemAtomCoord is involved.  NBNB TBD - cardinality should be 1..*. 
Current value is temporary, pending a rewrite of the ChemCompCoords.
  @param  Ccco_ChemAtomCoord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Ccco_ChemAtomCoord_FindAllChemCompVarCoords_keyval3(Ccco_ChemAtomCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Ccco_ChemAtomCoord_FindAllChemCompVarCoords(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemCompCoord.ChemAtomCoord.chemCompVarCoords

ChemCompVarCoords 
where ChemAtomCoord is involved.  NBNB TBD - cardinality should be 1..*. 
Current value is temporary, pending a rewrite of the ChemCompCoords.
  @param  Ccco_ChemAtomCoord self
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
ApiSet Ccco_ChemAtomCoord_FindAllChemCompVarCoords_keyval4(Ccco_ChemAtomCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Ccco_ChemAtomCoord_FindAllChemCompVarCoords(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccco_ChemAtomCoord self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Ccco_ChemAtomCoord_FindFirstApplicationData(Ccco_ChemAtomCoord self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: method 'findFirstApplicationData' is not callable");
  
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
  @param  Ccco_ChemAtomCoord self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Ccco_ChemAtomCoord_FindFirstApplicationData_keyval0(Ccco_ChemAtomCoord self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Ccco_ChemAtomCoord_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccco_ChemAtomCoord self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Ccco_ChemAtomCoord_FindFirstApplicationData_keyval1(Ccco_ChemAtomCoord self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Ccco_ChemAtomCoord_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccco_ChemAtomCoord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Ccco_ChemAtomCoord_FindFirstApplicationData_keyval2(Ccco_ChemAtomCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Ccco_ChemAtomCoord_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccco_ChemAtomCoord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Ccco_ChemAtomCoord_FindFirstApplicationData_keyval3(Ccco_ChemAtomCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Ccco_ChemAtomCoord_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccco_ChemAtomCoord self
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
Impl_ApplicationData Ccco_ChemAtomCoord_FindFirstApplicationData_keyval4(Ccco_ChemAtomCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Ccco_ChemAtomCoord_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemCompCoord.ChemAtomCoord.chemCompVarCoords

ChemCompVarCoords 
where ChemAtomCoord is involved.  NBNB TBD - cardinality should be 1..*. 
Current value is temporary, pending a rewrite of the ChemCompCoords.
  @param  Ccco_ChemAtomCoord self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Ccco_ChemCompVarCoord Ccco_ChemAtomCoord_FindFirstChemCompVarCoord(Ccco_ChemAtomCoord self, ApiMap conditions)
{
  
  Ccco_ChemCompVarCoord obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChemCompVarCoord");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: cannot find method 'findFirstChemCompVarCoord'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: method 'findFirstChemCompVarCoord' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemCompCoord.ChemAtomCoord.chemCompVarCoords

ChemCompVarCoords 
where ChemAtomCoord is involved.  NBNB TBD - cardinality should be 1..*. 
Current value is temporary, pending a rewrite of the ChemCompCoords.
  @param  Ccco_ChemAtomCoord self
  @returns  the first value that satisfies the conditions 
**/
Ccco_ChemCompVarCoord Ccco_ChemAtomCoord_FindFirstChemCompVarCoord_keyval0(Ccco_ChemAtomCoord self)
{
  
  Ccco_ChemCompVarCoord  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Ccco_ChemAtomCoord_FindFirstChemCompVarCoord(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemCompCoord.ChemAtomCoord.chemCompVarCoords

ChemCompVarCoords 
where ChemAtomCoord is involved.  NBNB TBD - cardinality should be 1..*. 
Current value is temporary, pending a rewrite of the ChemCompCoords.
  @param  Ccco_ChemAtomCoord self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Ccco_ChemCompVarCoord Ccco_ChemAtomCoord_FindFirstChemCompVarCoord_keyval1(Ccco_ChemAtomCoord self, char * key, ApiObject value)
{
  
  Ccco_ChemCompVarCoord  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Ccco_ChemAtomCoord_FindFirstChemCompVarCoord(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemCompCoord.ChemAtomCoord.chemCompVarCoords

ChemCompVarCoords 
where ChemAtomCoord is involved.  NBNB TBD - cardinality should be 1..*. 
Current value is temporary, pending a rewrite of the ChemCompCoords.
  @param  Ccco_ChemAtomCoord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Ccco_ChemCompVarCoord Ccco_ChemAtomCoord_FindFirstChemCompVarCoord_keyval2(Ccco_ChemAtomCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Ccco_ChemCompVarCoord  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Ccco_ChemAtomCoord_FindFirstChemCompVarCoord(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemCompCoord.ChemAtomCoord.chemCompVarCoords

ChemCompVarCoords 
where ChemAtomCoord is involved.  NBNB TBD - cardinality should be 1..*. 
Current value is temporary, pending a rewrite of the ChemCompCoords.
  @param  Ccco_ChemAtomCoord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Ccco_ChemCompVarCoord Ccco_ChemAtomCoord_FindFirstChemCompVarCoord_keyval3(Ccco_ChemAtomCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Ccco_ChemCompVarCoord  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Ccco_ChemAtomCoord_FindFirstChemCompVarCoord(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemCompCoord.ChemAtomCoord.chemCompVarCoords

ChemCompVarCoords 
where ChemAtomCoord is involved.  NBNB TBD - cardinality should be 1..*. 
Current value is temporary, pending a rewrite of the ChemCompCoords.
  @param  Ccco_ChemAtomCoord self
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
Ccco_ChemCompVarCoord Ccco_ChemAtomCoord_FindFirstChemCompVarCoord_keyval4(Ccco_ChemAtomCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Ccco_ChemCompVarCoord  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Ccco_ChemAtomCoord_FindFirstChemCompVarCoord(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.molecule.ChemCompCoord.ChemAtomCoord
  @param  Ccco_ChemAtomCoord self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Ccco_ChemAtomCoord_Get(Ccco_ChemAtomCoord self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Ccco_ChemAtomCoord self
  @returns   the result
**/
Acco_AccessObject Ccco_ChemAtomCoord_GetAccess(Ccco_ChemAtomCoord self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: method 'getAccess' is not callable");
  
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
  @param  Ccco_ChemAtomCoord self
  @returns   the result
**/
ApiList Ccco_ChemAtomCoord_GetApplicationData(Ccco_ChemAtomCoord self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.molecule.ChemCompCoord.ChemAtomCoord
  @param  Ccco_ChemAtomCoord self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Ccco_ChemAtomCoord Ccco_ChemAtomCoord_GetByKey(Ccco_ChemAtomCoord self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Ccco_ChemAtomCoord obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: method 'getByKey' is not callable");
  
  args = PyTuple_Pack(2, startObj, fullKey);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived link chemAtom
  @param  Ccco_ChemAtomCoord self
  @returns   the result
**/
Chem_AbstractChemAtom Ccco_ChemAtomCoord_GetChemAtom(Ccco_ChemAtomCoord self)
{
  
  Chem_AbstractChemAtom obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemAtom");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: cannot find method 'getChemAtom'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: method 'getChemAtom' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemCompCoord.ChemAtomCoord.chemCompCoord

parent 
link
  @param  Ccco_ChemAtomCoord self
  @returns   the result
**/
Ccco_ChemCompCoord Ccco_ChemAtomCoord_GetChemCompCoord(Ccco_ChemAtomCoord self)
{
  
  Ccco_ChemCompCoord obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemCompCoord");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: cannot find method 'getChemCompCoord'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: method 'getChemCompCoord' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.molecule.ChemCompCoord.ChemAtomCoord.chemCompVarCoords

ChemCompVarCoords 
where ChemAtomCoord is involved.  NBNB TBD - cardinality should be 1..*. 
Current value is temporary, pending a rewrite of the ChemCompCoords.
  @param  Ccco_ChemAtomCoord self
  @returns   the result
**/
ApiSet Ccco_ChemAtomCoord_GetChemCompVarCoords(Ccco_ChemAtomCoord self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemCompVarCoords");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: cannot find method 'getChemCompVarCoords'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: method 'getChemCompVarCoords' is not callable");
  
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
  @param  Ccco_ChemAtomCoord self
  @returns   the result
**/
ApiString Ccco_ChemAtomCoord_GetClassName(Ccco_ChemAtomCoord self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: method 'getClassName' is not callable");
  
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
  @param  Ccco_ChemAtomCoord self
  @returns   the result
**/
ApiList Ccco_ChemAtomCoord_GetFieldNames(Ccco_ChemAtomCoord self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.molecule.ChemCompCoord.ChemAtomCoord
  @param  Ccco_ChemAtomCoord self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Ccco_ChemAtomCoord_GetFullKey(Ccco_ChemAtomCoord self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: method 'getFullKey' is not callable");
  
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
  @param  Ccco_ChemAtomCoord self
  @returns   the result
**/
ApiBoolean Ccco_ChemAtomCoord_GetInConstructor(Ccco_ChemAtomCoord self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: method 'getInConstructor' is not callable");
  
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
  @param  Ccco_ChemAtomCoord self
  @returns   the result
**/
ApiBoolean Ccco_ChemAtomCoord_GetIsDeleted(Ccco_ChemAtomCoord self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.molecule.ChemCompCoord.ChemAtomCoord
  @param  Ccco_ChemAtomCoord self
  @returns  Local object key
**/
ApiObject Ccco_ChemAtomCoord_GetLocalKey(Ccco_ChemAtomCoord self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemCompCoord.ChemAtomCoord.name

Name of ChemAtom 
to which coordinates belong
  @param  Ccco_ChemAtomCoord self
  @returns   the result
**/
ApiString Ccco_ChemAtomCoord_GetName(Ccco_ChemAtomCoord self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: method 'getName' is not callable");
  
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
  @param  Ccco_ChemAtomCoord self
  @returns   the result
**/
ApiString Ccco_ChemAtomCoord_GetPackageName(Ccco_ChemAtomCoord self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: method 'getPackageName' is not callable");
  
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
  @param  Ccco_ChemAtomCoord self
  @returns   the result
**/
ApiString Ccco_ChemAtomCoord_GetPackageShortName(Ccco_ChemAtomCoord self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemCompCoord.ChemAtomCoord.parent

link to parent 
object - synonym for chemCompCoord
  @param  Ccco_ChemAtomCoord self
  @returns   the result
**/
Ccco_ChemCompCoord Ccco_ChemAtomCoord_GetParent(Ccco_ChemAtomCoord self)
{
  
  Ccco_ChemCompCoord obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: method 'getParent' is not callable");
  
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
  @param  Ccco_ChemAtomCoord self
  @returns   the result
**/
ApiString Ccco_ChemAtomCoord_GetQualifiedName(Ccco_ChemAtomCoord self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: method 'getQualifiedName' is not callable");
  
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
  @param  Ccco_ChemAtomCoord self
  @returns   the result
**/
Impl_MemopsRoot Ccco_ChemAtomCoord_GetRoot(Ccco_ChemAtomCoord self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemCompCoord.ChemAtomCoord.serial

Serial number 
of object. Serves as object main key. Serial numbers of deleted objects 
are not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Ccco_ChemAtomCoord self
  @returns   the result
**/
ApiInteger Ccco_ChemAtomCoord_GetSerial(Ccco_ChemAtomCoord self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: method 'getSerial' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemCompCoord.ChemAtomCoord.subType

SubType of 
ChemAtom to which coordinates belong
  @param  Ccco_ChemAtomCoord self
  @returns   the result
**/
ApiInteger Ccco_ChemAtomCoord_GetSubType(Ccco_ChemAtomCoord self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSubType");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: cannot find method 'getSubType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: method 'getSubType' is not callable");
  
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
  @param  Ccco_ChemAtomCoord self
  @returns   the result
**/
Impl_TopObject Ccco_ChemAtomCoord_GetTopObject(Ccco_ChemAtomCoord self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemCompCoord.ChemAtomCoord.x

X coordinate in 
Angstroms
  @param  Ccco_ChemAtomCoord self
  @returns   the result
**/
ApiFloat Ccco_ChemAtomCoord_GetX(Ccco_ChemAtomCoord self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getX");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: cannot find method 'getX'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: method 'getX' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemCompCoord.ChemAtomCoord.y

Y coordinate in 
Angstroms
  @param  Ccco_ChemAtomCoord self
  @returns   the result
**/
ApiFloat Ccco_ChemAtomCoord_GetY(Ccco_ChemAtomCoord self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getY");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: cannot find method 'getY'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: method 'getY' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemCompCoord.ChemAtomCoord.z

Z coordinate in 
Angstroms
  @param  Ccco_ChemAtomCoord self
  @returns   the result
**/
ApiFloat Ccco_ChemAtomCoord_GetZ(Ccco_ChemAtomCoord self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getZ");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: cannot find method 'getZ'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: method 'getZ' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.molecule.ChemCompCoord.ChemAtomCoord
  @param  Ccco_ChemCompCoord parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Ccco_ChemAtomCoord Ccco_ChemAtomCoord_Init(Ccco_ChemCompCoord parent, ApiMap attrlinks)
{
  
  return Ccco_ChemCompCoord_NewChemAtomCoord(parent, attrlinks);
}

/**
  Constructor for ccp.molecule.ChemCompCoord.ChemAtomCoord
  @param  Ccco_ChemCompCoord parent
  @param  char * name
  @returns  the new object
**/
Ccco_ChemAtomCoord Ccco_ChemAtomCoord_Init_reqd(Ccco_ChemCompCoord parent, char * name)
{
  
  Ccco_ChemAtomCoord  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Ccco_ChemAtomCoord_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccco_ChemAtomCoord self
  @param  Impl_ApplicationData value
**/
void *Ccco_ChemAtomCoord_RemoveApplicationData(Ccco_ChemAtomCoord self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
ccp.molecule.ChemCompCoord.ChemAtomCoord.chemCompVarCoords

ChemCompVarCoords 
where ChemAtomCoord is involved.  NBNB TBD - cardinality should be 1..*. 
Current value is temporary, pending a rewrite of the ChemCompCoords.
  @param  Ccco_ChemAtomCoord self
  @param  Ccco_ChemCompVarCoord value
**/
void *Ccco_ChemAtomCoord_RemoveChemCompVarCoord(Ccco_ChemAtomCoord self, Ccco_ChemCompVarCoord value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeChemCompVarCoord");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: cannot find method 'removeChemCompVarCoord'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: method 'removeChemCompVarCoord' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.molecule.ChemCompCoord.ChemAtomCoord
  @param  Ccco_ChemAtomCoord self
  @param  ApiString name
  @param  ApiObject value
**/
void *Ccco_ChemAtomCoord_Set(Ccco_ChemAtomCoord self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Ccco_ChemAtomCoord self
  @param  Acco_AccessObject value
**/
void *Ccco_ChemAtomCoord_SetAccess(Ccco_ChemAtomCoord self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: method 'setAccess' is not callable");
  
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
  @param  Ccco_ChemAtomCoord self
  @param  ApiList values
**/
void *Ccco_ChemAtomCoord_SetApplicationData(Ccco_ChemAtomCoord self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.molecule.ChemCompCoord.ChemAtomCoord.chemCompVarCoords

ChemCompVarCoords 
where ChemAtomCoord is involved.  NBNB TBD - cardinality should be 1..*. 
Current value is temporary, pending a rewrite of the ChemCompCoords.
  @param  Ccco_ChemAtomCoord self
  @param  ApiSet values
**/
void *Ccco_ChemAtomCoord_SetChemCompVarCoords(Ccco_ChemAtomCoord self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setChemCompVarCoords");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: cannot find method 'setChemCompVarCoords'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: method 'setChemCompVarCoords' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemCompCoord.ChemAtomCoord.name

Name of ChemAtom 
to which coordinates belong
  @param  Ccco_ChemAtomCoord self
  @param  ApiString value
**/
void *Ccco_ChemAtomCoord_SetName(Ccco_ChemAtomCoord self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemCompCoord.ChemAtomCoord.serial

Serial number 
of object. Serves as object main key. Serial numbers of deleted objects 
are not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Ccco_ChemAtomCoord self
  @param  ApiInteger value
**/
void *Ccco_ChemAtomCoord_SetSerial(Ccco_ChemAtomCoord self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemCompCoord.ChemAtomCoord.subType

SubType of 
ChemAtom to which coordinates belong
  @param  Ccco_ChemAtomCoord self
  @param  ApiInteger value
**/
void *Ccco_ChemAtomCoord_SetSubType(Ccco_ChemAtomCoord self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSubType");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: cannot find method 'setSubType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: method 'setSubType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemCompCoord.ChemAtomCoord.x

X coordinate in 
Angstroms
  @param  Ccco_ChemAtomCoord self
  @param  ApiFloat value
**/
void *Ccco_ChemAtomCoord_SetX(Ccco_ChemAtomCoord self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setX");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: cannot find method 'setX'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: method 'setX' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemCompCoord.ChemAtomCoord.y

Y coordinate in 
Angstroms
  @param  Ccco_ChemAtomCoord self
  @param  ApiFloat value
**/
void *Ccco_ChemAtomCoord_SetY(Ccco_ChemAtomCoord self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setY");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: cannot find method 'setY'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: method 'setY' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemCompCoord.ChemAtomCoord.z

Z coordinate in 
Angstroms
  @param  Ccco_ChemAtomCoord self
  @param  ApiFloat value
**/
void *Ccco_ChemAtomCoord_SetZ(Ccco_ChemAtomCoord self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setZ");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: cannot find method 'setZ'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: method 'setZ' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.molecule.ChemCompCoord.ChemAtomCoord.chemCompVarCoords

ChemCompVarCoords 
where ChemAtomCoord is involved.  NBNB TBD - cardinality should be 1..*. 
Current value is temporary, pending a rewrite of the ChemCompCoords.
  @param  Ccco_ChemAtomCoord self
  @returns   the result
**/
ApiList Ccco_ChemAtomCoord_SortedChemCompVarCoords(Ccco_ChemAtomCoord self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChemCompVarCoords");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: cannot find method 'sortedChemCompVarCoords'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemAtomCoord: method 'sortedChemCompVarCoords' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
