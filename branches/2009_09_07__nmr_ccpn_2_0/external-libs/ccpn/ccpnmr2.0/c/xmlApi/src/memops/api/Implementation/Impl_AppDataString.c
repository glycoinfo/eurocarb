
#include "ccp.h"

/*
  String type application data.
*/

/* package memops.api.Implementation */

/**
  CheckAllValid for memops.Implementation.AppDataString
  @param  Impl_AppDataString self
  @param  ApiBoolean complete
**/
void *Impl_AppDataString_CheckAllValid(Impl_AppDataString self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("memops.Implementation.AppDataString: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.AppDataString: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for memops.Implementation.AppDataString
  @param  Impl_AppDataString self
  @param  ApiBoolean complete
**/
void *Impl_AppDataString_CheckValid(Impl_AppDataString self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("memops.Implementation.AppDataString: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.AppDataString: method 'checkValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetAttr for memops.Implementation.AppDataString
  @param  Impl_AppDataString self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Impl_AppDataString_Get(Impl_AppDataString self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.ApplicationData.application

Name of 
application owning the data.
  @param  Impl_AppDataString self
  @returns   the result
**/
ApiString Impl_AppDataString_GetApplication(Impl_AppDataString self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplication");
  
  if (!method)
    return raiseApiException("memops.Implementation.AppDataString: cannot find method 'getApplication'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.AppDataString: method 'getApplication' is not callable");
  
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
  @param  Impl_AppDataString self
  @returns   the result
**/
ApiString Impl_AppDataString_GetClassName(Impl_AppDataString self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("memops.Implementation.AppDataString: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.AppDataString: method 'getClassName' is not callable");
  
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
  @param  Impl_AppDataString self
  @returns   the result
**/
ApiList Impl_AppDataString_GetFieldNames(Impl_AppDataString self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("memops.Implementation.AppDataString: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.AppDataString: method 'getFieldNames' is not callable");
  
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
  @param  Impl_AppDataString self
  @returns   the result
**/
ApiBoolean Impl_AppDataString_GetInConstructor(Impl_AppDataString self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("memops.Implementation.AppDataString: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.AppDataString: method 'getInConstructor' is not callable");
  
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
  @param  Impl_AppDataString self
  @returns   the result
**/
ApiString Impl_AppDataString_GetKeyword(Impl_AppDataString self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getKeyword");
  
  if (!method)
    return raiseApiException("memops.Implementation.AppDataString: cannot find method 'getKeyword'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.AppDataString: method 'getKeyword' is not callable");
  
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
  @param  Impl_AppDataString self
  @returns   the result
**/
ApiBoolean Impl_AppDataString_GetOverride(Impl_AppDataString self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getOverride");
  
  if (!method)
    return raiseApiException("memops.Implementation.AppDataString: cannot find method 'getOverride'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.AppDataString: method 'getOverride' is not callable");
  
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
  @param  Impl_AppDataString self
  @returns   the result
**/
ApiString Impl_AppDataString_GetPackageName(Impl_AppDataString self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("memops.Implementation.AppDataString: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.AppDataString: method 'getPackageName' is not callable");
  
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
  @param  Impl_AppDataString self
  @returns   the result
**/
ApiString Impl_AppDataString_GetPackageShortName(Impl_AppDataString self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("memops.Implementation.AppDataString: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.AppDataString: method 'getPackageShortName' is not callable");
  
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
  @param  Impl_AppDataString self
  @returns   the result
**/
ApiString Impl_AppDataString_GetQualifiedName(Impl_AppDataString self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("memops.Implementation.AppDataString: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.AppDataString: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.AppDataString.value

Data value
  @param  Impl_AppDataString self
  @returns   the result
**/
ApiString Impl_AppDataString_GetValue(Impl_AppDataString self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getValue");
  
  if (!method)
    return raiseApiException("memops.Implementation.AppDataString: cannot find method 'getValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.AppDataString: method 'getValue' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for memops.Implementation.AppDataString
  @param  ApiMap attrlinks
  @returns  the new object
**/
Impl_AppDataString Impl_AppDataString_Init(ApiMap attrlinks)
{
  
  Impl_AppDataString  obj;
  PyObject *module, *moduleDict, *clazz, *args;
  
  if (!Py_IsInitialized())
    Py_Initialize();
  
  module = PyImport_ImportModule("memops.api.Implementation");
  if (!module)
    return raiseApiException("memops.Implementation.AppDataString.init: cannot find module memops.api.Implementation");
  moduleDict = PyModule_GetDict(module);
  if (!moduleDict)
    return raiseApiException("memops.Implementation.AppDataString.init: cannot find dict for memops.api.Implementation");
  clazz = PyDict_GetItemString(moduleDict, "AppDataString");
  if (!clazz)
    return raiseApiException("memops.Implementation.AppDataString.init: cannot find memops.api.Implementation.AppDataString");
  
  args = PyTuple_Pack(0);
  obj = PyObject_Call(clazz, args, attrlinks);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for memops.Implementation.AppDataString
  @param  char * application
  @param  char * keyword
  @param  char * value
  @returns  the new object
**/
Impl_AppDataString Impl_AppDataString_Init_reqd(char * application, char * keyword, char * value)
{
  
  Impl_AppDataString  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__application = ApiString_New(application);
  ApiString api__keyword = ApiString_New(keyword);
  ApiString api__value = ApiString_New(value);

  PyDict_SetItemString(attrlinks, "application", api__application);
  PyDict_SetItemString(attrlinks, "keyword", api__keyword);
  PyDict_SetItemString(attrlinks, "value", api__value);
  
  obj = Impl_AppDataString_Init(attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__application);
  Py_DECREF(api__keyword);
  Py_DECREF(api__value);
  
  return obj;
}

/**
  SetAttr for memops.Implementation.AppDataString
  @param  Impl_AppDataString self
  @param  ApiString name
  @param  ApiObject value
**/
void *Impl_AppDataString_Set(Impl_AppDataString self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.ApplicationData.application

Name of 
application owning the data.
  @param  Impl_AppDataString self
  @param  ApiString value
**/
void *Impl_AppDataString_SetApplication(Impl_AppDataString self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplication");
  
  if (!method)
    return raiseApiException("memops.Implementation.AppDataString: cannot find method 'setApplication'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.AppDataString: method 'setApplication' is not callable");
  
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
  @param  Impl_AppDataString self
  @param  ApiString value
**/
void *Impl_AppDataString_SetKeyword(Impl_AppDataString self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setKeyword");
  
  if (!method)
    return raiseApiException("memops.Implementation.AppDataString: cannot find method 'setKeyword'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.AppDataString: method 'setKeyword' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.AppDataString.value

Data value
  @param  Impl_AppDataString self
  @param  ApiString value
**/
void *Impl_AppDataString_SetValue(Impl_AppDataString self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setValue");
  
  if (!method)
    return raiseApiException("memops.Implementation.AppDataString: cannot find method 'setValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.AppDataString: method 'setValue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Gives a string representation of object
  @param  Impl_AppDataString self
  @returns  
**/
ApiString Impl_AppDataString_ToString(Impl_AppDataString self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "toString");
  
  if (!method)
    return raiseApiException("memops.Implementation.AppDataString: cannot find method 'toString'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.AppDataString: method 'toString' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
