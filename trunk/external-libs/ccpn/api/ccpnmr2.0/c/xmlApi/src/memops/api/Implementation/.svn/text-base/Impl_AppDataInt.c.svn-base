
#include "ccp.h"

/*
  Int type application data.
*/

/* package memops.api.Implementation */

/**
  CheckAllValid for memops.Implementation.AppDataInt
  @param  Impl_AppDataInt self
  @param  ApiBoolean complete
**/
void *Impl_AppDataInt_CheckAllValid(Impl_AppDataInt self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("memops.Implementation.AppDataInt: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.AppDataInt: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for memops.Implementation.AppDataInt
  @param  Impl_AppDataInt self
  @param  ApiBoolean complete
**/
void *Impl_AppDataInt_CheckValid(Impl_AppDataInt self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("memops.Implementation.AppDataInt: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.AppDataInt: method 'checkValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetAttr for memops.Implementation.AppDataInt
  @param  Impl_AppDataInt self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Impl_AppDataInt_Get(Impl_AppDataInt self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.ApplicationData.application

Name of 
application owning the data.
  @param  Impl_AppDataInt self
  @returns   the result
**/
ApiString Impl_AppDataInt_GetApplication(Impl_AppDataInt self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplication");
  
  if (!method)
    return raiseApiException("memops.Implementation.AppDataInt: cannot find method 'getApplication'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.AppDataInt: method 'getApplication' is not callable");
  
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
  @param  Impl_AppDataInt self
  @returns   the result
**/
ApiString Impl_AppDataInt_GetClassName(Impl_AppDataInt self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("memops.Implementation.AppDataInt: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.AppDataInt: method 'getClassName' is not callable");
  
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
  @param  Impl_AppDataInt self
  @returns   the result
**/
ApiList Impl_AppDataInt_GetFieldNames(Impl_AppDataInt self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("memops.Implementation.AppDataInt: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.AppDataInt: method 'getFieldNames' is not callable");
  
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
  @param  Impl_AppDataInt self
  @returns   the result
**/
ApiBoolean Impl_AppDataInt_GetInConstructor(Impl_AppDataInt self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("memops.Implementation.AppDataInt: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.AppDataInt: method 'getInConstructor' is not callable");
  
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
  @param  Impl_AppDataInt self
  @returns   the result
**/
ApiString Impl_AppDataInt_GetKeyword(Impl_AppDataInt self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getKeyword");
  
  if (!method)
    return raiseApiException("memops.Implementation.AppDataInt: cannot find method 'getKeyword'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.AppDataInt: method 'getKeyword' is not callable");
  
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
  @param  Impl_AppDataInt self
  @returns   the result
**/
ApiBoolean Impl_AppDataInt_GetOverride(Impl_AppDataInt self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getOverride");
  
  if (!method)
    return raiseApiException("memops.Implementation.AppDataInt: cannot find method 'getOverride'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.AppDataInt: method 'getOverride' is not callable");
  
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
  @param  Impl_AppDataInt self
  @returns   the result
**/
ApiString Impl_AppDataInt_GetPackageName(Impl_AppDataInt self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("memops.Implementation.AppDataInt: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.AppDataInt: method 'getPackageName' is not callable");
  
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
  @param  Impl_AppDataInt self
  @returns   the result
**/
ApiString Impl_AppDataInt_GetPackageShortName(Impl_AppDataInt self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("memops.Implementation.AppDataInt: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.AppDataInt: method 'getPackageShortName' is not callable");
  
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
  @param  Impl_AppDataInt self
  @returns   the result
**/
ApiString Impl_AppDataInt_GetQualifiedName(Impl_AppDataInt self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("memops.Implementation.AppDataInt: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.AppDataInt: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.AppDataInt.value

Data value
  @param  Impl_AppDataInt self
  @returns   the result
**/
ApiInteger Impl_AppDataInt_GetValue(Impl_AppDataInt self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getValue");
  
  if (!method)
    return raiseApiException("memops.Implementation.AppDataInt: cannot find method 'getValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.AppDataInt: method 'getValue' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for memops.Implementation.AppDataInt
  @param  ApiMap attrlinks
  @returns  the new object
**/
Impl_AppDataInt Impl_AppDataInt_Init(ApiMap attrlinks)
{
  
  Impl_AppDataInt  obj;
  PyObject *module, *moduleDict, *clazz, *args;
  
  if (!Py_IsInitialized())
    Py_Initialize();
  
  module = PyImport_ImportModule("memops.api.Implementation");
  if (!module)
    return raiseApiException("memops.Implementation.AppDataInt.init: cannot find module memops.api.Implementation");
  moduleDict = PyModule_GetDict(module);
  if (!moduleDict)
    return raiseApiException("memops.Implementation.AppDataInt.init: cannot find dict for memops.api.Implementation");
  clazz = PyDict_GetItemString(moduleDict, "AppDataInt");
  if (!clazz)
    return raiseApiException("memops.Implementation.AppDataInt.init: cannot find memops.api.Implementation.AppDataInt");
  
  args = PyTuple_Pack(0);
  obj = PyObject_Call(clazz, args, attrlinks);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for memops.Implementation.AppDataInt
  @param  char * application
  @param  char * keyword
  @param  ApiInteger value
  @returns  the new object
**/
Impl_AppDataInt Impl_AppDataInt_Init_reqd(char * application, char * keyword, ApiInteger value)
{
  
  Impl_AppDataInt  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__application = ApiString_New(application);
  ApiString api__keyword = ApiString_New(keyword);

  PyDict_SetItemString(attrlinks, "application", api__application);
  PyDict_SetItemString(attrlinks, "keyword", api__keyword);
  PyDict_SetItemString(attrlinks, "value", value);
  
  obj = Impl_AppDataInt_Init(attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__application);
  Py_DECREF(api__keyword);
  
  return obj;
}

/**
  SetAttr for memops.Implementation.AppDataInt
  @param  Impl_AppDataInt self
  @param  ApiString name
  @param  ApiObject value
**/
void *Impl_AppDataInt_Set(Impl_AppDataInt self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.ApplicationData.application

Name of 
application owning the data.
  @param  Impl_AppDataInt self
  @param  ApiString value
**/
void *Impl_AppDataInt_SetApplication(Impl_AppDataInt self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplication");
  
  if (!method)
    return raiseApiException("memops.Implementation.AppDataInt: cannot find method 'setApplication'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.AppDataInt: method 'setApplication' is not callable");
  
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
  @param  Impl_AppDataInt self
  @param  ApiString value
**/
void *Impl_AppDataInt_SetKeyword(Impl_AppDataInt self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setKeyword");
  
  if (!method)
    return raiseApiException("memops.Implementation.AppDataInt: cannot find method 'setKeyword'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.AppDataInt: method 'setKeyword' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.AppDataInt.value

Data value
  @param  Impl_AppDataInt self
  @param  ApiInteger value
**/
void *Impl_AppDataInt_SetValue(Impl_AppDataInt self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setValue");
  
  if (!method)
    return raiseApiException("memops.Implementation.AppDataInt: cannot find method 'setValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.AppDataInt: method 'setValue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Gives a string representation of object
  @param  Impl_AppDataInt self
  @returns  
**/
ApiString Impl_AppDataInt_ToString(Impl_AppDataInt self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "toString");
  
  if (!method)
    return raiseApiException("memops.Implementation.AppDataInt: cannot find method 'toString'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.AppDataInt: method 'toString' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
