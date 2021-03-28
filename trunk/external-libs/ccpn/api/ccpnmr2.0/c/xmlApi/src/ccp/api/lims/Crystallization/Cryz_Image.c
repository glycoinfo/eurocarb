
#include "ccp.h"

/*
  
*/

/* package ccp.api.lims.Crystallization */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_Image self
  @param  Impl_ApplicationData value
**/
void *Cryz_Image_AddApplicationData(Cryz_Image self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.Image: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.Image: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.lims.Crystallization.Image.dropAnnotations
  @param  Cryz_Image self
  @param  Cryz_DropAnnotation value
**/
void *Cryz_Image_AddDropAnnotation(Cryz_Image self, Cryz_DropAnnotation value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addDropAnnotation");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.Image: cannot find method 'addDropAnnotation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.Image: method 'addDropAnnotation' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.lims.Crystallization.Image
  @param  Cryz_Image self
  @param  ApiBoolean complete
**/
void *Cryz_Image_CheckAllValid(Cryz_Image self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.Image: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.Image: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.lims.Crystallization.Image
  @param  Cryz_Image self
  @param  ApiBoolean complete
**/
void *Cryz_Image_CheckValid(Cryz_Image self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.Image: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.Image: method 'checkValid' is not callable");
  
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
  @param  Cryz_Image self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Cryz_Image_FindAllApplicationData(Cryz_Image self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.Image: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.Image: method 'findAllApplicationData' is not callable");
  
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
  @param  Cryz_Image self
  @returns  all value that satisfy the conditions 
**/
ApiList Cryz_Image_FindAllApplicationData_keyval0(Cryz_Image self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cryz_Image_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_Image self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Cryz_Image_FindAllApplicationData_keyval1(Cryz_Image self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cryz_Image_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_Image self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Cryz_Image_FindAllApplicationData_keyval2(Cryz_Image self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cryz_Image_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_Image self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Cryz_Image_FindAllApplicationData_keyval3(Cryz_Image self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cryz_Image_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_Image self
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
ApiList Cryz_Image_FindAllApplicationData_keyval4(Cryz_Image self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cryz_Image_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Crystallization.Image.dropAnnotations
  @param  Cryz_Image self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Cryz_Image_FindAllDropAnnotations(Cryz_Image self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllDropAnnotations");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.Image: cannot find method 'findAllDropAnnotations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.Image: method 'findAllDropAnnotations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Crystallization.Image.dropAnnotations
  @param  Cryz_Image self
  @returns  all value that satisfy the conditions 
**/
ApiSet Cryz_Image_FindAllDropAnnotations_keyval0(Cryz_Image self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cryz_Image_FindAllDropAnnotations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Crystallization.Image.dropAnnotations
  @param  Cryz_Image self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Cryz_Image_FindAllDropAnnotations_keyval1(Cryz_Image self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cryz_Image_FindAllDropAnnotations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Crystallization.Image.dropAnnotations
  @param  Cryz_Image self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Cryz_Image_FindAllDropAnnotations_keyval2(Cryz_Image self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cryz_Image_FindAllDropAnnotations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Crystallization.Image.dropAnnotations
  @param  Cryz_Image self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Cryz_Image_FindAllDropAnnotations_keyval3(Cryz_Image self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cryz_Image_FindAllDropAnnotations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Crystallization.Image.dropAnnotations
  @param  Cryz_Image self
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
ApiSet Cryz_Image_FindAllDropAnnotations_keyval4(Cryz_Image self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cryz_Image_FindAllDropAnnotations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Crystallization.Image.parameters

child link to 
class Parameter
  @param  Cryz_Image self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Cryz_Image_FindAllParameters(Cryz_Image self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllParameters");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.Image: cannot find method 'findAllParameters'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.Image: method 'findAllParameters' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Crystallization.Image.parameters

child link to 
class Parameter
  @param  Cryz_Image self
  @returns  all value that satisfy the conditions 
**/
ApiSet Cryz_Image_FindAllParameters_keyval0(Cryz_Image self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cryz_Image_FindAllParameters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Crystallization.Image.parameters

child link to 
class Parameter
  @param  Cryz_Image self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Cryz_Image_FindAllParameters_keyval1(Cryz_Image self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cryz_Image_FindAllParameters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Crystallization.Image.parameters

child link to 
class Parameter
  @param  Cryz_Image self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Cryz_Image_FindAllParameters_keyval2(Cryz_Image self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cryz_Image_FindAllParameters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Crystallization.Image.parameters

child link to 
class Parameter
  @param  Cryz_Image self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Cryz_Image_FindAllParameters_keyval3(Cryz_Image self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cryz_Image_FindAllParameters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Crystallization.Image.parameters

child link to 
class Parameter
  @param  Cryz_Image self
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
ApiSet Cryz_Image_FindAllParameters_keyval4(Cryz_Image self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cryz_Image_FindAllParameters(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_Image self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Cryz_Image_FindFirstApplicationData(Cryz_Image self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.Image: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.Image: method 'findFirstApplicationData' is not callable");
  
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
  @param  Cryz_Image self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Cryz_Image_FindFirstApplicationData_keyval0(Cryz_Image self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cryz_Image_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_Image self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Cryz_Image_FindFirstApplicationData_keyval1(Cryz_Image self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cryz_Image_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_Image self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Cryz_Image_FindFirstApplicationData_keyval2(Cryz_Image self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cryz_Image_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_Image self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Cryz_Image_FindFirstApplicationData_keyval3(Cryz_Image self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cryz_Image_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_Image self
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
Impl_ApplicationData Cryz_Image_FindFirstApplicationData_keyval4(Cryz_Image self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cryz_Image_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Crystallization.Image.dropAnnotations
  @param  Cryz_Image self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Cryz_DropAnnotation Cryz_Image_FindFirstDropAnnotation(Cryz_Image self, ApiMap conditions)
{
  
  Cryz_DropAnnotation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstDropAnnotation");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.Image: cannot find method 'findFirstDropAnnotation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.Image: method 'findFirstDropAnnotation' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Crystallization.Image.dropAnnotations
  @param  Cryz_Image self
  @returns  the first value that satisfies the conditions 
**/
Cryz_DropAnnotation Cryz_Image_FindFirstDropAnnotation_keyval0(Cryz_Image self)
{
  
  Cryz_DropAnnotation  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cryz_Image_FindFirstDropAnnotation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Crystallization.Image.dropAnnotations
  @param  Cryz_Image self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Cryz_DropAnnotation Cryz_Image_FindFirstDropAnnotation_keyval1(Cryz_Image self, char * key, ApiObject value)
{
  
  Cryz_DropAnnotation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cryz_Image_FindFirstDropAnnotation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Crystallization.Image.dropAnnotations
  @param  Cryz_Image self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Cryz_DropAnnotation Cryz_Image_FindFirstDropAnnotation_keyval2(Cryz_Image self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Cryz_DropAnnotation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cryz_Image_FindFirstDropAnnotation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Crystallization.Image.dropAnnotations
  @param  Cryz_Image self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Cryz_DropAnnotation Cryz_Image_FindFirstDropAnnotation_keyval3(Cryz_Image self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Cryz_DropAnnotation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cryz_Image_FindFirstDropAnnotation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Crystallization.Image.dropAnnotations
  @param  Cryz_Image self
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
Cryz_DropAnnotation Cryz_Image_FindFirstDropAnnotation_keyval4(Cryz_Image self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Cryz_DropAnnotation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cryz_Image_FindFirstDropAnnotation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Crystallization.Image.parameters

child link to 
class Parameter
  @param  Cryz_Image self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Cryz_Parameter Cryz_Image_FindFirstParameter(Cryz_Image self, ApiMap conditions)
{
  
  Cryz_Parameter obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstParameter");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.Image: cannot find method 'findFirstParameter'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.Image: method 'findFirstParameter' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Crystallization.Image.parameters

child link to 
class Parameter
  @param  Cryz_Image self
  @returns  the first value that satisfies the conditions 
**/
Cryz_Parameter Cryz_Image_FindFirstParameter_keyval0(Cryz_Image self)
{
  
  Cryz_Parameter  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cryz_Image_FindFirstParameter(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Crystallization.Image.parameters

child link to 
class Parameter
  @param  Cryz_Image self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Cryz_Parameter Cryz_Image_FindFirstParameter_keyval1(Cryz_Image self, char * key, ApiObject value)
{
  
  Cryz_Parameter  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cryz_Image_FindFirstParameter(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Crystallization.Image.parameters

child link to 
class Parameter
  @param  Cryz_Image self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Cryz_Parameter Cryz_Image_FindFirstParameter_keyval2(Cryz_Image self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Cryz_Parameter  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cryz_Image_FindFirstParameter(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Crystallization.Image.parameters

child link to 
class Parameter
  @param  Cryz_Image self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Cryz_Parameter Cryz_Image_FindFirstParameter_keyval3(Cryz_Image self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Cryz_Parameter  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cryz_Image_FindFirstParameter(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Crystallization.Image.parameters

child link to 
class Parameter
  @param  Cryz_Image self
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
Cryz_Parameter Cryz_Image_FindFirstParameter_keyval4(Cryz_Image self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Cryz_Parameter  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cryz_Image_FindFirstParameter(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.lims.Crystallization.Image
  @param  Cryz_Image self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Cryz_Image_Get(Cryz_Image self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Cryz_Image self
  @returns   the result
**/
Acco_AccessObject Cryz_Image_GetAccess(Cryz_Image self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.Image: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.Image: method 'getAccess' is not callable");
  
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
  @param  Cryz_Image self
  @returns   the result
**/
ApiList Cryz_Image_GetApplicationData(Cryz_Image self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.Image: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.Image: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.lims.Crystallization.Image
  @param  Cryz_Image self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Cryz_Image Cryz_Image_GetByKey(Cryz_Image self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Cryz_Image obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.Image: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.Image: method 'getByKey' is not callable");
  
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
  @param  Cryz_Image self
  @returns   the result
**/
ApiString Cryz_Image_GetClassName(Cryz_Image self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.Image: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.Image: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Crystallization.Image.createDate
  @param  Cryz_Image self
  @returns   the result
**/
ApiString Cryz_Image_GetCreateDate(Cryz_Image self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCreateDate");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.Image: cannot find method 'getCreateDate'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.Image: method 'getCreateDate' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Crystallization.Image.crystallizationStore

parent link
  @param  Cryz_Image self
  @returns   the result
**/
Cryz_CrystallizationStore Cryz_Image_GetCrystallizationStore(Cryz_Image self)
{
  
  Cryz_CrystallizationStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCrystallizationStore");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.Image: cannot find method 'getCrystallizationStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.Image: method 'getCrystallizationStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Crystallization.Image.dropAnnotations
  @param  Cryz_Image self
  @returns   the result
**/
ApiSet Cryz_Image_GetDropAnnotations(Cryz_Image self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDropAnnotations");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.Image: cannot find method 'getDropAnnotations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.Image: method 'getDropAnnotations' is not callable");
  
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
  @param  Cryz_Image self
  @returns   the result
**/
ApiList Cryz_Image_GetFieldNames(Cryz_Image self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.Image: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.Image: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Crystallization.Image.fileName
  @param  Cryz_Image self
  @returns   the result
**/
ApiString Cryz_Image_GetFileName(Cryz_Image self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFileName");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.Image: cannot find method 'getFileName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.Image: method 'getFileName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Crystallization.Image.filePath
  @param  Cryz_Image self
  @returns   the result
**/
ApiString Cryz_Image_GetFilePath(Cryz_Image self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFilePath");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.Image: cannot find method 'getFilePath'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.Image: method 'getFilePath' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.lims.Crystallization.Image
  @param  Cryz_Image self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Cryz_Image_GetFullKey(Cryz_Image self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.Image: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.Image: method 'getFullKey' is not callable");
  
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
  @param  Cryz_Image self
  @returns   the result
**/
ApiBoolean Cryz_Image_GetInConstructor(Cryz_Image self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.Image: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.Image: method 'getInConstructor' is not callable");
  
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
  @param  Cryz_Image self
  @returns   the result
**/
ApiBoolean Cryz_Image_GetIsDeleted(Cryz_Image self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.Image: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.Image: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.lims.Crystallization.Image
  @param  Cryz_Image self
  @returns  Local object key
**/
ApiObject Cryz_Image_GetLocalKey(Cryz_Image self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.Image: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.Image: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Crystallization.Image.mimeType
  @param  Cryz_Image self
  @returns   the result
**/
ApiString Cryz_Image_GetMimeType(Cryz_Image self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMimeType");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.Image: cannot find method 'getMimeType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.Image: method 'getMimeType' is not callable");
  
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
  @param  Cryz_Image self
  @returns   the result
**/
ApiString Cryz_Image_GetPackageName(Cryz_Image self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.Image: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.Image: method 'getPackageName' is not callable");
  
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
  @param  Cryz_Image self
  @returns   the result
**/
ApiString Cryz_Image_GetPackageShortName(Cryz_Image self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.Image: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.Image: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Crystallization.Image.parameters

child link to class 
Parameter
  @param  Cryz_Image self
  @returns   the result
**/
ApiSet Cryz_Image_GetParameters(Cryz_Image self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParameters");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.Image: cannot find method 'getParameters'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.Image: method 'getParameters' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Crystallization.Image.parent

link to parent object - 
synonym for crystallizationStore
  @param  Cryz_Image self
  @returns   the result
**/
Cryz_CrystallizationStore Cryz_Image_GetParent(Cryz_Image self)
{
  
  Cryz_CrystallizationStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.Image: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.Image: method 'getParent' is not callable");
  
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
  @param  Cryz_Image self
  @returns   the result
**/
ApiString Cryz_Image_GetQualifiedName(Cryz_Image self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.Image: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.Image: method 'getQualifiedName' is not callable");
  
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
  @param  Cryz_Image self
  @returns   the result
**/
Impl_MemopsRoot Cryz_Image_GetRoot(Cryz_Image self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.Image: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.Image: method 'getRoot' is not callable");
  
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
  @param  Cryz_Image self
  @returns   the result
**/
Impl_TopObject Cryz_Image_GetTopObject(Cryz_Image self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.Image: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.Image: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.lims.Crystallization.Image
  @param  Cryz_CrystallizationStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Cryz_Image Cryz_Image_Init(Cryz_CrystallizationStore parent, ApiMap attrlinks)
{
  
  return Cryz_CrystallizationStore_NewImage(parent, attrlinks);
}

/**
  Constructor for ccp.lims.Crystallization.Image
  @param  Cryz_CrystallizationStore parent
  @param  char * fileName
  @param  char * filePath
  @returns  the new object
**/
Cryz_Image Cryz_Image_Init_reqd(Cryz_CrystallizationStore parent, char * fileName, char * filePath)
{
  
  Cryz_Image  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__fileName = ApiString_New(fileName);
  ApiString api__filePath = ApiString_New(filePath);

  PyDict_SetItemString(attrlinks, "fileName", api__fileName);
  PyDict_SetItemString(attrlinks, "filePath", api__filePath);
  
  obj = Cryz_Image_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__fileName);
  Py_DECREF(api__filePath);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Crystallization.Parameter
  @param  Cryz_Image self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Cryz_Parameter Cryz_Image_NewParameter(Cryz_Image self, ApiMap attrlinks)
{
  
  Cryz_Parameter obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newParameter");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.Image: cannot find method 'newParameter'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.Image: method 'newParameter' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Crystallization.Parameter
  @param  Cryz_Image self
  @param  Cryz_ParameterDefinition parameterDefinition
  @returns  the new object
**/
Cryz_Parameter Cryz_Image_NewParameter_reqd(Cryz_Image self, Cryz_ParameterDefinition parameterDefinition)
{
  
  Cryz_Parameter  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "parameterDefinition", parameterDefinition);
  
  obj = Cryz_Image_NewParameter(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_Image self
  @param  Impl_ApplicationData value
**/
void *Cryz_Image_RemoveApplicationData(Cryz_Image self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.Image: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.Image: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.lims.Crystallization.Image.dropAnnotations
  @param  Cryz_Image self
  @param  Cryz_DropAnnotation value
**/
void *Cryz_Image_RemoveDropAnnotation(Cryz_Image self, Cryz_DropAnnotation value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeDropAnnotation");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.Image: cannot find method 'removeDropAnnotation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.Image: method 'removeDropAnnotation' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.lims.Crystallization.Image
  @param  Cryz_Image self
  @param  ApiString name
  @param  ApiObject value
**/
void *Cryz_Image_Set(Cryz_Image self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Cryz_Image self
  @param  Acco_AccessObject value
**/
void *Cryz_Image_SetAccess(Cryz_Image self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.Image: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.Image: method 'setAccess' is not callable");
  
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
  @param  Cryz_Image self
  @param  ApiList values
**/
void *Cryz_Image_SetApplicationData(Cryz_Image self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.Image: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.Image: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Crystallization.Image.createDate
  @param  Cryz_Image self
  @param  ApiString value
**/
void *Cryz_Image_SetCreateDate(Cryz_Image self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCreateDate");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.Image: cannot find method 'setCreateDate'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.Image: method 'setCreateDate' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Crystallization.Image.dropAnnotations
  @param  Cryz_Image self
  @param  ApiSet values
**/
void *Cryz_Image_SetDropAnnotations(Cryz_Image self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDropAnnotations");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.Image: cannot find method 'setDropAnnotations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.Image: method 'setDropAnnotations' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Crystallization.Image.fileName
  @param  Cryz_Image self
  @param  ApiString value
**/
void *Cryz_Image_SetFileName(Cryz_Image self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setFileName");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.Image: cannot find method 'setFileName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.Image: method 'setFileName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Crystallization.Image.filePath
  @param  Cryz_Image self
  @param  ApiString value
**/
void *Cryz_Image_SetFilePath(Cryz_Image self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setFilePath");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.Image: cannot find method 'setFilePath'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.Image: method 'setFilePath' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Crystallization.Image.mimeType
  @param  Cryz_Image self
  @param  ApiString value
**/
void *Cryz_Image_SetMimeType(Cryz_Image self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMimeType");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.Image: cannot find method 'setMimeType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.Image: method 'setMimeType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Crystallization.Image.dropAnnotations
  @param  Cryz_Image self
  @returns   the result
**/
ApiList Cryz_Image_SortedDropAnnotations(Cryz_Image self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedDropAnnotations");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.Image: cannot find method 'sortedDropAnnotations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.Image: method 'sortedDropAnnotations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Crystallization.Image.parameters

child link to 
class Parameter
  @param  Cryz_Image self
  @returns   the result
**/
ApiList Cryz_Image_SortedParameters(Cryz_Image self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedParameters");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.Image: cannot find method 'sortedParameters'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.Image: method 'sortedParameters' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
