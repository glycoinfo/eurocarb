
#include "ccp.h"

/*
  TopObject for Annotation package
*/

/* package ccp.api.general.Annotation */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anno_AnnotationStore self
  @param  Impl_ApplicationData value
**/
void *Anno_AnnotationStore_AddApplicationData(Anno_AnnotationStore self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.AnnotationStore: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.AnnotationStore: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.general.Annotation.AnnotationStore
  @param  Anno_AnnotationStore self
  @param  ApiBoolean complete
**/
void *Anno_AnnotationStore_CheckAllValid(Anno_AnnotationStore self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.AnnotationStore: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.AnnotationStore: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.general.Annotation.AnnotationStore
  @param  Anno_AnnotationStore self
  @param  ApiBoolean complete
**/
void *Anno_AnnotationStore_CheckValid(Anno_AnnotationStore self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.AnnotationStore: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.AnnotationStore: method 'checkValid' is not callable");
  
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
  @param  Anno_AnnotationStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Anno_AnnotationStore_FindAllActiveRepositories(Anno_AnnotationStore self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllActiveRepositories");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.AnnotationStore: cannot find method 'findAllActiveRepositories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.AnnotationStore: method 'findAllActiveRepositories' is not callable");
  
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
  @param  Anno_AnnotationStore self
  @returns  all value that satisfy the conditions 
**/
ApiList Anno_AnnotationStore_FindAllActiveRepositories_keyval0(Anno_AnnotationStore self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anno_AnnotationStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Anno_AnnotationStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Anno_AnnotationStore_FindAllActiveRepositories_keyval1(Anno_AnnotationStore self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anno_AnnotationStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Anno_AnnotationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Anno_AnnotationStore_FindAllActiveRepositories_keyval2(Anno_AnnotationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anno_AnnotationStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Anno_AnnotationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Anno_AnnotationStore_FindAllActiveRepositories_keyval3(Anno_AnnotationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anno_AnnotationStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Anno_AnnotationStore self
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
ApiList Anno_AnnotationStore_FindAllActiveRepositories_keyval4(Anno_AnnotationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anno_AnnotationStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Annotation.AnnotationStore.annotations

child 
link to class Annotation
  @param  Anno_AnnotationStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Anno_AnnotationStore_FindAllAnnotations(Anno_AnnotationStore self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllAnnotations");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.AnnotationStore: cannot find method 'findAllAnnotations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.AnnotationStore: method 'findAllAnnotations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.Annotation.AnnotationStore.annotations

child 
link to class Annotation
  @param  Anno_AnnotationStore self
  @returns  all value that satisfy the conditions 
**/
ApiSet Anno_AnnotationStore_FindAllAnnotations_keyval0(Anno_AnnotationStore self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anno_AnnotationStore_FindAllAnnotations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Annotation.AnnotationStore.annotations

child 
link to class Annotation
  @param  Anno_AnnotationStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Anno_AnnotationStore_FindAllAnnotations_keyval1(Anno_AnnotationStore self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anno_AnnotationStore_FindAllAnnotations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Annotation.AnnotationStore.annotations

child 
link to class Annotation
  @param  Anno_AnnotationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Anno_AnnotationStore_FindAllAnnotations_keyval2(Anno_AnnotationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anno_AnnotationStore_FindAllAnnotations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Annotation.AnnotationStore.annotations

child 
link to class Annotation
  @param  Anno_AnnotationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Anno_AnnotationStore_FindAllAnnotations_keyval3(Anno_AnnotationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anno_AnnotationStore_FindAllAnnotations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Annotation.AnnotationStore.annotations

child 
link to class Annotation
  @param  Anno_AnnotationStore self
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
ApiSet Anno_AnnotationStore_FindAllAnnotations_keyval4(Anno_AnnotationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anno_AnnotationStore_FindAllAnnotations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anno_AnnotationStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Anno_AnnotationStore_FindAllApplicationData(Anno_AnnotationStore self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.AnnotationStore: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.AnnotationStore: method 'findAllApplicationData' is not callable");
  
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
  @param  Anno_AnnotationStore self
  @returns  all value that satisfy the conditions 
**/
ApiList Anno_AnnotationStore_FindAllApplicationData_keyval0(Anno_AnnotationStore self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anno_AnnotationStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anno_AnnotationStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Anno_AnnotationStore_FindAllApplicationData_keyval1(Anno_AnnotationStore self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anno_AnnotationStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anno_AnnotationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Anno_AnnotationStore_FindAllApplicationData_keyval2(Anno_AnnotationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anno_AnnotationStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anno_AnnotationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Anno_AnnotationStore_FindAllApplicationData_keyval3(Anno_AnnotationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anno_AnnotationStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anno_AnnotationStore self
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
ApiList Anno_AnnotationStore_FindAllApplicationData_keyval4(Anno_AnnotationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anno_AnnotationStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Annotation.AnnotationStore.molFeatures

child 
link to class MolFeature
  @param  Anno_AnnotationStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Anno_AnnotationStore_FindAllMolFeatures(Anno_AnnotationStore self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllMolFeatures");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.AnnotationStore: cannot find method 'findAllMolFeatures'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.AnnotationStore: method 'findAllMolFeatures' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.Annotation.AnnotationStore.molFeatures

child 
link to class MolFeature
  @param  Anno_AnnotationStore self
  @returns  all value that satisfy the conditions 
**/
ApiSet Anno_AnnotationStore_FindAllMolFeatures_keyval0(Anno_AnnotationStore self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anno_AnnotationStore_FindAllMolFeatures(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Annotation.AnnotationStore.molFeatures

child 
link to class MolFeature
  @param  Anno_AnnotationStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Anno_AnnotationStore_FindAllMolFeatures_keyval1(Anno_AnnotationStore self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anno_AnnotationStore_FindAllMolFeatures(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Annotation.AnnotationStore.molFeatures

child 
link to class MolFeature
  @param  Anno_AnnotationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Anno_AnnotationStore_FindAllMolFeatures_keyval2(Anno_AnnotationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anno_AnnotationStore_FindAllMolFeatures(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Annotation.AnnotationStore.molFeatures

child 
link to class MolFeature
  @param  Anno_AnnotationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Anno_AnnotationStore_FindAllMolFeatures_keyval3(Anno_AnnotationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anno_AnnotationStore_FindAllMolFeatures(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Annotation.AnnotationStore.molFeatures

child 
link to class MolFeature
  @param  Anno_AnnotationStore self
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
ApiSet Anno_AnnotationStore_FindAllMolFeatures_keyval4(Anno_AnnotationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anno_AnnotationStore_FindAllMolFeatures(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Anno_AnnotationStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Anno_AnnotationStore_FindFirstActiveRepository(Anno_AnnotationStore self, ApiMap conditions)
{
  
  Impl_Repository obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstActiveRepository");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.AnnotationStore: cannot find method 'findFirstActiveRepository'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.AnnotationStore: method 'findFirstActiveRepository' is not callable");
  
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
  @param  Anno_AnnotationStore self
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Anno_AnnotationStore_FindFirstActiveRepository_keyval0(Anno_AnnotationStore self)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anno_AnnotationStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Anno_AnnotationStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Anno_AnnotationStore_FindFirstActiveRepository_keyval1(Anno_AnnotationStore self, char * key, ApiObject value)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anno_AnnotationStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Anno_AnnotationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Anno_AnnotationStore_FindFirstActiveRepository_keyval2(Anno_AnnotationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anno_AnnotationStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Anno_AnnotationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Anno_AnnotationStore_FindFirstActiveRepository_keyval3(Anno_AnnotationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anno_AnnotationStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Anno_AnnotationStore self
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
Impl_Repository Anno_AnnotationStore_FindFirstActiveRepository_keyval4(Anno_AnnotationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anno_AnnotationStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Annotation.AnnotationStore.annotations

child 
link to class Annotation
  @param  Anno_AnnotationStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Anno_Annotation Anno_AnnotationStore_FindFirstAnnotation(Anno_AnnotationStore self, ApiMap conditions)
{
  
  Anno_Annotation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstAnnotation");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.AnnotationStore: cannot find method 'findFirstAnnotation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.AnnotationStore: method 'findFirstAnnotation' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.general.Annotation.AnnotationStore.annotations

child 
link to class Annotation
  @param  Anno_AnnotationStore self
  @returns  the first value that satisfies the conditions 
**/
Anno_Annotation Anno_AnnotationStore_FindFirstAnnotation_keyval0(Anno_AnnotationStore self)
{
  
  Anno_Annotation  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anno_AnnotationStore_FindFirstAnnotation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Annotation.AnnotationStore.annotations

child 
link to class Annotation
  @param  Anno_AnnotationStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Anno_Annotation Anno_AnnotationStore_FindFirstAnnotation_keyval1(Anno_AnnotationStore self, char * key, ApiObject value)
{
  
  Anno_Annotation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anno_AnnotationStore_FindFirstAnnotation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Annotation.AnnotationStore.annotations

child 
link to class Annotation
  @param  Anno_AnnotationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Anno_Annotation Anno_AnnotationStore_FindFirstAnnotation_keyval2(Anno_AnnotationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Anno_Annotation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anno_AnnotationStore_FindFirstAnnotation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Annotation.AnnotationStore.annotations

child 
link to class Annotation
  @param  Anno_AnnotationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Anno_Annotation Anno_AnnotationStore_FindFirstAnnotation_keyval3(Anno_AnnotationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Anno_Annotation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anno_AnnotationStore_FindFirstAnnotation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Annotation.AnnotationStore.annotations

child 
link to class Annotation
  @param  Anno_AnnotationStore self
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
Anno_Annotation Anno_AnnotationStore_FindFirstAnnotation_keyval4(Anno_AnnotationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Anno_Annotation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anno_AnnotationStore_FindFirstAnnotation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anno_AnnotationStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anno_AnnotationStore_FindFirstApplicationData(Anno_AnnotationStore self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.AnnotationStore: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.AnnotationStore: method 'findFirstApplicationData' is not callable");
  
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
  @param  Anno_AnnotationStore self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anno_AnnotationStore_FindFirstApplicationData_keyval0(Anno_AnnotationStore self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anno_AnnotationStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anno_AnnotationStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anno_AnnotationStore_FindFirstApplicationData_keyval1(Anno_AnnotationStore self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anno_AnnotationStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anno_AnnotationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anno_AnnotationStore_FindFirstApplicationData_keyval2(Anno_AnnotationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anno_AnnotationStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anno_AnnotationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anno_AnnotationStore_FindFirstApplicationData_keyval3(Anno_AnnotationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anno_AnnotationStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anno_AnnotationStore self
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
Impl_ApplicationData Anno_AnnotationStore_FindFirstApplicationData_keyval4(Anno_AnnotationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anno_AnnotationStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Annotation.AnnotationStore.molFeatures

child 
link to class MolFeature
  @param  Anno_AnnotationStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Anno_MolFeature Anno_AnnotationStore_FindFirstMolFeature(Anno_AnnotationStore self, ApiMap conditions)
{
  
  Anno_MolFeature obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstMolFeature");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.AnnotationStore: cannot find method 'findFirstMolFeature'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.AnnotationStore: method 'findFirstMolFeature' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.general.Annotation.AnnotationStore.molFeatures

child 
link to class MolFeature
  @param  Anno_AnnotationStore self
  @returns  the first value that satisfies the conditions 
**/
Anno_MolFeature Anno_AnnotationStore_FindFirstMolFeature_keyval0(Anno_AnnotationStore self)
{
  
  Anno_MolFeature  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anno_AnnotationStore_FindFirstMolFeature(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Annotation.AnnotationStore.molFeatures

child 
link to class MolFeature
  @param  Anno_AnnotationStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Anno_MolFeature Anno_AnnotationStore_FindFirstMolFeature_keyval1(Anno_AnnotationStore self, char * key, ApiObject value)
{
  
  Anno_MolFeature  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anno_AnnotationStore_FindFirstMolFeature(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Annotation.AnnotationStore.molFeatures

child 
link to class MolFeature
  @param  Anno_AnnotationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Anno_MolFeature Anno_AnnotationStore_FindFirstMolFeature_keyval2(Anno_AnnotationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Anno_MolFeature  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anno_AnnotationStore_FindFirstMolFeature(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Annotation.AnnotationStore.molFeatures

child 
link to class MolFeature
  @param  Anno_AnnotationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Anno_MolFeature Anno_AnnotationStore_FindFirstMolFeature_keyval3(Anno_AnnotationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Anno_MolFeature  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anno_AnnotationStore_FindFirstMolFeature(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Annotation.AnnotationStore.molFeatures

child 
link to class MolFeature
  @param  Anno_AnnotationStore self
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
Anno_MolFeature Anno_AnnotationStore_FindFirstMolFeature_keyval4(Anno_AnnotationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Anno_MolFeature  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anno_AnnotationStore_FindFirstMolFeature(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.general.Annotation.AnnotationStore
  @param  Anno_AnnotationStore self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Anno_AnnotationStore_Get(Anno_AnnotationStore self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anno_AnnotationStore self
  @returns   the result
**/
Acco_AccessObject Anno_AnnotationStore_GetAccess(Anno_AnnotationStore self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.AnnotationStore: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.AnnotationStore: method 'getAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Anno_AnnotationStore self
  @returns   the result
**/
Acco_AccessObject Anno_AnnotationStore_GetActiveAccess(Anno_AnnotationStore self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.AnnotationStore: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.AnnotationStore: method 'getActiveAccess' is not callable");
  
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
  @param  Anno_AnnotationStore self
  @returns   the result
**/
ApiList Anno_AnnotationStore_GetActiveRepositories(Anno_AnnotationStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveRepositories");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.AnnotationStore: cannot find method 'getActiveRepositories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.AnnotationStore: method 'getActiveRepositories' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Annotation.AnnotationStore.annotations

child link 
to class Annotation
  @param  Anno_AnnotationStore self
  @returns   the result
**/
ApiSet Anno_AnnotationStore_GetAnnotations(Anno_AnnotationStore self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAnnotations");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.AnnotationStore: cannot find method 'getAnnotations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.AnnotationStore: method 'getAnnotations' is not callable");
  
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
  @param  Anno_AnnotationStore self
  @returns   the result
**/
ApiList Anno_AnnotationStore_GetApplicationData(Anno_AnnotationStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.AnnotationStore: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.AnnotationStore: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.general.Annotation.AnnotationStore
  @param  Anno_AnnotationStore self
  @param  Impl_MemopsRoot startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Anno_AnnotationStore Anno_AnnotationStore_GetByKey(Anno_AnnotationStore self, Impl_MemopsRoot startObj, ApiList fullKey)
{
  
  Anno_AnnotationStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.AnnotationStore: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.AnnotationStore: method 'getByKey' is not callable");
  
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
  @param  Anno_AnnotationStore self
  @returns   the result
**/
ApiString Anno_AnnotationStore_GetClassName(Anno_AnnotationStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.AnnotationStore: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.AnnotationStore: method 'getClassName' is not callable");
  
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
  @param  Anno_AnnotationStore self
  @returns   the result
**/
ApiString Anno_AnnotationStore_GetCreatedBy(Anno_AnnotationStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCreatedBy");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.AnnotationStore: cannot find method 'getCreatedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.AnnotationStore: method 'getCreatedBy' is not callable");
  
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
  @param  Anno_AnnotationStore self
  @returns   the result
**/
ApiList Anno_AnnotationStore_GetFieldNames(Anno_AnnotationStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.AnnotationStore: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.AnnotationStore: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.general.Annotation.AnnotationStore
  @param  Anno_AnnotationStore self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Anno_AnnotationStore_GetFullKey(Anno_AnnotationStore self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.AnnotationStore: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.AnnotationStore: method 'getFullKey' is not callable");
  
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
  @param  Anno_AnnotationStore self
  @returns   the result
**/
ApiString Anno_AnnotationStore_GetGuid(Anno_AnnotationStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getGuid");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.AnnotationStore: cannot find method 'getGuid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.AnnotationStore: method 'getGuid' is not callable");
  
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
  @param  Anno_AnnotationStore self
  @returns   the result
**/
ApiBoolean Anno_AnnotationStore_GetInConstructor(Anno_AnnotationStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.AnnotationStore: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.AnnotationStore: method 'getInConstructor' is not callable");
  
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
  @param  Anno_AnnotationStore self
  @returns   the result
**/
ApiBoolean Anno_AnnotationStore_GetIsDeleted(Anno_AnnotationStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.AnnotationStore: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.AnnotationStore: method 'getIsDeleted' is not callable");
  
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
  @param  Anno_AnnotationStore self
  @returns   the result
**/
ApiBoolean Anno_AnnotationStore_GetIsLoaded(Anno_AnnotationStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsLoaded");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.AnnotationStore: cannot find method 'getIsLoaded'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.AnnotationStore: method 'getIsLoaded' is not callable");
  
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
  @param  Anno_AnnotationStore self
  @returns   the result
**/
ApiBoolean Anno_AnnotationStore_GetIsModifiable(Anno_AnnotationStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsModifiable");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.AnnotationStore: cannot find method 'getIsModifiable'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.AnnotationStore: method 'getIsModifiable' is not callable");
  
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
  @param  Anno_AnnotationStore self
  @returns   the result
**/
ApiBoolean Anno_AnnotationStore_GetIsModified(Anno_AnnotationStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsModified");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.AnnotationStore: cannot find method 'getIsModified'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.AnnotationStore: method 'getIsModified' is not callable");
  
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
  @param  Anno_AnnotationStore self
  @returns   the result
**/
ApiBoolean Anno_AnnotationStore_GetIsReading(Anno_AnnotationStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsReading");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.AnnotationStore: cannot find method 'getIsReading'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.AnnotationStore: method 'getIsReading' is not callable");
  
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
  @param  Anno_AnnotationStore self
  @returns   the result
**/
ApiString Anno_AnnotationStore_GetLastUnlockedBy(Anno_AnnotationStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLastUnlockedBy");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.AnnotationStore: cannot find method 'getLastUnlockedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.AnnotationStore: method 'getLastUnlockedBy' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.general.Annotation.AnnotationStore
  @param  Anno_AnnotationStore self
  @returns  Local object key
**/
ApiObject Anno_AnnotationStore_GetLocalKey(Anno_AnnotationStore self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.AnnotationStore: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.AnnotationStore: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Annotation.AnnotationStore.memopsRoot

parent link
  @param  Anno_AnnotationStore self
  @returns   the result
**/
Impl_MemopsRoot Anno_AnnotationStore_GetMemopsRoot(Anno_AnnotationStore self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMemopsRoot");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.AnnotationStore: cannot find method 'getMemopsRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.AnnotationStore: method 'getMemopsRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Annotation.AnnotationStore.molFeatures

child link 
to class MolFeature
  @param  Anno_AnnotationStore self
  @returns   the result
**/
ApiSet Anno_AnnotationStore_GetMolFeatures(Anno_AnnotationStore self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolFeatures");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.AnnotationStore: cannot find method 'getMolFeatures'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.AnnotationStore: method 'getMolFeatures' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Annotation.AnnotationStore.name

name of 
AnnotationStore
  @param  Anno_AnnotationStore self
  @returns   the result
**/
ApiString Anno_AnnotationStore_GetName(Anno_AnnotationStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.AnnotationStore: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.AnnotationStore: method 'getName' is not callable");
  
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
  @param  Anno_AnnotationStore self
  @returns   the result
**/
Impl_PackageLocator Anno_AnnotationStore_GetPackageLocator(Anno_AnnotationStore self)
{
  
  Impl_PackageLocator obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageLocator");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.AnnotationStore: cannot find method 'getPackageLocator'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.AnnotationStore: method 'getPackageLocator' is not callable");
  
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
  @param  Anno_AnnotationStore self
  @returns   the result
**/
ApiString Anno_AnnotationStore_GetPackageName(Anno_AnnotationStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.AnnotationStore: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.AnnotationStore: method 'getPackageName' is not callable");
  
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
  @param  Anno_AnnotationStore self
  @returns   the result
**/
ApiString Anno_AnnotationStore_GetPackageShortName(Anno_AnnotationStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.AnnotationStore: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.AnnotationStore: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Annotation.AnnotationStore.parent

link to parent 
object - synonym for memopsRoot
  @param  Anno_AnnotationStore self
  @returns   the result
**/
Impl_MemopsRoot Anno_AnnotationStore_GetParent(Anno_AnnotationStore self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.AnnotationStore: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.AnnotationStore: method 'getParent' is not callable");
  
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
  @param  Anno_AnnotationStore self
  @returns   the result
**/
ApiString Anno_AnnotationStore_GetQualifiedName(Anno_AnnotationStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.AnnotationStore: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.AnnotationStore: method 'getQualifiedName' is not callable");
  
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
  @param  Anno_AnnotationStore self
  @returns   the result
**/
Impl_MemopsRoot Anno_AnnotationStore_GetRoot(Anno_AnnotationStore self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.AnnotationStore: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.AnnotationStore: method 'getRoot' is not callable");
  
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
  @param  Anno_AnnotationStore self
  @returns   the result
**/
Impl_TopObject Anno_AnnotationStore_GetTopObject(Anno_AnnotationStore self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.AnnotationStore: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.AnnotationStore: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.general.Annotation.AnnotationStore
  @param  Impl_MemopsRoot parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anno_AnnotationStore Anno_AnnotationStore_Init(Impl_MemopsRoot parent, ApiMap attrlinks)
{
  
  return Impl_MemopsRoot_NewAnnotationStore(parent, attrlinks);
}

/**
  Constructor for ccp.general.Annotation.AnnotationStore
  @param  Impl_MemopsRoot parent
  @param  char * name
  @returns  the new object
**/
Anno_AnnotationStore Anno_AnnotationStore_Init_reqd(Impl_MemopsRoot parent, char * name)
{
  
  Anno_AnnotationStore  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Anno_AnnotationStore_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.general.Annotation.Annotation
  @param  Anno_AnnotationStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anno_Annotation Anno_AnnotationStore_NewAnnotation(Anno_AnnotationStore self, ApiMap attrlinks)
{
  
  Anno_Annotation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newAnnotation");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.AnnotationStore: cannot find method 'newAnnotation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.AnnotationStore: method 'newAnnotation' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.general.Annotation.Annotation
  @param  Anno_AnnotationStore self
  @param  Dloc_DataUrl dataUrl
  @param  char * path
  @returns  the new object
**/
Anno_Annotation Anno_AnnotationStore_NewAnnotation_reqd(Anno_AnnotationStore self, Dloc_DataUrl dataUrl, char * path)
{
  
  Anno_Annotation  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__path = ApiString_New(path);

  PyDict_SetItemString(attrlinks, "dataUrl", dataUrl);
  PyDict_SetItemString(attrlinks, "path", api__path);
  
  obj = Anno_AnnotationStore_NewAnnotation(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__path);
  
  return obj;
}

/**
  Factory function to create ccp.general.Annotation.MolFeature
  @param  Anno_AnnotationStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anno_MolFeature Anno_AnnotationStore_NewMolFeature(Anno_AnnotationStore self, ApiMap attrlinks)
{
  
  Anno_MolFeature obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newMolFeature");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.AnnotationStore: cannot find method 'newMolFeature'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.AnnotationStore: method 'newMolFeature' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.general.Annotation.MolFeature
  @param  Anno_AnnotationStore self
  @param  char * featureType
  @param  Mole_MolResidue molResidue
  @returns  the new object
**/
Anno_MolFeature Anno_AnnotationStore_NewMolFeature_reqd(Anno_AnnotationStore self, char * featureType, Mole_MolResidue molResidue)
{
  
  Anno_MolFeature  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__featureType = ApiString_New(featureType);

  PyDict_SetItemString(attrlinks, "featureType", api__featureType);
  PyDict_SetItemString(attrlinks, "molResidue", molResidue);
  
  obj = Anno_AnnotationStore_NewMolFeature(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__featureType);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anno_AnnotationStore self
  @param  Impl_ApplicationData value
**/
void *Anno_AnnotationStore_RemoveApplicationData(Anno_AnnotationStore self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.AnnotationStore: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.AnnotationStore: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.general.Annotation.AnnotationStore
  @param  Anno_AnnotationStore self
  @param  ApiString name
  @param  ApiObject value
**/
void *Anno_AnnotationStore_Set(Anno_AnnotationStore self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anno_AnnotationStore self
  @param  Acco_AccessObject value
**/
void *Anno_AnnotationStore_SetAccess(Anno_AnnotationStore self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.AnnotationStore: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.AnnotationStore: method 'setAccess' is not callable");
  
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
  @param  Anno_AnnotationStore self
  @param  ApiList values
**/
void *Anno_AnnotationStore_SetApplicationData(Anno_AnnotationStore self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.AnnotationStore: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.AnnotationStore: method 'setApplicationData' is not callable");
  
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
  @param  Anno_AnnotationStore self
  @param  ApiString value
**/
void *Anno_AnnotationStore_SetCreatedBy(Anno_AnnotationStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCreatedBy");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.AnnotationStore: cannot find method 'setCreatedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.AnnotationStore: method 'setCreatedBy' is not callable");
  
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
  @param  Anno_AnnotationStore self
  @param  ApiString value
**/
void *Anno_AnnotationStore_SetGuid(Anno_AnnotationStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setGuid");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.AnnotationStore: cannot find method 'setGuid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.AnnotationStore: method 'setGuid' is not callable");
  
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
  @param  Anno_AnnotationStore self
  @param  ApiBoolean value
**/
void *Anno_AnnotationStore_SetIsModifiable(Anno_AnnotationStore self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsModifiable");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.AnnotationStore: cannot find method 'setIsModifiable'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.AnnotationStore: method 'setIsModifiable' is not callable");
  
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
  @param  Anno_AnnotationStore self
  @param  ApiString value
**/
void *Anno_AnnotationStore_SetLastUnlockedBy(Anno_AnnotationStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLastUnlockedBy");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.AnnotationStore: cannot find method 'setLastUnlockedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.AnnotationStore: method 'setLastUnlockedBy' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Annotation.AnnotationStore.name

name of 
AnnotationStore
  @param  Anno_AnnotationStore self
  @param  ApiString value
**/
void *Anno_AnnotationStore_SetName(Anno_AnnotationStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.AnnotationStore: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.AnnotationStore: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.general.Annotation.AnnotationStore.annotations

child 
link to class Annotation
  @param  Anno_AnnotationStore self
  @returns   the result
**/
ApiList Anno_AnnotationStore_SortedAnnotations(Anno_AnnotationStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedAnnotations");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.AnnotationStore: cannot find method 'sortedAnnotations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.AnnotationStore: method 'sortedAnnotations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.general.Annotation.AnnotationStore.molFeatures

child 
link to class MolFeature
  @param  Anno_AnnotationStore self
  @returns   the result
**/
ApiList Anno_AnnotationStore_SortedMolFeatures(Anno_AnnotationStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedMolFeatures");
  
  if (!method)
    return raiseApiException("ccp.general.Annotation.AnnotationStore: cannot find method 'sortedMolFeatures'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Annotation.AnnotationStore: method 'sortedMolFeatures' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
