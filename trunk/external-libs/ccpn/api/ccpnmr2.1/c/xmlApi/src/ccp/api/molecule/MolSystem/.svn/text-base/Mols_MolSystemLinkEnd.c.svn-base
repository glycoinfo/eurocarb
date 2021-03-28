
#include "ccp.h"

/*
  LinkEnd, equivalent to ChemComp.LinkEnd. Part of the description of MolSystem level additional links. Note that the MolSeqLinkEnds defined in the Molecule corresponding to this Chain are also valid for the Chain, so that both need to be considered when describing the topology of the MolSystem
*/

/* package ccp.api.molecule.MolSystem */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_MolSystemLinkEnd self
  @param  Impl_ApplicationData value
**/
void *Mols_MolSystemLinkEnd_AddApplicationData(Mols_MolSystemLinkEnd self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLinkEnd: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLinkEnd: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.molecule.MolSystem.MolSystemLinkEnd
  @param  Mols_MolSystemLinkEnd self
  @param  ApiBoolean complete
**/
void *Mols_MolSystemLinkEnd_CheckAllValid(Mols_MolSystemLinkEnd self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLinkEnd: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLinkEnd: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.molecule.MolSystem.MolSystemLinkEnd
  @param  Mols_MolSystemLinkEnd self
  @param  ApiBoolean complete
**/
void *Mols_MolSystemLinkEnd_CheckValid(Mols_MolSystemLinkEnd self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLinkEnd: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLinkEnd: method 'checkValid' is not callable");
  
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
  @param  Mols_MolSystemLinkEnd self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Mols_MolSystemLinkEnd_FindAllApplicationData(Mols_MolSystemLinkEnd self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLinkEnd: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLinkEnd: method 'findAllApplicationData' is not callable");
  
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
  @param  Mols_MolSystemLinkEnd self
  @returns  all value that satisfy the conditions 
**/
ApiList Mols_MolSystemLinkEnd_FindAllApplicationData_keyval0(Mols_MolSystemLinkEnd self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mols_MolSystemLinkEnd_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_MolSystemLinkEnd self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Mols_MolSystemLinkEnd_FindAllApplicationData_keyval1(Mols_MolSystemLinkEnd self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mols_MolSystemLinkEnd_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_MolSystemLinkEnd self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Mols_MolSystemLinkEnd_FindAllApplicationData_keyval2(Mols_MolSystemLinkEnd self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mols_MolSystemLinkEnd_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_MolSystemLinkEnd self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Mols_MolSystemLinkEnd_FindAllApplicationData_keyval3(Mols_MolSystemLinkEnd self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mols_MolSystemLinkEnd_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_MolSystemLinkEnd self
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
ApiList Mols_MolSystemLinkEnd_FindAllApplicationData_keyval4(Mols_MolSystemLinkEnd self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mols_MolSystemLinkEnd_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_MolSystemLinkEnd self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Mols_MolSystemLinkEnd_FindFirstApplicationData(Mols_MolSystemLinkEnd self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLinkEnd: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLinkEnd: method 'findFirstApplicationData' is not callable");
  
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
  @param  Mols_MolSystemLinkEnd self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Mols_MolSystemLinkEnd_FindFirstApplicationData_keyval0(Mols_MolSystemLinkEnd self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mols_MolSystemLinkEnd_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_MolSystemLinkEnd self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Mols_MolSystemLinkEnd_FindFirstApplicationData_keyval1(Mols_MolSystemLinkEnd self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mols_MolSystemLinkEnd_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_MolSystemLinkEnd self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Mols_MolSystemLinkEnd_FindFirstApplicationData_keyval2(Mols_MolSystemLinkEnd self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mols_MolSystemLinkEnd_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_MolSystemLinkEnd self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Mols_MolSystemLinkEnd_FindFirstApplicationData_keyval3(Mols_MolSystemLinkEnd self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mols_MolSystemLinkEnd_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_MolSystemLinkEnd self
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
Impl_ApplicationData Mols_MolSystemLinkEnd_FindFirstApplicationData_keyval4(Mols_MolSystemLinkEnd self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mols_MolSystemLinkEnd_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.molecule.MolSystem.MolSystemLinkEnd
  @param  Mols_MolSystemLinkEnd self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Mols_MolSystemLinkEnd_Get(Mols_MolSystemLinkEnd self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Mols_MolSystemLinkEnd self
  @returns   the result
**/
Acco_AccessObject Mols_MolSystemLinkEnd_GetAccess(Mols_MolSystemLinkEnd self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLinkEnd: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLinkEnd: method 'getAccess' is not callable");
  
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
  @param  Mols_MolSystemLinkEnd self
  @returns   the result
**/
Acco_AccessObject Mols_MolSystemLinkEnd_GetActiveAccess(Mols_MolSystemLinkEnd self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLinkEnd: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLinkEnd: method 'getActiveAccess' is not callable");
  
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
  @param  Mols_MolSystemLinkEnd self
  @returns   the result
**/
ApiList Mols_MolSystemLinkEnd_GetApplicationData(Mols_MolSystemLinkEnd self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLinkEnd: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLinkEnd: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.molecule.MolSystem.MolSystemLinkEnd
  @param  Mols_MolSystemLinkEnd self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Mols_MolSystemLinkEnd Mols_MolSystemLinkEnd_GetByKey(Mols_MolSystemLinkEnd self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Mols_MolSystemLinkEnd obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLinkEnd: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLinkEnd: method 'getByKey' is not callable");
  
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
  @param  Mols_MolSystemLinkEnd self
  @returns   the result
**/
ApiString Mols_MolSystemLinkEnd_GetClassName(Mols_MolSystemLinkEnd self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLinkEnd: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLinkEnd: method 'getClassName' is not callable");
  
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
  @param  Mols_MolSystemLinkEnd self
  @returns   the result
**/
ApiList Mols_MolSystemLinkEnd_GetFieldNames(Mols_MolSystemLinkEnd self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLinkEnd: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLinkEnd: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.molecule.MolSystem.MolSystemLinkEnd
  @param  Mols_MolSystemLinkEnd self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Mols_MolSystemLinkEnd_GetFullKey(Mols_MolSystemLinkEnd self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLinkEnd: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLinkEnd: method 'getFullKey' is not callable");
  
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
  @param  Mols_MolSystemLinkEnd self
  @returns   the result
**/
ApiBoolean Mols_MolSystemLinkEnd_GetInConstructor(Mols_MolSystemLinkEnd self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLinkEnd: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLinkEnd: method 'getInConstructor' is not callable");
  
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
  @param  Mols_MolSystemLinkEnd self
  @returns   the result
**/
ApiBoolean Mols_MolSystemLinkEnd_GetIsDeleted(Mols_MolSystemLinkEnd self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLinkEnd: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLinkEnd: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolSystem.MolSystemLinkEnd.linkCode

Link Code 
identifying Link End for Residue. Part of Key for the derived link 
'linkEnd'.
  @param  Mols_MolSystemLinkEnd self
  @returns   the result
**/
ApiString Mols_MolSystemLinkEnd_GetLinkCode(Mols_MolSystemLinkEnd self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLinkCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLinkEnd: cannot find method 'getLinkCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLinkEnd: method 'getLinkCode' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived link linkEnd
  @param  Mols_MolSystemLinkEnd self
  @returns   the result
**/
Chem_LinkEnd Mols_MolSystemLinkEnd_GetLinkEnd(Mols_MolSystemLinkEnd self)
{
  
  Chem_LinkEnd obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLinkEnd");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLinkEnd: cannot find method 'getLinkEnd'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLinkEnd: method 'getLinkEnd' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.molecule.MolSystem.MolSystemLinkEnd
  @param  Mols_MolSystemLinkEnd self
  @returns  Local object key
**/
ApiObject Mols_MolSystemLinkEnd_GetLocalKey(Mols_MolSystemLinkEnd self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLinkEnd: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLinkEnd: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolSystem.MolSystemLinkEnd.molSystemLink

Link made 
up from the two LinkEnds.
  @param  Mols_MolSystemLinkEnd self
  @returns   the result
**/
Mols_MolSystemLink Mols_MolSystemLinkEnd_GetMolSystemLink(Mols_MolSystemLinkEnd self)
{
  
  Mols_MolSystemLink obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolSystemLink");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLinkEnd: cannot find method 'getMolSystemLink'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLinkEnd: method 'getMolSystemLink' is not callable");
  
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
  @param  Mols_MolSystemLinkEnd self
  @returns   the result
**/
ApiString Mols_MolSystemLinkEnd_GetPackageName(Mols_MolSystemLinkEnd self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLinkEnd: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLinkEnd: method 'getPackageName' is not callable");
  
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
  @param  Mols_MolSystemLinkEnd self
  @returns   the result
**/
ApiString Mols_MolSystemLinkEnd_GetPackageShortName(Mols_MolSystemLinkEnd self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLinkEnd: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLinkEnd: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolSystem.MolSystemLinkEnd.parent

link to parent 
object - synonym for residue
  @param  Mols_MolSystemLinkEnd self
  @returns   the result
**/
Mols_Residue Mols_MolSystemLinkEnd_GetParent(Mols_MolSystemLinkEnd self)
{
  
  Mols_Residue obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLinkEnd: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLinkEnd: method 'getParent' is not callable");
  
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
  @param  Mols_MolSystemLinkEnd self
  @returns   the result
**/
ApiString Mols_MolSystemLinkEnd_GetQualifiedName(Mols_MolSystemLinkEnd self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLinkEnd: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLinkEnd: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolSystem.MolSystemLinkEnd.residue

parent link
  @param  Mols_MolSystemLinkEnd self
  @returns   the result
**/
Mols_Residue Mols_MolSystemLinkEnd_GetResidue(Mols_MolSystemLinkEnd self)
{
  
  Mols_Residue obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getResidue");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLinkEnd: cannot find method 'getResidue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLinkEnd: method 'getResidue' is not callable");
  
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
  @param  Mols_MolSystemLinkEnd self
  @returns   the result
**/
Impl_MemopsRoot Mols_MolSystemLinkEnd_GetRoot(Mols_MolSystemLinkEnd self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLinkEnd: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLinkEnd: method 'getRoot' is not callable");
  
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
  @param  Mols_MolSystemLinkEnd self
  @returns   the result
**/
Impl_TopObject Mols_MolSystemLinkEnd_GetTopObject(Mols_MolSystemLinkEnd self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLinkEnd: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLinkEnd: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.molecule.MolSystem.MolSystemLinkEnd
  @param  Mols_Residue parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Mols_MolSystemLinkEnd Mols_MolSystemLinkEnd_Init(Mols_Residue parent, ApiMap attrlinks)
{
  
  return Mols_Residue_NewMolSystemLinkEnd(parent, attrlinks);
}

/**
  Constructor for ccp.molecule.MolSystem.MolSystemLinkEnd
  @param  Mols_Residue parent
  @param  char * linkCode
  @returns  the new object
**/
Mols_MolSystemLinkEnd Mols_MolSystemLinkEnd_Init_reqd(Mols_Residue parent, char * linkCode)
{
  
  Mols_MolSystemLinkEnd  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__linkCode = ApiString_New(linkCode);

  PyDict_SetItemString(attrlinks, "linkCode", api__linkCode);
  
  obj = Mols_MolSystemLinkEnd_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__linkCode);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mols_MolSystemLinkEnd self
  @param  Impl_ApplicationData value
**/
void *Mols_MolSystemLinkEnd_RemoveApplicationData(Mols_MolSystemLinkEnd self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLinkEnd: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLinkEnd: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.molecule.MolSystem.MolSystemLinkEnd
  @param  Mols_MolSystemLinkEnd self
  @param  ApiString name
  @param  ApiObject value
**/
void *Mols_MolSystemLinkEnd_Set(Mols_MolSystemLinkEnd self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Mols_MolSystemLinkEnd self
  @param  Acco_AccessObject value
**/
void *Mols_MolSystemLinkEnd_SetAccess(Mols_MolSystemLinkEnd self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLinkEnd: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLinkEnd: method 'setAccess' is not callable");
  
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
  @param  Mols_MolSystemLinkEnd self
  @param  ApiList values
**/
void *Mols_MolSystemLinkEnd_SetApplicationData(Mols_MolSystemLinkEnd self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLinkEnd: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLinkEnd: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.MolSystem.MolSystemLinkEnd.linkCode

Link Code 
identifying Link End for Residue. Part of Key for the derived link 
'linkEnd'.
  @param  Mols_MolSystemLinkEnd self
  @param  ApiString value
**/
void *Mols_MolSystemLinkEnd_SetLinkCode(Mols_MolSystemLinkEnd self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLinkCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLinkEnd: cannot find method 'setLinkCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLinkEnd: method 'setLinkCode' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.MolSystem.MolSystemLinkEnd.molSystemLink

Link made 
up from the two LinkEnds.
  @param  Mols_MolSystemLinkEnd self
  @param  Mols_MolSystemLink value
**/
void *Mols_MolSystemLinkEnd_SetMolSystemLink(Mols_MolSystemLinkEnd self, Mols_MolSystemLink value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMolSystemLink");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLinkEnd: cannot find method 'setMolSystemLink'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolSystem.MolSystemLinkEnd: method 'setMolSystemLink' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
