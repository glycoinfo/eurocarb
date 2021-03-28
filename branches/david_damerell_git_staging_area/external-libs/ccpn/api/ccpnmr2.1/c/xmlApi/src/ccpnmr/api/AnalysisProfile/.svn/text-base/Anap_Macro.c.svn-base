
#include "ccp.h"

/*
  Command script for use in Analysis. Is assumed to be in Python.
*/

/* package ccpnmr.api.AnalysisProfile */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_Macro self
  @param  Impl_ApplicationData value
**/
void *Anap_Macro_AddApplicationData(Anap_Macro self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccpnmr.AnalysisProfile.Macro
  @param  Anap_Macro self
  @param  ApiBoolean complete
**/
void *Anap_Macro_CheckAllValid(Anap_Macro self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccpnmr.AnalysisProfile.Macro
  @param  Anap_Macro self
  @param  ApiBoolean complete
**/
void *Anap_Macro_CheckValid(Anap_Macro self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: method 'checkValid' is not callable");
  
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
  @param  Anap_Macro self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Anap_Macro_FindAllApplicationData(Anap_Macro self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: method 'findAllApplicationData' is not callable");
  
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
  @param  Anap_Macro self
  @returns  all value that satisfy the conditions 
**/
ApiList Anap_Macro_FindAllApplicationData_keyval0(Anap_Macro self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anap_Macro_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_Macro self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Anap_Macro_FindAllApplicationData_keyval1(Anap_Macro self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anap_Macro_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_Macro self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Anap_Macro_FindAllApplicationData_keyval2(Anap_Macro self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anap_Macro_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_Macro self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Anap_Macro_FindAllApplicationData_keyval3(Anap_Macro self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anap_Macro_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_Macro self
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
ApiList Anap_Macro_FindAllApplicationData_keyval4(Anap_Macro self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anap_Macro_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_Macro self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anap_Macro_FindFirstApplicationData(Anap_Macro self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: method 'findFirstApplicationData' is not callable");
  
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
  @param  Anap_Macro self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anap_Macro_FindFirstApplicationData_keyval0(Anap_Macro self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anap_Macro_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_Macro self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anap_Macro_FindFirstApplicationData_keyval1(Anap_Macro self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anap_Macro_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_Macro self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anap_Macro_FindFirstApplicationData_keyval2(Anap_Macro self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anap_Macro_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_Macro self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anap_Macro_FindFirstApplicationData_keyval3(Anap_Macro self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anap_Macro_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_Macro self
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
Impl_ApplicationData Anap_Macro_FindFirstApplicationData_keyval4(Anap_Macro self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anap_Macro_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccpnmr.AnalysisProfile.Macro
  @param  Anap_Macro self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Anap_Macro_Get(Anap_Macro self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anap_Macro self
  @returns   the result
**/
Acco_AccessObject Anap_Macro_GetAccess(Anap_Macro self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: method 'getAccess' is not callable");
  
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
  @param  Anap_Macro self
  @returns   the result
**/
Acco_AccessObject Anap_Macro_GetActiveAccess(Anap_Macro self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: method 'getActiveAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.AnalysisProfile.Macro.analysisProfile

parent link
  @param  Anap_Macro self
  @returns   the result
**/
Anap_AnalysisProfile Anap_Macro_GetAnalysisProfile(Anap_Macro self)
{
  
  Anap_AnalysisProfile obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAnalysisProfile");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: cannot find method 'getAnalysisProfile'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: method 'getAnalysisProfile' is not callable");
  
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
  @param  Anap_Macro self
  @returns   the result
**/
ApiList Anap_Macro_GetApplicationData(Anap_Macro self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccpnmr.AnalysisProfile.Macro
  @param  Anap_Macro self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Anap_Macro Anap_Macro_GetByKey(Anap_Macro self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Anap_Macro obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: method 'getByKey' is not callable");
  
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
  @param  Anap_Macro self
  @returns   the result
**/
ApiString Anap_Macro_GetClassName(Anap_Macro self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.AnalysisProfile.Macro.details

Free text, for notes, 
explanatory comments, etc.
  @param  Anap_Macro self
  @returns   the result
**/
ApiString Anap_Macro_GetDetails(Anap_Macro self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: method 'getDetails' is not callable");
  
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
  @param  Anap_Macro self
  @returns   the result
**/
ApiList Anap_Macro_GetFieldNames(Anap_Macro self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccpnmr.AnalysisProfile.Macro
  @param  Anap_Macro self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Anap_Macro_GetFullKey(Anap_Macro self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: method 'getFullKey' is not callable");
  
  args = PyTuple_Pack(1, useGuid);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.AnalysisProfile.Macro.function

Name of function to 
import
  @param  Anap_Macro self
  @returns   the result
**/
ApiString Anap_Macro_GetFunction(Anap_Macro self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFunction");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: cannot find method 'getFunction'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: method 'getFunction' is not callable");
  
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
  @param  Anap_Macro self
  @returns   the result
**/
ApiBoolean Anap_Macro_GetInConstructor(Anap_Macro self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: method 'getInConstructor' is not callable");
  
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
  @param  Anap_Macro self
  @returns   the result
**/
ApiBoolean Anap_Macro_GetIsDeleted(Anap_Macro self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.AnalysisProfile.Macro.isInMenu

Is macro shown in 
drop-down menu?
  @param  Anap_Macro self
  @returns   the result
**/
ApiBoolean Anap_Macro_GetIsInMenu(Anap_Macro self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsInMenu");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: cannot find method 'getIsInMenu'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: method 'getIsInMenu' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.AnalysisProfile.Macro.isInMouseMenu

Is macro shown in 
right mouse menu?
  @param  Anap_Macro self
  @returns   the result
**/
ApiBoolean Anap_Macro_GetIsInMouseMenu(Anap_Macro self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsInMouseMenu");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: cannot find method 'getIsInMouseMenu'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: method 'getIsInMouseMenu' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccpnmr.AnalysisProfile.Macro
  @param  Anap_Macro self
  @returns  Local object key
**/
ApiObject Anap_Macro_GetLocalKey(Anap_Macro self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.AnalysisProfile.Macro.module

Name of module (optionally 
in dot separated form, like mod.submod.file) from which to import 
function.
  @param  Anap_Macro self
  @returns   the result
**/
ApiString Anap_Macro_GetModule(Anap_Macro self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getModule");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: cannot find method 'getModule'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: method 'getModule' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.AnalysisProfile.Macro.name

name of macro (used for 
ideitifying it to user).
  @param  Anap_Macro self
  @returns   the result
**/
ApiString Anap_Macro_GetName(Anap_Macro self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: method 'getName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.AnalysisProfile.Macro.ordering

An integer that serves to 
order the different macros in lists (if, for instance you want to put 
the most commonly used ones at the top).
  @param  Anap_Macro self
  @returns   the result
**/
ApiInteger Anap_Macro_GetOrdering(Anap_Macro self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getOrdering");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: cannot find method 'getOrdering'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: method 'getOrdering' is not callable");
  
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
  @param  Anap_Macro self
  @returns   the result
**/
ApiString Anap_Macro_GetPackageName(Anap_Macro self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: method 'getPackageName' is not callable");
  
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
  @param  Anap_Macro self
  @returns   the result
**/
ApiString Anap_Macro_GetPackageShortName(Anap_Macro self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.AnalysisProfile.Macro.parent

link to parent object - 
synonym for analysisProfile
  @param  Anap_Macro self
  @returns   the result
**/
Anap_AnalysisProfile Anap_Macro_GetParent(Anap_Macro self)
{
  
  Anap_AnalysisProfile obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.AnalysisProfile.Macro.path

Directory to put on 
pythonpath in order to find file containing macro. Defaults to empty 
string, meaning that the directory is (assumed to be) already on the 
pythonpath.
  @param  Anap_Macro self
  @returns   the result
**/
ApiString Anap_Macro_GetPath(Anap_Macro self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPath");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: cannot find method 'getPath'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: method 'getPath' is not callable");
  
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
  @param  Anap_Macro self
  @returns   the result
**/
ApiString Anap_Macro_GetQualifiedName(Anap_Macro self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: method 'getQualifiedName' is not callable");
  
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
  @param  Anap_Macro self
  @returns   the result
**/
Impl_MemopsRoot Anap_Macro_GetRoot(Anap_Macro self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.AnalysisProfile.Macro.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Anap_Macro self
  @returns   the result
**/
ApiInteger Anap_Macro_GetSerial(Anap_Macro self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: method 'getSerial' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.AnalysisProfile.Macro.shortcut

Keyboard shortcut to 
activate macro
  @param  Anap_Macro self
  @returns   the result
**/
ApiString Anap_Macro_GetShortcut(Anap_Macro self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getShortcut");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: cannot find method 'getShortcut'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: method 'getShortcut' is not callable");
  
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
  @param  Anap_Macro self
  @returns   the result
**/
Impl_TopObject Anap_Macro_GetTopObject(Anap_Macro self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccpnmr.AnalysisProfile.Macro
  @param  Anap_AnalysisProfile parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anap_Macro Anap_Macro_Init(Anap_AnalysisProfile parent, ApiMap attrlinks)
{
  
  return Anap_AnalysisProfile_NewMacro(parent, attrlinks);
}

/**
  Constructor for ccpnmr.AnalysisProfile.Macro
  @param  Anap_AnalysisProfile parent
  @param  char * function
  @param  char * module
  @param  char * name
  @returns  the new object
**/
Anap_Macro Anap_Macro_Init_reqd(Anap_AnalysisProfile parent, char * function, char * module, char * name)
{
  
  Anap_Macro  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__function = ApiString_New(function);
  ApiString api__module = ApiString_New(module);
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "function", api__function);
  PyDict_SetItemString(attrlinks, "module", api__module);
  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Anap_Macro_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__function);
  Py_DECREF(api__module);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_Macro self
  @param  Impl_ApplicationData value
**/
void *Anap_Macro_RemoveApplicationData(Anap_Macro self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccpnmr.AnalysisProfile.Macro
  @param  Anap_Macro self
  @param  ApiString name
  @param  ApiObject value
**/
void *Anap_Macro_Set(Anap_Macro self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anap_Macro self
  @param  Acco_AccessObject value
**/
void *Anap_Macro_SetAccess(Anap_Macro self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: method 'setAccess' is not callable");
  
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
  @param  Anap_Macro self
  @param  ApiList values
**/
void *Anap_Macro_SetApplicationData(Anap_Macro self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.AnalysisProfile.Macro.details

Free text, for notes, 
explanatory comments, etc.
  @param  Anap_Macro self
  @param  ApiString value
**/
void *Anap_Macro_SetDetails(Anap_Macro self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.AnalysisProfile.Macro.function

Name of function to 
import
  @param  Anap_Macro self
  @param  ApiString value
**/
void *Anap_Macro_SetFunction(Anap_Macro self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setFunction");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: cannot find method 'setFunction'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: method 'setFunction' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.AnalysisProfile.Macro.isInMenu

Is macro shown in 
drop-down menu?
  @param  Anap_Macro self
  @param  ApiBoolean value
**/
void *Anap_Macro_SetIsInMenu(Anap_Macro self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsInMenu");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: cannot find method 'setIsInMenu'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: method 'setIsInMenu' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.AnalysisProfile.Macro.isInMouseMenu

Is macro shown in 
right mouse menu?
  @param  Anap_Macro self
  @param  ApiBoolean value
**/
void *Anap_Macro_SetIsInMouseMenu(Anap_Macro self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsInMouseMenu");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: cannot find method 'setIsInMouseMenu'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: method 'setIsInMouseMenu' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.AnalysisProfile.Macro.module

Name of module (optionally 
in dot separated form, like mod.submod.file) from which to import 
function.
  @param  Anap_Macro self
  @param  ApiString value
**/
void *Anap_Macro_SetModule(Anap_Macro self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setModule");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: cannot find method 'setModule'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: method 'setModule' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.AnalysisProfile.Macro.name

name of macro (used for 
ideitifying it to user).
  @param  Anap_Macro self
  @param  ApiString value
**/
void *Anap_Macro_SetName(Anap_Macro self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.AnalysisProfile.Macro.ordering

An integer that serves to 
order the different macros in lists (if, for instance you want to put 
the most commonly used ones at the top).
  @param  Anap_Macro self
  @param  ApiInteger value
**/
void *Anap_Macro_SetOrdering(Anap_Macro self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setOrdering");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: cannot find method 'setOrdering'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: method 'setOrdering' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.AnalysisProfile.Macro.path

Directory to put on 
pythonpath in order to find file containing macro. Defaults to empty 
string, meaning that the directory is (assumed to be) already on the 
pythonpath.
  @param  Anap_Macro self
  @param  ApiString value
**/
void *Anap_Macro_SetPath(Anap_Macro self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPath");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: cannot find method 'setPath'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: method 'setPath' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.AnalysisProfile.Macro.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Anap_Macro self
  @param  ApiInteger value
**/
void *Anap_Macro_SetSerial(Anap_Macro self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.AnalysisProfile.Macro.shortcut

Keyboard shortcut to 
activate macro
  @param  Anap_Macro self
  @param  ApiString value
**/
void *Anap_Macro_SetShortcut(Anap_Macro self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setShortcut");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: cannot find method 'setShortcut'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.Macro: method 'setShortcut' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
