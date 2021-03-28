
#include "ccp.h"

/*
  Describes the mapping between the atoms in the data model and the atom name strings in an external format
*/

/* package ccpnmr.api.NameMapping */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_AtomMapping self
  @param  Impl_ApplicationData value
**/
void *Nmap_AtomMapping_AddApplicationData(Nmap_AtomMapping self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccpnmr.NameMapping.AtomMapping
  @param  Nmap_AtomMapping self
  @param  ApiBoolean complete
**/
void *Nmap_AtomMapping_CheckAllValid(Nmap_AtomMapping self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccpnmr.NameMapping.AtomMapping
  @param  Nmap_AtomMapping self
  @param  ApiBoolean complete
**/
void *Nmap_AtomMapping_CheckValid(Nmap_AtomMapping self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: method 'checkValid' is not callable");
  
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
  @param  Nmap_AtomMapping self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmap_AtomMapping_FindAllApplicationData(Nmap_AtomMapping self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: method 'findAllApplicationData' is not callable");
  
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
  @param  Nmap_AtomMapping self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmap_AtomMapping_FindAllApplicationData_keyval0(Nmap_AtomMapping self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmap_AtomMapping_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_AtomMapping self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmap_AtomMapping_FindAllApplicationData_keyval1(Nmap_AtomMapping self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmap_AtomMapping_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_AtomMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmap_AtomMapping_FindAllApplicationData_keyval2(Nmap_AtomMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmap_AtomMapping_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_AtomMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmap_AtomMapping_FindAllApplicationData_keyval3(Nmap_AtomMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmap_AtomMapping_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_AtomMapping self
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
ApiList Nmap_AtomMapping_FindAllApplicationData_keyval4(Nmap_AtomMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmap_AtomMapping_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_AtomMapping self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmap_AtomMapping_FindFirstApplicationData(Nmap_AtomMapping self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nmap_AtomMapping self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmap_AtomMapping_FindFirstApplicationData_keyval0(Nmap_AtomMapping self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmap_AtomMapping_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_AtomMapping self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmap_AtomMapping_FindFirstApplicationData_keyval1(Nmap_AtomMapping self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmap_AtomMapping_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_AtomMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmap_AtomMapping_FindFirstApplicationData_keyval2(Nmap_AtomMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmap_AtomMapping_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_AtomMapping self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmap_AtomMapping_FindFirstApplicationData_keyval3(Nmap_AtomMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmap_AtomMapping_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_AtomMapping self
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
Impl_ApplicationData Nmap_AtomMapping_FindFirstApplicationData_keyval4(Nmap_AtomMapping self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmap_AtomMapping_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccpnmr.NameMapping.AtomMapping
  @param  Nmap_AtomMapping self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Nmap_AtomMapping_Get(Nmap_AtomMapping self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmap_AtomMapping self
  @returns   the result
**/
Acco_AccessObject Nmap_AtomMapping_GetAccess(Nmap_AtomMapping self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: method 'getAccess' is not callable");
  
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
  @param  Nmap_AtomMapping self
  @returns   the result
**/
Acco_AccessObject Nmap_AtomMapping_GetActiveAccess(Nmap_AtomMapping self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: method 'getActiveAccess' is not callable");
  
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
  @param  Nmap_AtomMapping self
  @returns   the result
**/
ApiList Nmap_AtomMapping_GetApplicationData(Nmap_AtomMapping self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccpnmr.NameMapping.AtomMapping
  @param  Nmap_AtomMapping self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nmap_AtomMapping Nmap_AtomMapping_GetByKey(Nmap_AtomMapping self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Nmap_AtomMapping obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: method 'getByKey' is not callable");
  
  args = PyTuple_Pack(2, startObj, fullKey);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.NameMapping.AtomMapping.ccpCode

ChemComp.ccpCode. If 
set, the mapping applies to all residues with this ccpCode (combined 
with other mapping specifications in this class).
  @param  Nmap_AtomMapping self
  @returns   the result
**/
ApiString Nmap_AtomMapping_GetCcpCode(Nmap_AtomMapping self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCcpCode");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: cannot find method 'getCcpCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: method 'getCcpCode' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.NameMapping.AtomMapping.chainCode

Chain.code in the data 
model (the mapping to the chain in the external format is handled by 
ChainMapping). If set, the mapping applies to all chains with this code 
(combined with other mapping specifications in this class).
  @param  Nmap_AtomMapping self
  @returns   the result
**/
ApiString Nmap_AtomMapping_GetChainCode(Nmap_AtomMapping self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChainCode");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: cannot find method 'getChainCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: method 'getChainCode' is not callable");
  
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
  @param  Nmap_AtomMapping self
  @returns   the result
**/
ApiString Nmap_AtomMapping_GetClassName(Nmap_AtomMapping self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: method 'getClassName' is not callable");
  
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
  @param  Nmap_AtomMapping self
  @returns   the result
**/
ApiList Nmap_AtomMapping_GetFieldNames(Nmap_AtomMapping self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.NameMapping.AtomMapping.formatName

Atom name in the 
external format
  @param  Nmap_AtomMapping self
  @returns   the result
**/
ApiString Nmap_AtomMapping_GetFormatName(Nmap_AtomMapping self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFormatName");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: cannot find method 'getFormatName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: method 'getFormatName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccpnmr.NameMapping.AtomMapping
  @param  Nmap_AtomMapping self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Nmap_AtomMapping_GetFullKey(Nmap_AtomMapping self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: method 'getFullKey' is not callable");
  
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
  @param  Nmap_AtomMapping self
  @returns   the result
**/
ApiBoolean Nmap_AtomMapping_GetInConstructor(Nmap_AtomMapping self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: method 'getInConstructor' is not callable");
  
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
  @param  Nmap_AtomMapping self
  @returns   the result
**/
ApiBoolean Nmap_AtomMapping_GetIsDeleted(Nmap_AtomMapping self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccpnmr.NameMapping.AtomMapping
  @param  Nmap_AtomMapping self
  @returns  Local object key
**/
ApiObject Nmap_AtomMapping_GetLocalKey(Nmap_AtomMapping self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.NameMapping.AtomMapping.molSystemCode

MolSystem.code in 
the data model. If set, the mapping applies to the molecular system with 
this code (combined with other mapping specifications in this class).
  @param  Nmap_AtomMapping self
  @returns   the result
**/
ApiString Nmap_AtomMapping_GetMolSystemCode(Nmap_AtomMapping self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolSystemCode");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: cannot find method 'getMolSystemCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: method 'getMolSystemCode' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.NameMapping.AtomMapping.moleculeName

Molecule.name in 
the data model. If set, the mapping applies to all chains that have a 
molecule with this name (combined with other mapping specifications in 
this class).
  @param  Nmap_AtomMapping self
  @returns   the result
**/
ApiString Nmap_AtomMapping_GetMoleculeName(Nmap_AtomMapping self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMoleculeName");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: cannot find method 'getMoleculeName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: method 'getMoleculeName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.NameMapping.AtomMapping.name

Atom.name in the data model
  @param  Nmap_AtomMapping self
  @returns   the result
**/
ApiString Nmap_AtomMapping_GetName(Nmap_AtomMapping self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: method 'getName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.NameMapping.AtomMapping.nameMapping

parent link
  @param  Nmap_AtomMapping self
  @returns   the result
**/
Nmap_NameMapping Nmap_AtomMapping_GetNameMapping(Nmap_AtomMapping self)
{
  
  Nmap_NameMapping obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNameMapping");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: cannot find method 'getNameMapping'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: method 'getNameMapping' is not callable");
  
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
  @param  Nmap_AtomMapping self
  @returns   the result
**/
ApiString Nmap_AtomMapping_GetPackageName(Nmap_AtomMapping self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: method 'getPackageName' is not callable");
  
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
  @param  Nmap_AtomMapping self
  @returns   the result
**/
ApiString Nmap_AtomMapping_GetPackageShortName(Nmap_AtomMapping self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.NameMapping.AtomMapping.parent

link to parent object - 
synonym for nameMapping
  @param  Nmap_AtomMapping self
  @returns   the result
**/
Nmap_NameMapping Nmap_AtomMapping_GetParent(Nmap_AtomMapping self)
{
  
  Nmap_NameMapping obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: method 'getParent' is not callable");
  
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
  @param  Nmap_AtomMapping self
  @returns   the result
**/
ApiString Nmap_AtomMapping_GetQualifiedName(Nmap_AtomMapping self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: method 'getQualifiedName' is not callable");
  
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
  @param  Nmap_AtomMapping self
  @returns   the result
**/
Impl_MemopsRoot Nmap_AtomMapping_GetRoot(Nmap_AtomMapping self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.NameMapping.AtomMapping.seqId

Residue.seqId in the data 
model (the mapping to the chain in the external format is handled by 
ChainMapping). If set, the mapping applies to all residues with this 
seqId (combined with other mapping specifications in this class).
  @param  Nmap_AtomMapping self
  @returns   the result
**/
ApiInteger Nmap_AtomMapping_GetSeqId(Nmap_AtomMapping self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSeqId");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: cannot find method 'getSeqId'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: method 'getSeqId' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.NameMapping.AtomMapping.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Nmap_AtomMapping self
  @returns   the result
**/
ApiInteger Nmap_AtomMapping_GetSerial(Nmap_AtomMapping self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: method 'getSerial' is not callable");
  
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
  @param  Nmap_AtomMapping self
  @returns   the result
**/
Impl_TopObject Nmap_AtomMapping_GetTopObject(Nmap_AtomMapping self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccpnmr.NameMapping.AtomMapping
  @param  Nmap_NameMapping parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmap_AtomMapping Nmap_AtomMapping_Init(Nmap_NameMapping parent, ApiMap attrlinks)
{
  
  return Nmap_NameMapping_NewAtomMapping(parent, attrlinks);
}

/**
  Constructor for ccpnmr.NameMapping.AtomMapping
  @param  Nmap_NameMapping parent
  @param  char * formatName
  @param  char * name
  @returns  the new object
**/
Nmap_AtomMapping Nmap_AtomMapping_Init_reqd(Nmap_NameMapping parent, char * formatName, char * name)
{
  
  Nmap_AtomMapping  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__formatName = ApiString_New(formatName);
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "formatName", api__formatName);
  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Nmap_AtomMapping_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__formatName);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_AtomMapping self
  @param  Impl_ApplicationData value
**/
void *Nmap_AtomMapping_RemoveApplicationData(Nmap_AtomMapping self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccpnmr.NameMapping.AtomMapping
  @param  Nmap_AtomMapping self
  @param  ApiString name
  @param  ApiObject value
**/
void *Nmap_AtomMapping_Set(Nmap_AtomMapping self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmap_AtomMapping self
  @param  Acco_AccessObject value
**/
void *Nmap_AtomMapping_SetAccess(Nmap_AtomMapping self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: method 'setAccess' is not callable");
  
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
  @param  Nmap_AtomMapping self
  @param  ApiList values
**/
void *Nmap_AtomMapping_SetApplicationData(Nmap_AtomMapping self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.NameMapping.AtomMapping.ccpCode

ChemComp.ccpCode. If 
set, the mapping applies to all residues with this ccpCode (combined 
with other mapping specifications in this class).
  @param  Nmap_AtomMapping self
  @param  ApiString value
**/
void *Nmap_AtomMapping_SetCcpCode(Nmap_AtomMapping self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCcpCode");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: cannot find method 'setCcpCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: method 'setCcpCode' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.NameMapping.AtomMapping.chainCode

Chain.code in the data 
model (the mapping to the chain in the external format is handled by 
ChainMapping). If set, the mapping applies to all chains with this code 
(combined with other mapping specifications in this class).
  @param  Nmap_AtomMapping self
  @param  ApiString value
**/
void *Nmap_AtomMapping_SetChainCode(Nmap_AtomMapping self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setChainCode");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: cannot find method 'setChainCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: method 'setChainCode' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.NameMapping.AtomMapping.formatName

Atom name in the 
external format
  @param  Nmap_AtomMapping self
  @param  ApiString value
**/
void *Nmap_AtomMapping_SetFormatName(Nmap_AtomMapping self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setFormatName");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: cannot find method 'setFormatName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: method 'setFormatName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.NameMapping.AtomMapping.molSystemCode

MolSystem.code in 
the data model. If set, the mapping applies to the molecular system with 
this code (combined with other mapping specifications in this class).
  @param  Nmap_AtomMapping self
  @param  ApiString value
**/
void *Nmap_AtomMapping_SetMolSystemCode(Nmap_AtomMapping self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMolSystemCode");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: cannot find method 'setMolSystemCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: method 'setMolSystemCode' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.NameMapping.AtomMapping.moleculeName

Molecule.name in 
the data model. If set, the mapping applies to all chains that have a 
molecule with this name (combined with other mapping specifications in 
this class).
  @param  Nmap_AtomMapping self
  @param  ApiString value
**/
void *Nmap_AtomMapping_SetMoleculeName(Nmap_AtomMapping self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMoleculeName");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: cannot find method 'setMoleculeName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: method 'setMoleculeName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.NameMapping.AtomMapping.name

Atom.name in the data model
  @param  Nmap_AtomMapping self
  @param  ApiString value
**/
void *Nmap_AtomMapping_SetName(Nmap_AtomMapping self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.NameMapping.AtomMapping.seqId

Residue.seqId in the data 
model (the mapping to the chain in the external format is handled by 
ChainMapping). If set, the mapping applies to all residues with this 
seqId (combined with other mapping specifications in this class).
  @param  Nmap_AtomMapping self
  @param  ApiInteger value
**/
void *Nmap_AtomMapping_SetSeqId(Nmap_AtomMapping self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSeqId");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: cannot find method 'setSeqId'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: method 'setSeqId' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.NameMapping.AtomMapping.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Nmap_AtomMapping self
  @param  ApiInteger value
**/
void *Nmap_AtomMapping_SetSerial(Nmap_AtomMapping self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.NameMapping.AtomMapping: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
