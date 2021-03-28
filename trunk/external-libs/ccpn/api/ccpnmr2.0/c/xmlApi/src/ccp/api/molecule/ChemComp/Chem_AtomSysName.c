
#include "ccp.h"

/*
  'sysName' is the systematic name for the ChemAtom or ChemAtomSet with name 'atomName' and subType atomSubType according to the naming system 'namingSystem'. 'atomName' and atomSubTypecan be used to identify the ChemAtom(Set) involved.
*/

/* package ccp.api.molecule.ChemComp */

/**
  Add for ccp.molecule.ChemComp.AtomSysName.altSysNames

Alternative 
systematic names - for naming systems that allow them. E.g. XPLOR that 
allows both HB*, HB#, HB+, etc. for pseudoatoms.
  @param  Chem_AtomSysName self
  @param  ApiString value
**/
void *Chem_AtomSysName_AddAltSysName(Chem_AtomSysName self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addAltSysName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AtomSysName: cannot find method 'addAltSysName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AtomSysName: method 'addAltSysName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_AtomSysName self
  @param  Impl_ApplicationData value
**/
void *Chem_AtomSysName_AddApplicationData(Chem_AtomSysName self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AtomSysName: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AtomSysName: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.molecule.ChemComp.AtomSysName
  @param  Chem_AtomSysName self
  @param  ApiBoolean complete
**/
void *Chem_AtomSysName_CheckAllValid(Chem_AtomSysName self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AtomSysName: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AtomSysName: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.molecule.ChemComp.AtomSysName
  @param  Chem_AtomSysName self
  @param  ApiBoolean complete
**/
void *Chem_AtomSysName_CheckValid(Chem_AtomSysName self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AtomSysName: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AtomSysName: method 'checkValid' is not callable");
  
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
  @param  Chem_AtomSysName self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_AtomSysName_FindAllApplicationData(Chem_AtomSysName self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AtomSysName: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AtomSysName: method 'findAllApplicationData' is not callable");
  
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
  @param  Chem_AtomSysName self
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_AtomSysName_FindAllApplicationData_keyval0(Chem_AtomSysName self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_AtomSysName_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_AtomSysName self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_AtomSysName_FindAllApplicationData_keyval1(Chem_AtomSysName self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_AtomSysName_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_AtomSysName self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_AtomSysName_FindAllApplicationData_keyval2(Chem_AtomSysName self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_AtomSysName_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_AtomSysName self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_AtomSysName_FindAllApplicationData_keyval3(Chem_AtomSysName self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_AtomSysName_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_AtomSysName self
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
ApiList Chem_AtomSysName_FindAllApplicationData_keyval4(Chem_AtomSysName self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_AtomSysName_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_AtomSysName self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chem_AtomSysName_FindFirstApplicationData(Chem_AtomSysName self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AtomSysName: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AtomSysName: method 'findFirstApplicationData' is not callable");
  
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
  @param  Chem_AtomSysName self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chem_AtomSysName_FindFirstApplicationData_keyval0(Chem_AtomSysName self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_AtomSysName_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_AtomSysName self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chem_AtomSysName_FindFirstApplicationData_keyval1(Chem_AtomSysName self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_AtomSysName_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_AtomSysName self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chem_AtomSysName_FindFirstApplicationData_keyval2(Chem_AtomSysName self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_AtomSysName_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_AtomSysName self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chem_AtomSysName_FindFirstApplicationData_keyval3(Chem_AtomSysName self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_AtomSysName_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_AtomSysName self
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
Impl_ApplicationData Chem_AtomSysName_FindFirstApplicationData_keyval4(Chem_AtomSysName self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_AtomSysName_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.molecule.ChemComp.AtomSysName
  @param  Chem_AtomSysName self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Chem_AtomSysName_Get(Chem_AtomSysName self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Chem_AtomSysName self
  @returns   the result
**/
Acco_AccessObject Chem_AtomSysName_GetAccess(Chem_AtomSysName self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AtomSysName: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AtomSysName: method 'getAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.AtomSysName.altSysNames

Alternative 
systematic names - for naming systems that allow them. E.g. XPLOR that 
allows both HB*, HB#, HB+, etc. for pseudoatoms.
  @param  Chem_AtomSysName self
  @returns   the result
**/
ApiList Chem_AtomSysName_GetAltSysNames(Chem_AtomSysName self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAltSysNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AtomSysName: cannot find method 'getAltSysNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AtomSysName: method 'getAltSysNames' is not callable");
  
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
  @param  Chem_AtomSysName self
  @returns   the result
**/
ApiList Chem_AtomSysName_GetApplicationData(Chem_AtomSysName self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AtomSysName: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AtomSysName: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.AtomSysName.atomName

name of ChemAtom or 
ChemAtomSet the systematic name applies to.
  @param  Chem_AtomSysName self
  @returns   the result
**/
ApiString Chem_AtomSysName_GetAtomName(Chem_AtomSysName self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAtomName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AtomSysName: cannot find method 'getAtomName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AtomSysName: method 'getAtomName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.AtomSysName.atomSubType

subType of 
ChemAtom or ChemAtomSet the systematic name applies to.
  @param  Chem_AtomSysName self
  @returns   the result
**/
ApiInteger Chem_AtomSysName_GetAtomSubType(Chem_AtomSysName self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAtomSubType");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AtomSysName: cannot find method 'getAtomSubType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AtomSysName: method 'getAtomSubType' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.molecule.ChemComp.AtomSysName
  @param  Chem_AtomSysName self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Chem_AtomSysName Chem_AtomSysName_GetByKey(Chem_AtomSysName self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Chem_AtomSysName obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AtomSysName: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AtomSysName: method 'getByKey' is not callable");
  
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
  @param  Chem_AtomSysName self
  @returns   the result
**/
ApiString Chem_AtomSysName_GetClassName(Chem_AtomSysName self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AtomSysName: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AtomSysName: method 'getClassName' is not callable");
  
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
  @param  Chem_AtomSysName self
  @returns   the result
**/
ApiList Chem_AtomSysName_GetFieldNames(Chem_AtomSysName self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AtomSysName: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AtomSysName: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.molecule.ChemComp.AtomSysName
  @param  Chem_AtomSysName self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Chem_AtomSysName_GetFullKey(Chem_AtomSysName self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AtomSysName: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AtomSysName: method 'getFullKey' is not callable");
  
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
  @param  Chem_AtomSysName self
  @returns   the result
**/
ApiBoolean Chem_AtomSysName_GetInConstructor(Chem_AtomSysName self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AtomSysName: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AtomSysName: method 'getInConstructor' is not callable");
  
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
  @param  Chem_AtomSysName self
  @returns   the result
**/
ApiBoolean Chem_AtomSysName_GetIsDeleted(Chem_AtomSysName self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AtomSysName: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AtomSysName: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.molecule.ChemComp.AtomSysName
  @param  Chem_AtomSysName self
  @returns  Local object key
**/
ApiObject Chem_AtomSysName_GetLocalKey(Chem_AtomSysName self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AtomSysName: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AtomSysName: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.AtomSysName.namingSystem

parent link
  @param  Chem_AtomSysName self
  @returns   the result
**/
Chem_NamingSystem Chem_AtomSysName_GetNamingSystem(Chem_AtomSysName self)
{
  
  Chem_NamingSystem obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNamingSystem");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AtomSysName: cannot find method 'getNamingSystem'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AtomSysName: method 'getNamingSystem' is not callable");
  
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
  @param  Chem_AtomSysName self
  @returns   the result
**/
ApiString Chem_AtomSysName_GetPackageName(Chem_AtomSysName self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AtomSysName: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AtomSysName: method 'getPackageName' is not callable");
  
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
  @param  Chem_AtomSysName self
  @returns   the result
**/
ApiString Chem_AtomSysName_GetPackageShortName(Chem_AtomSysName self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AtomSysName: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AtomSysName: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.AtomSysName.parent

link to parent object 
- synonym for namingSystem
  @param  Chem_AtomSysName self
  @returns   the result
**/
Chem_NamingSystem Chem_AtomSysName_GetParent(Chem_AtomSysName self)
{
  
  Chem_NamingSystem obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AtomSysName: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AtomSysName: method 'getParent' is not callable");
  
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
  @param  Chem_AtomSysName self
  @returns   the result
**/
ApiString Chem_AtomSysName_GetQualifiedName(Chem_AtomSysName self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AtomSysName: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AtomSysName: method 'getQualifiedName' is not callable");
  
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
  @param  Chem_AtomSysName self
  @returns   the result
**/
Impl_MemopsRoot Chem_AtomSysName_GetRoot(Chem_AtomSysName self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AtomSysName: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AtomSysName: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.AtomSysName.sysName

Systematic name of 
ChemAtom (or ChemAtomSet)
  @param  Chem_AtomSysName self
  @returns   the result
**/
ApiString Chem_AtomSysName_GetSysName(Chem_AtomSysName self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSysName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AtomSysName: cannot find method 'getSysName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AtomSysName: method 'getSysName' is not callable");
  
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
  @param  Chem_AtomSysName self
  @returns   the result
**/
Impl_TopObject Chem_AtomSysName_GetTopObject(Chem_AtomSysName self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AtomSysName: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AtomSysName: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.molecule.ChemComp.AtomSysName
  @param  Chem_NamingSystem parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Chem_AtomSysName Chem_AtomSysName_Init(Chem_NamingSystem parent, ApiMap attrlinks)
{
  
  return Chem_NamingSystem_NewAtomSysName(parent, attrlinks);
}

/**
  Constructor for ccp.molecule.ChemComp.AtomSysName
  @param  Chem_NamingSystem parent
  @param  char * atomName
  @param  char * sysName
  @returns  the new object
**/
Chem_AtomSysName Chem_AtomSysName_Init_reqd(Chem_NamingSystem parent, char * atomName, char * sysName)
{
  
  Chem_AtomSysName  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__atomName = ApiString_New(atomName);
  ApiString api__sysName = ApiString_New(sysName);

  PyDict_SetItemString(attrlinks, "atomName", api__atomName);
  PyDict_SetItemString(attrlinks, "sysName", api__sysName);
  
  obj = Chem_AtomSysName_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__atomName);
  Py_DECREF(api__sysName);
  
  return obj;
}

/**
  Remove for ccp.molecule.ChemComp.AtomSysName.altSysNames

Alternative 
systematic names - for naming systems that allow them. E.g. XPLOR that 
allows both HB*, HB#, HB+, etc. for pseudoatoms.
  @param  Chem_AtomSysName self
  @param  ApiString value
**/
void *Chem_AtomSysName_RemoveAltSysName(Chem_AtomSysName self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeAltSysName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AtomSysName: cannot find method 'removeAltSysName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AtomSysName: method 'removeAltSysName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_AtomSysName self
  @param  Impl_ApplicationData value
**/
void *Chem_AtomSysName_RemoveApplicationData(Chem_AtomSysName self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AtomSysName: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AtomSysName: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.molecule.ChemComp.AtomSysName
  @param  Chem_AtomSysName self
  @param  ApiString name
  @param  ApiObject value
**/
void *Chem_AtomSysName_Set(Chem_AtomSysName self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Chem_AtomSysName self
  @param  Acco_AccessObject value
**/
void *Chem_AtomSysName_SetAccess(Chem_AtomSysName self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AtomSysName: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AtomSysName: method 'setAccess' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.AtomSysName.altSysNames

Alternative 
systematic names - for naming systems that allow them. E.g. XPLOR that 
allows both HB*, HB#, HB+, etc. for pseudoatoms.
  @param  Chem_AtomSysName self
  @param  ApiList values
**/
void *Chem_AtomSysName_SetAltSysNames(Chem_AtomSysName self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAltSysNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AtomSysName: cannot find method 'setAltSysNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AtomSysName: method 'setAltSysNames' is not callable");
  
  args = PyTuple_Pack(1, values);
  
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
  @param  Chem_AtomSysName self
  @param  ApiList values
**/
void *Chem_AtomSysName_SetApplicationData(Chem_AtomSysName self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AtomSysName: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AtomSysName: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.AtomSysName.atomName

name of ChemAtom or 
ChemAtomSet the systematic name applies to.
  @param  Chem_AtomSysName self
  @param  ApiString value
**/
void *Chem_AtomSysName_SetAtomName(Chem_AtomSysName self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAtomName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AtomSysName: cannot find method 'setAtomName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AtomSysName: method 'setAtomName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.AtomSysName.atomSubType

subType of 
ChemAtom or ChemAtomSet the systematic name applies to.
  @param  Chem_AtomSysName self
  @param  ApiInteger value
**/
void *Chem_AtomSysName_SetAtomSubType(Chem_AtomSysName self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAtomSubType");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AtomSysName: cannot find method 'setAtomSubType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AtomSysName: method 'setAtomSubType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.AtomSysName.sysName

Systematic name of 
ChemAtom (or ChemAtomSet)
  @param  Chem_AtomSysName self
  @param  ApiString value
**/
void *Chem_AtomSysName_SetSysName(Chem_AtomSysName self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSysName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.AtomSysName: cannot find method 'setSysName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.AtomSysName: method 'setSysName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
