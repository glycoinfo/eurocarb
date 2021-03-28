
#include "ccp.h"

/*
  Graphical objects which correspond to one dimension, e.g. the scrollbars and 1D slices.
*/

/* package ccpnmr.api.Analysis */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SidePanel self
  @param  Impl_ApplicationData value
**/
void *Anal_SidePanel_AddApplicationData(Anal_SidePanel self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SidePanel: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SidePanel: method 'addApplicationData' is not callable");
  
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
  @param  Anal_SidePanel self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_SidePanel_FindAllApplicationData(Anal_SidePanel self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SidePanel: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SidePanel: method 'findAllApplicationData' is not callable");
  
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
  @param  Anal_SidePanel self
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_SidePanel_FindAllApplicationData_keyval0(Anal_SidePanel self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_SidePanel_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SidePanel self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_SidePanel_FindAllApplicationData_keyval1(Anal_SidePanel self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_SidePanel_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SidePanel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_SidePanel_FindAllApplicationData_keyval2(Anal_SidePanel self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_SidePanel_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SidePanel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Anal_SidePanel_FindAllApplicationData_keyval3(Anal_SidePanel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_SidePanel_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SidePanel self
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
ApiList Anal_SidePanel_FindAllApplicationData_keyval4(Anal_SidePanel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_SidePanel_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SidePanel self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_SidePanel_FindFirstApplicationData(Anal_SidePanel self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SidePanel: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SidePanel: method 'findFirstApplicationData' is not callable");
  
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
  @param  Anal_SidePanel self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_SidePanel_FindFirstApplicationData_keyval0(Anal_SidePanel self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anal_SidePanel_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SidePanel self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_SidePanel_FindFirstApplicationData_keyval1(Anal_SidePanel self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anal_SidePanel_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SidePanel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_SidePanel_FindFirstApplicationData_keyval2(Anal_SidePanel self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anal_SidePanel_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SidePanel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anal_SidePanel_FindFirstApplicationData_keyval3(Anal_SidePanel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anal_SidePanel_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anal_SidePanel self
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
Impl_ApplicationData Anal_SidePanel_FindFirstApplicationData_keyval4(Anal_SidePanel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anal_SidePanel_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anal_SidePanel self
  @returns   the result
**/
Acco_AccessObject Anal_SidePanel_GetAccess(Anal_SidePanel self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SidePanel: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SidePanel: method 'getAccess' is not callable");
  
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
  @param  Anal_SidePanel self
  @returns   the result
**/
ApiList Anal_SidePanel_GetApplicationData(Anal_SidePanel self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SidePanel: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SidePanel: method 'getApplicationData' is not callable");
  
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
  @param  Anal_SidePanel self
  @returns   the result
**/
ApiString Anal_SidePanel_GetClassName(Anal_SidePanel self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SidePanel: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SidePanel: method 'getClassName' is not callable");
  
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
  @param  Anal_SidePanel self
  @returns   the result
**/
ApiList Anal_SidePanel_GetFieldNames(Anal_SidePanel self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SidePanel: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SidePanel: method 'getFieldNames' is not callable");
  
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
  @param  Anal_SidePanel self
  @returns   the result
**/
ApiBoolean Anal_SidePanel_GetInConstructor(Anal_SidePanel self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SidePanel: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SidePanel: method 'getInConstructor' is not callable");
  
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
  @param  Anal_SidePanel self
  @returns   the result
**/
ApiBoolean Anal_SidePanel_GetIsDeleted(Anal_SidePanel self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SidePanel: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SidePanel: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.SidePanel.isVisible

Whether or not visible in 
the display
  @param  Anal_SidePanel self
  @returns   the result
**/
ApiBoolean Anal_SidePanel_GetIsVisible(Anal_SidePanel self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsVisible");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SidePanel: cannot find method 'getIsVisible'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SidePanel: method 'getIsVisible' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.SidePanel.label

enum. 'x', 'y', 'z1', ...
  @param  Anal_SidePanel self
  @returns   the result
**/
ApiString Anal_SidePanel_GetLabel(Anal_SidePanel self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLabel");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SidePanel: cannot find method 'getLabel'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SidePanel: method 'getLabel' is not callable");
  
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
  @param  Anal_SidePanel self
  @returns   the result
**/
ApiString Anal_SidePanel_GetPackageName(Anal_SidePanel self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SidePanel: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SidePanel: method 'getPackageName' is not callable");
  
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
  @param  Anal_SidePanel self
  @returns   the result
**/
ApiString Anal_SidePanel_GetPackageShortName(Anal_SidePanel self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SidePanel: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SidePanel: method 'getPackageShortName' is not callable");
  
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
  @param  Anal_SidePanel self
  @returns   the result
**/
ApiString Anal_SidePanel_GetQualifiedName(Anal_SidePanel self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SidePanel: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SidePanel: method 'getQualifiedName' is not callable");
  
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
  @param  Anal_SidePanel self
  @returns   the result
**/
Impl_MemopsRoot Anal_SidePanel_GetRoot(Anal_SidePanel self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SidePanel: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SidePanel: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccpnmr.Analysis.SidePanel.thickness

Graphical width of panel in 
pixels
  @param  Anal_SidePanel self
  @returns   the result
**/
ApiInteger Anal_SidePanel_GetThickness(Anal_SidePanel self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getThickness");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SidePanel: cannot find method 'getThickness'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SidePanel: method 'getThickness' is not callable");
  
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
  @param  Anal_SidePanel self
  @returns   the result
**/
Impl_TopObject Anal_SidePanel_GetTopObject(Anal_SidePanel self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SidePanel: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SidePanel: method 'getTopObject' is not callable");
  
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
  @param  Anal_SidePanel self
  @param  Impl_ApplicationData value
**/
void *Anal_SidePanel_RemoveApplicationData(Anal_SidePanel self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SidePanel: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SidePanel: method 'removeApplicationData' is not callable");
  
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
  @param  Anal_SidePanel self
  @param  Acco_AccessObject value
**/
void *Anal_SidePanel_SetAccess(Anal_SidePanel self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SidePanel: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SidePanel: method 'setAccess' is not callable");
  
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
  @param  Anal_SidePanel self
  @param  ApiList values
**/
void *Anal_SidePanel_SetApplicationData(Anal_SidePanel self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SidePanel: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SidePanel: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.SidePanel.isVisible

Whether or not visible in 
the display
  @param  Anal_SidePanel self
  @param  ApiBoolean value
**/
void *Anal_SidePanel_SetIsVisible(Anal_SidePanel self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsVisible");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SidePanel: cannot find method 'setIsVisible'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SidePanel: method 'setIsVisible' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.SidePanel.label

enum. 'x', 'y', 'z1', ...
  @param  Anal_SidePanel self
  @param  ApiString value
**/
void *Anal_SidePanel_SetLabel(Anal_SidePanel self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLabel");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SidePanel: cannot find method 'setLabel'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SidePanel: method 'setLabel' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccpnmr.Analysis.SidePanel.thickness

Graphical width of panel in 
pixels
  @param  Anal_SidePanel self
  @param  ApiInteger value
**/
void *Anal_SidePanel_SetThickness(Anal_SidePanel self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setThickness");
  
  if (!method)
    return raiseApiException("ccpnmr.Analysis.SidePanel: cannot find method 'setThickness'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccpnmr.Analysis.SidePanel: method 'setThickness' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
