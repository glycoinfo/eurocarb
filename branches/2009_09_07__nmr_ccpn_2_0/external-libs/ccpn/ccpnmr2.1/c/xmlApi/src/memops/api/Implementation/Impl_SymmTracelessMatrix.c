
#include "ccp.h"

/*
  Symmetric traceless tenaor, used for instance for alignment tensors.
*/

/* package memops.api.Implementation */

/**
  CheckAllValid for memops.Implementation.SymmTracelessMatrix
  @param  Impl_SymmTracelessMatrix self
  @param  ApiBoolean complete
**/
void *Impl_SymmTracelessMatrix_CheckAllValid(Impl_SymmTracelessMatrix self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("memops.Implementation.SymmTracelessMatrix: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.SymmTracelessMatrix: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for memops.Implementation.SymmTracelessMatrix
  @param  Impl_SymmTracelessMatrix self
  @param  ApiBoolean complete
**/
void *Impl_SymmTracelessMatrix_CheckValid(Impl_SymmTracelessMatrix self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("memops.Implementation.SymmTracelessMatrix: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.SymmTracelessMatrix: method 'checkValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Clone function for memops.Implementation.SymmTracelessMatrix
  @param  Impl_SymmTracelessMatrix self
  @param  ApiMap attrDict
  @returns  the new object clone
**/
Impl_SymmTracelessMatrix Impl_SymmTracelessMatrix_Clone(Impl_SymmTracelessMatrix self, ApiMap attrDict)
{
  
  Impl_SymmTracelessMatrix obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "clone");
  
  if (!method)
    return raiseApiException("memops.Implementation.SymmTracelessMatrix: cannot find method 'clone'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.SymmTracelessMatrix: method 'clone' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrDict);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetAttr for memops.Implementation.SymmTracelessMatrix
  @param  Impl_SymmTracelessMatrix self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Impl_SymmTracelessMatrix_Get(Impl_SymmTracelessMatrix self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.SymmTracelessMatrix.aAxial

Axial 
component
  @param  Impl_SymmTracelessMatrix self
  @returns   the result
**/
ApiFloat Impl_SymmTracelessMatrix_GetAAxial(Impl_SymmTracelessMatrix self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAAxial");
  
  if (!method)
    return raiseApiException("memops.Implementation.SymmTracelessMatrix: cannot find method 'getAAxial'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.SymmTracelessMatrix: method 'getAAxial' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.SymmTracelessMatrix.aRhombic

rhombic 
component
  @param  Impl_SymmTracelessMatrix self
  @returns   the result
**/
ApiFloat Impl_SymmTracelessMatrix_GetARhombic(Impl_SymmTracelessMatrix self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getARhombic");
  
  if (!method)
    return raiseApiException("memops.Implementation.SymmTracelessMatrix: cannot find method 'getARhombic'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.SymmTracelessMatrix: method 'getARhombic' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.SymmTracelessMatrix.alpha

Euler angle 
alpha in radians
  @param  Impl_SymmTracelessMatrix self
  @returns   the result
**/
ApiFloat Impl_SymmTracelessMatrix_GetAlpha(Impl_SymmTracelessMatrix self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAlpha");
  
  if (!method)
    return raiseApiException("memops.Implementation.SymmTracelessMatrix: cannot find method 'getAlpha'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.SymmTracelessMatrix: method 'getAlpha' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.SymmTracelessMatrix.beta

Euler angle beta 
in radians
  @param  Impl_SymmTracelessMatrix self
  @returns   the result
**/
ApiFloat Impl_SymmTracelessMatrix_GetBeta(Impl_SymmTracelessMatrix self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getBeta");
  
  if (!method)
    return raiseApiException("memops.Implementation.SymmTracelessMatrix: cannot find method 'getBeta'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.SymmTracelessMatrix: method 'getBeta' is not callable");
  
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
  @param  Impl_SymmTracelessMatrix self
  @returns   the result
**/
ApiString Impl_SymmTracelessMatrix_GetClassName(Impl_SymmTracelessMatrix self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("memops.Implementation.SymmTracelessMatrix: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.SymmTracelessMatrix: method 'getClassName' is not callable");
  
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
  @param  Impl_SymmTracelessMatrix self
  @returns   the result
**/
ApiList Impl_SymmTracelessMatrix_GetFieldNames(Impl_SymmTracelessMatrix self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("memops.Implementation.SymmTracelessMatrix: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.SymmTracelessMatrix: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.SymmTracelessMatrix.gamma

Euler angle 
gamma in radians
  @param  Impl_SymmTracelessMatrix self
  @returns   the result
**/
ApiFloat Impl_SymmTracelessMatrix_GetGamma(Impl_SymmTracelessMatrix self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getGamma");
  
  if (!method)
    return raiseApiException("memops.Implementation.SymmTracelessMatrix: cannot find method 'getGamma'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.SymmTracelessMatrix: method 'getGamma' is not callable");
  
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
  @param  Impl_SymmTracelessMatrix self
  @returns   the result
**/
ApiBoolean Impl_SymmTracelessMatrix_GetInConstructor(Impl_SymmTracelessMatrix self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("memops.Implementation.SymmTracelessMatrix: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.SymmTracelessMatrix: method 'getInConstructor' is not callable");
  
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
  @param  Impl_SymmTracelessMatrix self
  @returns   the result
**/
ApiBoolean Impl_SymmTracelessMatrix_GetOverride(Impl_SymmTracelessMatrix self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getOverride");
  
  if (!method)
    return raiseApiException("memops.Implementation.SymmTracelessMatrix: cannot find method 'getOverride'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.SymmTracelessMatrix: method 'getOverride' is not callable");
  
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
  @param  Impl_SymmTracelessMatrix self
  @returns   the result
**/
ApiString Impl_SymmTracelessMatrix_GetPackageName(Impl_SymmTracelessMatrix self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("memops.Implementation.SymmTracelessMatrix: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.SymmTracelessMatrix: method 'getPackageName' is not callable");
  
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
  @param  Impl_SymmTracelessMatrix self
  @returns   the result
**/
ApiString Impl_SymmTracelessMatrix_GetPackageShortName(Impl_SymmTracelessMatrix self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("memops.Implementation.SymmTracelessMatrix: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.SymmTracelessMatrix: method 'getPackageShortName' is not callable");
  
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
  @param  Impl_SymmTracelessMatrix self
  @returns   the result
**/
ApiString Impl_SymmTracelessMatrix_GetQualifiedName(Impl_SymmTracelessMatrix self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("memops.Implementation.SymmTracelessMatrix: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.SymmTracelessMatrix: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for memops.Implementation.SymmTracelessMatrix
  @param  ApiMap attrlinks
  @returns  the new object
**/
Impl_SymmTracelessMatrix Impl_SymmTracelessMatrix_Init(ApiMap attrlinks)
{
  
  Impl_SymmTracelessMatrix  obj;
  PyObject *module, *moduleDict, *clazz, *args;
  
  if (!Py_IsInitialized())
    Py_Initialize();
  
  module = PyImport_ImportModule("memops.api.Implementation");
  if (!module)
    return raiseApiException("memops.Implementation.SymmTracelessMatrix.init: cannot find module memops.api.Implementation");
  moduleDict = PyModule_GetDict(module);
  if (!moduleDict)
    return raiseApiException("memops.Implementation.SymmTracelessMatrix.init: cannot find dict for memops.api.Implementation");
  clazz = PyDict_GetItemString(moduleDict, "SymmTracelessMatrix");
  if (!clazz)
    return raiseApiException("memops.Implementation.SymmTracelessMatrix.init: cannot find memops.api.Implementation.SymmTracelessMatrix");
  
  args = PyTuple_Pack(0);
  obj = PyObject_Call(clazz, args, attrlinks);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for memops.Implementation.SymmTracelessMatrix
  @param  float aAxial
  @param  float aRhombic
  @param  float alpha
  @param  float beta
  @param  float gamma
  @returns  the new object
**/
Impl_SymmTracelessMatrix Impl_SymmTracelessMatrix_Init_reqd(float aAxial, float aRhombic, float alpha, float beta, float gamma)
{
  
  Impl_SymmTracelessMatrix  obj;
  PyObject *attrlinks = PyDict_New();
  ApiFloat api__aAxial = ApiFloat_New(aAxial);
  ApiFloat api__aRhombic = ApiFloat_New(aRhombic);
  ApiFloat api__alpha = ApiFloat_New(alpha);
  ApiFloat api__beta = ApiFloat_New(beta);
  ApiFloat api__gamma = ApiFloat_New(gamma);

  PyDict_SetItemString(attrlinks, "aAxial", api__aAxial);
  PyDict_SetItemString(attrlinks, "aRhombic", api__aRhombic);
  PyDict_SetItemString(attrlinks, "alpha", api__alpha);
  PyDict_SetItemString(attrlinks, "beta", api__beta);
  PyDict_SetItemString(attrlinks, "gamma", api__gamma);
  
  obj = Impl_SymmTracelessMatrix_Init(attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__aAxial);
  Py_DECREF(api__aRhombic);
  Py_DECREF(api__alpha);
  Py_DECREF(api__beta);
  Py_DECREF(api__gamma);
  
  return obj;
}

/**
  SetAttr for memops.Implementation.SymmTracelessMatrix
  @param  Impl_SymmTracelessMatrix self
  @param  ApiString name
  @param  ApiObject value
**/
void *Impl_SymmTracelessMatrix_Set(Impl_SymmTracelessMatrix self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.SymmTracelessMatrix.aAxial

Axial 
component
  @param  Impl_SymmTracelessMatrix self
  @param  ApiFloat value
**/
void *Impl_SymmTracelessMatrix_SetAAxial(Impl_SymmTracelessMatrix self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAAxial");
  
  if (!method)
    return raiseApiException("memops.Implementation.SymmTracelessMatrix: cannot find method 'setAAxial'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.SymmTracelessMatrix: method 'setAAxial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.SymmTracelessMatrix.aRhombic

rhombic 
component
  @param  Impl_SymmTracelessMatrix self
  @param  ApiFloat value
**/
void *Impl_SymmTracelessMatrix_SetARhombic(Impl_SymmTracelessMatrix self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setARhombic");
  
  if (!method)
    return raiseApiException("memops.Implementation.SymmTracelessMatrix: cannot find method 'setARhombic'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.SymmTracelessMatrix: method 'setARhombic' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.SymmTracelessMatrix.alpha

Euler angle 
alpha in radians
  @param  Impl_SymmTracelessMatrix self
  @param  ApiFloat value
**/
void *Impl_SymmTracelessMatrix_SetAlpha(Impl_SymmTracelessMatrix self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAlpha");
  
  if (!method)
    return raiseApiException("memops.Implementation.SymmTracelessMatrix: cannot find method 'setAlpha'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.SymmTracelessMatrix: method 'setAlpha' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.SymmTracelessMatrix.beta

Euler angle beta 
in radians
  @param  Impl_SymmTracelessMatrix self
  @param  ApiFloat value
**/
void *Impl_SymmTracelessMatrix_SetBeta(Impl_SymmTracelessMatrix self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setBeta");
  
  if (!method)
    return raiseApiException("memops.Implementation.SymmTracelessMatrix: cannot find method 'setBeta'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.SymmTracelessMatrix: method 'setBeta' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.SymmTracelessMatrix.gamma

Euler angle 
gamma in radians
  @param  Impl_SymmTracelessMatrix self
  @param  ApiFloat value
**/
void *Impl_SymmTracelessMatrix_SetGamma(Impl_SymmTracelessMatrix self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setGamma");
  
  if (!method)
    return raiseApiException("memops.Implementation.SymmTracelessMatrix: cannot find method 'setGamma'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.SymmTracelessMatrix: method 'setGamma' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Gives a string representation of object
  @param  Impl_SymmTracelessMatrix self
  @returns  
**/
ApiString Impl_SymmTracelessMatrix_ToString(Impl_SymmTracelessMatrix self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "toString");
  
  if (!method)
    return raiseApiException("memops.Implementation.SymmTracelessMatrix: cannot find method 'toString'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.SymmTracelessMatrix: method 'toString' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
