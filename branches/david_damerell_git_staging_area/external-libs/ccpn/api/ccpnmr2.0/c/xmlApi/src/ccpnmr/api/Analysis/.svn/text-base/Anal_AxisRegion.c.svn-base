
#include "ccp.h"

/*
  This corresponds to one region of an AxisPanel.
*/

/* package ccpnmr.api.Analysis */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisRegion self
  @param  Impl_ApplicationData value
**/
void *Anal_AxisRegion_AddApplicationData(Anal_AxisRegion self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegion: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegion: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccpnmr.Analysis.AxisRegion.overrideRegion

Override region, to 
use instead of main region
  @param  Anal_AxisRegion self
  @param  ApiFloat value
**/
void *Anal_AxisRegion_AddOverrideRegion(Anal_AxisRegion self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addOverrideRegion");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegion: cannot find method 'addOverrideRegion'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegion: method 'addOverrideRegion' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccpnmr.Analysis.AxisRegion
  @param  Anal_AxisRegion self
  @param  ApiBoolean complete
**/
void *Anal_AxisRegion_CheckAllValid(Anal_AxisRegion self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegion: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegion: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccpnmr.Analysis.AxisRegion
  @param  Anal_AxisRegion self
  @param  ApiBoolean complete
**/
void *Anal_AxisRegion_CheckValid(Anal_AxisRegion self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegion: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegion: method 'checkValid' is not callable");
  
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
  @param  Anal_AxisRegion self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_AxisRegion_FindAllApplicationData(Anal_AxisRegion self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegion: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegion: method 'findAllApplicationData' is not callable");
  
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
  @param  Anal_AxisRegion self
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_AxisRegion_FindAllApplicationData_keyval0(Anal_AxisRegion self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AxisRegion_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisRegion self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_AxisRegion_FindAllApplicationData_keyval1(Anal_AxisRegion self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AxisRegion_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisRegion self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_AxisRegion_FindAllApplicationData_keyval2(Anal_AxisRegion self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AxisRegion_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisRegion self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_AxisRegion_FindAllApplicationData_keyval3(Anal_AxisRegion self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AxisRegion_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisRegion self
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
ApiList Anal_AxisRegion_FindAllApplicationData_keyval4(Anal_AxisRegion self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AxisRegion_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisRegion self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_AxisRegion_FindFirstApplicationData(Anal_AxisRegion self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegion: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegion: method 'findFirstApplicationData' is not callable");
  
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
  @param  Anal_AxisRegion self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_AxisRegion_FindFirstApplicationData_keyval0(Anal_AxisRegion self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_AxisRegion_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisRegion self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_AxisRegion_FindFirstApplicationData_keyval1(Anal_AxisRegion self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_AxisRegion_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisRegion self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_AxisRegion_FindFirstApplicationData_keyval2(Anal_AxisRegion self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_AxisRegion_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisRegion self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_AxisRegion_FindFirstApplicationData_keyval3(Anal_AxisRegion self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_AxisRegion_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisRegion self
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
Impl_ApplicationData Anal_AxisRegion_FindFirstApplicationData_keyval4(Anal_AxisRegion self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_AxisRegion_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccpnmr.Analysis.AxisRegion
  @param  Anal_AxisRegion self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Anal_AxisRegion_Get(Anal_AxisRegion self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anal_AxisRegion self
  @returns   the result
**/
Acco_AccessObject Anal_AxisRegion_GetAccess(Anal_AxisRegion self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegion: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegion: method 'getAccess' is not callable");
  
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
  @param  Anal_AxisRegion self
  @returns   the result
**/
ApiList Anal_AxisRegion_GetApplicationData(Anal_AxisRegion self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegion: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegion: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AxisRegion.axisPanel

parent link
  @param  Anal_AxisRegion self
  @returns   the result
**/
Anal_AxisPanel Anal_AxisRegion_GetAxisPanel(Anal_AxisRegion self)
{
  
  Anal_AxisPanel obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAxisPanel");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegion: cannot find method 'getAxisPanel'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegion: method 'getAxisPanel' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AxisRegion.axisRegionGroup

AxisRegionGroup that 
groups AxisRegions
  @param  Anal_AxisRegion self
  @returns   the result
**/
Anal_AxisRegionGroup Anal_AxisRegion_GetAxisRegionGroup(Anal_AxisRegion self)
{
  
  Anal_AxisRegionGroup obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAxisRegionGroup");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegion: cannot find method 'getAxisRegionGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegion: method 'getAxisRegionGroup' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccpnmr.Analysis.AxisRegion
  @param  Anal_AxisRegion self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Anal_AxisRegion Anal_AxisRegion_GetByKey(Anal_AxisRegion self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Anal_AxisRegion obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegion: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegion: method 'getByKey' is not callable");
  
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
  @param  Anal_AxisRegion self
  @returns   the result
**/
ApiString Anal_AxisRegion_GetClassName(Anal_AxisRegion self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegion: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegion: method 'getClassName' is not callable");
  
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
  @param  Anal_AxisRegion self
  @returns   the result
**/
ApiList Anal_AxisRegion_GetFieldNames(Anal_AxisRegion self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegion: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegion: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccpnmr.Analysis.AxisRegion
  @param  Anal_AxisRegion self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Anal_AxisRegion_GetFullKey(Anal_AxisRegion self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegion: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegion: method 'getFullKey' is not callable");
  
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
  @param  Anal_AxisRegion self
  @returns   the result
**/
ApiBoolean Anal_AxisRegion_GetInConstructor(Anal_AxisRegion self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegion: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegion: method 'getInConstructor' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AxisRegion.isActive

Determines whether this 
region in the spectrum window is currently considered active, usually 
for the purpose of strip plots.
  @param  Anal_AxisRegion self
  @returns   the result
**/
ApiBoolean Anal_AxisRegion_GetIsActive(Anal_AxisRegion self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsActive");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegion: cannot find method 'getIsActive'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegion: method 'getIsActive' is not callable");
  
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
  @param  Anal_AxisRegion self
  @returns   the result
**/
ApiBoolean Anal_AxisRegion_GetIsDeleted(Anal_AxisRegion self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegion: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegion: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccpnmr.Analysis.AxisRegion
  @param  Anal_AxisRegion self
  @returns  Local object key
**/
ApiObject Anal_AxisRegion_GetLocalKey(Anal_AxisRegion self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegion: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegion: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AxisRegion.overrideRegion

Override region, to 
use instead of main region
  @param  Anal_AxisRegion self
  @returns   the result
**/
ApiList Anal_AxisRegion_GetOverrideRegion(Anal_AxisRegion self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getOverrideRegion");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegion: cannot find method 'getOverrideRegion'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegion: method 'getOverrideRegion' is not callable");
  
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
  @param  Anal_AxisRegion self
  @returns   the result
**/
ApiString Anal_AxisRegion_GetPackageName(Anal_AxisRegion self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegion: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegion: method 'getPackageName' is not callable");
  
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
  @param  Anal_AxisRegion self
  @returns   the result
**/
ApiString Anal_AxisRegion_GetPackageShortName(Anal_AxisRegion self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegion: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegion: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AxisRegion.parent

link to parent object - 
synonym for axisPanel
  @param  Anal_AxisRegion self
  @returns   the result
**/
Anal_AxisPanel Anal_AxisRegion_GetParent(Anal_AxisRegion self)
{
  
  Anal_AxisPanel obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegion: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegion: method 'getParent' is not callable");
  
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
  @param  Anal_AxisRegion self
  @returns   the result
**/
ApiString Anal_AxisRegion_GetQualifiedName(Anal_AxisRegion self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegion: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegion: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AxisRegion.region

The region of this axis in 
the units specified by the AxisUnit of the AxisPanel.
  @param  Anal_AxisRegion self
  @returns   the result
**/
ApiList Anal_AxisRegion_GetRegion(Anal_AxisRegion self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRegion");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegion: cannot find method 'getRegion'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegion: method 'getRegion' is not callable");
  
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
  @param  Anal_AxisRegion self
  @returns   the result
**/
Impl_MemopsRoot Anal_AxisRegion_GetRoot(Anal_AxisRegion self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegion: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegion: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AxisRegion.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Anal_AxisRegion self
  @returns   the result
**/
ApiInteger Anal_AxisRegion_GetSerial(Anal_AxisRegion self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegion: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegion: method 'getSerial' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.AxisRegion.size

The size of the region in 
pixels.
  @param  Anal_AxisRegion self
  @returns   the result
**/
ApiInteger Anal_AxisRegion_GetSize(Anal_AxisRegion self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSize");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegion: cannot find method 'getSize'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegion: method 'getSize' is not callable");
  
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
  @param  Anal_AxisRegion self
  @returns   the result
**/
Impl_TopObject Anal_AxisRegion_GetTopObject(Anal_AxisRegion self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegion: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegion: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccpnmr.Analysis.AxisRegion
  @param  Anal_AxisPanel parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anal_AxisRegion Anal_AxisRegion_Init(Anal_AxisPanel parent, ApiMap attrlinks)
{
  
  return Anal_AxisPanel_NewAxisRegion(parent, attrlinks);
}

/**
  Constructor for ccpnmr.Analysis.AxisRegion
  @param  Anal_AxisPanel parent
  @returns  the new object
**/
Anal_AxisRegion Anal_AxisRegion_Init_reqd(Anal_AxisPanel parent)
{
  
  Anal_AxisRegion  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Anal_AxisRegion_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_AxisRegion self
  @param  Impl_ApplicationData value
**/
void *Anal_AxisRegion_RemoveApplicationData(Anal_AxisRegion self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegion: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegion: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccpnmr.Analysis.AxisRegion.overrideRegion

Override region, 
to use instead of main region
  @param  Anal_AxisRegion self
  @param  ApiFloat value
**/
void *Anal_AxisRegion_RemoveOverrideRegion(Anal_AxisRegion self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeOverrideRegion");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegion: cannot find method 'removeOverrideRegion'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegion: method 'removeOverrideRegion' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccpnmr.Analysis.AxisRegion
  @param  Anal_AxisRegion self
  @param  ApiString name
  @param  ApiObject value
**/
void *Anal_AxisRegion_Set(Anal_AxisRegion self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anal_AxisRegion self
  @param  Acco_AccessObject value
**/
void *Anal_AxisRegion_SetAccess(Anal_AxisRegion self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegion: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegion: method 'setAccess' is not callable");
  
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
  @param  Anal_AxisRegion self
  @param  ApiList values
**/
void *Anal_AxisRegion_SetApplicationData(Anal_AxisRegion self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegion: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegion: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AxisRegion.axisRegionGroup

AxisRegionGroup that 
groups AxisRegions
  @param  Anal_AxisRegion self
  @param  Anal_AxisRegionGroup value
**/
void *Anal_AxisRegion_SetAxisRegionGroup(Anal_AxisRegion self, Anal_AxisRegionGroup value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAxisRegionGroup");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegion: cannot find method 'setAxisRegionGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegion: method 'setAxisRegionGroup' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AxisRegion.isActive

Determines whether this 
region in the spectrum window is currently considered active, usually 
for the purpose of strip plots.
  @param  Anal_AxisRegion self
  @param  ApiBoolean value
**/
void *Anal_AxisRegion_SetIsActive(Anal_AxisRegion self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsActive");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegion: cannot find method 'setIsActive'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegion: method 'setIsActive' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AxisRegion.overrideRegion

Override region, to 
use instead of main region
  @param  Anal_AxisRegion self
  @param  ApiList values
**/
void *Anal_AxisRegion_SetOverrideRegion(Anal_AxisRegion self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setOverrideRegion");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegion: cannot find method 'setOverrideRegion'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegion: method 'setOverrideRegion' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AxisRegion.region

The region of this axis in 
the units specified by the AxisUnit of the AxisPanel.
  @param  Anal_AxisRegion self
  @param  ApiList values
**/
void *Anal_AxisRegion_SetRegion(Anal_AxisRegion self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRegion");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegion: cannot find method 'setRegion'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegion: method 'setRegion' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AxisRegion.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Anal_AxisRegion self
  @param  ApiInteger value
**/
void *Anal_AxisRegion_SetSerial(Anal_AxisRegion self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegion: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegion: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.AxisRegion.size

The size of the region in 
pixels.
  @param  Anal_AxisRegion self
  @param  ApiInteger value
**/
void *Anal_AxisRegion_SetSize(Anal_AxisRegion self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSize");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.AxisRegion: cannot find method 'setSize'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.AxisRegion: method 'setSize' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
