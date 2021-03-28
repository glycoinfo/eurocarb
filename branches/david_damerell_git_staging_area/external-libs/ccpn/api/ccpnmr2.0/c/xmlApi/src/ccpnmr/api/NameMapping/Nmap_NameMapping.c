
#include "ccp.h"

/*
  This class groups all mappings between an external file format and the data model. It is used by the FormatConverter software.
*/

/* package ccpnmr.api.NameMapping */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_NameMapping self
  @param  Impl_ApplicationData value
**/
void *Nmap_NameMapping_AddApplicationData(Nmap_NameMapping self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.NameMapping: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.NameMapping: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccpnmr.NameMapping.NameMapping
  @param  Nmap_NameMapping self
  @param  ApiBoolean complete
**/
void *Nmap_NameMapping_CheckAllValid(Nmap_NameMapping self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.NameMapping: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.NameMapping: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccpnmr.NameMapping.NameMapping
  @param  Nmap_NameMapping self
  @param  ApiBoolean complete
**/
void *Nmap_NameMapping_CheckValid(Nmap_NameMapping self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.NameMapping: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.NameMapping: method 'checkValid' is not callable");
  
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
  @param  Nmap_NameMapping self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmap_NameMapping_FindAllApplicationData(Nmap_NameMapping self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.NameMapping: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.NameMapping: method 'findAllApplicationData' is not callable");
  
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
  @param  Nmap_NameMapping self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmap_NameMapping_FindAllApplicationData_keyval0(Nmap_NameMapping self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmap_NameMapping_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_NameMapping self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmap_NameMapping_FindAllApplicationData_keyval1(Nmap_NameMapping self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmap_NameMapping_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_NameMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmap_NameMapping_FindAllApplicationData_keyval2(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmap_NameMapping_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_NameMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmap_NameMapping_FindAllApplicationData_keyval3(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmap_NameMapping_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_NameMapping self
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
ApiList Nmap_NameMapping_FindAllApplicationData_keyval4(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmap_NameMapping_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.NameMapping.NameMapping.atomMappings

child link to 
class AtomMapping
  @param  Nmap_NameMapping self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmap_NameMapping_FindAllAtomMappings(Nmap_NameMapping self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllAtomMappings");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.NameMapping: cannot find method 'findAllAtomMappings'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.NameMapping: method 'findAllAtomMappings' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccpnmr.NameMapping.NameMapping.atomMappings

child link to 
class AtomMapping
  @param  Nmap_NameMapping self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmap_NameMapping_FindAllAtomMappings_keyval0(Nmap_NameMapping self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmap_NameMapping_FindAllAtomMappings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.NameMapping.NameMapping.atomMappings

child link to 
class AtomMapping
  @param  Nmap_NameMapping self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmap_NameMapping_FindAllAtomMappings_keyval1(Nmap_NameMapping self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmap_NameMapping_FindAllAtomMappings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.NameMapping.NameMapping.atomMappings

child link to 
class AtomMapping
  @param  Nmap_NameMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmap_NameMapping_FindAllAtomMappings_keyval2(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmap_NameMapping_FindAllAtomMappings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.NameMapping.NameMapping.atomMappings

child link to 
class AtomMapping
  @param  Nmap_NameMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmap_NameMapping_FindAllAtomMappings_keyval3(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmap_NameMapping_FindAllAtomMappings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.NameMapping.NameMapping.atomMappings

child link to 
class AtomMapping
  @param  Nmap_NameMapping self
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
ApiSet Nmap_NameMapping_FindAllAtomMappings_keyval4(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmap_NameMapping_FindAllAtomMappings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.NameMapping.NameMapping.chainMappings

child link to 
class ChainMapping
  @param  Nmap_NameMapping self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmap_NameMapping_FindAllChainMappings(Nmap_NameMapping self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChainMappings");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.NameMapping: cannot find method 'findAllChainMappings'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.NameMapping: method 'findAllChainMappings' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccpnmr.NameMapping.NameMapping.chainMappings

child link to 
class ChainMapping
  @param  Nmap_NameMapping self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmap_NameMapping_FindAllChainMappings_keyval0(Nmap_NameMapping self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmap_NameMapping_FindAllChainMappings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.NameMapping.NameMapping.chainMappings

child link to 
class ChainMapping
  @param  Nmap_NameMapping self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmap_NameMapping_FindAllChainMappings_keyval1(Nmap_NameMapping self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmap_NameMapping_FindAllChainMappings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.NameMapping.NameMapping.chainMappings

child link to 
class ChainMapping
  @param  Nmap_NameMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmap_NameMapping_FindAllChainMappings_keyval2(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmap_NameMapping_FindAllChainMappings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.NameMapping.NameMapping.chainMappings

child link to 
class ChainMapping
  @param  Nmap_NameMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmap_NameMapping_FindAllChainMappings_keyval3(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmap_NameMapping_FindAllChainMappings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.NameMapping.NameMapping.chainMappings

child link to 
class ChainMapping
  @param  Nmap_NameMapping self
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
ApiSet Nmap_NameMapping_FindAllChainMappings_keyval4(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmap_NameMapping_FindAllChainMappings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.NameMapping.NameMapping.moleculeMappings

child link 
to class MoleculeMapping
  @param  Nmap_NameMapping self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmap_NameMapping_FindAllMoleculeMappings(Nmap_NameMapping self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllMoleculeMappings");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.NameMapping: cannot find method 'findAllMoleculeMappings'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.NameMapping: method 'findAllMoleculeMappings' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccpnmr.NameMapping.NameMapping.moleculeMappings

child link 
to class MoleculeMapping
  @param  Nmap_NameMapping self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmap_NameMapping_FindAllMoleculeMappings_keyval0(Nmap_NameMapping self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmap_NameMapping_FindAllMoleculeMappings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.NameMapping.NameMapping.moleculeMappings

child link 
to class MoleculeMapping
  @param  Nmap_NameMapping self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmap_NameMapping_FindAllMoleculeMappings_keyval1(Nmap_NameMapping self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmap_NameMapping_FindAllMoleculeMappings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.NameMapping.NameMapping.moleculeMappings

child link 
to class MoleculeMapping
  @param  Nmap_NameMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmap_NameMapping_FindAllMoleculeMappings_keyval2(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmap_NameMapping_FindAllMoleculeMappings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.NameMapping.NameMapping.moleculeMappings

child link 
to class MoleculeMapping
  @param  Nmap_NameMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmap_NameMapping_FindAllMoleculeMappings_keyval3(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmap_NameMapping_FindAllMoleculeMappings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.NameMapping.NameMapping.moleculeMappings

child link 
to class MoleculeMapping
  @param  Nmap_NameMapping self
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
ApiSet Nmap_NameMapping_FindAllMoleculeMappings_keyval4(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmap_NameMapping_FindAllMoleculeMappings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.NameMapping.NameMapping.resLinkMappings

child link 
to class ResonanceLinkMapping
  @param  Nmap_NameMapping self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmap_NameMapping_FindAllResLinkMappings(Nmap_NameMapping self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllResLinkMappings");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.NameMapping: cannot find method 'findAllResLinkMappings'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.NameMapping: method 'findAllResLinkMappings' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccpnmr.NameMapping.NameMapping.resLinkMappings

child link 
to class ResonanceLinkMapping
  @param  Nmap_NameMapping self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmap_NameMapping_FindAllResLinkMappings_keyval0(Nmap_NameMapping self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmap_NameMapping_FindAllResLinkMappings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.NameMapping.NameMapping.resLinkMappings

child link 
to class ResonanceLinkMapping
  @param  Nmap_NameMapping self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmap_NameMapping_FindAllResLinkMappings_keyval1(Nmap_NameMapping self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmap_NameMapping_FindAllResLinkMappings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.NameMapping.NameMapping.resLinkMappings

child link 
to class ResonanceLinkMapping
  @param  Nmap_NameMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmap_NameMapping_FindAllResLinkMappings_keyval2(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmap_NameMapping_FindAllResLinkMappings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.NameMapping.NameMapping.resLinkMappings

child link 
to class ResonanceLinkMapping
  @param  Nmap_NameMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmap_NameMapping_FindAllResLinkMappings_keyval3(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmap_NameMapping_FindAllResLinkMappings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.NameMapping.NameMapping.resLinkMappings

child link 
to class ResonanceLinkMapping
  @param  Nmap_NameMapping self
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
ApiSet Nmap_NameMapping_FindAllResLinkMappings_keyval4(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmap_NameMapping_FindAllResLinkMappings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.NameMapping.NameMapping.resStatusMappings

child link 
to class ResonanceStatusMapping
  @param  Nmap_NameMapping self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmap_NameMapping_FindAllResStatusMappings(Nmap_NameMapping self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllResStatusMappings");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.NameMapping: cannot find method 'findAllResStatusMappings'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.NameMapping: method 'findAllResStatusMappings' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccpnmr.NameMapping.NameMapping.resStatusMappings

child link 
to class ResonanceStatusMapping
  @param  Nmap_NameMapping self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmap_NameMapping_FindAllResStatusMappings_keyval0(Nmap_NameMapping self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmap_NameMapping_FindAllResStatusMappings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.NameMapping.NameMapping.resStatusMappings

child link 
to class ResonanceStatusMapping
  @param  Nmap_NameMapping self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmap_NameMapping_FindAllResStatusMappings_keyval1(Nmap_NameMapping self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmap_NameMapping_FindAllResStatusMappings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.NameMapping.NameMapping.resStatusMappings

child link 
to class ResonanceStatusMapping
  @param  Nmap_NameMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmap_NameMapping_FindAllResStatusMappings_keyval2(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmap_NameMapping_FindAllResStatusMappings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.NameMapping.NameMapping.resStatusMappings

child link 
to class ResonanceStatusMapping
  @param  Nmap_NameMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmap_NameMapping_FindAllResStatusMappings_keyval3(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmap_NameMapping_FindAllResStatusMappings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccpnmr.NameMapping.NameMapping.resStatusMappings

child link 
to class ResonanceStatusMapping
  @param  Nmap_NameMapping self
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
ApiSet Nmap_NameMapping_FindAllResStatusMappings_keyval4(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmap_NameMapping_FindAllResStatusMappings(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_NameMapping self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmap_NameMapping_FindFirstApplicationData(Nmap_NameMapping self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.NameMapping: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.NameMapping: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nmap_NameMapping self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmap_NameMapping_FindFirstApplicationData_keyval0(Nmap_NameMapping self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmap_NameMapping_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_NameMapping self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmap_NameMapping_FindFirstApplicationData_keyval1(Nmap_NameMapping self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmap_NameMapping_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_NameMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmap_NameMapping_FindFirstApplicationData_keyval2(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmap_NameMapping_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_NameMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmap_NameMapping_FindFirstApplicationData_keyval3(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmap_NameMapping_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_NameMapping self
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
Impl_ApplicationData Nmap_NameMapping_FindFirstApplicationData_keyval4(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmap_NameMapping_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.NameMapping.NameMapping.atomMappings

child link to 
class AtomMapping
  @param  Nmap_NameMapping self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmap_AtomMapping Nmap_NameMapping_FindFirstAtomMapping(Nmap_NameMapping self, ApiMap conditions)
{
  
  Nmap_AtomMapping obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstAtomMapping");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.NameMapping: cannot find method 'findFirstAtomMapping'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.NameMapping: method 'findFirstAtomMapping' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccpnmr.NameMapping.NameMapping.atomMappings

child link to 
class AtomMapping
  @param  Nmap_NameMapping self
  @returns  the first value that satisfies the conditions 
**/
Nmap_AtomMapping Nmap_NameMapping_FindFirstAtomMapping_keyval0(Nmap_NameMapping self)
{
  
  Nmap_AtomMapping  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmap_NameMapping_FindFirstAtomMapping(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.NameMapping.NameMapping.atomMappings

child link to 
class AtomMapping
  @param  Nmap_NameMapping self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmap_AtomMapping Nmap_NameMapping_FindFirstAtomMapping_keyval1(Nmap_NameMapping self, char * key, ApiObject value)
{
  
  Nmap_AtomMapping  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmap_NameMapping_FindFirstAtomMapping(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.NameMapping.NameMapping.atomMappings

child link to 
class AtomMapping
  @param  Nmap_NameMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmap_AtomMapping Nmap_NameMapping_FindFirstAtomMapping_keyval2(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmap_AtomMapping  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmap_NameMapping_FindFirstAtomMapping(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.NameMapping.NameMapping.atomMappings

child link to 
class AtomMapping
  @param  Nmap_NameMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmap_AtomMapping Nmap_NameMapping_FindFirstAtomMapping_keyval3(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmap_AtomMapping  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmap_NameMapping_FindFirstAtomMapping(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.NameMapping.NameMapping.atomMappings

child link to 
class AtomMapping
  @param  Nmap_NameMapping self
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
Nmap_AtomMapping Nmap_NameMapping_FindFirstAtomMapping_keyval4(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmap_AtomMapping  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmap_NameMapping_FindFirstAtomMapping(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.NameMapping.NameMapping.chainMappings

child link 
to class ChainMapping
  @param  Nmap_NameMapping self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmap_ChainMapping Nmap_NameMapping_FindFirstChainMapping(Nmap_NameMapping self, ApiMap conditions)
{
  
  Nmap_ChainMapping obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChainMapping");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.NameMapping: cannot find method 'findFirstChainMapping'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.NameMapping: method 'findFirstChainMapping' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccpnmr.NameMapping.NameMapping.chainMappings

child link 
to class ChainMapping
  @param  Nmap_NameMapping self
  @returns  the first value that satisfies the conditions 
**/
Nmap_ChainMapping Nmap_NameMapping_FindFirstChainMapping_keyval0(Nmap_NameMapping self)
{
  
  Nmap_ChainMapping  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmap_NameMapping_FindFirstChainMapping(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.NameMapping.NameMapping.chainMappings

child link 
to class ChainMapping
  @param  Nmap_NameMapping self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmap_ChainMapping Nmap_NameMapping_FindFirstChainMapping_keyval1(Nmap_NameMapping self, char * key, ApiObject value)
{
  
  Nmap_ChainMapping  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmap_NameMapping_FindFirstChainMapping(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.NameMapping.NameMapping.chainMappings

child link 
to class ChainMapping
  @param  Nmap_NameMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmap_ChainMapping Nmap_NameMapping_FindFirstChainMapping_keyval2(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmap_ChainMapping  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmap_NameMapping_FindFirstChainMapping(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.NameMapping.NameMapping.chainMappings

child link 
to class ChainMapping
  @param  Nmap_NameMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmap_ChainMapping Nmap_NameMapping_FindFirstChainMapping_keyval3(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmap_ChainMapping  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmap_NameMapping_FindFirstChainMapping(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.NameMapping.NameMapping.chainMappings

child link 
to class ChainMapping
  @param  Nmap_NameMapping self
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
Nmap_ChainMapping Nmap_NameMapping_FindFirstChainMapping_keyval4(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmap_ChainMapping  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmap_NameMapping_FindFirstChainMapping(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.NameMapping.NameMapping.moleculeMappings

child 
link to class MoleculeMapping
  @param  Nmap_NameMapping self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmap_MoleculeMapping Nmap_NameMapping_FindFirstMoleculeMapping(Nmap_NameMapping self, ApiMap conditions)
{
  
  Nmap_MoleculeMapping obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstMoleculeMapping");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.NameMapping: cannot find method 'findFirstMoleculeMapping'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.NameMapping: method 'findFirstMoleculeMapping' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccpnmr.NameMapping.NameMapping.moleculeMappings

child 
link to class MoleculeMapping
  @param  Nmap_NameMapping self
  @returns  the first value that satisfies the conditions 
**/
Nmap_MoleculeMapping Nmap_NameMapping_FindFirstMoleculeMapping_keyval0(Nmap_NameMapping self)
{
  
  Nmap_MoleculeMapping  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmap_NameMapping_FindFirstMoleculeMapping(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.NameMapping.NameMapping.moleculeMappings

child 
link to class MoleculeMapping
  @param  Nmap_NameMapping self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmap_MoleculeMapping Nmap_NameMapping_FindFirstMoleculeMapping_keyval1(Nmap_NameMapping self, char * key, ApiObject value)
{
  
  Nmap_MoleculeMapping  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmap_NameMapping_FindFirstMoleculeMapping(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.NameMapping.NameMapping.moleculeMappings

child 
link to class MoleculeMapping
  @param  Nmap_NameMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmap_MoleculeMapping Nmap_NameMapping_FindFirstMoleculeMapping_keyval2(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmap_MoleculeMapping  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmap_NameMapping_FindFirstMoleculeMapping(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.NameMapping.NameMapping.moleculeMappings

child 
link to class MoleculeMapping
  @param  Nmap_NameMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmap_MoleculeMapping Nmap_NameMapping_FindFirstMoleculeMapping_keyval3(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmap_MoleculeMapping  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmap_NameMapping_FindFirstMoleculeMapping(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.NameMapping.NameMapping.moleculeMappings

child 
link to class MoleculeMapping
  @param  Nmap_NameMapping self
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
Nmap_MoleculeMapping Nmap_NameMapping_FindFirstMoleculeMapping_keyval4(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmap_MoleculeMapping  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmap_NameMapping_FindFirstMoleculeMapping(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.NameMapping.NameMapping.resLinkMappings

child link 
to class ResonanceLinkMapping
  @param  Nmap_NameMapping self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmap_ResonanceLinkMapping Nmap_NameMapping_FindFirstResLinkMapping(Nmap_NameMapping self, ApiMap conditions)
{
  
  Nmap_ResonanceLinkMapping obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstResLinkMapping");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.NameMapping: cannot find method 'findFirstResLinkMapping'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.NameMapping: method 'findFirstResLinkMapping' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccpnmr.NameMapping.NameMapping.resLinkMappings

child link 
to class ResonanceLinkMapping
  @param  Nmap_NameMapping self
  @returns  the first value that satisfies the conditions 
**/
Nmap_ResonanceLinkMapping Nmap_NameMapping_FindFirstResLinkMapping_keyval0(Nmap_NameMapping self)
{
  
  Nmap_ResonanceLinkMapping  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmap_NameMapping_FindFirstResLinkMapping(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.NameMapping.NameMapping.resLinkMappings

child link 
to class ResonanceLinkMapping
  @param  Nmap_NameMapping self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmap_ResonanceLinkMapping Nmap_NameMapping_FindFirstResLinkMapping_keyval1(Nmap_NameMapping self, char * key, ApiObject value)
{
  
  Nmap_ResonanceLinkMapping  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmap_NameMapping_FindFirstResLinkMapping(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.NameMapping.NameMapping.resLinkMappings

child link 
to class ResonanceLinkMapping
  @param  Nmap_NameMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmap_ResonanceLinkMapping Nmap_NameMapping_FindFirstResLinkMapping_keyval2(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmap_ResonanceLinkMapping  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmap_NameMapping_FindFirstResLinkMapping(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.NameMapping.NameMapping.resLinkMappings

child link 
to class ResonanceLinkMapping
  @param  Nmap_NameMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmap_ResonanceLinkMapping Nmap_NameMapping_FindFirstResLinkMapping_keyval3(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmap_ResonanceLinkMapping  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmap_NameMapping_FindFirstResLinkMapping(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.NameMapping.NameMapping.resLinkMappings

child link 
to class ResonanceLinkMapping
  @param  Nmap_NameMapping self
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
Nmap_ResonanceLinkMapping Nmap_NameMapping_FindFirstResLinkMapping_keyval4(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmap_ResonanceLinkMapping  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmap_NameMapping_FindFirstResLinkMapping(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.NameMapping.NameMapping.resStatusMappings

child 
link to class ResonanceStatusMapping
  @param  Nmap_NameMapping self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmap_ResonanceStatusMapping Nmap_NameMapping_FindFirstResStatusMapping(Nmap_NameMapping self, ApiMap conditions)
{
  
  Nmap_ResonanceStatusMapping obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstResStatusMapping");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.NameMapping: cannot find method 'findFirstResStatusMapping'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.NameMapping: method 'findFirstResStatusMapping' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccpnmr.NameMapping.NameMapping.resStatusMappings

child 
link to class ResonanceStatusMapping
  @param  Nmap_NameMapping self
  @returns  the first value that satisfies the conditions 
**/
Nmap_ResonanceStatusMapping Nmap_NameMapping_FindFirstResStatusMapping_keyval0(Nmap_NameMapping self)
{
  
  Nmap_ResonanceStatusMapping  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmap_NameMapping_FindFirstResStatusMapping(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.NameMapping.NameMapping.resStatusMappings

child 
link to class ResonanceStatusMapping
  @param  Nmap_NameMapping self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmap_ResonanceStatusMapping Nmap_NameMapping_FindFirstResStatusMapping_keyval1(Nmap_NameMapping self, char * key, ApiObject value)
{
  
  Nmap_ResonanceStatusMapping  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmap_NameMapping_FindFirstResStatusMapping(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.NameMapping.NameMapping.resStatusMappings

child 
link to class ResonanceStatusMapping
  @param  Nmap_NameMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmap_ResonanceStatusMapping Nmap_NameMapping_FindFirstResStatusMapping_keyval2(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmap_ResonanceStatusMapping  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmap_NameMapping_FindFirstResStatusMapping(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.NameMapping.NameMapping.resStatusMappings

child 
link to class ResonanceStatusMapping
  @param  Nmap_NameMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmap_ResonanceStatusMapping Nmap_NameMapping_FindFirstResStatusMapping_keyval3(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmap_ResonanceStatusMapping  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmap_NameMapping_FindFirstResStatusMapping(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccpnmr.NameMapping.NameMapping.resStatusMappings

child 
link to class ResonanceStatusMapping
  @param  Nmap_NameMapping self
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
Nmap_ResonanceStatusMapping Nmap_NameMapping_FindFirstResStatusMapping_keyval4(Nmap_NameMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmap_ResonanceStatusMapping  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmap_NameMapping_FindFirstResStatusMapping(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccpnmr.NameMapping.NameMapping
  @param  Nmap_NameMapping self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Nmap_NameMapping_Get(Nmap_NameMapping self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmap_NameMapping self
  @returns   the result
**/
Acco_AccessObject Nmap_NameMapping_GetAccess(Nmap_NameMapping self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.NameMapping: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.NameMapping: method 'getAccess' is not callable");
  
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
  @param  Nmap_NameMapping self
  @returns   the result
**/
ApiList Nmap_NameMapping_GetApplicationData(Nmap_NameMapping self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.NameMapping: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.NameMapping: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.NameMapping.NameMapping.atomMappings

child link to class 
AtomMapping
  @param  Nmap_NameMapping self
  @returns   the result
**/
ApiSet Nmap_NameMapping_GetAtomMappings(Nmap_NameMapping self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAtomMappings");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.NameMapping: cannot find method 'getAtomMappings'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.NameMapping: method 'getAtomMappings' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccpnmr.NameMapping.NameMapping
  @param  Nmap_NameMapping self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nmap_NameMapping Nmap_NameMapping_GetByKey(Nmap_NameMapping self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Nmap_NameMapping obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.NameMapping: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.NameMapping: method 'getByKey' is not callable");
  
  args = PyTuple_Pack(2, startObj, fullKey);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.NameMapping.NameMapping.chainMappings

child link to 
class ChainMapping
  @param  Nmap_NameMapping self
  @returns   the result
**/
ApiSet Nmap_NameMapping_GetChainMappings(Nmap_NameMapping self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChainMappings");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.NameMapping: cannot find method 'getChainMappings'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.NameMapping: method 'getChainMappings' is not callable");
  
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
  @param  Nmap_NameMapping self
  @returns   the result
**/
ApiString Nmap_NameMapping_GetClassName(Nmap_NameMapping self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.NameMapping: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.NameMapping: method 'getClassName' is not callable");
  
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
  @param  Nmap_NameMapping self
  @returns   the result
**/
ApiList Nmap_NameMapping_GetFieldNames(Nmap_NameMapping self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.NameMapping: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.NameMapping: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.NameMapping.NameMapping.formatName

The name of the 
external format (e.g. XEASY, NmrView, ..)
  @param  Nmap_NameMapping self
  @returns   the result
**/
ApiString Nmap_NameMapping_GetFormatName(Nmap_NameMapping self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFormatName");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.NameMapping: cannot find method 'getFormatName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.NameMapping: method 'getFormatName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccpnmr.NameMapping.NameMapping
  @param  Nmap_NameMapping self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Nmap_NameMapping_GetFullKey(Nmap_NameMapping self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.NameMapping: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.NameMapping: method 'getFullKey' is not callable");
  
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
  @param  Nmap_NameMapping self
  @returns   the result
**/
ApiBoolean Nmap_NameMapping_GetInConstructor(Nmap_NameMapping self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.NameMapping: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.NameMapping: method 'getInConstructor' is not callable");
  
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
  @param  Nmap_NameMapping self
  @returns   the result
**/
ApiBoolean Nmap_NameMapping_GetIsDeleted(Nmap_NameMapping self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.NameMapping: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.NameMapping: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.NameMapping.NameMapping.isOriginalImport

Flag that has 
to be set when this mapping was created when importing a file.
  @param  Nmap_NameMapping self
  @returns   the result
**/
ApiBoolean Nmap_NameMapping_GetIsOriginalImport(Nmap_NameMapping self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsOriginalImport");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.NameMapping: cannot find method 'getIsOriginalImport'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.NameMapping: method 'getIsOriginalImport' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccpnmr.NameMapping.NameMapping
  @param  Nmap_NameMapping self
  @returns  Local object key
**/
ApiObject Nmap_NameMapping_GetLocalKey(Nmap_NameMapping self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.NameMapping: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.NameMapping: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.NameMapping.NameMapping.moleculeMappings

child link to 
class MoleculeMapping
  @param  Nmap_NameMapping self
  @returns   the result
**/
ApiSet Nmap_NameMapping_GetMoleculeMappings(Nmap_NameMapping self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMoleculeMappings");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.NameMapping: cannot find method 'getMoleculeMappings'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.NameMapping: method 'getMoleculeMappings' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.NameMapping.NameMapping.nameMappingStore

parent link
  @param  Nmap_NameMapping self
  @returns   the result
**/
Nmap_NameMappingStore Nmap_NameMapping_GetNameMappingStore(Nmap_NameMapping self)
{
  
  Nmap_NameMappingStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNameMappingStore");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.NameMapping: cannot find method 'getNameMappingStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.NameMapping: method 'getNameMappingStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.NameMapping.NameMapping.namingSystem

The naming system 
used in this particular mapping (e.g. IUPAC, PDB, ...). This can be 
different from the formatName - for example an NMR-STAR file might 
contain only X-PLOR author names in some cases.
  @param  Nmap_NameMapping self
  @returns   the result
**/
ApiString Nmap_NameMapping_GetNamingSystem(Nmap_NameMapping self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNamingSystem");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.NameMapping: cannot find method 'getNamingSystem'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.NameMapping: method 'getNamingSystem' is not callable");
  
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
  @param  Nmap_NameMapping self
  @returns   the result
**/
ApiString Nmap_NameMapping_GetPackageName(Nmap_NameMapping self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.NameMapping: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.NameMapping: method 'getPackageName' is not callable");
  
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
  @param  Nmap_NameMapping self
  @returns   the result
**/
ApiString Nmap_NameMapping_GetPackageShortName(Nmap_NameMapping self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.NameMapping: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.NameMapping: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.NameMapping.NameMapping.parent

link to parent object - 
synonym for nameMappingStore
  @param  Nmap_NameMapping self
  @returns   the result
**/
Nmap_NameMappingStore Nmap_NameMapping_GetParent(Nmap_NameMapping self)
{
  
  Nmap_NameMappingStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.NameMapping: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.NameMapping: method 'getParent' is not callable");
  
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
  @param  Nmap_NameMapping self
  @returns   the result
**/
ApiString Nmap_NameMapping_GetQualifiedName(Nmap_NameMapping self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.NameMapping: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.NameMapping: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.NameMapping.NameMapping.resLinkMappings

child link to 
class ResonanceLinkMapping
  @param  Nmap_NameMapping self
  @returns   the result
**/
ApiSet Nmap_NameMapping_GetResLinkMappings(Nmap_NameMapping self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getResLinkMappings");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.NameMapping: cannot find method 'getResLinkMappings'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.NameMapping: method 'getResLinkMappings' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.NameMapping.NameMapping.resStatusMappings

child link to 
class ResonanceStatusMapping
  @param  Nmap_NameMapping self
  @returns   the result
**/
ApiSet Nmap_NameMapping_GetResStatusMappings(Nmap_NameMapping self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getResStatusMappings");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.NameMapping: cannot find method 'getResStatusMappings'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.NameMapping: method 'getResStatusMappings' is not callable");
  
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
  @param  Nmap_NameMapping self
  @returns   the result
**/
Impl_MemopsRoot Nmap_NameMapping_GetRoot(Nmap_NameMapping self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.NameMapping: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.NameMapping: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.NameMapping.NameMapping.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Nmap_NameMapping self
  @returns   the result
**/
ApiInteger Nmap_NameMapping_GetSerial(Nmap_NameMapping self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.NameMapping: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.NameMapping: method 'getSerial' is not callable");
  
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
  @param  Nmap_NameMapping self
  @returns   the result
**/
Impl_TopObject Nmap_NameMapping_GetTopObject(Nmap_NameMapping self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.NameMapping: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.NameMapping: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccpnmr.NameMapping.NameMapping
  @param  Nmap_NameMappingStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmap_NameMapping Nmap_NameMapping_Init(Nmap_NameMappingStore parent, ApiMap attrlinks)
{
  
  return Nmap_NameMappingStore_NewNameMapping(parent, attrlinks);
}

/**
  Constructor for ccpnmr.NameMapping.NameMapping
  @param  Nmap_NameMappingStore parent
  @param  char * formatName
  @param  char * namingSystem
  @returns  the new object
**/
Nmap_NameMapping Nmap_NameMapping_Init_reqd(Nmap_NameMappingStore parent, char * formatName, char * namingSystem)
{
  
  Nmap_NameMapping  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__formatName = ApiString_New(formatName);
  ApiString api__namingSystem = ApiString_New(namingSystem);

  PyDict_SetItemString(attrlinks, "formatName", api__formatName);
  PyDict_SetItemString(attrlinks, "namingSystem", api__namingSystem);
  
  obj = Nmap_NameMapping_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__formatName);
  Py_DECREF(api__namingSystem);
  
  return obj;
}

/**
  Factory function to create ccpnmr.NameMapping.AtomMapping
  @param  Nmap_NameMapping self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmap_AtomMapping Nmap_NameMapping_NewAtomMapping(Nmap_NameMapping self, ApiMap attrlinks)
{
  
  Nmap_AtomMapping obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newAtomMapping");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.NameMapping: cannot find method 'newAtomMapping'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.NameMapping: method 'newAtomMapping' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccpnmr.NameMapping.AtomMapping
  @param  Nmap_NameMapping self
  @param  char * formatName
  @param  char * name
  @returns  the new object
**/
Nmap_AtomMapping Nmap_NameMapping_NewAtomMapping_reqd(Nmap_NameMapping self, char * formatName, char * name)
{
  
  Nmap_AtomMapping  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__formatName = ApiString_New(formatName);
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "formatName", api__formatName);
  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Nmap_NameMapping_NewAtomMapping(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__formatName);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccpnmr.NameMapping.ChainMapping
  @param  Nmap_NameMapping self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmap_ChainMapping Nmap_NameMapping_NewChainMapping(Nmap_NameMapping self, ApiMap attrlinks)
{
  
  Nmap_ChainMapping obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newChainMapping");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.NameMapping: cannot find method 'newChainMapping'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.NameMapping: method 'newChainMapping' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccpnmr.NameMapping.ChainMapping
  @param  Nmap_NameMapping self
  @param  char * chainCode
  @param  char * formatChainCode
  @param  ApiInteger formatFirstSeqCode
  @returns  the new object
**/
Nmap_ChainMapping Nmap_NameMapping_NewChainMapping_reqd(Nmap_NameMapping self, char * chainCode, char * formatChainCode, ApiInteger formatFirstSeqCode)
{
  
  Nmap_ChainMapping  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__chainCode = ApiString_New(chainCode);
  ApiString api__formatChainCode = ApiString_New(formatChainCode);

  PyDict_SetItemString(attrlinks, "chainCode", api__chainCode);
  PyDict_SetItemString(attrlinks, "formatChainCode", api__formatChainCode);
  PyDict_SetItemString(attrlinks, "formatFirstSeqCode", formatFirstSeqCode);
  
  obj = Nmap_NameMapping_NewChainMapping(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__chainCode);
  Py_DECREF(api__formatChainCode);
  
  return obj;
}

/**
  Factory function to create ccpnmr.NameMapping.MoleculeMapping
  @param  Nmap_NameMapping self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmap_MoleculeMapping Nmap_NameMapping_NewMoleculeMapping(Nmap_NameMapping self, ApiMap attrlinks)
{
  
  Nmap_MoleculeMapping obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newMoleculeMapping");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.NameMapping: cannot find method 'newMoleculeMapping'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.NameMapping: method 'newMoleculeMapping' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccpnmr.NameMapping.MoleculeMapping
  @param  Nmap_NameMapping self
  @param  char * formatName
  @param  char * name
  @returns  the new object
**/
Nmap_MoleculeMapping Nmap_NameMapping_NewMoleculeMapping_reqd(Nmap_NameMapping self, char * formatName, char * name)
{
  
  Nmap_MoleculeMapping  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__formatName = ApiString_New(formatName);
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "formatName", api__formatName);
  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Nmap_NameMapping_NewMoleculeMapping(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__formatName);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccpnmr.NameMapping.ResonanceLinkMapping
  @param  Nmap_NameMapping self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmap_ResonanceLinkMapping Nmap_NameMapping_NewResonanceLinkMapping(Nmap_NameMapping self, ApiMap attrlinks)
{
  
  Nmap_ResonanceLinkMapping obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newResonanceLinkMapping");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.NameMapping: cannot find method 'newResonanceLinkMapping'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.NameMapping: method 'newResonanceLinkMapping' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccpnmr.NameMapping.ResonanceLinkMapping
  @param  Nmap_NameMapping self
  @param  char * resonanceName
  @returns  the new object
**/
Nmap_ResonanceLinkMapping Nmap_NameMapping_NewResonanceLinkMapping_reqd(Nmap_NameMapping self, char * resonanceName)
{
  
  Nmap_ResonanceLinkMapping  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__resonanceName = ApiString_New(resonanceName);

  PyDict_SetItemString(attrlinks, "resonanceName", api__resonanceName);
  
  obj = Nmap_NameMapping_NewResonanceLinkMapping(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__resonanceName);
  
  return obj;
}

/**
  Factory function to create ccpnmr.NameMapping.ResonanceStatusMapping
  @param  Nmap_NameMapping self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmap_ResonanceStatusMapping Nmap_NameMapping_NewResonanceStatusMapping(Nmap_NameMapping self, ApiMap attrlinks)
{
  
  Nmap_ResonanceStatusMapping obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newResonanceStatusMapping");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.NameMapping: cannot find method 'newResonanceStatusMapping'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.NameMapping: method 'newResonanceStatusMapping' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccpnmr.NameMapping.ResonanceStatusMapping
  @param  Nmap_NameMapping self
  @param  char * resonanceName
  @returns  the new object
**/
Nmap_ResonanceStatusMapping Nmap_NameMapping_NewResonanceStatusMapping_reqd(Nmap_NameMapping self, char * resonanceName)
{
  
  Nmap_ResonanceStatusMapping  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__resonanceName = ApiString_New(resonanceName);

  PyDict_SetItemString(attrlinks, "resonanceName", api__resonanceName);
  
  obj = Nmap_NameMapping_NewResonanceStatusMapping(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__resonanceName);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_NameMapping self
  @param  Impl_ApplicationData value
**/
void *Nmap_NameMapping_RemoveApplicationData(Nmap_NameMapping self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.NameMapping: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.NameMapping: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccpnmr.NameMapping.NameMapping
  @param  Nmap_NameMapping self
  @param  ApiString name
  @param  ApiObject value
**/
void *Nmap_NameMapping_Set(Nmap_NameMapping self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmap_NameMapping self
  @param  Acco_AccessObject value
**/
void *Nmap_NameMapping_SetAccess(Nmap_NameMapping self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.NameMapping: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.NameMapping: method 'setAccess' is not callable");
  
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
  @param  Nmap_NameMapping self
  @param  ApiList values
**/
void *Nmap_NameMapping_SetApplicationData(Nmap_NameMapping self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.NameMapping: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.NameMapping: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.NameMapping.NameMapping.formatName

The name of the 
external format (e.g. XEASY, NmrView, ..)
  @param  Nmap_NameMapping self
  @param  ApiString value
**/
void *Nmap_NameMapping_SetFormatName(Nmap_NameMapping self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setFormatName");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.NameMapping: cannot find method 'setFormatName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.NameMapping: method 'setFormatName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.NameMapping.NameMapping.isOriginalImport

Flag that has 
to be set when this mapping was created when importing a file.
  @param  Nmap_NameMapping self
  @param  ApiBoolean value
**/
void *Nmap_NameMapping_SetIsOriginalImport(Nmap_NameMapping self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsOriginalImport");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.NameMapping: cannot find method 'setIsOriginalImport'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.NameMapping: method 'setIsOriginalImport' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.NameMapping.NameMapping.namingSystem

The naming system 
used in this particular mapping (e.g. IUPAC, PDB, ...). This can be 
different from the formatName - for example an NMR-STAR file might 
contain only X-PLOR author names in some cases.
  @param  Nmap_NameMapping self
  @param  ApiString value
**/
void *Nmap_NameMapping_SetNamingSystem(Nmap_NameMapping self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNamingSystem");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.NameMapping: cannot find method 'setNamingSystem'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.NameMapping: method 'setNamingSystem' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.NameMapping.NameMapping.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Nmap_NameMapping self
  @param  ApiInteger value
**/
void *Nmap_NameMapping_SetSerial(Nmap_NameMapping self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.NameMapping: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.NameMapping: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccpnmr.NameMapping.NameMapping.atomMappings

child link to 
class AtomMapping
  @param  Nmap_NameMapping self
  @returns   the result
**/
ApiList Nmap_NameMapping_SortedAtomMappings(Nmap_NameMapping self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedAtomMappings");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.NameMapping: cannot find method 'sortedAtomMappings'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.NameMapping: method 'sortedAtomMappings' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccpnmr.NameMapping.NameMapping.chainMappings

child link to 
class ChainMapping
  @param  Nmap_NameMapping self
  @returns   the result
**/
ApiList Nmap_NameMapping_SortedChainMappings(Nmap_NameMapping self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChainMappings");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.NameMapping: cannot find method 'sortedChainMappings'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.NameMapping: method 'sortedChainMappings' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccpnmr.NameMapping.NameMapping.moleculeMappings

child link 
to class MoleculeMapping
  @param  Nmap_NameMapping self
  @returns   the result
**/
ApiList Nmap_NameMapping_SortedMoleculeMappings(Nmap_NameMapping self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedMoleculeMappings");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.NameMapping: cannot find method 'sortedMoleculeMappings'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.NameMapping: method 'sortedMoleculeMappings' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccpnmr.NameMapping.NameMapping.resLinkMappings

child link to 
class ResonanceLinkMapping
  @param  Nmap_NameMapping self
  @returns   the result
**/
ApiList Nmap_NameMapping_SortedResLinkMappings(Nmap_NameMapping self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedResLinkMappings");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.NameMapping: cannot find method 'sortedResLinkMappings'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.NameMapping: method 'sortedResLinkMappings' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccpnmr.NameMapping.NameMapping.resStatusMappings

child link 
to class ResonanceStatusMapping
  @param  Nmap_NameMapping self
  @returns   the result
**/
ApiList Nmap_NameMapping_SortedResStatusMappings(Nmap_NameMapping self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedResStatusMappings");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.NameMapping: cannot find method 'sortedResStatusMappings'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.NameMapping: method 'sortedResStatusMappings' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
