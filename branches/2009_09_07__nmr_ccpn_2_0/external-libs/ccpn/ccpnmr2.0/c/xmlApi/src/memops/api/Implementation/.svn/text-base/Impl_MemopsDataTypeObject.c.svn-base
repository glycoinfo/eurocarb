
#include "ccp.h"

/*
  Superclass for DataObjTypes
*/

/* package memops.api.Implementation */

/**
  removes DataObj from override status
  @param  Impl_MemopsDataTypeObject self
**/
void *Impl_MemopsDataTypeObject_EndOverride(Impl_MemopsDataTypeObject self)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "endOverride");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsDataTypeObject: cannot find method 'endOverride'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsDataTypeObject: method 'endOverride' is not callable");
  
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
  @param  Impl_MemopsDataTypeObject self
  @returns   the result
**/
ApiString Impl_MemopsDataTypeObject_GetClassName(Impl_MemopsDataTypeObject self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsDataTypeObject: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsDataTypeObject: method 'getClassName' is not callable");
  
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
  @param  Impl_MemopsDataTypeObject self
  @returns   the result
**/
ApiList Impl_MemopsDataTypeObject_GetFieldNames(Impl_MemopsDataTypeObject self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsDataTypeObject: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsDataTypeObject: method 'getFieldNames' is not callable");
  
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
  @param  Impl_MemopsDataTypeObject self
  @returns   the result
**/
ApiBoolean Impl_MemopsDataTypeObject_GetInConstructor(Impl_MemopsDataTypeObject self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsDataTypeObject: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsDataTypeObject: method 'getInConstructor' is not callable");
  
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
  @param  Impl_MemopsDataTypeObject self
  @returns   the result
**/
ApiBoolean Impl_MemopsDataTypeObject_GetOverride(Impl_MemopsDataTypeObject self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getOverride");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsDataTypeObject: cannot find method 'getOverride'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsDataTypeObject: method 'getOverride' is not callable");
  
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
  @param  Impl_MemopsDataTypeObject self
  @returns   the result
**/
ApiString Impl_MemopsDataTypeObject_GetPackageName(Impl_MemopsDataTypeObject self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsDataTypeObject: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsDataTypeObject: method 'getPackageName' is not callable");
  
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
  @param  Impl_MemopsDataTypeObject self
  @returns   the result
**/
ApiString Impl_MemopsDataTypeObject_GetPackageShortName(Impl_MemopsDataTypeObject self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsDataTypeObject: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsDataTypeObject: method 'getPackageShortName' is not callable");
  
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
  @param  Impl_MemopsDataTypeObject self
  @returns   the result
**/
ApiString Impl_MemopsDataTypeObject_GetQualifiedName(Impl_MemopsDataTypeObject self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsDataTypeObject: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsDataTypeObject: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Gives a string representation of object
  @param  Impl_MemopsDataTypeObject self
  @returns  
**/
ApiString Impl_MemopsDataTypeObject_ToString(Impl_MemopsDataTypeObject self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "toString");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsDataTypeObject: cannot find method 'toString'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsDataTypeObject: method 'toString' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
