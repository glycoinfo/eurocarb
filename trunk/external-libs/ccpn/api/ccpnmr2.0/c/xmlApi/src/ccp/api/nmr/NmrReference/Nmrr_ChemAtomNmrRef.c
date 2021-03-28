
#include "ccp.h"

/*
  Information about refrence chemical shift for a ChemAtom. The information may apply to a ChemAtom in all ChemCompVars (linking and descriptor both 'any'), in some ChemCompVars (either linking or descriptor 'any') or in a specific ChemCompVar (all other cases). Either the meanValue or the randomCoilValue attribute must be set.
*/

/* package ccp.api.nmr.NmrReference */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemAtomNmrRef self
  @param  Impl_ApplicationData value
**/
void *Nmrr_ChemAtomNmrRef_AddApplicationData(Nmrr_ChemAtomNmrRef self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for 
ccp.nmr.NmrReference.ChemAtomNmrRef.chemCompVarNmrRefs

ChemCompNmrRefs 
that contain this ChemAtomNmrRef.
  @param  Nmrr_ChemAtomNmrRef self
  @param  Nmrr_ChemCompVarNmrRef value
**/
void *Nmrr_ChemAtomNmrRef_AddChemCompVarNmrRef(Nmrr_ChemAtomNmrRef self, Nmrr_ChemCompVarNmrRef value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addChemCompVarNmrRef");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: cannot find method 'addChemCompVarNmrRef'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: method 'addChemCompVarNmrRef' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Modify command for distribution. Specifically entered here to make sure 
command is disabled
  @param  Nmrr_ChemAtomNmrRef self
  @param  ApiFloat value
**/
void *Nmrr_ChemAtomNmrRef_AddDistribution(Nmrr_ChemAtomNmrRef self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addDistribution");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: cannot find method 'addDistribution'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: method 'addDistribution' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.nmr.NmrReference.ChemAtomNmrRef
  @param  Nmrr_ChemAtomNmrRef self
  @param  ApiBoolean complete
**/
void *Nmrr_ChemAtomNmrRef_CheckAllValid(Nmrr_ChemAtomNmrRef self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.nmr.NmrReference.ChemAtomNmrRef
  @param  Nmrr_ChemAtomNmrRef self
  @param  ApiBoolean complete
**/
void *Nmrr_ChemAtomNmrRef_CheckValid(Nmrr_ChemAtomNmrRef self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: method 'checkValid' is not callable");
  
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
  @param  Nmrr_ChemAtomNmrRef self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrr_ChemAtomNmrRef_FindAllApplicationData(Nmrr_ChemAtomNmrRef self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: method 'findAllApplicationData' is not callable");
  
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
  @param  Nmrr_ChemAtomNmrRef self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrr_ChemAtomNmrRef_FindAllApplicationData_keyval0(Nmrr_ChemAtomNmrRef self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrr_ChemAtomNmrRef_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemAtomNmrRef self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrr_ChemAtomNmrRef_FindAllApplicationData_keyval1(Nmrr_ChemAtomNmrRef self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrr_ChemAtomNmrRef_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemAtomNmrRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrr_ChemAtomNmrRef_FindAllApplicationData_keyval2(Nmrr_ChemAtomNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrr_ChemAtomNmrRef_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemAtomNmrRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrr_ChemAtomNmrRef_FindAllApplicationData_keyval3(Nmrr_ChemAtomNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrr_ChemAtomNmrRef_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemAtomNmrRef self
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
ApiList Nmrr_ChemAtomNmrRef_FindAllApplicationData_keyval4(Nmrr_ChemAtomNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrr_ChemAtomNmrRef_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrReference.ChemAtomNmrRef.chemAtomShiftCorrs

child link to 
class ChemAtomShiftCorr
  @param  Nmrr_ChemAtomNmrRef self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrr_ChemAtomNmrRef_FindAllChemAtomShiftCorrs(Nmrr_ChemAtomNmrRef self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChemAtomShiftCorrs");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: cannot find method 'findAllChemAtomShiftCorrs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: method 'findAllChemAtomShiftCorrs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrReference.ChemAtomNmrRef.chemAtomShiftCorrs

child link to 
class ChemAtomShiftCorr
  @param  Nmrr_ChemAtomNmrRef self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrr_ChemAtomNmrRef_FindAllChemAtomShiftCorrs_keyval0(Nmrr_ChemAtomNmrRef self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrr_ChemAtomNmrRef_FindAllChemAtomShiftCorrs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrReference.ChemAtomNmrRef.chemAtomShiftCorrs

child link to 
class ChemAtomShiftCorr
  @param  Nmrr_ChemAtomNmrRef self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrr_ChemAtomNmrRef_FindAllChemAtomShiftCorrs_keyval1(Nmrr_ChemAtomNmrRef self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrr_ChemAtomNmrRef_FindAllChemAtomShiftCorrs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrReference.ChemAtomNmrRef.chemAtomShiftCorrs

child link to 
class ChemAtomShiftCorr
  @param  Nmrr_ChemAtomNmrRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrr_ChemAtomNmrRef_FindAllChemAtomShiftCorrs_keyval2(Nmrr_ChemAtomNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrr_ChemAtomNmrRef_FindAllChemAtomShiftCorrs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrReference.ChemAtomNmrRef.chemAtomShiftCorrs

child link to 
class ChemAtomShiftCorr
  @param  Nmrr_ChemAtomNmrRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrr_ChemAtomNmrRef_FindAllChemAtomShiftCorrs_keyval3(Nmrr_ChemAtomNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrr_ChemAtomNmrRef_FindAllChemAtomShiftCorrs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrReference.ChemAtomNmrRef.chemAtomShiftCorrs

child link to 
class ChemAtomShiftCorr
  @param  Nmrr_ChemAtomNmrRef self
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
ApiSet Nmrr_ChemAtomNmrRef_FindAllChemAtomShiftCorrs_keyval4(Nmrr_ChemAtomNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrr_ChemAtomNmrRef_FindAllChemAtomShiftCorrs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrReference.ChemAtomNmrRef.chemAtoms

ChemAtom to 
which reference information applies.
  @param  Nmrr_ChemAtomNmrRef self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrr_ChemAtomNmrRef_FindAllChemAtoms(Nmrr_ChemAtomNmrRef self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChemAtoms");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: cannot find method 'findAllChemAtoms'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: method 'findAllChemAtoms' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrReference.ChemAtomNmrRef.chemAtoms

ChemAtom to 
which reference information applies.
  @param  Nmrr_ChemAtomNmrRef self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrr_ChemAtomNmrRef_FindAllChemAtoms_keyval0(Nmrr_ChemAtomNmrRef self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrr_ChemAtomNmrRef_FindAllChemAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrReference.ChemAtomNmrRef.chemAtoms

ChemAtom to 
which reference information applies.
  @param  Nmrr_ChemAtomNmrRef self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrr_ChemAtomNmrRef_FindAllChemAtoms_keyval1(Nmrr_ChemAtomNmrRef self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrr_ChemAtomNmrRef_FindAllChemAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrReference.ChemAtomNmrRef.chemAtoms

ChemAtom to 
which reference information applies.
  @param  Nmrr_ChemAtomNmrRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrr_ChemAtomNmrRef_FindAllChemAtoms_keyval2(Nmrr_ChemAtomNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrr_ChemAtomNmrRef_FindAllChemAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrReference.ChemAtomNmrRef.chemAtoms

ChemAtom to 
which reference information applies.
  @param  Nmrr_ChemAtomNmrRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrr_ChemAtomNmrRef_FindAllChemAtoms_keyval3(Nmrr_ChemAtomNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrr_ChemAtomNmrRef_FindAllChemAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrReference.ChemAtomNmrRef.chemAtoms

ChemAtom to 
which reference information applies.
  @param  Nmrr_ChemAtomNmrRef self
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
ApiSet Nmrr_ChemAtomNmrRef_FindAllChemAtoms_keyval4(Nmrr_ChemAtomNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrr_ChemAtomNmrRef_FindAllChemAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrReference.ChemAtomNmrRef.chemCompVarNmrRefs

ChemCompNmrRefs 
that contain this ChemAtomNmrRef.
  @param  Nmrr_ChemAtomNmrRef self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrr_ChemAtomNmrRef_FindAllChemCompVarNmrRefs(Nmrr_ChemAtomNmrRef self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChemCompVarNmrRefs");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: cannot find method 'findAllChemCompVarNmrRefs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: method 'findAllChemCompVarNmrRefs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrReference.ChemAtomNmrRef.chemCompVarNmrRefs

ChemCompNmrRefs 
that contain this ChemAtomNmrRef.
  @param  Nmrr_ChemAtomNmrRef self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrr_ChemAtomNmrRef_FindAllChemCompVarNmrRefs_keyval0(Nmrr_ChemAtomNmrRef self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrr_ChemAtomNmrRef_FindAllChemCompVarNmrRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrReference.ChemAtomNmrRef.chemCompVarNmrRefs

ChemCompNmrRefs 
that contain this ChemAtomNmrRef.
  @param  Nmrr_ChemAtomNmrRef self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrr_ChemAtomNmrRef_FindAllChemCompVarNmrRefs_keyval1(Nmrr_ChemAtomNmrRef self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrr_ChemAtomNmrRef_FindAllChemCompVarNmrRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrReference.ChemAtomNmrRef.chemCompVarNmrRefs

ChemCompNmrRefs 
that contain this ChemAtomNmrRef.
  @param  Nmrr_ChemAtomNmrRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrr_ChemAtomNmrRef_FindAllChemCompVarNmrRefs_keyval2(Nmrr_ChemAtomNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrr_ChemAtomNmrRef_FindAllChemCompVarNmrRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrReference.ChemAtomNmrRef.chemCompVarNmrRefs

ChemCompNmrRefs 
that contain this ChemAtomNmrRef.
  @param  Nmrr_ChemAtomNmrRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrr_ChemAtomNmrRef_FindAllChemCompVarNmrRefs_keyval3(Nmrr_ChemAtomNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrr_ChemAtomNmrRef_FindAllChemCompVarNmrRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrReference.ChemAtomNmrRef.chemCompVarNmrRefs

ChemCompNmrRefs 
that contain this ChemAtomNmrRef.
  @param  Nmrr_ChemAtomNmrRef self
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
ApiSet Nmrr_ChemAtomNmrRef_FindAllChemCompVarNmrRefs_keyval4(Nmrr_ChemAtomNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrr_ChemAtomNmrRef_FindAllChemCompVarNmrRefs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemAtomNmrRef self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrr_ChemAtomNmrRef_FindFirstApplicationData(Nmrr_ChemAtomNmrRef self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nmrr_ChemAtomNmrRef self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrr_ChemAtomNmrRef_FindFirstApplicationData_keyval0(Nmrr_ChemAtomNmrRef self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrr_ChemAtomNmrRef_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemAtomNmrRef self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrr_ChemAtomNmrRef_FindFirstApplicationData_keyval1(Nmrr_ChemAtomNmrRef self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrr_ChemAtomNmrRef_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemAtomNmrRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrr_ChemAtomNmrRef_FindFirstApplicationData_keyval2(Nmrr_ChemAtomNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrr_ChemAtomNmrRef_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemAtomNmrRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrr_ChemAtomNmrRef_FindFirstApplicationData_keyval3(Nmrr_ChemAtomNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrr_ChemAtomNmrRef_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemAtomNmrRef self
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
Impl_ApplicationData Nmrr_ChemAtomNmrRef_FindFirstApplicationData_keyval4(Nmrr_ChemAtomNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrr_ChemAtomNmrRef_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrReference.ChemAtomNmrRef.chemAtoms

ChemAtom to 
which reference information applies.
  @param  Nmrr_ChemAtomNmrRef self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chem_AbstractChemAtom Nmrr_ChemAtomNmrRef_FindFirstChemAtom(Nmrr_ChemAtomNmrRef self, ApiMap conditions)
{
  
  Chem_AbstractChemAtom obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChemAtom");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: cannot find method 'findFirstChemAtom'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: method 'findFirstChemAtom' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrReference.ChemAtomNmrRef.chemAtomShiftCorrs

child link to 
class ChemAtomShiftCorr
  @param  Nmrr_ChemAtomNmrRef self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmrr_ChemAtomShiftCorr Nmrr_ChemAtomNmrRef_FindFirstChemAtomShiftCorr(Nmrr_ChemAtomNmrRef self, ApiMap conditions)
{
  
  Nmrr_ChemAtomShiftCorr obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChemAtomShiftCorr");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: cannot find method 'findFirstChemAtomShiftCorr'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: method 'findFirstChemAtomShiftCorr' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrReference.ChemAtomNmrRef.chemAtomShiftCorrs

child link to 
class ChemAtomShiftCorr
  @param  Nmrr_ChemAtomNmrRef self
  @returns  the first value that satisfies the conditions 
**/
Nmrr_ChemAtomShiftCorr Nmrr_ChemAtomNmrRef_FindFirstChemAtomShiftCorr_keyval0(Nmrr_ChemAtomNmrRef self)
{
  
  Nmrr_ChemAtomShiftCorr  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrr_ChemAtomNmrRef_FindFirstChemAtomShiftCorr(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrReference.ChemAtomNmrRef.chemAtomShiftCorrs

child link to 
class ChemAtomShiftCorr
  @param  Nmrr_ChemAtomNmrRef self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmrr_ChemAtomShiftCorr Nmrr_ChemAtomNmrRef_FindFirstChemAtomShiftCorr_keyval1(Nmrr_ChemAtomNmrRef self, char * key, ApiObject value)
{
  
  Nmrr_ChemAtomShiftCorr  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrr_ChemAtomNmrRef_FindFirstChemAtomShiftCorr(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrReference.ChemAtomNmrRef.chemAtomShiftCorrs

child link to 
class ChemAtomShiftCorr
  @param  Nmrr_ChemAtomNmrRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmrr_ChemAtomShiftCorr Nmrr_ChemAtomNmrRef_FindFirstChemAtomShiftCorr_keyval2(Nmrr_ChemAtomNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmrr_ChemAtomShiftCorr  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrr_ChemAtomNmrRef_FindFirstChemAtomShiftCorr(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrReference.ChemAtomNmrRef.chemAtomShiftCorrs

child link to 
class ChemAtomShiftCorr
  @param  Nmrr_ChemAtomNmrRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmrr_ChemAtomShiftCorr Nmrr_ChemAtomNmrRef_FindFirstChemAtomShiftCorr_keyval3(Nmrr_ChemAtomNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmrr_ChemAtomShiftCorr  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrr_ChemAtomNmrRef_FindFirstChemAtomShiftCorr(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrReference.ChemAtomNmrRef.chemAtomShiftCorrs

child link to 
class ChemAtomShiftCorr
  @param  Nmrr_ChemAtomNmrRef self
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
Nmrr_ChemAtomShiftCorr Nmrr_ChemAtomNmrRef_FindFirstChemAtomShiftCorr_keyval4(Nmrr_ChemAtomNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmrr_ChemAtomShiftCorr  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrr_ChemAtomNmrRef_FindFirstChemAtomShiftCorr(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrReference.ChemAtomNmrRef.chemAtoms

ChemAtom to 
which reference information applies.
  @param  Nmrr_ChemAtomNmrRef self
  @returns  the first value that satisfies the conditions 
**/
Chem_AbstractChemAtom Nmrr_ChemAtomNmrRef_FindFirstChemAtom_keyval0(Nmrr_ChemAtomNmrRef self)
{
  
  Chem_AbstractChemAtom  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrr_ChemAtomNmrRef_FindFirstChemAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrReference.ChemAtomNmrRef.chemAtoms

ChemAtom to 
which reference information applies.
  @param  Nmrr_ChemAtomNmrRef self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chem_AbstractChemAtom Nmrr_ChemAtomNmrRef_FindFirstChemAtom_keyval1(Nmrr_ChemAtomNmrRef self, char * key, ApiObject value)
{
  
  Chem_AbstractChemAtom  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrr_ChemAtomNmrRef_FindFirstChemAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrReference.ChemAtomNmrRef.chemAtoms

ChemAtom to 
which reference information applies.
  @param  Nmrr_ChemAtomNmrRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chem_AbstractChemAtom Nmrr_ChemAtomNmrRef_FindFirstChemAtom_keyval2(Nmrr_ChemAtomNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chem_AbstractChemAtom  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrr_ChemAtomNmrRef_FindFirstChemAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrReference.ChemAtomNmrRef.chemAtoms

ChemAtom to 
which reference information applies.
  @param  Nmrr_ChemAtomNmrRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chem_AbstractChemAtom Nmrr_ChemAtomNmrRef_FindFirstChemAtom_keyval3(Nmrr_ChemAtomNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chem_AbstractChemAtom  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrr_ChemAtomNmrRef_FindFirstChemAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrReference.ChemAtomNmrRef.chemAtoms

ChemAtom to 
which reference information applies.
  @param  Nmrr_ChemAtomNmrRef self
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
Chem_AbstractChemAtom Nmrr_ChemAtomNmrRef_FindFirstChemAtom_keyval4(Nmrr_ChemAtomNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chem_AbstractChemAtom  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrr_ChemAtomNmrRef_FindFirstChemAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrReference.ChemAtomNmrRef.chemCompVarNmrRefs

ChemCompNmrRefs 
that contain this ChemAtomNmrRef.
  @param  Nmrr_ChemAtomNmrRef self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmrr_ChemCompVarNmrRef Nmrr_ChemAtomNmrRef_FindFirstChemCompVarNmrRef(Nmrr_ChemAtomNmrRef self, ApiMap conditions)
{
  
  Nmrr_ChemCompVarNmrRef obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChemCompVarNmrRef");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: cannot find method 'findFirstChemCompVarNmrRef'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: method 'findFirstChemCompVarNmrRef' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrReference.ChemAtomNmrRef.chemCompVarNmrRefs

ChemCompNmrRefs 
that contain this ChemAtomNmrRef.
  @param  Nmrr_ChemAtomNmrRef self
  @returns  the first value that satisfies the conditions 
**/
Nmrr_ChemCompVarNmrRef Nmrr_ChemAtomNmrRef_FindFirstChemCompVarNmrRef_keyval0(Nmrr_ChemAtomNmrRef self)
{
  
  Nmrr_ChemCompVarNmrRef  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrr_ChemAtomNmrRef_FindFirstChemCompVarNmrRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrReference.ChemAtomNmrRef.chemCompVarNmrRefs

ChemCompNmrRefs 
that contain this ChemAtomNmrRef.
  @param  Nmrr_ChemAtomNmrRef self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmrr_ChemCompVarNmrRef Nmrr_ChemAtomNmrRef_FindFirstChemCompVarNmrRef_keyval1(Nmrr_ChemAtomNmrRef self, char * key, ApiObject value)
{
  
  Nmrr_ChemCompVarNmrRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrr_ChemAtomNmrRef_FindFirstChemCompVarNmrRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrReference.ChemAtomNmrRef.chemCompVarNmrRefs

ChemCompNmrRefs 
that contain this ChemAtomNmrRef.
  @param  Nmrr_ChemAtomNmrRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmrr_ChemCompVarNmrRef Nmrr_ChemAtomNmrRef_FindFirstChemCompVarNmrRef_keyval2(Nmrr_ChemAtomNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmrr_ChemCompVarNmrRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrr_ChemAtomNmrRef_FindFirstChemCompVarNmrRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrReference.ChemAtomNmrRef.chemCompVarNmrRefs

ChemCompNmrRefs 
that contain this ChemAtomNmrRef.
  @param  Nmrr_ChemAtomNmrRef self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmrr_ChemCompVarNmrRef Nmrr_ChemAtomNmrRef_FindFirstChemCompVarNmrRef_keyval3(Nmrr_ChemAtomNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmrr_ChemCompVarNmrRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrr_ChemAtomNmrRef_FindFirstChemCompVarNmrRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrReference.ChemAtomNmrRef.chemCompVarNmrRefs

ChemCompNmrRefs 
that contain this ChemAtomNmrRef.
  @param  Nmrr_ChemAtomNmrRef self
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
Nmrr_ChemCompVarNmrRef Nmrr_ChemAtomNmrRef_FindFirstChemCompVarNmrRef_keyval4(Nmrr_ChemAtomNmrRef self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmrr_ChemCompVarNmrRef  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrr_ChemAtomNmrRef_FindFirstChemCompVarNmrRef(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.nmr.NmrReference.ChemAtomNmrRef
  @param  Nmrr_ChemAtomNmrRef self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Nmrr_ChemAtomNmrRef_Get(Nmrr_ChemAtomNmrRef self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrr_ChemAtomNmrRef self
  @returns   the result
**/
Acco_AccessObject Nmrr_ChemAtomNmrRef_GetAccess(Nmrr_ChemAtomNmrRef self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: method 'getAccess' is not callable");
  
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
  @param  Nmrr_ChemAtomNmrRef self
  @returns   the result
**/
ApiList Nmrr_ChemAtomNmrRef_GetApplicationData(Nmrr_ChemAtomNmrRef self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.NmrReference.ChemAtomNmrRef
  @param  Nmrr_ChemAtomNmrRef self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nmrr_ChemAtomNmrRef Nmrr_ChemAtomNmrRef_GetByKey(Nmrr_ChemAtomNmrRef self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Nmrr_ChemAtomNmrRef obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: method 'getByKey' is not callable");
  
  args = PyTuple_Pack(2, startObj, fullKey);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrReference.ChemAtomNmrRef.chemAtomShiftCorrs

child 
link to class ChemAtomShiftCorr
  @param  Nmrr_ChemAtomNmrRef self
  @returns   the result
**/
ApiSet Nmrr_ChemAtomNmrRef_GetChemAtomShiftCorrs(Nmrr_ChemAtomNmrRef self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemAtomShiftCorrs");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: cannot find method 'getChemAtomShiftCorrs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: method 'getChemAtomShiftCorrs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived link chemAtoms
  @param  Nmrr_ChemAtomNmrRef self
  @returns   the result
**/
ApiSet Nmrr_ChemAtomNmrRef_GetChemAtoms(Nmrr_ChemAtomNmrRef self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemAtoms");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: cannot find method 'getChemAtoms'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: method 'getChemAtoms' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrReference.ChemAtomNmrRef.chemCompNmrRef

parent link
  @param  Nmrr_ChemAtomNmrRef self
  @returns   the result
**/
Nmrr_ChemCompNmrRef Nmrr_ChemAtomNmrRef_GetChemCompNmrRef(Nmrr_ChemAtomNmrRef self)
{
  
  Nmrr_ChemCompNmrRef obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemCompNmrRef");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: cannot find method 'getChemCompNmrRef'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: method 'getChemCompNmrRef' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.nmr.NmrReference.ChemAtomNmrRef.chemCompVarNmrRefs

ChemCompNmrRefs 
that contain this ChemAtomNmrRef.
  @param  Nmrr_ChemAtomNmrRef self
  @returns   the result
**/
ApiSet Nmrr_ChemAtomNmrRef_GetChemCompVarNmrRefs(Nmrr_ChemAtomNmrRef self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemCompVarNmrRefs");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: cannot find method 'getChemCompVarNmrRefs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: method 'getChemCompVarNmrRefs' is not callable");
  
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
  @param  Nmrr_ChemAtomNmrRef self
  @returns   the result
**/
ApiString Nmrr_ChemAtomNmrRef_GetClassName(Nmrr_ChemAtomNmrRef self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrReference.ChemAtomNmrRef.distribution

histogram of 
frequency distribution. Normalised - must sum to 1.0. The shifts to 
which the individual points belong are defined so that point i collects 
the  shifts from 
refValue + valuePerPoint*( i-refPoint) to refValue + 
valuePerPoint*( i+1-refPoint).
  @param  Nmrr_ChemAtomNmrRef self
  @returns   the result
**/
ApiList Nmrr_ChemAtomNmrRef_GetDistribution(Nmrr_ChemAtomNmrRef self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDistribution");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: cannot find method 'getDistribution'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: method 'getDistribution' is not callable");
  
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
  @param  Nmrr_ChemAtomNmrRef self
  @returns   the result
**/
ApiList Nmrr_ChemAtomNmrRef_GetFieldNames(Nmrr_ChemAtomNmrRef self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.nmr.NmrReference.ChemAtomNmrRef
  @param  Nmrr_ChemAtomNmrRef self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Nmrr_ChemAtomNmrRef_GetFullKey(Nmrr_ChemAtomNmrRef self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: method 'getFullKey' is not callable");
  
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
  @param  Nmrr_ChemAtomNmrRef self
  @returns   the result
**/
ApiBoolean Nmrr_ChemAtomNmrRef_GetInConstructor(Nmrr_ChemAtomNmrRef self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: method 'getInConstructor' is not callable");
  
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
  @param  Nmrr_ChemAtomNmrRef self
  @returns   the result
**/
ApiBoolean Nmrr_ChemAtomNmrRef_GetIsDeleted(Nmrr_ChemAtomNmrRef self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.nmr.NmrReference.ChemAtomNmrRef
  @param  Nmrr_ChemAtomNmrRef self
  @returns  Local object key
**/
ApiObject Nmrr_ChemAtomNmrRef_GetLocalKey(Nmrr_ChemAtomNmrRef self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrReference.ChemAtomNmrRef.meanValue

Average predicted 
chemical shift value (in ppm)
  @param  Nmrr_ChemAtomNmrRef self
  @returns   the result
**/
ApiFloat Nmrr_ChemAtomNmrRef_GetMeanValue(Nmrr_ChemAtomNmrRef self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMeanValue");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: cannot find method 'getMeanValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: method 'getMeanValue' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrReference.ChemAtomNmrRef.name

Name of ChemAtom. Part 
of key for object.
  @param  Nmrr_ChemAtomNmrRef self
  @returns   the result
**/
ApiString Nmrr_ChemAtomNmrRef_GetName(Nmrr_ChemAtomNmrRef self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: method 'getName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived attribute numPoints
  @param  Nmrr_ChemAtomNmrRef self
  @returns   the result
**/
ApiInteger Nmrr_ChemAtomNmrRef_GetNumPoints(Nmrr_ChemAtomNmrRef self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNumPoints");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: cannot find method 'getNumPoints'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: method 'getNumPoints' is not callable");
  
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
  @param  Nmrr_ChemAtomNmrRef self
  @returns   the result
**/
ApiString Nmrr_ChemAtomNmrRef_GetPackageName(Nmrr_ChemAtomNmrRef self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: method 'getPackageName' is not callable");
  
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
  @param  Nmrr_ChemAtomNmrRef self
  @returns   the result
**/
ApiString Nmrr_ChemAtomNmrRef_GetPackageShortName(Nmrr_ChemAtomNmrRef self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrReference.ChemAtomNmrRef.parent

link to parent 
object - synonym for chemCompNmrRef
  @param  Nmrr_ChemAtomNmrRef self
  @returns   the result
**/
Nmrr_ChemCompNmrRef Nmrr_ChemAtomNmrRef_GetParent(Nmrr_ChemAtomNmrRef self)
{
  
  Nmrr_ChemCompNmrRef obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: method 'getParent' is not callable");
  
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
  @param  Nmrr_ChemAtomNmrRef self
  @returns   the result
**/
ApiString Nmrr_ChemAtomNmrRef_GetQualifiedName(Nmrr_ChemAtomNmrRef self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrReference.ChemAtomNmrRef.randomCoilValue

Chemical 
shift for random coil conformation. Need not be the same as the mean 
value over the known distribution.
  @param  Nmrr_ChemAtomNmrRef self
  @returns   the result
**/
ApiFloat Nmrr_ChemAtomNmrRef_GetRandomCoilValue(Nmrr_ChemAtomNmrRef self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRandomCoilValue");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: cannot find method 'getRandomCoilValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: method 'getRandomCoilValue' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrReference.ChemAtomNmrRef.refPoint

Reference point 
number (in floating point, first point is 0.0) for referencing chemical 
shift axis of distribution.
  @param  Nmrr_ChemAtomNmrRef self
  @returns   the result
**/
ApiFloat Nmrr_ChemAtomNmrRef_GetRefPoint(Nmrr_ChemAtomNmrRef self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRefPoint");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: cannot find method 'getRefPoint'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: method 'getRefPoint' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrReference.ChemAtomNmrRef.refValue

Reference value 
(in ppm) for setting chemical shift axis of distribution.
  @param  Nmrr_ChemAtomNmrRef self
  @returns   the result
**/
ApiFloat Nmrr_ChemAtomNmrRef_GetRefValue(Nmrr_ChemAtomNmrRef self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRefValue");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: cannot find method 'getRefValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: method 'getRefValue' is not callable");
  
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
  @param  Nmrr_ChemAtomNmrRef self
  @returns   the result
**/
Impl_MemopsRoot Nmrr_ChemAtomNmrRef_GetRoot(Nmrr_ChemAtomNmrRef self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrReference.ChemAtomNmrRef.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmrr_ChemAtomNmrRef self
  @returns   the result
**/
ApiInteger Nmrr_ChemAtomNmrRef_GetSerial(Nmrr_ChemAtomNmrRef self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: method 'getSerial' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrReference.ChemAtomNmrRef.stdDev

Standard deviation 
(in ppm) over the chemical shift distribution
  @param  Nmrr_ChemAtomNmrRef self
  @returns   the result
**/
ApiFloat Nmrr_ChemAtomNmrRef_GetStdDev(Nmrr_ChemAtomNmrRef self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getStdDev");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: cannot find method 'getStdDev'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: method 'getStdDev' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrReference.ChemAtomNmrRef.subType

subType of ChemAtom 
referred to.
  @param  Nmrr_ChemAtomNmrRef self
  @returns   the result
**/
ApiInteger Nmrr_ChemAtomNmrRef_GetSubType(Nmrr_ChemAtomNmrRef self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSubType");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: cannot find method 'getSubType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: method 'getSubType' is not callable");
  
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
  @param  Nmrr_ChemAtomNmrRef self
  @returns   the result
**/
Impl_TopObject Nmrr_ChemAtomNmrRef_GetTopObject(Nmrr_ChemAtomNmrRef self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrReference.ChemAtomNmrRef.valuePerPoint

The value per 
point on the histogram axis, equivalent to the width of a column.
  @param  Nmrr_ChemAtomNmrRef self
  @returns   the result
**/
ApiFloat Nmrr_ChemAtomNmrRef_GetValuePerPoint(Nmrr_ChemAtomNmrRef self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getValuePerPoint");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: cannot find method 'getValuePerPoint'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: method 'getValuePerPoint' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.nmr.NmrReference.ChemAtomNmrRef
  @param  Nmrr_ChemCompNmrRef parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmrr_ChemAtomNmrRef Nmrr_ChemAtomNmrRef_Init(Nmrr_ChemCompNmrRef parent, ApiMap attrlinks)
{
  
  return Nmrr_ChemCompNmrRef_NewChemAtomNmrRef(parent, attrlinks);
}

/**
  Constructor for ccp.nmr.NmrReference.ChemAtomNmrRef
  @param  Nmrr_ChemCompNmrRef parent
  @param  ApiSet chemCompVarNmrRefs
  @param  char * name
  @returns  the new object
**/
Nmrr_ChemAtomNmrRef Nmrr_ChemAtomNmrRef_Init_reqd(Nmrr_ChemCompNmrRef parent, ApiSet chemCompVarNmrRefs, char * name)
{
  
  Nmrr_ChemAtomNmrRef  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "chemCompVarNmrRefs", chemCompVarNmrRefs);
  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Nmrr_ChemAtomNmrRef_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrReference.ChemAtomShiftCorr
  @param  Nmrr_ChemAtomNmrRef self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmrr_ChemAtomShiftCorr Nmrr_ChemAtomNmrRef_NewChemAtomShiftCorr(Nmrr_ChemAtomNmrRef self, ApiMap attrlinks)
{
  
  Nmrr_ChemAtomShiftCorr obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newChemAtomShiftCorr");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: cannot find method 'newChemAtomShiftCorr'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: method 'newChemAtomShiftCorr' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrReference.ChemAtomShiftCorr
  @param  Nmrr_ChemAtomNmrRef self
  @param  char * ccpCode
  @param  char * molType
  @param  ApiInteger seqOffset
  @returns  the new object
**/
Nmrr_ChemAtomShiftCorr Nmrr_ChemAtomNmrRef_NewChemAtomShiftCorr_reqd(Nmrr_ChemAtomNmrRef self, char * ccpCode, char * molType, ApiInteger seqOffset)
{
  
  Nmrr_ChemAtomShiftCorr  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__ccpCode = ApiString_New(ccpCode);
  ApiString api__molType = ApiString_New(molType);

  PyDict_SetItemString(attrlinks, "ccpCode", api__ccpCode);
  PyDict_SetItemString(attrlinks, "molType", api__molType);
  PyDict_SetItemString(attrlinks, "seqOffset", seqOffset);
  
  obj = Nmrr_ChemAtomNmrRef_NewChemAtomShiftCorr(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__ccpCode);
  Py_DECREF(api__molType);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrr_ChemAtomNmrRef self
  @param  Impl_ApplicationData value
**/
void *Nmrr_ChemAtomNmrRef_RemoveApplicationData(Nmrr_ChemAtomNmrRef self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
ccp.nmr.NmrReference.ChemAtomNmrRef.chemCompVarNmrRefs

ChemCompNmrRefs 
that contain this ChemAtomNmrRef.
  @param  Nmrr_ChemAtomNmrRef self
  @param  Nmrr_ChemCompVarNmrRef value
**/
void *Nmrr_ChemAtomNmrRef_RemoveChemCompVarNmrRef(Nmrr_ChemAtomNmrRef self, Nmrr_ChemCompVarNmrRef value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeChemCompVarNmrRef");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: cannot find method 'removeChemCompVarNmrRef'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: method 'removeChemCompVarNmrRef' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Modify command for distribution. Specifically entered here to make sure 
command is disabled
  @param  Nmrr_ChemAtomNmrRef self
  @param  ApiFloat value
**/
void *Nmrr_ChemAtomNmrRef_RemoveDistribution(Nmrr_ChemAtomNmrRef self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeDistribution");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: cannot find method 'removeDistribution'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: method 'removeDistribution' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.nmr.NmrReference.ChemAtomNmrRef
  @param  Nmrr_ChemAtomNmrRef self
  @param  ApiString name
  @param  ApiObject value
**/
void *Nmrr_ChemAtomNmrRef_Set(Nmrr_ChemAtomNmrRef self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrr_ChemAtomNmrRef self
  @param  Acco_AccessObject value
**/
void *Nmrr_ChemAtomNmrRef_SetAccess(Nmrr_ChemAtomNmrRef self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: method 'setAccess' is not callable");
  
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
  @param  Nmrr_ChemAtomNmrRef self
  @param  ApiList values
**/
void *Nmrr_ChemAtomNmrRef_SetApplicationData(Nmrr_ChemAtomNmrRef self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.nmr.NmrReference.ChemAtomNmrRef.chemCompVarNmrRefs

ChemCompNmrRefs 
that contain this ChemAtomNmrRef.
  @param  Nmrr_ChemAtomNmrRef self
  @param  ApiSet values
**/
void *Nmrr_ChemAtomNmrRef_SetChemCompVarNmrRefs(Nmrr_ChemAtomNmrRef self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setChemCompVarNmrRefs");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: cannot find method 'setChemCompVarNmrRefs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: method 'setChemCompVarNmrRefs' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrReference.ChemAtomNmrRef.distribution

histogram of 
frequency distribution. Normalised - must sum to 1.0. The shifts to 
which the individual points belong are defined so that point i collects 
the  shifts from 
refValue + valuePerPoint*( i-refPoint) to refValue + 
valuePerPoint*( i+1-refPoint).
  @param  Nmrr_ChemAtomNmrRef self
  @param  ApiList values
**/
void *Nmrr_ChemAtomNmrRef_SetDistribution(Nmrr_ChemAtomNmrRef self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDistribution");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: cannot find method 'setDistribution'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: method 'setDistribution' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrReference.ChemAtomNmrRef.meanValue

Average predicted 
chemical shift value (in ppm)
  @param  Nmrr_ChemAtomNmrRef self
  @param  ApiFloat value
**/
void *Nmrr_ChemAtomNmrRef_SetMeanValue(Nmrr_ChemAtomNmrRef self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMeanValue");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: cannot find method 'setMeanValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: method 'setMeanValue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrReference.ChemAtomNmrRef.name

Name of ChemAtom. Part 
of key for object.
  @param  Nmrr_ChemAtomNmrRef self
  @param  ApiString value
**/
void *Nmrr_ChemAtomNmrRef_SetName(Nmrr_ChemAtomNmrRef self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrReference.ChemAtomNmrRef.randomCoilValue

Chemical 
shift for random coil conformation. Need not be the same as the mean 
value over the known distribution.
  @param  Nmrr_ChemAtomNmrRef self
  @param  ApiFloat value
**/
void *Nmrr_ChemAtomNmrRef_SetRandomCoilValue(Nmrr_ChemAtomNmrRef self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRandomCoilValue");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: cannot find method 'setRandomCoilValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: method 'setRandomCoilValue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrReference.ChemAtomNmrRef.refPoint

Reference point 
number (in floating point, first point is 0.0) for referencing chemical 
shift axis of distribution.
  @param  Nmrr_ChemAtomNmrRef self
  @param  ApiFloat value
**/
void *Nmrr_ChemAtomNmrRef_SetRefPoint(Nmrr_ChemAtomNmrRef self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRefPoint");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: cannot find method 'setRefPoint'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: method 'setRefPoint' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrReference.ChemAtomNmrRef.refValue

Reference value 
(in ppm) for setting chemical shift axis of distribution.
  @param  Nmrr_ChemAtomNmrRef self
  @param  ApiFloat value
**/
void *Nmrr_ChemAtomNmrRef_SetRefValue(Nmrr_ChemAtomNmrRef self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRefValue");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: cannot find method 'setRefValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: method 'setRefValue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrReference.ChemAtomNmrRef.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmrr_ChemAtomNmrRef self
  @param  ApiInteger value
**/
void *Nmrr_ChemAtomNmrRef_SetSerial(Nmrr_ChemAtomNmrRef self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrReference.ChemAtomNmrRef.stdDev

Standard deviation 
(in ppm) over the chemical shift distribution
  @param  Nmrr_ChemAtomNmrRef self
  @param  ApiFloat value
**/
void *Nmrr_ChemAtomNmrRef_SetStdDev(Nmrr_ChemAtomNmrRef self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setStdDev");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: cannot find method 'setStdDev'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: method 'setStdDev' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrReference.ChemAtomNmrRef.subType

subType of ChemAtom 
referred to.
  @param  Nmrr_ChemAtomNmrRef self
  @param  ApiInteger value
**/
void *Nmrr_ChemAtomNmrRef_SetSubType(Nmrr_ChemAtomNmrRef self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSubType");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: cannot find method 'setSubType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: method 'setSubType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrReference.ChemAtomNmrRef.valuePerPoint

The value per 
point on the histogram axis, equivalent to the width of a column.
  @param  Nmrr_ChemAtomNmrRef self
  @param  ApiFloat value
**/
void *Nmrr_ChemAtomNmrRef_SetValuePerPoint(Nmrr_ChemAtomNmrRef self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setValuePerPoint");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: cannot find method 'setValuePerPoint'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: method 'setValuePerPoint' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.NmrReference.ChemAtomNmrRef.chemAtomShiftCorrs

child 
link to class ChemAtomShiftCorr
  @param  Nmrr_ChemAtomNmrRef self
  @returns   the result
**/
ApiList Nmrr_ChemAtomNmrRef_SortedChemAtomShiftCorrs(Nmrr_ChemAtomNmrRef self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChemAtomShiftCorrs");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: cannot find method 'sortedChemAtomShiftCorrs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: method 'sortedChemAtomShiftCorrs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.NmrReference.ChemAtomNmrRef.chemAtoms

ChemAtom to 
which reference information applies.
  @param  Nmrr_ChemAtomNmrRef self
  @returns   the result
**/
ApiList Nmrr_ChemAtomNmrRef_SortedChemAtoms(Nmrr_ChemAtomNmrRef self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChemAtoms");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: cannot find method 'sortedChemAtoms'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: method 'sortedChemAtoms' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.nmr.NmrReference.ChemAtomNmrRef.chemCompVarNmrRefs

ChemCompNmrRefs 
that contain this ChemAtomNmrRef.
  @param  Nmrr_ChemAtomNmrRef self
  @returns   the result
**/
ApiList Nmrr_ChemAtomNmrRef_SortedChemCompVarNmrRefs(Nmrr_ChemAtomNmrRef self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChemCompVarNmrRefs");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: cannot find method 'sortedChemCompVarNmrRefs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrReference.ChemAtomNmrRef: method 'sortedChemCompVarNmrRefs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
