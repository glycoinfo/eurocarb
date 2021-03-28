
#include "ccp.h"

/*
  Parameter to further characterise energy term. E.g. correlation time for a restraint derived from relaxation measurements.
*/

/* package molsim.api.NmrSim */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_EnergyTermParameter self
  @param  Impl_ApplicationData value
**/
void *Nsim_EnergyTermParameter_AddApplicationData(Nsim_EnergyTermParameter self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.EnergyTermParameter: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.EnergyTermParameter: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for molsim.NmrSim.EnergyTermParameter
  @param  Nsim_EnergyTermParameter self
  @param  ApiBoolean complete
**/
void *Nsim_EnergyTermParameter_CheckAllValid(Nsim_EnergyTermParameter self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.EnergyTermParameter: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.EnergyTermParameter: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for molsim.NmrSim.EnergyTermParameter
  @param  Nsim_EnergyTermParameter self
  @param  ApiBoolean complete
**/
void *Nsim_EnergyTermParameter_CheckValid(Nsim_EnergyTermParameter self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.EnergyTermParameter: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.EnergyTermParameter: method 'checkValid' is not callable");
  
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
  @param  Nsim_EnergyTermParameter self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nsim_EnergyTermParameter_FindAllApplicationData(Nsim_EnergyTermParameter self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.EnergyTermParameter: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.EnergyTermParameter: method 'findAllApplicationData' is not callable");
  
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
  @param  Nsim_EnergyTermParameter self
  @returns  all value that satisfy the conditions 
**/
ApiList Nsim_EnergyTermParameter_FindAllApplicationData_keyval0(Nsim_EnergyTermParameter self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nsim_EnergyTermParameter_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_EnergyTermParameter self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nsim_EnergyTermParameter_FindAllApplicationData_keyval1(Nsim_EnergyTermParameter self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nsim_EnergyTermParameter_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_EnergyTermParameter self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nsim_EnergyTermParameter_FindAllApplicationData_keyval2(Nsim_EnergyTermParameter self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nsim_EnergyTermParameter_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_EnergyTermParameter self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nsim_EnergyTermParameter_FindAllApplicationData_keyval3(Nsim_EnergyTermParameter self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nsim_EnergyTermParameter_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_EnergyTermParameter self
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
ApiList Nsim_EnergyTermParameter_FindAllApplicationData_keyval4(Nsim_EnergyTermParameter self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nsim_EnergyTermParameter_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_EnergyTermParameter self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nsim_EnergyTermParameter_FindFirstApplicationData(Nsim_EnergyTermParameter self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.EnergyTermParameter: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.EnergyTermParameter: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nsim_EnergyTermParameter self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nsim_EnergyTermParameter_FindFirstApplicationData_keyval0(Nsim_EnergyTermParameter self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nsim_EnergyTermParameter_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_EnergyTermParameter self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nsim_EnergyTermParameter_FindFirstApplicationData_keyval1(Nsim_EnergyTermParameter self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nsim_EnergyTermParameter_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_EnergyTermParameter self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nsim_EnergyTermParameter_FindFirstApplicationData_keyval2(Nsim_EnergyTermParameter self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nsim_EnergyTermParameter_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_EnergyTermParameter self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nsim_EnergyTermParameter_FindFirstApplicationData_keyval3(Nsim_EnergyTermParameter self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nsim_EnergyTermParameter_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_EnergyTermParameter self
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
Impl_ApplicationData Nsim_EnergyTermParameter_FindFirstApplicationData_keyval4(Nsim_EnergyTermParameter self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nsim_EnergyTermParameter_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for molsim.NmrSim.EnergyTermParameter
  @param  Nsim_EnergyTermParameter self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Nsim_EnergyTermParameter_Get(Nsim_EnergyTermParameter self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nsim_EnergyTermParameter self
  @returns   the result
**/
Acco_AccessObject Nsim_EnergyTermParameter_GetAccess(Nsim_EnergyTermParameter self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.EnergyTermParameter: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.EnergyTermParameter: method 'getAccess' is not callable");
  
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
  @param  Nsim_EnergyTermParameter self
  @returns   the result
**/
ApiList Nsim_EnergyTermParameter_GetApplicationData(Nsim_EnergyTermParameter self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.EnergyTermParameter: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.EnergyTermParameter: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for molsim.NmrSim.EnergyTermParameter
  @param  Nsim_EnergyTermParameter self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nsim_EnergyTermParameter Nsim_EnergyTermParameter_GetByKey(Nsim_EnergyTermParameter self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Nsim_EnergyTermParameter obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.EnergyTermParameter: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.EnergyTermParameter: method 'getByKey' is not callable");
  
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
  @param  Nsim_EnergyTermParameter self
  @returns   the result
**/
ApiString Nsim_EnergyTermParameter_GetClassName(Nsim_EnergyTermParameter self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.EnergyTermParameter: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.EnergyTermParameter: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.NmrSim.EnergyTermParameter.code

Code for energy term 
parameter, as used in its definition.
  @param  Nsim_EnergyTermParameter self
  @returns   the result
**/
ApiString Nsim_EnergyTermParameter_GetCode(Nsim_EnergyTermParameter self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCode");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.EnergyTermParameter: cannot find method 'getCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.EnergyTermParameter: method 'getCode' is not callable");
  
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
  @param  Nsim_EnergyTermParameter self
  @returns   the result
**/
ApiList Nsim_EnergyTermParameter_GetFieldNames(Nsim_EnergyTermParameter self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.EnergyTermParameter: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.EnergyTermParameter: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for molsim.NmrSim.EnergyTermParameter
  @param  Nsim_EnergyTermParameter self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Nsim_EnergyTermParameter_GetFullKey(Nsim_EnergyTermParameter self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.EnergyTermParameter: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.EnergyTermParameter: method 'getFullKey' is not callable");
  
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
  @param  Nsim_EnergyTermParameter self
  @returns   the result
**/
ApiBoolean Nsim_EnergyTermParameter_GetInConstructor(Nsim_EnergyTermParameter self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.EnergyTermParameter: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.EnergyTermParameter: method 'getInConstructor' is not callable");
  
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
  @param  Nsim_EnergyTermParameter self
  @returns   the result
**/
ApiBoolean Nsim_EnergyTermParameter_GetIsDeleted(Nsim_EnergyTermParameter self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.EnergyTermParameter: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.EnergyTermParameter: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for molsim.NmrSim.EnergyTermParameter
  @param  Nsim_EnergyTermParameter self
  @returns  Local object key
**/
ApiObject Nsim_EnergyTermParameter_GetLocalKey(Nsim_EnergyTermParameter self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.EnergyTermParameter: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.EnergyTermParameter: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.NmrSim.EnergyTermParameter.nmrSimEnergyTerm

parent link
  @param  Nsim_EnergyTermParameter self
  @returns   the result
**/
Nsim_NmrSimEnergyTerm Nsim_EnergyTermParameter_GetNmrSimEnergyTerm(Nsim_EnergyTermParameter self)
{
  
  Nsim_NmrSimEnergyTerm obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrSimEnergyTerm");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.EnergyTermParameter: cannot find method 'getNmrSimEnergyTerm'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.EnergyTermParameter: method 'getNmrSimEnergyTerm' is not callable");
  
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
  @param  Nsim_EnergyTermParameter self
  @returns   the result
**/
ApiString Nsim_EnergyTermParameter_GetPackageName(Nsim_EnergyTermParameter self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.EnergyTermParameter: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.EnergyTermParameter: method 'getPackageName' is not callable");
  
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
  @param  Nsim_EnergyTermParameter self
  @returns   the result
**/
ApiString Nsim_EnergyTermParameter_GetPackageShortName(Nsim_EnergyTermParameter self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.EnergyTermParameter: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.EnergyTermParameter: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.NmrSim.EnergyTermParameter.parent

link to parent object 
- synonym for nmrSimEnergyTerm
  @param  Nsim_EnergyTermParameter self
  @returns   the result
**/
Nsim_NmrSimEnergyTerm Nsim_EnergyTermParameter_GetParent(Nsim_EnergyTermParameter self)
{
  
  Nsim_NmrSimEnergyTerm obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.EnergyTermParameter: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.EnergyTermParameter: method 'getParent' is not callable");
  
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
  @param  Nsim_EnergyTermParameter self
  @returns   the result
**/
ApiString Nsim_EnergyTermParameter_GetQualifiedName(Nsim_EnergyTermParameter self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.EnergyTermParameter: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.EnergyTermParameter: method 'getQualifiedName' is not callable");
  
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
  @param  Nsim_EnergyTermParameter self
  @returns   the result
**/
Impl_MemopsRoot Nsim_EnergyTermParameter_GetRoot(Nsim_EnergyTermParameter self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.EnergyTermParameter: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.EnergyTermParameter: method 'getRoot' is not callable");
  
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
  @param  Nsim_EnergyTermParameter self
  @returns   the result
**/
Impl_TopObject Nsim_EnergyTermParameter_GetTopObject(Nsim_EnergyTermParameter self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.EnergyTermParameter: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.EnergyTermParameter: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.NmrSim.EnergyTermParameter.value

Value of energy term 
parameter
  @param  Nsim_EnergyTermParameter self
  @returns   the result
**/
ApiFloat Nsim_EnergyTermParameter_GetValue(Nsim_EnergyTermParameter self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getValue");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.EnergyTermParameter: cannot find method 'getValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.EnergyTermParameter: method 'getValue' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for molsim.NmrSim.EnergyTermParameter
  @param  Nsim_NmrSimEnergyTerm parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nsim_EnergyTermParameter Nsim_EnergyTermParameter_Init(Nsim_NmrSimEnergyTerm parent, ApiMap attrlinks)
{
  
  return Nsim_NmrSimEnergyTerm_NewEnergyTermParameter(parent, attrlinks);
}

/**
  Constructor for molsim.NmrSim.EnergyTermParameter
  @param  Nsim_NmrSimEnergyTerm parent
  @param  char * code
  @param  float value
  @returns  the new object
**/
Nsim_EnergyTermParameter Nsim_EnergyTermParameter_Init_reqd(Nsim_NmrSimEnergyTerm parent, char * code, float value)
{
  
  Nsim_EnergyTermParameter  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__code = ApiString_New(code);
  ApiFloat api__value = ApiFloat_New(value);

  PyDict_SetItemString(attrlinks, "code", api__code);
  PyDict_SetItemString(attrlinks, "value", api__value);
  
  obj = Nsim_EnergyTermParameter_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__code);
  Py_DECREF(api__value);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_EnergyTermParameter self
  @param  Impl_ApplicationData value
**/
void *Nsim_EnergyTermParameter_RemoveApplicationData(Nsim_EnergyTermParameter self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.EnergyTermParameter: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.EnergyTermParameter: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for molsim.NmrSim.EnergyTermParameter
  @param  Nsim_EnergyTermParameter self
  @param  ApiString name
  @param  ApiObject value
**/
void *Nsim_EnergyTermParameter_Set(Nsim_EnergyTermParameter self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nsim_EnergyTermParameter self
  @param  Acco_AccessObject value
**/
void *Nsim_EnergyTermParameter_SetAccess(Nsim_EnergyTermParameter self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.EnergyTermParameter: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.EnergyTermParameter: method 'setAccess' is not callable");
  
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
  @param  Nsim_EnergyTermParameter self
  @param  ApiList values
**/
void *Nsim_EnergyTermParameter_SetApplicationData(Nsim_EnergyTermParameter self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.EnergyTermParameter: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.EnergyTermParameter: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for molsim.NmrSim.EnergyTermParameter.code

Code for energy term 
parameter, as used in its definition.
  @param  Nsim_EnergyTermParameter self
  @param  ApiString value
**/
void *Nsim_EnergyTermParameter_SetCode(Nsim_EnergyTermParameter self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCode");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.EnergyTermParameter: cannot find method 'setCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.EnergyTermParameter: method 'setCode' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for molsim.NmrSim.EnergyTermParameter.value

Value of energy term 
parameter
  @param  Nsim_EnergyTermParameter self
  @param  ApiFloat value
**/
void *Nsim_EnergyTermParameter_SetValue(Nsim_EnergyTermParameter self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setValue");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.EnergyTermParameter: cannot find method 'setValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.EnergyTermParameter: method 'setValue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
