
#include "ccp.h"

/*
  Store for keyword definitions for a given context (e.g. a particular program or standard). 
*/

/* package ccp.api.general.KeywordDefinition */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Kwdf_KeywordDefinitionStore self
  @param  Impl_ApplicationData value
**/
void *Kwdf_KeywordDefinitionStore_AddApplicationData(Kwdf_KeywordDefinitionStore self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.general.KeywordDefinition.KeywordDefinitionStore
  @param  Kwdf_KeywordDefinitionStore self
  @param  ApiBoolean complete
**/
void *Kwdf_KeywordDefinitionStore_CheckAllValid(Kwdf_KeywordDefinitionStore self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.general.KeywordDefinition.KeywordDefinitionStore
  @param  Kwdf_KeywordDefinitionStore self
  @param  ApiBoolean complete
**/
void *Kwdf_KeywordDefinitionStore_CheckValid(Kwdf_KeywordDefinitionStore self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: method 'checkValid' is not callable");
  
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
  @param  Kwdf_KeywordDefinitionStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Kwdf_KeywordDefinitionStore_FindAllActiveRepositories(Kwdf_KeywordDefinitionStore self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllActiveRepositories");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: cannot find method 'findAllActiveRepositories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: method 'findAllActiveRepositories' is not callable");
  
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
  @param  Kwdf_KeywordDefinitionStore self
  @returns  all value that satisfy the conditions 
**/
ApiList Kwdf_KeywordDefinitionStore_FindAllActiveRepositories_keyval0(Kwdf_KeywordDefinitionStore self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Kwdf_KeywordDefinitionStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Kwdf_KeywordDefinitionStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Kwdf_KeywordDefinitionStore_FindAllActiveRepositories_keyval1(Kwdf_KeywordDefinitionStore self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Kwdf_KeywordDefinitionStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Kwdf_KeywordDefinitionStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Kwdf_KeywordDefinitionStore_FindAllActiveRepositories_keyval2(Kwdf_KeywordDefinitionStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Kwdf_KeywordDefinitionStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Kwdf_KeywordDefinitionStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Kwdf_KeywordDefinitionStore_FindAllActiveRepositories_keyval3(Kwdf_KeywordDefinitionStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Kwdf_KeywordDefinitionStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Kwdf_KeywordDefinitionStore self
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
ApiList Kwdf_KeywordDefinitionStore_FindAllActiveRepositories_keyval4(Kwdf_KeywordDefinitionStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Kwdf_KeywordDefinitionStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Kwdf_KeywordDefinitionStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Kwdf_KeywordDefinitionStore_FindAllApplicationData(Kwdf_KeywordDefinitionStore self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: method 'findAllApplicationData' is not callable");
  
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
  @param  Kwdf_KeywordDefinitionStore self
  @returns  all value that satisfy the conditions 
**/
ApiList Kwdf_KeywordDefinitionStore_FindAllApplicationData_keyval0(Kwdf_KeywordDefinitionStore self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Kwdf_KeywordDefinitionStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Kwdf_KeywordDefinitionStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Kwdf_KeywordDefinitionStore_FindAllApplicationData_keyval1(Kwdf_KeywordDefinitionStore self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Kwdf_KeywordDefinitionStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Kwdf_KeywordDefinitionStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Kwdf_KeywordDefinitionStore_FindAllApplicationData_keyval2(Kwdf_KeywordDefinitionStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Kwdf_KeywordDefinitionStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Kwdf_KeywordDefinitionStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Kwdf_KeywordDefinitionStore_FindAllApplicationData_keyval3(Kwdf_KeywordDefinitionStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Kwdf_KeywordDefinitionStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Kwdf_KeywordDefinitionStore self
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
ApiList Kwdf_KeywordDefinitionStore_FindAllApplicationData_keyval4(Kwdf_KeywordDefinitionStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Kwdf_KeywordDefinitionStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.general.KeywordDefinition.KeywordDefinitionStore.keywordDefinitions

child 
link to class KeywordDefinition
  @param  Kwdf_KeywordDefinitionStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Kwdf_KeywordDefinitionStore_FindAllKeywordDefinitions(Kwdf_KeywordDefinitionStore self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllKeywordDefinitions");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: cannot find method 'findAllKeywordDefinitions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: method 'findAllKeywordDefinitions' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.general.KeywordDefinition.KeywordDefinitionStore.keywordDefinitions

child 
link to class KeywordDefinition
  @param  Kwdf_KeywordDefinitionStore self
  @returns  all value that satisfy the conditions 
**/
ApiSet Kwdf_KeywordDefinitionStore_FindAllKeywordDefinitions_keyval0(Kwdf_KeywordDefinitionStore self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Kwdf_KeywordDefinitionStore_FindAllKeywordDefinitions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.general.KeywordDefinition.KeywordDefinitionStore.keywordDefinitions

child 
link to class KeywordDefinition
  @param  Kwdf_KeywordDefinitionStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Kwdf_KeywordDefinitionStore_FindAllKeywordDefinitions_keyval1(Kwdf_KeywordDefinitionStore self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Kwdf_KeywordDefinitionStore_FindAllKeywordDefinitions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.general.KeywordDefinition.KeywordDefinitionStore.keywordDefinitions

child 
link to class KeywordDefinition
  @param  Kwdf_KeywordDefinitionStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Kwdf_KeywordDefinitionStore_FindAllKeywordDefinitions_keyval2(Kwdf_KeywordDefinitionStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Kwdf_KeywordDefinitionStore_FindAllKeywordDefinitions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.general.KeywordDefinition.KeywordDefinitionStore.keywordDefinitions

child 
link to class KeywordDefinition
  @param  Kwdf_KeywordDefinitionStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Kwdf_KeywordDefinitionStore_FindAllKeywordDefinitions_keyval3(Kwdf_KeywordDefinitionStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Kwdf_KeywordDefinitionStore_FindAllKeywordDefinitions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.general.KeywordDefinition.KeywordDefinitionStore.keywordDefinitions

child 
link to class KeywordDefinition
  @param  Kwdf_KeywordDefinitionStore self
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
ApiSet Kwdf_KeywordDefinitionStore_FindAllKeywordDefinitions_keyval4(Kwdf_KeywordDefinitionStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Kwdf_KeywordDefinitionStore_FindAllKeywordDefinitions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Kwdf_KeywordDefinitionStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Kwdf_KeywordDefinitionStore_FindFirstActiveRepository(Kwdf_KeywordDefinitionStore self, ApiMap conditions)
{
  
  Impl_Repository obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstActiveRepository");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: cannot find method 'findFirstActiveRepository'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: method 'findFirstActiveRepository' is not callable");
  
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
  @param  Kwdf_KeywordDefinitionStore self
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Kwdf_KeywordDefinitionStore_FindFirstActiveRepository_keyval0(Kwdf_KeywordDefinitionStore self)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Kwdf_KeywordDefinitionStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Kwdf_KeywordDefinitionStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Kwdf_KeywordDefinitionStore_FindFirstActiveRepository_keyval1(Kwdf_KeywordDefinitionStore self, char * key, ApiObject value)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Kwdf_KeywordDefinitionStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Kwdf_KeywordDefinitionStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Kwdf_KeywordDefinitionStore_FindFirstActiveRepository_keyval2(Kwdf_KeywordDefinitionStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Kwdf_KeywordDefinitionStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Kwdf_KeywordDefinitionStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Kwdf_KeywordDefinitionStore_FindFirstActiveRepository_keyval3(Kwdf_KeywordDefinitionStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Kwdf_KeywordDefinitionStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Kwdf_KeywordDefinitionStore self
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
Impl_Repository Kwdf_KeywordDefinitionStore_FindFirstActiveRepository_keyval4(Kwdf_KeywordDefinitionStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Kwdf_KeywordDefinitionStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Kwdf_KeywordDefinitionStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Kwdf_KeywordDefinitionStore_FindFirstApplicationData(Kwdf_KeywordDefinitionStore self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: method 'findFirstApplicationData' is not callable");
  
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
  @param  Kwdf_KeywordDefinitionStore self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Kwdf_KeywordDefinitionStore_FindFirstApplicationData_keyval0(Kwdf_KeywordDefinitionStore self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Kwdf_KeywordDefinitionStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Kwdf_KeywordDefinitionStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Kwdf_KeywordDefinitionStore_FindFirstApplicationData_keyval1(Kwdf_KeywordDefinitionStore self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Kwdf_KeywordDefinitionStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Kwdf_KeywordDefinitionStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Kwdf_KeywordDefinitionStore_FindFirstApplicationData_keyval2(Kwdf_KeywordDefinitionStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Kwdf_KeywordDefinitionStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Kwdf_KeywordDefinitionStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Kwdf_KeywordDefinitionStore_FindFirstApplicationData_keyval3(Kwdf_KeywordDefinitionStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Kwdf_KeywordDefinitionStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Kwdf_KeywordDefinitionStore self
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
Impl_ApplicationData Kwdf_KeywordDefinitionStore_FindFirstApplicationData_keyval4(Kwdf_KeywordDefinitionStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Kwdf_KeywordDefinitionStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.KeywordDefinition.KeywordDefinitionStore.keywordDefinitions

child 
link to class KeywordDefinition
  @param  Kwdf_KeywordDefinitionStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Kwdf_KeywordDefinition Kwdf_KeywordDefinitionStore_FindFirstKeywordDefinition(Kwdf_KeywordDefinitionStore self, ApiMap conditions)
{
  
  Kwdf_KeywordDefinition obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstKeywordDefinition");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: cannot find method 'findFirstKeywordDefinition'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: method 'findFirstKeywordDefinition' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.KeywordDefinition.KeywordDefinitionStore.keywordDefinitions

child 
link to class KeywordDefinition
  @param  Kwdf_KeywordDefinitionStore self
  @returns  the first value that satisfies the conditions 
**/
Kwdf_KeywordDefinition Kwdf_KeywordDefinitionStore_FindFirstKeywordDefinition_keyval0(Kwdf_KeywordDefinitionStore self)
{
  
  Kwdf_KeywordDefinition  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Kwdf_KeywordDefinitionStore_FindFirstKeywordDefinition(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.KeywordDefinition.KeywordDefinitionStore.keywordDefinitions

child 
link to class KeywordDefinition
  @param  Kwdf_KeywordDefinitionStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Kwdf_KeywordDefinition Kwdf_KeywordDefinitionStore_FindFirstKeywordDefinition_keyval1(Kwdf_KeywordDefinitionStore self, char * key, ApiObject value)
{
  
  Kwdf_KeywordDefinition  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Kwdf_KeywordDefinitionStore_FindFirstKeywordDefinition(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.KeywordDefinition.KeywordDefinitionStore.keywordDefinitions

child 
link to class KeywordDefinition
  @param  Kwdf_KeywordDefinitionStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Kwdf_KeywordDefinition Kwdf_KeywordDefinitionStore_FindFirstKeywordDefinition_keyval2(Kwdf_KeywordDefinitionStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Kwdf_KeywordDefinition  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Kwdf_KeywordDefinitionStore_FindFirstKeywordDefinition(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.KeywordDefinition.KeywordDefinitionStore.keywordDefinitions

child 
link to class KeywordDefinition
  @param  Kwdf_KeywordDefinitionStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Kwdf_KeywordDefinition Kwdf_KeywordDefinitionStore_FindFirstKeywordDefinition_keyval3(Kwdf_KeywordDefinitionStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Kwdf_KeywordDefinition  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Kwdf_KeywordDefinitionStore_FindFirstKeywordDefinition(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.KeywordDefinition.KeywordDefinitionStore.keywordDefinitions

child 
link to class KeywordDefinition
  @param  Kwdf_KeywordDefinitionStore self
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
Kwdf_KeywordDefinition Kwdf_KeywordDefinitionStore_FindFirstKeywordDefinition_keyval4(Kwdf_KeywordDefinitionStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Kwdf_KeywordDefinition  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Kwdf_KeywordDefinitionStore_FindFirstKeywordDefinition(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.general.KeywordDefinition.KeywordDefinitionStore
  @param  Kwdf_KeywordDefinitionStore self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Kwdf_KeywordDefinitionStore_Get(Kwdf_KeywordDefinitionStore self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Kwdf_KeywordDefinitionStore self
  @returns   the result
**/
Acco_AccessObject Kwdf_KeywordDefinitionStore_GetAccess(Kwdf_KeywordDefinitionStore self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: method 'getAccess' is not callable");
  
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
  @param  Kwdf_KeywordDefinitionStore self
  @returns   the result
**/
ApiList Kwdf_KeywordDefinitionStore_GetActiveRepositories(Kwdf_KeywordDefinitionStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveRepositories");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: cannot find method 'getActiveRepositories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: method 'getActiveRepositories' is not callable");
  
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
  @param  Kwdf_KeywordDefinitionStore self
  @returns   the result
**/
ApiList Kwdf_KeywordDefinitionStore_GetApplicationData(Kwdf_KeywordDefinitionStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.general.KeywordDefinition.KeywordDefinitionStore
  @param  Kwdf_KeywordDefinitionStore self
  @param  Impl_MemopsRoot startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Kwdf_KeywordDefinitionStore Kwdf_KeywordDefinitionStore_GetByKey(Kwdf_KeywordDefinitionStore self, Impl_MemopsRoot startObj, ApiList fullKey)
{
  
  Kwdf_KeywordDefinitionStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: method 'getByKey' is not callable");
  
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
  @param  Kwdf_KeywordDefinitionStore self
  @returns   the result
**/
ApiString Kwdf_KeywordDefinitionStore_GetClassName(Kwdf_KeywordDefinitionStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.general.KeywordDefinition.KeywordDefinitionStore.context

context 
within which keywords are defined. Typically the name of teh program or 
standard that defines them.
  @param  Kwdf_KeywordDefinitionStore self
  @returns   the result
**/
ApiString Kwdf_KeywordDefinitionStore_GetContext(Kwdf_KeywordDefinitionStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getContext");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: cannot find method 'getContext'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: method 'getContext' is not callable");
  
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
  @param  Kwdf_KeywordDefinitionStore self
  @returns   the result
**/
ApiString Kwdf_KeywordDefinitionStore_GetCreatedBy(Kwdf_KeywordDefinitionStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCreatedBy");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: cannot find method 'getCreatedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: method 'getCreatedBy' is not callable");
  
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
  @param  Kwdf_KeywordDefinitionStore self
  @returns   the result
**/
ApiList Kwdf_KeywordDefinitionStore_GetFieldNames(Kwdf_KeywordDefinitionStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.general.KeywordDefinition.KeywordDefinitionStore
  @param  Kwdf_KeywordDefinitionStore self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Kwdf_KeywordDefinitionStore_GetFullKey(Kwdf_KeywordDefinitionStore self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: method 'getFullKey' is not callable");
  
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
  @param  Kwdf_KeywordDefinitionStore self
  @returns   the result
**/
ApiString Kwdf_KeywordDefinitionStore_GetGuid(Kwdf_KeywordDefinitionStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getGuid");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: cannot find method 'getGuid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: method 'getGuid' is not callable");
  
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
  @param  Kwdf_KeywordDefinitionStore self
  @returns   the result
**/
ApiBoolean Kwdf_KeywordDefinitionStore_GetInConstructor(Kwdf_KeywordDefinitionStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: method 'getInConstructor' is not callable");
  
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
  @param  Kwdf_KeywordDefinitionStore self
  @returns   the result
**/
ApiBoolean Kwdf_KeywordDefinitionStore_GetIsDeleted(Kwdf_KeywordDefinitionStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: method 'getIsDeleted' is not callable");
  
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
  @param  Kwdf_KeywordDefinitionStore self
  @returns   the result
**/
ApiBoolean Kwdf_KeywordDefinitionStore_GetIsLoaded(Kwdf_KeywordDefinitionStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsLoaded");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: cannot find method 'getIsLoaded'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: method 'getIsLoaded' is not callable");
  
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
  @param  Kwdf_KeywordDefinitionStore self
  @returns   the result
**/
ApiBoolean Kwdf_KeywordDefinitionStore_GetIsModifiable(Kwdf_KeywordDefinitionStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsModifiable");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: cannot find method 'getIsModifiable'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: method 'getIsModifiable' is not callable");
  
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
  @param  Kwdf_KeywordDefinitionStore self
  @returns   the result
**/
ApiBoolean Kwdf_KeywordDefinitionStore_GetIsModified(Kwdf_KeywordDefinitionStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsModified");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: cannot find method 'getIsModified'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: method 'getIsModified' is not callable");
  
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
  @param  Kwdf_KeywordDefinitionStore self
  @returns   the result
**/
ApiBoolean Kwdf_KeywordDefinitionStore_GetIsReading(Kwdf_KeywordDefinitionStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsReading");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: cannot find method 'getIsReading'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: method 'getIsReading' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.general.KeywordDefinition.KeywordDefinitionStore.keywordDefinitions

child 
link to class KeywordDefinition
  @param  Kwdf_KeywordDefinitionStore self
  @returns   the result
**/
ApiSet Kwdf_KeywordDefinitionStore_GetKeywordDefinitions(Kwdf_KeywordDefinitionStore self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getKeywordDefinitions");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: cannot find method 'getKeywordDefinitions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: method 'getKeywordDefinitions' is not callable");
  
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
  @param  Kwdf_KeywordDefinitionStore self
  @returns   the result
**/
ApiString Kwdf_KeywordDefinitionStore_GetLastUnlockedBy(Kwdf_KeywordDefinitionStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLastUnlockedBy");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: cannot find method 'getLastUnlockedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: method 'getLastUnlockedBy' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.general.KeywordDefinition.KeywordDefinitionStore
  @param  Kwdf_KeywordDefinitionStore self
  @returns  Local object key
**/
ApiObject Kwdf_KeywordDefinitionStore_GetLocalKey(Kwdf_KeywordDefinitionStore self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.general.KeywordDefinition.KeywordDefinitionStore.memopsRoot

parent 
link
  @param  Kwdf_KeywordDefinitionStore self
  @returns   the result
**/
Impl_MemopsRoot Kwdf_KeywordDefinitionStore_GetMemopsRoot(Kwdf_KeywordDefinitionStore self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMemopsRoot");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: cannot find method 'getMemopsRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: method 'getMemopsRoot' is not callable");
  
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
  @param  Kwdf_KeywordDefinitionStore self
  @returns   the result
**/
Impl_PackageLocator Kwdf_KeywordDefinitionStore_GetPackageLocator(Kwdf_KeywordDefinitionStore self)
{
  
  Impl_PackageLocator obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageLocator");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: cannot find method 'getPackageLocator'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: method 'getPackageLocator' is not callable");
  
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
  @param  Kwdf_KeywordDefinitionStore self
  @returns   the result
**/
ApiString Kwdf_KeywordDefinitionStore_GetPackageName(Kwdf_KeywordDefinitionStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: method 'getPackageName' is not callable");
  
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
  @param  Kwdf_KeywordDefinitionStore self
  @returns   the result
**/
ApiString Kwdf_KeywordDefinitionStore_GetPackageShortName(Kwdf_KeywordDefinitionStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.general.KeywordDefinition.KeywordDefinitionStore.parent

link to 
parent object - synonym for memopsRoot
  @param  Kwdf_KeywordDefinitionStore self
  @returns   the result
**/
Impl_MemopsRoot Kwdf_KeywordDefinitionStore_GetParent(Kwdf_KeywordDefinitionStore self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: method 'getParent' is not callable");
  
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
  @param  Kwdf_KeywordDefinitionStore self
  @returns   the result
**/
ApiString Kwdf_KeywordDefinitionStore_GetQualifiedName(Kwdf_KeywordDefinitionStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: method 'getQualifiedName' is not callable");
  
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
  @param  Kwdf_KeywordDefinitionStore self
  @returns   the result
**/
Impl_MemopsRoot Kwdf_KeywordDefinitionStore_GetRoot(Kwdf_KeywordDefinitionStore self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: method 'getRoot' is not callable");
  
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
  @param  Kwdf_KeywordDefinitionStore self
  @returns   the result
**/
Impl_TopObject Kwdf_KeywordDefinitionStore_GetTopObject(Kwdf_KeywordDefinitionStore self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.general.KeywordDefinition.KeywordDefinitionStore
  @param  Impl_MemopsRoot parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Kwdf_KeywordDefinitionStore Kwdf_KeywordDefinitionStore_Init(Impl_MemopsRoot parent, ApiMap attrlinks)
{
  
  return Impl_MemopsRoot_NewKeywordDefinitionStore(parent, attrlinks);
}

/**
  Constructor for ccp.general.KeywordDefinition.KeywordDefinitionStore
  @param  Impl_MemopsRoot parent
  @param  char * context
  @returns  the new object
**/
Kwdf_KeywordDefinitionStore Kwdf_KeywordDefinitionStore_Init_reqd(Impl_MemopsRoot parent, char * context)
{
  
  Kwdf_KeywordDefinitionStore  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__context = ApiString_New(context);

  PyDict_SetItemString(attrlinks, "context", api__context);
  
  obj = Kwdf_KeywordDefinitionStore_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__context);
  
  return obj;
}

/**
  Factory function to create 
ccp.general.KeywordDefinition.KeywordDefinition
  @param  Kwdf_KeywordDefinitionStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Kwdf_KeywordDefinition Kwdf_KeywordDefinitionStore_NewKeywordDefinition(Kwdf_KeywordDefinitionStore self, ApiMap attrlinks)
{
  
  Kwdf_KeywordDefinition obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newKeywordDefinition");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: cannot find method 'newKeywordDefinition'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: method 'newKeywordDefinition' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create 
ccp.general.KeywordDefinition.KeywordDefinition
  @param  Kwdf_KeywordDefinitionStore self
  @param  char * keyword
  @returns  the new object
**/
Kwdf_KeywordDefinition Kwdf_KeywordDefinitionStore_NewKeywordDefinition_reqd(Kwdf_KeywordDefinitionStore self, char * keyword)
{
  
  Kwdf_KeywordDefinition  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__keyword = ApiString_New(keyword);

  PyDict_SetItemString(attrlinks, "keyword", api__keyword);
  
  obj = Kwdf_KeywordDefinitionStore_NewKeywordDefinition(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__keyword);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Kwdf_KeywordDefinitionStore self
  @param  Impl_ApplicationData value
**/
void *Kwdf_KeywordDefinitionStore_RemoveApplicationData(Kwdf_KeywordDefinitionStore self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.general.KeywordDefinition.KeywordDefinitionStore
  @param  Kwdf_KeywordDefinitionStore self
  @param  ApiString name
  @param  ApiObject value
**/
void *Kwdf_KeywordDefinitionStore_Set(Kwdf_KeywordDefinitionStore self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Kwdf_KeywordDefinitionStore self
  @param  Acco_AccessObject value
**/
void *Kwdf_KeywordDefinitionStore_SetAccess(Kwdf_KeywordDefinitionStore self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: method 'setAccess' is not callable");
  
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
  @param  Kwdf_KeywordDefinitionStore self
  @param  ApiList values
**/
void *Kwdf_KeywordDefinitionStore_SetApplicationData(Kwdf_KeywordDefinitionStore self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.general.KeywordDefinition.KeywordDefinitionStore.context

context 
within which keywords are defined. Typically the name of teh program or 
standard that defines them.
  @param  Kwdf_KeywordDefinitionStore self
  @param  ApiString value
**/
void *Kwdf_KeywordDefinitionStore_SetContext(Kwdf_KeywordDefinitionStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setContext");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: cannot find method 'setContext'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: method 'setContext' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.TopObject.createdBy

user who created 
TopObject.
  @param  Kwdf_KeywordDefinitionStore self
  @param  ApiString value
**/
void *Kwdf_KeywordDefinitionStore_SetCreatedBy(Kwdf_KeywordDefinitionStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCreatedBy");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: cannot find method 'setCreatedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: method 'setCreatedBy' is not callable");
  
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
  @param  Kwdf_KeywordDefinitionStore self
  @param  ApiString value
**/
void *Kwdf_KeywordDefinitionStore_SetGuid(Kwdf_KeywordDefinitionStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setGuid");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: cannot find method 'setGuid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: method 'setGuid' is not callable");
  
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
  @param  Kwdf_KeywordDefinitionStore self
  @param  ApiBoolean value
**/
void *Kwdf_KeywordDefinitionStore_SetIsModifiable(Kwdf_KeywordDefinitionStore self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsModifiable");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: cannot find method 'setIsModifiable'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: method 'setIsModifiable' is not callable");
  
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
  @param  Kwdf_KeywordDefinitionStore self
  @param  ApiString value
**/
void *Kwdf_KeywordDefinitionStore_SetLastUnlockedBy(Kwdf_KeywordDefinitionStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLastUnlockedBy");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: cannot find method 'setLastUnlockedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: method 'setLastUnlockedBy' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.general.KeywordDefinition.KeywordDefinitionStore.keywordDefinitions

child 
link to class KeywordDefinition
  @param  Kwdf_KeywordDefinitionStore self
  @returns   the result
**/
ApiList Kwdf_KeywordDefinitionStore_SortedKeywordDefinitions(Kwdf_KeywordDefinitionStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedKeywordDefinitions");
  
  if (!method)
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: cannot find method 'sortedKeywordDefinitions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.KeywordDefinition.KeywordDefinitionStore: method 'sortedKeywordDefinitions' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
