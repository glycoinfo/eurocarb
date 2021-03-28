
#include "ccp.h"

/*
  One-dimensional, PanelType-mapped graphical mark.
*/

/* package ccpnmr.api.Analysis */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_Ruler self
  @param  Impl_ApplicationData value
**/
void *Anal_Ruler_AddApplicationData(Anal_Ruler self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Ruler: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Ruler: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccpnmr.Analysis.Ruler
  @param  Anal_Ruler self
  @param  ApiBoolean complete
**/
void *Anal_Ruler_CheckAllValid(Anal_Ruler self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Ruler: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Ruler: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccpnmr.Analysis.Ruler
  @param  Anal_Ruler self
  @param  ApiBoolean complete
**/
void *Anal_Ruler_CheckValid(Anal_Ruler self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Ruler: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Ruler: method 'checkValid' is not callable");
  
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
  @param  Anal_Ruler self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_Ruler_FindAllApplicationData(Anal_Ruler self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Ruler: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Ruler: method 'findAllApplicationData' is not callable");
  
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
  @param  Anal_Ruler self
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_Ruler_FindAllApplicationData_keyval0(Anal_Ruler self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_Ruler_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_Ruler self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_Ruler_FindAllApplicationData_keyval1(Anal_Ruler self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_Ruler_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_Ruler self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_Ruler_FindAllApplicationData_keyval2(Anal_Ruler self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_Ruler_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_Ruler self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_Ruler_FindAllApplicationData_keyval3(Anal_Ruler self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_Ruler_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_Ruler self
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
ApiList Anal_Ruler_FindAllApplicationData_keyval4(Anal_Ruler self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_Ruler_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_Ruler self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_Ruler_FindFirstApplicationData(Anal_Ruler self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Ruler: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Ruler: method 'findFirstApplicationData' is not callable");
  
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
  @param  Anal_Ruler self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_Ruler_FindFirstApplicationData_keyval0(Anal_Ruler self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_Ruler_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_Ruler self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_Ruler_FindFirstApplicationData_keyval1(Anal_Ruler self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_Ruler_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_Ruler self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_Ruler_FindFirstApplicationData_keyval2(Anal_Ruler self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_Ruler_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_Ruler self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_Ruler_FindFirstApplicationData_keyval3(Anal_Ruler self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_Ruler_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_Ruler self
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
Impl_ApplicationData Anal_Ruler_FindFirstApplicationData_keyval4(Anal_Ruler self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_Ruler_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccpnmr.Analysis.Ruler
  @param  Anal_Ruler self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Anal_Ruler_Get(Anal_Ruler self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anal_Ruler self
  @returns   the result
**/
Acco_AccessObject Anal_Ruler_GetAccess(Anal_Ruler self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Ruler: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Ruler: method 'getAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.Ruler.analysisProject

parent link
  @param  Anal_Ruler self
  @returns   the result
**/
Anal_AnalysisProject Anal_Ruler_GetAnalysisProject(Anal_Ruler self)
{
  
  Anal_AnalysisProject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAnalysisProject");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Ruler: cannot find method 'getAnalysisProject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Ruler: method 'getAnalysisProject' is not callable");
  
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
  @param  Anal_Ruler self
  @returns   the result
**/
ApiList Anal_Ruler_GetApplicationData(Anal_Ruler self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Ruler: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Ruler: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccpnmr.Analysis.Ruler
  @param  Anal_Ruler self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Anal_Ruler Anal_Ruler_GetByKey(Anal_Ruler self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Anal_Ruler obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Ruler: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Ruler: method 'getByKey' is not callable");
  
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
  @param  Anal_Ruler self
  @returns   the result
**/
ApiString Anal_Ruler_GetClassName(Anal_Ruler self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Ruler: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Ruler: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.Ruler.color

Ruler color
  @param  Anal_Ruler self
  @returns   the result
**/
ApiString Anal_Ruler_GetColor(Anal_Ruler self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getColor");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Ruler: cannot find method 'getColor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Ruler: method 'getColor' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AbstractMark.dashLength

For dashed line - 
length of dash part in arbitrary units (scale handled by program).
  @param  Anal_Ruler self
  @returns   the result
**/
ApiInteger Anal_Ruler_GetDashLength(Anal_Ruler self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDashLength");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Ruler: cannot find method 'getDashLength'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Ruler: method 'getDashLength' is not callable");
  
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
  @param  Anal_Ruler self
  @returns   the result
**/
ApiList Anal_Ruler_GetFieldNames(Anal_Ruler self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Ruler: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Ruler: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccpnmr.Analysis.Ruler
  @param  Anal_Ruler self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Anal_Ruler_GetFullKey(Anal_Ruler self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Ruler: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Ruler: method 'getFullKey' is not callable");
  
  args = PyTuple_Pack(1, useGuid);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AbstractMark.gapLength

Length of gap in dashed 
line - handled as for dashLength
  @param  Anal_Ruler self
  @returns   the result
**/
ApiInteger Anal_Ruler_GetGapLength(Anal_Ruler self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getGapLength");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Ruler: cannot find method 'getGapLength'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Ruler: method 'getGapLength' is not callable");
  
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
  @param  Anal_Ruler self
  @returns   the result
**/
ApiBoolean Anal_Ruler_GetInConstructor(Anal_Ruler self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Ruler: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Ruler: method 'getInConstructor' is not callable");
  
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
  @param  Anal_Ruler self
  @returns   the result
**/
ApiBoolean Anal_Ruler_GetIsDeleted(Anal_Ruler self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Ruler: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Ruler: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AbstractMark.lineWidth

Width of line in 
arbitrary units, handled as for dashLength.
  @param  Anal_Ruler self
  @returns   the result
**/
ApiFloat Anal_Ruler_GetLineWidth(Anal_Ruler self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLineWidth");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Ruler: cannot find method 'getLineWidth'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Ruler: method 'getLineWidth' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccpnmr.Analysis.Ruler
  @param  Anal_Ruler self
  @returns  Local object key
**/
ApiObject Anal_Ruler_GetLocalKey(Anal_Ruler self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Ruler: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Ruler: method 'getLocalKey' is not callable");
  
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
  @param  Anal_Ruler self
  @returns   the result
**/
ApiString Anal_Ruler_GetPackageName(Anal_Ruler self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Ruler: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Ruler: method 'getPackageName' is not callable");
  
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
  @param  Anal_Ruler self
  @returns   the result
**/
ApiString Anal_Ruler_GetPackageShortName(Anal_Ruler self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Ruler: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Ruler: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.Ruler.panelType

the PanelType of the Ruler
  @param  Anal_Ruler self
  @returns   the result
**/
Anal_PanelType Anal_Ruler_GetPanelType(Anal_Ruler self)
{
  
  Anal_PanelType obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPanelType");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Ruler: cannot find method 'getPanelType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Ruler: method 'getPanelType' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.Ruler.parent

link to parent object - synonym 
for analysisProject
  @param  Anal_Ruler self
  @returns   the result
**/
Anal_AnalysisProject Anal_Ruler_GetParent(Anal_Ruler self)
{
  
  Anal_AnalysisProject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Ruler: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Ruler: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.Ruler.position

Ruler position in the unit 
appropriate for the PanelType
  @param  Anal_Ruler self
  @returns   the result
**/
ApiFloat Anal_Ruler_GetPosition(Anal_Ruler self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPosition");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Ruler: cannot find method 'getPosition'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Ruler: method 'getPosition' is not callable");
  
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
  @param  Anal_Ruler self
  @returns   the result
**/
ApiString Anal_Ruler_GetQualifiedName(Anal_Ruler self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Ruler: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Ruler: method 'getQualifiedName' is not callable");
  
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
  @param  Anal_Ruler self
  @returns   the result
**/
Impl_MemopsRoot Anal_Ruler_GetRoot(Anal_Ruler self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Ruler: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Ruler: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.Ruler.serial

Serial number of object. Serves as 
object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Anal_Ruler self
  @returns   the result
**/
ApiInteger Anal_Ruler_GetSerial(Anal_Ruler self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Ruler: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Ruler: method 'getSerial' is not callable");
  
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
  @param  Anal_Ruler self
  @returns   the result
**/
Impl_TopObject Anal_Ruler_GetTopObject(Anal_Ruler self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Ruler: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Ruler: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccpnmr.Analysis.Ruler
  @param  Anal_AnalysisProject parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anal_Ruler Anal_Ruler_Init(Anal_AnalysisProject parent, ApiMap attrlinks)
{
  
  return Anal_AnalysisProject_NewRuler(parent, attrlinks);
}

/**
  Constructor for ccpnmr.Analysis.Ruler
  @param  Anal_AnalysisProject parent
  @param  Anal_PanelType panelType
  @param  float position
  @returns  the new object
**/
Anal_Ruler Anal_Ruler_Init_reqd(Anal_AnalysisProject parent, Anal_PanelType panelType, float position)
{
  
  Anal_Ruler  obj;
  PyObject *attrlinks = PyDict_New();
  ApiFloat api__position = ApiFloat_New(position);

  PyDict_SetItemString(attrlinks, "panelType", panelType);
  PyDict_SetItemString(attrlinks, "position", api__position);
  
  obj = Anal_Ruler_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__position);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_Ruler self
  @param  Impl_ApplicationData value
**/
void *Anal_Ruler_RemoveApplicationData(Anal_Ruler self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Ruler: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Ruler: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccpnmr.Analysis.Ruler
  @param  Anal_Ruler self
  @param  ApiString name
  @param  ApiObject value
**/
void *Anal_Ruler_Set(Anal_Ruler self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anal_Ruler self
  @param  Acco_AccessObject value
**/
void *Anal_Ruler_SetAccess(Anal_Ruler self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Ruler: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Ruler: method 'setAccess' is not callable");
  
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
  @param  Anal_Ruler self
  @param  ApiList values
**/
void *Anal_Ruler_SetApplicationData(Anal_Ruler self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Ruler: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Ruler: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.Ruler.color

Ruler color
  @param  Anal_Ruler self
  @param  ApiString value
**/
void *Anal_Ruler_SetColor(Anal_Ruler self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setColor");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Ruler: cannot find method 'setColor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Ruler: method 'setColor' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AbstractMark.dashLength

For dashed line - 
length of dash part in arbitrary units (scale handled by program).
  @param  Anal_Ruler self
  @param  ApiInteger value
**/
void *Anal_Ruler_SetDashLength(Anal_Ruler self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDashLength");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Ruler: cannot find method 'setDashLength'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Ruler: method 'setDashLength' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AbstractMark.gapLength

Length of gap in dashed 
line - handled as for dashLength
  @param  Anal_Ruler self
  @param  ApiInteger value
**/
void *Anal_Ruler_SetGapLength(Anal_Ruler self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setGapLength");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Ruler: cannot find method 'setGapLength'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Ruler: method 'setGapLength' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AbstractMark.lineWidth

Width of line in 
arbitrary units, handled as for dashLength.
  @param  Anal_Ruler self
  @param  ApiFloat value
**/
void *Anal_Ruler_SetLineWidth(Anal_Ruler self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLineWidth");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Ruler: cannot find method 'setLineWidth'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Ruler: method 'setLineWidth' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.Ruler.panelType

the PanelType of the Ruler
  @param  Anal_Ruler self
  @param  Anal_PanelType value
**/
void *Anal_Ruler_SetPanelType(Anal_Ruler self, Anal_PanelType value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPanelType");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Ruler: cannot find method 'setPanelType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Ruler: method 'setPanelType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.Ruler.position

Ruler position in the unit 
appropriate for the PanelType
  @param  Anal_Ruler self
  @param  ApiFloat value
**/
void *Anal_Ruler_SetPosition(Anal_Ruler self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPosition");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Ruler: cannot find method 'setPosition'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Ruler: method 'setPosition' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.Ruler.serial

Serial number of object. Serves as 
object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Anal_Ruler self
  @param  ApiInteger value
**/
void *Anal_Ruler_SetSerial(Anal_Ruler self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.Ruler: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.Ruler: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
