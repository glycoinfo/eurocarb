
#include "ccp.h"

/*
  Permanent, unchanging copy of Nmr.Resonance.
*/

/* package ccp.api.nmr.NmrConstraint */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_FixedResonance self
  @param  Impl_ApplicationData value
**/
void *Nmrc_FixedResonance_AddApplicationData(Nmrc_FixedResonance self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.nmr.NmrConstraint.FixedResonance
  @param  Nmrc_FixedResonance self
  @param  ApiBoolean complete
**/
void *Nmrc_FixedResonance_CheckAllValid(Nmrc_FixedResonance self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.nmr.NmrConstraint.FixedResonance
  @param  Nmrc_FixedResonance self
  @param  ApiBoolean complete
**/
void *Nmrc_FixedResonance_CheckValid(Nmrc_FixedResonance self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: method 'checkValid' is not callable");
  
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
  @param  Nmrc_FixedResonance self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_FixedResonance_FindAllApplicationData(Nmrc_FixedResonance self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: method 'findAllApplicationData' is not callable");
  
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
  @param  Nmrc_FixedResonance self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_FixedResonance_FindAllApplicationData_keyval0(Nmrc_FixedResonance self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_FixedResonance_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_FixedResonance self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_FixedResonance_FindAllApplicationData_keyval1(Nmrc_FixedResonance self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_FixedResonance_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_FixedResonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_FixedResonance_FindAllApplicationData_keyval2(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_FixedResonance_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_FixedResonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrc_FixedResonance_FindAllApplicationData_keyval3(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_FixedResonance_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_FixedResonance self
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
ApiList Nmrc_FixedResonance_FindAllApplicationData_keyval4(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_FixedResonance_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.FixedResonance.chainStateLinks

child 
link to class ChainStateLink
  @param  Nmrc_FixedResonance self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_FixedResonance_FindAllChainStateLinks(Nmrc_FixedResonance self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChainStateLinks");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: cannot find method 'findAllChainStateLinks'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: method 'findAllChainStateLinks' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.FixedResonance.chainStateLinks

child 
link to class ChainStateLink
  @param  Nmrc_FixedResonance self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_FixedResonance_FindAllChainStateLinks_keyval0(Nmrc_FixedResonance self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_FixedResonance_FindAllChainStateLinks(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.FixedResonance.chainStateLinks

child 
link to class ChainStateLink
  @param  Nmrc_FixedResonance self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_FixedResonance_FindAllChainStateLinks_keyval1(Nmrc_FixedResonance self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_FixedResonance_FindAllChainStateLinks(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.FixedResonance.chainStateLinks

child 
link to class ChainStateLink
  @param  Nmrc_FixedResonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_FixedResonance_FindAllChainStateLinks_keyval2(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_FixedResonance_FindAllChainStateLinks(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.FixedResonance.chainStateLinks

child 
link to class ChainStateLink
  @param  Nmrc_FixedResonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_FixedResonance_FindAllChainStateLinks_keyval3(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_FixedResonance_FindAllChainStateLinks(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.FixedResonance.chainStateLinks

child 
link to class ChainStateLink
  @param  Nmrc_FixedResonance self
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
ApiSet Nmrc_FixedResonance_FindAllChainStateLinks_keyval4(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_FixedResonance_FindAllChainStateLinks(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.FixedResonance.chemShiftConstraints

Chemical 
shift constraints involving FIxedResonance
  @param  Nmrc_FixedResonance self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_FixedResonance_FindAllChemShiftConstraints(Nmrc_FixedResonance self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChemShiftConstraints");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: cannot find method 'findAllChemShiftConstraints'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: method 'findAllChemShiftConstraints' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.FixedResonance.chemShiftConstraints

Chemical 
shift constraints involving FIxedResonance
  @param  Nmrc_FixedResonance self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_FixedResonance_FindAllChemShiftConstraints_keyval0(Nmrc_FixedResonance self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_FixedResonance_FindAllChemShiftConstraints(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.FixedResonance.chemShiftConstraints

Chemical 
shift constraints involving FIxedResonance
  @param  Nmrc_FixedResonance self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_FixedResonance_FindAllChemShiftConstraints_keyval1(Nmrc_FixedResonance self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_FixedResonance_FindAllChemShiftConstraints(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.FixedResonance.chemShiftConstraints

Chemical 
shift constraints involving FIxedResonance
  @param  Nmrc_FixedResonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_FixedResonance_FindAllChemShiftConstraints_keyval2(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_FixedResonance_FindAllChemShiftConstraints(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.FixedResonance.chemShiftConstraints

Chemical 
shift constraints involving FIxedResonance
  @param  Nmrc_FixedResonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_FixedResonance_FindAllChemShiftConstraints_keyval3(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_FixedResonance_FindAllChemShiftConstraints(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.FixedResonance.chemShiftConstraints

Chemical 
shift constraints involving FIxedResonance
  @param  Nmrc_FixedResonance self
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
ApiSet Nmrc_FixedResonance_FindAllChemShiftConstraints_keyval4(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_FixedResonance_FindAllChemShiftConstraints(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.FixedResonance.csaConstraints
  @param  Nmrc_FixedResonance self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_FixedResonance_FindAllCsaConstraints(Nmrc_FixedResonance self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllCsaConstraints");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: cannot find method 'findAllCsaConstraints'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: method 'findAllCsaConstraints' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.FixedResonance.csaConstraints
  @param  Nmrc_FixedResonance self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_FixedResonance_FindAllCsaConstraints_keyval0(Nmrc_FixedResonance self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_FixedResonance_FindAllCsaConstraints(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.FixedResonance.csaConstraints
  @param  Nmrc_FixedResonance self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_FixedResonance_FindAllCsaConstraints_keyval1(Nmrc_FixedResonance self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_FixedResonance_FindAllCsaConstraints(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.FixedResonance.csaConstraints
  @param  Nmrc_FixedResonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_FixedResonance_FindAllCsaConstraints_keyval2(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_FixedResonance_FindAllCsaConstraints(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.FixedResonance.csaConstraints
  @param  Nmrc_FixedResonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_FixedResonance_FindAllCsaConstraints_keyval3(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_FixedResonance_FindAllCsaConstraints(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.FixedResonance.csaConstraints
  @param  Nmrc_FixedResonance self
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
ApiSet Nmrc_FixedResonance_FindAllCsaConstraints_keyval4(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_FixedResonance_FindAllCsaConstraints(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.FixedResonance.dihedralConstraints

Dihedral angle 
constraints involving FixedResonance.
  @param  Nmrc_FixedResonance self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_FixedResonance_FindAllDihedralConstraints(Nmrc_FixedResonance self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllDihedralConstraints");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: cannot find method 'findAllDihedralConstraints'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: method 'findAllDihedralConstraints' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.FixedResonance.dihedralConstraints

Dihedral angle 
constraints involving FixedResonance.
  @param  Nmrc_FixedResonance self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_FixedResonance_FindAllDihedralConstraints_keyval0(Nmrc_FixedResonance self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_FixedResonance_FindAllDihedralConstraints(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.FixedResonance.dihedralConstraints

Dihedral angle 
constraints involving FixedResonance.
  @param  Nmrc_FixedResonance self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_FixedResonance_FindAllDihedralConstraints_keyval1(Nmrc_FixedResonance self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_FixedResonance_FindAllDihedralConstraints(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.FixedResonance.dihedralConstraints

Dihedral angle 
constraints involving FixedResonance.
  @param  Nmrc_FixedResonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_FixedResonance_FindAllDihedralConstraints_keyval2(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_FixedResonance_FindAllDihedralConstraints(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.FixedResonance.dihedralConstraints

Dihedral angle 
constraints involving FixedResonance.
  @param  Nmrc_FixedResonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_FixedResonance_FindAllDihedralConstraints_keyval3(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_FixedResonance_FindAllDihedralConstraints(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.FixedResonance.dihedralConstraints

Dihedral angle 
constraints involving FixedResonance.
  @param  Nmrc_FixedResonance self
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
ApiSet Nmrc_FixedResonance_FindAllDihedralConstraints_keyval4(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_FixedResonance_FindAllDihedralConstraints(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.FixedResonance.pairwiseConstraintItems

PairWiseConstraintItems 
that involve FixedResonance
  @param  Nmrc_FixedResonance self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_FixedResonance_FindAllPairwiseConstraintItems(Nmrc_FixedResonance self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllPairwiseConstraintItems");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: cannot find method 'findAllPairwiseConstraintItems'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: method 'findAllPairwiseConstraintItems' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.FixedResonance.pairwiseConstraintItems

PairWiseConstraintItems 
that involve FixedResonance
  @param  Nmrc_FixedResonance self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_FixedResonance_FindAllPairwiseConstraintItems_keyval0(Nmrc_FixedResonance self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_FixedResonance_FindAllPairwiseConstraintItems(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.FixedResonance.pairwiseConstraintItems

PairWiseConstraintItems 
that involve FixedResonance
  @param  Nmrc_FixedResonance self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_FixedResonance_FindAllPairwiseConstraintItems_keyval1(Nmrc_FixedResonance self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_FixedResonance_FindAllPairwiseConstraintItems(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.FixedResonance.pairwiseConstraintItems

PairWiseConstraintItems 
that involve FixedResonance
  @param  Nmrc_FixedResonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_FixedResonance_FindAllPairwiseConstraintItems_keyval2(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_FixedResonance_FindAllPairwiseConstraintItems(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.FixedResonance.pairwiseConstraintItems

PairWiseConstraintItems 
that involve FixedResonance
  @param  Nmrc_FixedResonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_FixedResonance_FindAllPairwiseConstraintItems_keyval3(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_FixedResonance_FindAllPairwiseConstraintItems(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrConstraint.FixedResonance.pairwiseConstraintItems

PairWiseConstraintItems 
that involve FixedResonance
  @param  Nmrc_FixedResonance self
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
ApiSet Nmrc_FixedResonance_FindAllPairwiseConstraintItems_keyval4(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_FixedResonance_FindAllPairwiseConstraintItems(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.FixedResonance.resCoords

Coordinate 
records (ResCoords) from resonance-only structures relevant for 
FixedResonance
  @param  Nmrc_FixedResonance self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_FixedResonance_FindAllResCoords(Nmrc_FixedResonance self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllResCoords");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: cannot find method 'findAllResCoords'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: method 'findAllResCoords' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.FixedResonance.resCoords

Coordinate 
records (ResCoords) from resonance-only structures relevant for 
FixedResonance
  @param  Nmrc_FixedResonance self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_FixedResonance_FindAllResCoords_keyval0(Nmrc_FixedResonance self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_FixedResonance_FindAllResCoords(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.FixedResonance.resCoords

Coordinate 
records (ResCoords) from resonance-only structures relevant for 
FixedResonance
  @param  Nmrc_FixedResonance self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_FixedResonance_FindAllResCoords_keyval1(Nmrc_FixedResonance self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_FixedResonance_FindAllResCoords(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.FixedResonance.resCoords

Coordinate 
records (ResCoords) from resonance-only structures relevant for 
FixedResonance
  @param  Nmrc_FixedResonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_FixedResonance_FindAllResCoords_keyval2(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_FixedResonance_FindAllResCoords(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.FixedResonance.resCoords

Coordinate 
records (ResCoords) from resonance-only structures relevant for 
FixedResonance
  @param  Nmrc_FixedResonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrc_FixedResonance_FindAllResCoords_keyval3(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_FixedResonance_FindAllResCoords(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrConstraint.FixedResonance.resCoords

Coordinate 
records (ResCoords) from resonance-only structures relevant for 
FixedResonance
  @param  Nmrc_FixedResonance self
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
ApiSet Nmrc_FixedResonance_FindAllResCoords_keyval4(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_FixedResonance_FindAllResCoords(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_FixedResonance self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrc_FixedResonance_FindFirstApplicationData(Nmrc_FixedResonance self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nmrc_FixedResonance self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrc_FixedResonance_FindFirstApplicationData_keyval0(Nmrc_FixedResonance self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_FixedResonance_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_FixedResonance self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrc_FixedResonance_FindFirstApplicationData_keyval1(Nmrc_FixedResonance self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_FixedResonance_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_FixedResonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrc_FixedResonance_FindFirstApplicationData_keyval2(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_FixedResonance_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_FixedResonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrc_FixedResonance_FindFirstApplicationData_keyval3(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_FixedResonance_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_FixedResonance self
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
Impl_ApplicationData Nmrc_FixedResonance_FindFirstApplicationData_keyval4(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_FixedResonance_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedResonance.chainStateLinks

child link to 
class ChainStateLink
  @param  Nmrc_FixedResonance self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmrc_ChainStateLink Nmrc_FixedResonance_FindFirstChainStateLink(Nmrc_FixedResonance self, ApiMap conditions)
{
  
  Nmrc_ChainStateLink obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChainStateLink");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: cannot find method 'findFirstChainStateLink'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: method 'findFirstChainStateLink' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedResonance.chainStateLinks

child link to 
class ChainStateLink
  @param  Nmrc_FixedResonance self
  @returns  the first value that satisfies the conditions 
**/
Nmrc_ChainStateLink Nmrc_FixedResonance_FindFirstChainStateLink_keyval0(Nmrc_FixedResonance self)
{
  
  Nmrc_ChainStateLink  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_FixedResonance_FindFirstChainStateLink(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedResonance.chainStateLinks

child link to 
class ChainStateLink
  @param  Nmrc_FixedResonance self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmrc_ChainStateLink Nmrc_FixedResonance_FindFirstChainStateLink_keyval1(Nmrc_FixedResonance self, char * key, ApiObject value)
{
  
  Nmrc_ChainStateLink  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_FixedResonance_FindFirstChainStateLink(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedResonance.chainStateLinks

child link to 
class ChainStateLink
  @param  Nmrc_FixedResonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmrc_ChainStateLink Nmrc_FixedResonance_FindFirstChainStateLink_keyval2(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmrc_ChainStateLink  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_FixedResonance_FindFirstChainStateLink(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedResonance.chainStateLinks

child link to 
class ChainStateLink
  @param  Nmrc_FixedResonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmrc_ChainStateLink Nmrc_FixedResonance_FindFirstChainStateLink_keyval3(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmrc_ChainStateLink  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_FixedResonance_FindFirstChainStateLink(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedResonance.chainStateLinks

child link to 
class ChainStateLink
  @param  Nmrc_FixedResonance self
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
Nmrc_ChainStateLink Nmrc_FixedResonance_FindFirstChainStateLink_keyval4(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmrc_ChainStateLink  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_FixedResonance_FindFirstChainStateLink(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedResonance.chemShiftConstraints

Chemical 
shift constraints involving FIxedResonance
  @param  Nmrc_FixedResonance self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmrc_ChemShiftConstraint Nmrc_FixedResonance_FindFirstChemShiftConstraint(Nmrc_FixedResonance self, ApiMap conditions)
{
  
  Nmrc_ChemShiftConstraint obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChemShiftConstraint");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: cannot find method 'findFirstChemShiftConstraint'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: method 'findFirstChemShiftConstraint' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedResonance.chemShiftConstraints

Chemical 
shift constraints involving FIxedResonance
  @param  Nmrc_FixedResonance self
  @returns  the first value that satisfies the conditions 
**/
Nmrc_ChemShiftConstraint Nmrc_FixedResonance_FindFirstChemShiftConstraint_keyval0(Nmrc_FixedResonance self)
{
  
  Nmrc_ChemShiftConstraint  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_FixedResonance_FindFirstChemShiftConstraint(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedResonance.chemShiftConstraints

Chemical 
shift constraints involving FIxedResonance
  @param  Nmrc_FixedResonance self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmrc_ChemShiftConstraint Nmrc_FixedResonance_FindFirstChemShiftConstraint_keyval1(Nmrc_FixedResonance self, char * key, ApiObject value)
{
  
  Nmrc_ChemShiftConstraint  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_FixedResonance_FindFirstChemShiftConstraint(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedResonance.chemShiftConstraints

Chemical 
shift constraints involving FIxedResonance
  @param  Nmrc_FixedResonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmrc_ChemShiftConstraint Nmrc_FixedResonance_FindFirstChemShiftConstraint_keyval2(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmrc_ChemShiftConstraint  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_FixedResonance_FindFirstChemShiftConstraint(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedResonance.chemShiftConstraints

Chemical 
shift constraints involving FIxedResonance
  @param  Nmrc_FixedResonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmrc_ChemShiftConstraint Nmrc_FixedResonance_FindFirstChemShiftConstraint_keyval3(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmrc_ChemShiftConstraint  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_FixedResonance_FindFirstChemShiftConstraint(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedResonance.chemShiftConstraints

Chemical 
shift constraints involving FIxedResonance
  @param  Nmrc_FixedResonance self
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
Nmrc_ChemShiftConstraint Nmrc_FixedResonance_FindFirstChemShiftConstraint_keyval4(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmrc_ChemShiftConstraint  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_FixedResonance_FindFirstChemShiftConstraint(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrConstraint.FixedResonance.csaConstraints
  @param  Nmrc_FixedResonance self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmrc_CsaConstraint Nmrc_FixedResonance_FindFirstCsaConstraint(Nmrc_FixedResonance self, ApiMap conditions)
{
  
  Nmrc_CsaConstraint obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstCsaConstraint");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: cannot find method 'findFirstCsaConstraint'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: method 'findFirstCsaConstraint' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrConstraint.FixedResonance.csaConstraints
  @param  Nmrc_FixedResonance self
  @returns  the first value that satisfies the conditions 
**/
Nmrc_CsaConstraint Nmrc_FixedResonance_FindFirstCsaConstraint_keyval0(Nmrc_FixedResonance self)
{
  
  Nmrc_CsaConstraint  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_FixedResonance_FindFirstCsaConstraint(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrConstraint.FixedResonance.csaConstraints
  @param  Nmrc_FixedResonance self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmrc_CsaConstraint Nmrc_FixedResonance_FindFirstCsaConstraint_keyval1(Nmrc_FixedResonance self, char * key, ApiObject value)
{
  
  Nmrc_CsaConstraint  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_FixedResonance_FindFirstCsaConstraint(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrConstraint.FixedResonance.csaConstraints
  @param  Nmrc_FixedResonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmrc_CsaConstraint Nmrc_FixedResonance_FindFirstCsaConstraint_keyval2(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmrc_CsaConstraint  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_FixedResonance_FindFirstCsaConstraint(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrConstraint.FixedResonance.csaConstraints
  @param  Nmrc_FixedResonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmrc_CsaConstraint Nmrc_FixedResonance_FindFirstCsaConstraint_keyval3(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmrc_CsaConstraint  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_FixedResonance_FindFirstCsaConstraint(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrConstraint.FixedResonance.csaConstraints
  @param  Nmrc_FixedResonance self
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
Nmrc_CsaConstraint Nmrc_FixedResonance_FindFirstCsaConstraint_keyval4(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmrc_CsaConstraint  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_FixedResonance_FindFirstCsaConstraint(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedResonance.dihedralConstraints

Dihedral angle 
constraints involving FixedResonance.
  @param  Nmrc_FixedResonance self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmrc_DihedralConstraint Nmrc_FixedResonance_FindFirstDihedralConstraint(Nmrc_FixedResonance self, ApiMap conditions)
{
  
  Nmrc_DihedralConstraint obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstDihedralConstraint");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: cannot find method 'findFirstDihedralConstraint'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: method 'findFirstDihedralConstraint' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedResonance.dihedralConstraints

Dihedral angle 
constraints involving FixedResonance.
  @param  Nmrc_FixedResonance self
  @returns  the first value that satisfies the conditions 
**/
Nmrc_DihedralConstraint Nmrc_FixedResonance_FindFirstDihedralConstraint_keyval0(Nmrc_FixedResonance self)
{
  
  Nmrc_DihedralConstraint  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_FixedResonance_FindFirstDihedralConstraint(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedResonance.dihedralConstraints

Dihedral angle 
constraints involving FixedResonance.
  @param  Nmrc_FixedResonance self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmrc_DihedralConstraint Nmrc_FixedResonance_FindFirstDihedralConstraint_keyval1(Nmrc_FixedResonance self, char * key, ApiObject value)
{
  
  Nmrc_DihedralConstraint  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_FixedResonance_FindFirstDihedralConstraint(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedResonance.dihedralConstraints

Dihedral angle 
constraints involving FixedResonance.
  @param  Nmrc_FixedResonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmrc_DihedralConstraint Nmrc_FixedResonance_FindFirstDihedralConstraint_keyval2(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmrc_DihedralConstraint  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_FixedResonance_FindFirstDihedralConstraint(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedResonance.dihedralConstraints

Dihedral angle 
constraints involving FixedResonance.
  @param  Nmrc_FixedResonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmrc_DihedralConstraint Nmrc_FixedResonance_FindFirstDihedralConstraint_keyval3(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmrc_DihedralConstraint  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_FixedResonance_FindFirstDihedralConstraint(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedResonance.dihedralConstraints

Dihedral angle 
constraints involving FixedResonance.
  @param  Nmrc_FixedResonance self
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
Nmrc_DihedralConstraint Nmrc_FixedResonance_FindFirstDihedralConstraint_keyval4(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmrc_DihedralConstraint  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_FixedResonance_FindFirstDihedralConstraint(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedResonance.pairwiseConstraintItems

PairWiseConstraintItems 
that involve FixedResonance
  @param  Nmrc_FixedResonance self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmrc_PairwiseConstraintItem Nmrc_FixedResonance_FindFirstPairwiseConstraintItem(Nmrc_FixedResonance self, ApiMap conditions)
{
  
  Nmrc_PairwiseConstraintItem obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstPairwiseConstraintItem");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: cannot find method 'findFirstPairwiseConstraintItem'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: method 'findFirstPairwiseConstraintItem' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedResonance.pairwiseConstraintItems

PairWiseConstraintItems 
that involve FixedResonance
  @param  Nmrc_FixedResonance self
  @returns  the first value that satisfies the conditions 
**/
Nmrc_PairwiseConstraintItem Nmrc_FixedResonance_FindFirstPairwiseConstraintItem_keyval0(Nmrc_FixedResonance self)
{
  
  Nmrc_PairwiseConstraintItem  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_FixedResonance_FindFirstPairwiseConstraintItem(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedResonance.pairwiseConstraintItems

PairWiseConstraintItems 
that involve FixedResonance
  @param  Nmrc_FixedResonance self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmrc_PairwiseConstraintItem Nmrc_FixedResonance_FindFirstPairwiseConstraintItem_keyval1(Nmrc_FixedResonance self, char * key, ApiObject value)
{
  
  Nmrc_PairwiseConstraintItem  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_FixedResonance_FindFirstPairwiseConstraintItem(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedResonance.pairwiseConstraintItems

PairWiseConstraintItems 
that involve FixedResonance
  @param  Nmrc_FixedResonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmrc_PairwiseConstraintItem Nmrc_FixedResonance_FindFirstPairwiseConstraintItem_keyval2(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmrc_PairwiseConstraintItem  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_FixedResonance_FindFirstPairwiseConstraintItem(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedResonance.pairwiseConstraintItems

PairWiseConstraintItems 
that involve FixedResonance
  @param  Nmrc_FixedResonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmrc_PairwiseConstraintItem Nmrc_FixedResonance_FindFirstPairwiseConstraintItem_keyval3(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmrc_PairwiseConstraintItem  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_FixedResonance_FindFirstPairwiseConstraintItem(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedResonance.pairwiseConstraintItems

PairWiseConstraintItems 
that involve FixedResonance
  @param  Nmrc_FixedResonance self
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
Nmrc_PairwiseConstraintItem Nmrc_FixedResonance_FindFirstPairwiseConstraintItem_keyval4(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmrc_PairwiseConstraintItem  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_FixedResonance_FindFirstPairwiseConstraintItem(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrConstraint.FixedResonance.resCoords

Coordinate 
records (ResCoords) from resonance-only structures relevant for 
FixedResonance
  @param  Nmrc_FixedResonance self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmrc_ResCoord Nmrc_FixedResonance_FindFirstResCoord(Nmrc_FixedResonance self, ApiMap conditions)
{
  
  Nmrc_ResCoord obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstResCoord");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: cannot find method 'findFirstResCoord'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: method 'findFirstResCoord' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrConstraint.FixedResonance.resCoords

Coordinate 
records (ResCoords) from resonance-only structures relevant for 
FixedResonance
  @param  Nmrc_FixedResonance self
  @returns  the first value that satisfies the conditions 
**/
Nmrc_ResCoord Nmrc_FixedResonance_FindFirstResCoord_keyval0(Nmrc_FixedResonance self)
{
  
  Nmrc_ResCoord  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrc_FixedResonance_FindFirstResCoord(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrConstraint.FixedResonance.resCoords

Coordinate 
records (ResCoords) from resonance-only structures relevant for 
FixedResonance
  @param  Nmrc_FixedResonance self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmrc_ResCoord Nmrc_FixedResonance_FindFirstResCoord_keyval1(Nmrc_FixedResonance self, char * key, ApiObject value)
{
  
  Nmrc_ResCoord  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrc_FixedResonance_FindFirstResCoord(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrConstraint.FixedResonance.resCoords

Coordinate 
records (ResCoords) from resonance-only structures relevant for 
FixedResonance
  @param  Nmrc_FixedResonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmrc_ResCoord Nmrc_FixedResonance_FindFirstResCoord_keyval2(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmrc_ResCoord  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrc_FixedResonance_FindFirstResCoord(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrConstraint.FixedResonance.resCoords

Coordinate 
records (ResCoords) from resonance-only structures relevant for 
FixedResonance
  @param  Nmrc_FixedResonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmrc_ResCoord Nmrc_FixedResonance_FindFirstResCoord_keyval3(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmrc_ResCoord  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrc_FixedResonance_FindFirstResCoord(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrConstraint.FixedResonance.resCoords

Coordinate 
records (ResCoords) from resonance-only structures relevant for 
FixedResonance
  @param  Nmrc_FixedResonance self
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
Nmrc_ResCoord Nmrc_FixedResonance_FindFirstResCoord_keyval4(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmrc_ResCoord  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrc_FixedResonance_FindFirstResCoord(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.nmr.NmrConstraint.FixedResonance
  @param  Nmrc_FixedResonance self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Nmrc_FixedResonance_Get(Nmrc_FixedResonance self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrc_FixedResonance self
  @returns   the result
**/
Acco_AccessObject Nmrc_FixedResonance_GetAccess(Nmrc_FixedResonance self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: method 'getAccess' is not callable");
  
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
  @param  Nmrc_FixedResonance self
  @returns   the result
**/
ApiList Nmrc_FixedResonance_GetApplicationData(Nmrc_FixedResonance self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.NmrConstraint.FixedResonance
  @param  Nmrc_FixedResonance self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nmrc_FixedResonance Nmrc_FixedResonance_GetByKey(Nmrc_FixedResonance self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Nmrc_FixedResonance obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: method 'getByKey' is not callable");
  
  args = PyTuple_Pack(2, startObj, fullKey);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrConstraint.FixedResonance.chainStateLinks

child link 
to class ChainStateLink
  @param  Nmrc_FixedResonance self
  @returns   the result
**/
ApiSet Nmrc_FixedResonance_GetChainStateLinks(Nmrc_FixedResonance self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChainStateLinks");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: cannot find method 'getChainStateLinks'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: method 'getChainStateLinks' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.nmr.NmrConstraint.FixedResonance.chemShiftConstraints

Chemical 
shift constraints involving FIxedResonance
  @param  Nmrc_FixedResonance self
  @returns   the result
**/
ApiSet Nmrc_FixedResonance_GetChemShiftConstraints(Nmrc_FixedResonance self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemShiftConstraints");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: cannot find method 'getChemShiftConstraints'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: method 'getChemShiftConstraints' is not callable");
  
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
  @param  Nmrc_FixedResonance self
  @returns   the result
**/
ApiString Nmrc_FixedResonance_GetClassName(Nmrc_FixedResonance self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrConstraint.FixedResonance.csaConstraints
  @param  Nmrc_FixedResonance self
  @returns   the result
**/
ApiSet Nmrc_FixedResonance_GetCsaConstraints(Nmrc_FixedResonance self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCsaConstraints");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: cannot find method 'getCsaConstraints'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: method 'getCsaConstraints' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrConstraint.FixedResonance.details

Free text, for 
notes, explanatory comments, etc.
  @param  Nmrc_FixedResonance self
  @returns   the result
**/
ApiString Nmrc_FixedResonance_GetDetails(Nmrc_FixedResonance self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: method 'getDetails' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.nmr.NmrConstraint.FixedResonance.dihedralConstraints

Dihedral angle 
constraints involving FixedResonance.
  @param  Nmrc_FixedResonance self
  @returns   the result
**/
ApiSet Nmrc_FixedResonance_GetDihedralConstraints(Nmrc_FixedResonance self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDihedralConstraints");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: cannot find method 'getDihedralConstraints'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: method 'getDihedralConstraints' is not callable");
  
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
  @param  Nmrc_FixedResonance self
  @returns   the result
**/
ApiList Nmrc_FixedResonance_GetFieldNames(Nmrc_FixedResonance self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.nmr.NmrConstraint.FixedResonance
  @param  Nmrc_FixedResonance self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Nmrc_FixedResonance_GetFullKey(Nmrc_FixedResonance self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: method 'getFullKey' is not callable");
  
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
  @param  Nmrc_FixedResonance self
  @returns   the result
**/
ApiBoolean Nmrc_FixedResonance_GetInConstructor(Nmrc_FixedResonance self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: method 'getInConstructor' is not callable");
  
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
  @param  Nmrc_FixedResonance self
  @returns   the result
**/
ApiBoolean Nmrc_FixedResonance_GetIsDeleted(Nmrc_FixedResonance self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived link Isotope
  @param  Nmrc_FixedResonance self
  @returns   the result
**/
Chel_Isotope Nmrc_FixedResonance_GetIsotope(Nmrc_FixedResonance self)
{
  
  Chel_Isotope obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsotope");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: cannot find method 'getIsotope'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: method 'getIsotope' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrConstraint.FixedResonance.isotopeCode

Isotope code 
of corresponding isotope. E.g. 1H, 2H, 3He, 13C, ..
  @param  Nmrc_FixedResonance self
  @returns   the result
**/
ApiString Nmrc_FixedResonance_GetIsotopeCode(Nmrc_FixedResonance self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsotopeCode");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: cannot find method 'getIsotopeCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: method 'getIsotopeCode' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.nmr.NmrConstraint.FixedResonance
  @param  Nmrc_FixedResonance self
  @returns  Local object key
**/
ApiObject Nmrc_FixedResonance_GetLocalKey(Nmrc_FixedResonance self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrConstraint.FixedResonance.name

Name of Resonance
  @param  Nmrc_FixedResonance self
  @returns   the result
**/
ApiString Nmrc_FixedResonance_GetName(Nmrc_FixedResonance self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: method 'getName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrConstraint.FixedResonance.nmrConstraintStore

parent 
link
  @param  Nmrc_FixedResonance self
  @returns   the result
**/
Nmrc_NmrConstraintStore Nmrc_FixedResonance_GetNmrConstraintStore(Nmrc_FixedResonance self)
{
  
  Nmrc_NmrConstraintStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrConstraintStore");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: cannot find method 'getNmrConstraintStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: method 'getNmrConstraintStore' is not callable");
  
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
  @param  Nmrc_FixedResonance self
  @returns   the result
**/
ApiString Nmrc_FixedResonance_GetPackageName(Nmrc_FixedResonance self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: method 'getPackageName' is not callable");
  
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
  @param  Nmrc_FixedResonance self
  @returns   the result
**/
ApiString Nmrc_FixedResonance_GetPackageShortName(Nmrc_FixedResonance self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.nmr.NmrConstraint.FixedResonance.pairwiseConstraintItems

PairWiseConstraintItems 
that involve FixedResonance
  @param  Nmrc_FixedResonance self
  @returns   the result
**/
ApiSet Nmrc_FixedResonance_GetPairwiseConstraintItems(Nmrc_FixedResonance self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPairwiseConstraintItems");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: cannot find method 'getPairwiseConstraintItems'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: method 'getPairwiseConstraintItems' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrConstraint.FixedResonance.parent

link to parent 
object - synonym for nmrConstraintStore
  @param  Nmrc_FixedResonance self
  @returns   the result
**/
Nmrc_NmrConstraintStore Nmrc_FixedResonance_GetParent(Nmrc_FixedResonance self)
{
  
  Nmrc_NmrConstraintStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: method 'getParent' is not callable");
  
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
  @param  Nmrc_FixedResonance self
  @returns   the result
**/
ApiString Nmrc_FixedResonance_GetQualifiedName(Nmrc_FixedResonance self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrConstraint.FixedResonance.resCoords

Coordinate 
records (ResCoords) from resonance-only structures relevant for 
FixedResonance
  @param  Nmrc_FixedResonance self
  @returns   the result
**/
ApiSet Nmrc_FixedResonance_GetResCoords(Nmrc_FixedResonance self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getResCoords");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: cannot find method 'getResCoords'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: method 'getResCoords' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived link resonance
  @param  Nmrc_FixedResonance self
  @returns   the result
**/
Nmr_Resonance Nmrc_FixedResonance_GetResonance(Nmrc_FixedResonance self)
{
  
  Nmr_Resonance obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getResonance");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: cannot find method 'getResonance'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: method 'getResonance' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrConstraint.FixedResonance.resonanceSerial

Serial of 
corresponding Nmr.Resonance
  @param  Nmrc_FixedResonance self
  @returns   the result
**/
ApiInteger Nmrc_FixedResonance_GetResonanceSerial(Nmrc_FixedResonance self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getResonanceSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: cannot find method 'getResonanceSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: method 'getResonanceSerial' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.nmr.NmrConstraint.FixedResonance.resonanceSet

FixedResonanceSet 
(part of assignment for Constraint Lists) involving Resonance.
  @param  Nmrc_FixedResonance self
  @returns   the result
**/
Nmrc_FixedResonanceSet Nmrc_FixedResonance_GetResonanceSet(Nmrc_FixedResonance self)
{
  
  Nmrc_FixedResonanceSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getResonanceSet");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: cannot find method 'getResonanceSet'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: method 'getResonanceSet' is not callable");
  
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
  @param  Nmrc_FixedResonance self
  @returns   the result
**/
Impl_MemopsRoot Nmrc_FixedResonance_GetRoot(Nmrc_FixedResonance self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrConstraint.FixedResonance.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmrc_FixedResonance self
  @returns   the result
**/
ApiInteger Nmrc_FixedResonance_GetSerial(Nmrc_FixedResonance self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: method 'getSerial' is not callable");
  
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
  @param  Nmrc_FixedResonance self
  @returns   the result
**/
Impl_TopObject Nmrc_FixedResonance_GetTopObject(Nmrc_FixedResonance self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.nmr.NmrConstraint.FixedResonance
  @param  Nmrc_NmrConstraintStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmrc_FixedResonance Nmrc_FixedResonance_Init(Nmrc_NmrConstraintStore parent, ApiMap attrlinks)
{
  
  return Nmrc_NmrConstraintStore_NewFixedResonance(parent, attrlinks);
}

/**
  Constructor for ccp.nmr.NmrConstraint.FixedResonance
  @param  Nmrc_NmrConstraintStore parent
  @param  char * isotopeCode
  @returns  the new object
**/
Nmrc_FixedResonance Nmrc_FixedResonance_Init_reqd(Nmrc_NmrConstraintStore parent, char * isotopeCode)
{
  
  Nmrc_FixedResonance  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__isotopeCode = ApiString_New(isotopeCode);

  PyDict_SetItemString(attrlinks, "isotopeCode", api__isotopeCode);
  
  obj = Nmrc_FixedResonance_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__isotopeCode);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrConstraint.ChainStateLink
  @param  Nmrc_FixedResonance self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmrc_ChainStateLink Nmrc_FixedResonance_NewChainStateLink(Nmrc_FixedResonance self, ApiMap attrlinks)
{
  
  Nmrc_ChainStateLink obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newChainStateLink");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: cannot find method 'newChainStateLink'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: method 'newChainStateLink' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrConstraint.ChainStateLink
  @param  Nmrc_FixedResonance self
  @param  ApiInteger chainStateSerial
  @param  ApiInteger chainStateSetSerial
  @returns  the new object
**/
Nmrc_ChainStateLink Nmrc_FixedResonance_NewChainStateLink_reqd(Nmrc_FixedResonance self, ApiInteger chainStateSerial, ApiInteger chainStateSetSerial)
{
  
  Nmrc_ChainStateLink  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "chainStateSerial", chainStateSerial);
  PyDict_SetItemString(attrlinks, "chainStateSetSerial", chainStateSetSerial);
  
  obj = Nmrc_FixedResonance_NewChainStateLink(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_FixedResonance self
  @param  Impl_ApplicationData value
**/
void *Nmrc_FixedResonance_RemoveApplicationData(Nmrc_FixedResonance self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.nmr.NmrConstraint.FixedResonance
  @param  Nmrc_FixedResonance self
  @param  ApiString name
  @param  ApiObject value
**/
void *Nmrc_FixedResonance_Set(Nmrc_FixedResonance self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrc_FixedResonance self
  @param  Acco_AccessObject value
**/
void *Nmrc_FixedResonance_SetAccess(Nmrc_FixedResonance self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: method 'setAccess' is not callable");
  
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
  @param  Nmrc_FixedResonance self
  @param  ApiList values
**/
void *Nmrc_FixedResonance_SetApplicationData(Nmrc_FixedResonance self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.nmr.NmrConstraint.FixedResonance.chemShiftConstraints

Chemical 
shift constraints involving FIxedResonance
  @param  Nmrc_FixedResonance self
  @param  ApiSet values
**/
void *Nmrc_FixedResonance_SetChemShiftConstraints(Nmrc_FixedResonance self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setChemShiftConstraints");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: cannot find method 'setChemShiftConstraints'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: method 'setChemShiftConstraints' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrConstraint.FixedResonance.csaConstraints
  @param  Nmrc_FixedResonance self
  @param  ApiSet values
**/
void *Nmrc_FixedResonance_SetCsaConstraints(Nmrc_FixedResonance self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCsaConstraints");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: cannot find method 'setCsaConstraints'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: method 'setCsaConstraints' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrConstraint.FixedResonance.details

Free text, for 
notes, explanatory comments, etc.
  @param  Nmrc_FixedResonance self
  @param  ApiString value
**/
void *Nmrc_FixedResonance_SetDetails(Nmrc_FixedResonance self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.nmr.NmrConstraint.FixedResonance.dihedralConstraints

Dihedral angle 
constraints involving FixedResonance.
  @param  Nmrc_FixedResonance self
  @param  ApiSet values
**/
void *Nmrc_FixedResonance_SetDihedralConstraints(Nmrc_FixedResonance self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDihedralConstraints");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: cannot find method 'setDihedralConstraints'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: method 'setDihedralConstraints' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrConstraint.FixedResonance.isotopeCode

Isotope code 
of corresponding isotope. E.g. 1H, 2H, 3He, 13C, ..
  @param  Nmrc_FixedResonance self
  @param  ApiString value
**/
void *Nmrc_FixedResonance_SetIsotopeCode(Nmrc_FixedResonance self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsotopeCode");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: cannot find method 'setIsotopeCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: method 'setIsotopeCode' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrConstraint.FixedResonance.name

Name of Resonance
  @param  Nmrc_FixedResonance self
  @param  ApiString value
**/
void *Nmrc_FixedResonance_SetName(Nmrc_FixedResonance self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.nmr.NmrConstraint.FixedResonance.pairwiseConstraintItems

PairWiseConstraintItems 
that involve FixedResonance
  @param  Nmrc_FixedResonance self
  @param  ApiSet values
**/
void *Nmrc_FixedResonance_SetPairwiseConstraintItems(Nmrc_FixedResonance self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPairwiseConstraintItems");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: cannot find method 'setPairwiseConstraintItems'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: method 'setPairwiseConstraintItems' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrConstraint.FixedResonance.resCoords

Coordinate 
records (ResCoords) from resonance-only structures relevant for 
FixedResonance
  @param  Nmrc_FixedResonance self
  @param  ApiSet values
**/
void *Nmrc_FixedResonance_SetResCoords(Nmrc_FixedResonance self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setResCoords");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: cannot find method 'setResCoords'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: method 'setResCoords' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrConstraint.FixedResonance.resonanceSerial

Serial of 
corresponding Nmr.Resonance
  @param  Nmrc_FixedResonance self
  @param  ApiInteger value
**/
void *Nmrc_FixedResonance_SetResonanceSerial(Nmrc_FixedResonance self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setResonanceSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: cannot find method 'setResonanceSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: method 'setResonanceSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.nmr.NmrConstraint.FixedResonance.resonanceSet

FixedResonanceSet 
(part of assignment for Constraint Lists) involving Resonance.
  @param  Nmrc_FixedResonance self
  @param  Nmrc_FixedResonanceSet value
**/
void *Nmrc_FixedResonance_SetResonanceSet(Nmrc_FixedResonance self, Nmrc_FixedResonanceSet value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setResonanceSet");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: cannot find method 'setResonanceSet'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: method 'setResonanceSet' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrConstraint.FixedResonance.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmrc_FixedResonance self
  @param  ApiInteger value
**/
void *Nmrc_FixedResonance_SetSerial(Nmrc_FixedResonance self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.NmrConstraint.FixedResonance.chainStateLinks

child 
link to class ChainStateLink
  @param  Nmrc_FixedResonance self
  @returns   the result
**/
ApiList Nmrc_FixedResonance_SortedChainStateLinks(Nmrc_FixedResonance self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChainStateLinks");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: cannot find method 'sortedChainStateLinks'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: method 'sortedChainStateLinks' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.nmr.NmrConstraint.FixedResonance.chemShiftConstraints

Chemical 
shift constraints involving FIxedResonance
  @param  Nmrc_FixedResonance self
  @returns   the result
**/
ApiList Nmrc_FixedResonance_SortedChemShiftConstraints(Nmrc_FixedResonance self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChemShiftConstraints");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: cannot find method 'sortedChemShiftConstraints'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: method 'sortedChemShiftConstraints' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.NmrConstraint.FixedResonance.csaConstraints
  @param  Nmrc_FixedResonance self
  @returns   the result
**/
ApiList Nmrc_FixedResonance_SortedCsaConstraints(Nmrc_FixedResonance self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedCsaConstraints");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: cannot find method 'sortedCsaConstraints'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: method 'sortedCsaConstraints' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.nmr.NmrConstraint.FixedResonance.dihedralConstraints

Dihedral angle 
constraints involving FixedResonance.
  @param  Nmrc_FixedResonance self
  @returns   the result
**/
ApiList Nmrc_FixedResonance_SortedDihedralConstraints(Nmrc_FixedResonance self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedDihedralConstraints");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: cannot find method 'sortedDihedralConstraints'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: method 'sortedDihedralConstraints' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.nmr.NmrConstraint.FixedResonance.pairwiseConstraintItems

PairWiseConstraintItems 
that involve FixedResonance
  @param  Nmrc_FixedResonance self
  @returns   the result
**/
ApiList Nmrc_FixedResonance_SortedPairwiseConstraintItems(Nmrc_FixedResonance self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedPairwiseConstraintItems");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: cannot find method 'sortedPairwiseConstraintItems'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: method 'sortedPairwiseConstraintItems' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.NmrConstraint.FixedResonance.resCoords

Coordinate 
records (ResCoords) from resonance-only structures relevant for 
FixedResonance
  @param  Nmrc_FixedResonance self
  @returns   the result
**/
ApiList Nmrc_FixedResonance_SortedResCoords(Nmrc_FixedResonance self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedResCoords");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: cannot find method 'sortedResCoords'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrConstraint.FixedResonance: method 'sortedResCoords' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
