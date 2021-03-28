
#include "ccp.h"

/*
  Set of colors. Intended for contour drawing.
*/

/* package ccpnmr.api.AnalysisProfile */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_ColorScheme self
  @param  Impl_ApplicationData value
**/
void *Anap_ColorScheme_AddApplicationData(Anap_ColorScheme self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.ColorScheme: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.ColorScheme: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccpnmr.AnalysisProfile.ColorScheme.colors

Colors in the color 
scheme
  @param  Anap_ColorScheme self
  @param  ApiString value
**/
void *Anap_ColorScheme_AddColor(Anap_ColorScheme self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addColor");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.ColorScheme: cannot find method 'addColor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.ColorScheme: method 'addColor' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccpnmr.AnalysisProfile.ColorScheme
  @param  Anap_ColorScheme self
  @param  ApiBoolean complete
**/
void *Anap_ColorScheme_CheckAllValid(Anap_ColorScheme self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.ColorScheme: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.ColorScheme: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccpnmr.AnalysisProfile.ColorScheme
  @param  Anap_ColorScheme self
  @param  ApiBoolean complete
**/
void *Anap_ColorScheme_CheckValid(Anap_ColorScheme self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.ColorScheme: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.ColorScheme: method 'checkValid' is not callable");
  
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
  @param  Anap_ColorScheme self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Anap_ColorScheme_FindAllApplicationData(Anap_ColorScheme self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.ColorScheme: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.ColorScheme: method 'findAllApplicationData' is not callable");
  
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
  @param  Anap_ColorScheme self
  @returns  all value that satisfy the conditions 
**/
ApiList Anap_ColorScheme_FindAllApplicationData_keyval0(Anap_ColorScheme self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anap_ColorScheme_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_ColorScheme self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Anap_ColorScheme_FindAllApplicationData_keyval1(Anap_ColorScheme self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anap_ColorScheme_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_ColorScheme self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Anap_ColorScheme_FindAllApplicationData_keyval2(Anap_ColorScheme self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anap_ColorScheme_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_ColorScheme self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Anap_ColorScheme_FindAllApplicationData_keyval3(Anap_ColorScheme self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anap_ColorScheme_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_ColorScheme self
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
ApiList Anap_ColorScheme_FindAllApplicationData_keyval4(Anap_ColorScheme self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anap_ColorScheme_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_ColorScheme self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anap_ColorScheme_FindFirstApplicationData(Anap_ColorScheme self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.ColorScheme: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.ColorScheme: method 'findFirstApplicationData' is not callable");
  
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
  @param  Anap_ColorScheme self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anap_ColorScheme_FindFirstApplicationData_keyval0(Anap_ColorScheme self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anap_ColorScheme_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_ColorScheme self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anap_ColorScheme_FindFirstApplicationData_keyval1(Anap_ColorScheme self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anap_ColorScheme_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_ColorScheme self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anap_ColorScheme_FindFirstApplicationData_keyval2(Anap_ColorScheme self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anap_ColorScheme_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_ColorScheme self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anap_ColorScheme_FindFirstApplicationData_keyval3(Anap_ColorScheme self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anap_ColorScheme_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_ColorScheme self
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
Impl_ApplicationData Anap_ColorScheme_FindFirstApplicationData_keyval4(Anap_ColorScheme self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anap_ColorScheme_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccpnmr.AnalysisProfile.ColorScheme
  @param  Anap_ColorScheme self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Anap_ColorScheme_Get(Anap_ColorScheme self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anap_ColorScheme self
  @returns   the result
**/
Acco_AccessObject Anap_ColorScheme_GetAccess(Anap_ColorScheme self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.ColorScheme: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.ColorScheme: method 'getAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.AnalysisProfile.ColorScheme.analysisProfile

parent link
  @param  Anap_ColorScheme self
  @returns   the result
**/
Anap_AnalysisProfile Anap_ColorScheme_GetAnalysisProfile(Anap_ColorScheme self)
{
  
  Anap_AnalysisProfile obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAnalysisProfile");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.ColorScheme: cannot find method 'getAnalysisProfile'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.ColorScheme: method 'getAnalysisProfile' is not callable");
  
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
  @param  Anap_ColorScheme self
  @returns   the result
**/
ApiList Anap_ColorScheme_GetApplicationData(Anap_ColorScheme self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.ColorScheme: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.ColorScheme: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccpnmr.AnalysisProfile.ColorScheme
  @param  Anap_ColorScheme self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Anap_ColorScheme Anap_ColorScheme_GetByKey(Anap_ColorScheme self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Anap_ColorScheme obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.ColorScheme: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.ColorScheme: method 'getByKey' is not callable");
  
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
  @param  Anap_ColorScheme self
  @returns   the result
**/
ApiString Anap_ColorScheme_GetClassName(Anap_ColorScheme self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.ColorScheme: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.ColorScheme: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.AnalysisProfile.ColorScheme.colors

Colors in the color 
scheme
  @param  Anap_ColorScheme self
  @returns   the result
**/
ApiList Anap_ColorScheme_GetColors(Anap_ColorScheme self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getColors");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.ColorScheme: cannot find method 'getColors'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.ColorScheme: method 'getColors' is not callable");
  
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
  @param  Anap_ColorScheme self
  @returns   the result
**/
ApiList Anap_ColorScheme_GetFieldNames(Anap_ColorScheme self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.ColorScheme: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.ColorScheme: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccpnmr.AnalysisProfile.ColorScheme
  @param  Anap_ColorScheme self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Anap_ColorScheme_GetFullKey(Anap_ColorScheme self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.ColorScheme: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.ColorScheme: method 'getFullKey' is not callable");
  
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
  @param  Anap_ColorScheme self
  @returns   the result
**/
ApiBoolean Anap_ColorScheme_GetInConstructor(Anap_ColorScheme self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.ColorScheme: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.ColorScheme: method 'getInConstructor' is not callable");
  
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
  @param  Anap_ColorScheme self
  @returns   the result
**/
ApiBoolean Anap_ColorScheme_GetIsDeleted(Anap_ColorScheme self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.ColorScheme: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.ColorScheme: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccpnmr.AnalysisProfile.ColorScheme
  @param  Anap_ColorScheme self
  @returns  Local object key
**/
ApiObject Anap_ColorScheme_GetLocalKey(Anap_ColorScheme self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.ColorScheme: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.ColorScheme: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.AnalysisProfile.ColorScheme.name

The name of the color 
scheme, e.g. 'rainbow'.
  @param  Anap_ColorScheme self
  @returns   the result
**/
ApiString Anap_ColorScheme_GetName(Anap_ColorScheme self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.ColorScheme: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.ColorScheme: method 'getName' is not callable");
  
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
  @param  Anap_ColorScheme self
  @returns   the result
**/
ApiString Anap_ColorScheme_GetPackageName(Anap_ColorScheme self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.ColorScheme: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.ColorScheme: method 'getPackageName' is not callable");
  
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
  @param  Anap_ColorScheme self
  @returns   the result
**/
ApiString Anap_ColorScheme_GetPackageShortName(Anap_ColorScheme self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.ColorScheme: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.ColorScheme: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.AnalysisProfile.ColorScheme.parent

link to parent object 
- synonym for analysisProfile
  @param  Anap_ColorScheme self
  @returns   the result
**/
Anap_AnalysisProfile Anap_ColorScheme_GetParent(Anap_ColorScheme self)
{
  
  Anap_AnalysisProfile obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.ColorScheme: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.ColorScheme: method 'getParent' is not callable");
  
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
  @param  Anap_ColorScheme self
  @returns   the result
**/
ApiString Anap_ColorScheme_GetQualifiedName(Anap_ColorScheme self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.ColorScheme: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.ColorScheme: method 'getQualifiedName' is not callable");
  
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
  @param  Anap_ColorScheme self
  @returns   the result
**/
Impl_MemopsRoot Anap_ColorScheme_GetRoot(Anap_ColorScheme self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.ColorScheme: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.ColorScheme: method 'getRoot' is not callable");
  
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
  @param  Anap_ColorScheme self
  @returns   the result
**/
Impl_TopObject Anap_ColorScheme_GetTopObject(Anap_ColorScheme self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.ColorScheme: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.ColorScheme: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccpnmr.AnalysisProfile.ColorScheme
  @param  Anap_AnalysisProfile parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anap_ColorScheme Anap_ColorScheme_Init(Anap_AnalysisProfile parent, ApiMap attrlinks)
{
  
  return Anap_AnalysisProfile_NewColorScheme(parent, attrlinks);
}

/**
  Constructor for ccpnmr.AnalysisProfile.ColorScheme
  @param  Anap_AnalysisProfile parent
  @param  char * name
  @returns  the new object
**/
Anap_ColorScheme Anap_ColorScheme_Init_reqd(Anap_AnalysisProfile parent, char * name)
{
  
  Anap_ColorScheme  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Anap_ColorScheme_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anap_ColorScheme self
  @param  Impl_ApplicationData value
**/
void *Anap_ColorScheme_RemoveApplicationData(Anap_ColorScheme self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.ColorScheme: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.ColorScheme: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccpnmr.AnalysisProfile.ColorScheme.colors

Colors in the 
color scheme
  @param  Anap_ColorScheme self
  @param  ApiString value
**/
void *Anap_ColorScheme_RemoveColor(Anap_ColorScheme self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeColor");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.ColorScheme: cannot find method 'removeColor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.ColorScheme: method 'removeColor' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccpnmr.AnalysisProfile.ColorScheme
  @param  Anap_ColorScheme self
  @param  ApiString name
  @param  ApiObject value
**/
void *Anap_ColorScheme_Set(Anap_ColorScheme self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anap_ColorScheme self
  @param  Acco_AccessObject value
**/
void *Anap_ColorScheme_SetAccess(Anap_ColorScheme self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.ColorScheme: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.ColorScheme: method 'setAccess' is not callable");
  
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
  @param  Anap_ColorScheme self
  @param  ApiList values
**/
void *Anap_ColorScheme_SetApplicationData(Anap_ColorScheme self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.ColorScheme: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.ColorScheme: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.AnalysisProfile.ColorScheme.colors

Colors in the color 
scheme
  @param  Anap_ColorScheme self
  @param  ApiList values
**/
void *Anap_ColorScheme_SetColors(Anap_ColorScheme self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setColors");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.ColorScheme: cannot find method 'setColors'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.ColorScheme: method 'setColors' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.AnalysisProfile.ColorScheme.name

The name of the color 
scheme, e.g. 'rainbow'.
  @param  Anap_ColorScheme self
  @param  ApiString value
**/
void *Anap_ColorScheme_SetName(Anap_ColorScheme self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccpnmr.AnalysisProfile.ColorScheme: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.AnalysisProfile.ColorScheme: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
