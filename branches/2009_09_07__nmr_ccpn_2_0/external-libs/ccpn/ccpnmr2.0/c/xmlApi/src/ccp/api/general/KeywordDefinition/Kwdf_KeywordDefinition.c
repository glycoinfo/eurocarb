
#include "ccp.h"

/*
  
*/

/* package ccp.api.general.KeywordDefinition */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Kwdf_KeywordDefinition self
  @param  Impl_ApplicationData value
**/
void *Kwdf_KeywordDefinition_AddApplicationData(Kwdf_KeywordDefinition self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinition: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinition: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for 
ccp.general.KeywordDefinition.KeywordDefinition.targetNames

qualified 
names for the CCPN classes that the keyword may be used to describe. If 
empty there are no limitations. Typically keywords are used as part of a 
keyword-value-object combination. targetNames refer to the allowed tyope 
for the object being described (*not* the object that contains the 
desctription)
  @param  Kwdf_KeywordDefinition self
  @param  ApiString value
**/
void *Kwdf_KeywordDefinition_AddTargetName(Kwdf_KeywordDefinition self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addTargetName");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinition: cannot find method 'addTargetName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinition: method 'addTargetName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.general.KeywordDefinition.KeywordDefinition
  @param  Kwdf_KeywordDefinition self
  @param  ApiBoolean complete
**/
void *Kwdf_KeywordDefinition_CheckAllValid(Kwdf_KeywordDefinition self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinition: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinition: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.general.KeywordDefinition.KeywordDefinition
  @param  Kwdf_KeywordDefinition self
  @param  ApiBoolean complete
**/
void *Kwdf_KeywordDefinition_CheckValid(Kwdf_KeywordDefinition self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinition: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinition: method 'checkValid' is not callable");
  
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
  @param  Kwdf_KeywordDefinition self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Kwdf_KeywordDefinition_FindAllApplicationData(Kwdf_KeywordDefinition self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinition: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinition: method 'findAllApplicationData' is not callable");
  
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
  @param  Kwdf_KeywordDefinition self
  @returns  all value that satisfy the conditions 
**/
ApiList Kwdf_KeywordDefinition_FindAllApplicationData_keyval0(Kwdf_KeywordDefinition self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Kwdf_KeywordDefinition_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Kwdf_KeywordDefinition self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Kwdf_KeywordDefinition_FindAllApplicationData_keyval1(Kwdf_KeywordDefinition self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Kwdf_KeywordDefinition_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Kwdf_KeywordDefinition self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Kwdf_KeywordDefinition_FindAllApplicationData_keyval2(Kwdf_KeywordDefinition self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Kwdf_KeywordDefinition_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Kwdf_KeywordDefinition self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Kwdf_KeywordDefinition_FindAllApplicationData_keyval3(Kwdf_KeywordDefinition self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Kwdf_KeywordDefinition_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Kwdf_KeywordDefinition self
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
ApiList Kwdf_KeywordDefinition_FindAllApplicationData_keyval4(Kwdf_KeywordDefinition self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Kwdf_KeywordDefinition_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Kwdf_KeywordDefinition self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Kwdf_KeywordDefinition_FindFirstApplicationData(Kwdf_KeywordDefinition self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinition: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinition: method 'findFirstApplicationData' is not callable");
  
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
  @param  Kwdf_KeywordDefinition self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Kwdf_KeywordDefinition_FindFirstApplicationData_keyval0(Kwdf_KeywordDefinition self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Kwdf_KeywordDefinition_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Kwdf_KeywordDefinition self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Kwdf_KeywordDefinition_FindFirstApplicationData_keyval1(Kwdf_KeywordDefinition self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Kwdf_KeywordDefinition_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Kwdf_KeywordDefinition self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Kwdf_KeywordDefinition_FindFirstApplicationData_keyval2(Kwdf_KeywordDefinition self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Kwdf_KeywordDefinition_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Kwdf_KeywordDefinition self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Kwdf_KeywordDefinition_FindFirstApplicationData_keyval3(Kwdf_KeywordDefinition self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Kwdf_KeywordDefinition_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Kwdf_KeywordDefinition self
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
Impl_ApplicationData Kwdf_KeywordDefinition_FindFirstApplicationData_keyval4(Kwdf_KeywordDefinition self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Kwdf_KeywordDefinition_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.general.KeywordDefinition.KeywordDefinition
  @param  Kwdf_KeywordDefinition self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Kwdf_KeywordDefinition_Get(Kwdf_KeywordDefinition self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Kwdf_KeywordDefinition self
  @returns   the result
**/
Acco_AccessObject Kwdf_KeywordDefinition_GetAccess(Kwdf_KeywordDefinition self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinition: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinition: method 'getAccess' is not callable");
  
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
  @param  Kwdf_KeywordDefinition self
  @returns   the result
**/
ApiList Kwdf_KeywordDefinition_GetApplicationData(Kwdf_KeywordDefinition self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinition: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinition: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.general.KeywordDefinition.KeywordDefinition
  @param  Kwdf_KeywordDefinition self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Kwdf_KeywordDefinition Kwdf_KeywordDefinition_GetByKey(Kwdf_KeywordDefinition self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Kwdf_KeywordDefinition obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinition: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinition: method 'getByKey' is not callable");
  
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
  @param  Kwdf_KeywordDefinition self
  @returns   the result
**/
ApiString Kwdf_KeywordDefinition_GetClassName(Kwdf_KeywordDefinition self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinition: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinition: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.general.KeywordDefinition.KeywordDefinition.explanation

Definition, 
examples, etc. to explain the parameter defined by the keyword.
  @param  Kwdf_KeywordDefinition self
  @returns   the result
**/
ApiString Kwdf_KeywordDefinition_GetExplanation(Kwdf_KeywordDefinition self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExplanation");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinition: cannot find method 'getExplanation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinition: method 'getExplanation' is not callable");
  
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
  @param  Kwdf_KeywordDefinition self
  @returns   the result
**/
ApiList Kwdf_KeywordDefinition_GetFieldNames(Kwdf_KeywordDefinition self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinition: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinition: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.general.KeywordDefinition.KeywordDefinition
  @param  Kwdf_KeywordDefinition self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Kwdf_KeywordDefinition_GetFullKey(Kwdf_KeywordDefinition self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinition: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinition: method 'getFullKey' is not callable");
  
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
  @param  Kwdf_KeywordDefinition self
  @returns   the result
**/
ApiBoolean Kwdf_KeywordDefinition_GetInConstructor(Kwdf_KeywordDefinition self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinition: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinition: method 'getInConstructor' is not callable");
  
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
  @param  Kwdf_KeywordDefinition self
  @returns   the result
**/
ApiBoolean Kwdf_KeywordDefinition_GetIsDeleted(Kwdf_KeywordDefinition self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinition: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinition: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.KeywordDefinition.KeywordDefinition.keyword
  @param  Kwdf_KeywordDefinition self
  @returns   the result
**/
ApiString Kwdf_KeywordDefinition_GetKeyword(Kwdf_KeywordDefinition self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getKeyword");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinition: cannot find method 'getKeyword'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinition: method 'getKeyword' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.general.KeywordDefinition.KeywordDefinition.keywordDefinitionStore

parent 
link
  @param  Kwdf_KeywordDefinition self
  @returns   the result
**/
Kwdf_KeywordDefinitionStore Kwdf_KeywordDefinition_GetKeywordDefinitionStore(Kwdf_KeywordDefinition self)
{
  
  Kwdf_KeywordDefinitionStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getKeywordDefinitionStore");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinition: cannot find method 'getKeywordDefinitionStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinition: method 'getKeywordDefinitionStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.general.KeywordDefinition.KeywordDefinition
  @param  Kwdf_KeywordDefinition self
  @returns  Local object key
**/
ApiObject Kwdf_KeywordDefinition_GetLocalKey(Kwdf_KeywordDefinition self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinition: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinition: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.KeywordDefinition.KeywordDefinition.name

A 
user-friendly synonym for the keyword
  @param  Kwdf_KeywordDefinition self
  @returns   the result
**/
ApiString Kwdf_KeywordDefinition_GetName(Kwdf_KeywordDefinition self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinition: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinition: method 'getName' is not callable");
  
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
  @param  Kwdf_KeywordDefinition self
  @returns   the result
**/
ApiString Kwdf_KeywordDefinition_GetPackageName(Kwdf_KeywordDefinition self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinition: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinition: method 'getPackageName' is not callable");
  
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
  @param  Kwdf_KeywordDefinition self
  @returns   the result
**/
ApiString Kwdf_KeywordDefinition_GetPackageShortName(Kwdf_KeywordDefinition self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinition: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinition: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.KeywordDefinition.KeywordDefinition.parent

link to 
parent object - synonym for keywordDefinitionStore
  @param  Kwdf_KeywordDefinition self
  @returns   the result
**/
Kwdf_KeywordDefinitionStore Kwdf_KeywordDefinition_GetParent(Kwdf_KeywordDefinition self)
{
  
  Kwdf_KeywordDefinitionStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinition: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinition: method 'getParent' is not callable");
  
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
  @param  Kwdf_KeywordDefinition self
  @returns   the result
**/
ApiString Kwdf_KeywordDefinition_GetQualifiedName(Kwdf_KeywordDefinition self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinition: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinition: method 'getQualifiedName' is not callable");
  
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
  @param  Kwdf_KeywordDefinition self
  @returns   the result
**/
Impl_MemopsRoot Kwdf_KeywordDefinition_GetRoot(Kwdf_KeywordDefinition self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinition: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinition: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.general.KeywordDefinition.KeywordDefinition.targetNames

qualified 
names for the CCPN classes that the keyword may be used to describe. If 
empty there are no limitations. Typically keywords are used as part of a 
keyword-value-object combination. targetNames refer to the allowed tyope 
for the object being described (*not* the object that contains the 
desctription)
  @param  Kwdf_KeywordDefinition self
  @returns   the result
**/
ApiSet Kwdf_KeywordDefinition_GetTargetNames(Kwdf_KeywordDefinition self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTargetNames");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinition: cannot find method 'getTargetNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinition: method 'getTargetNames' is not callable");
  
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
  @param  Kwdf_KeywordDefinition self
  @returns   the result
**/
Impl_TopObject Kwdf_KeywordDefinition_GetTopObject(Kwdf_KeywordDefinition self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinition: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinition: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.general.KeywordDefinition.KeywordDefinition
  @param  Kwdf_KeywordDefinitionStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Kwdf_KeywordDefinition Kwdf_KeywordDefinition_Init(Kwdf_KeywordDefinitionStore parent, ApiMap attrlinks)
{
  
  return Kwdf_KeywordDefinitionStore_NewKeywordDefinition(parent, attrlinks);
}

/**
  Constructor for ccp.general.KeywordDefinition.KeywordDefinition
  @param  Kwdf_KeywordDefinitionStore parent
  @param  char * keyword
  @returns  the new object
**/
Kwdf_KeywordDefinition Kwdf_KeywordDefinition_Init_reqd(Kwdf_KeywordDefinitionStore parent, char * keyword)
{
  
  Kwdf_KeywordDefinition  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__keyword = ApiString_New(keyword);

  PyDict_SetItemString(attrlinks, "keyword", api__keyword);
  
  obj = Kwdf_KeywordDefinition_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__keyword);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Kwdf_KeywordDefinition self
  @param  Impl_ApplicationData value
**/
void *Kwdf_KeywordDefinition_RemoveApplicationData(Kwdf_KeywordDefinition self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinition: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinition: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
ccp.general.KeywordDefinition.KeywordDefinition.targetNames

qualified 
names for the CCPN classes that the keyword may be used to describe. If 
empty there are no limitations. Typically keywords are used as part of a 
keyword-value-object combination. targetNames refer to the allowed tyope 
for the object being described (*not* the object that contains the 
desctription)
  @param  Kwdf_KeywordDefinition self
  @param  ApiString value
**/
void *Kwdf_KeywordDefinition_RemoveTargetName(Kwdf_KeywordDefinition self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeTargetName");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinition: cannot find method 'removeTargetName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinition: method 'removeTargetName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.general.KeywordDefinition.KeywordDefinition
  @param  Kwdf_KeywordDefinition self
  @param  ApiString name
  @param  ApiObject value
**/
void *Kwdf_KeywordDefinition_Set(Kwdf_KeywordDefinition self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Kwdf_KeywordDefinition self
  @param  Acco_AccessObject value
**/
void *Kwdf_KeywordDefinition_SetAccess(Kwdf_KeywordDefinition self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinition: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinition: method 'setAccess' is not callable");
  
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
  @param  Kwdf_KeywordDefinition self
  @param  ApiList values
**/
void *Kwdf_KeywordDefinition_SetApplicationData(Kwdf_KeywordDefinition self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinition: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinition: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.general.KeywordDefinition.KeywordDefinition.explanation

Definition, 
examples, etc. to explain the parameter defined by the keyword.
  @param  Kwdf_KeywordDefinition self
  @param  ApiString value
**/
void *Kwdf_KeywordDefinition_SetExplanation(Kwdf_KeywordDefinition self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setExplanation");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinition: cannot find method 'setExplanation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinition: method 'setExplanation' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.KeywordDefinition.KeywordDefinition.keyword
  @param  Kwdf_KeywordDefinition self
  @param  ApiString value
**/
void *Kwdf_KeywordDefinition_SetKeyword(Kwdf_KeywordDefinition self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setKeyword");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinition: cannot find method 'setKeyword'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinition: method 'setKeyword' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.KeywordDefinition.KeywordDefinition.name

A 
user-friendly synonym for the keyword
  @param  Kwdf_KeywordDefinition self
  @param  ApiString value
**/
void *Kwdf_KeywordDefinition_SetName(Kwdf_KeywordDefinition self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinition: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinition: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.general.KeywordDefinition.KeywordDefinition.targetNames

qualified 
names for the CCPN classes that the keyword may be used to describe. If 
empty there are no limitations. Typically keywords are used as part of a 
keyword-value-object combination. targetNames refer to the allowed tyope 
for the object being described (*not* the object that contains the 
desctription)
  @param  Kwdf_KeywordDefinition self
  @param  ApiSet values
**/
void *Kwdf_KeywordDefinition_SetTargetNames(Kwdf_KeywordDefinition self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setTargetNames");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinition: cannot find method 'setTargetNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinition: method 'setTargetNames' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
