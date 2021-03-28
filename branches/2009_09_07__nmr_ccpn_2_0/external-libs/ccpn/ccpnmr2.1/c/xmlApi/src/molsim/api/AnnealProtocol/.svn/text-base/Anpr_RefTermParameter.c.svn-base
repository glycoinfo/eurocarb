
#include "ccp.h"

/*
  Parameter that characterises a RefPotentialTerm
*/

/* package molsim.api.AnnealProtocol */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_RefTermParameter self
  @param  Impl_ApplicationData value
**/
void *Anpr_RefTermParameter_AddApplicationData(Anpr_RefTermParameter self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefTermParameter: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefTermParameter: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for molsim.AnnealProtocol.RefTermParameter
  @param  Anpr_RefTermParameter self
  @param  ApiBoolean complete
**/
void *Anpr_RefTermParameter_CheckAllValid(Anpr_RefTermParameter self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefTermParameter: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefTermParameter: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for molsim.AnnealProtocol.RefTermParameter
  @param  Anpr_RefTermParameter self
  @param  ApiBoolean complete
**/
void *Anpr_RefTermParameter_CheckValid(Anpr_RefTermParameter self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefTermParameter: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefTermParameter: method 'checkValid' is not callable");
  
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
  @param  Anpr_RefTermParameter self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Anpr_RefTermParameter_FindAllApplicationData(Anpr_RefTermParameter self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefTermParameter: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefTermParameter: method 'findAllApplicationData' is not callable");
  
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
  @param  Anpr_RefTermParameter self
  @returns  all value that satisfy the conditions 
**/
ApiList Anpr_RefTermParameter_FindAllApplicationData_keyval0(Anpr_RefTermParameter self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anpr_RefTermParameter_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_RefTermParameter self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Anpr_RefTermParameter_FindAllApplicationData_keyval1(Anpr_RefTermParameter self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anpr_RefTermParameter_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_RefTermParameter self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Anpr_RefTermParameter_FindAllApplicationData_keyval2(Anpr_RefTermParameter self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anpr_RefTermParameter_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_RefTermParameter self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Anpr_RefTermParameter_FindAllApplicationData_keyval3(Anpr_RefTermParameter self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anpr_RefTermParameter_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_RefTermParameter self
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
ApiList Anpr_RefTermParameter_FindAllApplicationData_keyval4(Anpr_RefTermParameter self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anpr_RefTermParameter_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_RefTermParameter self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anpr_RefTermParameter_FindFirstApplicationData(Anpr_RefTermParameter self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefTermParameter: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefTermParameter: method 'findFirstApplicationData' is not callable");
  
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
  @param  Anpr_RefTermParameter self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anpr_RefTermParameter_FindFirstApplicationData_keyval0(Anpr_RefTermParameter self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anpr_RefTermParameter_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_RefTermParameter self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anpr_RefTermParameter_FindFirstApplicationData_keyval1(Anpr_RefTermParameter self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anpr_RefTermParameter_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_RefTermParameter self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anpr_RefTermParameter_FindFirstApplicationData_keyval2(Anpr_RefTermParameter self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anpr_RefTermParameter_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_RefTermParameter self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anpr_RefTermParameter_FindFirstApplicationData_keyval3(Anpr_RefTermParameter self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anpr_RefTermParameter_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_RefTermParameter self
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
Impl_ApplicationData Anpr_RefTermParameter_FindFirstApplicationData_keyval4(Anpr_RefTermParameter self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anpr_RefTermParameter_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for molsim.AnnealProtocol.RefTermParameter
  @param  Anpr_RefTermParameter self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Anpr_RefTermParameter_Get(Anpr_RefTermParameter self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anpr_RefTermParameter self
  @returns   the result
**/
Acco_AccessObject Anpr_RefTermParameter_GetAccess(Anpr_RefTermParameter self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefTermParameter: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefTermParameter: method 'getAccess' is not callable");
  
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
  @param  Anpr_RefTermParameter self
  @returns   the result
**/
Acco_AccessObject Anpr_RefTermParameter_GetActiveAccess(Anpr_RefTermParameter self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefTermParameter: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefTermParameter: method 'getActiveAccess' is not callable");
  
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
  @param  Anpr_RefTermParameter self
  @returns   the result
**/
ApiList Anpr_RefTermParameter_GetApplicationData(Anpr_RefTermParameter self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefTermParameter: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefTermParameter: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for molsim.AnnealProtocol.RefTermParameter
  @param  Anpr_RefTermParameter self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Anpr_RefTermParameter Anpr_RefTermParameter_GetByKey(Anpr_RefTermParameter self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Anpr_RefTermParameter obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefTermParameter: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefTermParameter: method 'getByKey' is not callable");
  
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
  @param  Anpr_RefTermParameter self
  @returns   the result
**/
ApiString Anpr_RefTermParameter_GetClassName(Anpr_RefTermParameter self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefTermParameter: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefTermParameter: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.AnnealProtocol.RefTermParameter.code

code identifying 
the parameter in the context of the parent RefPotentialTerrm
  @param  Anpr_RefTermParameter self
  @returns   the result
**/
ApiString Anpr_RefTermParameter_GetCode(Anpr_RefTermParameter self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCode");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefTermParameter: cannot find method 'getCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefTermParameter: method 'getCode' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.AnnealProtocol.RefTermParameter.details

Free text, for 
notes, explanatory comments, etc.
  @param  Anpr_RefTermParameter self
  @returns   the result
**/
ApiString Anpr_RefTermParameter_GetDetails(Anpr_RefTermParameter self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefTermParameter: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefTermParameter: method 'getDetails' is not callable");
  
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
  @param  Anpr_RefTermParameter self
  @returns   the result
**/
ApiList Anpr_RefTermParameter_GetFieldNames(Anpr_RefTermParameter self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefTermParameter: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefTermParameter: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for molsim.AnnealProtocol.RefTermParameter
  @param  Anpr_RefTermParameter self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Anpr_RefTermParameter_GetFullKey(Anpr_RefTermParameter self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefTermParameter: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefTermParameter: method 'getFullKey' is not callable");
  
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
  @param  Anpr_RefTermParameter self
  @returns   the result
**/
ApiBoolean Anpr_RefTermParameter_GetInConstructor(Anpr_RefTermParameter self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefTermParameter: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefTermParameter: method 'getInConstructor' is not callable");
  
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
  @param  Anpr_RefTermParameter self
  @returns   the result
**/
ApiBoolean Anpr_RefTermParameter_GetIsDeleted(Anpr_RefTermParameter self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefTermParameter: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefTermParameter: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for molsim.AnnealProtocol.RefTermParameter
  @param  Anpr_RefTermParameter self
  @returns  Local object key
**/
ApiObject Anpr_RefTermParameter_GetLocalKey(Anpr_RefTermParameter self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefTermParameter: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefTermParameter: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.AnnealProtocol.RefTermParameter.name

User-intelligible 
name for parameter
  @param  Anpr_RefTermParameter self
  @returns   the result
**/
ApiString Anpr_RefTermParameter_GetName(Anpr_RefTermParameter self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefTermParameter: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefTermParameter: method 'getName' is not callable");
  
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
  @param  Anpr_RefTermParameter self
  @returns   the result
**/
ApiString Anpr_RefTermParameter_GetPackageName(Anpr_RefTermParameter self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefTermParameter: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefTermParameter: method 'getPackageName' is not callable");
  
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
  @param  Anpr_RefTermParameter self
  @returns   the result
**/
ApiString Anpr_RefTermParameter_GetPackageShortName(Anpr_RefTermParameter self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefTermParameter: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefTermParameter: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.AnnealProtocol.RefTermParameter.parent

link to parent 
object - synonym for refPotentialTerm
  @param  Anpr_RefTermParameter self
  @returns   the result
**/
Anpr_RefPotentialTerm Anpr_RefTermParameter_GetParent(Anpr_RefTermParameter self)
{
  
  Anpr_RefPotentialTerm obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefTermParameter: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefTermParameter: method 'getParent' is not callable");
  
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
  @param  Anpr_RefTermParameter self
  @returns   the result
**/
ApiString Anpr_RefTermParameter_GetQualifiedName(Anpr_RefTermParameter self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefTermParameter: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefTermParameter: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.AnnealProtocol.RefTermParameter.refPotentialTerm

parent 
link
  @param  Anpr_RefTermParameter self
  @returns   the result
**/
Anpr_RefPotentialTerm Anpr_RefTermParameter_GetRefPotentialTerm(Anpr_RefTermParameter self)
{
  
  Anpr_RefPotentialTerm obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRefPotentialTerm");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefTermParameter: cannot find method 'getRefPotentialTerm'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefTermParameter: method 'getRefPotentialTerm' is not callable");
  
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
  @param  Anpr_RefTermParameter self
  @returns   the result
**/
Impl_MemopsRoot Anpr_RefTermParameter_GetRoot(Anpr_RefTermParameter self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefTermParameter: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefTermParameter: method 'getRoot' is not callable");
  
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
  @param  Anpr_RefTermParameter self
  @returns   the result
**/
Impl_TopObject Anpr_RefTermParameter_GetTopObject(Anpr_RefTermParameter self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefTermParameter: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefTermParameter: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.AnnealProtocol.RefTermParameter.value

Value of 
RefTermParameter
  @param  Anpr_RefTermParameter self
  @returns   the result
**/
ApiFloat Anpr_RefTermParameter_GetValue(Anpr_RefTermParameter self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getValue");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefTermParameter: cannot find method 'getValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefTermParameter: method 'getValue' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for molsim.AnnealProtocol.RefTermParameter
  @param  Anpr_RefPotentialTerm parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anpr_RefTermParameter Anpr_RefTermParameter_Init(Anpr_RefPotentialTerm parent, ApiMap attrlinks)
{
  
  return Anpr_RefPotentialTerm_NewRefTermParameter(parent, attrlinks);
}

/**
  Constructor for molsim.AnnealProtocol.RefTermParameter
  @param  Anpr_RefPotentialTerm parent
  @param  char * code
  @param  float value
  @returns  the new object
**/
Anpr_RefTermParameter Anpr_RefTermParameter_Init_reqd(Anpr_RefPotentialTerm parent, char * code, float value)
{
  
  Anpr_RefTermParameter  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__code = ApiString_New(code);
  ApiFloat api__value = ApiFloat_New(value);

  PyDict_SetItemString(attrlinks, "code", api__code);
  PyDict_SetItemString(attrlinks, "value", api__value);
  
  obj = Anpr_RefTermParameter_Init(parent, attrlinks);
  
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
  @param  Anpr_RefTermParameter self
  @param  Impl_ApplicationData value
**/
void *Anpr_RefTermParameter_RemoveApplicationData(Anpr_RefTermParameter self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefTermParameter: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefTermParameter: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for molsim.AnnealProtocol.RefTermParameter
  @param  Anpr_RefTermParameter self
  @param  ApiString name
  @param  ApiObject value
**/
void *Anpr_RefTermParameter_Set(Anpr_RefTermParameter self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anpr_RefTermParameter self
  @param  Acco_AccessObject value
**/
void *Anpr_RefTermParameter_SetAccess(Anpr_RefTermParameter self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefTermParameter: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefTermParameter: method 'setAccess' is not callable");
  
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
  @param  Anpr_RefTermParameter self
  @param  ApiList values
**/
void *Anpr_RefTermParameter_SetApplicationData(Anpr_RefTermParameter self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefTermParameter: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefTermParameter: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for molsim.AnnealProtocol.RefTermParameter.code

code identifying 
the parameter in the context of the parent RefPotentialTerrm
  @param  Anpr_RefTermParameter self
  @param  ApiString value
**/
void *Anpr_RefTermParameter_SetCode(Anpr_RefTermParameter self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCode");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefTermParameter: cannot find method 'setCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefTermParameter: method 'setCode' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for molsim.AnnealProtocol.RefTermParameter.details

Free text, for 
notes, explanatory comments, etc.
  @param  Anpr_RefTermParameter self
  @param  ApiString value
**/
void *Anpr_RefTermParameter_SetDetails(Anpr_RefTermParameter self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefTermParameter: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefTermParameter: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for molsim.AnnealProtocol.RefTermParameter.name

User-intelligible 
name for parameter
  @param  Anpr_RefTermParameter self
  @param  ApiString value
**/
void *Anpr_RefTermParameter_SetName(Anpr_RefTermParameter self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefTermParameter: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefTermParameter: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for molsim.AnnealProtocol.RefTermParameter.value

Value of 
RefTermParameter
  @param  Anpr_RefTermParameter self
  @param  ApiFloat value
**/
void *Anpr_RefTermParameter_SetValue(Anpr_RefTermParameter self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setValue");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.RefTermParameter: cannot find method 'setValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.RefTermParameter: method 'setValue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
