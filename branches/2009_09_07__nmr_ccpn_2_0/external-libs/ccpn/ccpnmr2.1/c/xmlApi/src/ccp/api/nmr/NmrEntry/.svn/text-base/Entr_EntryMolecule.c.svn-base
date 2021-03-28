
#include "ccp.h"

/*
  Molecule relevant to this entry
*/

/* package ccp.api.nmr.NmrEntry */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_EntryMolecule self
  @param  Impl_ApplicationData value
**/
void *Entr_EntryMolecule_AddApplicationData(Entr_EntryMolecule self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.EntryMolecule: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.EntryMolecule: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.nmr.NmrEntry.EntryMolecule
  @param  Entr_EntryMolecule self
  @param  ApiBoolean complete
**/
void *Entr_EntryMolecule_CheckAllValid(Entr_EntryMolecule self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.EntryMolecule: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.EntryMolecule: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.nmr.NmrEntry.EntryMolecule
  @param  Entr_EntryMolecule self
  @param  ApiBoolean complete
**/
void *Entr_EntryMolecule_CheckValid(Entr_EntryMolecule self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.EntryMolecule: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.EntryMolecule: method 'checkValid' is not callable");
  
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
  @param  Entr_EntryMolecule self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Entr_EntryMolecule_FindAllApplicationData(Entr_EntryMolecule self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.EntryMolecule: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.EntryMolecule: method 'findAllApplicationData' is not callable");
  
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
  @param  Entr_EntryMolecule self
  @returns  all value that satisfy the conditions 
**/
ApiList Entr_EntryMolecule_FindAllApplicationData_keyval0(Entr_EntryMolecule self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Entr_EntryMolecule_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_EntryMolecule self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Entr_EntryMolecule_FindAllApplicationData_keyval1(Entr_EntryMolecule self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Entr_EntryMolecule_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_EntryMolecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Entr_EntryMolecule_FindAllApplicationData_keyval2(Entr_EntryMolecule self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Entr_EntryMolecule_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_EntryMolecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Entr_EntryMolecule_FindAllApplicationData_keyval3(Entr_EntryMolecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Entr_EntryMolecule_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_EntryMolecule self
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
ApiList Entr_EntryMolecule_FindAllApplicationData_keyval4(Entr_EntryMolecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Entr_EntryMolecule_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_EntryMolecule self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Entr_EntryMolecule_FindFirstApplicationData(Entr_EntryMolecule self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.EntryMolecule: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.EntryMolecule: method 'findFirstApplicationData' is not callable");
  
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
  @param  Entr_EntryMolecule self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Entr_EntryMolecule_FindFirstApplicationData_keyval0(Entr_EntryMolecule self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Entr_EntryMolecule_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_EntryMolecule self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Entr_EntryMolecule_FindFirstApplicationData_keyval1(Entr_EntryMolecule self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Entr_EntryMolecule_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_EntryMolecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Entr_EntryMolecule_FindFirstApplicationData_keyval2(Entr_EntryMolecule self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Entr_EntryMolecule_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_EntryMolecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Entr_EntryMolecule_FindFirstApplicationData_keyval3(Entr_EntryMolecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Entr_EntryMolecule_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_EntryMolecule self
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
Impl_ApplicationData Entr_EntryMolecule_FindFirstApplicationData_keyval4(Entr_EntryMolecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Entr_EntryMolecule_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.nmr.NmrEntry.EntryMolecule
  @param  Entr_EntryMolecule self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Entr_EntryMolecule_Get(Entr_EntryMolecule self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Entr_EntryMolecule self
  @returns   the result
**/
Acco_AccessObject Entr_EntryMolecule_GetAccess(Entr_EntryMolecule self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.EntryMolecule: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.EntryMolecule: method 'getAccess' is not callable");
  
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
  @param  Entr_EntryMolecule self
  @returns   the result
**/
Acco_AccessObject Entr_EntryMolecule_GetActiveAccess(Entr_EntryMolecule self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.EntryMolecule: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.EntryMolecule: method 'getActiveAccess' is not callable");
  
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
  @param  Entr_EntryMolecule self
  @returns   the result
**/
ApiList Entr_EntryMolecule_GetApplicationData(Entr_EntryMolecule self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.EntryMolecule: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.EntryMolecule: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.NmrEntry.EntryMolecule
  @param  Entr_EntryMolecule self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Entr_EntryMolecule Entr_EntryMolecule_GetByKey(Entr_EntryMolecule self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Entr_EntryMolecule obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.EntryMolecule: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.EntryMolecule: method 'getByKey' is not callable");
  
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
  @param  Entr_EntryMolecule self
  @returns   the result
**/
ApiString Entr_EntryMolecule_GetClassName(Entr_EntryMolecule self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.EntryMolecule: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.EntryMolecule: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrEntry.EntryMolecule.entry

parent link
  @param  Entr_EntryMolecule self
  @returns   the result
**/
Entr_Entry Entr_EntryMolecule_GetEntry(Entr_EntryMolecule self)
{
  
  Entr_Entry obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getEntry");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.EntryMolecule: cannot find method 'getEntry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.EntryMolecule: method 'getEntry' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrEntry.EntryMolecule.experimentalSource

Experimental 
source of Molecule
  @param  Entr_EntryMolecule self
  @returns   the result
**/
Taxo_NaturalSource Entr_EntryMolecule_GetExperimentalSource(Entr_EntryMolecule self)
{
  
  Taxo_NaturalSource obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExperimentalSource");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.EntryMolecule: cannot find method 'getExperimentalSource'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.EntryMolecule: method 'getExperimentalSource' is not callable");
  
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
  @param  Entr_EntryMolecule self
  @returns   the result
**/
ApiList Entr_EntryMolecule_GetFieldNames(Entr_EntryMolecule self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.EntryMolecule: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.EntryMolecule: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.nmr.NmrEntry.EntryMolecule
  @param  Entr_EntryMolecule self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Entr_EntryMolecule_GetFullKey(Entr_EntryMolecule self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.EntryMolecule: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.EntryMolecule: method 'getFullKey' is not callable");
  
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
  @param  Entr_EntryMolecule self
  @returns   the result
**/
ApiBoolean Entr_EntryMolecule_GetInConstructor(Entr_EntryMolecule self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.EntryMolecule: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.EntryMolecule: method 'getInConstructor' is not callable");
  
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
  @param  Entr_EntryMolecule self
  @returns   the result
**/
ApiBoolean Entr_EntryMolecule_GetIsDeleted(Entr_EntryMolecule self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.EntryMolecule: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.EntryMolecule: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.nmr.NmrEntry.EntryMolecule
  @param  Entr_EntryMolecule self
  @returns  Local object key
**/
ApiObject Entr_EntryMolecule_GetLocalKey(Entr_EntryMolecule self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.EntryMolecule: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.EntryMolecule: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrEntry.EntryMolecule.molecule

Molecule defining this 
EntryMolecule (key)
  @param  Entr_EntryMolecule self
  @returns   the result
**/
Mole_Molecule Entr_EntryMolecule_GetMolecule(Entr_EntryMolecule self)
{
  
  Mole_Molecule obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolecule");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.EntryMolecule: cannot find method 'getMolecule'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.EntryMolecule: method 'getMolecule' is not callable");
  
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
  @param  Entr_EntryMolecule self
  @returns   the result
**/
ApiString Entr_EntryMolecule_GetPackageName(Entr_EntryMolecule self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.EntryMolecule: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.EntryMolecule: method 'getPackageName' is not callable");
  
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
  @param  Entr_EntryMolecule self
  @returns   the result
**/
ApiString Entr_EntryMolecule_GetPackageShortName(Entr_EntryMolecule self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.EntryMolecule: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.EntryMolecule: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrEntry.EntryMolecule.parent

link to parent object - 
synonym for entry
  @param  Entr_EntryMolecule self
  @returns   the result
**/
Entr_Entry Entr_EntryMolecule_GetParent(Entr_EntryMolecule self)
{
  
  Entr_Entry obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.EntryMolecule: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.EntryMolecule: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrEntry.EntryMolecule.productionMethod

Production 
method
  @param  Entr_EntryMolecule self
  @returns   the result
**/
ApiString Entr_EntryMolecule_GetProductionMethod(Entr_EntryMolecule self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getProductionMethod");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.EntryMolecule: cannot find method 'getProductionMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.EntryMolecule: method 'getProductionMethod' is not callable");
  
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
  @param  Entr_EntryMolecule self
  @returns   the result
**/
ApiString Entr_EntryMolecule_GetQualifiedName(Entr_EntryMolecule self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.EntryMolecule: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.EntryMolecule: method 'getQualifiedName' is not callable");
  
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
  @param  Entr_EntryMolecule self
  @returns   the result
**/
Impl_MemopsRoot Entr_EntryMolecule_GetRoot(Entr_EntryMolecule self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.EntryMolecule: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.EntryMolecule: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrEntry.EntryMolecule.sourceType

Type of molecule 
natural source
  @param  Entr_EntryMolecule self
  @returns   the result
**/
ApiString Entr_EntryMolecule_GetSourceType(Entr_EntryMolecule self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSourceType");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.EntryMolecule: cannot find method 'getSourceType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.EntryMolecule: method 'getSourceType' is not callable");
  
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
  @param  Entr_EntryMolecule self
  @returns   the result
**/
Impl_TopObject Entr_EntryMolecule_GetTopObject(Entr_EntryMolecule self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.EntryMolecule: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.EntryMolecule: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrEntry.EntryMolecule.vectorType

Type of expression 
vector
  @param  Entr_EntryMolecule self
  @returns   the result
**/
ApiString Entr_EntryMolecule_GetVectorType(Entr_EntryMolecule self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getVectorType");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.EntryMolecule: cannot find method 'getVectorType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.EntryMolecule: method 'getVectorType' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.nmr.NmrEntry.EntryMolecule
  @param  Entr_Entry parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Entr_EntryMolecule Entr_EntryMolecule_Init(Entr_Entry parent, ApiMap attrlinks)
{
  
  return Entr_Entry_NewEntryMolecule(parent, attrlinks);
}

/**
  Constructor for ccp.nmr.NmrEntry.EntryMolecule
  @param  Entr_Entry parent
  @param  Mole_Molecule molecule
  @param  char * productionMethod
  @returns  the new object
**/
Entr_EntryMolecule Entr_EntryMolecule_Init_reqd(Entr_Entry parent, Mole_Molecule molecule, char * productionMethod)
{
  
  Entr_EntryMolecule  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__productionMethod = ApiString_New(productionMethod);

  PyDict_SetItemString(attrlinks, "molecule", molecule);
  PyDict_SetItemString(attrlinks, "productionMethod", api__productionMethod);
  
  obj = Entr_EntryMolecule_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__productionMethod);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_EntryMolecule self
  @param  Impl_ApplicationData value
**/
void *Entr_EntryMolecule_RemoveApplicationData(Entr_EntryMolecule self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.EntryMolecule: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.EntryMolecule: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.nmr.NmrEntry.EntryMolecule
  @param  Entr_EntryMolecule self
  @param  ApiString name
  @param  ApiObject value
**/
void *Entr_EntryMolecule_Set(Entr_EntryMolecule self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Entr_EntryMolecule self
  @param  Acco_AccessObject value
**/
void *Entr_EntryMolecule_SetAccess(Entr_EntryMolecule self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.EntryMolecule: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.EntryMolecule: method 'setAccess' is not callable");
  
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
  @param  Entr_EntryMolecule self
  @param  ApiList values
**/
void *Entr_EntryMolecule_SetApplicationData(Entr_EntryMolecule self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.EntryMolecule: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.EntryMolecule: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrEntry.EntryMolecule.experimentalSource

Experimental 
source of Molecule
  @param  Entr_EntryMolecule self
  @param  Taxo_NaturalSource value
**/
void *Entr_EntryMolecule_SetExperimentalSource(Entr_EntryMolecule self, Taxo_NaturalSource value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setExperimentalSource");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.EntryMolecule: cannot find method 'setExperimentalSource'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.EntryMolecule: method 'setExperimentalSource' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrEntry.EntryMolecule.molecule

Molecule defining this 
EntryMolecule (key)
  @param  Entr_EntryMolecule self
  @param  Mole_Molecule value
**/
void *Entr_EntryMolecule_SetMolecule(Entr_EntryMolecule self, Mole_Molecule value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMolecule");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.EntryMolecule: cannot find method 'setMolecule'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.EntryMolecule: method 'setMolecule' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrEntry.EntryMolecule.productionMethod

Production 
method
  @param  Entr_EntryMolecule self
  @param  ApiString value
**/
void *Entr_EntryMolecule_SetProductionMethod(Entr_EntryMolecule self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setProductionMethod");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.EntryMolecule: cannot find method 'setProductionMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.EntryMolecule: method 'setProductionMethod' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrEntry.EntryMolecule.sourceType

Type of molecule 
natural source
  @param  Entr_EntryMolecule self
  @param  ApiString value
**/
void *Entr_EntryMolecule_SetSourceType(Entr_EntryMolecule self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSourceType");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.EntryMolecule: cannot find method 'setSourceType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.EntryMolecule: method 'setSourceType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrEntry.EntryMolecule.vectorType

Type of expression 
vector
  @param  Entr_EntryMolecule self
  @param  ApiString value
**/
void *Entr_EntryMolecule_SetVectorType(Entr_EntryMolecule self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setVectorType");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.EntryMolecule: cannot find method 'setVectorType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.EntryMolecule: method 'setVectorType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
