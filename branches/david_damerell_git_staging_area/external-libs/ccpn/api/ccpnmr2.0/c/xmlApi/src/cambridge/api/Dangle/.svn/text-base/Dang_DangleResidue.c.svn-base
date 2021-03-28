
#include "ccp.h"

/*
  Residue that holds Dangle angle predictions
*/

/* package cambridge.api.Dangle */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dang_DangleResidue self
  @param  Impl_ApplicationData value
**/
void *Dang_DangleResidue_AddApplicationData(Dang_DangleResidue self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleResidue: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleResidue: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for cambridge.Dangle.DangleResidue
  @param  Dang_DangleResidue self
  @param  ApiBoolean complete
**/
void *Dang_DangleResidue_CheckAllValid(Dang_DangleResidue self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleResidue: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleResidue: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for cambridge.Dangle.DangleResidue
  @param  Dang_DangleResidue self
  @param  ApiBoolean complete
**/
void *Dang_DangleResidue_CheckValid(Dang_DangleResidue self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleResidue: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleResidue: method 'checkValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
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
  @param  Dang_DangleResidue self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Dang_DangleResidue_FindAllApplicationData(Dang_DangleResidue self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleResidue: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleResidue: method 'findAllApplicationData' is not callable");
  
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
  @param  Dang_DangleResidue self
  @returns  all value that satisfy the conditions 
**/
ApiList Dang_DangleResidue_FindAllApplicationData_keyval0(Dang_DangleResidue self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Dang_DangleResidue_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dang_DangleResidue self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Dang_DangleResidue_FindAllApplicationData_keyval1(Dang_DangleResidue self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Dang_DangleResidue_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dang_DangleResidue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Dang_DangleResidue_FindAllApplicationData_keyval2(Dang_DangleResidue self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Dang_DangleResidue_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dang_DangleResidue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Dang_DangleResidue_FindAllApplicationData_keyval3(Dang_DangleResidue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Dang_DangleResidue_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dang_DangleResidue self
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
ApiList Dang_DangleResidue_FindAllApplicationData_keyval4(Dang_DangleResidue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Dang_DangleResidue_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dang_DangleResidue self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Dang_DangleResidue_FindFirstApplicationData(Dang_DangleResidue self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleResidue: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleResidue: method 'findFirstApplicationData' is not callable");
  
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
  @param  Dang_DangleResidue self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Dang_DangleResidue_FindFirstApplicationData_keyval0(Dang_DangleResidue self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Dang_DangleResidue_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dang_DangleResidue self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Dang_DangleResidue_FindFirstApplicationData_keyval1(Dang_DangleResidue self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Dang_DangleResidue_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dang_DangleResidue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Dang_DangleResidue_FindFirstApplicationData_keyval2(Dang_DangleResidue self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Dang_DangleResidue_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dang_DangleResidue self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Dang_DangleResidue_FindFirstApplicationData_keyval3(Dang_DangleResidue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Dang_DangleResidue_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dang_DangleResidue self
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
Impl_ApplicationData Dang_DangleResidue_FindFirstApplicationData_keyval4(Dang_DangleResidue self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Dang_DangleResidue_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for cambridge.Dangle.DangleResidue
  @param  Dang_DangleResidue self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Dang_DangleResidue_Get(Dang_DangleResidue self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Dang_DangleResidue self
  @returns   the result
**/
Acco_AccessObject Dang_DangleResidue_GetAccess(Dang_DangleResidue self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleResidue: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleResidue: method 'getAccess' is not callable");
  
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
  @param  Dang_DangleResidue self
  @returns   the result
**/
ApiList Dang_DangleResidue_GetApplicationData(Dang_DangleResidue self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleResidue: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleResidue: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for cambridge.Dangle.DangleResidue
  @param  Dang_DangleResidue self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Dang_DangleResidue Dang_DangleResidue_GetByKey(Dang_DangleResidue self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Dang_DangleResidue obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleResidue: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleResidue: method 'getByKey' is not callable");
  
  args = PyTuple_Pack(2, startObj, fullKey);
  
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
  @param  Dang_DangleResidue self
  @returns   the result
**/
ApiString Dang_DangleResidue_GetClassName(Dang_DangleResidue self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleResidue: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleResidue: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for cambridge.Dangle.DangleResidue.dangleChain

parent link
  @param  Dang_DangleResidue self
  @returns   the result
**/
Dang_DangleChain Dang_DangleResidue_GetDangleChain(Dang_DangleResidue self)
{
  
  Dang_DangleChain obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDangleChain");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleResidue: cannot find method 'getDangleChain'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleResidue: method 'getDangleChain' is not callable");
  
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
  @param  Dang_DangleResidue self
  @returns   the result
**/
ApiList Dang_DangleResidue_GetFieldNames(Dang_DangleResidue self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleResidue: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleResidue: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for cambridge.Dangle.DangleResidue
  @param  Dang_DangleResidue self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Dang_DangleResidue_GetFullKey(Dang_DangleResidue self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleResidue: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleResidue: method 'getFullKey' is not callable");
  
  args = PyTuple_Pack(1, useGuid);
  
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
  @param  Dang_DangleResidue self
  @returns   the result
**/
ApiBoolean Dang_DangleResidue_GetInConstructor(Dang_DangleResidue self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleResidue: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleResidue: method 'getInConstructor' is not callable");
  
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
  @param  Dang_DangleResidue self
  @returns   the result
**/
ApiBoolean Dang_DangleResidue_GetIsDeleted(Dang_DangleResidue self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleResidue: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleResidue: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for cambridge.Dangle.DangleResidue
  @param  Dang_DangleResidue self
  @returns  Local object key
**/
ApiObject Dang_DangleResidue_GetLocalKey(Dang_DangleResidue self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleResidue: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleResidue: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for cambridge.Dangle.DangleResidue.numIslands

Number of predicted 
'islands'
  @param  Dang_DangleResidue self
  @returns   the result
**/
ApiInteger Dang_DangleResidue_GetNumIslands(Dang_DangleResidue self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNumIslands");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleResidue: cannot find method 'getNumIslands'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleResidue: method 'getNumIslands' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for cambridge.Dangle.DangleResidue.omegaLower

lower omega value
  @param  Dang_DangleResidue self
  @returns   the result
**/
ApiFloat Dang_DangleResidue_GetOmegaLower(Dang_DangleResidue self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getOmegaLower");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleResidue: cannot find method 'getOmegaLower'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleResidue: method 'getOmegaLower' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for cambridge.Dangle.DangleResidue.omegaUpper

upper Omega value
  @param  Dang_DangleResidue self
  @returns   the result
**/
ApiFloat Dang_DangleResidue_GetOmegaUpper(Dang_DangleResidue self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getOmegaUpper");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleResidue: cannot find method 'getOmegaUpper'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleResidue: method 'getOmegaUpper' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for cambridge.Dangle.DangleResidue.omegaValue

predicted omega value
  @param  Dang_DangleResidue self
  @returns   the result
**/
ApiFloat Dang_DangleResidue_GetOmegaValue(Dang_DangleResidue self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getOmegaValue");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleResidue: cannot find method 'getOmegaValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleResidue: method 'getOmegaValue' is not callable");
  
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
  @param  Dang_DangleResidue self
  @returns   the result
**/
ApiString Dang_DangleResidue_GetPackageName(Dang_DangleResidue self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleResidue: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleResidue: method 'getPackageName' is not callable");
  
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
  @param  Dang_DangleResidue self
  @returns   the result
**/
ApiString Dang_DangleResidue_GetPackageShortName(Dang_DangleResidue self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleResidue: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleResidue: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for cambridge.Dangle.DangleResidue.parent

link to parent object - 
synonym for dangleChain
  @param  Dang_DangleResidue self
  @returns   the result
**/
Dang_DangleChain Dang_DangleResidue_GetParent(Dang_DangleResidue self)
{
  
  Dang_DangleChain obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleResidue: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleResidue: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for cambridge.Dangle.DangleResidue.phiLower

lower phi value
  @param  Dang_DangleResidue self
  @returns   the result
**/
ApiFloat Dang_DangleResidue_GetPhiLower(Dang_DangleResidue self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPhiLower");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleResidue: cannot find method 'getPhiLower'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleResidue: method 'getPhiLower' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for cambridge.Dangle.DangleResidue.phiPsiLikelihoodMatrix

Phi/psi 
likelihood matrix. 36*36 float matrix, packed as list.
  @param  Dang_DangleResidue self
  @returns   the result
**/
ApiList Dang_DangleResidue_GetPhiPsiLikelihoodMatrix(Dang_DangleResidue self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPhiPsiLikelihoodMatrix");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleResidue: cannot find method 'getPhiPsiLikelihoodMatrix'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleResidue: method 'getPhiPsiLikelihoodMatrix' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for cambridge.Dangle.DangleResidue.phiUpper

upper phi value
  @param  Dang_DangleResidue self
  @returns   the result
**/
ApiFloat Dang_DangleResidue_GetPhiUpper(Dang_DangleResidue self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPhiUpper");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleResidue: cannot find method 'getPhiUpper'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleResidue: method 'getPhiUpper' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for cambridge.Dangle.DangleResidue.phiValue

Predicted phi value
  @param  Dang_DangleResidue self
  @returns   the result
**/
ApiFloat Dang_DangleResidue_GetPhiValue(Dang_DangleResidue self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPhiValue");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleResidue: cannot find method 'getPhiValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleResidue: method 'getPhiValue' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for cambridge.Dangle.DangleResidue.psiLower

lower psi value
  @param  Dang_DangleResidue self
  @returns   the result
**/
ApiFloat Dang_DangleResidue_GetPsiLower(Dang_DangleResidue self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPsiLower");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleResidue: cannot find method 'getPsiLower'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleResidue: method 'getPsiLower' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for cambridge.Dangle.DangleResidue.psiUpper

upper psi value
  @param  Dang_DangleResidue self
  @returns   the result
**/
ApiFloat Dang_DangleResidue_GetPsiUpper(Dang_DangleResidue self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPsiUpper");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleResidue: cannot find method 'getPsiUpper'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleResidue: method 'getPsiUpper' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for cambridge.Dangle.DangleResidue.psiValue

predicted psi value
  @param  Dang_DangleResidue self
  @returns   the result
**/
ApiFloat Dang_DangleResidue_GetPsiValue(Dang_DangleResidue self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPsiValue");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleResidue: cannot find method 'getPsiValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleResidue: method 'getPsiValue' is not callable");
  
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
  @param  Dang_DangleResidue self
  @returns   the result
**/
ApiString Dang_DangleResidue_GetQualifiedName(Dang_DangleResidue self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleResidue: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleResidue: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for cambridge.Dangle.DangleResidue.residue

Residue for which angles 
are predicted
  @param  Dang_DangleResidue self
  @returns   the result
**/
Mols_Residue Dang_DangleResidue_GetResidue(Dang_DangleResidue self)
{
  
  Mols_Residue obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getResidue");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleResidue: cannot find method 'getResidue'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleResidue: method 'getResidue' is not callable");
  
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
  @param  Dang_DangleResidue self
  @returns   the result
**/
Impl_MemopsRoot Dang_DangleResidue_GetRoot(Dang_DangleResidue self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleResidue: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleResidue: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for cambridge.Dangle.DangleResidue.secStrucCode

Secondary structure 
code.
  @param  Dang_DangleResidue self
  @returns   the result
**/
ApiString Dang_DangleResidue_GetSecStrucCode(Dang_DangleResidue self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSecStrucCode");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleResidue: cannot find method 'getSecStrucCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleResidue: method 'getSecStrucCode' is not callable");
  
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
  @param  Dang_DangleResidue self
  @returns   the result
**/
Impl_TopObject Dang_DangleResidue_GetTopObject(Dang_DangleResidue self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleResidue: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleResidue: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for cambridge.Dangle.DangleResidue
  @param  Dang_DangleChain parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Dang_DangleResidue Dang_DangleResidue_Init(Dang_DangleChain parent, ApiMap attrlinks)
{
  
  return Dang_DangleChain_NewDangleResidue(parent, attrlinks);
}

/**
  Constructor for cambridge.Dangle.DangleResidue
  @param  Dang_DangleChain parent
  @param  ApiList phiPsiLikelihoodMatrix
  @param  Mols_Residue residue
  @returns  the new object
**/
Dang_DangleResidue Dang_DangleResidue_Init_reqd(Dang_DangleChain parent, ApiList phiPsiLikelihoodMatrix, Mols_Residue residue)
{
  
  Dang_DangleResidue  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "phiPsiLikelihoodMatrix", phiPsiLikelihoodMatrix);
  PyDict_SetItemString(attrlinks, "residue", residue);
  
  obj = Dang_DangleResidue_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dang_DangleResidue self
  @param  Impl_ApplicationData value
**/
void *Dang_DangleResidue_RemoveApplicationData(Dang_DangleResidue self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleResidue: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleResidue: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for cambridge.Dangle.DangleResidue
  @param  Dang_DangleResidue self
  @param  ApiString name
  @param  ApiObject value
**/
void *Dang_DangleResidue_Set(Dang_DangleResidue self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Dang_DangleResidue self
  @param  Acco_AccessObject value
**/
void *Dang_DangleResidue_SetAccess(Dang_DangleResidue self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleResidue: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleResidue: method 'setAccess' is not callable");
  
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
  @param  Dang_DangleResidue self
  @param  ApiList values
**/
void *Dang_DangleResidue_SetApplicationData(Dang_DangleResidue self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleResidue: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleResidue: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for cambridge.Dangle.DangleResidue.numIslands

Number of predicted 
'islands'
  @param  Dang_DangleResidue self
  @param  ApiInteger value
**/
void *Dang_DangleResidue_SetNumIslands(Dang_DangleResidue self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNumIslands");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleResidue: cannot find method 'setNumIslands'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleResidue: method 'setNumIslands' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for cambridge.Dangle.DangleResidue.omegaLower

lower omega value
  @param  Dang_DangleResidue self
  @param  ApiFloat value
**/
void *Dang_DangleResidue_SetOmegaLower(Dang_DangleResidue self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setOmegaLower");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleResidue: cannot find method 'setOmegaLower'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleResidue: method 'setOmegaLower' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for cambridge.Dangle.DangleResidue.omegaUpper

upper Omega value
  @param  Dang_DangleResidue self
  @param  ApiFloat value
**/
void *Dang_DangleResidue_SetOmegaUpper(Dang_DangleResidue self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setOmegaUpper");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleResidue: cannot find method 'setOmegaUpper'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleResidue: method 'setOmegaUpper' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for cambridge.Dangle.DangleResidue.omegaValue

predicted omega value
  @param  Dang_DangleResidue self
  @param  ApiFloat value
**/
void *Dang_DangleResidue_SetOmegaValue(Dang_DangleResidue self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setOmegaValue");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleResidue: cannot find method 'setOmegaValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleResidue: method 'setOmegaValue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for cambridge.Dangle.DangleResidue.phiLower

lower phi value
  @param  Dang_DangleResidue self
  @param  ApiFloat value
**/
void *Dang_DangleResidue_SetPhiLower(Dang_DangleResidue self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPhiLower");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleResidue: cannot find method 'setPhiLower'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleResidue: method 'setPhiLower' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for cambridge.Dangle.DangleResidue.phiPsiLikelihoodMatrix

Phi/psi 
likelihood matrix. 36*36 float matrix, packed as list.
  @param  Dang_DangleResidue self
  @param  ApiList values
**/
void *Dang_DangleResidue_SetPhiPsiLikelihoodMatrix(Dang_DangleResidue self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPhiPsiLikelihoodMatrix");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleResidue: cannot find method 'setPhiPsiLikelihoodMatrix'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleResidue: method 'setPhiPsiLikelihoodMatrix' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for cambridge.Dangle.DangleResidue.phiUpper

upper phi value
  @param  Dang_DangleResidue self
  @param  ApiFloat value
**/
void *Dang_DangleResidue_SetPhiUpper(Dang_DangleResidue self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPhiUpper");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleResidue: cannot find method 'setPhiUpper'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleResidue: method 'setPhiUpper' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for cambridge.Dangle.DangleResidue.phiValue

Predicted phi value
  @param  Dang_DangleResidue self
  @param  ApiFloat value
**/
void *Dang_DangleResidue_SetPhiValue(Dang_DangleResidue self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPhiValue");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleResidue: cannot find method 'setPhiValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleResidue: method 'setPhiValue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for cambridge.Dangle.DangleResidue.psiLower

lower psi value
  @param  Dang_DangleResidue self
  @param  ApiFloat value
**/
void *Dang_DangleResidue_SetPsiLower(Dang_DangleResidue self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPsiLower");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleResidue: cannot find method 'setPsiLower'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleResidue: method 'setPsiLower' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for cambridge.Dangle.DangleResidue.psiUpper

upper psi value
  @param  Dang_DangleResidue self
  @param  ApiFloat value
**/
void *Dang_DangleResidue_SetPsiUpper(Dang_DangleResidue self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPsiUpper");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleResidue: cannot find method 'setPsiUpper'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleResidue: method 'setPsiUpper' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for cambridge.Dangle.DangleResidue.psiValue

predicted psi value
  @param  Dang_DangleResidue self
  @param  ApiFloat value
**/
void *Dang_DangleResidue_SetPsiValue(Dang_DangleResidue self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPsiValue");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleResidue: cannot find method 'setPsiValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleResidue: method 'setPsiValue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for cambridge.Dangle.DangleResidue.residue

Residue for which angles 
are predicted
  @param  Dang_DangleResidue self
  @param  Mols_Residue value
**/
void *Dang_DangleResidue_SetResidue(Dang_DangleResidue self, Mols_Residue value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setResidue");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleResidue: cannot find method 'setResidue'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleResidue: method 'setResidue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for cambridge.Dangle.DangleResidue.secStrucCode

Secondary structure 
code.
  @param  Dang_DangleResidue self
  @param  ApiString value
**/
void *Dang_DangleResidue_SetSecStrucCode(Dang_DangleResidue self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSecStrucCode");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleResidue: cannot find method 'setSecStrucCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleResidue: method 'setSecStrucCode' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
