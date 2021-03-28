
#include "ccp.h"

/*
  Link between two ChemComps (bulding blocks) not already described in the Molecule description. Intended for intermolecular links, additional crosslinks, or links whose location was not known precisely when describing the Molecule. Disulfide bonds would be a good example for either category. Part of the description of MolSystem level additional links.
*/

/* package ccp.api.molecule.MolSystem */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_MolSystemLink self
  @param  Impl_ApplicationData value
**/
void *Mols_MolSystemLink_AddApplicationData(Mols_MolSystemLink self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLink: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLink: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.molecule.MolSystem.MolSystemLink
  @param  Mols_MolSystemLink self
  @param  ApiBoolean complete
**/
void *Mols_MolSystemLink_CheckAllValid(Mols_MolSystemLink self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLink: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLink: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.molecule.MolSystem.MolSystemLink
  @param  Mols_MolSystemLink self
  @param  ApiBoolean complete
**/
void *Mols_MolSystemLink_CheckValid(Mols_MolSystemLink self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLink: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLink: method 'checkValid' is not callable");
  
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
  @param  Mols_MolSystemLink self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Mols_MolSystemLink_FindAllApplicationData(Mols_MolSystemLink self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLink: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLink: method 'findAllApplicationData' is not callable");
  
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
  @param  Mols_MolSystemLink self
  @returns  all value that satisfy the conditions 
**/
ApiList Mols_MolSystemLink_FindAllApplicationData_keyval0(Mols_MolSystemLink self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mols_MolSystemLink_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_MolSystemLink self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Mols_MolSystemLink_FindAllApplicationData_keyval1(Mols_MolSystemLink self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mols_MolSystemLink_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_MolSystemLink self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Mols_MolSystemLink_FindAllApplicationData_keyval2(Mols_MolSystemLink self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mols_MolSystemLink_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_MolSystemLink self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Mols_MolSystemLink_FindAllApplicationData_keyval3(Mols_MolSystemLink self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mols_MolSystemLink_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_MolSystemLink self
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
ApiList Mols_MolSystemLink_FindAllApplicationData_keyval4(Mols_MolSystemLink self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mols_MolSystemLink_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolSystem.MolSystemLink.molSystemLinkEnds

LinkEnds that 
make up the MolSystemLink
  @param  Mols_MolSystemLink self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_MolSystemLink_FindAllMolSystemLinkEnds(Mols_MolSystemLink self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllMolSystemLinkEnds");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLink: cannot find method 'findAllMolSystemLinkEnds'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLink: method 'findAllMolSystemLinkEnds' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolSystem.MolSystemLink.molSystemLinkEnds

LinkEnds that 
make up the MolSystemLink
  @param  Mols_MolSystemLink self
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_MolSystemLink_FindAllMolSystemLinkEnds_keyval0(Mols_MolSystemLink self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mols_MolSystemLink_FindAllMolSystemLinkEnds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolSystem.MolSystemLink.molSystemLinkEnds

LinkEnds that 
make up the MolSystemLink
  @param  Mols_MolSystemLink self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_MolSystemLink_FindAllMolSystemLinkEnds_keyval1(Mols_MolSystemLink self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mols_MolSystemLink_FindAllMolSystemLinkEnds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolSystem.MolSystemLink.molSystemLinkEnds

LinkEnds that 
make up the MolSystemLink
  @param  Mols_MolSystemLink self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_MolSystemLink_FindAllMolSystemLinkEnds_keyval2(Mols_MolSystemLink self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mols_MolSystemLink_FindAllMolSystemLinkEnds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolSystem.MolSystemLink.molSystemLinkEnds

LinkEnds that 
make up the MolSystemLink
  @param  Mols_MolSystemLink self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Mols_MolSystemLink_FindAllMolSystemLinkEnds_keyval3(Mols_MolSystemLink self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mols_MolSystemLink_FindAllMolSystemLinkEnds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.MolSystem.MolSystemLink.molSystemLinkEnds

LinkEnds that 
make up the MolSystemLink
  @param  Mols_MolSystemLink self
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
ApiSet Mols_MolSystemLink_FindAllMolSystemLinkEnds_keyval4(Mols_MolSystemLink self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mols_MolSystemLink_FindAllMolSystemLinkEnds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_MolSystemLink self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Mols_MolSystemLink_FindFirstApplicationData(Mols_MolSystemLink self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLink: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLink: method 'findFirstApplicationData' is not callable");
  
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
  @param  Mols_MolSystemLink self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Mols_MolSystemLink_FindFirstApplicationData_keyval0(Mols_MolSystemLink self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mols_MolSystemLink_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_MolSystemLink self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Mols_MolSystemLink_FindFirstApplicationData_keyval1(Mols_MolSystemLink self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mols_MolSystemLink_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_MolSystemLink self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Mols_MolSystemLink_FindFirstApplicationData_keyval2(Mols_MolSystemLink self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mols_MolSystemLink_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_MolSystemLink self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Mols_MolSystemLink_FindFirstApplicationData_keyval3(Mols_MolSystemLink self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mols_MolSystemLink_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_MolSystemLink self
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
Impl_ApplicationData Mols_MolSystemLink_FindFirstApplicationData_keyval4(Mols_MolSystemLink self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mols_MolSystemLink_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolSystem.MolSystemLink.molSystemLinkEnds

LinkEnds that 
make up the MolSystemLink
  @param  Mols_MolSystemLink self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Mols_MolSystemLinkEnd Mols_MolSystemLink_FindFirstMolSystemLinkEnd(Mols_MolSystemLink self, ApiMap conditions)
{
  
  Mols_MolSystemLinkEnd obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstMolSystemLinkEnd");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLink: cannot find method 'findFirstMolSystemLinkEnd'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLink: method 'findFirstMolSystemLinkEnd' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolSystem.MolSystemLink.molSystemLinkEnds

LinkEnds that 
make up the MolSystemLink
  @param  Mols_MolSystemLink self
  @returns  the first value that satisfies the conditions 
**/
Mols_MolSystemLinkEnd Mols_MolSystemLink_FindFirstMolSystemLinkEnd_keyval0(Mols_MolSystemLink self)
{
  
  Mols_MolSystemLinkEnd  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mols_MolSystemLink_FindFirstMolSystemLinkEnd(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolSystem.MolSystemLink.molSystemLinkEnds

LinkEnds that 
make up the MolSystemLink
  @param  Mols_MolSystemLink self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Mols_MolSystemLinkEnd Mols_MolSystemLink_FindFirstMolSystemLinkEnd_keyval1(Mols_MolSystemLink self, char * key, ApiObject value)
{
  
  Mols_MolSystemLinkEnd  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mols_MolSystemLink_FindFirstMolSystemLinkEnd(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolSystem.MolSystemLink.molSystemLinkEnds

LinkEnds that 
make up the MolSystemLink
  @param  Mols_MolSystemLink self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Mols_MolSystemLinkEnd Mols_MolSystemLink_FindFirstMolSystemLinkEnd_keyval2(Mols_MolSystemLink self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Mols_MolSystemLinkEnd  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mols_MolSystemLink_FindFirstMolSystemLinkEnd(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolSystem.MolSystemLink.molSystemLinkEnds

LinkEnds that 
make up the MolSystemLink
  @param  Mols_MolSystemLink self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Mols_MolSystemLinkEnd Mols_MolSystemLink_FindFirstMolSystemLinkEnd_keyval3(Mols_MolSystemLink self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Mols_MolSystemLinkEnd  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mols_MolSystemLink_FindFirstMolSystemLinkEnd(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.MolSystem.MolSystemLink.molSystemLinkEnds

LinkEnds that 
make up the MolSystemLink
  @param  Mols_MolSystemLink self
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
Mols_MolSystemLinkEnd Mols_MolSystemLink_FindFirstMolSystemLinkEnd_keyval4(Mols_MolSystemLink self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Mols_MolSystemLinkEnd  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mols_MolSystemLink_FindFirstMolSystemLinkEnd(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.molecule.MolSystem.MolSystemLink
  @param  Mols_MolSystemLink self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Mols_MolSystemLink_Get(Mols_MolSystemLink self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Mols_MolSystemLink self
  @returns   the result
**/
Acco_AccessObject Mols_MolSystemLink_GetAccess(Mols_MolSystemLink self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLink: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLink: method 'getAccess' is not callable");
  
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
  @param  Mols_MolSystemLink self
  @returns   the result
**/
Acco_AccessObject Mols_MolSystemLink_GetActiveAccess(Mols_MolSystemLink self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLink: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLink: method 'getActiveAccess' is not callable");
  
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
  @param  Mols_MolSystemLink self
  @returns   the result
**/
ApiList Mols_MolSystemLink_GetApplicationData(Mols_MolSystemLink self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLink: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLink: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.molecule.MolSystem.MolSystemLink
  @param  Mols_MolSystemLink self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Mols_MolSystemLink Mols_MolSystemLink_GetByKey(Mols_MolSystemLink self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Mols_MolSystemLink obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLink: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLink: method 'getByKey' is not callable");
  
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
  @param  Mols_MolSystemLink self
  @returns   the result
**/
ApiString Mols_MolSystemLink_GetClassName(Mols_MolSystemLink self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLink: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLink: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolSystem.MolSystemLink.dihedralAngle

Approximate 
value in degrees of dihedral angle formed across bond (as defined in the 
ChemComp Link definitions). The value is not precise but serves to 
indicate the conformation of rotationally hindered bonds.
  @param  Mols_MolSystemLink self
  @returns   the result
**/
ApiInteger Mols_MolSystemLink_GetDihedralAngle(Mols_MolSystemLink self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDihedralAngle");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLink: cannot find method 'getDihedralAngle'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLink: method 'getDihedralAngle' is not callable");
  
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
  @param  Mols_MolSystemLink self
  @returns   the result
**/
ApiList Mols_MolSystemLink_GetFieldNames(Mols_MolSystemLink self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLink: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLink: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.molecule.MolSystem.MolSystemLink
  @param  Mols_MolSystemLink self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Mols_MolSystemLink_GetFullKey(Mols_MolSystemLink self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLink: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLink: method 'getFullKey' is not callable");
  
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
  @param  Mols_MolSystemLink self
  @returns   the result
**/
ApiBoolean Mols_MolSystemLink_GetInConstructor(Mols_MolSystemLink self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLink: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLink: method 'getInConstructor' is not callable");
  
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
  @param  Mols_MolSystemLink self
  @returns   the result
**/
ApiBoolean Mols_MolSystemLink_GetIsDeleted(Mols_MolSystemLink self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLink: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLink: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.molecule.MolSystem.MolSystemLink
  @param  Mols_MolSystemLink self
  @returns  Local object key
**/
ApiObject Mols_MolSystemLink_GetLocalKey(Mols_MolSystemLink self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLink: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLink: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolSystem.MolSystemLink.molSystem

parent link
  @param  Mols_MolSystemLink self
  @returns   the result
**/
Mols_MolSystem Mols_MolSystemLink_GetMolSystem(Mols_MolSystemLink self)
{
  
  Mols_MolSystem obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolSystem");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLink: cannot find method 'getMolSystem'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLink: method 'getMolSystem' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolSystem.MolSystemLink.molSystemLinkEnds

LinkEnds 
that make up the MolSystemLink
  @param  Mols_MolSystemLink self
  @returns   the result
**/
ApiSet Mols_MolSystemLink_GetMolSystemLinkEnds(Mols_MolSystemLink self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolSystemLinkEnds");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLink: cannot find method 'getMolSystemLinkEnds'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLink: method 'getMolSystemLinkEnds' is not callable");
  
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
  @param  Mols_MolSystemLink self
  @returns   the result
**/
ApiString Mols_MolSystemLink_GetPackageName(Mols_MolSystemLink self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLink: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLink: method 'getPackageName' is not callable");
  
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
  @param  Mols_MolSystemLink self
  @returns   the result
**/
ApiString Mols_MolSystemLink_GetPackageShortName(Mols_MolSystemLink self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLink: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLink: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolSystem.MolSystemLink.parent

link to parent 
object - synonym for molSystem
  @param  Mols_MolSystemLink self
  @returns   the result
**/
Mols_MolSystem Mols_MolSystemLink_GetParent(Mols_MolSystemLink self)
{
  
  Mols_MolSystem obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLink: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLink: method 'getParent' is not callable");
  
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
  @param  Mols_MolSystemLink self
  @returns   the result
**/
ApiString Mols_MolSystemLink_GetQualifiedName(Mols_MolSystemLink self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLink: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLink: method 'getQualifiedName' is not callable");
  
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
  @param  Mols_MolSystemLink self
  @returns   the result
**/
Impl_MemopsRoot Mols_MolSystemLink_GetRoot(Mols_MolSystemLink self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLink: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLink: method 'getRoot' is not callable");
  
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
  @param  Mols_MolSystemLink self
  @returns   the result
**/
Impl_TopObject Mols_MolSystemLink_GetTopObject(Mols_MolSystemLink self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLink: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLink: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.molecule.MolSystem.MolSystemLink
  @param  Mols_MolSystem parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Mols_MolSystemLink Mols_MolSystemLink_Init(Mols_MolSystem parent, ApiMap attrlinks)
{
  
  return Mols_MolSystem_NewMolSystemLink(parent, attrlinks);
}

/**
  Constructor for ccp.molecule.MolSystem.MolSystemLink
  @param  Mols_MolSystem parent
  @param  ApiSet molSystemLinkEnds
  @returns  the new object
**/
Mols_MolSystemLink Mols_MolSystemLink_Init_reqd(Mols_MolSystem parent, ApiSet molSystemLinkEnds)
{
  
  Mols_MolSystemLink  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "molSystemLinkEnds", molSystemLinkEnds);
  
  obj = Mols_MolSystemLink_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_MolSystemLink self
  @param  Impl_ApplicationData value
**/
void *Mols_MolSystemLink_RemoveApplicationData(Mols_MolSystemLink self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLink: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLink: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.molecule.MolSystem.MolSystemLink
  @param  Mols_MolSystemLink self
  @param  ApiString name
  @param  ApiObject value
**/
void *Mols_MolSystemLink_Set(Mols_MolSystemLink self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Mols_MolSystemLink self
  @param  Acco_AccessObject value
**/
void *Mols_MolSystemLink_SetAccess(Mols_MolSystemLink self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLink: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLink: method 'setAccess' is not callable");
  
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
  @param  Mols_MolSystemLink self
  @param  ApiList values
**/
void *Mols_MolSystemLink_SetApplicationData(Mols_MolSystemLink self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLink: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLink: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.MolSystem.MolSystemLink.dihedralAngle

Approximate 
value in degrees of dihedral angle formed across bond (as defined in the 
ChemComp Link definitions). The value is not precise but serves to 
indicate the conformation of rotationally hindered bonds.
  @param  Mols_MolSystemLink self
  @param  ApiInteger value
**/
void *Mols_MolSystemLink_SetDihedralAngle(Mols_MolSystemLink self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDihedralAngle");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLink: cannot find method 'setDihedralAngle'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLink: method 'setDihedralAngle' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.MolSystem.MolSystemLink.molSystemLinkEnds

LinkEnds 
that make up the MolSystemLink
  @param  Mols_MolSystemLink self
  @param  ApiSet values
**/
void *Mols_MolSystemLink_SetMolSystemLinkEnds(Mols_MolSystemLink self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMolSystemLinkEnds");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLink: cannot find method 'setMolSystemLinkEnds'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLink: method 'setMolSystemLinkEnds' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.molecule.MolSystem.MolSystemLink.molSystemLinkEnds

LinkEnds that 
make up the MolSystemLink
  @param  Mols_MolSystemLink self
  @returns   the result
**/
ApiList Mols_MolSystemLink_SortedMolSystemLinkEnds(Mols_MolSystemLink self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedMolSystemLinkEnds");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLink: cannot find method 'sortedMolSystemLinkEnds'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLink: method 'sortedMolSystemLinkEnds' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
