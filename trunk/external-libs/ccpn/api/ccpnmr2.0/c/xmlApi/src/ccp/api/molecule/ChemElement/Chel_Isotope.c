
#include "ccp.h"

/*
  Nuclear Isotope
*/

/* package ccp.api.molecule.ChemElement */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chel_Isotope self
  @param  Impl_ApplicationData value
**/
void *Chel_Isotope_AddApplicationData(Chel_Isotope self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.Isotope: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.Isotope: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.molecule.ChemElement.Isotope
  @param  Chel_Isotope self
  @param  ApiBoolean complete
**/
void *Chel_Isotope_CheckAllValid(Chel_Isotope self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.Isotope: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.Isotope: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.molecule.ChemElement.Isotope
  @param  Chel_Isotope self
  @param  ApiBoolean complete
**/
void *Chel_Isotope_CheckValid(Chel_Isotope self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.Isotope: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.Isotope: method 'checkValid' is not callable");
  
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
  @param  Chel_Isotope self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Chel_Isotope_FindAllApplicationData(Chel_Isotope self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.Isotope: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.Isotope: method 'findAllApplicationData' is not callable");
  
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
  @param  Chel_Isotope self
  @returns  all value that satisfy the conditions 
**/
ApiList Chel_Isotope_FindAllApplicationData_keyval0(Chel_Isotope self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chel_Isotope_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chel_Isotope self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Chel_Isotope_FindAllApplicationData_keyval1(Chel_Isotope self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chel_Isotope_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chel_Isotope self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Chel_Isotope_FindAllApplicationData_keyval2(Chel_Isotope self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chel_Isotope_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chel_Isotope self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Chel_Isotope_FindAllApplicationData_keyval3(Chel_Isotope self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chel_Isotope_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chel_Isotope self
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
ApiList Chel_Isotope_FindAllApplicationData_keyval4(Chel_Isotope self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chel_Isotope_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chel_Isotope self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chel_Isotope_FindFirstApplicationData(Chel_Isotope self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.Isotope: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.Isotope: method 'findFirstApplicationData' is not callable");
  
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
  @param  Chel_Isotope self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chel_Isotope_FindFirstApplicationData_keyval0(Chel_Isotope self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chel_Isotope_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chel_Isotope self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chel_Isotope_FindFirstApplicationData_keyval1(Chel_Isotope self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chel_Isotope_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chel_Isotope self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chel_Isotope_FindFirstApplicationData_keyval2(Chel_Isotope self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chel_Isotope_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chel_Isotope self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chel_Isotope_FindFirstApplicationData_keyval3(Chel_Isotope self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chel_Isotope_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chel_Isotope self
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
Impl_ApplicationData Chel_Isotope_FindFirstApplicationData_keyval4(Chel_Isotope self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chel_Isotope_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.molecule.ChemElement.Isotope
  @param  Chel_Isotope self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Chel_Isotope_Get(Chel_Isotope self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for ccp.molecule.ChemElement.Isotope.abundance

Fractional natural 
abundance natural abundance (e.g. 0.015 for 1.5%).
  @param  Chel_Isotope self
  @returns   the result
**/
ApiFloat Chel_Isotope_GetAbundance(Chel_Isotope self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAbundance");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.Isotope: cannot find method 'getAbundance'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.Isotope: method 'getAbundance' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Chel_Isotope self
  @returns   the result
**/
Acco_AccessObject Chel_Isotope_GetAccess(Chel_Isotope self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.Isotope: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.Isotope: method 'getAccess' is not callable");
  
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
  @param  Chel_Isotope self
  @returns   the result
**/
ApiList Chel_Isotope_GetApplicationData(Chel_Isotope self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.Isotope: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.Isotope: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.molecule.ChemElement.Isotope
  @param  Chel_Isotope self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Chel_Isotope Chel_Isotope_GetByKey(Chel_Isotope self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Chel_Isotope obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.Isotope: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.Isotope: method 'getByKey' is not callable");
  
  args = PyTuple_Pack(2, startObj, fullKey);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemElement.Isotope.chemElement

parent link
  @param  Chel_Isotope self
  @returns   the result
**/
Chel_ChemElement Chel_Isotope_GetChemElement(Chel_Isotope self)
{
  
  Chel_ChemElement obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemElement");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.Isotope: cannot find method 'getChemElement'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.Isotope: method 'getChemElement' is not callable");
  
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
  @param  Chel_Isotope self
  @returns   the result
**/
ApiString Chel_Isotope_GetClassName(Chel_Isotope self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.Isotope: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.Isotope: method 'getClassName' is not callable");
  
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
  @param  Chel_Isotope self
  @returns   the result
**/
ApiList Chel_Isotope_GetFieldNames(Chel_Isotope self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.Isotope: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.Isotope: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.molecule.ChemElement.Isotope
  @param  Chel_Isotope self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Chel_Isotope_GetFullKey(Chel_Isotope self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.Isotope: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.Isotope: method 'getFullKey' is not callable");
  
  args = PyTuple_Pack(1, useGuid);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemElement.Isotope.gyroMagneticRatio

Gyromagnetic 
ratio (in rad/Ts)
  @param  Chel_Isotope self
  @returns   the result
**/
ApiFloat Chel_Isotope_GetGyroMagneticRatio(Chel_Isotope self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getGyroMagneticRatio");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.Isotope: cannot find method 'getGyroMagneticRatio'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.Isotope: method 'getGyroMagneticRatio' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemElement.Isotope.halfLife

Halflife of isotope, 
in seconds. The interpretation of the value depends on the value of 
halfLifeType
  @param  Chel_Isotope self
  @returns   the result
**/
ApiFloat Chel_Isotope_GetHalfLife(Chel_Isotope self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getHalfLife");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.Isotope: cannot find method 'getHalfLife'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.Isotope: method 'getHalfLife' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemElement.Isotope.halfLifeError

Estimated 
Standard Deviation ('error') fo the halfLife
  @param  Chel_Isotope self
  @returns   the result
**/
ApiFloat Chel_Isotope_GetHalfLifeError(Chel_Isotope self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getHalfLifeError");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.Isotope: cannot find method 'getHalfLifeError'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.Isotope: method 'getHalfLifeError' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemElement.Isotope.halfLifeType

Enumerated 
string, describing how to interpret the halfLife value. If the value is 
'stable' the isotope does not decay. See  DataType HalfLifeType for 
details
  @param  Chel_Isotope self
  @returns   the result
**/
ApiString Chel_Isotope_GetHalfLifeType(Chel_Isotope self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getHalfLifeType");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.Isotope: cannot find method 'getHalfLifeType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.Isotope: method 'getHalfLifeType' is not callable");
  
  args = PyTuple_New(0);
  
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
  @param  Chel_Isotope self
  @returns   the result
**/
ApiBoolean Chel_Isotope_GetInConstructor(Chel_Isotope self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.Isotope: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.Isotope: method 'getInConstructor' is not callable");
  
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
  @param  Chel_Isotope self
  @returns   the result
**/
ApiBoolean Chel_Isotope_GetIsDeleted(Chel_Isotope self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.Isotope: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.Isotope: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.molecule.ChemElement.Isotope
  @param  Chel_Isotope self
  @returns  Local object key
**/
ApiObject Chel_Isotope_GetLocalKey(Chel_Isotope self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.Isotope: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.Isotope: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemElement.Isotope.magneticMoment

in multiples of 
the nuclear magneton.
  @param  Chel_Isotope self
  @returns   the result
**/
ApiFloat Chel_Isotope_GetMagneticMoment(Chel_Isotope self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMagneticMoment");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.Isotope: cannot find method 'getMagneticMoment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.Isotope: method 'getMagneticMoment' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemElement.Isotope.mass

Isotope mass (in atomic 
mass units).
  @param  Chel_Isotope self
  @returns   the result
**/
ApiFloat Chel_Isotope_GetMass(Chel_Isotope self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMass");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.Isotope: cannot find method 'getMass'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.Isotope: method 'getMass' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemElement.Isotope.massNumber

Isotope number 
(mass number). E.g. 1 for proton, 2 for deuterium, 13 for 13C etc.
  @param  Chel_Isotope self
  @returns   the result
**/
ApiInteger Chel_Isotope_GetMassNumber(Chel_Isotope self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMassNumber");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.Isotope: cannot find method 'getMassNumber'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.Isotope: method 'getMassNumber' is not callable");
  
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
  @param  Chel_Isotope self
  @returns   the result
**/
ApiString Chel_Isotope_GetPackageName(Chel_Isotope self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.Isotope: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.Isotope: method 'getPackageName' is not callable");
  
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
  @param  Chel_Isotope self
  @returns   the result
**/
ApiString Chel_Isotope_GetPackageShortName(Chel_Isotope self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.Isotope: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.Isotope: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemElement.Isotope.parent

link to parent object - 
synonym for chemElement
  @param  Chel_Isotope self
  @returns   the result
**/
Chel_ChemElement Chel_Isotope_GetParent(Chel_Isotope self)
{
  
  Chel_ChemElement obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.Isotope: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.Isotope: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemElement.Isotope.quadrupoleMoment

in units of 
barns (10**-24cm**2)
  @param  Chel_Isotope self
  @returns   the result
**/
ApiFloat Chel_Isotope_GetQuadrupoleMoment(Chel_Isotope self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQuadrupoleMoment");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.Isotope: cannot find method 'getQuadrupoleMoment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.Isotope: method 'getQuadrupoleMoment' is not callable");
  
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
  @param  Chel_Isotope self
  @returns   the result
**/
ApiString Chel_Isotope_GetQualifiedName(Chel_Isotope self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.Isotope: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.Isotope: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemElement.Isotope.receptivity

Relative NMR 
receptivity. 1H receptivity set to 1.0
  @param  Chel_Isotope self
  @returns   the result
**/
ApiFloat Chel_Isotope_GetReceptivity(Chel_Isotope self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getReceptivity");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.Isotope: cannot find method 'getReceptivity'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.Isotope: method 'getReceptivity' is not callable");
  
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
  @param  Chel_Isotope self
  @returns   the result
**/
Impl_MemopsRoot Chel_Isotope_GetRoot(Chel_Isotope self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.Isotope: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.Isotope: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemElement.Isotope.spin

nuclear spin (e.g. 0, 
1/2, 5, 7/2 ...)
  @param  Chel_Isotope self
  @returns   the result
**/
ApiString Chel_Isotope_GetSpin(Chel_Isotope self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSpin");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.Isotope: cannot find method 'getSpin'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.Isotope: method 'getSpin' is not callable");
  
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
  @param  Chel_Isotope self
  @returns   the result
**/
Impl_TopObject Chel_Isotope_GetTopObject(Chel_Isotope self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.Isotope: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.Isotope: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.molecule.ChemElement.Isotope
  @param  Chel_ChemElement parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Chel_Isotope Chel_Isotope_Init(Chel_ChemElement parent, ApiMap attrlinks)
{
  
  return Chel_ChemElement_NewIsotope(parent, attrlinks);
}

/**
  Constructor for ccp.molecule.ChemElement.Isotope
  @param  Chel_ChemElement parent
  @param  ApiInteger massNumber
  @returns  the new object
**/
Chel_Isotope Chel_Isotope_Init_reqd(Chel_ChemElement parent, ApiInteger massNumber)
{
  
  Chel_Isotope  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "massNumber", massNumber);
  
  obj = Chel_Isotope_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chel_Isotope self
  @param  Impl_ApplicationData value
**/
void *Chel_Isotope_RemoveApplicationData(Chel_Isotope self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.Isotope: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.Isotope: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.molecule.ChemElement.Isotope
  @param  Chel_Isotope self
  @param  ApiString name
  @param  ApiObject value
**/
void *Chel_Isotope_Set(Chel_Isotope self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for ccp.molecule.ChemElement.Isotope.abundance

Fractional natural 
abundance natural abundance (e.g. 0.015 for 1.5%).
  @param  Chel_Isotope self
  @param  ApiFloat value
**/
void *Chel_Isotope_SetAbundance(Chel_Isotope self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAbundance");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.Isotope: cannot find method 'setAbundance'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.Isotope: method 'setAbundance' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Chel_Isotope self
  @param  Acco_AccessObject value
**/
void *Chel_Isotope_SetAccess(Chel_Isotope self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.Isotope: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.Isotope: method 'setAccess' is not callable");
  
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
  @param  Chel_Isotope self
  @param  ApiList values
**/
void *Chel_Isotope_SetApplicationData(Chel_Isotope self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.Isotope: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.Isotope: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemElement.Isotope.gyroMagneticRatio

Gyromagnetic 
ratio (in rad/Ts)
  @param  Chel_Isotope self
  @param  ApiFloat value
**/
void *Chel_Isotope_SetGyroMagneticRatio(Chel_Isotope self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setGyroMagneticRatio");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.Isotope: cannot find method 'setGyroMagneticRatio'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.Isotope: method 'setGyroMagneticRatio' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemElement.Isotope.halfLife

Halflife of isotope, 
in seconds. The interpretation of the value depends on the value of 
halfLifeType
  @param  Chel_Isotope self
  @param  ApiFloat value
**/
void *Chel_Isotope_SetHalfLife(Chel_Isotope self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setHalfLife");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.Isotope: cannot find method 'setHalfLife'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.Isotope: method 'setHalfLife' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemElement.Isotope.halfLifeError

Estimated 
Standard Deviation ('error') fo the halfLife
  @param  Chel_Isotope self
  @param  ApiFloat value
**/
void *Chel_Isotope_SetHalfLifeError(Chel_Isotope self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setHalfLifeError");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.Isotope: cannot find method 'setHalfLifeError'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.Isotope: method 'setHalfLifeError' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemElement.Isotope.halfLifeType

Enumerated 
string, describing how to interpret the halfLife value. If the value is 
'stable' the isotope does not decay. See  DataType HalfLifeType for 
details
  @param  Chel_Isotope self
  @param  ApiString value
**/
void *Chel_Isotope_SetHalfLifeType(Chel_Isotope self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setHalfLifeType");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.Isotope: cannot find method 'setHalfLifeType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.Isotope: method 'setHalfLifeType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemElement.Isotope.magneticMoment

in multiples of 
the nuclear magneton.
  @param  Chel_Isotope self
  @param  ApiFloat value
**/
void *Chel_Isotope_SetMagneticMoment(Chel_Isotope self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMagneticMoment");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.Isotope: cannot find method 'setMagneticMoment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.Isotope: method 'setMagneticMoment' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemElement.Isotope.mass

Isotope mass (in atomic 
mass units).
  @param  Chel_Isotope self
  @param  ApiFloat value
**/
void *Chel_Isotope_SetMass(Chel_Isotope self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMass");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.Isotope: cannot find method 'setMass'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.Isotope: method 'setMass' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemElement.Isotope.massNumber

Isotope number 
(mass number). E.g. 1 for proton, 2 for deuterium, 13 for 13C etc.
  @param  Chel_Isotope self
  @param  ApiInteger value
**/
void *Chel_Isotope_SetMassNumber(Chel_Isotope self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMassNumber");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.Isotope: cannot find method 'setMassNumber'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.Isotope: method 'setMassNumber' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemElement.Isotope.quadrupoleMoment

in units of 
barns (10**-24cm**2)
  @param  Chel_Isotope self
  @param  ApiFloat value
**/
void *Chel_Isotope_SetQuadrupoleMoment(Chel_Isotope self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setQuadrupoleMoment");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.Isotope: cannot find method 'setQuadrupoleMoment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.Isotope: method 'setQuadrupoleMoment' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemElement.Isotope.receptivity

Relative NMR 
receptivity. 1H receptivity set to 1.0
  @param  Chel_Isotope self
  @param  ApiFloat value
**/
void *Chel_Isotope_SetReceptivity(Chel_Isotope self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setReceptivity");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.Isotope: cannot find method 'setReceptivity'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.Isotope: method 'setReceptivity' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemElement.Isotope.spin

nuclear spin (e.g. 0, 
1/2, 5, 7/2 ...)
  @param  Chel_Isotope self
  @param  ApiString value
**/
void *Chel_Isotope_SetSpin(Chel_Isotope self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSpin");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.Isotope: cannot find method 'setSpin'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.Isotope: method 'setSpin' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
