
#include "ccp.h"

/*
  TopObject for Crystallization package
*/

/* package ccp.api.lims.Crystallization */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_CrystallizationStore self
  @param  Impl_ApplicationData value
**/
void *Cryz_CrystallizationStore_AddApplicationData(Cryz_CrystallizationStore self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.lims.Crystallization.CrystallizationStore
  @param  Cryz_CrystallizationStore self
  @param  ApiBoolean complete
**/
void *Cryz_CrystallizationStore_CheckAllValid(Cryz_CrystallizationStore self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.lims.Crystallization.CrystallizationStore
  @param  Cryz_CrystallizationStore self
  @param  ApiBoolean complete
**/
void *Cryz_CrystallizationStore_CheckValid(Cryz_CrystallizationStore self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: method 'checkValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Cryz_CrystallizationStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Cryz_CrystallizationStore_FindAllActiveRepositories(Cryz_CrystallizationStore self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllActiveRepositories");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: cannot find method 'findAllActiveRepositories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: method 'findAllActiveRepositories' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Cryz_CrystallizationStore self
  @returns  all value that satisfy the conditions 
**/
ApiList Cryz_CrystallizationStore_FindAllActiveRepositories_keyval0(Cryz_CrystallizationStore self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cryz_CrystallizationStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Cryz_CrystallizationStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Cryz_CrystallizationStore_FindAllActiveRepositories_keyval1(Cryz_CrystallizationStore self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cryz_CrystallizationStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Cryz_CrystallizationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Cryz_CrystallizationStore_FindAllActiveRepositories_keyval2(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cryz_CrystallizationStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Cryz_CrystallizationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Cryz_CrystallizationStore_FindAllActiveRepositories_keyval3(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cryz_CrystallizationStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Cryz_CrystallizationStore self
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
ApiList Cryz_CrystallizationStore_FindAllActiveRepositories_keyval4(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cryz_CrystallizationStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_CrystallizationStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Cryz_CrystallizationStore_FindAllApplicationData(Cryz_CrystallizationStore self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: method 'findAllApplicationData' is not callable");
  
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
  @param  Cryz_CrystallizationStore self
  @returns  all value that satisfy the conditions 
**/
ApiList Cryz_CrystallizationStore_FindAllApplicationData_keyval0(Cryz_CrystallizationStore self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cryz_CrystallizationStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_CrystallizationStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Cryz_CrystallizationStore_FindAllApplicationData_keyval1(Cryz_CrystallizationStore self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cryz_CrystallizationStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_CrystallizationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Cryz_CrystallizationStore_FindAllApplicationData_keyval2(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cryz_CrystallizationStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_CrystallizationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Cryz_CrystallizationStore_FindAllApplicationData_keyval3(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cryz_CrystallizationStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_CrystallizationStore self
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
ApiList Cryz_CrystallizationStore_FindAllApplicationData_keyval4(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cryz_CrystallizationStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.Crystallization.CrystallizationStore.dropAnnotations

child 
link to class DropAnnotation
  @param  Cryz_CrystallizationStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Cryz_CrystallizationStore_FindAllDropAnnotations(Cryz_CrystallizationStore self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllDropAnnotations");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: cannot find method 'findAllDropAnnotations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: method 'findAllDropAnnotations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.Crystallization.CrystallizationStore.dropAnnotations

child 
link to class DropAnnotation
  @param  Cryz_CrystallizationStore self
  @returns  all value that satisfy the conditions 
**/
ApiSet Cryz_CrystallizationStore_FindAllDropAnnotations_keyval0(Cryz_CrystallizationStore self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cryz_CrystallizationStore_FindAllDropAnnotations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.Crystallization.CrystallizationStore.dropAnnotations

child 
link to class DropAnnotation
  @param  Cryz_CrystallizationStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Cryz_CrystallizationStore_FindAllDropAnnotations_keyval1(Cryz_CrystallizationStore self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cryz_CrystallizationStore_FindAllDropAnnotations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.Crystallization.CrystallizationStore.dropAnnotations

child 
link to class DropAnnotation
  @param  Cryz_CrystallizationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Cryz_CrystallizationStore_FindAllDropAnnotations_keyval2(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cryz_CrystallizationStore_FindAllDropAnnotations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.Crystallization.CrystallizationStore.dropAnnotations

child 
link to class DropAnnotation
  @param  Cryz_CrystallizationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Cryz_CrystallizationStore_FindAllDropAnnotations_keyval3(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cryz_CrystallizationStore_FindAllDropAnnotations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.Crystallization.CrystallizationStore.dropAnnotations

child 
link to class DropAnnotation
  @param  Cryz_CrystallizationStore self
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
ApiSet Cryz_CrystallizationStore_FindAllDropAnnotations_keyval4(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cryz_CrystallizationStore_FindAllDropAnnotations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Crystallization.CrystallizationStore.images

child 
link to class Image
  @param  Cryz_CrystallizationStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Cryz_CrystallizationStore_FindAllImages(Cryz_CrystallizationStore self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllImages");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: cannot find method 'findAllImages'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: method 'findAllImages' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Crystallization.CrystallizationStore.images

child 
link to class Image
  @param  Cryz_CrystallizationStore self
  @returns  all value that satisfy the conditions 
**/
ApiSet Cryz_CrystallizationStore_FindAllImages_keyval0(Cryz_CrystallizationStore self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cryz_CrystallizationStore_FindAllImages(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Crystallization.CrystallizationStore.images

child 
link to class Image
  @param  Cryz_CrystallizationStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Cryz_CrystallizationStore_FindAllImages_keyval1(Cryz_CrystallizationStore self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cryz_CrystallizationStore_FindAllImages(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Crystallization.CrystallizationStore.images

child 
link to class Image
  @param  Cryz_CrystallizationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Cryz_CrystallizationStore_FindAllImages_keyval2(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cryz_CrystallizationStore_FindAllImages(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Crystallization.CrystallizationStore.images

child 
link to class Image
  @param  Cryz_CrystallizationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Cryz_CrystallizationStore_FindAllImages_keyval3(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cryz_CrystallizationStore_FindAllImages(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Crystallization.CrystallizationStore.images

child 
link to class Image
  @param  Cryz_CrystallizationStore self
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
ApiSet Cryz_CrystallizationStore_FindAllImages_keyval4(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cryz_CrystallizationStore_FindAllImages(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.Crystallization.CrystallizationStore.parameterDefinitions

child 
link to class ParameterDefinition
  @param  Cryz_CrystallizationStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Cryz_CrystallizationStore_FindAllParameterDefinitions(Cryz_CrystallizationStore self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllParameterDefinitions");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: cannot find method 'findAllParameterDefinitions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: method 'findAllParameterDefinitions' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.Crystallization.CrystallizationStore.parameterDefinitions

child 
link to class ParameterDefinition
  @param  Cryz_CrystallizationStore self
  @returns  all value that satisfy the conditions 
**/
ApiSet Cryz_CrystallizationStore_FindAllParameterDefinitions_keyval0(Cryz_CrystallizationStore self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cryz_CrystallizationStore_FindAllParameterDefinitions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.Crystallization.CrystallizationStore.parameterDefinitions

child 
link to class ParameterDefinition
  @param  Cryz_CrystallizationStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Cryz_CrystallizationStore_FindAllParameterDefinitions_keyval1(Cryz_CrystallizationStore self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cryz_CrystallizationStore_FindAllParameterDefinitions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.Crystallization.CrystallizationStore.parameterDefinitions

child 
link to class ParameterDefinition
  @param  Cryz_CrystallizationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Cryz_CrystallizationStore_FindAllParameterDefinitions_keyval2(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cryz_CrystallizationStore_FindAllParameterDefinitions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.Crystallization.CrystallizationStore.parameterDefinitions

child 
link to class ParameterDefinition
  @param  Cryz_CrystallizationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Cryz_CrystallizationStore_FindAllParameterDefinitions_keyval3(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cryz_CrystallizationStore_FindAllParameterDefinitions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.Crystallization.CrystallizationStore.parameterDefinitions

child 
link to class ParameterDefinition
  @param  Cryz_CrystallizationStore self
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
ApiSet Cryz_CrystallizationStore_FindAllParameterDefinitions_keyval4(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cryz_CrystallizationStore_FindAllParameterDefinitions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.Crystallization.CrystallizationStore.scoringSchemes

child link 
to class ScoringScheme
  @param  Cryz_CrystallizationStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Cryz_CrystallizationStore_FindAllScoringSchemes(Cryz_CrystallizationStore self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllScoringSchemes");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: cannot find method 'findAllScoringSchemes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: method 'findAllScoringSchemes' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.Crystallization.CrystallizationStore.scoringSchemes

child link 
to class ScoringScheme
  @param  Cryz_CrystallizationStore self
  @returns  all value that satisfy the conditions 
**/
ApiSet Cryz_CrystallizationStore_FindAllScoringSchemes_keyval0(Cryz_CrystallizationStore self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cryz_CrystallizationStore_FindAllScoringSchemes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.Crystallization.CrystallizationStore.scoringSchemes

child link 
to class ScoringScheme
  @param  Cryz_CrystallizationStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Cryz_CrystallizationStore_FindAllScoringSchemes_keyval1(Cryz_CrystallizationStore self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cryz_CrystallizationStore_FindAllScoringSchemes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.Crystallization.CrystallizationStore.scoringSchemes

child link 
to class ScoringScheme
  @param  Cryz_CrystallizationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Cryz_CrystallizationStore_FindAllScoringSchemes_keyval2(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cryz_CrystallizationStore_FindAllScoringSchemes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.Crystallization.CrystallizationStore.scoringSchemes

child link 
to class ScoringScheme
  @param  Cryz_CrystallizationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Cryz_CrystallizationStore_FindAllScoringSchemes_keyval3(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cryz_CrystallizationStore_FindAllScoringSchemes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.Crystallization.CrystallizationStore.scoringSchemes

child link 
to class ScoringScheme
  @param  Cryz_CrystallizationStore self
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
ApiSet Cryz_CrystallizationStore_FindAllScoringSchemes_keyval4(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cryz_CrystallizationStore_FindAllScoringSchemes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Cryz_CrystallizationStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Cryz_CrystallizationStore_FindFirstActiveRepository(Cryz_CrystallizationStore self, ApiMap conditions)
{
  
  Impl_Repository obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstActiveRepository");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: cannot find method 'findFirstActiveRepository'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: method 'findFirstActiveRepository' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Cryz_CrystallizationStore self
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Cryz_CrystallizationStore_FindFirstActiveRepository_keyval0(Cryz_CrystallizationStore self)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cryz_CrystallizationStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Cryz_CrystallizationStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Cryz_CrystallizationStore_FindFirstActiveRepository_keyval1(Cryz_CrystallizationStore self, char * key, ApiObject value)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cryz_CrystallizationStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Cryz_CrystallizationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Cryz_CrystallizationStore_FindFirstActiveRepository_keyval2(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cryz_CrystallizationStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Cryz_CrystallizationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Cryz_CrystallizationStore_FindFirstActiveRepository_keyval3(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cryz_CrystallizationStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Cryz_CrystallizationStore self
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
Impl_Repository Cryz_CrystallizationStore_FindFirstActiveRepository_keyval4(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cryz_CrystallizationStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_CrystallizationStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Cryz_CrystallizationStore_FindFirstApplicationData(Cryz_CrystallizationStore self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: method 'findFirstApplicationData' is not callable");
  
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
  @param  Cryz_CrystallizationStore self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Cryz_CrystallizationStore_FindFirstApplicationData_keyval0(Cryz_CrystallizationStore self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cryz_CrystallizationStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_CrystallizationStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Cryz_CrystallizationStore_FindFirstApplicationData_keyval1(Cryz_CrystallizationStore self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cryz_CrystallizationStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_CrystallizationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Cryz_CrystallizationStore_FindFirstApplicationData_keyval2(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cryz_CrystallizationStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_CrystallizationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Cryz_CrystallizationStore_FindFirstApplicationData_keyval3(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cryz_CrystallizationStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_CrystallizationStore self
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
Impl_ApplicationData Cryz_CrystallizationStore_FindFirstApplicationData_keyval4(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cryz_CrystallizationStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Crystallization.CrystallizationStore.dropAnnotations

child 
link to class DropAnnotation
  @param  Cryz_CrystallizationStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Cryz_DropAnnotation Cryz_CrystallizationStore_FindFirstDropAnnotation(Cryz_CrystallizationStore self, ApiMap conditions)
{
  
  Cryz_DropAnnotation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstDropAnnotation");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: cannot find method 'findFirstDropAnnotation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: method 'findFirstDropAnnotation' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Crystallization.CrystallizationStore.dropAnnotations

child 
link to class DropAnnotation
  @param  Cryz_CrystallizationStore self
  @returns  the first value that satisfies the conditions 
**/
Cryz_DropAnnotation Cryz_CrystallizationStore_FindFirstDropAnnotation_keyval0(Cryz_CrystallizationStore self)
{
  
  Cryz_DropAnnotation  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cryz_CrystallizationStore_FindFirstDropAnnotation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Crystallization.CrystallizationStore.dropAnnotations

child 
link to class DropAnnotation
  @param  Cryz_CrystallizationStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Cryz_DropAnnotation Cryz_CrystallizationStore_FindFirstDropAnnotation_keyval1(Cryz_CrystallizationStore self, char * key, ApiObject value)
{
  
  Cryz_DropAnnotation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cryz_CrystallizationStore_FindFirstDropAnnotation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Crystallization.CrystallizationStore.dropAnnotations

child 
link to class DropAnnotation
  @param  Cryz_CrystallizationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Cryz_DropAnnotation Cryz_CrystallizationStore_FindFirstDropAnnotation_keyval2(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Cryz_DropAnnotation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cryz_CrystallizationStore_FindFirstDropAnnotation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Crystallization.CrystallizationStore.dropAnnotations

child 
link to class DropAnnotation
  @param  Cryz_CrystallizationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Cryz_DropAnnotation Cryz_CrystallizationStore_FindFirstDropAnnotation_keyval3(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Cryz_DropAnnotation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cryz_CrystallizationStore_FindFirstDropAnnotation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Crystallization.CrystallizationStore.dropAnnotations

child 
link to class DropAnnotation
  @param  Cryz_CrystallizationStore self
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
Cryz_DropAnnotation Cryz_CrystallizationStore_FindFirstDropAnnotation_keyval4(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Cryz_DropAnnotation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cryz_CrystallizationStore_FindFirstDropAnnotation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Crystallization.CrystallizationStore.images

child link to 
class Image
  @param  Cryz_CrystallizationStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Cryz_Image Cryz_CrystallizationStore_FindFirstImage(Cryz_CrystallizationStore self, ApiMap conditions)
{
  
  Cryz_Image obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstImage");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: cannot find method 'findFirstImage'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: method 'findFirstImage' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Crystallization.CrystallizationStore.images

child link to 
class Image
  @param  Cryz_CrystallizationStore self
  @returns  the first value that satisfies the conditions 
**/
Cryz_Image Cryz_CrystallizationStore_FindFirstImage_keyval0(Cryz_CrystallizationStore self)
{
  
  Cryz_Image  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cryz_CrystallizationStore_FindFirstImage(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Crystallization.CrystallizationStore.images

child link to 
class Image
  @param  Cryz_CrystallizationStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Cryz_Image Cryz_CrystallizationStore_FindFirstImage_keyval1(Cryz_CrystallizationStore self, char * key, ApiObject value)
{
  
  Cryz_Image  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cryz_CrystallizationStore_FindFirstImage(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Crystallization.CrystallizationStore.images

child link to 
class Image
  @param  Cryz_CrystallizationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Cryz_Image Cryz_CrystallizationStore_FindFirstImage_keyval2(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Cryz_Image  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cryz_CrystallizationStore_FindFirstImage(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Crystallization.CrystallizationStore.images

child link to 
class Image
  @param  Cryz_CrystallizationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Cryz_Image Cryz_CrystallizationStore_FindFirstImage_keyval3(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Cryz_Image  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cryz_CrystallizationStore_FindFirstImage(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Crystallization.CrystallizationStore.images

child link to 
class Image
  @param  Cryz_CrystallizationStore self
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
Cryz_Image Cryz_CrystallizationStore_FindFirstImage_keyval4(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Cryz_Image  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cryz_CrystallizationStore_FindFirstImage(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Crystallization.CrystallizationStore.parameterDefinitions

child 
link to class ParameterDefinition
  @param  Cryz_CrystallizationStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Cryz_ParameterDefinition Cryz_CrystallizationStore_FindFirstParameterDefinition(Cryz_CrystallizationStore self, ApiMap conditions)
{
  
  Cryz_ParameterDefinition obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstParameterDefinition");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: cannot find method 'findFirstParameterDefinition'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: method 'findFirstParameterDefinition' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Crystallization.CrystallizationStore.parameterDefinitions

child 
link to class ParameterDefinition
  @param  Cryz_CrystallizationStore self
  @returns  the first value that satisfies the conditions 
**/
Cryz_ParameterDefinition Cryz_CrystallizationStore_FindFirstParameterDefinition_keyval0(Cryz_CrystallizationStore self)
{
  
  Cryz_ParameterDefinition  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cryz_CrystallizationStore_FindFirstParameterDefinition(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Crystallization.CrystallizationStore.parameterDefinitions

child 
link to class ParameterDefinition
  @param  Cryz_CrystallizationStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Cryz_ParameterDefinition Cryz_CrystallizationStore_FindFirstParameterDefinition_keyval1(Cryz_CrystallizationStore self, char * key, ApiObject value)
{
  
  Cryz_ParameterDefinition  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cryz_CrystallizationStore_FindFirstParameterDefinition(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Crystallization.CrystallizationStore.parameterDefinitions

child 
link to class ParameterDefinition
  @param  Cryz_CrystallizationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Cryz_ParameterDefinition Cryz_CrystallizationStore_FindFirstParameterDefinition_keyval2(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Cryz_ParameterDefinition  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cryz_CrystallizationStore_FindFirstParameterDefinition(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Crystallization.CrystallizationStore.parameterDefinitions

child 
link to class ParameterDefinition
  @param  Cryz_CrystallizationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Cryz_ParameterDefinition Cryz_CrystallizationStore_FindFirstParameterDefinition_keyval3(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Cryz_ParameterDefinition  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cryz_CrystallizationStore_FindFirstParameterDefinition(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Crystallization.CrystallizationStore.parameterDefinitions

child 
link to class ParameterDefinition
  @param  Cryz_CrystallizationStore self
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
Cryz_ParameterDefinition Cryz_CrystallizationStore_FindFirstParameterDefinition_keyval4(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Cryz_ParameterDefinition  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cryz_CrystallizationStore_FindFirstParameterDefinition(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Crystallization.CrystallizationStore.scoringSchemes

child link 
to class ScoringScheme
  @param  Cryz_CrystallizationStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Cryz_ScoringScheme Cryz_CrystallizationStore_FindFirstScoringScheme(Cryz_CrystallizationStore self, ApiMap conditions)
{
  
  Cryz_ScoringScheme obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstScoringScheme");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: cannot find method 'findFirstScoringScheme'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: method 'findFirstScoringScheme' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Crystallization.CrystallizationStore.scoringSchemes

child link 
to class ScoringScheme
  @param  Cryz_CrystallizationStore self
  @returns  the first value that satisfies the conditions 
**/
Cryz_ScoringScheme Cryz_CrystallizationStore_FindFirstScoringScheme_keyval0(Cryz_CrystallizationStore self)
{
  
  Cryz_ScoringScheme  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cryz_CrystallizationStore_FindFirstScoringScheme(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Crystallization.CrystallizationStore.scoringSchemes

child link 
to class ScoringScheme
  @param  Cryz_CrystallizationStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Cryz_ScoringScheme Cryz_CrystallizationStore_FindFirstScoringScheme_keyval1(Cryz_CrystallizationStore self, char * key, ApiObject value)
{
  
  Cryz_ScoringScheme  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cryz_CrystallizationStore_FindFirstScoringScheme(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Crystallization.CrystallizationStore.scoringSchemes

child link 
to class ScoringScheme
  @param  Cryz_CrystallizationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Cryz_ScoringScheme Cryz_CrystallizationStore_FindFirstScoringScheme_keyval2(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Cryz_ScoringScheme  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cryz_CrystallizationStore_FindFirstScoringScheme(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Crystallization.CrystallizationStore.scoringSchemes

child link 
to class ScoringScheme
  @param  Cryz_CrystallizationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Cryz_ScoringScheme Cryz_CrystallizationStore_FindFirstScoringScheme_keyval3(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Cryz_ScoringScheme  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cryz_CrystallizationStore_FindFirstScoringScheme(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.Crystallization.CrystallizationStore.scoringSchemes

child link 
to class ScoringScheme
  @param  Cryz_CrystallizationStore self
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
Cryz_ScoringScheme Cryz_CrystallizationStore_FindFirstScoringScheme_keyval4(Cryz_CrystallizationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Cryz_ScoringScheme  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cryz_CrystallizationStore_FindFirstScoringScheme(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.lims.Crystallization.CrystallizationStore
  @param  Cryz_CrystallizationStore self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Cryz_CrystallizationStore_Get(Cryz_CrystallizationStore self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Cryz_CrystallizationStore self
  @returns   the result
**/
Acco_AccessObject Cryz_CrystallizationStore_GetAccess(Cryz_CrystallizationStore self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: method 'getAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.TopObject.activeRepositories

Repositories 
on package search path that contains a copy of TopObject
  @param  Cryz_CrystallizationStore self
  @returns   the result
**/
ApiList Cryz_CrystallizationStore_GetActiveRepositories(Cryz_CrystallizationStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveRepositories");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: cannot find method 'getActiveRepositories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: method 'getActiveRepositories' is not callable");
  
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
  @param  Cryz_CrystallizationStore self
  @returns   the result
**/
ApiList Cryz_CrystallizationStore_GetApplicationData(Cryz_CrystallizationStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.lims.Crystallization.CrystallizationStore
  @param  Cryz_CrystallizationStore self
  @param  Impl_MemopsRoot startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Cryz_CrystallizationStore Cryz_CrystallizationStore_GetByKey(Cryz_CrystallizationStore self, Impl_MemopsRoot startObj, ApiList fullKey)
{
  
  Cryz_CrystallizationStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: method 'getByKey' is not callable");
  
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
  @param  Cryz_CrystallizationStore self
  @returns   the result
**/
ApiString Cryz_CrystallizationStore_GetClassName(Cryz_CrystallizationStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.TopObject.createdBy

user who created 
TopObject.
  @param  Cryz_CrystallizationStore self
  @returns   the result
**/
ApiString Cryz_CrystallizationStore_GetCreatedBy(Cryz_CrystallizationStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCreatedBy");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: cannot find method 'getCreatedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: method 'getCreatedBy' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.lims.Crystallization.CrystallizationStore.dropAnnotations

child 
link to class DropAnnotation
  @param  Cryz_CrystallizationStore self
  @returns   the result
**/
ApiSet Cryz_CrystallizationStore_GetDropAnnotations(Cryz_CrystallizationStore self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDropAnnotations");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: cannot find method 'getDropAnnotations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: method 'getDropAnnotations' is not callable");
  
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
  @param  Cryz_CrystallizationStore self
  @returns   the result
**/
ApiList Cryz_CrystallizationStore_GetFieldNames(Cryz_CrystallizationStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.lims.Crystallization.CrystallizationStore
  @param  Cryz_CrystallizationStore self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Cryz_CrystallizationStore_GetFullKey(Cryz_CrystallizationStore self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: method 'getFullKey' is not callable");
  
  args = PyTuple_Pack(1, useGuid);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.TopObject.guid

global unique identifier - 
set by implementation.
  @param  Cryz_CrystallizationStore self
  @returns   the result
**/
ApiString Cryz_CrystallizationStore_GetGuid(Cryz_CrystallizationStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getGuid");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: cannot find method 'getGuid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: method 'getGuid' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Crystallization.CrystallizationStore.images

child link 
to class Image
  @param  Cryz_CrystallizationStore self
  @returns   the result
**/
ApiSet Cryz_CrystallizationStore_GetImages(Cryz_CrystallizationStore self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getImages");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: cannot find method 'getImages'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: method 'getImages' is not callable");
  
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
  @param  Cryz_CrystallizationStore self
  @returns   the result
**/
ApiBoolean Cryz_CrystallizationStore_GetInConstructor(Cryz_CrystallizationStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: method 'getInConstructor' is not callable");
  
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
  @param  Cryz_CrystallizationStore self
  @returns   the result
**/
ApiBoolean Cryz_CrystallizationStore_GetIsDeleted(Cryz_CrystallizationStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.TopObject.isLoaded

Implementation 
attribute, set automatically. True if the data in the Storage are loaded 
into memory. As data are loaded automatically, this attribute should be 
of interest only for the implementation.
  @param  Cryz_CrystallizationStore self
  @returns   the result
**/
ApiBoolean Cryz_CrystallizationStore_GetIsLoaded(Cryz_CrystallizationStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsLoaded");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: cannot find method 'getIsLoaded'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: method 'getIsLoaded' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.TopObject.isModifiable

True if the data 
corresponding to the storage may be modified. If isModifiable is false 
for a given package, attemps to modify the data will raise an error. 
Note that isModifiable can be set to true even if the corresponding file 
is read-only. 

For a Project, this atribute defines whether the 
Implementation package (not the entire project contents) can be 
modified. If the Implementation package is Read-Only, this will prohibit 
many changes in the other packages as well.

This parameter can be 
freely modified by users, so it is not a security feature, but rather a 
protection against accidental changes.
  @param  Cryz_CrystallizationStore self
  @returns   the result
**/
ApiBoolean Cryz_CrystallizationStore_GetIsModifiable(Cryz_CrystallizationStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsModifiable");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: cannot find method 'getIsModifiable'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: method 'getIsModifiable' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.TopObject.isModified

Implementation 
attribute. True if the data corresponding to the Storage have been 
modified since being loaded. Serves to indicate which data need to be 
saved.
  @param  Cryz_CrystallizationStore self
  @returns   the result
**/
ApiBoolean Cryz_CrystallizationStore_GetIsModified(Cryz_CrystallizationStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsModified");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: cannot find method 'getIsModified'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: method 'getIsModified' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.TopObject.isReading

Implementation 
attribute, set automatically. True if the data corresponding to the 
Storage are in the process of being read. As data loading is handled 
automatically, this attribute should be relevant only for the 
implementation, or possibly for programmers of multithreaded programs. 
Serves to suppress notifiers and validity checking during reading. Note 
that objects are not valid until the data loading is completed.
  @param  Cryz_CrystallizationStore self
  @returns   the result
**/
ApiBoolean Cryz_CrystallizationStore_GetIsReading(Cryz_CrystallizationStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsReading");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: cannot find method 'getIsReading'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: method 'getIsReading' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.TopObject.lastUnlockedBy

User who last 
set TopObject.isModifiable to True.  Used to track if data have been 
modified. Provided data have isModifiable set to False, any modification 
in the underlying data will show up on lastUnlockedBy.
  @param  Cryz_CrystallizationStore self
  @returns   the result
**/
ApiString Cryz_CrystallizationStore_GetLastUnlockedBy(Cryz_CrystallizationStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLastUnlockedBy");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: cannot find method 'getLastUnlockedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: method 'getLastUnlockedBy' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.lims.Crystallization.CrystallizationStore
  @param  Cryz_CrystallizationStore self
  @returns  Local object key
**/
ApiObject Cryz_CrystallizationStore_GetLocalKey(Cryz_CrystallizationStore self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Crystallization.CrystallizationStore.memopsRoot

parent 
link
  @param  Cryz_CrystallizationStore self
  @returns   the result
**/
Impl_MemopsRoot Cryz_CrystallizationStore_GetMemopsRoot(Cryz_CrystallizationStore self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMemopsRoot");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: cannot find method 'getMemopsRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: method 'getMemopsRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Crystallization.CrystallizationStore.name

name of 
CrystallizationStore
  @param  Cryz_CrystallizationStore self
  @returns   the result
**/
ApiString Cryz_CrystallizationStore_GetName(Cryz_CrystallizationStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: method 'getName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.TopObject.packageLocator

Package locator 
relevant for TopObject
  @param  Cryz_CrystallizationStore self
  @returns   the result
**/
Impl_PackageLocator Cryz_CrystallizationStore_GetPackageLocator(Cryz_CrystallizationStore self)
{
  
  Impl_PackageLocator obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageLocator");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: cannot find method 'getPackageLocator'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: method 'getPackageLocator' is not callable");
  
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
  @param  Cryz_CrystallizationStore self
  @returns   the result
**/
ApiString Cryz_CrystallizationStore_GetPackageName(Cryz_CrystallizationStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: method 'getPackageName' is not callable");
  
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
  @param  Cryz_CrystallizationStore self
  @returns   the result
**/
ApiString Cryz_CrystallizationStore_GetPackageShortName(Cryz_CrystallizationStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.lims.Crystallization.CrystallizationStore.parameterDefinitions

child 
link to class ParameterDefinition
  @param  Cryz_CrystallizationStore self
  @returns   the result
**/
ApiSet Cryz_CrystallizationStore_GetParameterDefinitions(Cryz_CrystallizationStore self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParameterDefinitions");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: cannot find method 'getParameterDefinitions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: method 'getParameterDefinitions' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Crystallization.CrystallizationStore.parent

link to 
parent object - synonym for memopsRoot
  @param  Cryz_CrystallizationStore self
  @returns   the result
**/
Impl_MemopsRoot Cryz_CrystallizationStore_GetParent(Cryz_CrystallizationStore self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: method 'getParent' is not callable");
  
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
  @param  Cryz_CrystallizationStore self
  @returns   the result
**/
ApiString Cryz_CrystallizationStore_GetQualifiedName(Cryz_CrystallizationStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: method 'getQualifiedName' is not callable");
  
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
  @param  Cryz_CrystallizationStore self
  @returns   the result
**/
Impl_MemopsRoot Cryz_CrystallizationStore_GetRoot(Cryz_CrystallizationStore self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.lims.Crystallization.CrystallizationStore.scoringSchemes

child link 
to class ScoringScheme
  @param  Cryz_CrystallizationStore self
  @returns   the result
**/
ApiSet Cryz_CrystallizationStore_GetScoringSchemes(Cryz_CrystallizationStore self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getScoringSchemes");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: cannot find method 'getScoringSchemes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: method 'getScoringSchemes' is not callable");
  
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
  @param  Cryz_CrystallizationStore self
  @returns   the result
**/
Impl_TopObject Cryz_CrystallizationStore_GetTopObject(Cryz_CrystallizationStore self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.lims.Crystallization.CrystallizationStore
  @param  Impl_MemopsRoot parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Cryz_CrystallizationStore Cryz_CrystallizationStore_Init(Impl_MemopsRoot parent, ApiMap attrlinks)
{
  
  return Impl_MemopsRoot_NewCrystallizationStore(parent, attrlinks);
}

/**
  Constructor for ccp.lims.Crystallization.CrystallizationStore
  @param  Impl_MemopsRoot parent
  @param  char * name
  @returns  the new object
**/
Cryz_CrystallizationStore Cryz_CrystallizationStore_Init_reqd(Impl_MemopsRoot parent, char * name)
{
  
  Cryz_CrystallizationStore  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Cryz_CrystallizationStore_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Crystallization.DropAnnotation
  @param  Cryz_CrystallizationStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Cryz_DropAnnotation Cryz_CrystallizationStore_NewDropAnnotation(Cryz_CrystallizationStore self, ApiMap attrlinks)
{
  
  Cryz_DropAnnotation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newDropAnnotation");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: cannot find method 'newDropAnnotation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: method 'newDropAnnotation' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Crystallization.DropAnnotation
  @param  Cryz_CrystallizationStore self
  @param  Affi_Person annotator
  @param  Cryz_Score score
  @returns  the new object
**/
Cryz_DropAnnotation Cryz_CrystallizationStore_NewDropAnnotation_reqd(Cryz_CrystallizationStore self, Affi_Person annotator, Cryz_Score score)
{
  
  Cryz_DropAnnotation  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "annotator", annotator);
  PyDict_SetItemString(attrlinks, "score", score);
  
  obj = Cryz_CrystallizationStore_NewDropAnnotation(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Crystallization.Image
  @param  Cryz_CrystallizationStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Cryz_Image Cryz_CrystallizationStore_NewImage(Cryz_CrystallizationStore self, ApiMap attrlinks)
{
  
  Cryz_Image obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newImage");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: cannot find method 'newImage'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: method 'newImage' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Crystallization.Image
  @param  Cryz_CrystallizationStore self
  @param  char * fileName
  @param  char * filePath
  @returns  the new object
**/
Cryz_Image Cryz_CrystallizationStore_NewImage_reqd(Cryz_CrystallizationStore self, char * fileName, char * filePath)
{
  
  Cryz_Image  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__fileName = ApiString_New(fileName);
  ApiString api__filePath = ApiString_New(filePath);

  PyDict_SetItemString(attrlinks, "fileName", api__fileName);
  PyDict_SetItemString(attrlinks, "filePath", api__filePath);
  
  obj = Cryz_CrystallizationStore_NewImage(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__fileName);
  Py_DECREF(api__filePath);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Crystallization.ParameterDefinition
  @param  Cryz_CrystallizationStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Cryz_ParameterDefinition Cryz_CrystallizationStore_NewParameterDefinition(Cryz_CrystallizationStore self, ApiMap attrlinks)
{
  
  Cryz_ParameterDefinition obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newParameterDefinition");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: cannot find method 'newParameterDefinition'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: method 'newParameterDefinition' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Crystallization.ParameterDefinition
  @param  Cryz_CrystallizationStore self
  @returns  the new object
**/
Cryz_ParameterDefinition Cryz_CrystallizationStore_NewParameterDefinition_reqd(Cryz_CrystallizationStore self)
{
  
  Cryz_ParameterDefinition  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Cryz_CrystallizationStore_NewParameterDefinition(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Crystallization.ScoringScheme
  @param  Cryz_CrystallizationStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Cryz_ScoringScheme Cryz_CrystallizationStore_NewScoringScheme(Cryz_CrystallizationStore self, ApiMap attrlinks)
{
  
  Cryz_ScoringScheme obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newScoringScheme");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: cannot find method 'newScoringScheme'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: method 'newScoringScheme' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Crystallization.ScoringScheme
  @param  Cryz_CrystallizationStore self
  @param  char * name
  @returns  the new object
**/
Cryz_ScoringScheme Cryz_CrystallizationStore_NewScoringScheme_reqd(Cryz_CrystallizationStore self, char * name)
{
  
  Cryz_ScoringScheme  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Cryz_CrystallizationStore_NewScoringScheme(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cryz_CrystallizationStore self
  @param  Impl_ApplicationData value
**/
void *Cryz_CrystallizationStore_RemoveApplicationData(Cryz_CrystallizationStore self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.lims.Crystallization.CrystallizationStore
  @param  Cryz_CrystallizationStore self
  @param  ApiString name
  @param  ApiObject value
**/
void *Cryz_CrystallizationStore_Set(Cryz_CrystallizationStore self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Cryz_CrystallizationStore self
  @param  Acco_AccessObject value
**/
void *Cryz_CrystallizationStore_SetAccess(Cryz_CrystallizationStore self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: method 'setAccess' is not callable");
  
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
  @param  Cryz_CrystallizationStore self
  @param  ApiList values
**/
void *Cryz_CrystallizationStore_SetApplicationData(Cryz_CrystallizationStore self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.TopObject.createdBy

user who created 
TopObject.
  @param  Cryz_CrystallizationStore self
  @param  ApiString value
**/
void *Cryz_CrystallizationStore_SetCreatedBy(Cryz_CrystallizationStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCreatedBy");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: cannot find method 'setCreatedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: method 'setCreatedBy' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.TopObject.guid

global unique identifier - 
set by implementation.
  @param  Cryz_CrystallizationStore self
  @param  ApiString value
**/
void *Cryz_CrystallizationStore_SetGuid(Cryz_CrystallizationStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setGuid");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: cannot find method 'setGuid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: method 'setGuid' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.TopObject.isModifiable

True if the data 
corresponding to the storage may be modified. If isModifiable is false 
for a given package, attemps to modify the data will raise an error. 
Note that isModifiable can be set to true even if the corresponding file 
is read-only. 

For a Project, this atribute defines whether the 
Implementation package (not the entire project contents) can be 
modified. If the Implementation package is Read-Only, this will prohibit 
many changes in the other packages as well.

This parameter can be 
freely modified by users, so it is not a security feature, but rather a 
protection against accidental changes.
  @param  Cryz_CrystallizationStore self
  @param  ApiBoolean value
**/
void *Cryz_CrystallizationStore_SetIsModifiable(Cryz_CrystallizationStore self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsModifiable");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: cannot find method 'setIsModifiable'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: method 'setIsModifiable' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.TopObject.lastUnlockedBy

User who last 
set TopObject.isModifiable to True.  Used to track if data have been 
modified. Provided data have isModifiable set to False, any modification 
in the underlying data will show up on lastUnlockedBy.
  @param  Cryz_CrystallizationStore self
  @param  ApiString value
**/
void *Cryz_CrystallizationStore_SetLastUnlockedBy(Cryz_CrystallizationStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLastUnlockedBy");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: cannot find method 'setLastUnlockedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: method 'setLastUnlockedBy' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Crystallization.CrystallizationStore.name

name of 
CrystallizationStore
  @param  Cryz_CrystallizationStore self
  @param  ApiString value
**/
void *Cryz_CrystallizationStore_SetName(Cryz_CrystallizationStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.lims.Crystallization.CrystallizationStore.dropAnnotations

child 
link to class DropAnnotation
  @param  Cryz_CrystallizationStore self
  @returns   the result
**/
ApiList Cryz_CrystallizationStore_SortedDropAnnotations(Cryz_CrystallizationStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedDropAnnotations");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: cannot find method 'sortedDropAnnotations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: method 'sortedDropAnnotations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Crystallization.CrystallizationStore.images

child 
link to class Image
  @param  Cryz_CrystallizationStore self
  @returns   the result
**/
ApiList Cryz_CrystallizationStore_SortedImages(Cryz_CrystallizationStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedImages");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: cannot find method 'sortedImages'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: method 'sortedImages' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.lims.Crystallization.CrystallizationStore.parameterDefinitions

child 
link to class ParameterDefinition
  @param  Cryz_CrystallizationStore self
  @returns   the result
**/
ApiList Cryz_CrystallizationStore_SortedParameterDefinitions(Cryz_CrystallizationStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedParameterDefinitions");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: cannot find method 'sortedParameterDefinitions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: method 'sortedParameterDefinitions' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.lims.Crystallization.CrystallizationStore.scoringSchemes

child link 
to class ScoringScheme
  @param  Cryz_CrystallizationStore self
  @returns   the result
**/
ApiList Cryz_CrystallizationStore_SortedScoringSchemes(Cryz_CrystallizationStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedScoringSchemes");
  
  if (!method)
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: cannot find method 'sortedScoringSchemes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Crystallization.CrystallizationStore: method 'sortedScoringSchemes' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
