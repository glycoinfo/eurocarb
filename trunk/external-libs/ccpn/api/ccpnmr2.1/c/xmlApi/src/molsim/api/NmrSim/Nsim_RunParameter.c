
#include "ccp.h"

/*
  Patrameter passed to run. Can be of different data types
*/

/* package molsim.api.NmrSim */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_RunParameter self
  @param  Impl_ApplicationData value
**/
void *Nsim_RunParameter_AddApplicationData(Nsim_RunParameter self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.RunParameter: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.RunParameter: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for molsim.NmrSim.RunParameter
  @param  Nsim_RunParameter self
  @param  ApiBoolean complete
**/
void *Nsim_RunParameter_CheckAllValid(Nsim_RunParameter self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.RunParameter: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.RunParameter: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for molsim.NmrSim.RunParameter
  @param  Nsim_RunParameter self
  @param  ApiBoolean complete
**/
void *Nsim_RunParameter_CheckValid(Nsim_RunParameter self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.RunParameter: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.RunParameter: method 'checkValid' is not callable");
  
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
  @param  Nsim_RunParameter self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nsim_RunParameter_FindAllApplicationData(Nsim_RunParameter self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.RunParameter: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.RunParameter: method 'findAllApplicationData' is not callable");
  
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
  @param  Nsim_RunParameter self
  @returns  all value that satisfy the conditions 
**/
ApiList Nsim_RunParameter_FindAllApplicationData_keyval0(Nsim_RunParameter self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nsim_RunParameter_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_RunParameter self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nsim_RunParameter_FindAllApplicationData_keyval1(Nsim_RunParameter self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nsim_RunParameter_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_RunParameter self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nsim_RunParameter_FindAllApplicationData_keyval2(Nsim_RunParameter self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nsim_RunParameter_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_RunParameter self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nsim_RunParameter_FindAllApplicationData_keyval3(Nsim_RunParameter self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nsim_RunParameter_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_RunParameter self
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
ApiList Nsim_RunParameter_FindAllApplicationData_keyval4(Nsim_RunParameter self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nsim_RunParameter_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_RunParameter self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nsim_RunParameter_FindFirstApplicationData(Nsim_RunParameter self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.RunParameter: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.RunParameter: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nsim_RunParameter self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nsim_RunParameter_FindFirstApplicationData_keyval0(Nsim_RunParameter self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nsim_RunParameter_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_RunParameter self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nsim_RunParameter_FindFirstApplicationData_keyval1(Nsim_RunParameter self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nsim_RunParameter_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_RunParameter self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nsim_RunParameter_FindFirstApplicationData_keyval2(Nsim_RunParameter self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nsim_RunParameter_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_RunParameter self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nsim_RunParameter_FindFirstApplicationData_keyval3(Nsim_RunParameter self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nsim_RunParameter_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_RunParameter self
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
Impl_ApplicationData Nsim_RunParameter_FindFirstApplicationData_keyval4(Nsim_RunParameter self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nsim_RunParameter_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for molsim.NmrSim.RunParameter
  @param  Nsim_RunParameter self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Nsim_RunParameter_Get(Nsim_RunParameter self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nsim_RunParameter self
  @returns   the result
**/
Acco_AccessObject Nsim_RunParameter_GetAccess(Nsim_RunParameter self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.RunParameter: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.RunParameter: method 'getAccess' is not callable");
  
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
  @param  Nsim_RunParameter self
  @returns   the result
**/
Acco_AccessObject Nsim_RunParameter_GetActiveAccess(Nsim_RunParameter self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.RunParameter: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.RunParameter: method 'getActiveAccess' is not callable");
  
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
  @param  Nsim_RunParameter self
  @returns   the result
**/
ApiList Nsim_RunParameter_GetApplicationData(Nsim_RunParameter self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.RunParameter: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.RunParameter: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Template.MultiTypeValue.booleanValue

Boolean type 
value
  @param  Nsim_RunParameter self
  @returns   the result
**/
ApiBoolean Nsim_RunParameter_GetBooleanValue(Nsim_RunParameter self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getBooleanValue");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.RunParameter: cannot find method 'getBooleanValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.RunParameter: method 'getBooleanValue' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for molsim.NmrSim.RunParameter
  @param  Nsim_RunParameter self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nsim_RunParameter Nsim_RunParameter_GetByKey(Nsim_RunParameter self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Nsim_RunParameter obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.RunParameter: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.RunParameter: method 'getByKey' is not callable");
  
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
  @param  Nsim_RunParameter self
  @returns   the result
**/
ApiString Nsim_RunParameter_GetClassName(Nsim_RunParameter self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.RunParameter: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.RunParameter: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.NmrSim.RunParameter.code

Code for (type of) parameter, 
as used in the application being run. Part of class key
  @param  Nsim_RunParameter self
  @returns   the result
**/
ApiString Nsim_RunParameter_GetCode(Nsim_RunParameter self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCode");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.RunParameter: cannot find method 'getCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.RunParameter: method 'getCode' is not callable");
  
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
  @param  Nsim_RunParameter self
  @returns   the result
**/
ApiList Nsim_RunParameter_GetFieldNames(Nsim_RunParameter self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.RunParameter: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.RunParameter: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Template.MultiTypeValue.floatValue

Float type value
  @param  Nsim_RunParameter self
  @returns   the result
**/
ApiFloat Nsim_RunParameter_GetFloatValue(Nsim_RunParameter self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFloatValue");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.RunParameter: cannot find method 'getFloatValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.RunParameter: method 'getFloatValue' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for molsim.NmrSim.RunParameter
  @param  Nsim_RunParameter self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Nsim_RunParameter_GetFullKey(Nsim_RunParameter self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.RunParameter: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.RunParameter: method 'getFullKey' is not callable");
  
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
  @param  Nsim_RunParameter self
  @returns   the result
**/
ApiBoolean Nsim_RunParameter_GetInConstructor(Nsim_RunParameter self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.RunParameter: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.RunParameter: method 'getInConstructor' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Template.MultiTypeValue.intValue

Integer type value
  @param  Nsim_RunParameter self
  @returns   the result
**/
ApiInteger Nsim_RunParameter_GetIntValue(Nsim_RunParameter self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIntValue");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.RunParameter: cannot find method 'getIntValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.RunParameter: method 'getIntValue' is not callable");
  
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
  @param  Nsim_RunParameter self
  @returns   the result
**/
ApiBoolean Nsim_RunParameter_GetIsDeleted(Nsim_RunParameter self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.RunParameter: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.RunParameter: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for molsim.NmrSim.RunParameter
  @param  Nsim_RunParameter self
  @returns  Local object key
**/
ApiObject Nsim_RunParameter_GetLocalKey(Nsim_RunParameter self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.RunParameter: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.RunParameter: method 'getLocalKey' is not callable");
  
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
  @param  Nsim_RunParameter self
  @returns   the result
**/
ApiString Nsim_RunParameter_GetPackageName(Nsim_RunParameter self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.RunParameter: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.RunParameter: method 'getPackageName' is not callable");
  
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
  @param  Nsim_RunParameter self
  @returns   the result
**/
ApiString Nsim_RunParameter_GetPackageShortName(Nsim_RunParameter self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.RunParameter: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.RunParameter: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.NmrSim.RunParameter.paramId

Index of RunParameter. 
DIstinguishes this paramenter from others with the same code. Part of 
the class key.
  @param  Nsim_RunParameter self
  @returns   the result
**/
ApiInteger Nsim_RunParameter_GetParamId(Nsim_RunParameter self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParamId");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.RunParameter: cannot find method 'getParamId'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.RunParameter: method 'getParamId' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.NmrSim.RunParameter.parent

link to parent object - 
synonym for run
  @param  Nsim_RunParameter self
  @returns   the result
**/
Nsim_Run Nsim_RunParameter_GetParent(Nsim_RunParameter self)
{
  
  Nsim_Run obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.RunParameter: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.RunParameter: method 'getParent' is not callable");
  
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
  @param  Nsim_RunParameter self
  @returns   the result
**/
ApiString Nsim_RunParameter_GetQualifiedName(Nsim_RunParameter self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.RunParameter: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.RunParameter: method 'getQualifiedName' is not callable");
  
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
  @param  Nsim_RunParameter self
  @returns   the result
**/
Impl_MemopsRoot Nsim_RunParameter_GetRoot(Nsim_RunParameter self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.RunParameter: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.RunParameter: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.NmrSim.RunParameter.run

parent link
  @param  Nsim_RunParameter self
  @returns   the result
**/
Nsim_Run Nsim_RunParameter_GetRun(Nsim_RunParameter self)
{
  
  Nsim_Run obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRun");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.RunParameter: cannot find method 'getRun'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.RunParameter: method 'getRun' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Template.MultiTypeValue.textValue

Text type value
  @param  Nsim_RunParameter self
  @returns   the result
**/
ApiString Nsim_RunParameter_GetTextValue(Nsim_RunParameter self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTextValue");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.RunParameter: cannot find method 'getTextValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.RunParameter: method 'getTextValue' is not callable");
  
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
  @param  Nsim_RunParameter self
  @returns   the result
**/
Impl_TopObject Nsim_RunParameter_GetTopObject(Nsim_RunParameter self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.RunParameter: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.RunParameter: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for molsim.NmrSim.RunParameter
  @param  Nsim_Run parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nsim_RunParameter Nsim_RunParameter_Init(Nsim_Run parent, ApiMap attrlinks)
{
  
  return Nsim_Run_NewRunParameter(parent, attrlinks);
}

/**
  Constructor for molsim.NmrSim.RunParameter
  @param  Nsim_Run parent
  @param  char * code
  @param  ApiInteger paramId
  @returns  the new object
**/
Nsim_RunParameter Nsim_RunParameter_Init_reqd(Nsim_Run parent, char * code, ApiInteger paramId)
{
  
  Nsim_RunParameter  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__code = ApiString_New(code);

  PyDict_SetItemString(attrlinks, "code", api__code);
  PyDict_SetItemString(attrlinks, "paramId", paramId);
  
  obj = Nsim_RunParameter_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__code);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_RunParameter self
  @param  Impl_ApplicationData value
**/
void *Nsim_RunParameter_RemoveApplicationData(Nsim_RunParameter self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.RunParameter: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.RunParameter: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for molsim.NmrSim.RunParameter
  @param  Nsim_RunParameter self
  @param  ApiString name
  @param  ApiObject value
**/
void *Nsim_RunParameter_Set(Nsim_RunParameter self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nsim_RunParameter self
  @param  Acco_AccessObject value
**/
void *Nsim_RunParameter_SetAccess(Nsim_RunParameter self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.RunParameter: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.RunParameter: method 'setAccess' is not callable");
  
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
  @param  Nsim_RunParameter self
  @param  ApiList values
**/
void *Nsim_RunParameter_SetApplicationData(Nsim_RunParameter self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.RunParameter: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.RunParameter: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Template.MultiTypeValue.booleanValue

Boolean type 
value
  @param  Nsim_RunParameter self
  @param  ApiBoolean value
**/
void *Nsim_RunParameter_SetBooleanValue(Nsim_RunParameter self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setBooleanValue");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.RunParameter: cannot find method 'setBooleanValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.RunParameter: method 'setBooleanValue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for molsim.NmrSim.RunParameter.code

Code for (type of) parameter, 
as used in the application being run. Part of class key
  @param  Nsim_RunParameter self
  @param  ApiString value
**/
void *Nsim_RunParameter_SetCode(Nsim_RunParameter self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCode");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.RunParameter: cannot find method 'setCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.RunParameter: method 'setCode' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Template.MultiTypeValue.floatValue

Float type value
  @param  Nsim_RunParameter self
  @param  ApiFloat value
**/
void *Nsim_RunParameter_SetFloatValue(Nsim_RunParameter self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setFloatValue");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.RunParameter: cannot find method 'setFloatValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.RunParameter: method 'setFloatValue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Template.MultiTypeValue.intValue

Integer type value
  @param  Nsim_RunParameter self
  @param  ApiInteger value
**/
void *Nsim_RunParameter_SetIntValue(Nsim_RunParameter self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIntValue");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.RunParameter: cannot find method 'setIntValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.RunParameter: method 'setIntValue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for molsim.NmrSim.RunParameter.paramId

Index of RunParameter. 
DIstinguishes this paramenter from others with the same code. Part of 
the class key.
  @param  Nsim_RunParameter self
  @param  ApiInteger value
**/
void *Nsim_RunParameter_SetParamId(Nsim_RunParameter self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setParamId");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.RunParameter: cannot find method 'setParamId'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.RunParameter: method 'setParamId' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Template.MultiTypeValue.textValue

Text type value
  @param  Nsim_RunParameter self
  @param  ApiString value
**/
void *Nsim_RunParameter_SetTextValue(Nsim_RunParameter self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setTextValue");
  
  if (!method)
    return raiseApiException("molsim.NmrSim.RunParameter: cannot find method 'setTextValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.NmrSim.RunParameter: method 'setTextValue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
