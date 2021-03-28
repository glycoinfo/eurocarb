
#include "ccp.h"

/*
  Long Int type application data.
*/

/* package memops.api.Implementation */

/**
  CheckAllValid for memops.Implementation.AppDataLong
  @param  Impl_AppDataLong self
  @param  ApiBoolean complete
**/
void *Impl_AppDataLong_CheckAllValid(Impl_AppDataLong self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("memops.Implementation.AppDataLong: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.AppDataLong: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for memops.Implementation.AppDataLong
  @param  Impl_AppDataLong self
  @param  ApiBoolean complete
**/
void *Impl_AppDataLong_CheckValid(Impl_AppDataLong self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("memops.Implementation.AppDataLong: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.AppDataLong: method 'checkValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetAttr for memops.Implementation.AppDataLong
  @param  Impl_AppDataLong self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Impl_AppDataLong_Get(Impl_AppDataLong self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.ApplicationData.application

Name of 
application owning the data.
  @param  Impl_AppDataLong self
  @returns   the result
**/
ApiString Impl_AppDataLong_GetApplication(Impl_AppDataLong self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplication");
  
  if (!method)
    return raiseApiException("memops.Implementation.AppDataLong: cannot find method 'getApplication'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.AppDataLong: method 'getApplication' is not callable");
  
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
  @param  Impl_AppDataLong self
  @returns   the result
**/
ApiString Impl_AppDataLong_GetClassName(Impl_AppDataLong self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("memops.Implementation.AppDataLong: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.AppDataLong: method 'getClassName' is not callable");
  
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
  @param  Impl_AppDataLong self
  @returns   the result
**/
ApiList Impl_AppDataLong_GetFieldNames(Impl_AppDataLong self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("memops.Implementation.AppDataLong: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.AppDataLong: method 'getFieldNames' is not callable");
  
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
  @param  Impl_AppDataLong self
  @returns   the result
**/
ApiBoolean Impl_AppDataLong_GetInConstructor(Impl_AppDataLong self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("memops.Implementation.AppDataLong: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.AppDataLong: method 'getInConstructor' is not callable");
  
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
  @param  Impl_AppDataLong self
  @returns   the result
**/
ApiString Impl_AppDataLong_GetKeyword(Impl_AppDataLong self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getKeyword");
  
  if (!method)
    return raiseApiException("memops.Implementation.AppDataLong: cannot find method 'getKeyword'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.AppDataLong: method 'getKeyword' is not callable");
  
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
  @param  Impl_AppDataLong self
  @returns   the result
**/
ApiBoolean Impl_AppDataLong_GetOverride(Impl_AppDataLong self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getOverride");
  
  if (!method)
    return raiseApiException("memops.Implementation.AppDataLong: cannot find method 'getOverride'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.AppDataLong: method 'getOverride' is not callable");
  
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
  @param  Impl_AppDataLong self
  @returns   the result
**/
ApiString Impl_AppDataLong_GetPackageName(Impl_AppDataLong self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("memops.Implementation.AppDataLong: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.AppDataLong: method 'getPackageName' is not callable");
  
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
  @param  Impl_AppDataLong self
  @returns   the result
**/
ApiString Impl_AppDataLong_GetPackageShortName(Impl_AppDataLong self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("memops.Implementation.AppDataLong: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.AppDataLong: method 'getPackageShortName' is not callable");
  
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
  @param  Impl_AppDataLong self
  @returns   the result
**/
ApiString Impl_AppDataLong_GetQualifiedName(Impl_AppDataLong self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("memops.Implementation.AppDataLong: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.AppDataLong: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.AppDataLong.value

Data value
  @param  Impl_AppDataLong self
  @returns   the result
**/
ApiLong Impl_AppDataLong_GetValue(Impl_AppDataLong self)
{
  
  ApiLong obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getValue");
  
  if (!method)
    return raiseApiException("memops.Implementation.AppDataLong: cannot find method 'getValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.AppDataLong: method 'getValue' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for memops.Implementation.AppDataLong
  @param  ApiMap attrlinks
  @returns  the new object
**/
Impl_AppDataLong Impl_AppDataLong_Init(ApiMap attrlinks)
{
  
  Impl_AppDataLong  obj;
  PyObject *module, *moduleDict, *clazz, *args;
  
  if (!Py_IsInitialized())
    Py_Initialize();
  
  module = PyImport_ImportModule("memops.api.Implementation");
  if (!module)
    return raiseApiException("memops.Implementation.AppDataLong.init: cannot find module memops.api.Implementation");
  moduleDict = PyModule_GetDict(module);
  if (!moduleDict)
    return raiseApiException("memops.Implementation.AppDataLong.init: cannot find dict for memops.api.Implementation");
  clazz = PyDict_GetItemString(moduleDict, "AppDataLong");
  if (!clazz)
    return raiseApiException("memops.Implementation.AppDataLong.init: cannot find memops.api.Implementation.AppDataLong");
  
  args = PyTuple_Pack(0);
  obj = PyObject_Call(clazz, args, attrlinks);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for memops.Implementation.AppDataLong
  @param  char * application
  @param  char * keyword
  @param  long value
  @returns  the new object
**/
Impl_AppDataLong Impl_AppDataLong_Init_reqd(char * application, char * keyword, long value)
{
  
  Impl_AppDataLong  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__application = ApiString_New(application);
  ApiString api__keyword = ApiString_New(keyword);
  ApiLong api__value = ApiLong_New(value);

  PyDict_SetItemString(attrlinks, "application", api__application);
  PyDict_SetItemString(attrlinks, "keyword", api__keyword);
  PyDict_SetItemString(attrlinks, "value", api__value);
  
  obj = Impl_AppDataLong_Init(attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__application);
  Py_DECREF(api__keyword);
  Py_DECREF(api__value);
  
  return obj;
}

/**
  SetAttr for memops.Implementation.AppDataLong
  @param  Impl_AppDataLong self
  @param  ApiString name
  @param  ApiObject value
**/
void *Impl_AppDataLong_Set(Impl_AppDataLong self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.ApplicationData.application

Name of 
application owning the data.
  @param  Impl_AppDataLong self
  @param  ApiString value
**/
void *Impl_AppDataLong_SetApplication(Impl_AppDataLong self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplication");
  
  if (!method)
    return raiseApiException("memops.Implementation.AppDataLong: cannot find method 'setApplication'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.AppDataLong: method 'setApplication' is not callable");
  
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
  @param  Impl_AppDataLong self
  @param  ApiString value
**/
void *Impl_AppDataLong_SetKeyword(Impl_AppDataLong self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setKeyword");
  
  if (!method)
    return raiseApiException("memops.Implementation.AppDataLong: cannot find method 'setKeyword'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.AppDataLong: method 'setKeyword' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.AppDataLong.value

Data value
  @param  Impl_AppDataLong self
  @param  ApiLong value
**/
void *Impl_AppDataLong_SetValue(Impl_AppDataLong self, ApiLong value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setValue");
  
  if (!method)
    return raiseApiException("memops.Implementation.AppDataLong: cannot find method 'setValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.AppDataLong: method 'setValue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Gives a string representation of object
  @param  Impl_AppDataLong self
  @returns  
**/
ApiString Impl_AppDataLong_ToString(Impl_AppDataLong self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "toString");
  
  if (!method)
    return raiseApiException("memops.Implementation.AppDataLong: cannot find method 'toString'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.AppDataLong: method 'toString' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
