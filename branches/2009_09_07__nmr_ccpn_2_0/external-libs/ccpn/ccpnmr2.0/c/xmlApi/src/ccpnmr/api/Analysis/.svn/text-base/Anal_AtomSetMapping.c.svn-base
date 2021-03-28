
#include "ccp.h"

/*
  Stores (pseudo)atom and residue name to use for display, graphical user interfaces etc., and links to appropriate Residue, AtomSets, and ChemAtomSet.
  
  NB the various links are not independent, and the API does *not* guarantee consistency. It is up to CcpNmr Analysis to make sure the information is up-to-date. This behaviour is only tolerated because this is a program-specific part of the model. 
*/

/* package ccpnmr.api.Analysis */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AtomSetMapping self
  @param  Impl_ApplicationData value
**/
void *Anal_AtomSetMapping_AddApplicationData(Anal_AtomSetMapping self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccpnmr.Analysis.AtomSetMapping.atomSetMappings

the 
AtomSetMappings contained by the AtomSetMapping, often used to specify 
that an ambiguous mapping contains non-ambiguous mappings
  @param  Anal_AtomSetMapping self
  @param  Anal_AtomSetMapping value
**/
void *Anal_AtomSetMapping_AddAtomSetMapping(Anal_AtomSetMapping self, Anal_AtomSetMapping value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addAtomSetMapping");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: cannot find method 'addAtomSetMapping'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: method 'addAtomSetMapping' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccpnmr.Analysis.AtomSetMapping.atomSetSerials

serial numbers of 
atomSets represented by the mapping
  @param  Anal_AtomSetMapping self
  @param  ApiInteger value
**/
void *Anal_AtomSetMapping_AddAtomSetSerial(Anal_AtomSetMapping self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addAtomSetSerial");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: cannot find method 'addAtomSetSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: method 'addAtomSetSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccpnmr.Analysis.AtomSetMapping.resonanceSerials

serial numbers 
of resonances represented by the mapping, keys for derived link
  @param  Anal_AtomSetMapping self
  @param  ApiInteger value
**/
void *Anal_AtomSetMapping_AddResonanceSerial(Anal_AtomSetMapping self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addResonanceSerial");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: cannot find method 'addResonanceSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: method 'addResonanceSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccpnmr.Analysis.AtomSetMapping
  @param  Anal_AtomSetMapping self
  @param  ApiBoolean complete
**/
void *Anal_AtomSetMapping_CheckAllValid(Anal_AtomSetMapping self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccpnmr.Analysis.AtomSetMapping
  @param  Anal_AtomSetMapping self
  @param  ApiBoolean complete
**/
void *Anal_AtomSetMapping_CheckValid(Anal_AtomSetMapping self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: method 'checkValid' is not callable");
  
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
  @param  Anal_AtomSetMapping self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_AtomSetMapping_FindAllApplicationData(Anal_AtomSetMapping self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: method 'findAllApplicationData' is not callable");
  
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
  @param  Anal_AtomSetMapping self
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_AtomSetMapping_FindAllApplicationData_keyval0(Anal_AtomSetMapping self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AtomSetMapping_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AtomSetMapping self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_AtomSetMapping_FindAllApplicationData_keyval1(Anal_AtomSetMapping self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AtomSetMapping_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AtomSetMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_AtomSetMapping_FindAllApplicationData_keyval2(Anal_AtomSetMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AtomSetMapping_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AtomSetMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_AtomSetMapping_FindAllApplicationData_keyval3(Anal_AtomSetMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AtomSetMapping_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AtomSetMapping self
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
ApiList Anal_AtomSetMapping_FindAllApplicationData_keyval4(Anal_AtomSetMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AtomSetMapping_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AtomSetMapping.atomSetMappings

the 
AtomSetMappings contained by the AtomSetMapping, often used to specify 
that an ambiguous mapping contains non-ambiguous mappings
  @param  Anal_AtomSetMapping self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AtomSetMapping_FindAllAtomSetMappings(Anal_AtomSetMapping self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllAtomSetMappings");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: cannot find method 'findAllAtomSetMappings'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: method 'findAllAtomSetMappings' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AtomSetMapping.atomSetMappings

the 
AtomSetMappings contained by the AtomSetMapping, often used to specify 
that an ambiguous mapping contains non-ambiguous mappings
  @param  Anal_AtomSetMapping self
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AtomSetMapping_FindAllAtomSetMappings_keyval0(Anal_AtomSetMapping self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AtomSetMapping_FindAllAtomSetMappings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AtomSetMapping.atomSetMappings

the 
AtomSetMappings contained by the AtomSetMapping, often used to specify 
that an ambiguous mapping contains non-ambiguous mappings
  @param  Anal_AtomSetMapping self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AtomSetMapping_FindAllAtomSetMappings_keyval1(Anal_AtomSetMapping self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AtomSetMapping_FindAllAtomSetMappings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AtomSetMapping.atomSetMappings

the 
AtomSetMappings contained by the AtomSetMapping, often used to specify 
that an ambiguous mapping contains non-ambiguous mappings
  @param  Anal_AtomSetMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AtomSetMapping_FindAllAtomSetMappings_keyval2(Anal_AtomSetMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AtomSetMapping_FindAllAtomSetMappings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AtomSetMapping.atomSetMappings

the 
AtomSetMappings contained by the AtomSetMapping, often used to specify 
that an ambiguous mapping contains non-ambiguous mappings
  @param  Anal_AtomSetMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AtomSetMapping_FindAllAtomSetMappings_keyval3(Anal_AtomSetMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AtomSetMapping_FindAllAtomSetMappings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AtomSetMapping.atomSetMappings

the 
AtomSetMappings contained by the AtomSetMapping, often used to specify 
that an ambiguous mapping contains non-ambiguous mappings
  @param  Anal_AtomSetMapping self
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
ApiSet Anal_AtomSetMapping_FindAllAtomSetMappings_keyval4(Anal_AtomSetMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AtomSetMapping_FindAllAtomSetMappings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AtomSetMapping.atomSets

the AtomSet 
represented by the AtomSetMapping
  @param  Anal_AtomSetMapping self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AtomSetMapping_FindAllAtomSets(Anal_AtomSetMapping self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllAtomSets");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: cannot find method 'findAllAtomSets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: method 'findAllAtomSets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AtomSetMapping.atomSets

the AtomSet 
represented by the AtomSetMapping
  @param  Anal_AtomSetMapping self
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AtomSetMapping_FindAllAtomSets_keyval0(Anal_AtomSetMapping self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AtomSetMapping_FindAllAtomSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AtomSetMapping.atomSets

the AtomSet 
represented by the AtomSetMapping
  @param  Anal_AtomSetMapping self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AtomSetMapping_FindAllAtomSets_keyval1(Anal_AtomSetMapping self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AtomSetMapping_FindAllAtomSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AtomSetMapping.atomSets

the AtomSet 
represented by the AtomSetMapping
  @param  Anal_AtomSetMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AtomSetMapping_FindAllAtomSets_keyval2(Anal_AtomSetMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AtomSetMapping_FindAllAtomSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AtomSetMapping.atomSets

the AtomSet 
represented by the AtomSetMapping
  @param  Anal_AtomSetMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AtomSetMapping_FindAllAtomSets_keyval3(Anal_AtomSetMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AtomSetMapping_FindAllAtomSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AtomSetMapping.atomSets

the AtomSet 
represented by the AtomSetMapping
  @param  Anal_AtomSetMapping self
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
ApiSet Anal_AtomSetMapping_FindAllAtomSets_keyval4(Anal_AtomSetMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AtomSetMapping_FindAllAtomSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AtomSetMapping.resonances

Resonances that 
AtomSetMapping is associated with. This link does not have to be filled 
in.
  @param  Anal_AtomSetMapping self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AtomSetMapping_FindAllResonances(Anal_AtomSetMapping self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllResonances");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: cannot find method 'findAllResonances'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: method 'findAllResonances' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AtomSetMapping.resonances

Resonances that 
AtomSetMapping is associated with. This link does not have to be filled 
in.
  @param  Anal_AtomSetMapping self
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AtomSetMapping_FindAllResonances_keyval0(Anal_AtomSetMapping self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AtomSetMapping_FindAllResonances(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AtomSetMapping.resonances

Resonances that 
AtomSetMapping is associated with. This link does not have to be filled 
in.
  @param  Anal_AtomSetMapping self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AtomSetMapping_FindAllResonances_keyval1(Anal_AtomSetMapping self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AtomSetMapping_FindAllResonances(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AtomSetMapping.resonances

Resonances that 
AtomSetMapping is associated with. This link does not have to be filled 
in.
  @param  Anal_AtomSetMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AtomSetMapping_FindAllResonances_keyval2(Anal_AtomSetMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AtomSetMapping_FindAllResonances(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AtomSetMapping.resonances

Resonances that 
AtomSetMapping is associated with. This link does not have to be filled 
in.
  @param  Anal_AtomSetMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Anal_AtomSetMapping_FindAllResonances_keyval3(Anal_AtomSetMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AtomSetMapping_FindAllResonances(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.Analysis.AtomSetMapping.resonances

Resonances that 
AtomSetMapping is associated with. This link does not have to be filled 
in.
  @param  Anal_AtomSetMapping self
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
ApiSet Anal_AtomSetMapping_FindAllResonances_keyval4(Anal_AtomSetMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AtomSetMapping_FindAllResonances(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AtomSetMapping self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_AtomSetMapping_FindFirstApplicationData(Anal_AtomSetMapping self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: method 'findFirstApplicationData' is not callable");
  
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
  @param  Anal_AtomSetMapping self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_AtomSetMapping_FindFirstApplicationData_keyval0(Anal_AtomSetMapping self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AtomSetMapping_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AtomSetMapping self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_AtomSetMapping_FindFirstApplicationData_keyval1(Anal_AtomSetMapping self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AtomSetMapping_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AtomSetMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_AtomSetMapping_FindFirstApplicationData_keyval2(Anal_AtomSetMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AtomSetMapping_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AtomSetMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_AtomSetMapping_FindFirstApplicationData_keyval3(Anal_AtomSetMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AtomSetMapping_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AtomSetMapping self
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
Impl_ApplicationData Anal_AtomSetMapping_FindFirstApplicationData_keyval4(Anal_AtomSetMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AtomSetMapping_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AtomSetMapping.atomSets

the AtomSet 
represented by the AtomSetMapping
  @param  Anal_AtomSetMapping self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_AtomSet Anal_AtomSetMapping_FindFirstAtomSet(Anal_AtomSetMapping self, ApiMap conditions)
{
  
  Nmr_AtomSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstAtomSet");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: cannot find method 'findFirstAtomSet'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: method 'findFirstAtomSet' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AtomSetMapping.atomSetMappings

the 
AtomSetMappings contained by the AtomSetMapping, often used to specify 
that an ambiguous mapping contains non-ambiguous mappings
  @param  Anal_AtomSetMapping self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Anal_AtomSetMapping Anal_AtomSetMapping_FindFirstAtomSetMapping(Anal_AtomSetMapping self, ApiMap conditions)
{
  
  Anal_AtomSetMapping obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstAtomSetMapping");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: cannot find method 'findFirstAtomSetMapping'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: method 'findFirstAtomSetMapping' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AtomSetMapping.atomSetMappings

the 
AtomSetMappings contained by the AtomSetMapping, often used to specify 
that an ambiguous mapping contains non-ambiguous mappings
  @param  Anal_AtomSetMapping self
  @returns  the first value that satisfies the conditions 
**/
Anal_AtomSetMapping Anal_AtomSetMapping_FindFirstAtomSetMapping_keyval0(Anal_AtomSetMapping self)
{
  
  Anal_AtomSetMapping  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AtomSetMapping_FindFirstAtomSetMapping(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AtomSetMapping.atomSetMappings

the 
AtomSetMappings contained by the AtomSetMapping, often used to specify 
that an ambiguous mapping contains non-ambiguous mappings
  @param  Anal_AtomSetMapping self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Anal_AtomSetMapping Anal_AtomSetMapping_FindFirstAtomSetMapping_keyval1(Anal_AtomSetMapping self, char * key, ApiObject value)
{
  
  Anal_AtomSetMapping  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AtomSetMapping_FindFirstAtomSetMapping(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AtomSetMapping.atomSetMappings

the 
AtomSetMappings contained by the AtomSetMapping, often used to specify 
that an ambiguous mapping contains non-ambiguous mappings
  @param  Anal_AtomSetMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Anal_AtomSetMapping Anal_AtomSetMapping_FindFirstAtomSetMapping_keyval2(Anal_AtomSetMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Anal_AtomSetMapping  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AtomSetMapping_FindFirstAtomSetMapping(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AtomSetMapping.atomSetMappings

the 
AtomSetMappings contained by the AtomSetMapping, often used to specify 
that an ambiguous mapping contains non-ambiguous mappings
  @param  Anal_AtomSetMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Anal_AtomSetMapping Anal_AtomSetMapping_FindFirstAtomSetMapping_keyval3(Anal_AtomSetMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Anal_AtomSetMapping  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AtomSetMapping_FindFirstAtomSetMapping(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AtomSetMapping.atomSetMappings

the 
AtomSetMappings contained by the AtomSetMapping, often used to specify 
that an ambiguous mapping contains non-ambiguous mappings
  @param  Anal_AtomSetMapping self
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
Anal_AtomSetMapping Anal_AtomSetMapping_FindFirstAtomSetMapping_keyval4(Anal_AtomSetMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Anal_AtomSetMapping  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AtomSetMapping_FindFirstAtomSetMapping(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AtomSetMapping.atomSets

the AtomSet 
represented by the AtomSetMapping
  @param  Anal_AtomSetMapping self
  @returns  the first value that satisfies the conditions 
**/
Nmr_AtomSet Anal_AtomSetMapping_FindFirstAtomSet_keyval0(Anal_AtomSetMapping self)
{
  
  Nmr_AtomSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AtomSetMapping_FindFirstAtomSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AtomSetMapping.atomSets

the AtomSet 
represented by the AtomSetMapping
  @param  Anal_AtomSetMapping self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_AtomSet Anal_AtomSetMapping_FindFirstAtomSet_keyval1(Anal_AtomSetMapping self, char * key, ApiObject value)
{
  
  Nmr_AtomSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AtomSetMapping_FindFirstAtomSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AtomSetMapping.atomSets

the AtomSet 
represented by the AtomSetMapping
  @param  Anal_AtomSetMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_AtomSet Anal_AtomSetMapping_FindFirstAtomSet_keyval2(Anal_AtomSetMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_AtomSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AtomSetMapping_FindFirstAtomSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AtomSetMapping.atomSets

the AtomSet 
represented by the AtomSetMapping
  @param  Anal_AtomSetMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_AtomSet Anal_AtomSetMapping_FindFirstAtomSet_keyval3(Anal_AtomSetMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_AtomSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AtomSetMapping_FindFirstAtomSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AtomSetMapping.atomSets

the AtomSet 
represented by the AtomSetMapping
  @param  Anal_AtomSetMapping self
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
Nmr_AtomSet Anal_AtomSetMapping_FindFirstAtomSet_keyval4(Anal_AtomSetMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_AtomSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AtomSetMapping_FindFirstAtomSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AtomSetMapping.resonances

Resonances that 
AtomSetMapping is associated with. This link does not have to be filled 
in.
  @param  Anal_AtomSetMapping self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_Resonance Anal_AtomSetMapping_FindFirstResonance(Anal_AtomSetMapping self, ApiMap conditions)
{
  
  Nmr_Resonance obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstResonance");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: cannot find method 'findFirstResonance'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: method 'findFirstResonance' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AtomSetMapping.resonances

Resonances that 
AtomSetMapping is associated with. This link does not have to be filled 
in.
  @param  Anal_AtomSetMapping self
  @returns  the first value that satisfies the conditions 
**/
Nmr_Resonance Anal_AtomSetMapping_FindFirstResonance_keyval0(Anal_AtomSetMapping self)
{
  
  Nmr_Resonance  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AtomSetMapping_FindFirstResonance(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AtomSetMapping.resonances

Resonances that 
AtomSetMapping is associated with. This link does not have to be filled 
in.
  @param  Anal_AtomSetMapping self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_Resonance Anal_AtomSetMapping_FindFirstResonance_keyval1(Anal_AtomSetMapping self, char * key, ApiObject value)
{
  
  Nmr_Resonance  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AtomSetMapping_FindFirstResonance(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AtomSetMapping.resonances

Resonances that 
AtomSetMapping is associated with. This link does not have to be filled 
in.
  @param  Anal_AtomSetMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_Resonance Anal_AtomSetMapping_FindFirstResonance_keyval2(Anal_AtomSetMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_Resonance  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AtomSetMapping_FindFirstResonance(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AtomSetMapping.resonances

Resonances that 
AtomSetMapping is associated with. This link does not have to be filled 
in.
  @param  Anal_AtomSetMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_Resonance Anal_AtomSetMapping_FindFirstResonance_keyval3(Anal_AtomSetMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_Resonance  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AtomSetMapping_FindFirstResonance(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.Analysis.AtomSetMapping.resonances

Resonances that 
AtomSetMapping is associated with. This link does not have to be filled 
in.
  @param  Anal_AtomSetMapping self
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
Nmr_Resonance Anal_AtomSetMapping_FindFirstResonance_keyval4(Anal_AtomSetMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_Resonance  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AtomSetMapping_FindFirstResonance(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccpnmr.Analysis.AtomSetMapping
  @param  Anal_AtomSetMapping self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Anal_AtomSetMapping_Get(Anal_AtomSetMapping self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anal_AtomSetMapping self
  @returns   the result
**/
Acco_AccessObject Anal_AtomSetMapping_GetAccess(Anal_AtomSetMapping self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: method 'getAccess' is not callable");
  
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
  @param  Anal_AtomSetMapping self
  @returns   the result
**/
ApiList Anal_AtomSetMapping_GetApplicationData(Anal_AtomSetMapping self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AtomSetMapping.atomSetMappings

the 
AtomSetMappings contained by the AtomSetMapping, often used to specify 
that an ambiguous mapping contains non-ambiguous mappings
  @param  Anal_AtomSetMapping self
  @returns   the result
**/
ApiSet Anal_AtomSetMapping_GetAtomSetMappings(Anal_AtomSetMapping self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAtomSetMappings");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: cannot find method 'getAtomSetMappings'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: method 'getAtomSetMappings' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AtomSetMapping.atomSetSerials

serial numbers of 
atomSets represented by the mapping
  @param  Anal_AtomSetMapping self
  @returns   the result
**/
ApiSet Anal_AtomSetMapping_GetAtomSetSerials(Anal_AtomSetMapping self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAtomSetSerials");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: cannot find method 'getAtomSetSerials'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: method 'getAtomSetSerials' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived link atomSets
  @param  Anal_AtomSetMapping self
  @returns   the result
**/
ApiSet Anal_AtomSetMapping_GetAtomSets(Anal_AtomSetMapping self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAtomSets");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: cannot find method 'getAtomSets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: method 'getAtomSets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccpnmr.Analysis.AtomSetMapping
  @param  Anal_AtomSetMapping self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Anal_AtomSetMapping Anal_AtomSetMapping_GetByKey(Anal_AtomSetMapping self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Anal_AtomSetMapping obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: method 'getByKey' is not callable");
  
  args = PyTuple_Pack(2, startObj, fullKey);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AtomSetMapping.chemAtomSet

the ChemAtomSet 
represented by the AtomSetMapping
  @param  Anal_AtomSetMapping self
  @returns   the result
**/
Chem_ChemAtomSet Anal_AtomSetMapping_GetChemAtomSet(Anal_AtomSetMapping self)
{
  
  Chem_ChemAtomSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemAtomSet");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: cannot find method 'getChemAtomSet'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: method 'getChemAtomSet' is not callable");
  
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
  @param  Anal_AtomSetMapping self
  @returns   the result
**/
ApiString Anal_AtomSetMapping_GetClassName(Anal_AtomSetMapping self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AtomSetMapping.elementSymbol

Element symbol of 
element corresponding to AtomSets. Automatically calculated at creation 
time.
  @param  Anal_AtomSetMapping self
  @returns   the result
**/
ApiString Anal_AtomSetMapping_GetElementSymbol(Anal_AtomSetMapping self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getElementSymbol");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: cannot find method 'getElementSymbol'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: method 'getElementSymbol' is not callable");
  
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
  @param  Anal_AtomSetMapping self
  @returns   the result
**/
ApiList Anal_AtomSetMapping_GetFieldNames(Anal_AtomSetMapping self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccpnmr.Analysis.AtomSetMapping
  @param  Anal_AtomSetMapping self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Anal_AtomSetMapping_GetFullKey(Anal_AtomSetMapping self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: method 'getFullKey' is not callable");
  
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
  @param  Anal_AtomSetMapping self
  @returns   the result
**/
ApiBoolean Anal_AtomSetMapping_GetInConstructor(Anal_AtomSetMapping self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: method 'getInConstructor' is not callable");
  
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
  @param  Anal_AtomSetMapping self
  @returns   the result
**/
ApiBoolean Anal_AtomSetMapping_GetIsDeleted(Anal_AtomSetMapping self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccpnmr.Analysis.AtomSetMapping
  @param  Anal_AtomSetMapping self
  @returns  Local object key
**/
ApiObject Anal_AtomSetMapping_GetLocalKey(Anal_AtomSetMapping self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AtomSetMapping.mappingType

whether the mapping 
is simple, ambiguous (points to multiple other mappings), nonstereo 
(non-stereospecific prochiral like Hba or Hbb) or stereo (like Hb2 or 
Hb3)
  @param  Anal_AtomSetMapping self
  @returns   the result
**/
ApiString Anal_AtomSetMapping_GetMappingType(Anal_AtomSetMapping self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMappingType");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: cannot find method 'getMappingType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: method 'getMappingType' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AtomSetMapping.name

(pseudo)atom name.
  @param  Anal_AtomSetMapping self
  @returns   the result
**/
ApiString Anal_AtomSetMapping_GetName(Anal_AtomSetMapping self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: method 'getName' is not callable");
  
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
  @param  Anal_AtomSetMapping self
  @returns   the result
**/
ApiString Anal_AtomSetMapping_GetPackageName(Anal_AtomSetMapping self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: method 'getPackageName' is not callable");
  
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
  @param  Anal_AtomSetMapping self
  @returns   the result
**/
ApiString Anal_AtomSetMapping_GetPackageShortName(Anal_AtomSetMapping self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AtomSetMapping.parent

link to parent object - 
synonym for residueMapping
  @param  Anal_AtomSetMapping self
  @returns   the result
**/
Anal_ResidueMapping Anal_AtomSetMapping_GetParent(Anal_AtomSetMapping self)
{
  
  Anal_ResidueMapping obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: method 'getParent' is not callable");
  
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
  @param  Anal_AtomSetMapping self
  @returns   the result
**/
ApiString Anal_AtomSetMapping_GetQualifiedName(Anal_AtomSetMapping self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AtomSetMapping.residueMapping

parent link
  @param  Anal_AtomSetMapping self
  @returns   the result
**/
Anal_ResidueMapping Anal_AtomSetMapping_GetResidueMapping(Anal_AtomSetMapping self)
{
  
  Anal_ResidueMapping obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getResidueMapping");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: cannot find method 'getResidueMapping'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: method 'getResidueMapping' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AtomSetMapping.resonanceSerials

serial numbers 
of resonances represented by the mapping, keys for derived link
  @param  Anal_AtomSetMapping self
  @returns   the result
**/
ApiSet Anal_AtomSetMapping_GetResonanceSerials(Anal_AtomSetMapping self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getResonanceSerials");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: cannot find method 'getResonanceSerials'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: method 'getResonanceSerials' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived link resonances
  @param  Anal_AtomSetMapping self
  @returns   the result
**/
ApiSet Anal_AtomSetMapping_GetResonances(Anal_AtomSetMapping self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getResonances");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: cannot find method 'getResonances'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: method 'getResonances' is not callable");
  
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
  @param  Anal_AtomSetMapping self
  @returns   the result
**/
Impl_MemopsRoot Anal_AtomSetMapping_GetRoot(Anal_AtomSetMapping self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: method 'getRoot' is not callable");
  
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
  @param  Anal_AtomSetMapping self
  @returns   the result
**/
Impl_TopObject Anal_AtomSetMapping_GetTopObject(Anal_AtomSetMapping self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccpnmr.Analysis.AtomSetMapping
  @param  Anal_ResidueMapping parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anal_AtomSetMapping Anal_AtomSetMapping_Init(Anal_ResidueMapping parent, ApiMap attrlinks)
{
  
  return Anal_ResidueMapping_NewAtomSetMapping(parent, attrlinks);
}

/**
  Constructor for ccpnmr.Analysis.AtomSetMapping
  @param  Anal_ResidueMapping parent
  @param  char * name
  @returns  the new object
**/
Anal_AtomSetMapping Anal_AtomSetMapping_Init_reqd(Anal_ResidueMapping parent, char * name)
{
  
  Anal_AtomSetMapping  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Anal_AtomSetMapping_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AtomSetMapping self
  @param  Impl_ApplicationData value
**/
void *Anal_AtomSetMapping_RemoveApplicationData(Anal_AtomSetMapping self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccpnmr.Analysis.AtomSetMapping.atomSetMappings

the 
AtomSetMappings contained by the AtomSetMapping, often used to specify 
that an ambiguous mapping contains non-ambiguous mappings
  @param  Anal_AtomSetMapping self
  @param  Anal_AtomSetMapping value
**/
void *Anal_AtomSetMapping_RemoveAtomSetMapping(Anal_AtomSetMapping self, Anal_AtomSetMapping value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeAtomSetMapping");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: cannot find method 'removeAtomSetMapping'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: method 'removeAtomSetMapping' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccpnmr.Analysis.AtomSetMapping.atomSetSerials

serial numbers 
of atomSets represented by the mapping
  @param  Anal_AtomSetMapping self
  @param  ApiInteger value
**/
void *Anal_AtomSetMapping_RemoveAtomSetSerial(Anal_AtomSetMapping self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeAtomSetSerial");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: cannot find method 'removeAtomSetSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: method 'removeAtomSetSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccpnmr.Analysis.AtomSetMapping.resonanceSerials

serial 
numbers of resonances represented by the mapping, keys for derived link
  @param  Anal_AtomSetMapping self
  @param  ApiInteger value
**/
void *Anal_AtomSetMapping_RemoveResonanceSerial(Anal_AtomSetMapping self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeResonanceSerial");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: cannot find method 'removeResonanceSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: method 'removeResonanceSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccpnmr.Analysis.AtomSetMapping
  @param  Anal_AtomSetMapping self
  @param  ApiString name
  @param  ApiObject value
**/
void *Anal_AtomSetMapping_Set(Anal_AtomSetMapping self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anal_AtomSetMapping self
  @param  Acco_AccessObject value
**/
void *Anal_AtomSetMapping_SetAccess(Anal_AtomSetMapping self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: method 'setAccess' is not callable");
  
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
  @param  Anal_AtomSetMapping self
  @param  ApiList values
**/
void *Anal_AtomSetMapping_SetApplicationData(Anal_AtomSetMapping self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AtomSetMapping.atomSetMappings

the 
AtomSetMappings contained by the AtomSetMapping, often used to specify 
that an ambiguous mapping contains non-ambiguous mappings
  @param  Anal_AtomSetMapping self
  @param  ApiSet values
**/
void *Anal_AtomSetMapping_SetAtomSetMappings(Anal_AtomSetMapping self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAtomSetMappings");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: cannot find method 'setAtomSetMappings'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: method 'setAtomSetMappings' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AtomSetMapping.atomSetSerials

serial numbers of 
atomSets represented by the mapping
  @param  Anal_AtomSetMapping self
  @param  ApiSet values
**/
void *Anal_AtomSetMapping_SetAtomSetSerials(Anal_AtomSetMapping self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAtomSetSerials");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: cannot find method 'setAtomSetSerials'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: method 'setAtomSetSerials' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AtomSetMapping.chemAtomSet

the ChemAtomSet 
represented by the AtomSetMapping
  @param  Anal_AtomSetMapping self
  @param  Chem_ChemAtomSet value
**/
void *Anal_AtomSetMapping_SetChemAtomSet(Anal_AtomSetMapping self, Chem_ChemAtomSet value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setChemAtomSet");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: cannot find method 'setChemAtomSet'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: method 'setChemAtomSet' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AtomSetMapping.elementSymbol

Element symbol of 
element corresponding to AtomSets. Automatically calculated at creation 
time.
  @param  Anal_AtomSetMapping self
  @param  ApiString value
**/
void *Anal_AtomSetMapping_SetElementSymbol(Anal_AtomSetMapping self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setElementSymbol");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: cannot find method 'setElementSymbol'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: method 'setElementSymbol' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AtomSetMapping.mappingType

whether the mapping 
is simple, ambiguous (points to multiple other mappings), nonstereo 
(non-stereospecific prochiral like Hba or Hbb) or stereo (like Hb2 or 
Hb3)
  @param  Anal_AtomSetMapping self
  @param  ApiString value
**/
void *Anal_AtomSetMapping_SetMappingType(Anal_AtomSetMapping self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMappingType");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: cannot find method 'setMappingType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: method 'setMappingType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AtomSetMapping.name

(pseudo)atom name.
  @param  Anal_AtomSetMapping self
  @param  ApiString value
**/
void *Anal_AtomSetMapping_SetName(Anal_AtomSetMapping self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AtomSetMapping.resonanceSerials

serial numbers 
of resonances represented by the mapping, keys for derived link
  @param  Anal_AtomSetMapping self
  @param  ApiSet values
**/
void *Anal_AtomSetMapping_SetResonanceSerials(Anal_AtomSetMapping self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setResonanceSerials");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: cannot find method 'setResonanceSerials'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: method 'setResonanceSerials' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccpnmr.Analysis.AtomSetMapping.atomSetMappings

the 
AtomSetMappings contained by the AtomSetMapping, often used to specify 
that an ambiguous mapping contains non-ambiguous mappings
  @param  Anal_AtomSetMapping self
  @returns   the result
**/
ApiList Anal_AtomSetMapping_SortedAtomSetMappings(Anal_AtomSetMapping self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedAtomSetMappings");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: cannot find method 'sortedAtomSetMappings'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: method 'sortedAtomSetMappings' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccpnmr.Analysis.AtomSetMapping.atomSets

the AtomSet 
represented by the AtomSetMapping
  @param  Anal_AtomSetMapping self
  @returns   the result
**/
ApiList Anal_AtomSetMapping_SortedAtomSets(Anal_AtomSetMapping self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedAtomSets");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: cannot find method 'sortedAtomSets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: method 'sortedAtomSets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccpnmr.Analysis.AtomSetMapping.resonances

Resonances that 
AtomSetMapping is associated with. This link does not have to be filled 
in.
  @param  Anal_AtomSetMapping self
  @returns   the result
**/
ApiList Anal_AtomSetMapping_SortedResonances(Anal_AtomSetMapping self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedResonances");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: cannot find method 'sortedResonances'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AtomSetMapping: method 'sortedResonances' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
