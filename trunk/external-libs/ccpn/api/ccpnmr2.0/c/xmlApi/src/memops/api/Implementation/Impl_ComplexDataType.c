
#include "ccp.h"

/*
  Topmost Superclass of both classes and complex datatype objects. Contains some implementation attributes
*/

/* package memops.api.Implementation */

/**
  CheckAllValid for memops.Implementation.ComplexDataType
  @param  Impl_ComplexDataType self
  @param  ApiBoolean complete
**/
void *Impl_ComplexDataType_CheckAllValid(Impl_ComplexDataType self, ApiBoolean complete)
{
}

/**
  CheckValid for memops.Implementation.ComplexDataType
  @param  Impl_ComplexDataType self
  @param  ApiBoolean complete
**/
void *Impl_ComplexDataType_CheckValid(Impl_ComplexDataType self, ApiBoolean complete)
{
}

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Impl_ComplexDataType self
  @returns   the result
**/
ApiString Impl_ComplexDataType_GetClassName(Impl_ComplexDataType self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("memops.Implementation.ComplexDataType: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.ComplexDataType: method 'getClassName' is not callable");
  
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
  @param  Impl_ComplexDataType self
  @returns   the result
**/
ApiList Impl_ComplexDataType_GetFieldNames(Impl_ComplexDataType self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("memops.Implementation.ComplexDataType: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.ComplexDataType: method 'getFieldNames' is not callable");
  
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
  @param  Impl_ComplexDataType self
  @returns   the result
**/
ApiBoolean Impl_ComplexDataType_GetInConstructor(Impl_ComplexDataType self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("memops.Implementation.ComplexDataType: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.ComplexDataType: method 'getInConstructor' is not callable");
  
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
  @param  Impl_ComplexDataType self
  @returns   the result
**/
ApiString Impl_ComplexDataType_GetPackageName(Impl_ComplexDataType self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("memops.Implementation.ComplexDataType: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.ComplexDataType: method 'getPackageName' is not callable");
  
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
  @param  Impl_ComplexDataType self
  @returns   the result
**/
ApiString Impl_ComplexDataType_GetPackageShortName(Impl_ComplexDataType self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("memops.Implementation.ComplexDataType: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.ComplexDataType: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived attribute qualifiedName
  @param  Impl_ComplexDataType self
  @returns   the result
**/
ApiString Impl_ComplexDataType_GetQualifiedName(Impl_ComplexDataType self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("memops.Implementation.ComplexDataType: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.ComplexDataType: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Return object with all its contents as a detailed, multiline string
  @param  Impl_ComplexDataType self
  @returns  
**/
ApiString Impl_ComplexDataType_ToDetailedString(Impl_ComplexDataType self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "toDetailedString");
  
  if (!method)
    return raiseApiException("memops.Implementation.ComplexDataType: cannot find method 'toDetailedString'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.ComplexDataType: method 'toDetailedString' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Gives a string representation of object
  @param  Impl_ComplexDataType self
  @returns  
**/
ApiString Impl_ComplexDataType_ToString(Impl_ComplexDataType self)
{
}
