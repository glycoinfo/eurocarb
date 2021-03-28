
#include "ccp.h"

/*
  Stores program-specific data. Intended for application-specific extensions to the data model. ApplicationData objects should be used only by the application that wrote them originally. 
  ApplicationData objects all have an attribute 'value' holding the data value. The data type of the value differs between the different subclasses of ApplicationData
*/

/* package memops.api.Implementation */

/**
  Get for memops.Implementation.ApplicationData.application

Name of 
application owning the data.
  @param  Impl_ApplicationData self
  @returns   the result
**/
ApiString Impl_ApplicationData_GetApplication(Impl_ApplicationData self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplication");
  
  if (!method)
    return raiseApiException("memops.Implementation.ApplicationData: cannot find method 'getApplication'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.ApplicationData: method 'getApplication' is not callable");
  
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
  @param  Impl_ApplicationData self
  @returns   the result
**/
ApiString Impl_ApplicationData_GetClassName(Impl_ApplicationData self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("memops.Implementation.ApplicationData: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.ApplicationData: method 'getClassName' is not callable");
  
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
  @param  Impl_ApplicationData self
  @returns   the result
**/
ApiList Impl_ApplicationData_GetFieldNames(Impl_ApplicationData self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("memops.Implementation.ApplicationData: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.ApplicationData: method 'getFieldNames' is not callable");
  
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
  @param  Impl_ApplicationData self
  @returns   the result
**/
ApiBoolean Impl_ApplicationData_GetInConstructor(Impl_ApplicationData self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("memops.Implementation.ApplicationData: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.ApplicationData: method 'getInConstructor' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.ApplicationData.keyword

keyword or name 
of variable
  @param  Impl_ApplicationData self
  @returns   the result
**/
ApiString Impl_ApplicationData_GetKeyword(Impl_ApplicationData self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getKeyword");
  
  if (!method)
    return raiseApiException("memops.Implementation.ApplicationData: cannot find method 'getKeyword'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.ApplicationData: method 'getKeyword' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.MemopsDataTypeObject.override

Overrride 
switch for DataObjType. Works like MemopsRoot.override, but only for the 
object itself. If set to True on creation must be reset to False 
explicitly later. Once set to False can only be reset to True by 
bypassing the API.
  @param  Impl_ApplicationData self
  @returns   the result
**/
ApiBoolean Impl_ApplicationData_GetOverride(Impl_ApplicationData self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getOverride");
  
  if (!method)
    return raiseApiException("memops.Implementation.ApplicationData: cannot find method 'getOverride'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.ApplicationData: method 'getOverride' is not callable");
  
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
  @param  Impl_ApplicationData self
  @returns   the result
**/
ApiString Impl_ApplicationData_GetPackageName(Impl_ApplicationData self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("memops.Implementation.ApplicationData: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.ApplicationData: method 'getPackageName' is not callable");
  
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
  @param  Impl_ApplicationData self
  @returns   the result
**/
ApiString Impl_ApplicationData_GetPackageShortName(Impl_ApplicationData self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("memops.Implementation.ApplicationData: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.ApplicationData: method 'getPackageShortName' is not callable");
  
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
  @param  Impl_ApplicationData self
  @returns   the result
**/
ApiString Impl_ApplicationData_GetQualifiedName(Impl_ApplicationData self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("memops.Implementation.ApplicationData: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.ApplicationData: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.ApplicationData.application

Name of 
application owning the data.
  @param  Impl_ApplicationData self
  @param  ApiString value
**/
void *Impl_ApplicationData_SetApplication(Impl_ApplicationData self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplication");
  
  if (!method)
    return raiseApiException("memops.Implementation.ApplicationData: cannot find method 'setApplication'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.ApplicationData: method 'setApplication' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.ApplicationData.keyword

keyword or name 
of variable
  @param  Impl_ApplicationData self
  @param  ApiString value
**/
void *Impl_ApplicationData_SetKeyword(Impl_ApplicationData self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setKeyword");
  
  if (!method)
    return raiseApiException("memops.Implementation.ApplicationData: cannot find method 'setKeyword'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.ApplicationData: method 'setKeyword' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Gives a string representation of object
  @param  Impl_ApplicationData self
  @returns  
**/
ApiString Impl_ApplicationData_ToString(Impl_ApplicationData self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "toString");
  
  if (!method)
    return raiseApiException("memops.Implementation.ApplicationData: cannot find method 'toString'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.ApplicationData: method 'toString' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
