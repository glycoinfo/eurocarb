
#include "ccp.h"

/*
  Used for properties of peak lists which depend on the particular SpectrumWindow being considered.
*/

/* package ccpnmr.api.Analysis */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_WindowPeakList self
  @param  Impl_ApplicationData value
**/
void *Anal_WindowPeakList_AddApplicationData(Anal_WindowPeakList self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.WindowPeakList: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.WindowPeakList: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccpnmr.Analysis.WindowPeakList
  @param  Anal_WindowPeakList self
  @param  ApiBoolean complete
**/
void *Anal_WindowPeakList_CheckAllValid(Anal_WindowPeakList self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.WindowPeakList: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.WindowPeakList: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccpnmr.Analysis.WindowPeakList
  @param  Anal_WindowPeakList self
  @param  ApiBoolean complete
**/
void *Anal_WindowPeakList_CheckValid(Anal_WindowPeakList self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.WindowPeakList: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.WindowPeakList: method 'checkValid' is not callable");
  
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
  @param  Anal_WindowPeakList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_WindowPeakList_FindAllApplicationData(Anal_WindowPeakList self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.WindowPeakList: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.WindowPeakList: method 'findAllApplicationData' is not callable");
  
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
  @param  Anal_WindowPeakList self
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_WindowPeakList_FindAllApplicationData_keyval0(Anal_WindowPeakList self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_WindowPeakList_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_WindowPeakList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_WindowPeakList_FindAllApplicationData_keyval1(Anal_WindowPeakList self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_WindowPeakList_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_WindowPeakList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_WindowPeakList_FindAllApplicationData_keyval2(Anal_WindowPeakList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_WindowPeakList_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_WindowPeakList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_WindowPeakList_FindAllApplicationData_keyval3(Anal_WindowPeakList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_WindowPeakList_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_WindowPeakList self
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
ApiList Anal_WindowPeakList_FindAllApplicationData_keyval4(Anal_WindowPeakList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_WindowPeakList_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_WindowPeakList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_WindowPeakList_FindFirstApplicationData(Anal_WindowPeakList self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.WindowPeakList: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.WindowPeakList: method 'findFirstApplicationData' is not callable");
  
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
  @param  Anal_WindowPeakList self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_WindowPeakList_FindFirstApplicationData_keyval0(Anal_WindowPeakList self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_WindowPeakList_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_WindowPeakList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_WindowPeakList_FindFirstApplicationData_keyval1(Anal_WindowPeakList self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_WindowPeakList_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_WindowPeakList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_WindowPeakList_FindFirstApplicationData_keyval2(Anal_WindowPeakList self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_WindowPeakList_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_WindowPeakList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_WindowPeakList_FindFirstApplicationData_keyval3(Anal_WindowPeakList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_WindowPeakList_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_WindowPeakList self
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
Impl_ApplicationData Anal_WindowPeakList_FindFirstApplicationData_keyval4(Anal_WindowPeakList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_WindowPeakList_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccpnmr.Analysis.WindowPeakList
  @param  Anal_WindowPeakList self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Anal_WindowPeakList_Get(Anal_WindowPeakList self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anal_WindowPeakList self
  @returns   the result
**/
Acco_AccessObject Anal_WindowPeakList_GetAccess(Anal_WindowPeakList self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.WindowPeakList: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.WindowPeakList: method 'getAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccpnmr.Analysis.WindowPeakList.analysisPeakList

AnalysisPeakList that 
WindowPeakList refers to - part of class key.
  @param  Anal_WindowPeakList self
  @returns   the result
**/
Anal_AnalysisPeakList Anal_WindowPeakList_GetAnalysisPeakList(Anal_WindowPeakList self)
{
  
  Anal_AnalysisPeakList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAnalysisPeakList");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.WindowPeakList: cannot find method 'getAnalysisPeakList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.WindowPeakList: method 'getAnalysisPeakList' is not callable");
  
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
  @param  Anal_WindowPeakList self
  @returns   the result
**/
ApiList Anal_WindowPeakList_GetApplicationData(Anal_WindowPeakList self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.WindowPeakList: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.WindowPeakList: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccpnmr.Analysis.WindowPeakList
  @param  Anal_WindowPeakList self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Anal_WindowPeakList Anal_WindowPeakList_GetByKey(Anal_WindowPeakList self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Anal_WindowPeakList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.WindowPeakList: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.WindowPeakList: method 'getByKey' is not callable");
  
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
  @param  Anal_WindowPeakList self
  @returns   the result
**/
ApiString Anal_WindowPeakList_GetClassName(Anal_WindowPeakList self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.WindowPeakList: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.WindowPeakList: method 'getClassName' is not callable");
  
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
  @param  Anal_WindowPeakList self
  @returns   the result
**/
ApiList Anal_WindowPeakList_GetFieldNames(Anal_WindowPeakList self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.WindowPeakList: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.WindowPeakList: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccpnmr.Analysis.WindowPeakList
  @param  Anal_WindowPeakList self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Anal_WindowPeakList_GetFullKey(Anal_WindowPeakList self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.WindowPeakList: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.WindowPeakList: method 'getFullKey' is not callable");
  
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
  @param  Anal_WindowPeakList self
  @returns   the result
**/
ApiBoolean Anal_WindowPeakList_GetInConstructor(Anal_WindowPeakList self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.WindowPeakList: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.WindowPeakList: method 'getInConstructor' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.WindowPeakList.isAnnotationDrawn

Should peak 
annotations be displayed?
  @param  Anal_WindowPeakList self
  @returns   the result
**/
ApiBoolean Anal_WindowPeakList_GetIsAnnotationDrawn(Anal_WindowPeakList self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsAnnotationDrawn");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.WindowPeakList: cannot find method 'getIsAnnotationDrawn'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.WindowPeakList: method 'getIsAnnotationDrawn' is not callable");
  
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
  @param  Anal_WindowPeakList self
  @returns   the result
**/
ApiBoolean Anal_WindowPeakList_GetIsDeleted(Anal_WindowPeakList self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.WindowPeakList: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.WindowPeakList: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.WindowPeakList.isSymbolDrawn

Should peak 
symbols be drawn?
  @param  Anal_WindowPeakList self
  @returns   the result
**/
ApiBoolean Anal_WindowPeakList_GetIsSymbolDrawn(Anal_WindowPeakList self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsSymbolDrawn");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.WindowPeakList: cannot find method 'getIsSymbolDrawn'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.WindowPeakList: method 'getIsSymbolDrawn' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccpnmr.Analysis.WindowPeakList
  @param  Anal_WindowPeakList self
  @returns  Local object key
**/
ApiObject Anal_WindowPeakList_GetLocalKey(Anal_WindowPeakList self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.WindowPeakList: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.WindowPeakList: method 'getLocalKey' is not callable");
  
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
  @param  Anal_WindowPeakList self
  @returns   the result
**/
ApiString Anal_WindowPeakList_GetPackageName(Anal_WindowPeakList self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.WindowPeakList: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.WindowPeakList: method 'getPackageName' is not callable");
  
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
  @param  Anal_WindowPeakList self
  @returns   the result
**/
ApiString Anal_WindowPeakList_GetPackageShortName(Anal_WindowPeakList self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.WindowPeakList: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.WindowPeakList: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.WindowPeakList.parent

link to parent object - 
synonym for spectrumWindowView
  @param  Anal_WindowPeakList self
  @returns   the result
**/
Anal_SpectrumWindowView Anal_WindowPeakList_GetParent(Anal_WindowPeakList self)
{
  
  Anal_SpectrumWindowView obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.WindowPeakList: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.WindowPeakList: method 'getParent' is not callable");
  
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
  @param  Anal_WindowPeakList self
  @returns   the result
**/
ApiString Anal_WindowPeakList_GetQualifiedName(Anal_WindowPeakList self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.WindowPeakList: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.WindowPeakList: method 'getQualifiedName' is not callable");
  
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
  @param  Anal_WindowPeakList self
  @returns   the result
**/
Impl_MemopsRoot Anal_WindowPeakList_GetRoot(Anal_WindowPeakList self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.WindowPeakList: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.WindowPeakList: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.WindowPeakList.spectrumWindowView

parent link
  @param  Anal_WindowPeakList self
  @returns   the result
**/
Anal_SpectrumWindowView Anal_WindowPeakList_GetSpectrumWindowView(Anal_WindowPeakList self)
{
  
  Anal_SpectrumWindowView obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSpectrumWindowView");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.WindowPeakList: cannot find method 'getSpectrumWindowView'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.WindowPeakList: method 'getSpectrumWindowView' is not callable");
  
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
  @param  Anal_WindowPeakList self
  @returns   the result
**/
Impl_TopObject Anal_WindowPeakList_GetTopObject(Anal_WindowPeakList self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.WindowPeakList: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.WindowPeakList: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccpnmr.Analysis.WindowPeakList
  @param  Anal_SpectrumWindowView parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anal_WindowPeakList Anal_WindowPeakList_Init(Anal_SpectrumWindowView parent, ApiMap attrlinks)
{
  
  return Anal_SpectrumWindowView_NewWindowPeakList(parent, attrlinks);
}

/**
  Constructor for ccpnmr.Analysis.WindowPeakList
  @param  Anal_SpectrumWindowView parent
  @param  Anal_AnalysisPeakList analysisPeakList
  @returns  the new object
**/
Anal_WindowPeakList Anal_WindowPeakList_Init_reqd(Anal_SpectrumWindowView parent, Anal_AnalysisPeakList analysisPeakList)
{
  
  Anal_WindowPeakList  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "analysisPeakList", analysisPeakList);
  
  obj = Anal_WindowPeakList_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_WindowPeakList self
  @param  Impl_ApplicationData value
**/
void *Anal_WindowPeakList_RemoveApplicationData(Anal_WindowPeakList self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.WindowPeakList: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.WindowPeakList: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccpnmr.Analysis.WindowPeakList
  @param  Anal_WindowPeakList self
  @param  ApiString name
  @param  ApiObject value
**/
void *Anal_WindowPeakList_Set(Anal_WindowPeakList self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anal_WindowPeakList self
  @param  Acco_AccessObject value
**/
void *Anal_WindowPeakList_SetAccess(Anal_WindowPeakList self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.WindowPeakList: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.WindowPeakList: method 'setAccess' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccpnmr.Analysis.WindowPeakList.analysisPeakList

AnalysisPeakList that 
WindowPeakList refers to - part of class key.
  @param  Anal_WindowPeakList self
  @param  Anal_AnalysisPeakList value
**/
void *Anal_WindowPeakList_SetAnalysisPeakList(Anal_WindowPeakList self, Anal_AnalysisPeakList value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAnalysisPeakList");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.WindowPeakList: cannot find method 'setAnalysisPeakList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.WindowPeakList: method 'setAnalysisPeakList' is not callable");
  
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
  @param  Anal_WindowPeakList self
  @param  ApiList values
**/
void *Anal_WindowPeakList_SetApplicationData(Anal_WindowPeakList self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.WindowPeakList: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.WindowPeakList: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.WindowPeakList.isAnnotationDrawn

Should peak 
annotations be displayed?
  @param  Anal_WindowPeakList self
  @param  ApiBoolean value
**/
void *Anal_WindowPeakList_SetIsAnnotationDrawn(Anal_WindowPeakList self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsAnnotationDrawn");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.WindowPeakList: cannot find method 'setIsAnnotationDrawn'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.WindowPeakList: method 'setIsAnnotationDrawn' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.WindowPeakList.isSymbolDrawn

Should peak 
symbols be drawn?
  @param  Anal_WindowPeakList self
  @param  ApiBoolean value
**/
void *Anal_WindowPeakList_SetIsSymbolDrawn(Anal_WindowPeakList self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsSymbolDrawn");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.WindowPeakList: cannot find method 'setIsSymbolDrawn'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.WindowPeakList: method 'setIsSymbolDrawn' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
