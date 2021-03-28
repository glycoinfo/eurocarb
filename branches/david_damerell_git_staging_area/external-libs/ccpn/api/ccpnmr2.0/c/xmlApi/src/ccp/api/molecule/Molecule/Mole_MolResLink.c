
#include "ccp.h"

/*
  Link (bond) between two molResidues, through their MolResLinkEnds. MolResLinks that are valid for a Molecule are implicitly valid also for Chains linked to that Molecule. Unlike MolResLinkEnds, MolResLinks can be created (or modified) for existing molecules, even if the Molecule is linked to one or more Chains. This allows linkages to be redefined, or to be left as initially unknown (as in the case of a protein with unknown disulfide binding topology). 
*/

/* package ccp.api.molecule.Molecule */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MolResLink self
  @param  Impl_ApplicationData value
**/
void *Mole_MolResLink_AddApplicationData(Mole_MolResLink self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResLink: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResLink: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.molecule.Molecule.MolResLink
  @param  Mole_MolResLink self
  @param  ApiBoolean complete
**/
void *Mole_MolResLink_CheckAllValid(Mole_MolResLink self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResLink: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResLink: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.molecule.Molecule.MolResLink
  @param  Mole_MolResLink self
  @param  ApiBoolean complete
**/
void *Mole_MolResLink_CheckValid(Mole_MolResLink self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResLink: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResLink: method 'checkValid' is not callable");
  
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
  @param  Mole_MolResLink self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Mole_MolResLink_FindAllApplicationData(Mole_MolResLink self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResLink: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResLink: method 'findAllApplicationData' is not callable");
  
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
  @param  Mole_MolResLink self
  @returns  all value that satisfy the conditions 
**/
ApiList Mole_MolResLink_FindAllApplicationData_keyval0(Mole_MolResLink self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mole_MolResLink_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MolResLink self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Mole_MolResLink_FindAllApplicationData_keyval1(Mole_MolResLink self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mole_MolResLink_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MolResLink self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Mole_MolResLink_FindAllApplicationData_keyval2(Mole_MolResLink self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mole_MolResLink_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MolResLink self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Mole_MolResLink_FindAllApplicationData_keyval3(Mole_MolResLink self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mole_MolResLink_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MolResLink self
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
ApiList Mole_MolResLink_FindAllApplicationData_keyval4(Mole_MolResLink self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mole_MolResLink_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.MolResLink.molResLinkEnds

LinkEnds 
that make up the MolSystemLink
  @param  Mole_MolResLink self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_MolResLink_FindAllMolResLinkEnds(Mole_MolResLink self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllMolResLinkEnds");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResLink: cannot find method 'findAllMolResLinkEnds'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResLink: method 'findAllMolResLinkEnds' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.MolResLink.molResLinkEnds

LinkEnds 
that make up the MolSystemLink
  @param  Mole_MolResLink self
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_MolResLink_FindAllMolResLinkEnds_keyval0(Mole_MolResLink self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mole_MolResLink_FindAllMolResLinkEnds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.MolResLink.molResLinkEnds

LinkEnds 
that make up the MolSystemLink
  @param  Mole_MolResLink self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_MolResLink_FindAllMolResLinkEnds_keyval1(Mole_MolResLink self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mole_MolResLink_FindAllMolResLinkEnds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.MolResLink.molResLinkEnds

LinkEnds 
that make up the MolSystemLink
  @param  Mole_MolResLink self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_MolResLink_FindAllMolResLinkEnds_keyval2(Mole_MolResLink self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mole_MolResLink_FindAllMolResLinkEnds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.MolResLink.molResLinkEnds

LinkEnds 
that make up the MolSystemLink
  @param  Mole_MolResLink self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_MolResLink_FindAllMolResLinkEnds_keyval3(Mole_MolResLink self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mole_MolResLink_FindAllMolResLinkEnds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.MolResLink.molResLinkEnds

LinkEnds 
that make up the MolSystemLink
  @param  Mole_MolResLink self
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
ApiSet Mole_MolResLink_FindAllMolResLinkEnds_keyval4(Mole_MolResLink self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mole_MolResLink_FindAllMolResLinkEnds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MolResLink self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Mole_MolResLink_FindFirstApplicationData(Mole_MolResLink self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResLink: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResLink: method 'findFirstApplicationData' is not callable");
  
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
  @param  Mole_MolResLink self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Mole_MolResLink_FindFirstApplicationData_keyval0(Mole_MolResLink self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mole_MolResLink_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MolResLink self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Mole_MolResLink_FindFirstApplicationData_keyval1(Mole_MolResLink self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mole_MolResLink_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MolResLink self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Mole_MolResLink_FindFirstApplicationData_keyval2(Mole_MolResLink self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mole_MolResLink_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MolResLink self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Mole_MolResLink_FindFirstApplicationData_keyval3(Mole_MolResLink self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mole_MolResLink_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MolResLink self
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
Impl_ApplicationData Mole_MolResLink_FindFirstApplicationData_keyval4(Mole_MolResLink self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mole_MolResLink_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.MolResLink.molResLinkEnds

LinkEnds 
that make up the MolSystemLink
  @param  Mole_MolResLink self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Mole_MolResLinkEnd Mole_MolResLink_FindFirstMolResLinkEnd(Mole_MolResLink self, ApiMap conditions)
{
  
  Mole_MolResLinkEnd obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstMolResLinkEnd");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResLink: cannot find method 'findFirstMolResLinkEnd'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResLink: method 'findFirstMolResLinkEnd' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.MolResLink.molResLinkEnds

LinkEnds 
that make up the MolSystemLink
  @param  Mole_MolResLink self
  @returns  the first value that satisfies the conditions 
**/
Mole_MolResLinkEnd Mole_MolResLink_FindFirstMolResLinkEnd_keyval0(Mole_MolResLink self)
{
  
  Mole_MolResLinkEnd  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mole_MolResLink_FindFirstMolResLinkEnd(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.MolResLink.molResLinkEnds

LinkEnds 
that make up the MolSystemLink
  @param  Mole_MolResLink self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Mole_MolResLinkEnd Mole_MolResLink_FindFirstMolResLinkEnd_keyval1(Mole_MolResLink self, char * key, ApiObject value)
{
  
  Mole_MolResLinkEnd  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mole_MolResLink_FindFirstMolResLinkEnd(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.MolResLink.molResLinkEnds

LinkEnds 
that make up the MolSystemLink
  @param  Mole_MolResLink self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Mole_MolResLinkEnd Mole_MolResLink_FindFirstMolResLinkEnd_keyval2(Mole_MolResLink self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Mole_MolResLinkEnd  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mole_MolResLink_FindFirstMolResLinkEnd(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.MolResLink.molResLinkEnds

LinkEnds 
that make up the MolSystemLink
  @param  Mole_MolResLink self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Mole_MolResLinkEnd Mole_MolResLink_FindFirstMolResLinkEnd_keyval3(Mole_MolResLink self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Mole_MolResLinkEnd  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mole_MolResLink_FindFirstMolResLinkEnd(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.MolResLink.molResLinkEnds

LinkEnds 
that make up the MolSystemLink
  @param  Mole_MolResLink self
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
Mole_MolResLinkEnd Mole_MolResLink_FindFirstMolResLinkEnd_keyval4(Mole_MolResLink self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Mole_MolResLinkEnd  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mole_MolResLink_FindFirstMolResLinkEnd(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.molecule.Molecule.MolResLink
  @param  Mole_MolResLink self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Mole_MolResLink_Get(Mole_MolResLink self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Mole_MolResLink self
  @returns   the result
**/
Acco_AccessObject Mole_MolResLink_GetAccess(Mole_MolResLink self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResLink: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResLink: method 'getAccess' is not callable");
  
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
  @param  Mole_MolResLink self
  @returns   the result
**/
ApiList Mole_MolResLink_GetApplicationData(Mole_MolResLink self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResLink: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResLink: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.molecule.Molecule.MolResLink
  @param  Mole_MolResLink self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Mole_MolResLink Mole_MolResLink_GetByKey(Mole_MolResLink self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Mole_MolResLink obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResLink: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResLink: method 'getByKey' is not callable");
  
  args = PyTuple_Pack(2, startObj, fullKey);
  
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
  @param  Mole_MolResLink self
  @returns   the result
**/
ApiString Mole_MolResLink_GetClassName(Mole_MolResLink self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResLink: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResLink: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Molecule.MolResLink.dihedralAngle

Approximate 
value in degrees of dihedral angle formed across bond (as defined in the 
ChemComp Link definitions). The value is not precise but serves to 
indicate the conformation of rotationally hindered bonds.
  @param  Mole_MolResLink self
  @returns   the result
**/
ApiInteger Mole_MolResLink_GetDihedralAngle(Mole_MolResLink self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDihedralAngle");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResLink: cannot find method 'getDihedralAngle'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResLink: method 'getDihedralAngle' is not callable");
  
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
  @param  Mole_MolResLink self
  @returns   the result
**/
ApiList Mole_MolResLink_GetFieldNames(Mole_MolResLink self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResLink: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResLink: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.molecule.Molecule.MolResLink
  @param  Mole_MolResLink self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Mole_MolResLink_GetFullKey(Mole_MolResLink self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResLink: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResLink: method 'getFullKey' is not callable");
  
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
  @param  Mole_MolResLink self
  @returns   the result
**/
ApiBoolean Mole_MolResLink_GetInConstructor(Mole_MolResLink self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResLink: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResLink: method 'getInConstructor' is not callable");
  
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
  @param  Mole_MolResLink self
  @returns   the result
**/
ApiBoolean Mole_MolResLink_GetIsDeleted(Mole_MolResLink self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResLink: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResLink: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived attribute isStdLinear
  @param  Mole_MolResLink self
  @returns   the result
**/
ApiBoolean Mole_MolResLink_GetIsStdLinear(Mole_MolResLink self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsStdLinear");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResLink: cannot find method 'getIsStdLinear'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResLink: method 'getIsStdLinear' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.molecule.Molecule.MolResLink
  @param  Mole_MolResLink self
  @returns  Local object key
**/
ApiObject Mole_MolResLink_GetLocalKey(Mole_MolResLink self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResLink: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResLink: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Molecule.MolResLink.molResLinkEnds

LinkEnds that 
make up the MolSystemLink
  @param  Mole_MolResLink self
  @returns   the result
**/
ApiSet Mole_MolResLink_GetMolResLinkEnds(Mole_MolResLink self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolResLinkEnds");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResLink: cannot find method 'getMolResLinkEnds'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResLink: method 'getMolResLinkEnds' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Molecule.MolResLink.molecule

parent link
  @param  Mole_MolResLink self
  @returns   the result
**/
Mole_Molecule Mole_MolResLink_GetMolecule(Mole_MolResLink self)
{
  
  Mole_Molecule obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolecule");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResLink: cannot find method 'getMolecule'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResLink: method 'getMolecule' is not callable");
  
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
  @param  Mole_MolResLink self
  @returns   the result
**/
ApiString Mole_MolResLink_GetPackageName(Mole_MolResLink self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResLink: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResLink: method 'getPackageName' is not callable");
  
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
  @param  Mole_MolResLink self
  @returns   the result
**/
ApiString Mole_MolResLink_GetPackageShortName(Mole_MolResLink self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResLink: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResLink: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Molecule.MolResLink.parent

link to parent object - 
synonym for molecule
  @param  Mole_MolResLink self
  @returns   the result
**/
Mole_Molecule Mole_MolResLink_GetParent(Mole_MolResLink self)
{
  
  Mole_Molecule obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResLink: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResLink: method 'getParent' is not callable");
  
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
  @param  Mole_MolResLink self
  @returns   the result
**/
ApiString Mole_MolResLink_GetQualifiedName(Mole_MolResLink self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResLink: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResLink: method 'getQualifiedName' is not callable");
  
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
  @param  Mole_MolResLink self
  @returns   the result
**/
Impl_MemopsRoot Mole_MolResLink_GetRoot(Mole_MolResLink self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResLink: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResLink: method 'getRoot' is not callable");
  
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
  @param  Mole_MolResLink self
  @returns   the result
**/
Impl_TopObject Mole_MolResLink_GetTopObject(Mole_MolResLink self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResLink: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResLink: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.molecule.Molecule.MolResLink
  @param  Mole_Molecule parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Mole_MolResLink Mole_MolResLink_Init(Mole_Molecule parent, ApiMap attrlinks)
{
  
  return Mole_Molecule_NewMolResLink(parent, attrlinks);
}

/**
  Constructor for ccp.molecule.Molecule.MolResLink
  @param  Mole_Molecule parent
  @param  ApiSet molResLinkEnds
  @returns  the new object
**/
Mole_MolResLink Mole_MolResLink_Init_reqd(Mole_Molecule parent, ApiSet molResLinkEnds)
{
  
  Mole_MolResLink  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "molResLinkEnds", molResLinkEnds);
  
  obj = Mole_MolResLink_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_MolResLink self
  @param  Impl_ApplicationData value
**/
void *Mole_MolResLink_RemoveApplicationData(Mole_MolResLink self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResLink: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResLink: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.molecule.Molecule.MolResLink
  @param  Mole_MolResLink self
  @param  ApiString name
  @param  ApiObject value
**/
void *Mole_MolResLink_Set(Mole_MolResLink self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Mole_MolResLink self
  @param  Acco_AccessObject value
**/
void *Mole_MolResLink_SetAccess(Mole_MolResLink self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResLink: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResLink: method 'setAccess' is not callable");
  
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
  @param  Mole_MolResLink self
  @param  ApiList values
**/
void *Mole_MolResLink_SetApplicationData(Mole_MolResLink self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResLink: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResLink: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.Molecule.MolResLink.dihedralAngle

Approximate 
value in degrees of dihedral angle formed across bond (as defined in the 
ChemComp Link definitions). The value is not precise but serves to 
indicate the conformation of rotationally hindered bonds.
  @param  Mole_MolResLink self
  @param  ApiInteger value
**/
void *Mole_MolResLink_SetDihedralAngle(Mole_MolResLink self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDihedralAngle");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResLink: cannot find method 'setDihedralAngle'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResLink: method 'setDihedralAngle' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.Molecule.MolResLink.molResLinkEnds

LinkEnds that 
make up the MolSystemLink
  @param  Mole_MolResLink self
  @param  ApiSet values
**/
void *Mole_MolResLink_SetMolResLinkEnds(Mole_MolResLink self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMolResLinkEnds");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResLink: cannot find method 'setMolResLinkEnds'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResLink: method 'setMolResLinkEnds' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.Molecule.MolResLink.molResLinkEnds

LinkEnds 
that make up the MolSystemLink
  @param  Mole_MolResLink self
  @returns   the result
**/
ApiList Mole_MolResLink_SortedMolResLinkEnds(Mole_MolResLink self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedMolResLinkEnds");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.MolResLink: cannot find method 'sortedMolResLinkEnds'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.MolResLink: method 'sortedMolResLinkEnds' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
