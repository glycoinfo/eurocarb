
#include "ccp.h"

/*
  Stereochemistry type (e.g. tetrahedral, allene-like, ...) following SMILES conventions. 
*/

/* package ccp.api.molecule.Stereochemistry */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ster_RefStereochemistry self
  @param  Impl_ApplicationData value
**/
void *Ster_RefStereochemistry_AddApplicationData(Ster_RefStereochemistry self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for 
ccp.molecule.Stereochemistry.RefStereochemistry.values

Permitted values 
for the stereochemistry specification. For IUPAC tetrahedral 
stereochemistry, the values would correspond to 'R' and 'S'.
  @param  Ster_RefStereochemistry self
  @param  ApiString value
**/
void *Ster_RefStereochemistry_AddValue(Ster_RefStereochemistry self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addValue");
  
  if (!method)
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: cannot find method 'addValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: method 'addValue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.molecule.Stereochemistry.RefStereochemistry
  @param  Ster_RefStereochemistry self
  @param  ApiBoolean complete
**/
void *Ster_RefStereochemistry_CheckAllValid(Ster_RefStereochemistry self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.molecule.Stereochemistry.RefStereochemistry
  @param  Ster_RefStereochemistry self
  @param  ApiBoolean complete
**/
void *Ster_RefStereochemistry_CheckValid(Ster_RefStereochemistry self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: method 'checkValid' is not callable");
  
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
  @param  Ster_RefStereochemistry self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Ster_RefStereochemistry_FindAllApplicationData(Ster_RefStereochemistry self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: method 'findAllApplicationData' is not callable");
  
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
  @param  Ster_RefStereochemistry self
  @returns  all value that satisfy the conditions 
**/
ApiList Ster_RefStereochemistry_FindAllApplicationData_keyval0(Ster_RefStereochemistry self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Ster_RefStereochemistry_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ster_RefStereochemistry self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Ster_RefStereochemistry_FindAllApplicationData_keyval1(Ster_RefStereochemistry self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Ster_RefStereochemistry_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ster_RefStereochemistry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Ster_RefStereochemistry_FindAllApplicationData_keyval2(Ster_RefStereochemistry self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Ster_RefStereochemistry_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ster_RefStereochemistry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Ster_RefStereochemistry_FindAllApplicationData_keyval3(Ster_RefStereochemistry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Ster_RefStereochemistry_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ster_RefStereochemistry self
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
ApiList Ster_RefStereochemistry_FindAllApplicationData_keyval4(Ster_RefStereochemistry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Ster_RefStereochemistry_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ster_RefStereochemistry self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Ster_RefStereochemistry_FindFirstApplicationData(Ster_RefStereochemistry self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: method 'findFirstApplicationData' is not callable");
  
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
  @param  Ster_RefStereochemistry self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Ster_RefStereochemistry_FindFirstApplicationData_keyval0(Ster_RefStereochemistry self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Ster_RefStereochemistry_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ster_RefStereochemistry self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Ster_RefStereochemistry_FindFirstApplicationData_keyval1(Ster_RefStereochemistry self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Ster_RefStereochemistry_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ster_RefStereochemistry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Ster_RefStereochemistry_FindFirstApplicationData_keyval2(Ster_RefStereochemistry self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Ster_RefStereochemistry_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ster_RefStereochemistry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Ster_RefStereochemistry_FindFirstApplicationData_keyval3(Ster_RefStereochemistry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Ster_RefStereochemistry_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ster_RefStereochemistry self
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
Impl_ApplicationData Ster_RefStereochemistry_FindFirstApplicationData_keyval4(Ster_RefStereochemistry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Ster_RefStereochemistry_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.molecule.Stereochemistry.RefStereochemistry
  @param  Ster_RefStereochemistry self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Ster_RefStereochemistry_Get(Ster_RefStereochemistry self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Ster_RefStereochemistry self
  @returns   the result
**/
Acco_AccessObject Ster_RefStereochemistry_GetAccess(Ster_RefStereochemistry self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: method 'getAccess' is not callable");
  
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
  @param  Ster_RefStereochemistry self
  @returns   the result
**/
Acco_AccessObject Ster_RefStereochemistry_GetActiveAccess(Ster_RefStereochemistry self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: method 'getActiveAccess' is not callable");
  
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
  @param  Ster_RefStereochemistry self
  @returns   the result
**/
ApiList Ster_RefStereochemistry_GetApplicationData(Ster_RefStereochemistry self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.molecule.Stereochemistry.RefStereochemistry
  @param  Ster_RefStereochemistry self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Ster_RefStereochemistry Ster_RefStereochemistry_GetByKey(Ster_RefStereochemistry self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Ster_RefStereochemistry obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: method 'getByKey' is not callable");
  
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
  @param  Ster_RefStereochemistry self
  @returns   the result
**/
ApiString Ster_RefStereochemistry_GetClassName(Ster_RefStereochemistry self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.molecule.Stereochemistry.RefStereochemistry.details

Description of 
stereochemistry, including details on what the various values mean.
  @param  Ster_RefStereochemistry self
  @returns   the result
**/
ApiString Ster_RefStereochemistry_GetDetails(Ster_RefStereochemistry self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: method 'getDetails' is not callable");
  
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
  @param  Ster_RefStereochemistry self
  @returns   the result
**/
ApiList Ster_RefStereochemistry_GetFieldNames(Ster_RefStereochemistry self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.molecule.Stereochemistry.RefStereochemistry
  @param  Ster_RefStereochemistry self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Ster_RefStereochemistry_GetFullKey(Ster_RefStereochemistry self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: method 'getFullKey' is not callable");
  
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
  @param  Ster_RefStereochemistry self
  @returns   the result
**/
ApiBoolean Ster_RefStereochemistry_GetInConstructor(Ster_RefStereochemistry self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: method 'getInConstructor' is not callable");
  
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
  @param  Ster_RefStereochemistry self
  @returns   the result
**/
ApiBoolean Ster_RefStereochemistry_GetIsDeleted(Ster_RefStereochemistry self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.molecule.Stereochemistry.RefStereochemistry
  @param  Ster_RefStereochemistry self
  @returns  Local object key
**/
ApiObject Ster_RefStereochemistry_GetLocalKey(Ster_RefStereochemistry self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Stereochemistry.RefStereochemistry.numAtoms

number 
of atoms necessary for stereochemistry definition.
  @param  Ster_RefStereochemistry self
  @returns   the result
**/
ApiInteger Ster_RefStereochemistry_GetNumAtoms(Ster_RefStereochemistry self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNumAtoms");
  
  if (!method)
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: cannot find method 'getNumAtoms'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: method 'getNumAtoms' is not callable");
  
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
  @param  Ster_RefStereochemistry self
  @returns   the result
**/
ApiString Ster_RefStereochemistry_GetPackageName(Ster_RefStereochemistry self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: method 'getPackageName' is not callable");
  
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
  @param  Ster_RefStereochemistry self
  @returns   the result
**/
ApiString Ster_RefStereochemistry_GetPackageShortName(Ster_RefStereochemistry self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Stereochemistry.RefStereochemistry.parent

link to 
parent object - synonym for stereochemistryStore
  @param  Ster_RefStereochemistry self
  @returns   the result
**/
Ster_StereochemistryStore Ster_RefStereochemistry_GetParent(Ster_RefStereochemistry self)
{
  
  Ster_StereochemistryStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: method 'getParent' is not callable");
  
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
  @param  Ster_RefStereochemistry self
  @returns   the result
**/
ApiString Ster_RefStereochemistry_GetQualifiedName(Ster_RefStereochemistry self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: method 'getQualifiedName' is not callable");
  
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
  @param  Ster_RefStereochemistry self
  @returns   the result
**/
Impl_MemopsRoot Ster_RefStereochemistry_GetRoot(Ster_RefStereochemistry self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Stereochemistry.RefStereochemistry.serial

Serial 
number of object. Serves as object main key. Serial numbers of deleted 
objects are not re-used. Serial numbers can only be set by the 
implementation. Values are in practice always positive, since negative 
values are interpreted as a signal to set the next free serial
  @param  Ster_RefStereochemistry self
  @returns   the result
**/
ApiInteger Ster_RefStereochemistry_GetSerial(Ster_RefStereochemistry self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: method 'getSerial' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.molecule.Stereochemistry.RefStereochemistry.stereoClass

name of 
stereochemistry type, following the SMILES conventions.
  @param  Ster_RefStereochemistry self
  @returns   the result
**/
ApiString Ster_RefStereochemistry_GetStereoClass(Ster_RefStereochemistry self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getStereoClass");
  
  if (!method)
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: cannot find method 'getStereoClass'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: method 'getStereoClass' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.molecule.Stereochemistry.RefStereochemistry.stereochemistryStore

parent 
link
  @param  Ster_RefStereochemistry self
  @returns   the result
**/
Ster_StereochemistryStore Ster_RefStereochemistry_GetStereochemistryStore(Ster_RefStereochemistry self)
{
  
  Ster_StereochemistryStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getStereochemistryStore");
  
  if (!method)
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: cannot find method 'getStereochemistryStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: method 'getStereochemistryStore' is not callable");
  
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
  @param  Ster_RefStereochemistry self
  @returns   the result
**/
Impl_TopObject Ster_RefStereochemistry_GetTopObject(Ster_RefStereochemistry self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.molecule.Stereochemistry.RefStereochemistry.values

Permitted values 
for the stereochemistry specification. For IUPAC tetrahedral 
stereochemistry, the values would correspond to 'R' and 'S'.
  @param  Ster_RefStereochemistry self
  @returns   the result
**/
ApiList Ster_RefStereochemistry_GetValues(Ster_RefStereochemistry self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getValues");
  
  if (!method)
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: cannot find method 'getValues'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: method 'getValues' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.molecule.Stereochemistry.RefStereochemistry
  @param  Ster_StereochemistryStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Ster_RefStereochemistry Ster_RefStereochemistry_Init(Ster_StereochemistryStore parent, ApiMap attrlinks)
{
  
  return Ster_StereochemistryStore_NewRefStereochemistry(parent, attrlinks);
}

/**
  Constructor for ccp.molecule.Stereochemistry.RefStereochemistry
  @param  Ster_StereochemistryStore parent
  @param  ApiInteger numAtoms
  @param  char * stereoClass
  @returns  the new object
**/
Ster_RefStereochemistry Ster_RefStereochemistry_Init_reqd(Ster_StereochemistryStore parent, ApiInteger numAtoms, char * stereoClass)
{
  
  Ster_RefStereochemistry  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__stereoClass = ApiString_New(stereoClass);

  PyDict_SetItemString(attrlinks, "numAtoms", numAtoms);
  PyDict_SetItemString(attrlinks, "stereoClass", api__stereoClass);
  
  obj = Ster_RefStereochemistry_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__stereoClass);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ster_RefStereochemistry self
  @param  Impl_ApplicationData value
**/
void *Ster_RefStereochemistry_RemoveApplicationData(Ster_RefStereochemistry self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
ccp.molecule.Stereochemistry.RefStereochemistry.values

Permitted values 
for the stereochemistry specification. For IUPAC tetrahedral 
stereochemistry, the values would correspond to 'R' and 'S'.
  @param  Ster_RefStereochemistry self
  @param  ApiString value
**/
void *Ster_RefStereochemistry_RemoveValue(Ster_RefStereochemistry self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeValue");
  
  if (!method)
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: cannot find method 'removeValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: method 'removeValue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.molecule.Stereochemistry.RefStereochemistry
  @param  Ster_RefStereochemistry self
  @param  ApiString name
  @param  ApiObject value
**/
void *Ster_RefStereochemistry_Set(Ster_RefStereochemistry self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Ster_RefStereochemistry self
  @param  Acco_AccessObject value
**/
void *Ster_RefStereochemistry_SetAccess(Ster_RefStereochemistry self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: method 'setAccess' is not callable");
  
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
  @param  Ster_RefStereochemistry self
  @param  ApiList values
**/
void *Ster_RefStereochemistry_SetApplicationData(Ster_RefStereochemistry self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.molecule.Stereochemistry.RefStereochemistry.details

Description of 
stereochemistry, including details on what the various values mean.
  @param  Ster_RefStereochemistry self
  @param  ApiString value
**/
void *Ster_RefStereochemistry_SetDetails(Ster_RefStereochemistry self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.Stereochemistry.RefStereochemistry.numAtoms

number 
of atoms necessary for stereochemistry definition.
  @param  Ster_RefStereochemistry self
  @param  ApiInteger value
**/
void *Ster_RefStereochemistry_SetNumAtoms(Ster_RefStereochemistry self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNumAtoms");
  
  if (!method)
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: cannot find method 'setNumAtoms'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: method 'setNumAtoms' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.Stereochemistry.RefStereochemistry.serial

Serial 
number of object. Serves as object main key. Serial numbers of deleted 
objects are not re-used. Serial numbers can only be set by the 
implementation. Values are in practice always positive, since negative 
values are interpreted as a signal to set the next free serial
  @param  Ster_RefStereochemistry self
  @param  ApiInteger value
**/
void *Ster_RefStereochemistry_SetSerial(Ster_RefStereochemistry self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.molecule.Stereochemistry.RefStereochemistry.stereoClass

name of 
stereochemistry type, following the SMILES conventions.
  @param  Ster_RefStereochemistry self
  @param  ApiString value
**/
void *Ster_RefStereochemistry_SetStereoClass(Ster_RefStereochemistry self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setStereoClass");
  
  if (!method)
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: cannot find method 'setStereoClass'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: method 'setStereoClass' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.molecule.Stereochemistry.RefStereochemistry.values

Permitted values 
for the stereochemistry specification. For IUPAC tetrahedral 
stereochemistry, the values would correspond to 'R' and 'S'.
  @param  Ster_RefStereochemistry self
  @param  ApiList values
**/
void *Ster_RefStereochemistry_SetValues(Ster_RefStereochemistry self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setValues");
  
  if (!method)
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: cannot find method 'setValues'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Stereochemistry.RefStereochemistry: method 'setValues' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
