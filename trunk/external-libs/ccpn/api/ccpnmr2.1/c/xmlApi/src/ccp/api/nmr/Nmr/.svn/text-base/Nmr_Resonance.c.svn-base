
#include "ccp.h"

/*
  A connection record for assignment. 'Stands for' a single Atom or group of atoms in fast exchange. 
  
  The Resonance holds a central place in the Nmr package, as almost all assignment, of Chemical shifts, Atoms, Constraints, Peaks etc. is done through the intermediary of a Resonance. This allows the relationship between Shifts, Peaks, Constraints, (...) to be described precisely without first assigning the Nmr spectrum, provides a simple mechanism for handling prochiral groups, and in general permits greater flexibility.
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Resonance self
  @param  Impl_ApplicationData value
**/
void *Nmr_Resonance_AddApplicationData(Nmr_Resonance self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.Nmr.Resonance.assignNames

Names of AtomSets to which 
Resonance should or could be assigned. Must be in the CCPN (=IUPAC) 
nomenclature. Allows you to fix assignments when you know only the 
residue type (e.g. Leu) not the residue number. Examples (all for Leu): 
('HG'), ('CA'), non-stereospecific ('HB2','HB3') or ('HD1*','HD2*'), 
stereospecific ('HB2') or ('HD1*'), mixed ('HB2','HB3','HG').
  @param  Nmr_Resonance self
  @param  ApiString value
**/
void *Nmr_Resonance_AddAssignName(Nmr_Resonance self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addAssignName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'addAssignName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'addAssignName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.Nmr.Resonance.chainStates

ChainState in which this 
Resonance can be found
  @param  Nmr_Resonance self
  @param  Nmr_ChainState value
**/
void *Nmr_Resonance_AddChainState(Nmr_Resonance self, Nmr_ChainState value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addChainState");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'addChainState'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'addChainState' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.Nmr.Resonance.covalentlyBound

Resonances on both ends 
stand for atoms that are covalently linked.
  @param  Nmr_Resonance self
  @param  Nmr_Resonance value
**/
void *Nmr_Resonance_AddCovalentlyBound(Nmr_Resonance self, Nmr_Resonance value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addCovalentlyBound");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'addCovalentlyBound'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'addCovalentlyBound' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.Nmr.Resonance.datums

Measurements of non-predefined 
type relevant for Resonance
  @param  Nmr_Resonance self
  @param  Nmr_Datum value
**/
void *Nmr_Resonance_AddDatum(Nmr_Resonance self, Nmr_Datum value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addDatum");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'addDatum'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'addDatum' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.nmr.Nmr.Resonance
  @param  Nmr_Resonance self
  @param  ApiBoolean complete
**/
void *Nmr_Resonance_CheckAllValid(Nmr_Resonance self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.nmr.Nmr.Resonance
  @param  Nmr_Resonance self
  @param  ApiBoolean complete
**/
void *Nmr_Resonance_CheckValid(Nmr_Resonance self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'checkValid' is not callable");
  
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
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_Resonance_FindAllApplicationData(Nmr_Resonance self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'findAllApplicationData' is not callable");
  
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
  @param  Nmr_Resonance self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_Resonance_FindAllApplicationData_keyval0(Nmr_Resonance self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Resonance_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_Resonance_FindAllApplicationData_keyval1(Nmr_Resonance self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Resonance_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_Resonance_FindAllApplicationData_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Resonance_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_Resonance_FindAllApplicationData_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Resonance_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Resonance self
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
ApiList Nmr_Resonance_FindAllApplicationData_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Resonance_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.chainStates

ChainState in which this 
Resonance can be found
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllChainStates(Nmr_Resonance self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChainStates");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'findAllChainStates'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'findAllChainStates' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.chainStates

ChainState in which this 
Resonance can be found
  @param  Nmr_Resonance self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllChainStates_keyval0(Nmr_Resonance self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Resonance_FindAllChainStates(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.chainStates

ChainState in which this 
Resonance can be found
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllChainStates_keyval1(Nmr_Resonance self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Resonance_FindAllChainStates(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.chainStates

ChainState in which this 
Resonance can be found
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllChainStates_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Resonance_FindAllChainStates(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.chainStates

ChainState in which this 
Resonance can be found
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllChainStates_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Resonance_FindAllChainStates(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.chainStates

ChainState in which this 
Resonance can be found
  @param  Nmr_Resonance self
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
ApiSet Nmr_Resonance_FindAllChainStates_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Resonance_FindAllChainStates(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.covalentlyBound

Resonances on both 
ends stand for atoms that are covalently linked.
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllCovalentlyBound(Nmr_Resonance self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllCovalentlyBound");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'findAllCovalentlyBound'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'findAllCovalentlyBound' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.covalentlyBound

Resonances on both 
ends stand for atoms that are covalently linked.
  @param  Nmr_Resonance self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllCovalentlyBound_keyval0(Nmr_Resonance self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Resonance_FindAllCovalentlyBound(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.covalentlyBound

Resonances on both 
ends stand for atoms that are covalently linked.
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllCovalentlyBound_keyval1(Nmr_Resonance self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Resonance_FindAllCovalentlyBound(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.covalentlyBound

Resonances on both 
ends stand for atoms that are covalently linked.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllCovalentlyBound_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Resonance_FindAllCovalentlyBound(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.covalentlyBound

Resonances on both 
ends stand for atoms that are covalently linked.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllCovalentlyBound_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Resonance_FindAllCovalentlyBound(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.covalentlyBound

Resonances on both 
ends stand for atoms that are covalently linked.
  @param  Nmr_Resonance self
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
ApiSet Nmr_Resonance_FindAllCovalentlyBound_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Resonance_FindAllCovalentlyBound(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.datums

Measurements of non-predefined 
type relevant for Resonance
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllDatums(Nmr_Resonance self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllDatums");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'findAllDatums'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'findAllDatums' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.datums

Measurements of non-predefined 
type relevant for Resonance
  @param  Nmr_Resonance self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllDatums_keyval0(Nmr_Resonance self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Resonance_FindAllDatums(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.datums

Measurements of non-predefined 
type relevant for Resonance
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllDatums_keyval1(Nmr_Resonance self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Resonance_FindAllDatums(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.datums

Measurements of non-predefined 
type relevant for Resonance
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllDatums_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Resonance_FindAllDatums(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.datums

Measurements of non-predefined 
type relevant for Resonance
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllDatums_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Resonance_FindAllDatums(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.datums

Measurements of non-predefined 
type relevant for Resonance
  @param  Nmr_Resonance self
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
ApiSet Nmr_Resonance_FindAllDatums_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Resonance_FindAllDatums(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.dipolarRelaxations

Dipole-dipole 
relaxation measurements involving resonance.
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllDipolarRelaxations(Nmr_Resonance self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllDipolarRelaxations");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'findAllDipolarRelaxations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'findAllDipolarRelaxations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.dipolarRelaxations

Dipole-dipole 
relaxation measurements involving resonance.
  @param  Nmr_Resonance self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllDipolarRelaxations_keyval0(Nmr_Resonance self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Resonance_FindAllDipolarRelaxations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.dipolarRelaxations

Dipole-dipole 
relaxation measurements involving resonance.
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllDipolarRelaxations_keyval1(Nmr_Resonance self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Resonance_FindAllDipolarRelaxations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.dipolarRelaxations

Dipole-dipole 
relaxation measurements involving resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllDipolarRelaxations_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Resonance_FindAllDipolarRelaxations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.dipolarRelaxations

Dipole-dipole 
relaxation measurements involving resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllDipolarRelaxations_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Resonance_FindAllDipolarRelaxations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.dipolarRelaxations

Dipole-dipole 
relaxation measurements involving resonance.
  @param  Nmr_Resonance self
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
ApiSet Nmr_Resonance_FindAllDipolarRelaxations_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Resonance_FindAllDipolarRelaxations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.hExchProtections

Hydrogen exchange 
rate protection factor measurements for resonance.
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllHExchProtections(Nmr_Resonance self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllHExchProtections");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'findAllHExchProtections'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'findAllHExchProtections' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.hExchProtections

Hydrogen exchange 
rate protection factor measurements for resonance.
  @param  Nmr_Resonance self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllHExchProtections_keyval0(Nmr_Resonance self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Resonance_FindAllHExchProtections(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.hExchProtections

Hydrogen exchange 
rate protection factor measurements for resonance.
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllHExchProtections_keyval1(Nmr_Resonance self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Resonance_FindAllHExchProtections(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.hExchProtections

Hydrogen exchange 
rate protection factor measurements for resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllHExchProtections_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Resonance_FindAllHExchProtections(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.hExchProtections

Hydrogen exchange 
rate protection factor measurements for resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllHExchProtections_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Resonance_FindAllHExchProtections(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.hExchProtections

Hydrogen exchange 
rate protection factor measurements for resonance.
  @param  Nmr_Resonance self
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
ApiSet Nmr_Resonance_FindAllHExchProtections_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Resonance_FindAllHExchProtections(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.hExchRates

Hydrogen exchange rate 
measurements for resonance.
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllHExchRates(Nmr_Resonance self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllHExchRates");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'findAllHExchRates'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'findAllHExchRates' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.hExchRates

Hydrogen exchange rate 
measurements for resonance.
  @param  Nmr_Resonance self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllHExchRates_keyval0(Nmr_Resonance self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Resonance_FindAllHExchRates(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.hExchRates

Hydrogen exchange rate 
measurements for resonance.
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllHExchRates_keyval1(Nmr_Resonance self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Resonance_FindAllHExchRates(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.hExchRates

Hydrogen exchange rate 
measurements for resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllHExchRates_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Resonance_FindAllHExchRates(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.hExchRates

Hydrogen exchange rate 
measurements for resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllHExchRates_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Resonance_FindAllHExchRates(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.hExchRates

Hydrogen exchange rate 
measurements for resonance.
  @param  Nmr_Resonance self
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
ApiSet Nmr_Resonance_FindAllHExchRates_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Resonance_FindAllHExchRates(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.isotropicS2s

Isotropic order 
parameter values that apply to reonance.
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllIsotropicS2s(Nmr_Resonance self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllIsotropicS2s");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'findAllIsotropicS2s'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'findAllIsotropicS2s' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.isotropicS2s

Isotropic order 
parameter values that apply to reonance.
  @param  Nmr_Resonance self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllIsotropicS2s_keyval0(Nmr_Resonance self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Resonance_FindAllIsotropicS2s(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.isotropicS2s

Isotropic order 
parameter values that apply to reonance.
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllIsotropicS2s_keyval1(Nmr_Resonance self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Resonance_FindAllIsotropicS2s(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.isotropicS2s

Isotropic order 
parameter values that apply to reonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllIsotropicS2s_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Resonance_FindAllIsotropicS2s(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.isotropicS2s

Isotropic order 
parameter values that apply to reonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllIsotropicS2s_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Resonance_FindAllIsotropicS2s(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.isotropicS2s

Isotropic order 
parameter values that apply to reonance.
  @param  Nmr_Resonance self
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
ApiSet Nmr_Resonance_FindAllIsotropicS2s_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Resonance_FindAllIsotropicS2s(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.jCouplings

J coupling measurements 
for resonance
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllJCouplings(Nmr_Resonance self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllJCouplings");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'findAllJCouplings'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'findAllJCouplings' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.jCouplings

J coupling measurements 
for resonance
  @param  Nmr_Resonance self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllJCouplings_keyval0(Nmr_Resonance self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Resonance_FindAllJCouplings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.jCouplings

J coupling measurements 
for resonance
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllJCouplings_keyval1(Nmr_Resonance self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Resonance_FindAllJCouplings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.jCouplings

J coupling measurements 
for resonance
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllJCouplings_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Resonance_FindAllJCouplings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.jCouplings

J coupling measurements 
for resonance
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllJCouplings_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Resonance_FindAllJCouplings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.jCouplings

J coupling measurements 
for resonance
  @param  Nmr_Resonance self
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
ApiSet Nmr_Resonance_FindAllJCouplings_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Resonance_FindAllJCouplings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.noes

Homonuclear NOEs in which 
Resonance is involved
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllNoes(Nmr_Resonance self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllNoes");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'findAllNoes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'findAllNoes' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.noes

Homonuclear NOEs in which 
Resonance is involved
  @param  Nmr_Resonance self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllNoes_keyval0(Nmr_Resonance self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Resonance_FindAllNoes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.noes

Homonuclear NOEs in which 
Resonance is involved
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllNoes_keyval1(Nmr_Resonance self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Resonance_FindAllNoes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.noes

Homonuclear NOEs in which 
Resonance is involved
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllNoes_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Resonance_FindAllNoes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.noes

Homonuclear NOEs in which 
Resonance is involved
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllNoes_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Resonance_FindAllNoes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.noes

Homonuclear NOEs in which 
Resonance is involved
  @param  Nmr_Resonance self
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
ApiSet Nmr_Resonance_FindAllNoes_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Resonance_FindAllNoes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.peakDimContribNs

PeakDimContribNs 
assigned to Resonance
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllPeakDimContribNs(Nmr_Resonance self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllPeakDimContribNs");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'findAllPeakDimContribNs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'findAllPeakDimContribNs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.peakDimContribNs

PeakDimContribNs 
assigned to Resonance
  @param  Nmr_Resonance self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllPeakDimContribNs_keyval0(Nmr_Resonance self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Resonance_FindAllPeakDimContribNs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.peakDimContribNs

PeakDimContribNs 
assigned to Resonance
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllPeakDimContribNs_keyval1(Nmr_Resonance self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Resonance_FindAllPeakDimContribNs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.peakDimContribNs

PeakDimContribNs 
assigned to Resonance
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllPeakDimContribNs_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Resonance_FindAllPeakDimContribNs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.peakDimContribNs

PeakDimContribNs 
assigned to Resonance
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllPeakDimContribNs_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Resonance_FindAllPeakDimContribNs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.peakDimContribNs

PeakDimContribNs 
assigned to Resonance
  @param  Nmr_Resonance self
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
ApiSet Nmr_Resonance_FindAllPeakDimContribNs_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Resonance_FindAllPeakDimContribNs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.peakDimContribs

PeakDimContribs 
assigned to Resonance
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllPeakDimContribs(Nmr_Resonance self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllPeakDimContribs");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'findAllPeakDimContribs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'findAllPeakDimContribs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.peakDimContribs

PeakDimContribs 
assigned to Resonance
  @param  Nmr_Resonance self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllPeakDimContribs_keyval0(Nmr_Resonance self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Resonance_FindAllPeakDimContribs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.peakDimContribs

PeakDimContribs 
assigned to Resonance
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllPeakDimContribs_keyval1(Nmr_Resonance self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Resonance_FindAllPeakDimContribs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.peakDimContribs

PeakDimContribs 
assigned to Resonance
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllPeakDimContribs_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Resonance_FindAllPeakDimContribs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.peakDimContribs

PeakDimContribs 
assigned to Resonance
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllPeakDimContribs_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Resonance_FindAllPeakDimContribs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.peakDimContribs

PeakDimContribs 
assigned to Resonance
  @param  Nmr_Resonance self
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
ApiSet Nmr_Resonance_FindAllPeakDimContribs_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Resonance_FindAllPeakDimContribs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.pkas

pKa values associated with 
Resonance
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllPkas(Nmr_Resonance self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllPkas");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'findAllPkas'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'findAllPkas' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.pkas

pKa values associated with 
Resonance
  @param  Nmr_Resonance self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllPkas_keyval0(Nmr_Resonance self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Resonance_FindAllPkas(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.pkas

pKa values associated with 
Resonance
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllPkas_keyval1(Nmr_Resonance self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Resonance_FindAllPkas(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.pkas

pKa values associated with 
Resonance
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllPkas_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Resonance_FindAllPkas(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.pkas

pKa values associated with 
Resonance
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllPkas_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Resonance_FindAllPkas(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.pkas

pKa values associated with 
Resonance
  @param  Nmr_Resonance self
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
ApiSet Nmr_Resonance_FindAllPkas_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Resonance_FindAllPkas(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.rdcs

Reduced dipolar coupling 
measurements involving resonance.
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllRdcs(Nmr_Resonance self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllRdcs");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'findAllRdcs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'findAllRdcs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.rdcs

Reduced dipolar coupling 
measurements involving resonance.
  @param  Nmr_Resonance self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllRdcs_keyval0(Nmr_Resonance self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Resonance_FindAllRdcs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.rdcs

Reduced dipolar coupling 
measurements involving resonance.
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllRdcs_keyval1(Nmr_Resonance self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Resonance_FindAllRdcs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.rdcs

Reduced dipolar coupling 
measurements involving resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllRdcs_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Resonance_FindAllRdcs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.rdcs

Reduced dipolar coupling 
measurements involving resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllRdcs_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Resonance_FindAllRdcs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.rdcs

Reduced dipolar coupling 
measurements involving resonance.
  @param  Nmr_Resonance self
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
ApiSet Nmr_Resonance_FindAllRdcs_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Resonance_FindAllRdcs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.resonanceProbs

ResonanceProbs 
connecting to ResonanceGroups to which this Resonace probably belongs.
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllResonanceProbs(Nmr_Resonance self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllResonanceProbs");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'findAllResonanceProbs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'findAllResonanceProbs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.resonanceProbs

ResonanceProbs 
connecting to ResonanceGroups to which this Resonace probably belongs.
  @param  Nmr_Resonance self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllResonanceProbs_keyval0(Nmr_Resonance self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Resonance_FindAllResonanceProbs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.resonanceProbs

ResonanceProbs 
connecting to ResonanceGroups to which this Resonace probably belongs.
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllResonanceProbs_keyval1(Nmr_Resonance self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Resonance_FindAllResonanceProbs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.resonanceProbs

ResonanceProbs 
connecting to ResonanceGroups to which this Resonace probably belongs.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllResonanceProbs_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Resonance_FindAllResonanceProbs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.resonanceProbs

ResonanceProbs 
connecting to ResonanceGroups to which this Resonace probably belongs.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllResonanceProbs_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Resonance_FindAllResonanceProbs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.resonanceProbs

ResonanceProbs 
connecting to ResonanceGroups to which this Resonace probably belongs.
  @param  Nmr_Resonance self
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
ApiSet Nmr_Resonance_FindAllResonanceProbs_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Resonance_FindAllResonanceProbs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.shiftAnisotropies

Chemical shift 
anisotropies for resonance.
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllShiftAnisotropies(Nmr_Resonance self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllShiftAnisotropies");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'findAllShiftAnisotropies'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'findAllShiftAnisotropies' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.shiftAnisotropies

Chemical shift 
anisotropies for resonance.
  @param  Nmr_Resonance self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllShiftAnisotropies_keyval0(Nmr_Resonance self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Resonance_FindAllShiftAnisotropies(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.shiftAnisotropies

Chemical shift 
anisotropies for resonance.
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllShiftAnisotropies_keyval1(Nmr_Resonance self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Resonance_FindAllShiftAnisotropies(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.shiftAnisotropies

Chemical shift 
anisotropies for resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllShiftAnisotropies_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Resonance_FindAllShiftAnisotropies(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.shiftAnisotropies

Chemical shift 
anisotropies for resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllShiftAnisotropies_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Resonance_FindAllShiftAnisotropies(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.shiftAnisotropies

Chemical shift 
anisotropies for resonance.
  @param  Nmr_Resonance self
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
ApiSet Nmr_Resonance_FindAllShiftAnisotropies_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Resonance_FindAllShiftAnisotropies(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.shiftDifferences

Chemical SHift 
Differences for resonance.
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllShiftDifferences(Nmr_Resonance self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllShiftDifferences");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'findAllShiftDifferences'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'findAllShiftDifferences' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.shiftDifferences

Chemical SHift 
Differences for resonance.
  @param  Nmr_Resonance self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllShiftDifferences_keyval0(Nmr_Resonance self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Resonance_FindAllShiftDifferences(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.shiftDifferences

Chemical SHift 
Differences for resonance.
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllShiftDifferences_keyval1(Nmr_Resonance self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Resonance_FindAllShiftDifferences(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.shiftDifferences

Chemical SHift 
Differences for resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllShiftDifferences_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Resonance_FindAllShiftDifferences(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.shiftDifferences

Chemical SHift 
Differences for resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllShiftDifferences_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Resonance_FindAllShiftDifferences(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.shiftDifferences

Chemical SHift 
Differences for resonance.
  @param  Nmr_Resonance self
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
ApiSet Nmr_Resonance_FindAllShiftDifferences_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Resonance_FindAllShiftDifferences(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.shifts

Chemical shifts for resonance
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllShifts(Nmr_Resonance self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllShifts");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'findAllShifts'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'findAllShifts' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.shifts

Chemical shifts for resonance
  @param  Nmr_Resonance self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllShifts_keyval0(Nmr_Resonance self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Resonance_FindAllShifts(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.shifts

Chemical shifts for resonance
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllShifts_keyval1(Nmr_Resonance self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Resonance_FindAllShifts(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.shifts

Chemical shifts for resonance
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllShifts_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Resonance_FindAllShifts(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.shifts

Chemical shifts for resonance
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllShifts_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Resonance_FindAllShifts(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.shifts

Chemical shifts for resonance
  @param  Nmr_Resonance self
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
ApiSet Nmr_Resonance_FindAllShifts_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Resonance_FindAllShifts(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.spectralDensities

Spectral density 
measurements relevant to Resonance.
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllSpectralDensities(Nmr_Resonance self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllSpectralDensities");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'findAllSpectralDensities'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'findAllSpectralDensities' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.spectralDensities

Spectral density 
measurements relevant to Resonance.
  @param  Nmr_Resonance self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllSpectralDensities_keyval0(Nmr_Resonance self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Resonance_FindAllSpectralDensities(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.spectralDensities

Spectral density 
measurements relevant to Resonance.
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllSpectralDensities_keyval1(Nmr_Resonance self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Resonance_FindAllSpectralDensities(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.spectralDensities

Spectral density 
measurements relevant to Resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllSpectralDensities_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Resonance_FindAllSpectralDensities(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.spectralDensities

Spectral density 
measurements relevant to Resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllSpectralDensities_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Resonance_FindAllSpectralDensities(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.spectralDensities

Spectral density 
measurements relevant to Resonance.
  @param  Nmr_Resonance self
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
ApiSet Nmr_Resonance_FindAllSpectralDensities_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Resonance_FindAllSpectralDensities(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.t1Rhos

T1 rho measurements for 
resonance
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllT1Rhos(Nmr_Resonance self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllT1Rhos");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'findAllT1Rhos'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'findAllT1Rhos' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.t1Rhos

T1 rho measurements for 
resonance
  @param  Nmr_Resonance self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllT1Rhos_keyval0(Nmr_Resonance self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Resonance_FindAllT1Rhos(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.t1Rhos

T1 rho measurements for 
resonance
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllT1Rhos_keyval1(Nmr_Resonance self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Resonance_FindAllT1Rhos(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.t1Rhos

T1 rho measurements for 
resonance
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllT1Rhos_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Resonance_FindAllT1Rhos(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.t1Rhos

T1 rho measurements for 
resonance
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllT1Rhos_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Resonance_FindAllT1Rhos(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.t1Rhos

T1 rho measurements for 
resonance
  @param  Nmr_Resonance self
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
ApiSet Nmr_Resonance_FindAllT1Rhos_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Resonance_FindAllT1Rhos(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.t1s

T1 relaxation values for 
resonance.
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllT1s(Nmr_Resonance self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllT1s");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'findAllT1s'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'findAllT1s' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.t1s

T1 relaxation values for 
resonance.
  @param  Nmr_Resonance self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllT1s_keyval0(Nmr_Resonance self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Resonance_FindAllT1s(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.t1s

T1 relaxation values for 
resonance.
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllT1s_keyval1(Nmr_Resonance self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Resonance_FindAllT1s(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.t1s

T1 relaxation values for 
resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllT1s_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Resonance_FindAllT1s(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.t1s

T1 relaxation values for 
resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllT1s_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Resonance_FindAllT1s(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.t1s

T1 relaxation values for 
resonance.
  @param  Nmr_Resonance self
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
ApiSet Nmr_Resonance_FindAllT1s_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Resonance_FindAllT1s(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.t2s

T2 relaxation measurements for 
resonance.
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllT2s(Nmr_Resonance self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllT2s");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'findAllT2s'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'findAllT2s' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.t2s

T2 relaxation measurements for 
resonance.
  @param  Nmr_Resonance self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllT2s_keyval0(Nmr_Resonance self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Resonance_FindAllT2s(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.t2s

T2 relaxation measurements for 
resonance.
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllT2s_keyval1(Nmr_Resonance self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Resonance_FindAllT2s(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.t2s

T2 relaxation measurements for 
resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllT2s_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Resonance_FindAllT2s(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.t2s

T2 relaxation measurements for 
resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Resonance_FindAllT2s_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Resonance_FindAllT2s(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Resonance.t2s

T2 relaxation measurements for 
resonance.
  @param  Nmr_Resonance self
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
ApiSet Nmr_Resonance_FindAllT2s_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Resonance_FindAllT2s(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_Resonance_FindFirstApplicationData(Nmr_Resonance self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nmr_Resonance self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_Resonance_FindFirstApplicationData_keyval0(Nmr_Resonance self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Resonance_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_Resonance_FindFirstApplicationData_keyval1(Nmr_Resonance self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Resonance_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_Resonance_FindFirstApplicationData_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Resonance_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_Resonance_FindFirstApplicationData_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Resonance_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Resonance self
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
Impl_ApplicationData Nmr_Resonance_FindFirstApplicationData_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Resonance_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.chainStates

ChainState in which 
this Resonance can be found
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_ChainState Nmr_Resonance_FindFirstChainState(Nmr_Resonance self, ApiMap conditions)
{
  
  Nmr_ChainState obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChainState");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'findFirstChainState'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'findFirstChainState' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.chainStates

ChainState in which 
this Resonance can be found
  @param  Nmr_Resonance self
  @returns  the first value that satisfies the conditions 
**/
Nmr_ChainState Nmr_Resonance_FindFirstChainState_keyval0(Nmr_Resonance self)
{
  
  Nmr_ChainState  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Resonance_FindFirstChainState(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.chainStates

ChainState in which 
this Resonance can be found
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_ChainState Nmr_Resonance_FindFirstChainState_keyval1(Nmr_Resonance self, char * key, ApiObject value)
{
  
  Nmr_ChainState  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Resonance_FindFirstChainState(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.chainStates

ChainState in which 
this Resonance can be found
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_ChainState Nmr_Resonance_FindFirstChainState_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_ChainState  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Resonance_FindFirstChainState(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.chainStates

ChainState in which 
this Resonance can be found
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_ChainState Nmr_Resonance_FindFirstChainState_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_ChainState  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Resonance_FindFirstChainState(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.chainStates

ChainState in which 
this Resonance can be found
  @param  Nmr_Resonance self
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
Nmr_ChainState Nmr_Resonance_FindFirstChainState_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_ChainState  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Resonance_FindFirstChainState(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.covalentlyBound

Resonances on both 
ends stand for atoms that are covalently linked.
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_Resonance Nmr_Resonance_FindFirstCovalentlyBound(Nmr_Resonance self, ApiMap conditions)
{
  
  Nmr_Resonance obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstCovalentlyBound");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'findFirstCovalentlyBound'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'findFirstCovalentlyBound' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.covalentlyBound

Resonances on both 
ends stand for atoms that are covalently linked.
  @param  Nmr_Resonance self
  @returns  the first value that satisfies the conditions 
**/
Nmr_Resonance Nmr_Resonance_FindFirstCovalentlyBound_keyval0(Nmr_Resonance self)
{
  
  Nmr_Resonance  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Resonance_FindFirstCovalentlyBound(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.covalentlyBound

Resonances on both 
ends stand for atoms that are covalently linked.
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_Resonance Nmr_Resonance_FindFirstCovalentlyBound_keyval1(Nmr_Resonance self, char * key, ApiObject value)
{
  
  Nmr_Resonance  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Resonance_FindFirstCovalentlyBound(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.covalentlyBound

Resonances on both 
ends stand for atoms that are covalently linked.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_Resonance Nmr_Resonance_FindFirstCovalentlyBound_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_Resonance  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Resonance_FindFirstCovalentlyBound(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.covalentlyBound

Resonances on both 
ends stand for atoms that are covalently linked.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_Resonance Nmr_Resonance_FindFirstCovalentlyBound_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_Resonance  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Resonance_FindFirstCovalentlyBound(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.covalentlyBound

Resonances on both 
ends stand for atoms that are covalently linked.
  @param  Nmr_Resonance self
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
Nmr_Resonance Nmr_Resonance_FindFirstCovalentlyBound_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_Resonance  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Resonance_FindFirstCovalentlyBound(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.datums

Measurements of 
non-predefined type relevant for Resonance
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_Datum Nmr_Resonance_FindFirstDatum(Nmr_Resonance self, ApiMap conditions)
{
  
  Nmr_Datum obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstDatum");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'findFirstDatum'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'findFirstDatum' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.datums

Measurements of 
non-predefined type relevant for Resonance
  @param  Nmr_Resonance self
  @returns  the first value that satisfies the conditions 
**/
Nmr_Datum Nmr_Resonance_FindFirstDatum_keyval0(Nmr_Resonance self)
{
  
  Nmr_Datum  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Resonance_FindFirstDatum(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.datums

Measurements of 
non-predefined type relevant for Resonance
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_Datum Nmr_Resonance_FindFirstDatum_keyval1(Nmr_Resonance self, char * key, ApiObject value)
{
  
  Nmr_Datum  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Resonance_FindFirstDatum(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.datums

Measurements of 
non-predefined type relevant for Resonance
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_Datum Nmr_Resonance_FindFirstDatum_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_Datum  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Resonance_FindFirstDatum(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.datums

Measurements of 
non-predefined type relevant for Resonance
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_Datum Nmr_Resonance_FindFirstDatum_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_Datum  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Resonance_FindFirstDatum(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.datums

Measurements of 
non-predefined type relevant for Resonance
  @param  Nmr_Resonance self
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
Nmr_Datum Nmr_Resonance_FindFirstDatum_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_Datum  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Resonance_FindFirstDatum(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.dipolarRelaxations

Dipole-dipole 
relaxation measurements involving resonance.
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_DipolarRelaxation Nmr_Resonance_FindFirstDipolarRelaxation(Nmr_Resonance self, ApiMap conditions)
{
  
  Nmr_DipolarRelaxation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstDipolarRelaxation");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'findFirstDipolarRelaxation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'findFirstDipolarRelaxation' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.dipolarRelaxations

Dipole-dipole 
relaxation measurements involving resonance.
  @param  Nmr_Resonance self
  @returns  the first value that satisfies the conditions 
**/
Nmr_DipolarRelaxation Nmr_Resonance_FindFirstDipolarRelaxation_keyval0(Nmr_Resonance self)
{
  
  Nmr_DipolarRelaxation  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Resonance_FindFirstDipolarRelaxation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.dipolarRelaxations

Dipole-dipole 
relaxation measurements involving resonance.
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_DipolarRelaxation Nmr_Resonance_FindFirstDipolarRelaxation_keyval1(Nmr_Resonance self, char * key, ApiObject value)
{
  
  Nmr_DipolarRelaxation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Resonance_FindFirstDipolarRelaxation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.dipolarRelaxations

Dipole-dipole 
relaxation measurements involving resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_DipolarRelaxation Nmr_Resonance_FindFirstDipolarRelaxation_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_DipolarRelaxation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Resonance_FindFirstDipolarRelaxation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.dipolarRelaxations

Dipole-dipole 
relaxation measurements involving resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_DipolarRelaxation Nmr_Resonance_FindFirstDipolarRelaxation_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_DipolarRelaxation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Resonance_FindFirstDipolarRelaxation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.dipolarRelaxations

Dipole-dipole 
relaxation measurements involving resonance.
  @param  Nmr_Resonance self
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
Nmr_DipolarRelaxation Nmr_Resonance_FindFirstDipolarRelaxation_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_DipolarRelaxation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Resonance_FindFirstDipolarRelaxation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.hExchProtections

Hydrogen exchange 
rate protection factor measurements for resonance.
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_HExchProtection Nmr_Resonance_FindFirstHExchProtection(Nmr_Resonance self, ApiMap conditions)
{
  
  Nmr_HExchProtection obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstHExchProtection");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'findFirstHExchProtection'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'findFirstHExchProtection' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.hExchProtections

Hydrogen exchange 
rate protection factor measurements for resonance.
  @param  Nmr_Resonance self
  @returns  the first value that satisfies the conditions 
**/
Nmr_HExchProtection Nmr_Resonance_FindFirstHExchProtection_keyval0(Nmr_Resonance self)
{
  
  Nmr_HExchProtection  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Resonance_FindFirstHExchProtection(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.hExchProtections

Hydrogen exchange 
rate protection factor measurements for resonance.
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_HExchProtection Nmr_Resonance_FindFirstHExchProtection_keyval1(Nmr_Resonance self, char * key, ApiObject value)
{
  
  Nmr_HExchProtection  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Resonance_FindFirstHExchProtection(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.hExchProtections

Hydrogen exchange 
rate protection factor measurements for resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_HExchProtection Nmr_Resonance_FindFirstHExchProtection_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_HExchProtection  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Resonance_FindFirstHExchProtection(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.hExchProtections

Hydrogen exchange 
rate protection factor measurements for resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_HExchProtection Nmr_Resonance_FindFirstHExchProtection_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_HExchProtection  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Resonance_FindFirstHExchProtection(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.hExchProtections

Hydrogen exchange 
rate protection factor measurements for resonance.
  @param  Nmr_Resonance self
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
Nmr_HExchProtection Nmr_Resonance_FindFirstHExchProtection_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_HExchProtection  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Resonance_FindFirstHExchProtection(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.hExchRates

Hydrogen exchange rate 
measurements for resonance.
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_HExchRate Nmr_Resonance_FindFirstHExchRate(Nmr_Resonance self, ApiMap conditions)
{
  
  Nmr_HExchRate obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstHExchRate");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'findFirstHExchRate'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'findFirstHExchRate' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.hExchRates

Hydrogen exchange rate 
measurements for resonance.
  @param  Nmr_Resonance self
  @returns  the first value that satisfies the conditions 
**/
Nmr_HExchRate Nmr_Resonance_FindFirstHExchRate_keyval0(Nmr_Resonance self)
{
  
  Nmr_HExchRate  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Resonance_FindFirstHExchRate(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.hExchRates

Hydrogen exchange rate 
measurements for resonance.
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_HExchRate Nmr_Resonance_FindFirstHExchRate_keyval1(Nmr_Resonance self, char * key, ApiObject value)
{
  
  Nmr_HExchRate  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Resonance_FindFirstHExchRate(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.hExchRates

Hydrogen exchange rate 
measurements for resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_HExchRate Nmr_Resonance_FindFirstHExchRate_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_HExchRate  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Resonance_FindFirstHExchRate(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.hExchRates

Hydrogen exchange rate 
measurements for resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_HExchRate Nmr_Resonance_FindFirstHExchRate_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_HExchRate  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Resonance_FindFirstHExchRate(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.hExchRates

Hydrogen exchange rate 
measurements for resonance.
  @param  Nmr_Resonance self
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
Nmr_HExchRate Nmr_Resonance_FindFirstHExchRate_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_HExchRate  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Resonance_FindFirstHExchRate(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.isotropicS2s

Isotropic order 
parameter values that apply to reonance.
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_IsotropicS2 Nmr_Resonance_FindFirstIsotropicS2(Nmr_Resonance self, ApiMap conditions)
{
  
  Nmr_IsotropicS2 obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstIsotropicS2");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'findFirstIsotropicS2'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'findFirstIsotropicS2' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.isotropicS2s

Isotropic order 
parameter values that apply to reonance.
  @param  Nmr_Resonance self
  @returns  the first value that satisfies the conditions 
**/
Nmr_IsotropicS2 Nmr_Resonance_FindFirstIsotropicS2_keyval0(Nmr_Resonance self)
{
  
  Nmr_IsotropicS2  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Resonance_FindFirstIsotropicS2(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.isotropicS2s

Isotropic order 
parameter values that apply to reonance.
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_IsotropicS2 Nmr_Resonance_FindFirstIsotropicS2_keyval1(Nmr_Resonance self, char * key, ApiObject value)
{
  
  Nmr_IsotropicS2  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Resonance_FindFirstIsotropicS2(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.isotropicS2s

Isotropic order 
parameter values that apply to reonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_IsotropicS2 Nmr_Resonance_FindFirstIsotropicS2_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_IsotropicS2  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Resonance_FindFirstIsotropicS2(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.isotropicS2s

Isotropic order 
parameter values that apply to reonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_IsotropicS2 Nmr_Resonance_FindFirstIsotropicS2_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_IsotropicS2  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Resonance_FindFirstIsotropicS2(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.isotropicS2s

Isotropic order 
parameter values that apply to reonance.
  @param  Nmr_Resonance self
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
Nmr_IsotropicS2 Nmr_Resonance_FindFirstIsotropicS2_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_IsotropicS2  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Resonance_FindFirstIsotropicS2(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.jCouplings

J coupling measurements 
for resonance
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_JCoupling Nmr_Resonance_FindFirstJCoupling(Nmr_Resonance self, ApiMap conditions)
{
  
  Nmr_JCoupling obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstJCoupling");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'findFirstJCoupling'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'findFirstJCoupling' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.jCouplings

J coupling measurements 
for resonance
  @param  Nmr_Resonance self
  @returns  the first value that satisfies the conditions 
**/
Nmr_JCoupling Nmr_Resonance_FindFirstJCoupling_keyval0(Nmr_Resonance self)
{
  
  Nmr_JCoupling  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Resonance_FindFirstJCoupling(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.jCouplings

J coupling measurements 
for resonance
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_JCoupling Nmr_Resonance_FindFirstJCoupling_keyval1(Nmr_Resonance self, char * key, ApiObject value)
{
  
  Nmr_JCoupling  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Resonance_FindFirstJCoupling(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.jCouplings

J coupling measurements 
for resonance
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_JCoupling Nmr_Resonance_FindFirstJCoupling_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_JCoupling  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Resonance_FindFirstJCoupling(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.jCouplings

J coupling measurements 
for resonance
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_JCoupling Nmr_Resonance_FindFirstJCoupling_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_JCoupling  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Resonance_FindFirstJCoupling(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.jCouplings

J coupling measurements 
for resonance
  @param  Nmr_Resonance self
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
Nmr_JCoupling Nmr_Resonance_FindFirstJCoupling_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_JCoupling  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Resonance_FindFirstJCoupling(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.noes

Homonuclear NOEs in which 
Resonance is involved
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_Noe Nmr_Resonance_FindFirstNoe(Nmr_Resonance self, ApiMap conditions)
{
  
  Nmr_Noe obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstNoe");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'findFirstNoe'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'findFirstNoe' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.noes

Homonuclear NOEs in which 
Resonance is involved
  @param  Nmr_Resonance self
  @returns  the first value that satisfies the conditions 
**/
Nmr_Noe Nmr_Resonance_FindFirstNoe_keyval0(Nmr_Resonance self)
{
  
  Nmr_Noe  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Resonance_FindFirstNoe(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.noes

Homonuclear NOEs in which 
Resonance is involved
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_Noe Nmr_Resonance_FindFirstNoe_keyval1(Nmr_Resonance self, char * key, ApiObject value)
{
  
  Nmr_Noe  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Resonance_FindFirstNoe(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.noes

Homonuclear NOEs in which 
Resonance is involved
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_Noe Nmr_Resonance_FindFirstNoe_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_Noe  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Resonance_FindFirstNoe(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.noes

Homonuclear NOEs in which 
Resonance is involved
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_Noe Nmr_Resonance_FindFirstNoe_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_Noe  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Resonance_FindFirstNoe(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.noes

Homonuclear NOEs in which 
Resonance is involved
  @param  Nmr_Resonance self
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
Nmr_Noe Nmr_Resonance_FindFirstNoe_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_Noe  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Resonance_FindFirstNoe(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.peakDimContribs

PeakDimContribs 
assigned to Resonance
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakDimContrib Nmr_Resonance_FindFirstPeakDimContrib(Nmr_Resonance self, ApiMap conditions)
{
  
  Nmr_PeakDimContrib obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstPeakDimContrib");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'findFirstPeakDimContrib'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'findFirstPeakDimContrib' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.peakDimContribNs

PeakDimContribNs 
assigned to Resonance
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakDimContribN Nmr_Resonance_FindFirstPeakDimContribN(Nmr_Resonance self, ApiMap conditions)
{
  
  Nmr_PeakDimContribN obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstPeakDimContribN");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'findFirstPeakDimContribN'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'findFirstPeakDimContribN' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.peakDimContribNs

PeakDimContribNs 
assigned to Resonance
  @param  Nmr_Resonance self
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakDimContribN Nmr_Resonance_FindFirstPeakDimContribN_keyval0(Nmr_Resonance self)
{
  
  Nmr_PeakDimContribN  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Resonance_FindFirstPeakDimContribN(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.peakDimContribNs

PeakDimContribNs 
assigned to Resonance
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakDimContribN Nmr_Resonance_FindFirstPeakDimContribN_keyval1(Nmr_Resonance self, char * key, ApiObject value)
{
  
  Nmr_PeakDimContribN  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Resonance_FindFirstPeakDimContribN(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.peakDimContribNs

PeakDimContribNs 
assigned to Resonance
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakDimContribN Nmr_Resonance_FindFirstPeakDimContribN_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_PeakDimContribN  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Resonance_FindFirstPeakDimContribN(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.peakDimContribNs

PeakDimContribNs 
assigned to Resonance
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakDimContribN Nmr_Resonance_FindFirstPeakDimContribN_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_PeakDimContribN  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Resonance_FindFirstPeakDimContribN(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.peakDimContribNs

PeakDimContribNs 
assigned to Resonance
  @param  Nmr_Resonance self
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
Nmr_PeakDimContribN Nmr_Resonance_FindFirstPeakDimContribN_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_PeakDimContribN  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Resonance_FindFirstPeakDimContribN(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.peakDimContribs

PeakDimContribs 
assigned to Resonance
  @param  Nmr_Resonance self
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakDimContrib Nmr_Resonance_FindFirstPeakDimContrib_keyval0(Nmr_Resonance self)
{
  
  Nmr_PeakDimContrib  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Resonance_FindFirstPeakDimContrib(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.peakDimContribs

PeakDimContribs 
assigned to Resonance
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakDimContrib Nmr_Resonance_FindFirstPeakDimContrib_keyval1(Nmr_Resonance self, char * key, ApiObject value)
{
  
  Nmr_PeakDimContrib  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Resonance_FindFirstPeakDimContrib(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.peakDimContribs

PeakDimContribs 
assigned to Resonance
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakDimContrib Nmr_Resonance_FindFirstPeakDimContrib_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_PeakDimContrib  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Resonance_FindFirstPeakDimContrib(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.peakDimContribs

PeakDimContribs 
assigned to Resonance
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakDimContrib Nmr_Resonance_FindFirstPeakDimContrib_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_PeakDimContrib  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Resonance_FindFirstPeakDimContrib(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.peakDimContribs

PeakDimContribs 
assigned to Resonance
  @param  Nmr_Resonance self
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
Nmr_PeakDimContrib Nmr_Resonance_FindFirstPeakDimContrib_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_PeakDimContrib  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Resonance_FindFirstPeakDimContrib(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.pkas

pKa values associated with 
Resonance
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_Pka Nmr_Resonance_FindFirstPka(Nmr_Resonance self, ApiMap conditions)
{
  
  Nmr_Pka obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstPka");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'findFirstPka'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'findFirstPka' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.pkas

pKa values associated with 
Resonance
  @param  Nmr_Resonance self
  @returns  the first value that satisfies the conditions 
**/
Nmr_Pka Nmr_Resonance_FindFirstPka_keyval0(Nmr_Resonance self)
{
  
  Nmr_Pka  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Resonance_FindFirstPka(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.pkas

pKa values associated with 
Resonance
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_Pka Nmr_Resonance_FindFirstPka_keyval1(Nmr_Resonance self, char * key, ApiObject value)
{
  
  Nmr_Pka  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Resonance_FindFirstPka(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.pkas

pKa values associated with 
Resonance
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_Pka Nmr_Resonance_FindFirstPka_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_Pka  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Resonance_FindFirstPka(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.pkas

pKa values associated with 
Resonance
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_Pka Nmr_Resonance_FindFirstPka_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_Pka  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Resonance_FindFirstPka(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.pkas

pKa values associated with 
Resonance
  @param  Nmr_Resonance self
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
Nmr_Pka Nmr_Resonance_FindFirstPka_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_Pka  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Resonance_FindFirstPka(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.rdcs

Reduced dipolar coupling 
measurements involving resonance.
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_Rdc Nmr_Resonance_FindFirstRdc(Nmr_Resonance self, ApiMap conditions)
{
  
  Nmr_Rdc obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstRdc");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'findFirstRdc'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'findFirstRdc' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.rdcs

Reduced dipolar coupling 
measurements involving resonance.
  @param  Nmr_Resonance self
  @returns  the first value that satisfies the conditions 
**/
Nmr_Rdc Nmr_Resonance_FindFirstRdc_keyval0(Nmr_Resonance self)
{
  
  Nmr_Rdc  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Resonance_FindFirstRdc(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.rdcs

Reduced dipolar coupling 
measurements involving resonance.
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_Rdc Nmr_Resonance_FindFirstRdc_keyval1(Nmr_Resonance self, char * key, ApiObject value)
{
  
  Nmr_Rdc  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Resonance_FindFirstRdc(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.rdcs

Reduced dipolar coupling 
measurements involving resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_Rdc Nmr_Resonance_FindFirstRdc_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_Rdc  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Resonance_FindFirstRdc(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.rdcs

Reduced dipolar coupling 
measurements involving resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_Rdc Nmr_Resonance_FindFirstRdc_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_Rdc  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Resonance_FindFirstRdc(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.rdcs

Reduced dipolar coupling 
measurements involving resonance.
  @param  Nmr_Resonance self
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
Nmr_Rdc Nmr_Resonance_FindFirstRdc_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_Rdc  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Resonance_FindFirstRdc(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.resonanceProbs

ResonanceProbs 
connecting to ResonanceGroups to which this Resonace probably belongs.
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResonanceProb Nmr_Resonance_FindFirstResonanceProb(Nmr_Resonance self, ApiMap conditions)
{
  
  Nmr_ResonanceProb obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstResonanceProb");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'findFirstResonanceProb'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'findFirstResonanceProb' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.resonanceProbs

ResonanceProbs 
connecting to ResonanceGroups to which this Resonace probably belongs.
  @param  Nmr_Resonance self
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResonanceProb Nmr_Resonance_FindFirstResonanceProb_keyval0(Nmr_Resonance self)
{
  
  Nmr_ResonanceProb  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Resonance_FindFirstResonanceProb(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.resonanceProbs

ResonanceProbs 
connecting to ResonanceGroups to which this Resonace probably belongs.
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResonanceProb Nmr_Resonance_FindFirstResonanceProb_keyval1(Nmr_Resonance self, char * key, ApiObject value)
{
  
  Nmr_ResonanceProb  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Resonance_FindFirstResonanceProb(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.resonanceProbs

ResonanceProbs 
connecting to ResonanceGroups to which this Resonace probably belongs.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResonanceProb Nmr_Resonance_FindFirstResonanceProb_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_ResonanceProb  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Resonance_FindFirstResonanceProb(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.resonanceProbs

ResonanceProbs 
connecting to ResonanceGroups to which this Resonace probably belongs.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResonanceProb Nmr_Resonance_FindFirstResonanceProb_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_ResonanceProb  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Resonance_FindFirstResonanceProb(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.resonanceProbs

ResonanceProbs 
connecting to ResonanceGroups to which this Resonace probably belongs.
  @param  Nmr_Resonance self
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
Nmr_ResonanceProb Nmr_Resonance_FindFirstResonanceProb_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_ResonanceProb  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Resonance_FindFirstResonanceProb(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.shifts

Chemical shifts for 
resonance
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_Shift Nmr_Resonance_FindFirstShift(Nmr_Resonance self, ApiMap conditions)
{
  
  Nmr_Shift obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstShift");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'findFirstShift'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'findFirstShift' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.shiftAnisotropies

Chemical shift 
anisotropies for resonance.
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_ShiftAnisotropy Nmr_Resonance_FindFirstShiftAnisotropy(Nmr_Resonance self, ApiMap conditions)
{
  
  Nmr_ShiftAnisotropy obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstShiftAnisotropy");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'findFirstShiftAnisotropy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'findFirstShiftAnisotropy' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.shiftAnisotropies

Chemical shift 
anisotropies for resonance.
  @param  Nmr_Resonance self
  @returns  the first value that satisfies the conditions 
**/
Nmr_ShiftAnisotropy Nmr_Resonance_FindFirstShiftAnisotropy_keyval0(Nmr_Resonance self)
{
  
  Nmr_ShiftAnisotropy  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Resonance_FindFirstShiftAnisotropy(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.shiftAnisotropies

Chemical shift 
anisotropies for resonance.
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_ShiftAnisotropy Nmr_Resonance_FindFirstShiftAnisotropy_keyval1(Nmr_Resonance self, char * key, ApiObject value)
{
  
  Nmr_ShiftAnisotropy  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Resonance_FindFirstShiftAnisotropy(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.shiftAnisotropies

Chemical shift 
anisotropies for resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_ShiftAnisotropy Nmr_Resonance_FindFirstShiftAnisotropy_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_ShiftAnisotropy  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Resonance_FindFirstShiftAnisotropy(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.shiftAnisotropies

Chemical shift 
anisotropies for resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_ShiftAnisotropy Nmr_Resonance_FindFirstShiftAnisotropy_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_ShiftAnisotropy  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Resonance_FindFirstShiftAnisotropy(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.shiftAnisotropies

Chemical shift 
anisotropies for resonance.
  @param  Nmr_Resonance self
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
Nmr_ShiftAnisotropy Nmr_Resonance_FindFirstShiftAnisotropy_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_ShiftAnisotropy  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Resonance_FindFirstShiftAnisotropy(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.shiftDifferences

Chemical SHift 
Differences for resonance.
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_ShiftDifference Nmr_Resonance_FindFirstShiftDifference(Nmr_Resonance self, ApiMap conditions)
{
  
  Nmr_ShiftDifference obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstShiftDifference");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'findFirstShiftDifference'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'findFirstShiftDifference' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.shiftDifferences

Chemical SHift 
Differences for resonance.
  @param  Nmr_Resonance self
  @returns  the first value that satisfies the conditions 
**/
Nmr_ShiftDifference Nmr_Resonance_FindFirstShiftDifference_keyval0(Nmr_Resonance self)
{
  
  Nmr_ShiftDifference  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Resonance_FindFirstShiftDifference(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.shiftDifferences

Chemical SHift 
Differences for resonance.
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_ShiftDifference Nmr_Resonance_FindFirstShiftDifference_keyval1(Nmr_Resonance self, char * key, ApiObject value)
{
  
  Nmr_ShiftDifference  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Resonance_FindFirstShiftDifference(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.shiftDifferences

Chemical SHift 
Differences for resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_ShiftDifference Nmr_Resonance_FindFirstShiftDifference_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_ShiftDifference  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Resonance_FindFirstShiftDifference(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.shiftDifferences

Chemical SHift 
Differences for resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_ShiftDifference Nmr_Resonance_FindFirstShiftDifference_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_ShiftDifference  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Resonance_FindFirstShiftDifference(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.shiftDifferences

Chemical SHift 
Differences for resonance.
  @param  Nmr_Resonance self
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
Nmr_ShiftDifference Nmr_Resonance_FindFirstShiftDifference_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_ShiftDifference  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Resonance_FindFirstShiftDifference(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.shifts

Chemical shifts for 
resonance
  @param  Nmr_Resonance self
  @returns  the first value that satisfies the conditions 
**/
Nmr_Shift Nmr_Resonance_FindFirstShift_keyval0(Nmr_Resonance self)
{
  
  Nmr_Shift  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Resonance_FindFirstShift(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.shifts

Chemical shifts for 
resonance
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_Shift Nmr_Resonance_FindFirstShift_keyval1(Nmr_Resonance self, char * key, ApiObject value)
{
  
  Nmr_Shift  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Resonance_FindFirstShift(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.shifts

Chemical shifts for 
resonance
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_Shift Nmr_Resonance_FindFirstShift_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_Shift  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Resonance_FindFirstShift(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.shifts

Chemical shifts for 
resonance
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_Shift Nmr_Resonance_FindFirstShift_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_Shift  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Resonance_FindFirstShift(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.shifts

Chemical shifts for 
resonance
  @param  Nmr_Resonance self
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
Nmr_Shift Nmr_Resonance_FindFirstShift_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_Shift  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Resonance_FindFirstShift(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.spectralDensities

Spectral density 
measurements relevant to Resonance.
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_SpectralDensity Nmr_Resonance_FindFirstSpectralDensity(Nmr_Resonance self, ApiMap conditions)
{
  
  Nmr_SpectralDensity obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstSpectralDensity");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'findFirstSpectralDensity'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'findFirstSpectralDensity' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.spectralDensities

Spectral density 
measurements relevant to Resonance.
  @param  Nmr_Resonance self
  @returns  the first value that satisfies the conditions 
**/
Nmr_SpectralDensity Nmr_Resonance_FindFirstSpectralDensity_keyval0(Nmr_Resonance self)
{
  
  Nmr_SpectralDensity  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Resonance_FindFirstSpectralDensity(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.spectralDensities

Spectral density 
measurements relevant to Resonance.
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_SpectralDensity Nmr_Resonance_FindFirstSpectralDensity_keyval1(Nmr_Resonance self, char * key, ApiObject value)
{
  
  Nmr_SpectralDensity  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Resonance_FindFirstSpectralDensity(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.spectralDensities

Spectral density 
measurements relevant to Resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_SpectralDensity Nmr_Resonance_FindFirstSpectralDensity_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_SpectralDensity  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Resonance_FindFirstSpectralDensity(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.spectralDensities

Spectral density 
measurements relevant to Resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_SpectralDensity Nmr_Resonance_FindFirstSpectralDensity_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_SpectralDensity  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Resonance_FindFirstSpectralDensity(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.spectralDensities

Spectral density 
measurements relevant to Resonance.
  @param  Nmr_Resonance self
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
Nmr_SpectralDensity Nmr_Resonance_FindFirstSpectralDensity_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_SpectralDensity  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Resonance_FindFirstSpectralDensity(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.t1s

T1 relaxation values for 
resonance.
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_T1 Nmr_Resonance_FindFirstT1(Nmr_Resonance self, ApiMap conditions)
{
  
  Nmr_T1 obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstT1");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'findFirstT1'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'findFirstT1' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.t1Rhos

T1 rho measurements for 
resonance
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_T1Rho Nmr_Resonance_FindFirstT1Rho(Nmr_Resonance self, ApiMap conditions)
{
  
  Nmr_T1Rho obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstT1Rho");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'findFirstT1Rho'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'findFirstT1Rho' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.t1Rhos

T1 rho measurements for 
resonance
  @param  Nmr_Resonance self
  @returns  the first value that satisfies the conditions 
**/
Nmr_T1Rho Nmr_Resonance_FindFirstT1Rho_keyval0(Nmr_Resonance self)
{
  
  Nmr_T1Rho  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Resonance_FindFirstT1Rho(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.t1Rhos

T1 rho measurements for 
resonance
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_T1Rho Nmr_Resonance_FindFirstT1Rho_keyval1(Nmr_Resonance self, char * key, ApiObject value)
{
  
  Nmr_T1Rho  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Resonance_FindFirstT1Rho(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.t1Rhos

T1 rho measurements for 
resonance
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_T1Rho Nmr_Resonance_FindFirstT1Rho_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_T1Rho  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Resonance_FindFirstT1Rho(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.t1Rhos

T1 rho measurements for 
resonance
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_T1Rho Nmr_Resonance_FindFirstT1Rho_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_T1Rho  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Resonance_FindFirstT1Rho(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.t1Rhos

T1 rho measurements for 
resonance
  @param  Nmr_Resonance self
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
Nmr_T1Rho Nmr_Resonance_FindFirstT1Rho_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_T1Rho  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Resonance_FindFirstT1Rho(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.t1s

T1 relaxation values for 
resonance.
  @param  Nmr_Resonance self
  @returns  the first value that satisfies the conditions 
**/
Nmr_T1 Nmr_Resonance_FindFirstT1_keyval0(Nmr_Resonance self)
{
  
  Nmr_T1  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Resonance_FindFirstT1(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.t1s

T1 relaxation values for 
resonance.
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_T1 Nmr_Resonance_FindFirstT1_keyval1(Nmr_Resonance self, char * key, ApiObject value)
{
  
  Nmr_T1  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Resonance_FindFirstT1(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.t1s

T1 relaxation values for 
resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_T1 Nmr_Resonance_FindFirstT1_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_T1  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Resonance_FindFirstT1(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.t1s

T1 relaxation values for 
resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_T1 Nmr_Resonance_FindFirstT1_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_T1  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Resonance_FindFirstT1(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.t1s

T1 relaxation values for 
resonance.
  @param  Nmr_Resonance self
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
Nmr_T1 Nmr_Resonance_FindFirstT1_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_T1  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Resonance_FindFirstT1(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.t2s

T2 relaxation measurements for 
resonance.
  @param  Nmr_Resonance self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_T2 Nmr_Resonance_FindFirstT2(Nmr_Resonance self, ApiMap conditions)
{
  
  Nmr_T2 obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstT2");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'findFirstT2'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'findFirstT2' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.t2s

T2 relaxation measurements for 
resonance.
  @param  Nmr_Resonance self
  @returns  the first value that satisfies the conditions 
**/
Nmr_T2 Nmr_Resonance_FindFirstT2_keyval0(Nmr_Resonance self)
{
  
  Nmr_T2  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Resonance_FindFirstT2(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.t2s

T2 relaxation measurements for 
resonance.
  @param  Nmr_Resonance self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_T2 Nmr_Resonance_FindFirstT2_keyval1(Nmr_Resonance self, char * key, ApiObject value)
{
  
  Nmr_T2  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Resonance_FindFirstT2(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.t2s

T2 relaxation measurements for 
resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_T2 Nmr_Resonance_FindFirstT2_keyval2(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_T2  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Resonance_FindFirstT2(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.t2s

T2 relaxation measurements for 
resonance.
  @param  Nmr_Resonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_T2 Nmr_Resonance_FindFirstT2_keyval3(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_T2  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Resonance_FindFirstT2(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Resonance.t2s

T2 relaxation measurements for 
resonance.
  @param  Nmr_Resonance self
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
Nmr_T2 Nmr_Resonance_FindFirstT2_keyval4(Nmr_Resonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_T2  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Resonance_FindFirstT2(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.nmr.Nmr.Resonance
  @param  Nmr_Resonance self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Nmr_Resonance_Get(Nmr_Resonance self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_Resonance self
  @returns   the result
**/
Acco_AccessObject Nmr_Resonance_GetAccess(Nmr_Resonance self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'getAccess' is not callable");
  
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
  @param  Nmr_Resonance self
  @returns   the result
**/
Acco_AccessObject Nmr_Resonance_GetActiveAccess(Nmr_Resonance self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'getActiveAccess' is not callable");
  
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
  @param  Nmr_Resonance self
  @returns   the result
**/
ApiList Nmr_Resonance_GetApplicationData(Nmr_Resonance self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Resonance.assignNames

Names of AtomSets to which 
Resonance should or could be assigned. Must be in the CCPN (=IUPAC) 
nomenclature. Allows you to fix assignments when you know only the 
residue type (e.g. Leu) not the residue number. Examples (all for Leu): 
('HG'), ('CA'), non-stereospecific ('HB2','HB3') or ('HD1*','HD2*'), 
stereospecific ('HB2') or ('HD1*'), mixed ('HB2','HB3','HG').
  @param  Nmr_Resonance self
  @returns   the result
**/
ApiList Nmr_Resonance_GetAssignNames(Nmr_Resonance self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAssignNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'getAssignNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'getAssignNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.Nmr.Resonance
  @param  Nmr_Resonance self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nmr_Resonance Nmr_Resonance_GetByKey(Nmr_Resonance self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Nmr_Resonance obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'getByKey' is not callable");
  
  args = PyTuple_Pack(2, startObj, fullKey);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Resonance.chainStates

ChainState in which this 
Resonance can be found
  @param  Nmr_Resonance self
  @returns   the result
**/
ApiSet Nmr_Resonance_GetChainStates(Nmr_Resonance self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChainStates");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'getChainStates'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'getChainStates' is not callable");
  
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
  @param  Nmr_Resonance self
  @returns   the result
**/
ApiString Nmr_Resonance_GetClassName(Nmr_Resonance self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Resonance.covalentlyBound

Resonances on both ends 
stand for atoms that are covalently linked.
  @param  Nmr_Resonance self
  @returns   the result
**/
ApiSet Nmr_Resonance_GetCovalentlyBound(Nmr_Resonance self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCovalentlyBound");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'getCovalentlyBound'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'getCovalentlyBound' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Resonance.datums

Measurements of non-predefined 
type relevant for Resonance
  @param  Nmr_Resonance self
  @returns   the result
**/
ApiSet Nmr_Resonance_GetDatums(Nmr_Resonance self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDatums");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'getDatums'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'getDatums' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Resonance.details

Free text, for notes, explanatory 
comments, etc.
  @param  Nmr_Resonance self
  @returns   the result
**/
ApiString Nmr_Resonance_GetDetails(Nmr_Resonance self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'getDetails' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Resonance.dipolarRelaxations

Dipole-dipole 
relaxation measurements involving resonance.
  @param  Nmr_Resonance self
  @returns   the result
**/
ApiSet Nmr_Resonance_GetDipolarRelaxations(Nmr_Resonance self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDipolarRelaxations");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'getDipolarRelaxations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'getDipolarRelaxations' is not callable");
  
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
  @param  Nmr_Resonance self
  @returns   the result
**/
ApiList Nmr_Resonance_GetFieldNames(Nmr_Resonance self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.nmr.Nmr.Resonance
  @param  Nmr_Resonance self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Nmr_Resonance_GetFullKey(Nmr_Resonance self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'getFullKey' is not callable");
  
  args = PyTuple_Pack(1, useGuid);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Resonance.hExchProtections

Hydrogen exchange rate 
protection factor measurements for resonance.
  @param  Nmr_Resonance self
  @returns   the result
**/
ApiSet Nmr_Resonance_GetHExchProtections(Nmr_Resonance self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getHExchProtections");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'getHExchProtections'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'getHExchProtections' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Resonance.hExchRates

Hydrogen exchange rate 
measurements for resonance.
  @param  Nmr_Resonance self
  @returns   the result
**/
ApiSet Nmr_Resonance_GetHExchRates(Nmr_Resonance self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getHExchRates");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'getHExchRates'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'getHExchRates' is not callable");
  
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
  @param  Nmr_Resonance self
  @returns   the result
**/
ApiBoolean Nmr_Resonance_GetInConstructor(Nmr_Resonance self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'getInConstructor' is not callable");
  
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
  @param  Nmr_Resonance self
  @returns   the result
**/
ApiBoolean Nmr_Resonance_GetIsDeleted(Nmr_Resonance self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  get function for derived link isotope
  @param  Nmr_Resonance self
  @returns   the result
**/
Chel_Isotope Nmr_Resonance_GetIsotope(Nmr_Resonance self)
{
  
  Chel_Isotope obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsotope");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'getIsotope'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'getIsotope' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Resonance.isotopeCode

Isotope code for the 
resonance. E.g. '1H', '13C', '2H', '235U'
  @param  Nmr_Resonance self
  @returns   the result
**/
ApiString Nmr_Resonance_GetIsotopeCode(Nmr_Resonance self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsotopeCode");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'getIsotopeCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'getIsotopeCode' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Resonance.isotropicS2s

Isotropic order parameter 
values that apply to reonance.
  @param  Nmr_Resonance self
  @returns   the result
**/
ApiSet Nmr_Resonance_GetIsotropicS2s(Nmr_Resonance self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsotropicS2s");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'getIsotropicS2s'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'getIsotropicS2s' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Resonance.jCouplings

J coupling measurements for 
resonance
  @param  Nmr_Resonance self
  @returns   the result
**/
ApiSet Nmr_Resonance_GetJCouplings(Nmr_Resonance self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getJCouplings");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'getJCouplings'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'getJCouplings' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.nmr.Nmr.Resonance
  @param  Nmr_Resonance self
  @returns  Local object key
**/
ApiObject Nmr_Resonance_GetLocalKey(Nmr_Resonance self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Resonance.name

Name of Resonance. It is recommended 
to set it to the assignName (q.v.) if known, but the name can be set 
freely.
  @param  Nmr_Resonance self
  @returns   the result
**/
ApiString Nmr_Resonance_GetName(Nmr_Resonance self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'getName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Resonance.nmrProject

parent link
  @param  Nmr_Resonance self
  @returns   the result
**/
Nmr_NmrProject Nmr_Resonance_GetNmrProject(Nmr_Resonance self)
{
  
  Nmr_NmrProject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrProject");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'getNmrProject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'getNmrProject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Resonance.noes

Homonuclear NOEs in which Resonance 
is involved
  @param  Nmr_Resonance self
  @returns   the result
**/
ApiSet Nmr_Resonance_GetNoes(Nmr_Resonance self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNoes");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'getNoes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'getNoes' is not callable");
  
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
  @param  Nmr_Resonance self
  @returns   the result
**/
ApiString Nmr_Resonance_GetPackageName(Nmr_Resonance self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'getPackageName' is not callable");
  
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
  @param  Nmr_Resonance self
  @returns   the result
**/
ApiString Nmr_Resonance_GetPackageShortName(Nmr_Resonance self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Resonance.parent

link to parent object - synonym 
for nmrProject
  @param  Nmr_Resonance self
  @returns   the result
**/
Nmr_NmrProject Nmr_Resonance_GetParent(Nmr_Resonance self)
{
  
  Nmr_NmrProject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Resonance.peakDimContribNs

PeakDimContribNs 
assigned to Resonance
  @param  Nmr_Resonance self
  @returns   the result
**/
ApiSet Nmr_Resonance_GetPeakDimContribNs(Nmr_Resonance self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPeakDimContribNs");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'getPeakDimContribNs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'getPeakDimContribNs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Resonance.peakDimContribs

PeakDimContribs assigned 
to Resonance
  @param  Nmr_Resonance self
  @returns   the result
**/
ApiSet Nmr_Resonance_GetPeakDimContribs(Nmr_Resonance self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPeakDimContribs");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'getPeakDimContribs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'getPeakDimContribs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Resonance.pkas

pKa values associated with Resonance
  @param  Nmr_Resonance self
  @returns   the result
**/
ApiSet Nmr_Resonance_GetPkas(Nmr_Resonance self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPkas");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'getPkas'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'getPkas' is not callable");
  
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
  @param  Nmr_Resonance self
  @returns   the result
**/
ApiString Nmr_Resonance_GetQualifiedName(Nmr_Resonance self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Resonance.rdcs

Reduced dipolar coupling 
measurements involving resonance.
  @param  Nmr_Resonance self
  @returns   the result
**/
ApiSet Nmr_Resonance_GetRdcs(Nmr_Resonance self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRdcs");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'getRdcs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'getRdcs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Resonance.resonanceGroup

ResonanceGroup to which 
Resonance definitely belongs
  @param  Nmr_Resonance self
  @returns   the result
**/
Nmr_ResonanceGroup Nmr_Resonance_GetResonanceGroup(Nmr_Resonance self)
{
  
  Nmr_ResonanceGroup obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getResonanceGroup");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'getResonanceGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'getResonanceGroup' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Resonance.resonanceProbs

ResonanceProbs connecting 
to ResonanceGroups to which this Resonace probably belongs.
  @param  Nmr_Resonance self
  @returns   the result
**/
ApiSet Nmr_Resonance_GetResonanceProbs(Nmr_Resonance self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getResonanceProbs");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'getResonanceProbs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'getResonanceProbs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Resonance.resonanceSet

ResonanceSet to which 
Resonance belongs. Part of assignment of Resonance to Atoms.
  @param  Nmr_Resonance self
  @returns   the result
**/
Nmr_ResonanceSet Nmr_Resonance_GetResonanceSet(Nmr_Resonance self)
{
  
  Nmr_ResonanceSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getResonanceSet");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'getResonanceSet'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'getResonanceSet' is not callable");
  
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
  @param  Nmr_Resonance self
  @returns   the result
**/
Impl_MemopsRoot Nmr_Resonance_GetRoot(Nmr_Resonance self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Resonance.serial

Serial number of object. Serves as 
object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Nmr_Resonance self
  @returns   the result
**/
ApiInteger Nmr_Resonance_GetSerial(Nmr_Resonance self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'getSerial' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Resonance.shiftAnisotropies

Chemical shift 
anisotropies for resonance.
  @param  Nmr_Resonance self
  @returns   the result
**/
ApiSet Nmr_Resonance_GetShiftAnisotropies(Nmr_Resonance self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getShiftAnisotropies");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'getShiftAnisotropies'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'getShiftAnisotropies' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Resonance.shiftDifferences

Chemical SHift 
Differences for resonance.
  @param  Nmr_Resonance self
  @returns   the result
**/
ApiSet Nmr_Resonance_GetShiftDifferences(Nmr_Resonance self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getShiftDifferences");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'getShiftDifferences'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'getShiftDifferences' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Resonance.shifts

Chemical shifts for resonance
  @param  Nmr_Resonance self
  @returns   the result
**/
ApiSet Nmr_Resonance_GetShifts(Nmr_Resonance self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getShifts");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'getShifts'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'getShifts' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Resonance.spectralDensities

Spectral density 
measurements relevant to Resonance.
  @param  Nmr_Resonance self
  @returns   the result
**/
ApiSet Nmr_Resonance_GetSpectralDensities(Nmr_Resonance self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSpectralDensities");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'getSpectralDensities'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'getSpectralDensities' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Resonance.t1Rhos

T1 rho measurements for resonance
  @param  Nmr_Resonance self
  @returns   the result
**/
ApiSet Nmr_Resonance_GetT1Rhos(Nmr_Resonance self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getT1Rhos");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'getT1Rhos'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'getT1Rhos' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Resonance.t1s

T1 relaxation values for resonance.
  @param  Nmr_Resonance self
  @returns   the result
**/
ApiSet Nmr_Resonance_GetT1s(Nmr_Resonance self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getT1s");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'getT1s'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'getT1s' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Resonance.t2s

T2 relaxation measurements for 
resonance.
  @param  Nmr_Resonance self
  @returns   the result
**/
ApiSet Nmr_Resonance_GetT2s(Nmr_Resonance self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getT2s");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'getT2s'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'getT2s' is not callable");
  
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
  @param  Nmr_Resonance self
  @returns   the result
**/
Impl_TopObject Nmr_Resonance_GetTopObject(Nmr_Resonance self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.nmr.Nmr.Resonance
  @param  Nmr_NmrProject parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_Resonance Nmr_Resonance_Init(Nmr_NmrProject parent, ApiMap attrlinks)
{
  
  return Nmr_NmrProject_NewResonance(parent, attrlinks);
}

/**
  Constructor for ccp.nmr.Nmr.Resonance
  @param  Nmr_NmrProject parent
  @param  char * isotopeCode
  @returns  the new object
**/
Nmr_Resonance Nmr_Resonance_Init_reqd(Nmr_NmrProject parent, char * isotopeCode)
{
  
  Nmr_Resonance  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__isotopeCode = ApiString_New(isotopeCode);

  PyDict_SetItemString(attrlinks, "isotopeCode", api__isotopeCode);
  
  obj = Nmr_Resonance_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__isotopeCode);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.ResonanceProb
  @param  Nmr_Resonance self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_ResonanceProb Nmr_Resonance_NewResonanceProb(Nmr_Resonance self, ApiMap attrlinks)
{
  
  Nmr_ResonanceProb obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newResonanceProb");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'newResonanceProb'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'newResonanceProb' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.ResonanceProb
  @param  Nmr_Resonance self
  @param  Nmr_ResonanceGroup possibility
  @returns  the new object
**/
Nmr_ResonanceProb Nmr_Resonance_NewResonanceProb_reqd(Nmr_Resonance self, Nmr_ResonanceGroup possibility)
{
  
  Nmr_ResonanceProb  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "possibility", possibility);
  
  obj = Nmr_Resonance_NewResonanceProb(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Resonance self
  @param  Impl_ApplicationData value
**/
void *Nmr_Resonance_RemoveApplicationData(Nmr_Resonance self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.Nmr.Resonance.assignNames

Names of AtomSets to which 
Resonance should or could be assigned. Must be in the CCPN (=IUPAC) 
nomenclature. Allows you to fix assignments when you know only the 
residue type (e.g. Leu) not the residue number. Examples (all for Leu): 
('HG'), ('CA'), non-stereospecific ('HB2','HB3') or ('HD1*','HD2*'), 
stereospecific ('HB2') or ('HD1*'), mixed ('HB2','HB3','HG').
  @param  Nmr_Resonance self
  @param  ApiString value
**/
void *Nmr_Resonance_RemoveAssignName(Nmr_Resonance self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeAssignName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'removeAssignName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'removeAssignName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.Nmr.Resonance.chainStates

ChainState in which this 
Resonance can be found
  @param  Nmr_Resonance self
  @param  Nmr_ChainState value
**/
void *Nmr_Resonance_RemoveChainState(Nmr_Resonance self, Nmr_ChainState value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeChainState");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'removeChainState'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'removeChainState' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.Nmr.Resonance.covalentlyBound

Resonances on both 
ends stand for atoms that are covalently linked.
  @param  Nmr_Resonance self
  @param  Nmr_Resonance value
**/
void *Nmr_Resonance_RemoveCovalentlyBound(Nmr_Resonance self, Nmr_Resonance value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeCovalentlyBound");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'removeCovalentlyBound'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'removeCovalentlyBound' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.Nmr.Resonance.datums

Measurements of non-predefined 
type relevant for Resonance
  @param  Nmr_Resonance self
  @param  Nmr_Datum value
**/
void *Nmr_Resonance_RemoveDatum(Nmr_Resonance self, Nmr_Datum value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeDatum");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'removeDatum'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'removeDatum' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.nmr.Nmr.Resonance
  @param  Nmr_Resonance self
  @param  ApiString name
  @param  ApiObject value
**/
void *Nmr_Resonance_Set(Nmr_Resonance self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_Resonance self
  @param  Acco_AccessObject value
**/
void *Nmr_Resonance_SetAccess(Nmr_Resonance self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'setAccess' is not callable");
  
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
  @param  Nmr_Resonance self
  @param  ApiList values
**/
void *Nmr_Resonance_SetApplicationData(Nmr_Resonance self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Resonance.assignNames

Names of AtomSets to which 
Resonance should or could be assigned. Must be in the CCPN (=IUPAC) 
nomenclature. Allows you to fix assignments when you know only the 
residue type (e.g. Leu) not the residue number. Examples (all for Leu): 
('HG'), ('CA'), non-stereospecific ('HB2','HB3') or ('HD1*','HD2*'), 
stereospecific ('HB2') or ('HD1*'), mixed ('HB2','HB3','HG').
  @param  Nmr_Resonance self
  @param  ApiList values
**/
void *Nmr_Resonance_SetAssignNames(Nmr_Resonance self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAssignNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'setAssignNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'setAssignNames' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Resonance.chainStates

ChainState in which this 
Resonance can be found
  @param  Nmr_Resonance self
  @param  ApiSet values
**/
void *Nmr_Resonance_SetChainStates(Nmr_Resonance self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setChainStates");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'setChainStates'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'setChainStates' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Resonance.covalentlyBound

Resonances on both ends 
stand for atoms that are covalently linked.
  @param  Nmr_Resonance self
  @param  ApiSet values
**/
void *Nmr_Resonance_SetCovalentlyBound(Nmr_Resonance self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCovalentlyBound");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'setCovalentlyBound'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'setCovalentlyBound' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Resonance.datums

Measurements of non-predefined 
type relevant for Resonance
  @param  Nmr_Resonance self
  @param  ApiSet values
**/
void *Nmr_Resonance_SetDatums(Nmr_Resonance self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDatums");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'setDatums'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'setDatums' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Resonance.details

Free text, for notes, explanatory 
comments, etc.
  @param  Nmr_Resonance self
  @param  ApiString value
**/
void *Nmr_Resonance_SetDetails(Nmr_Resonance self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Resonance.dipolarRelaxations

Dipole-dipole 
relaxation measurements involving resonance.
  @param  Nmr_Resonance self
  @param  ApiSet values
**/
void *Nmr_Resonance_SetDipolarRelaxations(Nmr_Resonance self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDipolarRelaxations");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'setDipolarRelaxations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'setDipolarRelaxations' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Resonance.hExchProtections

Hydrogen exchange rate 
protection factor measurements for resonance.
  @param  Nmr_Resonance self
  @param  ApiSet values
**/
void *Nmr_Resonance_SetHExchProtections(Nmr_Resonance self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setHExchProtections");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'setHExchProtections'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'setHExchProtections' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Resonance.hExchRates

Hydrogen exchange rate 
measurements for resonance.
  @param  Nmr_Resonance self
  @param  ApiSet values
**/
void *Nmr_Resonance_SetHExchRates(Nmr_Resonance self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setHExchRates");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'setHExchRates'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'setHExchRates' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Resonance.isotopeCode

Isotope code for the 
resonance. E.g. '1H', '13C', '2H', '235U'
  @param  Nmr_Resonance self
  @param  ApiString value
**/
void *Nmr_Resonance_SetIsotopeCode(Nmr_Resonance self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsotopeCode");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'setIsotopeCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'setIsotopeCode' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Resonance.isotropicS2s

Isotropic order parameter 
values that apply to reonance.
  @param  Nmr_Resonance self
  @param  ApiSet values
**/
void *Nmr_Resonance_SetIsotropicS2s(Nmr_Resonance self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsotropicS2s");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'setIsotropicS2s'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'setIsotropicS2s' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Resonance.jCouplings

J coupling measurements for 
resonance
  @param  Nmr_Resonance self
  @param  ApiSet values
**/
void *Nmr_Resonance_SetJCouplings(Nmr_Resonance self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setJCouplings");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'setJCouplings'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'setJCouplings' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Resonance.name

Name of Resonance. It is recommended 
to set it to the assignName (q.v.) if known, but the name can be set 
freely.
  @param  Nmr_Resonance self
  @param  ApiString value
**/
void *Nmr_Resonance_SetName(Nmr_Resonance self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Resonance.noes

Homonuclear NOEs in which Resonance 
is involved
  @param  Nmr_Resonance self
  @param  ApiSet values
**/
void *Nmr_Resonance_SetNoes(Nmr_Resonance self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNoes");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'setNoes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'setNoes' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Resonance.peakDimContribNs

PeakDimContribNs 
assigned to Resonance
  @param  Nmr_Resonance self
  @param  ApiSet values
**/
void *Nmr_Resonance_SetPeakDimContribNs(Nmr_Resonance self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPeakDimContribNs");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'setPeakDimContribNs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'setPeakDimContribNs' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Resonance.peakDimContribs

PeakDimContribs assigned 
to Resonance
  @param  Nmr_Resonance self
  @param  ApiSet values
**/
void *Nmr_Resonance_SetPeakDimContribs(Nmr_Resonance self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPeakDimContribs");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'setPeakDimContribs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'setPeakDimContribs' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Resonance.pkas

pKa values associated with Resonance
  @param  Nmr_Resonance self
  @param  ApiSet values
**/
void *Nmr_Resonance_SetPkas(Nmr_Resonance self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPkas");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'setPkas'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'setPkas' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Resonance.rdcs

Reduced dipolar coupling 
measurements involving resonance.
  @param  Nmr_Resonance self
  @param  ApiSet values
**/
void *Nmr_Resonance_SetRdcs(Nmr_Resonance self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRdcs");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'setRdcs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'setRdcs' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Resonance.resonanceGroup

ResonanceGroup to which 
Resonance definitely belongs
  @param  Nmr_Resonance self
  @param  Nmr_ResonanceGroup value
**/
void *Nmr_Resonance_SetResonanceGroup(Nmr_Resonance self, Nmr_ResonanceGroup value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setResonanceGroup");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'setResonanceGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'setResonanceGroup' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Resonance.resonanceSet

ResonanceSet to which 
Resonance belongs. Part of assignment of Resonance to Atoms.
  @param  Nmr_Resonance self
  @param  Nmr_ResonanceSet value
**/
void *Nmr_Resonance_SetResonanceSet(Nmr_Resonance self, Nmr_ResonanceSet value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setResonanceSet");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'setResonanceSet'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'setResonanceSet' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Resonance.serial

Serial number of object. Serves as 
object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Nmr_Resonance self
  @param  ApiInteger value
**/
void *Nmr_Resonance_SetSerial(Nmr_Resonance self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Resonance.shiftAnisotropies

Chemical shift 
anisotropies for resonance.
  @param  Nmr_Resonance self
  @param  ApiSet values
**/
void *Nmr_Resonance_SetShiftAnisotropies(Nmr_Resonance self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setShiftAnisotropies");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'setShiftAnisotropies'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'setShiftAnisotropies' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Resonance.shiftDifferences

Chemical SHift 
Differences for resonance.
  @param  Nmr_Resonance self
  @param  ApiSet values
**/
void *Nmr_Resonance_SetShiftDifferences(Nmr_Resonance self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setShiftDifferences");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'setShiftDifferences'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'setShiftDifferences' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Resonance.shifts

Chemical shifts for resonance
  @param  Nmr_Resonance self
  @param  ApiSet values
**/
void *Nmr_Resonance_SetShifts(Nmr_Resonance self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setShifts");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'setShifts'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'setShifts' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Resonance.spectralDensities

Spectral density 
measurements relevant to Resonance.
  @param  Nmr_Resonance self
  @param  ApiSet values
**/
void *Nmr_Resonance_SetSpectralDensities(Nmr_Resonance self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSpectralDensities");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'setSpectralDensities'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'setSpectralDensities' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Resonance.t1Rhos

T1 rho measurements for resonance
  @param  Nmr_Resonance self
  @param  ApiSet values
**/
void *Nmr_Resonance_SetT1Rhos(Nmr_Resonance self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setT1Rhos");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'setT1Rhos'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'setT1Rhos' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Resonance.t1s

T1 relaxation values for resonance.
  @param  Nmr_Resonance self
  @param  ApiSet values
**/
void *Nmr_Resonance_SetT1s(Nmr_Resonance self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setT1s");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'setT1s'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'setT1s' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Resonance.t2s

T2 relaxation measurements for 
resonance.
  @param  Nmr_Resonance self
  @param  ApiSet values
**/
void *Nmr_Resonance_SetT2s(Nmr_Resonance self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setT2s");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'setT2s'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'setT2s' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.Resonance.chainStates

ChainState in which this 
Resonance can be found
  @param  Nmr_Resonance self
  @returns   the result
**/
ApiList Nmr_Resonance_SortedChainStates(Nmr_Resonance self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChainStates");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'sortedChainStates'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'sortedChainStates' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.Resonance.covalentlyBound

Resonances on both 
ends stand for atoms that are covalently linked.
  @param  Nmr_Resonance self
  @returns   the result
**/
ApiList Nmr_Resonance_SortedCovalentlyBound(Nmr_Resonance self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedCovalentlyBound");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'sortedCovalentlyBound'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'sortedCovalentlyBound' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.Resonance.datums

Measurements of non-predefined 
type relevant for Resonance
  @param  Nmr_Resonance self
  @returns   the result
**/
ApiList Nmr_Resonance_SortedDatums(Nmr_Resonance self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedDatums");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'sortedDatums'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'sortedDatums' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.Resonance.dipolarRelaxations

Dipole-dipole 
relaxation measurements involving resonance.
  @param  Nmr_Resonance self
  @returns   the result
**/
ApiList Nmr_Resonance_SortedDipolarRelaxations(Nmr_Resonance self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedDipolarRelaxations");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'sortedDipolarRelaxations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'sortedDipolarRelaxations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.Resonance.hExchProtections

Hydrogen exchange 
rate protection factor measurements for resonance.
  @param  Nmr_Resonance self
  @returns   the result
**/
ApiList Nmr_Resonance_SortedHExchProtections(Nmr_Resonance self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedHExchProtections");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'sortedHExchProtections'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'sortedHExchProtections' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.Resonance.hExchRates

Hydrogen exchange rate 
measurements for resonance.
  @param  Nmr_Resonance self
  @returns   the result
**/
ApiList Nmr_Resonance_SortedHExchRates(Nmr_Resonance self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedHExchRates");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'sortedHExchRates'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'sortedHExchRates' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.Resonance.isotropicS2s

Isotropic order parameter 
values that apply to reonance.
  @param  Nmr_Resonance self
  @returns   the result
**/
ApiList Nmr_Resonance_SortedIsotropicS2s(Nmr_Resonance self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedIsotropicS2s");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'sortedIsotropicS2s'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'sortedIsotropicS2s' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.Resonance.jCouplings

J coupling measurements for 
resonance
  @param  Nmr_Resonance self
  @returns   the result
**/
ApiList Nmr_Resonance_SortedJCouplings(Nmr_Resonance self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedJCouplings");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'sortedJCouplings'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'sortedJCouplings' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.Resonance.noes

Homonuclear NOEs in which 
Resonance is involved
  @param  Nmr_Resonance self
  @returns   the result
**/
ApiList Nmr_Resonance_SortedNoes(Nmr_Resonance self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedNoes");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'sortedNoes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'sortedNoes' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.Resonance.peakDimContribNs

PeakDimContribNs 
assigned to Resonance
  @param  Nmr_Resonance self
  @returns   the result
**/
ApiList Nmr_Resonance_SortedPeakDimContribNs(Nmr_Resonance self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedPeakDimContribNs");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'sortedPeakDimContribNs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'sortedPeakDimContribNs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.Resonance.peakDimContribs

PeakDimContribs 
assigned to Resonance
  @param  Nmr_Resonance self
  @returns   the result
**/
ApiList Nmr_Resonance_SortedPeakDimContribs(Nmr_Resonance self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedPeakDimContribs");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'sortedPeakDimContribs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'sortedPeakDimContribs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.Resonance.pkas

pKa values associated with 
Resonance
  @param  Nmr_Resonance self
  @returns   the result
**/
ApiList Nmr_Resonance_SortedPkas(Nmr_Resonance self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedPkas");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'sortedPkas'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'sortedPkas' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.Resonance.rdcs

Reduced dipolar coupling 
measurements involving resonance.
  @param  Nmr_Resonance self
  @returns   the result
**/
ApiList Nmr_Resonance_SortedRdcs(Nmr_Resonance self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedRdcs");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'sortedRdcs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'sortedRdcs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.Resonance.resonanceProbs

ResonanceProbs 
connecting to ResonanceGroups to which this Resonace probably belongs.
  @param  Nmr_Resonance self
  @returns   the result
**/
ApiList Nmr_Resonance_SortedResonanceProbs(Nmr_Resonance self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedResonanceProbs");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'sortedResonanceProbs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'sortedResonanceProbs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.Resonance.shiftAnisotropies

Chemical shift 
anisotropies for resonance.
  @param  Nmr_Resonance self
  @returns   the result
**/
ApiList Nmr_Resonance_SortedShiftAnisotropies(Nmr_Resonance self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedShiftAnisotropies");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'sortedShiftAnisotropies'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'sortedShiftAnisotropies' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.Resonance.shiftDifferences

Chemical SHift 
Differences for resonance.
  @param  Nmr_Resonance self
  @returns   the result
**/
ApiList Nmr_Resonance_SortedShiftDifferences(Nmr_Resonance self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedShiftDifferences");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'sortedShiftDifferences'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'sortedShiftDifferences' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.Resonance.shifts

Chemical shifts for resonance
  @param  Nmr_Resonance self
  @returns   the result
**/
ApiList Nmr_Resonance_SortedShifts(Nmr_Resonance self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedShifts");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'sortedShifts'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'sortedShifts' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.Resonance.spectralDensities

Spectral density 
measurements relevant to Resonance.
  @param  Nmr_Resonance self
  @returns   the result
**/
ApiList Nmr_Resonance_SortedSpectralDensities(Nmr_Resonance self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedSpectralDensities");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'sortedSpectralDensities'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'sortedSpectralDensities' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.Resonance.t1Rhos

T1 rho measurements for 
resonance
  @param  Nmr_Resonance self
  @returns   the result
**/
ApiList Nmr_Resonance_SortedT1Rhos(Nmr_Resonance self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedT1Rhos");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'sortedT1Rhos'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'sortedT1Rhos' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.Resonance.t1s

T1 relaxation values for 
resonance.
  @param  Nmr_Resonance self
  @returns   the result
**/
ApiList Nmr_Resonance_SortedT1s(Nmr_Resonance self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedT1s");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'sortedT1s'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'sortedT1s' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.Resonance.t2s

T2 relaxation measurements for 
resonance.
  @param  Nmr_Resonance self
  @returns   the result
**/
ApiList Nmr_Resonance_SortedT2s(Nmr_Resonance self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedT2s");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Resonance: cannot find method 'sortedT2s'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Resonance: method 'sortedT2s' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
