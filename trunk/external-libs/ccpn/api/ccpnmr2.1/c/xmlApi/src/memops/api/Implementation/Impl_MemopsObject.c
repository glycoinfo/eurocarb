
#include "ccp.h"

/*
  Base class for Memops data model classes. 
  Contains elements common to all classes, e.g. the link to ApplicationData, and the root and parent links. 
*/

/* package memops.api.Implementation */

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Impl_MemopsObject self
  @returns   the result
**/
ApiString Impl_MemopsObject_GetClassName(Impl_MemopsObject self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsObject: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsObject: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  get expanded (object-free) versio of full key, for comparing objects 
from different trees.
  @param  Impl_MemopsObject self
  @returns  
**/
ApiList Impl_MemopsObject_GetExpandedKey(Impl_MemopsObject self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExpandedKey");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsObject: cannot find method 'getExpandedKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsObject: method 'getExpandedKey' is not callable");
  
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
  @param  Impl_MemopsObject self
  @returns   the result
**/
ApiList Impl_MemopsObject_GetFieldNames(Impl_MemopsObject self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsObject: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsObject: method 'getFieldNames' is not callable");
  
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
  @param  Impl_MemopsObject self
  @returns   the result
**/
ApiBoolean Impl_MemopsObject_GetInConstructor(Impl_MemopsObject self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsObject: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsObject: method 'getInConstructor' is not callable");
  
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
  @param  Impl_MemopsObject self
  @returns   the result
**/
ApiBoolean Impl_MemopsObject_GetIsDeleted(Impl_MemopsObject self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsObject: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsObject: method 'getIsDeleted' is not callable");
  
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
  @param  Impl_MemopsObject self
  @returns   the result
**/
ApiString Impl_MemopsObject_GetPackageName(Impl_MemopsObject self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsObject: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsObject: method 'getPackageName' is not callable");
  
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
  @param  Impl_MemopsObject self
  @returns   the result
**/
ApiString Impl_MemopsObject_GetPackageShortName(Impl_MemopsObject self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsObject: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsObject: method 'getPackageShortName' is not callable");
  
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
  @param  Impl_MemopsObject self
  @returns   the result
**/
ApiString Impl_MemopsObject_GetQualifiedName(Impl_MemopsObject self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsObject: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsObject: method 'getQualifiedName' is not callable");
  
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
  @param  Impl_MemopsObject self
  @returns   the result
**/
Impl_MemopsRoot Impl_MemopsObject_GetRoot(Impl_MemopsObject self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsObject: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsObject: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Gives a string representation of object
  @param  Impl_MemopsObject self
  @returns  
**/
ApiString Impl_MemopsObject_ToString(Impl_MemopsObject self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "toString");
  
  if (!method)
    return raiseApiException("memops.Implementation.MemopsObject: cannot find method 'toString'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.MemopsObject: method 'toString' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
