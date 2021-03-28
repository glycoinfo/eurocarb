
#include "ccp.h"

/*
  
*/

/* package ccp.api.general.Template */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Temp_MultiTypesValue self
  @param  Impl_ApplicationData value
**/
void *Temp_MultiTypesValue_AddApplicationData(Temp_MultiTypesValue self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Template.MultiTypesValue: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Template.MultiTypesValue: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.general.Template.MultiTypesValue.intValues

Int values list
  @param  Temp_MultiTypesValue self
  @param  ApiInteger value
**/
void *Temp_MultiTypesValue_AddIntValue(Temp_MultiTypesValue self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addIntValue");
  
  if (!method)
    return raiseApiException("ccp.general.Template.MultiTypesValue: cannot find method 'addIntValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Template.MultiTypesValue: method 'addIntValue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.general.Template.MultiTypesValue.textValues

text values (NB 
type Line)
  @param  Temp_MultiTypesValue self
  @param  ApiString value
**/
void *Temp_MultiTypesValue_AddTextValue(Temp_MultiTypesValue self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addTextValue");
  
  if (!method)
    return raiseApiException("ccp.general.Template.MultiTypesValue: cannot find method 'addTextValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Template.MultiTypesValue: method 'addTextValue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
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
  @param  Temp_MultiTypesValue self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Temp_MultiTypesValue_FindAllApplicationData(Temp_MultiTypesValue self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Template.MultiTypesValue: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Template.MultiTypesValue: method 'findAllApplicationData' is not callable");
  
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
  @param  Temp_MultiTypesValue self
  @returns  all value that satisfy the conditions 
**/
ApiList Temp_MultiTypesValue_FindAllApplicationData_keyval0(Temp_MultiTypesValue self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Temp_MultiTypesValue_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Temp_MultiTypesValue self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Temp_MultiTypesValue_FindAllApplicationData_keyval1(Temp_MultiTypesValue self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Temp_MultiTypesValue_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Temp_MultiTypesValue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Temp_MultiTypesValue_FindAllApplicationData_keyval2(Temp_MultiTypesValue self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Temp_MultiTypesValue_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Temp_MultiTypesValue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Temp_MultiTypesValue_FindAllApplicationData_keyval3(Temp_MultiTypesValue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Temp_MultiTypesValue_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Temp_MultiTypesValue self
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
ApiList Temp_MultiTypesValue_FindAllApplicationData_keyval4(Temp_MultiTypesValue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Temp_MultiTypesValue_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Temp_MultiTypesValue self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Temp_MultiTypesValue_FindFirstApplicationData(Temp_MultiTypesValue self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Template.MultiTypesValue: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Template.MultiTypesValue: method 'findFirstApplicationData' is not callable");
  
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
  @param  Temp_MultiTypesValue self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Temp_MultiTypesValue_FindFirstApplicationData_keyval0(Temp_MultiTypesValue self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Temp_MultiTypesValue_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Temp_MultiTypesValue self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Temp_MultiTypesValue_FindFirstApplicationData_keyval1(Temp_MultiTypesValue self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Temp_MultiTypesValue_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Temp_MultiTypesValue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Temp_MultiTypesValue_FindFirstApplicationData_keyval2(Temp_MultiTypesValue self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Temp_MultiTypesValue_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Temp_MultiTypesValue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Temp_MultiTypesValue_FindFirstApplicationData_keyval3(Temp_MultiTypesValue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Temp_MultiTypesValue_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Temp_MultiTypesValue self
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
Impl_ApplicationData Temp_MultiTypesValue_FindFirstApplicationData_keyval4(Temp_MultiTypesValue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Temp_MultiTypesValue_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Temp_MultiTypesValue self
  @returns   the result
**/
Acco_AccessObject Temp_MultiTypesValue_GetAccess(Temp_MultiTypesValue self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.general.Template.MultiTypesValue: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Template.MultiTypesValue: method 'getAccess' is not callable");
  
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
  @param  Temp_MultiTypesValue self
  @returns   the result
**/
ApiList Temp_MultiTypesValue_GetApplicationData(Temp_MultiTypesValue self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Template.MultiTypesValue: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Template.MultiTypesValue: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Template.MultiTypesValue.boolValues

Boolean values 
list
  @param  Temp_MultiTypesValue self
  @returns   the result
**/
ApiBoolean Temp_MultiTypesValue_GetBoolValues(Temp_MultiTypesValue self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getBoolValues");
  
  if (!method)
    return raiseApiException("ccp.general.Template.MultiTypesValue: cannot find method 'getBoolValues'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Template.MultiTypesValue: method 'getBoolValues' is not callable");
  
  args = PyTuple_New(0);
  
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
  @param  Temp_MultiTypesValue self
  @returns   the result
**/
ApiString Temp_MultiTypesValue_GetClassName(Temp_MultiTypesValue self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.general.Template.MultiTypesValue: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Template.MultiTypesValue: method 'getClassName' is not callable");
  
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
  @param  Temp_MultiTypesValue self
  @returns   the result
**/
ApiList Temp_MultiTypesValue_GetFieldNames(Temp_MultiTypesValue self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.general.Template.MultiTypesValue: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Template.MultiTypesValue: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Template.MultiTypesValue.floatValues

float values 
list
  @param  Temp_MultiTypesValue self
  @returns   the result
**/
ApiFloat Temp_MultiTypesValue_GetFloatValues(Temp_MultiTypesValue self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFloatValues");
  
  if (!method)
    return raiseApiException("ccp.general.Template.MultiTypesValue: cannot find method 'getFloatValues'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Template.MultiTypesValue: method 'getFloatValues' is not callable");
  
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
  @param  Temp_MultiTypesValue self
  @returns   the result
**/
ApiBoolean Temp_MultiTypesValue_GetInConstructor(Temp_MultiTypesValue self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.general.Template.MultiTypesValue: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Template.MultiTypesValue: method 'getInConstructor' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Template.MultiTypesValue.intValues

Int values list
  @param  Temp_MultiTypesValue self
  @returns   the result
**/
ApiList Temp_MultiTypesValue_GetIntValues(Temp_MultiTypesValue self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIntValues");
  
  if (!method)
    return raiseApiException("ccp.general.Template.MultiTypesValue: cannot find method 'getIntValues'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Template.MultiTypesValue: method 'getIntValues' is not callable");
  
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
  @param  Temp_MultiTypesValue self
  @returns   the result
**/
ApiBoolean Temp_MultiTypesValue_GetIsDeleted(Temp_MultiTypesValue self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.general.Template.MultiTypesValue: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Template.MultiTypesValue: method 'getIsDeleted' is not callable");
  
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
  @param  Temp_MultiTypesValue self
  @returns   the result
**/
ApiString Temp_MultiTypesValue_GetPackageName(Temp_MultiTypesValue self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.general.Template.MultiTypesValue: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Template.MultiTypesValue: method 'getPackageName' is not callable");
  
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
  @param  Temp_MultiTypesValue self
  @returns   the result
**/
ApiString Temp_MultiTypesValue_GetPackageShortName(Temp_MultiTypesValue self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.general.Template.MultiTypesValue: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Template.MultiTypesValue: method 'getPackageShortName' is not callable");
  
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
  @param  Temp_MultiTypesValue self
  @returns   the result
**/
ApiString Temp_MultiTypesValue_GetQualifiedName(Temp_MultiTypesValue self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.general.Template.MultiTypesValue: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Template.MultiTypesValue: method 'getQualifiedName' is not callable");
  
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
  @param  Temp_MultiTypesValue self
  @returns   the result
**/
Impl_MemopsRoot Temp_MultiTypesValue_GetRoot(Temp_MultiTypesValue self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.general.Template.MultiTypesValue: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Template.MultiTypesValue: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Template.MultiTypesValue.textValues

text values (NB 
type Line)
  @param  Temp_MultiTypesValue self
  @returns   the result
**/
ApiList Temp_MultiTypesValue_GetTextValues(Temp_MultiTypesValue self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTextValues");
  
  if (!method)
    return raiseApiException("ccp.general.Template.MultiTypesValue: cannot find method 'getTextValues'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Template.MultiTypesValue: method 'getTextValues' is not callable");
  
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
  @param  Temp_MultiTypesValue self
  @returns   the result
**/
Impl_TopObject Temp_MultiTypesValue_GetTopObject(Temp_MultiTypesValue self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.general.Template.MultiTypesValue: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Template.MultiTypesValue: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Temp_MultiTypesValue self
  @param  Impl_ApplicationData value
**/
void *Temp_MultiTypesValue_RemoveApplicationData(Temp_MultiTypesValue self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Template.MultiTypesValue: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Template.MultiTypesValue: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.general.Template.MultiTypesValue.intValues

Int values 
list
  @param  Temp_MultiTypesValue self
  @param  ApiInteger value
**/
void *Temp_MultiTypesValue_RemoveIntValue(Temp_MultiTypesValue self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeIntValue");
  
  if (!method)
    return raiseApiException("ccp.general.Template.MultiTypesValue: cannot find method 'removeIntValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Template.MultiTypesValue: method 'removeIntValue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.general.Template.MultiTypesValue.textValues

text values 
(NB type Line)
  @param  Temp_MultiTypesValue self
  @param  ApiString value
**/
void *Temp_MultiTypesValue_RemoveTextValue(Temp_MultiTypesValue self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeTextValue");
  
  if (!method)
    return raiseApiException("ccp.general.Template.MultiTypesValue: cannot find method 'removeTextValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Template.MultiTypesValue: method 'removeTextValue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Temp_MultiTypesValue self
  @param  Acco_AccessObject value
**/
void *Temp_MultiTypesValue_SetAccess(Temp_MultiTypesValue self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.general.Template.MultiTypesValue: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Template.MultiTypesValue: method 'setAccess' is not callable");
  
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
  @param  Temp_MultiTypesValue self
  @param  ApiList values
**/
void *Temp_MultiTypesValue_SetApplicationData(Temp_MultiTypesValue self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Template.MultiTypesValue: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Template.MultiTypesValue: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Template.MultiTypesValue.boolValues

Boolean values 
list
  @param  Temp_MultiTypesValue self
  @param  ApiBoolean value
**/
void *Temp_MultiTypesValue_SetBoolValues(Temp_MultiTypesValue self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setBoolValues");
  
  if (!method)
    return raiseApiException("ccp.general.Template.MultiTypesValue: cannot find method 'setBoolValues'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Template.MultiTypesValue: method 'setBoolValues' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Template.MultiTypesValue.floatValues

float values 
list
  @param  Temp_MultiTypesValue self
  @param  ApiFloat value
**/
void *Temp_MultiTypesValue_SetFloatValues(Temp_MultiTypesValue self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setFloatValues");
  
  if (!method)
    return raiseApiException("ccp.general.Template.MultiTypesValue: cannot find method 'setFloatValues'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Template.MultiTypesValue: method 'setFloatValues' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Template.MultiTypesValue.intValues

Int values list
  @param  Temp_MultiTypesValue self
  @param  ApiList values
**/
void *Temp_MultiTypesValue_SetIntValues(Temp_MultiTypesValue self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIntValues");
  
  if (!method)
    return raiseApiException("ccp.general.Template.MultiTypesValue: cannot find method 'setIntValues'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Template.MultiTypesValue: method 'setIntValues' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Template.MultiTypesValue.textValues

text values (NB 
type Line)
  @param  Temp_MultiTypesValue self
  @param  ApiList values
**/
void *Temp_MultiTypesValue_SetTextValues(Temp_MultiTypesValue self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setTextValues");
  
  if (!method)
    return raiseApiException("ccp.general.Template.MultiTypesValue: cannot find method 'setTextValues'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Template.MultiTypesValue: method 'setTextValues' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
