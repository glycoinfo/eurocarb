
#include "ccp.h"

/*
  ChemCompVar to which chemAtomNmrRef children belong.  Note: atoms belonging to Vars with an 'any' attribute must belong to all the relevant Vars
*/

/* package ccp.api.nmr.NmrReference */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemCompVarNmrRef self
  @param  Impl_ApplicationData value
**/
void *Nmrr_ChemCompVarNmrRef_AddApplicationData(Nmrr_ChemCompVarNmrRef self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for 
ccp.nmr.NmrReference.ChemCompVarNmrRef.chemAtomNmrRefs

ChemAtomNmrRefs 
relevant for this ChemCompVarNmrRef
  @param  Nmrr_ChemCompVarNmrRef self
  @param  Nmrr_ChemAtomNmrRef value
**/
void *Nmrr_ChemCompVarNmrRef_AddChemAtomNmrRef(Nmrr_ChemCompVarNmrRef self, Nmrr_ChemAtomNmrRef value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addChemAtomNmrRef");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: cannot find method 'addChemAtomNmrRef'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: method 'addChemAtomNmrRef' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.nmr.NmrReference.ChemCompVarNmrRef
  @param  Nmrr_ChemCompVarNmrRef self
  @param  ApiBoolean complete
**/
void *Nmrr_ChemCompVarNmrRef_CheckAllValid(Nmrr_ChemCompVarNmrRef self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.nmr.NmrReference.ChemCompVarNmrRef
  @param  Nmrr_ChemCompVarNmrRef self
  @param  ApiBoolean complete
**/
void *Nmrr_ChemCompVarNmrRef_CheckValid(Nmrr_ChemCompVarNmrRef self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: method 'checkValid' is not callable");
  
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
  @param  Nmrr_ChemCompVarNmrRef self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrr_ChemCompVarNmrRef_FindAllApplicationData(Nmrr_ChemCompVarNmrRef self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: method 'findAllApplicationData' is not callable");
  
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
  @param  Nmrr_ChemCompVarNmrRef self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrr_ChemCompVarNmrRef_FindAllApplicationData_keyval0(Nmrr_ChemCompVarNmrRef self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrr_ChemCompVarNmrRef_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemCompVarNmrRef self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrr_ChemCompVarNmrRef_FindAllApplicationData_keyval1(Nmrr_ChemCompVarNmrRef self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrr_ChemCompVarNmrRef_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemCompVarNmrRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrr_ChemCompVarNmrRef_FindAllApplicationData_keyval2(Nmrr_ChemCompVarNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrr_ChemCompVarNmrRef_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemCompVarNmrRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrr_ChemCompVarNmrRef_FindAllApplicationData_keyval3(Nmrr_ChemCompVarNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrr_ChemCompVarNmrRef_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemCompVarNmrRef self
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
ApiList Nmrr_ChemCompVarNmrRef_FindAllApplicationData_keyval4(Nmrr_ChemCompVarNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrr_ChemCompVarNmrRef_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrReference.ChemCompVarNmrRef.chemAtomNmrRefs

ChemAtomNmrRefs 
relevant for this ChemCompVarNmrRef
  @param  Nmrr_ChemCompVarNmrRef self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrr_ChemCompVarNmrRef_FindAllChemAtomNmrRefs(Nmrr_ChemCompVarNmrRef self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChemAtomNmrRefs");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: cannot find method 'findAllChemAtomNmrRefs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: method 'findAllChemAtomNmrRefs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrReference.ChemCompVarNmrRef.chemAtomNmrRefs

ChemAtomNmrRefs 
relevant for this ChemCompVarNmrRef
  @param  Nmrr_ChemCompVarNmrRef self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrr_ChemCompVarNmrRef_FindAllChemAtomNmrRefs_keyval0(Nmrr_ChemCompVarNmrRef self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrr_ChemCompVarNmrRef_FindAllChemAtomNmrRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrReference.ChemCompVarNmrRef.chemAtomNmrRefs

ChemAtomNmrRefs 
relevant for this ChemCompVarNmrRef
  @param  Nmrr_ChemCompVarNmrRef self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrr_ChemCompVarNmrRef_FindAllChemAtomNmrRefs_keyval1(Nmrr_ChemCompVarNmrRef self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrr_ChemCompVarNmrRef_FindAllChemAtomNmrRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrReference.ChemCompVarNmrRef.chemAtomNmrRefs

ChemAtomNmrRefs 
relevant for this ChemCompVarNmrRef
  @param  Nmrr_ChemCompVarNmrRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrr_ChemCompVarNmrRef_FindAllChemAtomNmrRefs_keyval2(Nmrr_ChemCompVarNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrr_ChemCompVarNmrRef_FindAllChemAtomNmrRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrReference.ChemCompVarNmrRef.chemAtomNmrRefs

ChemAtomNmrRefs 
relevant for this ChemCompVarNmrRef
  @param  Nmrr_ChemCompVarNmrRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrr_ChemCompVarNmrRef_FindAllChemAtomNmrRefs_keyval3(Nmrr_ChemCompVarNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrr_ChemCompVarNmrRef_FindAllChemAtomNmrRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrReference.ChemCompVarNmrRef.chemAtomNmrRefs

ChemAtomNmrRefs 
relevant for this ChemCompVarNmrRef
  @param  Nmrr_ChemCompVarNmrRef self
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
ApiSet Nmrr_ChemCompVarNmrRef_FindAllChemAtomNmrRefs_keyval4(Nmrr_ChemCompVarNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrr_ChemCompVarNmrRef_FindAllChemAtomNmrRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrReference.ChemCompVarNmrRef.chemCompVars

chemCompVars 
corerspnding to ChemCompVarNmrRef
  @param  Nmrr_ChemCompVarNmrRef self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrr_ChemCompVarNmrRef_FindAllChemCompVars(Nmrr_ChemCompVarNmrRef self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChemCompVars");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: cannot find method 'findAllChemCompVars'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: method 'findAllChemCompVars' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrReference.ChemCompVarNmrRef.chemCompVars

chemCompVars 
corerspnding to ChemCompVarNmrRef
  @param  Nmrr_ChemCompVarNmrRef self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrr_ChemCompVarNmrRef_FindAllChemCompVars_keyval0(Nmrr_ChemCompVarNmrRef self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrr_ChemCompVarNmrRef_FindAllChemCompVars(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrReference.ChemCompVarNmrRef.chemCompVars

chemCompVars 
corerspnding to ChemCompVarNmrRef
  @param  Nmrr_ChemCompVarNmrRef self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrr_ChemCompVarNmrRef_FindAllChemCompVars_keyval1(Nmrr_ChemCompVarNmrRef self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrr_ChemCompVarNmrRef_FindAllChemCompVars(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrReference.ChemCompVarNmrRef.chemCompVars

chemCompVars 
corerspnding to ChemCompVarNmrRef
  @param  Nmrr_ChemCompVarNmrRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrr_ChemCompVarNmrRef_FindAllChemCompVars_keyval2(Nmrr_ChemCompVarNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrr_ChemCompVarNmrRef_FindAllChemCompVars(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrReference.ChemCompVarNmrRef.chemCompVars

chemCompVars 
corerspnding to ChemCompVarNmrRef
  @param  Nmrr_ChemCompVarNmrRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrr_ChemCompVarNmrRef_FindAllChemCompVars_keyval3(Nmrr_ChemCompVarNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrr_ChemCompVarNmrRef_FindAllChemCompVars(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrReference.ChemCompVarNmrRef.chemCompVars

chemCompVars 
corerspnding to ChemCompVarNmrRef
  @param  Nmrr_ChemCompVarNmrRef self
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
ApiSet Nmrr_ChemCompVarNmrRef_FindAllChemCompVars_keyval4(Nmrr_ChemCompVarNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrr_ChemCompVarNmrRef_FindAllChemCompVars(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemCompVarNmrRef self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrr_ChemCompVarNmrRef_FindFirstApplicationData(Nmrr_ChemCompVarNmrRef self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nmrr_ChemCompVarNmrRef self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrr_ChemCompVarNmrRef_FindFirstApplicationData_keyval0(Nmrr_ChemCompVarNmrRef self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrr_ChemCompVarNmrRef_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemCompVarNmrRef self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrr_ChemCompVarNmrRef_FindFirstApplicationData_keyval1(Nmrr_ChemCompVarNmrRef self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrr_ChemCompVarNmrRef_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemCompVarNmrRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrr_ChemCompVarNmrRef_FindFirstApplicationData_keyval2(Nmrr_ChemCompVarNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrr_ChemCompVarNmrRef_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemCompVarNmrRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrr_ChemCompVarNmrRef_FindFirstApplicationData_keyval3(Nmrr_ChemCompVarNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrr_ChemCompVarNmrRef_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemCompVarNmrRef self
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
Impl_ApplicationData Nmrr_ChemCompVarNmrRef_FindFirstApplicationData_keyval4(Nmrr_ChemCompVarNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrr_ChemCompVarNmrRef_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrReference.ChemCompVarNmrRef.chemAtomNmrRefs

ChemAtomNmrRefs 
relevant for this ChemCompVarNmrRef
  @param  Nmrr_ChemCompVarNmrRef self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmrr_ChemAtomNmrRef Nmrr_ChemCompVarNmrRef_FindFirstChemAtomNmrRef(Nmrr_ChemCompVarNmrRef self, ApiMap conditions)
{
  
  Nmrr_ChemAtomNmrRef obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChemAtomNmrRef");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: cannot find method 'findFirstChemAtomNmrRef'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: method 'findFirstChemAtomNmrRef' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrReference.ChemCompVarNmrRef.chemAtomNmrRefs

ChemAtomNmrRefs 
relevant for this ChemCompVarNmrRef
  @param  Nmrr_ChemCompVarNmrRef self
  @returns  the first value that satisfies the conditions 
**/
Nmrr_ChemAtomNmrRef Nmrr_ChemCompVarNmrRef_FindFirstChemAtomNmrRef_keyval0(Nmrr_ChemCompVarNmrRef self)
{
  
  Nmrr_ChemAtomNmrRef  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrr_ChemCompVarNmrRef_FindFirstChemAtomNmrRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrReference.ChemCompVarNmrRef.chemAtomNmrRefs

ChemAtomNmrRefs 
relevant for this ChemCompVarNmrRef
  @param  Nmrr_ChemCompVarNmrRef self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmrr_ChemAtomNmrRef Nmrr_ChemCompVarNmrRef_FindFirstChemAtomNmrRef_keyval1(Nmrr_ChemCompVarNmrRef self, char * key, ApiObject value)
{
  
  Nmrr_ChemAtomNmrRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrr_ChemCompVarNmrRef_FindFirstChemAtomNmrRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrReference.ChemCompVarNmrRef.chemAtomNmrRefs

ChemAtomNmrRefs 
relevant for this ChemCompVarNmrRef
  @param  Nmrr_ChemCompVarNmrRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmrr_ChemAtomNmrRef Nmrr_ChemCompVarNmrRef_FindFirstChemAtomNmrRef_keyval2(Nmrr_ChemCompVarNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmrr_ChemAtomNmrRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrr_ChemCompVarNmrRef_FindFirstChemAtomNmrRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrReference.ChemCompVarNmrRef.chemAtomNmrRefs

ChemAtomNmrRefs 
relevant for this ChemCompVarNmrRef
  @param  Nmrr_ChemCompVarNmrRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmrr_ChemAtomNmrRef Nmrr_ChemCompVarNmrRef_FindFirstChemAtomNmrRef_keyval3(Nmrr_ChemCompVarNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmrr_ChemAtomNmrRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrr_ChemCompVarNmrRef_FindFirstChemAtomNmrRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrReference.ChemCompVarNmrRef.chemAtomNmrRefs

ChemAtomNmrRefs 
relevant for this ChemCompVarNmrRef
  @param  Nmrr_ChemCompVarNmrRef self
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
Nmrr_ChemAtomNmrRef Nmrr_ChemCompVarNmrRef_FindFirstChemAtomNmrRef_keyval4(Nmrr_ChemCompVarNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmrr_ChemAtomNmrRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrr_ChemCompVarNmrRef_FindFirstChemAtomNmrRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrReference.ChemCompVarNmrRef.chemCompVars

chemCompVars 
corerspnding to ChemCompVarNmrRef
  @param  Nmrr_ChemCompVarNmrRef self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemCompVar Nmrr_ChemCompVarNmrRef_FindFirstChemCompVar(Nmrr_ChemCompVarNmrRef self, ApiMap conditions)
{
  
  Chem_ChemCompVar obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChemCompVar");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: cannot find method 'findFirstChemCompVar'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: method 'findFirstChemCompVar' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrReference.ChemCompVarNmrRef.chemCompVars

chemCompVars 
corerspnding to ChemCompVarNmrRef
  @param  Nmrr_ChemCompVarNmrRef self
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemCompVar Nmrr_ChemCompVarNmrRef_FindFirstChemCompVar_keyval0(Nmrr_ChemCompVarNmrRef self)
{
  
  Chem_ChemCompVar  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrr_ChemCompVarNmrRef_FindFirstChemCompVar(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrReference.ChemCompVarNmrRef.chemCompVars

chemCompVars 
corerspnding to ChemCompVarNmrRef
  @param  Nmrr_ChemCompVarNmrRef self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemCompVar Nmrr_ChemCompVarNmrRef_FindFirstChemCompVar_keyval1(Nmrr_ChemCompVarNmrRef self, char * key, ApiObject value)
{
  
  Chem_ChemCompVar  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrr_ChemCompVarNmrRef_FindFirstChemCompVar(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrReference.ChemCompVarNmrRef.chemCompVars

chemCompVars 
corerspnding to ChemCompVarNmrRef
  @param  Nmrr_ChemCompVarNmrRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemCompVar Nmrr_ChemCompVarNmrRef_FindFirstChemCompVar_keyval2(Nmrr_ChemCompVarNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chem_ChemCompVar  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrr_ChemCompVarNmrRef_FindFirstChemCompVar(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrReference.ChemCompVarNmrRef.chemCompVars

chemCompVars 
corerspnding to ChemCompVarNmrRef
  @param  Nmrr_ChemCompVarNmrRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemCompVar Nmrr_ChemCompVarNmrRef_FindFirstChemCompVar_keyval3(Nmrr_ChemCompVarNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chem_ChemCompVar  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrr_ChemCompVarNmrRef_FindFirstChemCompVar(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrReference.ChemCompVarNmrRef.chemCompVars

chemCompVars 
corerspnding to ChemCompVarNmrRef
  @param  Nmrr_ChemCompVarNmrRef self
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
Chem_ChemCompVar Nmrr_ChemCompVarNmrRef_FindFirstChemCompVar_keyval4(Nmrr_ChemCompVarNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chem_ChemCompVar  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrr_ChemCompVarNmrRef_FindFirstChemCompVar(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.nmr.NmrReference.ChemCompVarNmrRef
  @param  Nmrr_ChemCompVarNmrRef self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Nmrr_ChemCompVarNmrRef_Get(Nmrr_ChemCompVarNmrRef self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrr_ChemCompVarNmrRef self
  @returns   the result
**/
Acco_AccessObject Nmrr_ChemCompVarNmrRef_GetAccess(Nmrr_ChemCompVarNmrRef self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: method 'getAccess' is not callable");
  
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
  @param  Nmrr_ChemCompVarNmrRef self
  @returns   the result
**/
Acco_AccessObject Nmrr_ChemCompVarNmrRef_GetActiveAccess(Nmrr_ChemCompVarNmrRef self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: method 'getActiveAccess' is not callable");
  
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
  @param  Nmrr_ChemCompVarNmrRef self
  @returns   the result
**/
ApiList Nmrr_ChemCompVarNmrRef_GetApplicationData(Nmrr_ChemCompVarNmrRef self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.NmrReference.ChemCompVarNmrRef
  @param  Nmrr_ChemCompVarNmrRef self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nmrr_ChemCompVarNmrRef Nmrr_ChemCompVarNmrRef_GetByKey(Nmrr_ChemCompVarNmrRef self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Nmrr_ChemCompVarNmrRef obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: method 'getByKey' is not callable");
  
  args = PyTuple_Pack(2, startObj, fullKey);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.nmr.NmrReference.ChemCompVarNmrRef.chemAtomNmrRefs

ChemAtomNmrRefs 
relevant for this ChemCompVarNmrRef
  @param  Nmrr_ChemCompVarNmrRef self
  @returns   the result
**/
ApiSet Nmrr_ChemCompVarNmrRef_GetChemAtomNmrRefs(Nmrr_ChemCompVarNmrRef self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemAtomNmrRefs");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: cannot find method 'getChemAtomNmrRefs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: method 'getChemAtomNmrRefs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrReference.ChemCompVarNmrRef.chemCompNmrRef

parent 
link
  @param  Nmrr_ChemCompVarNmrRef self
  @returns   the result
**/
Nmrr_ChemCompNmrRef Nmrr_ChemCompVarNmrRef_GetChemCompNmrRef(Nmrr_ChemCompVarNmrRef self)
{
  
  Nmrr_ChemCompNmrRef obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemCompNmrRef");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: cannot find method 'getChemCompNmrRef'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: method 'getChemCompNmrRef' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived link chemCompVars
  @param  Nmrr_ChemCompVarNmrRef self
  @returns   the result
**/
ApiSet Nmrr_ChemCompVarNmrRef_GetChemCompVars(Nmrr_ChemCompVarNmrRef self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemCompVars");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: cannot find method 'getChemCompVars'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: method 'getChemCompVars' is not callable");
  
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
  @param  Nmrr_ChemCompVarNmrRef self
  @returns   the result
**/
ApiString Nmrr_ChemCompVarNmrRef_GetClassName(Nmrr_ChemCompVarNmrRef self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrReference.ChemCompVarNmrRef.descriptor

descriptor 
for corresponding ChemCompVar  - default is 'any'
  @param  Nmrr_ChemCompVarNmrRef self
  @returns   the result
**/
ApiString Nmrr_ChemCompVarNmrRef_GetDescriptor(Nmrr_ChemCompVarNmrRef self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDescriptor");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: cannot find method 'getDescriptor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: method 'getDescriptor' is not callable");
  
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
  @param  Nmrr_ChemCompVarNmrRef self
  @returns   the result
**/
ApiList Nmrr_ChemCompVarNmrRef_GetFieldNames(Nmrr_ChemCompVarNmrRef self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.nmr.NmrReference.ChemCompVarNmrRef
  @param  Nmrr_ChemCompVarNmrRef self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Nmrr_ChemCompVarNmrRef_GetFullKey(Nmrr_ChemCompVarNmrRef self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: method 'getFullKey' is not callable");
  
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
  @param  Nmrr_ChemCompVarNmrRef self
  @returns   the result
**/
ApiBoolean Nmrr_ChemCompVarNmrRef_GetInConstructor(Nmrr_ChemCompVarNmrRef self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: method 'getInConstructor' is not callable");
  
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
  @param  Nmrr_ChemCompVarNmrRef self
  @returns   the result
**/
ApiBoolean Nmrr_ChemCompVarNmrRef_GetIsDeleted(Nmrr_ChemCompVarNmrRef self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrReference.ChemCompVarNmrRef.linking

linking for 
corresponding ChemCompVar  - default is 'any'
  @param  Nmrr_ChemCompVarNmrRef self
  @returns   the result
**/
ApiString Nmrr_ChemCompVarNmrRef_GetLinking(Nmrr_ChemCompVarNmrRef self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLinking");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: cannot find method 'getLinking'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: method 'getLinking' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.nmr.NmrReference.ChemCompVarNmrRef
  @param  Nmrr_ChemCompVarNmrRef self
  @returns  Local object key
**/
ApiObject Nmrr_ChemCompVarNmrRef_GetLocalKey(Nmrr_ChemCompVarNmrRef self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: method 'getLocalKey' is not callable");
  
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
  @param  Nmrr_ChemCompVarNmrRef self
  @returns   the result
**/
ApiString Nmrr_ChemCompVarNmrRef_GetPackageName(Nmrr_ChemCompVarNmrRef self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: method 'getPackageName' is not callable");
  
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
  @param  Nmrr_ChemCompVarNmrRef self
  @returns   the result
**/
ApiString Nmrr_ChemCompVarNmrRef_GetPackageShortName(Nmrr_ChemCompVarNmrRef self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrReference.ChemCompVarNmrRef.parent

link to parent 
object - synonym for chemCompNmrRef
  @param  Nmrr_ChemCompVarNmrRef self
  @returns   the result
**/
Nmrr_ChemCompNmrRef Nmrr_ChemCompVarNmrRef_GetParent(Nmrr_ChemCompVarNmrRef self)
{
  
  Nmrr_ChemCompNmrRef obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: method 'getParent' is not callable");
  
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
  @param  Nmrr_ChemCompVarNmrRef self
  @returns   the result
**/
ApiString Nmrr_ChemCompVarNmrRef_GetQualifiedName(Nmrr_ChemCompVarNmrRef self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: method 'getQualifiedName' is not callable");
  
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
  @param  Nmrr_ChemCompVarNmrRef self
  @returns   the result
**/
Impl_MemopsRoot Nmrr_ChemCompVarNmrRef_GetRoot(Nmrr_ChemCompVarNmrRef self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: method 'getRoot' is not callable");
  
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
  @param  Nmrr_ChemCompVarNmrRef self
  @returns   the result
**/
Impl_TopObject Nmrr_ChemCompVarNmrRef_GetTopObject(Nmrr_ChemCompVarNmrRef self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.nmr.NmrReference.ChemCompVarNmrRef
  @param  Nmrr_ChemCompNmrRef parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmrr_ChemCompVarNmrRef Nmrr_ChemCompVarNmrRef_Init(Nmrr_ChemCompNmrRef parent, ApiMap attrlinks)
{
  
  return Nmrr_ChemCompNmrRef_NewChemCompVarNmrRef(parent, attrlinks);
}

/**
  Constructor for ccp.nmr.NmrReference.ChemCompVarNmrRef
  @param  Nmrr_ChemCompNmrRef parent
  @returns  the new object
**/
Nmrr_ChemCompVarNmrRef Nmrr_ChemCompVarNmrRef_Init_reqd(Nmrr_ChemCompNmrRef parent)
{
  
  Nmrr_ChemCompVarNmrRef  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Nmrr_ChemCompVarNmrRef_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemCompVarNmrRef self
  @param  Impl_ApplicationData value
**/
void *Nmrr_ChemCompVarNmrRef_RemoveApplicationData(Nmrr_ChemCompVarNmrRef self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
ccp.nmr.NmrReference.ChemCompVarNmrRef.chemAtomNmrRefs

ChemAtomNmrRefs 
relevant for this ChemCompVarNmrRef
  @param  Nmrr_ChemCompVarNmrRef self
  @param  Nmrr_ChemAtomNmrRef value
**/
void *Nmrr_ChemCompVarNmrRef_RemoveChemAtomNmrRef(Nmrr_ChemCompVarNmrRef self, Nmrr_ChemAtomNmrRef value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeChemAtomNmrRef");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: cannot find method 'removeChemAtomNmrRef'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: method 'removeChemAtomNmrRef' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.nmr.NmrReference.ChemCompVarNmrRef
  @param  Nmrr_ChemCompVarNmrRef self
  @param  ApiString name
  @param  ApiObject value
**/
void *Nmrr_ChemCompVarNmrRef_Set(Nmrr_ChemCompVarNmrRef self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrr_ChemCompVarNmrRef self
  @param  Acco_AccessObject value
**/
void *Nmrr_ChemCompVarNmrRef_SetAccess(Nmrr_ChemCompVarNmrRef self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: method 'setAccess' is not callable");
  
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
  @param  Nmrr_ChemCompVarNmrRef self
  @param  ApiList values
**/
void *Nmrr_ChemCompVarNmrRef_SetApplicationData(Nmrr_ChemCompVarNmrRef self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.nmr.NmrReference.ChemCompVarNmrRef.chemAtomNmrRefs

ChemAtomNmrRefs 
relevant for this ChemCompVarNmrRef
  @param  Nmrr_ChemCompVarNmrRef self
  @param  ApiSet values
**/
void *Nmrr_ChemCompVarNmrRef_SetChemAtomNmrRefs(Nmrr_ChemCompVarNmrRef self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setChemAtomNmrRefs");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: cannot find method 'setChemAtomNmrRefs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: method 'setChemAtomNmrRefs' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrReference.ChemCompVarNmrRef.descriptor

descriptor 
for corresponding ChemCompVar  - default is 'any'
  @param  Nmrr_ChemCompVarNmrRef self
  @param  ApiString value
**/
void *Nmrr_ChemCompVarNmrRef_SetDescriptor(Nmrr_ChemCompVarNmrRef self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDescriptor");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: cannot find method 'setDescriptor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: method 'setDescriptor' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrReference.ChemCompVarNmrRef.linking

linking for 
corresponding ChemCompVar  - default is 'any'
  @param  Nmrr_ChemCompVarNmrRef self
  @param  ApiString value
**/
void *Nmrr_ChemCompVarNmrRef_SetLinking(Nmrr_ChemCompVarNmrRef self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLinking");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: cannot find method 'setLinking'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: method 'setLinking' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.nmr.NmrReference.ChemCompVarNmrRef.chemAtomNmrRefs

ChemAtomNmrRefs 
relevant for this ChemCompVarNmrRef
  @param  Nmrr_ChemCompVarNmrRef self
  @returns   the result
**/
ApiList Nmrr_ChemCompVarNmrRef_SortedChemAtomNmrRefs(Nmrr_ChemCompVarNmrRef self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChemAtomNmrRefs");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: cannot find method 'sortedChemAtomNmrRefs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: method 'sortedChemAtomNmrRefs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.nmr.NmrReference.ChemCompVarNmrRef.chemCompVars

chemCompVars 
corerspnding to ChemCompVarNmrRef
  @param  Nmrr_ChemCompVarNmrRef self
  @returns   the result
**/
ApiList Nmrr_ChemCompVarNmrRef_SortedChemCompVars(Nmrr_ChemCompVarNmrRef self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChemCompVars");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: cannot find method 'sortedChemCompVars'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemCompVarNmrRef: method 'sortedChemCompVars' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
