
#include "ccp.h"

/*
  Single symmetry that applies to MolSystem.Each Symmetry describes a set of chani segents that are symmetric under some symmetry operation, such as C2 or C3. You would need several Symmetry objects to describe a Symmetry group such as C3v, or even to describe a simple C2 symmetry of a multichain MolSystem.
*/

/* package molsim.api.Symmetry */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Symm_Symmetry self
  @param  Impl_ApplicationData value
**/
void *Symm_Symmetry_AddApplicationData(Symm_Symmetry self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.Symmetry: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.Symmetry: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for molsim.Symmetry.Symmetry
  @param  Symm_Symmetry self
  @param  ApiBoolean complete
**/
void *Symm_Symmetry_CheckAllValid(Symm_Symmetry self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.Symmetry: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.Symmetry: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for molsim.Symmetry.Symmetry
  @param  Symm_Symmetry self
  @param  ApiBoolean complete
**/
void *Symm_Symmetry_CheckValid(Symm_Symmetry self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.Symmetry: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.Symmetry: method 'checkValid' is not callable");
  
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
  @param  Symm_Symmetry self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Symm_Symmetry_FindAllApplicationData(Symm_Symmetry self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.Symmetry: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.Symmetry: method 'findAllApplicationData' is not callable");
  
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
  @param  Symm_Symmetry self
  @returns  all value that satisfy the conditions 
**/
ApiList Symm_Symmetry_FindAllApplicationData_keyval0(Symm_Symmetry self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Symm_Symmetry_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Symm_Symmetry self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Symm_Symmetry_FindAllApplicationData_keyval1(Symm_Symmetry self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Symm_Symmetry_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Symm_Symmetry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Symm_Symmetry_FindAllApplicationData_keyval2(Symm_Symmetry self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Symm_Symmetry_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Symm_Symmetry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Symm_Symmetry_FindAllApplicationData_keyval3(Symm_Symmetry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Symm_Symmetry_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Symm_Symmetry self
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
ApiList Symm_Symmetry_FindAllApplicationData_keyval4(Symm_Symmetry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Symm_Symmetry_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.Symmetry.Symmetry.segments

child link to class 
Segment
  @param  Symm_Symmetry self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Symm_Symmetry_FindAllSegments(Symm_Symmetry self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllSegments");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.Symmetry: cannot find method 'findAllSegments'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.Symmetry: method 'findAllSegments' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for molsim.Symmetry.Symmetry.segments

child link to class 
Segment
  @param  Symm_Symmetry self
  @returns  all value that satisfy the conditions 
**/
ApiSet Symm_Symmetry_FindAllSegments_keyval0(Symm_Symmetry self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Symm_Symmetry_FindAllSegments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.Symmetry.Symmetry.segments

child link to class 
Segment
  @param  Symm_Symmetry self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Symm_Symmetry_FindAllSegments_keyval1(Symm_Symmetry self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Symm_Symmetry_FindAllSegments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.Symmetry.Symmetry.segments

child link to class 
Segment
  @param  Symm_Symmetry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Symm_Symmetry_FindAllSegments_keyval2(Symm_Symmetry self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Symm_Symmetry_FindAllSegments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.Symmetry.Symmetry.segments

child link to class 
Segment
  @param  Symm_Symmetry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Symm_Symmetry_FindAllSegments_keyval3(Symm_Symmetry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Symm_Symmetry_FindAllSegments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.Symmetry.Symmetry.segments

child link to class 
Segment
  @param  Symm_Symmetry self
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
ApiSet Symm_Symmetry_FindAllSegments_keyval4(Symm_Symmetry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Symm_Symmetry_FindAllSegments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Symm_Symmetry self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Symm_Symmetry_FindFirstApplicationData(Symm_Symmetry self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.Symmetry: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.Symmetry: method 'findFirstApplicationData' is not callable");
  
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
  @param  Symm_Symmetry self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Symm_Symmetry_FindFirstApplicationData_keyval0(Symm_Symmetry self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Symm_Symmetry_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Symm_Symmetry self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Symm_Symmetry_FindFirstApplicationData_keyval1(Symm_Symmetry self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Symm_Symmetry_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Symm_Symmetry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Symm_Symmetry_FindFirstApplicationData_keyval2(Symm_Symmetry self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Symm_Symmetry_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Symm_Symmetry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Symm_Symmetry_FindFirstApplicationData_keyval3(Symm_Symmetry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Symm_Symmetry_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Symm_Symmetry self
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
Impl_ApplicationData Symm_Symmetry_FindFirstApplicationData_keyval4(Symm_Symmetry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Symm_Symmetry_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.Symmetry.Symmetry.segments

child link to class 
Segment
  @param  Symm_Symmetry self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Symm_Segment Symm_Symmetry_FindFirstSegment(Symm_Symmetry self, ApiMap conditions)
{
  
  Symm_Segment obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstSegment");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.Symmetry: cannot find method 'findFirstSegment'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.Symmetry: method 'findFirstSegment' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for molsim.Symmetry.Symmetry.segments

child link to class 
Segment
  @param  Symm_Symmetry self
  @returns  the first value that satisfies the conditions 
**/
Symm_Segment Symm_Symmetry_FindFirstSegment_keyval0(Symm_Symmetry self)
{
  
  Symm_Segment  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Symm_Symmetry_FindFirstSegment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.Symmetry.Symmetry.segments

child link to class 
Segment
  @param  Symm_Symmetry self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Symm_Segment Symm_Symmetry_FindFirstSegment_keyval1(Symm_Symmetry self, char * key, ApiObject value)
{
  
  Symm_Segment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Symm_Symmetry_FindFirstSegment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.Symmetry.Symmetry.segments

child link to class 
Segment
  @param  Symm_Symmetry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Symm_Segment Symm_Symmetry_FindFirstSegment_keyval2(Symm_Symmetry self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Symm_Segment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Symm_Symmetry_FindFirstSegment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.Symmetry.Symmetry.segments

child link to class 
Segment
  @param  Symm_Symmetry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Symm_Segment Symm_Symmetry_FindFirstSegment_keyval3(Symm_Symmetry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Symm_Segment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Symm_Symmetry_FindFirstSegment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.Symmetry.Symmetry.segments

child link to class 
Segment
  @param  Symm_Symmetry self
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
Symm_Segment Symm_Symmetry_FindFirstSegment_keyval4(Symm_Symmetry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Symm_Segment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Symm_Symmetry_FindFirstSegment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for molsim.Symmetry.Symmetry
  @param  Symm_Symmetry self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Symm_Symmetry_Get(Symm_Symmetry self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Symm_Symmetry self
  @returns   the result
**/
Acco_AccessObject Symm_Symmetry_GetAccess(Symm_Symmetry self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.Symmetry: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.Symmetry: method 'getAccess' is not callable");
  
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
  @param  Symm_Symmetry self
  @returns   the result
**/
ApiList Symm_Symmetry_GetApplicationData(Symm_Symmetry self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.Symmetry: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.Symmetry: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for molsim.Symmetry.Symmetry
  @param  Symm_Symmetry self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Symm_Symmetry Symm_Symmetry_GetByKey(Symm_Symmetry self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Symm_Symmetry obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.Symmetry: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.Symmetry: method 'getByKey' is not callable");
  
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
  @param  Symm_Symmetry self
  @returns   the result
**/
ApiString Symm_Symmetry_GetClassName(Symm_Symmetry self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.Symmetry: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.Symmetry: method 'getClassName' is not callable");
  
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
  @param  Symm_Symmetry self
  @returns   the result
**/
ApiList Symm_Symmetry_GetFieldNames(Symm_Symmetry self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.Symmetry: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.Symmetry: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for molsim.Symmetry.Symmetry
  @param  Symm_Symmetry self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Symm_Symmetry_GetFullKey(Symm_Symmetry self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.Symmetry: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.Symmetry: method 'getFullKey' is not callable");
  
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
  @param  Symm_Symmetry self
  @returns   the result
**/
ApiBoolean Symm_Symmetry_GetInConstructor(Symm_Symmetry self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.Symmetry: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.Symmetry: method 'getInConstructor' is not callable");
  
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
  @param  Symm_Symmetry self
  @returns   the result
**/
ApiBoolean Symm_Symmetry_GetIsDeleted(Symm_Symmetry self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.Symmetry: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.Symmetry: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for molsim.Symmetry.Symmetry
  @param  Symm_Symmetry self
  @returns  Local object key
**/
ApiObject Symm_Symmetry_GetLocalKey(Symm_Symmetry self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.Symmetry: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.Symmetry: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.Symmetry.Symmetry.molSystemSymmetrySet

parent link
  @param  Symm_Symmetry self
  @returns   the result
**/
Symm_MolSystemSymmetrySet Symm_Symmetry_GetMolSystemSymmetrySet(Symm_Symmetry self)
{
  
  Symm_MolSystemSymmetrySet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolSystemSymmetrySet");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.Symmetry: cannot find method 'getMolSystemSymmetrySet'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.Symmetry: method 'getMolSystemSymmetrySet' is not callable");
  
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
  @param  Symm_Symmetry self
  @returns   the result
**/
ApiString Symm_Symmetry_GetPackageName(Symm_Symmetry self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.Symmetry: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.Symmetry: method 'getPackageName' is not callable");
  
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
  @param  Symm_Symmetry self
  @returns   the result
**/
ApiString Symm_Symmetry_GetPackageShortName(Symm_Symmetry self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.Symmetry: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.Symmetry: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.Symmetry.Symmetry.parent

link to parent object - synonym 
for molSystemSymmetrySet
  @param  Symm_Symmetry self
  @returns   the result
**/
Symm_MolSystemSymmetrySet Symm_Symmetry_GetParent(Symm_Symmetry self)
{
  
  Symm_MolSystemSymmetrySet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.Symmetry: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.Symmetry: method 'getParent' is not callable");
  
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
  @param  Symm_Symmetry self
  @returns   the result
**/
ApiString Symm_Symmetry_GetQualifiedName(Symm_Symmetry self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.Symmetry: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.Symmetry: method 'getQualifiedName' is not callable");
  
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
  @param  Symm_Symmetry self
  @returns   the result
**/
Impl_MemopsRoot Symm_Symmetry_GetRoot(Symm_Symmetry self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.Symmetry: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.Symmetry: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.Symmetry.Symmetry.segmentLength

Length of segments that 
are symmetrical
  @param  Symm_Symmetry self
  @returns   the result
**/
ApiInteger Symm_Symmetry_GetSegmentLength(Symm_Symmetry self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSegmentLength");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.Symmetry: cannot find method 'getSegmentLength'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.Symmetry: method 'getSegmentLength' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.Symmetry.Symmetry.segments

child link to class Segment
  @param  Symm_Symmetry self
  @returns   the result
**/
ApiSet Symm_Symmetry_GetSegments(Symm_Symmetry self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSegments");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.Symmetry: cannot find method 'getSegments'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.Symmetry: method 'getSegments' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.Symmetry.Symmetry.serial

Serial number of object. Serves 
as object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Symm_Symmetry self
  @returns   the result
**/
ApiInteger Symm_Symmetry_GetSerial(Symm_Symmetry self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.Symmetry: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.Symmetry: method 'getSerial' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.Symmetry.Symmetry.symmetryCode
  @param  Symm_Symmetry self
  @returns   the result
**/
ApiString Symm_Symmetry_GetSymmetryCode(Symm_Symmetry self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSymmetryCode");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.Symmetry: cannot find method 'getSymmetryCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.Symmetry: method 'getSymmetryCode' is not callable");
  
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
  @param  Symm_Symmetry self
  @returns   the result
**/
Impl_TopObject Symm_Symmetry_GetTopObject(Symm_Symmetry self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.Symmetry: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.Symmetry: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for molsim.Symmetry.Symmetry
  @param  Symm_MolSystemSymmetrySet parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Symm_Symmetry Symm_Symmetry_Init(Symm_MolSystemSymmetrySet parent, ApiMap attrlinks)
{
  
  return Symm_MolSystemSymmetrySet_NewSymmetry(parent, attrlinks);
}

/**
  Constructor for molsim.Symmetry.Symmetry
  @param  Symm_MolSystemSymmetrySet parent
  @returns  the new object
**/
Symm_Symmetry Symm_Symmetry_Init_reqd(Symm_MolSystemSymmetrySet parent)
{
  
  Symm_Symmetry  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Symm_Symmetry_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create molsim.Symmetry.Segment
  @param  Symm_Symmetry self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Symm_Segment Symm_Symmetry_NewSegment(Symm_Symmetry self, ApiMap attrlinks)
{
  
  Symm_Segment obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newSegment");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.Symmetry: cannot find method 'newSegment'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.Symmetry: method 'newSegment' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create molsim.Symmetry.Segment
  @param  Symm_Symmetry self
  @param  char * chainCode
  @param  ApiInteger firstSeqId
  @returns  the new object
**/
Symm_Segment Symm_Symmetry_NewSegment_reqd(Symm_Symmetry self, char * chainCode, ApiInteger firstSeqId)
{
  
  Symm_Segment  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__chainCode = ApiString_New(chainCode);

  PyDict_SetItemString(attrlinks, "chainCode", api__chainCode);
  PyDict_SetItemString(attrlinks, "firstSeqId", firstSeqId);
  
  obj = Symm_Symmetry_NewSegment(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__chainCode);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Symm_Symmetry self
  @param  Impl_ApplicationData value
**/
void *Symm_Symmetry_RemoveApplicationData(Symm_Symmetry self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.Symmetry: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.Symmetry: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for molsim.Symmetry.Symmetry
  @param  Symm_Symmetry self
  @param  ApiString name
  @param  ApiObject value
**/
void *Symm_Symmetry_Set(Symm_Symmetry self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Symm_Symmetry self
  @param  Acco_AccessObject value
**/
void *Symm_Symmetry_SetAccess(Symm_Symmetry self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.Symmetry: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.Symmetry: method 'setAccess' is not callable");
  
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
  @param  Symm_Symmetry self
  @param  ApiList values
**/
void *Symm_Symmetry_SetApplicationData(Symm_Symmetry self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.Symmetry: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.Symmetry: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for molsim.Symmetry.Symmetry.segmentLength

Length of segments that 
are symmetrical
  @param  Symm_Symmetry self
  @param  ApiInteger value
**/
void *Symm_Symmetry_SetSegmentLength(Symm_Symmetry self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSegmentLength");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.Symmetry: cannot find method 'setSegmentLength'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.Symmetry: method 'setSegmentLength' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for molsim.Symmetry.Symmetry.serial

Serial number of object. Serves 
as object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Symm_Symmetry self
  @param  ApiInteger value
**/
void *Symm_Symmetry_SetSerial(Symm_Symmetry self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.Symmetry: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.Symmetry: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for molsim.Symmetry.Symmetry.symmetryCode
  @param  Symm_Symmetry self
  @param  ApiString value
**/
void *Symm_Symmetry_SetSymmetryCode(Symm_Symmetry self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSymmetryCode");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.Symmetry: cannot find method 'setSymmetryCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.Symmetry: method 'setSymmetryCode' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for molsim.Symmetry.Symmetry.segments

child link to class 
Segment
  @param  Symm_Symmetry self
  @returns   the result
**/
ApiList Symm_Symmetry_SortedSegments(Symm_Symmetry self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedSegments");
  
  if (!method)
    return raiseApiException("molsim.Symmetry.Symmetry: cannot find method 'sortedSegments'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.Symmetry.Symmetry: method 'sortedSegments' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
