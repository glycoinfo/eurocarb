
#include "ccp.h"

/*
  ChemCompVar, with the Atoms it contains. Note: atoms belonging to Vars with an 'any' attribute must belong to all the relevant Vars
*/

/* package ccp.api.molecule.ChemCompCharge */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccca_ChemCompVarCharge self
  @param  Impl_ApplicationData value
**/
void *Ccca_ChemCompVarCharge_AddApplicationData(Ccca_ChemCompVarCharge self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for 
ccp.molecule.ChemCompCharge.ChemCompVarCharge.chemAtomCharges

ForceAtoms 
that are part of ChemCompVarForce
  @param  Ccca_ChemCompVarCharge self
  @param  Ccca_ChemAtomCharge value
**/
void *Ccca_ChemCompVarCharge_AddChemAtomCharge(Ccca_ChemCompVarCharge self, Ccca_ChemAtomCharge value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addChemAtomCharge");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: cannot find method 'addChemAtomCharge'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: method 'addChemAtomCharge' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.molecule.ChemCompCharge.ChemCompVarCharge
  @param  Ccca_ChemCompVarCharge self
  @param  ApiBoolean complete
**/
void *Ccca_ChemCompVarCharge_CheckAllValid(Ccca_ChemCompVarCharge self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.molecule.ChemCompCharge.ChemCompVarCharge
  @param  Ccca_ChemCompVarCharge self
  @param  ApiBoolean complete
**/
void *Ccca_ChemCompVarCharge_CheckValid(Ccca_ChemCompVarCharge self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: method 'checkValid' is not callable");
  
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
  @param  Ccca_ChemCompVarCharge self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Ccca_ChemCompVarCharge_FindAllApplicationData(Ccca_ChemCompVarCharge self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: method 'findAllApplicationData' is not callable");
  
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
  @param  Ccca_ChemCompVarCharge self
  @returns  all value that satisfy the conditions 
**/
ApiList Ccca_ChemCompVarCharge_FindAllApplicationData_keyval0(Ccca_ChemCompVarCharge self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Ccca_ChemCompVarCharge_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccca_ChemCompVarCharge self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Ccca_ChemCompVarCharge_FindAllApplicationData_keyval1(Ccca_ChemCompVarCharge self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Ccca_ChemCompVarCharge_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccca_ChemCompVarCharge self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Ccca_ChemCompVarCharge_FindAllApplicationData_keyval2(Ccca_ChemCompVarCharge self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Ccca_ChemCompVarCharge_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccca_ChemCompVarCharge self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Ccca_ChemCompVarCharge_FindAllApplicationData_keyval3(Ccca_ChemCompVarCharge self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Ccca_ChemCompVarCharge_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccca_ChemCompVarCharge self
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
ApiList Ccca_ChemCompVarCharge_FindAllApplicationData_keyval4(Ccca_ChemCompVarCharge self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Ccca_ChemCompVarCharge_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemCompCharge.ChemCompVarCharge.chemAtomCharges

ForceAtoms 
that are part of ChemCompVarForce
  @param  Ccca_ChemCompVarCharge self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Ccca_ChemCompVarCharge_FindAllChemAtomCharges(Ccca_ChemCompVarCharge self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChemAtomCharges");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: cannot find method 'findAllChemAtomCharges'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: method 'findAllChemAtomCharges' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemCompCharge.ChemCompVarCharge.chemAtomCharges

ForceAtoms 
that are part of ChemCompVarForce
  @param  Ccca_ChemCompVarCharge self
  @returns  all value that satisfy the conditions 
**/
ApiSet Ccca_ChemCompVarCharge_FindAllChemAtomCharges_keyval0(Ccca_ChemCompVarCharge self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Ccca_ChemCompVarCharge_FindAllChemAtomCharges(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemCompCharge.ChemCompVarCharge.chemAtomCharges

ForceAtoms 
that are part of ChemCompVarForce
  @param  Ccca_ChemCompVarCharge self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Ccca_ChemCompVarCharge_FindAllChemAtomCharges_keyval1(Ccca_ChemCompVarCharge self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Ccca_ChemCompVarCharge_FindAllChemAtomCharges(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemCompCharge.ChemCompVarCharge.chemAtomCharges

ForceAtoms 
that are part of ChemCompVarForce
  @param  Ccca_ChemCompVarCharge self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Ccca_ChemCompVarCharge_FindAllChemAtomCharges_keyval2(Ccca_ChemCompVarCharge self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Ccca_ChemCompVarCharge_FindAllChemAtomCharges(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemCompCharge.ChemCompVarCharge.chemAtomCharges

ForceAtoms 
that are part of ChemCompVarForce
  @param  Ccca_ChemCompVarCharge self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Ccca_ChemCompVarCharge_FindAllChemAtomCharges_keyval3(Ccca_ChemCompVarCharge self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Ccca_ChemCompVarCharge_FindAllChemAtomCharges(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemCompCharge.ChemCompVarCharge.chemAtomCharges

ForceAtoms 
that are part of ChemCompVarForce
  @param  Ccca_ChemCompVarCharge self
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
ApiSet Ccca_ChemCompVarCharge_FindAllChemAtomCharges_keyval4(Ccca_ChemCompVarCharge self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Ccca_ChemCompVarCharge_FindAllChemAtomCharges(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemCompCharge.ChemCompVarCharge.chemCompVars

ChemComp.ChemCompVars 
corresponding to the ChemCompForce.ChemCompVar
  @param  Ccca_ChemCompVarCharge self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Ccca_ChemCompVarCharge_FindAllChemCompVars(Ccca_ChemCompVarCharge self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChemCompVars");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: cannot find method 'findAllChemCompVars'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: method 'findAllChemCompVars' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemCompCharge.ChemCompVarCharge.chemCompVars

ChemComp.ChemCompVars 
corresponding to the ChemCompForce.ChemCompVar
  @param  Ccca_ChemCompVarCharge self
  @returns  all value that satisfy the conditions 
**/
ApiSet Ccca_ChemCompVarCharge_FindAllChemCompVars_keyval0(Ccca_ChemCompVarCharge self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Ccca_ChemCompVarCharge_FindAllChemCompVars(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemCompCharge.ChemCompVarCharge.chemCompVars

ChemComp.ChemCompVars 
corresponding to the ChemCompForce.ChemCompVar
  @param  Ccca_ChemCompVarCharge self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Ccca_ChemCompVarCharge_FindAllChemCompVars_keyval1(Ccca_ChemCompVarCharge self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Ccca_ChemCompVarCharge_FindAllChemCompVars(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemCompCharge.ChemCompVarCharge.chemCompVars

ChemComp.ChemCompVars 
corresponding to the ChemCompForce.ChemCompVar
  @param  Ccca_ChemCompVarCharge self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Ccca_ChemCompVarCharge_FindAllChemCompVars_keyval2(Ccca_ChemCompVarCharge self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Ccca_ChemCompVarCharge_FindAllChemCompVars(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemCompCharge.ChemCompVarCharge.chemCompVars

ChemComp.ChemCompVars 
corresponding to the ChemCompForce.ChemCompVar
  @param  Ccca_ChemCompVarCharge self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Ccca_ChemCompVarCharge_FindAllChemCompVars_keyval3(Ccca_ChemCompVarCharge self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Ccca_ChemCompVarCharge_FindAllChemCompVars(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemCompCharge.ChemCompVarCharge.chemCompVars

ChemComp.ChemCompVars 
corresponding to the ChemCompForce.ChemCompVar
  @param  Ccca_ChemCompVarCharge self
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
ApiSet Ccca_ChemCompVarCharge_FindAllChemCompVars_keyval4(Ccca_ChemCompVarCharge self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Ccca_ChemCompVarCharge_FindAllChemCompVars(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccca_ChemCompVarCharge self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Ccca_ChemCompVarCharge_FindFirstApplicationData(Ccca_ChemCompVarCharge self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: method 'findFirstApplicationData' is not callable");
  
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
  @param  Ccca_ChemCompVarCharge self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Ccca_ChemCompVarCharge_FindFirstApplicationData_keyval0(Ccca_ChemCompVarCharge self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Ccca_ChemCompVarCharge_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccca_ChemCompVarCharge self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Ccca_ChemCompVarCharge_FindFirstApplicationData_keyval1(Ccca_ChemCompVarCharge self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Ccca_ChemCompVarCharge_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccca_ChemCompVarCharge self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Ccca_ChemCompVarCharge_FindFirstApplicationData_keyval2(Ccca_ChemCompVarCharge self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Ccca_ChemCompVarCharge_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccca_ChemCompVarCharge self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Ccca_ChemCompVarCharge_FindFirstApplicationData_keyval3(Ccca_ChemCompVarCharge self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Ccca_ChemCompVarCharge_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccca_ChemCompVarCharge self
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
Impl_ApplicationData Ccca_ChemCompVarCharge_FindFirstApplicationData_keyval4(Ccca_ChemCompVarCharge self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Ccca_ChemCompVarCharge_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemCompCharge.ChemCompVarCharge.chemAtomCharges

ForceAtoms 
that are part of ChemCompVarForce
  @param  Ccca_ChemCompVarCharge self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Ccca_ChemAtomCharge Ccca_ChemCompVarCharge_FindFirstChemAtomCharge(Ccca_ChemCompVarCharge self, ApiMap conditions)
{
  
  Ccca_ChemAtomCharge obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChemAtomCharge");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: cannot find method 'findFirstChemAtomCharge'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: method 'findFirstChemAtomCharge' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemCompCharge.ChemCompVarCharge.chemAtomCharges

ForceAtoms 
that are part of ChemCompVarForce
  @param  Ccca_ChemCompVarCharge self
  @returns  the first value that satisfies the conditions 
**/
Ccca_ChemAtomCharge Ccca_ChemCompVarCharge_FindFirstChemAtomCharge_keyval0(Ccca_ChemCompVarCharge self)
{
  
  Ccca_ChemAtomCharge  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Ccca_ChemCompVarCharge_FindFirstChemAtomCharge(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemCompCharge.ChemCompVarCharge.chemAtomCharges

ForceAtoms 
that are part of ChemCompVarForce
  @param  Ccca_ChemCompVarCharge self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Ccca_ChemAtomCharge Ccca_ChemCompVarCharge_FindFirstChemAtomCharge_keyval1(Ccca_ChemCompVarCharge self, char * key, ApiObject value)
{
  
  Ccca_ChemAtomCharge  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Ccca_ChemCompVarCharge_FindFirstChemAtomCharge(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemCompCharge.ChemCompVarCharge.chemAtomCharges

ForceAtoms 
that are part of ChemCompVarForce
  @param  Ccca_ChemCompVarCharge self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Ccca_ChemAtomCharge Ccca_ChemCompVarCharge_FindFirstChemAtomCharge_keyval2(Ccca_ChemCompVarCharge self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Ccca_ChemAtomCharge  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Ccca_ChemCompVarCharge_FindFirstChemAtomCharge(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemCompCharge.ChemCompVarCharge.chemAtomCharges

ForceAtoms 
that are part of ChemCompVarForce
  @param  Ccca_ChemCompVarCharge self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Ccca_ChemAtomCharge Ccca_ChemCompVarCharge_FindFirstChemAtomCharge_keyval3(Ccca_ChemCompVarCharge self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Ccca_ChemAtomCharge  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Ccca_ChemCompVarCharge_FindFirstChemAtomCharge(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemCompCharge.ChemCompVarCharge.chemAtomCharges

ForceAtoms 
that are part of ChemCompVarForce
  @param  Ccca_ChemCompVarCharge self
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
Ccca_ChemAtomCharge Ccca_ChemCompVarCharge_FindFirstChemAtomCharge_keyval4(Ccca_ChemCompVarCharge self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Ccca_ChemAtomCharge  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Ccca_ChemCompVarCharge_FindFirstChemAtomCharge(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemCompCharge.ChemCompVarCharge.chemCompVars

ChemComp.ChemCompVars 
corresponding to the ChemCompForce.ChemCompVar
  @param  Ccca_ChemCompVarCharge self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemCompVar Ccca_ChemCompVarCharge_FindFirstChemCompVar(Ccca_ChemCompVarCharge self, ApiMap conditions)
{
  
  Chem_ChemCompVar obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChemCompVar");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: cannot find method 'findFirstChemCompVar'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: method 'findFirstChemCompVar' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemCompCharge.ChemCompVarCharge.chemCompVars

ChemComp.ChemCompVars 
corresponding to the ChemCompForce.ChemCompVar
  @param  Ccca_ChemCompVarCharge self
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemCompVar Ccca_ChemCompVarCharge_FindFirstChemCompVar_keyval0(Ccca_ChemCompVarCharge self)
{
  
  Chem_ChemCompVar  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Ccca_ChemCompVarCharge_FindFirstChemCompVar(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemCompCharge.ChemCompVarCharge.chemCompVars

ChemComp.ChemCompVars 
corresponding to the ChemCompForce.ChemCompVar
  @param  Ccca_ChemCompVarCharge self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemCompVar Ccca_ChemCompVarCharge_FindFirstChemCompVar_keyval1(Ccca_ChemCompVarCharge self, char * key, ApiObject value)
{
  
  Chem_ChemCompVar  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Ccca_ChemCompVarCharge_FindFirstChemCompVar(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemCompCharge.ChemCompVarCharge.chemCompVars

ChemComp.ChemCompVars 
corresponding to the ChemCompForce.ChemCompVar
  @param  Ccca_ChemCompVarCharge self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemCompVar Ccca_ChemCompVarCharge_FindFirstChemCompVar_keyval2(Ccca_ChemCompVarCharge self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chem_ChemCompVar  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Ccca_ChemCompVarCharge_FindFirstChemCompVar(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemCompCharge.ChemCompVarCharge.chemCompVars

ChemComp.ChemCompVars 
corresponding to the ChemCompForce.ChemCompVar
  @param  Ccca_ChemCompVarCharge self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemCompVar Ccca_ChemCompVarCharge_FindFirstChemCompVar_keyval3(Ccca_ChemCompVarCharge self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chem_ChemCompVar  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Ccca_ChemCompVarCharge_FindFirstChemCompVar(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemCompCharge.ChemCompVarCharge.chemCompVars

ChemComp.ChemCompVars 
corresponding to the ChemCompForce.ChemCompVar
  @param  Ccca_ChemCompVarCharge self
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
Chem_ChemCompVar Ccca_ChemCompVarCharge_FindFirstChemCompVar_keyval4(Ccca_ChemCompVarCharge self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chem_ChemCompVar  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Ccca_ChemCompVarCharge_FindFirstChemCompVar(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.molecule.ChemCompCharge.ChemCompVarCharge
  @param  Ccca_ChemCompVarCharge self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Ccca_ChemCompVarCharge_Get(Ccca_ChemCompVarCharge self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Ccca_ChemCompVarCharge self
  @returns   the result
**/
Acco_AccessObject Ccca_ChemCompVarCharge_GetAccess(Ccca_ChemCompVarCharge self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: method 'getAccess' is not callable");
  
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
  @param  Ccca_ChemCompVarCharge self
  @returns   the result
**/
Acco_AccessObject Ccca_ChemCompVarCharge_GetActiveAccess(Ccca_ChemCompVarCharge self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: method 'getActiveAccess' is not callable");
  
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
  @param  Ccca_ChemCompVarCharge self
  @returns   the result
**/
ApiList Ccca_ChemCompVarCharge_GetApplicationData(Ccca_ChemCompVarCharge self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.molecule.ChemCompCharge.ChemCompVarCharge
  @param  Ccca_ChemCompVarCharge self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Ccca_ChemCompVarCharge Ccca_ChemCompVarCharge_GetByKey(Ccca_ChemCompVarCharge self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Ccca_ChemCompVarCharge obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: method 'getByKey' is not callable");
  
  args = PyTuple_Pack(2, startObj, fullKey);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.molecule.ChemCompCharge.ChemCompVarCharge.chemAtomCharges

ForceAtoms 
that are part of ChemCompVarForce
  @param  Ccca_ChemCompVarCharge self
  @returns   the result
**/
ApiSet Ccca_ChemCompVarCharge_GetChemAtomCharges(Ccca_ChemCompVarCharge self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemAtomCharges");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: cannot find method 'getChemAtomCharges'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: method 'getChemAtomCharges' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.molecule.ChemCompCharge.ChemCompVarCharge.chemCompCharge

parent 
link
  @param  Ccca_ChemCompVarCharge self
  @returns   the result
**/
Ccca_ChemCompCharge Ccca_ChemCompVarCharge_GetChemCompCharge(Ccca_ChemCompVarCharge self)
{
  
  Ccca_ChemCompCharge obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemCompCharge");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: cannot find method 'getChemCompCharge'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: method 'getChemCompCharge' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived link chemCompVars
  @param  Ccca_ChemCompVarCharge self
  @returns   the result
**/
ApiSet Ccca_ChemCompVarCharge_GetChemCompVars(Ccca_ChemCompVarCharge self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemCompVars");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: cannot find method 'getChemCompVars'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: method 'getChemCompVars' is not callable");
  
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
  @param  Ccca_ChemCompVarCharge self
  @returns   the result
**/
ApiString Ccca_ChemCompVarCharge_GetClassName(Ccca_ChemCompVarCharge self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.molecule.ChemCompCharge.ChemCompVarCharge.descriptor

descriptor for 
ChemCompVar. Parts of identifying key for associated 
ChemComp.ChemCompVar
  @param  Ccca_ChemCompVarCharge self
  @returns   the result
**/
ApiString Ccca_ChemCompVarCharge_GetDescriptor(Ccca_ChemCompVarCharge self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDescriptor");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: cannot find method 'getDescriptor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: method 'getDescriptor' is not callable");
  
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
  @param  Ccca_ChemCompVarCharge self
  @returns   the result
**/
ApiList Ccca_ChemCompVarCharge_GetFieldNames(Ccca_ChemCompVarCharge self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.molecule.ChemCompCharge.ChemCompVarCharge
  @param  Ccca_ChemCompVarCharge self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Ccca_ChemCompVarCharge_GetFullKey(Ccca_ChemCompVarCharge self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: method 'getFullKey' is not callable");
  
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
  @param  Ccca_ChemCompVarCharge self
  @returns   the result
**/
ApiBoolean Ccca_ChemCompVarCharge_GetInConstructor(Ccca_ChemCompVarCharge self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: method 'getInConstructor' is not callable");
  
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
  @param  Ccca_ChemCompVarCharge self
  @returns   the result
**/
ApiBoolean Ccca_ChemCompVarCharge_GetIsDeleted(Ccca_ChemCompVarCharge self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemCompCharge.ChemCompVarCharge.linking

linking 
for ChemCompVar. Parts of identifying key for associated 
ChemComp.ChemCompVar
  @param  Ccca_ChemCompVarCharge self
  @returns   the result
**/
ApiString Ccca_ChemCompVarCharge_GetLinking(Ccca_ChemCompVarCharge self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLinking");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: cannot find method 'getLinking'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: method 'getLinking' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.molecule.ChemCompCharge.ChemCompVarCharge
  @param  Ccca_ChemCompVarCharge self
  @returns  Local object key
**/
ApiObject Ccca_ChemCompVarCharge_GetLocalKey(Ccca_ChemCompVarCharge self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: method 'getLocalKey' is not callable");
  
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
  @param  Ccca_ChemCompVarCharge self
  @returns   the result
**/
ApiString Ccca_ChemCompVarCharge_GetPackageName(Ccca_ChemCompVarCharge self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: method 'getPackageName' is not callable");
  
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
  @param  Ccca_ChemCompVarCharge self
  @returns   the result
**/
ApiString Ccca_ChemCompVarCharge_GetPackageShortName(Ccca_ChemCompVarCharge self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemCompCharge.ChemCompVarCharge.parent

link to 
parent object - synonym for chemCompCharge
  @param  Ccca_ChemCompVarCharge self
  @returns   the result
**/
Ccca_ChemCompCharge Ccca_ChemCompVarCharge_GetParent(Ccca_ChemCompVarCharge self)
{
  
  Ccca_ChemCompCharge obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: method 'getParent' is not callable");
  
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
  @param  Ccca_ChemCompVarCharge self
  @returns   the result
**/
ApiString Ccca_ChemCompVarCharge_GetQualifiedName(Ccca_ChemCompVarCharge self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: method 'getQualifiedName' is not callable");
  
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
  @param  Ccca_ChemCompVarCharge self
  @returns   the result
**/
Impl_MemopsRoot Ccca_ChemCompVarCharge_GetRoot(Ccca_ChemCompVarCharge self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: method 'getRoot' is not callable");
  
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
  @param  Ccca_ChemCompVarCharge self
  @returns   the result
**/
Impl_TopObject Ccca_ChemCompVarCharge_GetTopObject(Ccca_ChemCompVarCharge self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.molecule.ChemCompCharge.ChemCompVarCharge
  @param  Ccca_ChemCompCharge parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Ccca_ChemCompVarCharge Ccca_ChemCompVarCharge_Init(Ccca_ChemCompCharge parent, ApiMap attrlinks)
{
  
  return Ccca_ChemCompCharge_NewChemCompVarCharge(parent, attrlinks);
}

/**
  Constructor for ccp.molecule.ChemCompCharge.ChemCompVarCharge
  @param  Ccca_ChemCompCharge parent
  @returns  the new object
**/
Ccca_ChemCompVarCharge Ccca_ChemCompVarCharge_Init_reqd(Ccca_ChemCompCharge parent)
{
  
  Ccca_ChemCompVarCharge  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Ccca_ChemCompVarCharge_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccca_ChemCompVarCharge self
  @param  Impl_ApplicationData value
**/
void *Ccca_ChemCompVarCharge_RemoveApplicationData(Ccca_ChemCompVarCharge self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
ccp.molecule.ChemCompCharge.ChemCompVarCharge.chemAtomCharges

ForceAtoms 
that are part of ChemCompVarForce
  @param  Ccca_ChemCompVarCharge self
  @param  Ccca_ChemAtomCharge value
**/
void *Ccca_ChemCompVarCharge_RemoveChemAtomCharge(Ccca_ChemCompVarCharge self, Ccca_ChemAtomCharge value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeChemAtomCharge");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: cannot find method 'removeChemAtomCharge'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: method 'removeChemAtomCharge' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.molecule.ChemCompCharge.ChemCompVarCharge
  @param  Ccca_ChemCompVarCharge self
  @param  ApiString name
  @param  ApiObject value
**/
void *Ccca_ChemCompVarCharge_Set(Ccca_ChemCompVarCharge self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Ccca_ChemCompVarCharge self
  @param  Acco_AccessObject value
**/
void *Ccca_ChemCompVarCharge_SetAccess(Ccca_ChemCompVarCharge self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: method 'setAccess' is not callable");
  
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
  @param  Ccca_ChemCompVarCharge self
  @param  ApiList values
**/
void *Ccca_ChemCompVarCharge_SetApplicationData(Ccca_ChemCompVarCharge self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.molecule.ChemCompCharge.ChemCompVarCharge.chemAtomCharges

ForceAtoms 
that are part of ChemCompVarForce
  @param  Ccca_ChemCompVarCharge self
  @param  ApiSet values
**/
void *Ccca_ChemCompVarCharge_SetChemAtomCharges(Ccca_ChemCompVarCharge self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setChemAtomCharges");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: cannot find method 'setChemAtomCharges'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: method 'setChemAtomCharges' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.molecule.ChemCompCharge.ChemCompVarCharge.descriptor

descriptor for 
ChemCompVar. Parts of identifying key for associated 
ChemComp.ChemCompVar
  @param  Ccca_ChemCompVarCharge self
  @param  ApiString value
**/
void *Ccca_ChemCompVarCharge_SetDescriptor(Ccca_ChemCompVarCharge self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDescriptor");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: cannot find method 'setDescriptor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: method 'setDescriptor' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemCompCharge.ChemCompVarCharge.linking

linking 
for ChemCompVar. Parts of identifying key for associated 
ChemComp.ChemCompVar
  @param  Ccca_ChemCompVarCharge self
  @param  ApiString value
**/
void *Ccca_ChemCompVarCharge_SetLinking(Ccca_ChemCompVarCharge self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLinking");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: cannot find method 'setLinking'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: method 'setLinking' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.molecule.ChemCompCharge.ChemCompVarCharge.chemAtomCharges

ForceAtoms 
that are part of ChemCompVarForce
  @param  Ccca_ChemCompVarCharge self
  @returns   the result
**/
ApiList Ccca_ChemCompVarCharge_SortedChemAtomCharges(Ccca_ChemCompVarCharge self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChemAtomCharges");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: cannot find method 'sortedChemAtomCharges'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: method 'sortedChemAtomCharges' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.molecule.ChemCompCharge.ChemCompVarCharge.chemCompVars

ChemComp.ChemCompVars 
corresponding to the ChemCompForce.ChemCompVar
  @param  Ccca_ChemCompVarCharge self
  @returns   the result
**/
ApiList Ccca_ChemCompVarCharge_SortedChemCompVars(Ccca_ChemCompVarCharge self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChemCompVars");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: cannot find method 'sortedChemCompVars'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompVarCharge: method 'sortedChemCompVars' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
