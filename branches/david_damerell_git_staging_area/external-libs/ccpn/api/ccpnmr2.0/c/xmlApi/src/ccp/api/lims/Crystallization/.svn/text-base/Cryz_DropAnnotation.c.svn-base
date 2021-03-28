
#include "ccp.h"

/*
  
*/

/* package ccp.api.lims.Crystallization */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_DropAnnotation self
  @param  Impl_ApplicationData value
**/
void *Cryz_DropAnnotation_AddApplicationData(Cryz_DropAnnotation self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.lims.Crystallization.DropAnnotation
  @param  Cryz_DropAnnotation self
  @param  ApiBoolean complete
**/
void *Cryz_DropAnnotation_CheckAllValid(Cryz_DropAnnotation self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.lims.Crystallization.DropAnnotation
  @param  Cryz_DropAnnotation self
  @param  ApiBoolean complete
**/
void *Cryz_DropAnnotation_CheckValid(Cryz_DropAnnotation self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: method 'checkValid' is not callable");
  
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
  @param  Cryz_DropAnnotation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Cryz_DropAnnotation_FindAllApplicationData(Cryz_DropAnnotation self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: method 'findAllApplicationData' is not callable");
  
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
  @param  Cryz_DropAnnotation self
  @returns  all value that satisfy the conditions 
**/
ApiList Cryz_DropAnnotation_FindAllApplicationData_keyval0(Cryz_DropAnnotation self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cryz_DropAnnotation_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_DropAnnotation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Cryz_DropAnnotation_FindAllApplicationData_keyval1(Cryz_DropAnnotation self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cryz_DropAnnotation_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_DropAnnotation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Cryz_DropAnnotation_FindAllApplicationData_keyval2(Cryz_DropAnnotation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cryz_DropAnnotation_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_DropAnnotation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Cryz_DropAnnotation_FindAllApplicationData_keyval3(Cryz_DropAnnotation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cryz_DropAnnotation_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_DropAnnotation self
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
ApiList Cryz_DropAnnotation_FindAllApplicationData_keyval4(Cryz_DropAnnotation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cryz_DropAnnotation_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_DropAnnotation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Cryz_DropAnnotation_FindFirstApplicationData(Cryz_DropAnnotation self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: method 'findFirstApplicationData' is not callable");
  
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
  @param  Cryz_DropAnnotation self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Cryz_DropAnnotation_FindFirstApplicationData_keyval0(Cryz_DropAnnotation self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cryz_DropAnnotation_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_DropAnnotation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Cryz_DropAnnotation_FindFirstApplicationData_keyval1(Cryz_DropAnnotation self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cryz_DropAnnotation_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_DropAnnotation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Cryz_DropAnnotation_FindFirstApplicationData_keyval2(Cryz_DropAnnotation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cryz_DropAnnotation_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_DropAnnotation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Cryz_DropAnnotation_FindFirstApplicationData_keyval3(Cryz_DropAnnotation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cryz_DropAnnotation_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_DropAnnotation self
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
Impl_ApplicationData Cryz_DropAnnotation_FindFirstApplicationData_keyval4(Cryz_DropAnnotation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cryz_DropAnnotation_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.lims.Crystallization.DropAnnotation
  @param  Cryz_DropAnnotation self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Cryz_DropAnnotation_Get(Cryz_DropAnnotation self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Cryz_DropAnnotation self
  @returns   the result
**/
Acco_AccessObject Cryz_DropAnnotation_GetAccess(Cryz_DropAnnotation self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: method 'getAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Crystallization.DropAnnotation.annotator
  @param  Cryz_DropAnnotation self
  @returns   the result
**/
Affi_Person Cryz_DropAnnotation_GetAnnotator(Cryz_DropAnnotation self)
{
  
  Affi_Person obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAnnotator");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: cannot find method 'getAnnotator'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: method 'getAnnotator' is not callable");
  
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
  @param  Cryz_DropAnnotation self
  @returns   the result
**/
ApiList Cryz_DropAnnotation_GetApplicationData(Cryz_DropAnnotation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.lims.Crystallization.DropAnnotation
  @param  Cryz_DropAnnotation self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Cryz_DropAnnotation Cryz_DropAnnotation_GetByKey(Cryz_DropAnnotation self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Cryz_DropAnnotation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: method 'getByKey' is not callable");
  
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
  @param  Cryz_DropAnnotation self
  @returns   the result
**/
ApiString Cryz_DropAnnotation_GetClassName(Cryz_DropAnnotation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Crystallization.DropAnnotation.cmdLineParam
  @param  Cryz_DropAnnotation self
  @returns   the result
**/
ApiString Cryz_DropAnnotation_GetCmdLineParam(Cryz_DropAnnotation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCmdLineParam");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: cannot find method 'getCmdLineParam'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: method 'getCmdLineParam' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.lims.Crystallization.DropAnnotation.crystallizationStore

parent 
link
  @param  Cryz_DropAnnotation self
  @returns   the result
**/
Cryz_CrystallizationStore Cryz_DropAnnotation_GetCrystallizationStore(Cryz_DropAnnotation self)
{
  
  Cryz_CrystallizationStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCrystallizationStore");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: cannot find method 'getCrystallizationStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: method 'getCrystallizationStore' is not callable");
  
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
  @param  Cryz_DropAnnotation self
  @returns   the result
**/
ApiList Cryz_DropAnnotation_GetFieldNames(Cryz_DropAnnotation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.lims.Crystallization.DropAnnotation
  @param  Cryz_DropAnnotation self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Cryz_DropAnnotation_GetFullKey(Cryz_DropAnnotation self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: method 'getFullKey' is not callable");
  
  args = PyTuple_Pack(1, useGuid);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Crystallization.DropAnnotation.image
  @param  Cryz_DropAnnotation self
  @returns   the result
**/
Cryz_Image Cryz_DropAnnotation_GetImage(Cryz_DropAnnotation self)
{
  
  Cryz_Image obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getImage");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: cannot find method 'getImage'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: method 'getImage' is not callable");
  
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
  @param  Cryz_DropAnnotation self
  @returns   the result
**/
ApiBoolean Cryz_DropAnnotation_GetInConstructor(Cryz_DropAnnotation self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: method 'getInConstructor' is not callable");
  
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
  @param  Cryz_DropAnnotation self
  @returns   the result
**/
ApiBoolean Cryz_DropAnnotation_GetIsDeleted(Cryz_DropAnnotation self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.lims.Crystallization.DropAnnotation
  @param  Cryz_DropAnnotation self
  @returns  Local object key
**/
ApiObject Cryz_DropAnnotation_GetLocalKey(Cryz_DropAnnotation self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: method 'getLocalKey' is not callable");
  
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
  @param  Cryz_DropAnnotation self
  @returns   the result
**/
ApiString Cryz_DropAnnotation_GetPackageName(Cryz_DropAnnotation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: method 'getPackageName' is not callable");
  
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
  @param  Cryz_DropAnnotation self
  @returns   the result
**/
ApiString Cryz_DropAnnotation_GetPackageShortName(Cryz_DropAnnotation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Crystallization.DropAnnotation.parent

link to parent 
object - synonym for crystallizationStore
  @param  Cryz_DropAnnotation self
  @returns   the result
**/
Cryz_CrystallizationStore Cryz_DropAnnotation_GetParent(Cryz_DropAnnotation self)
{
  
  Cryz_CrystallizationStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: method 'getParent' is not callable");
  
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
  @param  Cryz_DropAnnotation self
  @returns   the result
**/
ApiString Cryz_DropAnnotation_GetQualifiedName(Cryz_DropAnnotation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: method 'getQualifiedName' is not callable");
  
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
  @param  Cryz_DropAnnotation self
  @returns   the result
**/
Impl_MemopsRoot Cryz_DropAnnotation_GetRoot(Cryz_DropAnnotation self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Crystallization.DropAnnotation.sample
  @param  Cryz_DropAnnotation self
  @returns   the result
**/
Sam_Sample Cryz_DropAnnotation_GetSample(Cryz_DropAnnotation self)
{
  
  Sam_Sample obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: cannot find method 'getSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: method 'getSample' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Crystallization.DropAnnotation.score
  @param  Cryz_DropAnnotation self
  @returns   the result
**/
Cryz_Score Cryz_DropAnnotation_GetScore(Cryz_DropAnnotation self)
{
  
  Cryz_Score obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getScore");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: cannot find method 'getScore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: method 'getScore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Crystallization.DropAnnotation.scoreDate
  @param  Cryz_DropAnnotation self
  @returns   the result
**/
ApiString Cryz_DropAnnotation_GetScoreDate(Cryz_DropAnnotation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getScoreDate");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: cannot find method 'getScoreDate'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: method 'getScoreDate' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Crystallization.DropAnnotation.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Cryz_DropAnnotation self
  @returns   the result
**/
ApiInteger Cryz_DropAnnotation_GetSerial(Cryz_DropAnnotation self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: method 'getSerial' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Crystallization.DropAnnotation.software
  @param  Cryz_DropAnnotation self
  @returns   the result
**/
Meth_Software Cryz_DropAnnotation_GetSoftware(Cryz_DropAnnotation self)
{
  
  Meth_Software obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSoftware");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: cannot find method 'getSoftware'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: method 'getSoftware' is not callable");
  
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
  @param  Cryz_DropAnnotation self
  @returns   the result
**/
Impl_TopObject Cryz_DropAnnotation_GetTopObject(Cryz_DropAnnotation self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.lims.Crystallization.DropAnnotation
  @param  Cryz_CrystallizationStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Cryz_DropAnnotation Cryz_DropAnnotation_Init(Cryz_CrystallizationStore parent, ApiMap attrlinks)
{
  
  return Cryz_CrystallizationStore_NewDropAnnotation(parent, attrlinks);
}

/**
  Constructor for ccp.lims.Crystallization.DropAnnotation
  @param  Cryz_CrystallizationStore parent
  @param  Affi_Person annotator
  @param  Cryz_Score score
  @returns  the new object
**/
Cryz_DropAnnotation Cryz_DropAnnotation_Init_reqd(Cryz_CrystallizationStore parent, Affi_Person annotator, Cryz_Score score)
{
  
  Cryz_DropAnnotation  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "annotator", annotator);
  PyDict_SetItemString(attrlinks, "score", score);
  
  obj = Cryz_DropAnnotation_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_DropAnnotation self
  @param  Impl_ApplicationData value
**/
void *Cryz_DropAnnotation_RemoveApplicationData(Cryz_DropAnnotation self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.lims.Crystallization.DropAnnotation
  @param  Cryz_DropAnnotation self
  @param  ApiString name
  @param  ApiObject value
**/
void *Cryz_DropAnnotation_Set(Cryz_DropAnnotation self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Cryz_DropAnnotation self
  @param  Acco_AccessObject value
**/
void *Cryz_DropAnnotation_SetAccess(Cryz_DropAnnotation self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: method 'setAccess' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Crystallization.DropAnnotation.annotator
  @param  Cryz_DropAnnotation self
  @param  Affi_Person value
**/
void *Cryz_DropAnnotation_SetAnnotator(Cryz_DropAnnotation self, Affi_Person value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAnnotator");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: cannot find method 'setAnnotator'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: method 'setAnnotator' is not callable");
  
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
  @param  Cryz_DropAnnotation self
  @param  ApiList values
**/
void *Cryz_DropAnnotation_SetApplicationData(Cryz_DropAnnotation self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Crystallization.DropAnnotation.cmdLineParam
  @param  Cryz_DropAnnotation self
  @param  ApiString value
**/
void *Cryz_DropAnnotation_SetCmdLineParam(Cryz_DropAnnotation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCmdLineParam");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: cannot find method 'setCmdLineParam'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: method 'setCmdLineParam' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Crystallization.DropAnnotation.image
  @param  Cryz_DropAnnotation self
  @param  Cryz_Image value
**/
void *Cryz_DropAnnotation_SetImage(Cryz_DropAnnotation self, Cryz_Image value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setImage");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: cannot find method 'setImage'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: method 'setImage' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Crystallization.DropAnnotation.sample
  @param  Cryz_DropAnnotation self
  @param  Sam_Sample value
**/
void *Cryz_DropAnnotation_SetSample(Cryz_DropAnnotation self, Sam_Sample value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSample");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: cannot find method 'setSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: method 'setSample' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Crystallization.DropAnnotation.score
  @param  Cryz_DropAnnotation self
  @param  Cryz_Score value
**/
void *Cryz_DropAnnotation_SetScore(Cryz_DropAnnotation self, Cryz_Score value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setScore");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: cannot find method 'setScore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: method 'setScore' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Crystallization.DropAnnotation.scoreDate
  @param  Cryz_DropAnnotation self
  @param  ApiString value
**/
void *Cryz_DropAnnotation_SetScoreDate(Cryz_DropAnnotation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setScoreDate");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: cannot find method 'setScoreDate'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: method 'setScoreDate' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Crystallization.DropAnnotation.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Cryz_DropAnnotation self
  @param  ApiInteger value
**/
void *Cryz_DropAnnotation_SetSerial(Cryz_DropAnnotation self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Crystallization.DropAnnotation.software
  @param  Cryz_DropAnnotation self
  @param  Meth_Software value
**/
void *Cryz_DropAnnotation_SetSoftware(Cryz_DropAnnotation self, Meth_Software value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSoftware");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: cannot find method 'setSoftware'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.DropAnnotation: method 'setSoftware' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
