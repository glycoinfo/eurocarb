
#include "ccp.h"

/*
  Describes the relative abundance of a given MolLabel in a given LabeledMixture (association class).
*/

/* package ccp.api.molecule.LabeledMolecule */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_MolLabelFraction self
  @param  Impl_ApplicationData value
**/
void *Lmol_MolLabelFraction_AddApplicationData(Lmol_MolLabelFraction self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabelFraction: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabelFraction: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.molecule.LabeledMolecule.MolLabelFraction
  @param  Lmol_MolLabelFraction self
  @param  ApiBoolean complete
**/
void *Lmol_MolLabelFraction_CheckAllValid(Lmol_MolLabelFraction self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabelFraction: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabelFraction: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.molecule.LabeledMolecule.MolLabelFraction
  @param  Lmol_MolLabelFraction self
  @param  ApiBoolean complete
**/
void *Lmol_MolLabelFraction_CheckValid(Lmol_MolLabelFraction self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabelFraction: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabelFraction: method 'checkValid' is not callable");
  
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
  @param  Lmol_MolLabelFraction self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Lmol_MolLabelFraction_FindAllApplicationData(Lmol_MolLabelFraction self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabelFraction: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabelFraction: method 'findAllApplicationData' is not callable");
  
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
  @param  Lmol_MolLabelFraction self
  @returns  all value that satisfy the conditions 
**/
ApiList Lmol_MolLabelFraction_FindAllApplicationData_keyval0(Lmol_MolLabelFraction self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Lmol_MolLabelFraction_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_MolLabelFraction self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Lmol_MolLabelFraction_FindAllApplicationData_keyval1(Lmol_MolLabelFraction self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Lmol_MolLabelFraction_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_MolLabelFraction self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Lmol_MolLabelFraction_FindAllApplicationData_keyval2(Lmol_MolLabelFraction self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Lmol_MolLabelFraction_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_MolLabelFraction self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Lmol_MolLabelFraction_FindAllApplicationData_keyval3(Lmol_MolLabelFraction self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Lmol_MolLabelFraction_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_MolLabelFraction self
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
ApiList Lmol_MolLabelFraction_FindAllApplicationData_keyval4(Lmol_MolLabelFraction self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Lmol_MolLabelFraction_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_MolLabelFraction self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Lmol_MolLabelFraction_FindFirstApplicationData(Lmol_MolLabelFraction self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabelFraction: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabelFraction: method 'findFirstApplicationData' is not callable");
  
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
  @param  Lmol_MolLabelFraction self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Lmol_MolLabelFraction_FindFirstApplicationData_keyval0(Lmol_MolLabelFraction self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Lmol_MolLabelFraction_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_MolLabelFraction self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Lmol_MolLabelFraction_FindFirstApplicationData_keyval1(Lmol_MolLabelFraction self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Lmol_MolLabelFraction_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_MolLabelFraction self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Lmol_MolLabelFraction_FindFirstApplicationData_keyval2(Lmol_MolLabelFraction self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Lmol_MolLabelFraction_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_MolLabelFraction self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Lmol_MolLabelFraction_FindFirstApplicationData_keyval3(Lmol_MolLabelFraction self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Lmol_MolLabelFraction_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_MolLabelFraction self
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
Impl_ApplicationData Lmol_MolLabelFraction_FindFirstApplicationData_keyval4(Lmol_MolLabelFraction self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Lmol_MolLabelFraction_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.molecule.LabeledMolecule.MolLabelFraction
  @param  Lmol_MolLabelFraction self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Lmol_MolLabelFraction_Get(Lmol_MolLabelFraction self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Lmol_MolLabelFraction self
  @returns   the result
**/
Acco_AccessObject Lmol_MolLabelFraction_GetAccess(Lmol_MolLabelFraction self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabelFraction: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabelFraction: method 'getAccess' is not callable");
  
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
  @param  Lmol_MolLabelFraction self
  @returns   the result
**/
ApiList Lmol_MolLabelFraction_GetApplicationData(Lmol_MolLabelFraction self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabelFraction: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabelFraction: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.molecule.LabeledMolecule.MolLabelFraction
  @param  Lmol_MolLabelFraction self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Lmol_MolLabelFraction Lmol_MolLabelFraction_GetByKey(Lmol_MolLabelFraction self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Lmol_MolLabelFraction obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabelFraction: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabelFraction: method 'getByKey' is not callable");
  
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
  @param  Lmol_MolLabelFraction self
  @returns   the result
**/
ApiString Lmol_MolLabelFraction_GetClassName(Lmol_MolLabelFraction self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabelFraction: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabelFraction: method 'getClassName' is not callable");
  
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
  @param  Lmol_MolLabelFraction self
  @returns   the result
**/
ApiList Lmol_MolLabelFraction_GetFieldNames(Lmol_MolLabelFraction self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabelFraction: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabelFraction: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.molecule.LabeledMolecule.MolLabelFraction
  @param  Lmol_MolLabelFraction self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Lmol_MolLabelFraction_GetFullKey(Lmol_MolLabelFraction self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabelFraction: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabelFraction: method 'getFullKey' is not callable");
  
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
  @param  Lmol_MolLabelFraction self
  @returns   the result
**/
ApiBoolean Lmol_MolLabelFraction_GetInConstructor(Lmol_MolLabelFraction self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabelFraction: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabelFraction: method 'getInConstructor' is not callable");
  
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
  @param  Lmol_MolLabelFraction self
  @returns   the result
**/
ApiBoolean Lmol_MolLabelFraction_GetIsDeleted(Lmol_MolLabelFraction self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabelFraction: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabelFraction: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.molecule.LabeledMolecule.MolLabelFraction.labeledMixture

parent 
link
  @param  Lmol_MolLabelFraction self
  @returns   the result
**/
Lmol_LabeledMixture Lmol_MolLabelFraction_GetLabeledMixture(Lmol_MolLabelFraction self)
{
  
  Lmol_LabeledMixture obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLabeledMixture");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabelFraction: cannot find method 'getLabeledMixture'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabelFraction: method 'getLabeledMixture' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.molecule.LabeledMolecule.MolLabelFraction
  @param  Lmol_MolLabelFraction self
  @returns  Local object key
**/
ApiObject Lmol_MolLabelFraction_GetLocalKey(Lmol_MolLabelFraction self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabelFraction: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabelFraction: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.LabeledMolecule.MolLabelFraction.molLabel

MolLabel 
described by Fraction
  @param  Lmol_MolLabelFraction self
  @returns   the result
**/
Lmol_MolLabel Lmol_MolLabelFraction_GetMolLabel(Lmol_MolLabelFraction self)
{
  
  Lmol_MolLabel obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolLabel");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabelFraction: cannot find method 'getMolLabel'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabelFraction: method 'getMolLabel' is not callable");
  
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
  @param  Lmol_MolLabelFraction self
  @returns   the result
**/
ApiString Lmol_MolLabelFraction_GetPackageName(Lmol_MolLabelFraction self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabelFraction: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabelFraction: method 'getPackageName' is not callable");
  
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
  @param  Lmol_MolLabelFraction self
  @returns   the result
**/
ApiString Lmol_MolLabelFraction_GetPackageShortName(Lmol_MolLabelFraction self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabelFraction: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabelFraction: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.LabeledMolecule.MolLabelFraction.parent

link to 
parent object - synonym for labeledMixture
  @param  Lmol_MolLabelFraction self
  @returns   the result
**/
Lmol_LabeledMixture Lmol_MolLabelFraction_GetParent(Lmol_MolLabelFraction self)
{
  
  Lmol_LabeledMixture obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabelFraction: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabelFraction: method 'getParent' is not callable");
  
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
  @param  Lmol_MolLabelFraction self
  @returns   the result
**/
ApiString Lmol_MolLabelFraction_GetQualifiedName(Lmol_MolLabelFraction self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabelFraction: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabelFraction: method 'getQualifiedName' is not callable");
  
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
  @param  Lmol_MolLabelFraction self
  @returns   the result
**/
Impl_MemopsRoot Lmol_MolLabelFraction_GetRoot(Lmol_MolLabelFraction self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabelFraction: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabelFraction: method 'getRoot' is not callable");
  
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
  @param  Lmol_MolLabelFraction self
  @returns   the result
**/
Impl_TopObject Lmol_MolLabelFraction_GetTopObject(Lmol_MolLabelFraction self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabelFraction: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabelFraction: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.LabeledMolecule.MolLabelFraction.weight

Relative 
abundance of MolLabel present in the Mixture
  @param  Lmol_MolLabelFraction self
  @returns   the result
**/
ApiFloat Lmol_MolLabelFraction_GetWeight(Lmol_MolLabelFraction self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getWeight");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabelFraction: cannot find method 'getWeight'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabelFraction: method 'getWeight' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.molecule.LabeledMolecule.MolLabelFraction
  @param  Lmol_LabeledMixture parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Lmol_MolLabelFraction Lmol_MolLabelFraction_Init(Lmol_LabeledMixture parent, ApiMap attrlinks)
{
  
  return Lmol_LabeledMixture_NewMolLabelFraction(parent, attrlinks);
}

/**
  Constructor for ccp.molecule.LabeledMolecule.MolLabelFraction
  @param  Lmol_LabeledMixture parent
  @param  Lmol_MolLabel molLabel
  @returns  the new object
**/
Lmol_MolLabelFraction Lmol_MolLabelFraction_Init_reqd(Lmol_LabeledMixture parent, Lmol_MolLabel molLabel)
{
  
  Lmol_MolLabelFraction  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "molLabel", molLabel);
  
  obj = Lmol_MolLabelFraction_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_MolLabelFraction self
  @param  Impl_ApplicationData value
**/
void *Lmol_MolLabelFraction_RemoveApplicationData(Lmol_MolLabelFraction self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabelFraction: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabelFraction: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.molecule.LabeledMolecule.MolLabelFraction
  @param  Lmol_MolLabelFraction self
  @param  ApiString name
  @param  ApiObject value
**/
void *Lmol_MolLabelFraction_Set(Lmol_MolLabelFraction self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Lmol_MolLabelFraction self
  @param  Acco_AccessObject value
**/
void *Lmol_MolLabelFraction_SetAccess(Lmol_MolLabelFraction self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabelFraction: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabelFraction: method 'setAccess' is not callable");
  
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
  @param  Lmol_MolLabelFraction self
  @param  ApiList values
**/
void *Lmol_MolLabelFraction_SetApplicationData(Lmol_MolLabelFraction self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabelFraction: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabelFraction: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.LabeledMolecule.MolLabelFraction.molLabel

MolLabel 
described by Fraction
  @param  Lmol_MolLabelFraction self
  @param  Lmol_MolLabel value
**/
void *Lmol_MolLabelFraction_SetMolLabel(Lmol_MolLabelFraction self, Lmol_MolLabel value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMolLabel");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabelFraction: cannot find method 'setMolLabel'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabelFraction: method 'setMolLabel' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.LabeledMolecule.MolLabelFraction.weight

Relative 
abundance of MolLabel present in the Mixture
  @param  Lmol_MolLabelFraction self
  @param  ApiFloat value
**/
void *Lmol_MolLabelFraction_SetWeight(Lmol_MolLabelFraction self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setWeight");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabelFraction: cannot find method 'setWeight'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.MolLabelFraction: method 'setWeight' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
