
#include "ccp.h"

/*
  grouping of data locaations and file descriptors
*/

/* package ccp.api.general.DataLocation */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_DataLocationStore self
  @param  Impl_ApplicationData value
**/
void *Dloc_DataLocationStore_AddApplicationData(Dloc_DataLocationStore self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.general.DataLocation.DataLocationStore
  @param  Dloc_DataLocationStore self
  @param  ApiBoolean complete
**/
void *Dloc_DataLocationStore_CheckAllValid(Dloc_DataLocationStore self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.general.DataLocation.DataLocationStore
  @param  Dloc_DataLocationStore self
  @param  ApiBoolean complete
**/
void *Dloc_DataLocationStore_CheckValid(Dloc_DataLocationStore self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: method 'checkValid' is not callable");
  
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
  @param  Dloc_DataLocationStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Dloc_DataLocationStore_FindAllActiveRepositories(Dloc_DataLocationStore self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllActiveRepositories");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: cannot find method 'findAllActiveRepositories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: method 'findAllActiveRepositories' is not callable");
  
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
  @param  Dloc_DataLocationStore self
  @returns  all value that satisfy the conditions 
**/
ApiList Dloc_DataLocationStore_FindAllActiveRepositories_keyval0(Dloc_DataLocationStore self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Dloc_DataLocationStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Dloc_DataLocationStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Dloc_DataLocationStore_FindAllActiveRepositories_keyval1(Dloc_DataLocationStore self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Dloc_DataLocationStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Dloc_DataLocationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Dloc_DataLocationStore_FindAllActiveRepositories_keyval2(Dloc_DataLocationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Dloc_DataLocationStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Dloc_DataLocationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Dloc_DataLocationStore_FindAllActiveRepositories_keyval3(Dloc_DataLocationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Dloc_DataLocationStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Dloc_DataLocationStore self
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
ApiList Dloc_DataLocationStore_FindAllActiveRepositories_keyval4(Dloc_DataLocationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Dloc_DataLocationStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_DataLocationStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Dloc_DataLocationStore_FindAllApplicationData(Dloc_DataLocationStore self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: method 'findAllApplicationData' is not callable");
  
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
  @param  Dloc_DataLocationStore self
  @returns  all value that satisfy the conditions 
**/
ApiList Dloc_DataLocationStore_FindAllApplicationData_keyval0(Dloc_DataLocationStore self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Dloc_DataLocationStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_DataLocationStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Dloc_DataLocationStore_FindAllApplicationData_keyval1(Dloc_DataLocationStore self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Dloc_DataLocationStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_DataLocationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Dloc_DataLocationStore_FindAllApplicationData_keyval2(Dloc_DataLocationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Dloc_DataLocationStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_DataLocationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Dloc_DataLocationStore_FindAllApplicationData_keyval3(Dloc_DataLocationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Dloc_DataLocationStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_DataLocationStore self
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
ApiList Dloc_DataLocationStore_FindAllApplicationData_keyval4(Dloc_DataLocationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Dloc_DataLocationStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.DataLocation.DataLocationStore.dataStores

child 
link to class AbstractDataStore
  @param  Dloc_DataLocationStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Dloc_DataLocationStore_FindAllDataStores(Dloc_DataLocationStore self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllDataStores");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: cannot find method 'findAllDataStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: method 'findAllDataStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.DataLocation.DataLocationStore.dataStores

child 
link to class AbstractDataStore
  @param  Dloc_DataLocationStore self
  @returns  all value that satisfy the conditions 
**/
ApiSet Dloc_DataLocationStore_FindAllDataStores_keyval0(Dloc_DataLocationStore self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Dloc_DataLocationStore_FindAllDataStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.DataLocation.DataLocationStore.dataStores

child 
link to class AbstractDataStore
  @param  Dloc_DataLocationStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Dloc_DataLocationStore_FindAllDataStores_keyval1(Dloc_DataLocationStore self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Dloc_DataLocationStore_FindAllDataStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.DataLocation.DataLocationStore.dataStores

child 
link to class AbstractDataStore
  @param  Dloc_DataLocationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Dloc_DataLocationStore_FindAllDataStores_keyval2(Dloc_DataLocationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Dloc_DataLocationStore_FindAllDataStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.DataLocation.DataLocationStore.dataStores

child 
link to class AbstractDataStore
  @param  Dloc_DataLocationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Dloc_DataLocationStore_FindAllDataStores_keyval3(Dloc_DataLocationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Dloc_DataLocationStore_FindAllDataStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.DataLocation.DataLocationStore.dataStores

child 
link to class AbstractDataStore
  @param  Dloc_DataLocationStore self
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
ApiSet Dloc_DataLocationStore_FindAllDataStores_keyval4(Dloc_DataLocationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Dloc_DataLocationStore_FindAllDataStores(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.DataLocation.DataLocationStore.dataUrls

child 
link to class DataUrl
  @param  Dloc_DataLocationStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Dloc_DataLocationStore_FindAllDataUrls(Dloc_DataLocationStore self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllDataUrls");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: cannot find method 'findAllDataUrls'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: method 'findAllDataUrls' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.DataLocation.DataLocationStore.dataUrls

child 
link to class DataUrl
  @param  Dloc_DataLocationStore self
  @returns  all value that satisfy the conditions 
**/
ApiSet Dloc_DataLocationStore_FindAllDataUrls_keyval0(Dloc_DataLocationStore self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Dloc_DataLocationStore_FindAllDataUrls(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.DataLocation.DataLocationStore.dataUrls

child 
link to class DataUrl
  @param  Dloc_DataLocationStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Dloc_DataLocationStore_FindAllDataUrls_keyval1(Dloc_DataLocationStore self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Dloc_DataLocationStore_FindAllDataUrls(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.DataLocation.DataLocationStore.dataUrls

child 
link to class DataUrl
  @param  Dloc_DataLocationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Dloc_DataLocationStore_FindAllDataUrls_keyval2(Dloc_DataLocationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Dloc_DataLocationStore_FindAllDataUrls(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.DataLocation.DataLocationStore.dataUrls

child 
link to class DataUrl
  @param  Dloc_DataLocationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Dloc_DataLocationStore_FindAllDataUrls_keyval3(Dloc_DataLocationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Dloc_DataLocationStore_FindAllDataUrls(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.DataLocation.DataLocationStore.dataUrls

child 
link to class DataUrl
  @param  Dloc_DataLocationStore self
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
ApiSet Dloc_DataLocationStore_FindAllDataUrls_keyval4(Dloc_DataLocationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Dloc_DataLocationStore_FindAllDataUrls(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Dloc_DataLocationStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Dloc_DataLocationStore_FindFirstActiveRepository(Dloc_DataLocationStore self, ApiMap conditions)
{
  
  Impl_Repository obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstActiveRepository");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: cannot find method 'findFirstActiveRepository'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: method 'findFirstActiveRepository' is not callable");
  
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
  @param  Dloc_DataLocationStore self
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Dloc_DataLocationStore_FindFirstActiveRepository_keyval0(Dloc_DataLocationStore self)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Dloc_DataLocationStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Dloc_DataLocationStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Dloc_DataLocationStore_FindFirstActiveRepository_keyval1(Dloc_DataLocationStore self, char * key, ApiObject value)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Dloc_DataLocationStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Dloc_DataLocationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Dloc_DataLocationStore_FindFirstActiveRepository_keyval2(Dloc_DataLocationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Dloc_DataLocationStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Dloc_DataLocationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Dloc_DataLocationStore_FindFirstActiveRepository_keyval3(Dloc_DataLocationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Dloc_DataLocationStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Dloc_DataLocationStore self
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
Impl_Repository Dloc_DataLocationStore_FindFirstActiveRepository_keyval4(Dloc_DataLocationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Dloc_DataLocationStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_DataLocationStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Dloc_DataLocationStore_FindFirstApplicationData(Dloc_DataLocationStore self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: method 'findFirstApplicationData' is not callable");
  
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
  @param  Dloc_DataLocationStore self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Dloc_DataLocationStore_FindFirstApplicationData_keyval0(Dloc_DataLocationStore self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Dloc_DataLocationStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_DataLocationStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Dloc_DataLocationStore_FindFirstApplicationData_keyval1(Dloc_DataLocationStore self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Dloc_DataLocationStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_DataLocationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Dloc_DataLocationStore_FindFirstApplicationData_keyval2(Dloc_DataLocationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Dloc_DataLocationStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_DataLocationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Dloc_DataLocationStore_FindFirstApplicationData_keyval3(Dloc_DataLocationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Dloc_DataLocationStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_DataLocationStore self
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
Impl_ApplicationData Dloc_DataLocationStore_FindFirstApplicationData_keyval4(Dloc_DataLocationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Dloc_DataLocationStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.DataLocation.DataLocationStore.dataStores

child link to 
class AbstractDataStore
  @param  Dloc_DataLocationStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Dloc_AbstractDataStore Dloc_DataLocationStore_FindFirstDataStore(Dloc_DataLocationStore self, ApiMap conditions)
{
  
  Dloc_AbstractDataStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstDataStore");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: cannot find method 'findFirstDataStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: method 'findFirstDataStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.DataLocation.DataLocationStore.dataStores

child link to 
class AbstractDataStore
  @param  Dloc_DataLocationStore self
  @returns  the first value that satisfies the conditions 
**/
Dloc_AbstractDataStore Dloc_DataLocationStore_FindFirstDataStore_keyval0(Dloc_DataLocationStore self)
{
  
  Dloc_AbstractDataStore  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Dloc_DataLocationStore_FindFirstDataStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.DataLocation.DataLocationStore.dataStores

child link to 
class AbstractDataStore
  @param  Dloc_DataLocationStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Dloc_AbstractDataStore Dloc_DataLocationStore_FindFirstDataStore_keyval1(Dloc_DataLocationStore self, char * key, ApiObject value)
{
  
  Dloc_AbstractDataStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Dloc_DataLocationStore_FindFirstDataStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.DataLocation.DataLocationStore.dataStores

child link to 
class AbstractDataStore
  @param  Dloc_DataLocationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Dloc_AbstractDataStore Dloc_DataLocationStore_FindFirstDataStore_keyval2(Dloc_DataLocationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Dloc_AbstractDataStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Dloc_DataLocationStore_FindFirstDataStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.DataLocation.DataLocationStore.dataStores

child link to 
class AbstractDataStore
  @param  Dloc_DataLocationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Dloc_AbstractDataStore Dloc_DataLocationStore_FindFirstDataStore_keyval3(Dloc_DataLocationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Dloc_AbstractDataStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Dloc_DataLocationStore_FindFirstDataStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.DataLocation.DataLocationStore.dataStores

child link to 
class AbstractDataStore
  @param  Dloc_DataLocationStore self
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
Dloc_AbstractDataStore Dloc_DataLocationStore_FindFirstDataStore_keyval4(Dloc_DataLocationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Dloc_AbstractDataStore  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Dloc_DataLocationStore_FindFirstDataStore(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.DataLocation.DataLocationStore.dataUrls

child 
link to class DataUrl
  @param  Dloc_DataLocationStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Dloc_DataUrl Dloc_DataLocationStore_FindFirstDataUrl(Dloc_DataLocationStore self, ApiMap conditions)
{
  
  Dloc_DataUrl obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstDataUrl");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: cannot find method 'findFirstDataUrl'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: method 'findFirstDataUrl' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.general.DataLocation.DataLocationStore.dataUrls

child 
link to class DataUrl
  @param  Dloc_DataLocationStore self
  @returns  the first value that satisfies the conditions 
**/
Dloc_DataUrl Dloc_DataLocationStore_FindFirstDataUrl_keyval0(Dloc_DataLocationStore self)
{
  
  Dloc_DataUrl  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Dloc_DataLocationStore_FindFirstDataUrl(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.DataLocation.DataLocationStore.dataUrls

child 
link to class DataUrl
  @param  Dloc_DataLocationStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Dloc_DataUrl Dloc_DataLocationStore_FindFirstDataUrl_keyval1(Dloc_DataLocationStore self, char * key, ApiObject value)
{
  
  Dloc_DataUrl  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Dloc_DataLocationStore_FindFirstDataUrl(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.DataLocation.DataLocationStore.dataUrls

child 
link to class DataUrl
  @param  Dloc_DataLocationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Dloc_DataUrl Dloc_DataLocationStore_FindFirstDataUrl_keyval2(Dloc_DataLocationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Dloc_DataUrl  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Dloc_DataLocationStore_FindFirstDataUrl(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.DataLocation.DataLocationStore.dataUrls

child 
link to class DataUrl
  @param  Dloc_DataLocationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Dloc_DataUrl Dloc_DataLocationStore_FindFirstDataUrl_keyval3(Dloc_DataLocationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Dloc_DataUrl  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Dloc_DataLocationStore_FindFirstDataUrl(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.DataLocation.DataLocationStore.dataUrls

child 
link to class DataUrl
  @param  Dloc_DataLocationStore self
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
Dloc_DataUrl Dloc_DataLocationStore_FindFirstDataUrl_keyval4(Dloc_DataLocationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Dloc_DataUrl  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Dloc_DataLocationStore_FindFirstDataUrl(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.general.DataLocation.DataLocationStore
  @param  Dloc_DataLocationStore self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Dloc_DataLocationStore_Get(Dloc_DataLocationStore self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Dloc_DataLocationStore self
  @returns   the result
**/
Acco_AccessObject Dloc_DataLocationStore_GetAccess(Dloc_DataLocationStore self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: method 'getAccess' is not callable");
  
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
  @param  Dloc_DataLocationStore self
  @returns   the result
**/
Acco_AccessObject Dloc_DataLocationStore_GetActiveAccess(Dloc_DataLocationStore self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: method 'getActiveAccess' is not callable");
  
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
  @param  Dloc_DataLocationStore self
  @returns   the result
**/
ApiList Dloc_DataLocationStore_GetActiveRepositories(Dloc_DataLocationStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveRepositories");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: cannot find method 'getActiveRepositories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: method 'getActiveRepositories' is not callable");
  
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
  @param  Dloc_DataLocationStore self
  @returns   the result
**/
ApiList Dloc_DataLocationStore_GetApplicationData(Dloc_DataLocationStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.general.DataLocation.DataLocationStore
  @param  Dloc_DataLocationStore self
  @param  Impl_MemopsRoot startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Dloc_DataLocationStore Dloc_DataLocationStore_GetByKey(Dloc_DataLocationStore self, Impl_MemopsRoot startObj, ApiList fullKey)
{
  
  Dloc_DataLocationStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: method 'getByKey' is not callable");
  
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
  @param  Dloc_DataLocationStore self
  @returns   the result
**/
ApiString Dloc_DataLocationStore_GetClassName(Dloc_DataLocationStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: method 'getClassName' is not callable");
  
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
  @param  Dloc_DataLocationStore self
  @returns   the result
**/
ApiString Dloc_DataLocationStore_GetCreatedBy(Dloc_DataLocationStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCreatedBy");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: cannot find method 'getCreatedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: method 'getCreatedBy' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.DataLocation.DataLocationStore.dataStores

child 
link to class AbstractDataStore
  @param  Dloc_DataLocationStore self
  @returns   the result
**/
ApiSet Dloc_DataLocationStore_GetDataStores(Dloc_DataLocationStore self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDataStores");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: cannot find method 'getDataStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: method 'getDataStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.DataLocation.DataLocationStore.dataUrls

child link 
to class DataUrl
  @param  Dloc_DataLocationStore self
  @returns   the result
**/
ApiSet Dloc_DataLocationStore_GetDataUrls(Dloc_DataLocationStore self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDataUrls");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: cannot find method 'getDataUrls'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: method 'getDataUrls' is not callable");
  
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
  @param  Dloc_DataLocationStore self
  @returns   the result
**/
ApiList Dloc_DataLocationStore_GetFieldNames(Dloc_DataLocationStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.general.DataLocation.DataLocationStore
  @param  Dloc_DataLocationStore self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Dloc_DataLocationStore_GetFullKey(Dloc_DataLocationStore self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: method 'getFullKey' is not callable");
  
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
  @param  Dloc_DataLocationStore self
  @returns   the result
**/
ApiString Dloc_DataLocationStore_GetGuid(Dloc_DataLocationStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getGuid");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: cannot find method 'getGuid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: method 'getGuid' is not callable");
  
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
  @param  Dloc_DataLocationStore self
  @returns   the result
**/
ApiBoolean Dloc_DataLocationStore_GetInConstructor(Dloc_DataLocationStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: method 'getInConstructor' is not callable");
  
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
  @param  Dloc_DataLocationStore self
  @returns   the result
**/
ApiBoolean Dloc_DataLocationStore_GetIsDeleted(Dloc_DataLocationStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: method 'getIsDeleted' is not callable");
  
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
  @param  Dloc_DataLocationStore self
  @returns   the result
**/
ApiBoolean Dloc_DataLocationStore_GetIsLoaded(Dloc_DataLocationStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsLoaded");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: cannot find method 'getIsLoaded'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: method 'getIsLoaded' is not callable");
  
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
  @param  Dloc_DataLocationStore self
  @returns   the result
**/
ApiBoolean Dloc_DataLocationStore_GetIsModifiable(Dloc_DataLocationStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsModifiable");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: cannot find method 'getIsModifiable'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: method 'getIsModifiable' is not callable");
  
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
  @param  Dloc_DataLocationStore self
  @returns   the result
**/
ApiBoolean Dloc_DataLocationStore_GetIsModified(Dloc_DataLocationStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsModified");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: cannot find method 'getIsModified'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: method 'getIsModified' is not callable");
  
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
  @param  Dloc_DataLocationStore self
  @returns   the result
**/
ApiBoolean Dloc_DataLocationStore_GetIsReading(Dloc_DataLocationStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsReading");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: cannot find method 'getIsReading'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: method 'getIsReading' is not callable");
  
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
  @param  Dloc_DataLocationStore self
  @returns   the result
**/
ApiString Dloc_DataLocationStore_GetLastUnlockedBy(Dloc_DataLocationStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLastUnlockedBy");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: cannot find method 'getLastUnlockedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: method 'getLastUnlockedBy' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.general.DataLocation.DataLocationStore
  @param  Dloc_DataLocationStore self
  @returns  Local object key
**/
ApiObject Dloc_DataLocationStore_GetLocalKey(Dloc_DataLocationStore self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.DataLocation.DataLocationStore.memopsRoot

parent 
link
  @param  Dloc_DataLocationStore self
  @returns   the result
**/
Impl_MemopsRoot Dloc_DataLocationStore_GetMemopsRoot(Dloc_DataLocationStore self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMemopsRoot");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: cannot find method 'getMemopsRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: method 'getMemopsRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.DataLocation.DataLocationStore.name

name of 
DataLocationStore - serves as key
  @param  Dloc_DataLocationStore self
  @returns   the result
**/
ApiString Dloc_DataLocationStore_GetName(Dloc_DataLocationStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: method 'getName' is not callable");
  
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
  @param  Dloc_DataLocationStore self
  @returns   the result
**/
Impl_PackageLocator Dloc_DataLocationStore_GetPackageLocator(Dloc_DataLocationStore self)
{
  
  Impl_PackageLocator obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageLocator");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: cannot find method 'getPackageLocator'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: method 'getPackageLocator' is not callable");
  
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
  @param  Dloc_DataLocationStore self
  @returns   the result
**/
ApiString Dloc_DataLocationStore_GetPackageName(Dloc_DataLocationStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: method 'getPackageName' is not callable");
  
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
  @param  Dloc_DataLocationStore self
  @returns   the result
**/
ApiString Dloc_DataLocationStore_GetPackageShortName(Dloc_DataLocationStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.DataLocation.DataLocationStore.parent

link to 
parent object - synonym for memopsRoot
  @param  Dloc_DataLocationStore self
  @returns   the result
**/
Impl_MemopsRoot Dloc_DataLocationStore_GetParent(Dloc_DataLocationStore self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: method 'getParent' is not callable");
  
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
  @param  Dloc_DataLocationStore self
  @returns   the result
**/
ApiString Dloc_DataLocationStore_GetQualifiedName(Dloc_DataLocationStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: method 'getQualifiedName' is not callable");
  
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
  @param  Dloc_DataLocationStore self
  @returns   the result
**/
Impl_MemopsRoot Dloc_DataLocationStore_GetRoot(Dloc_DataLocationStore self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: method 'getRoot' is not callable");
  
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
  @param  Dloc_DataLocationStore self
  @returns   the result
**/
Impl_TopObject Dloc_DataLocationStore_GetTopObject(Dloc_DataLocationStore self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.general.DataLocation.DataLocationStore
  @param  Impl_MemopsRoot parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Dloc_DataLocationStore Dloc_DataLocationStore_Init(Impl_MemopsRoot parent, ApiMap attrlinks)
{
  
  return Impl_MemopsRoot_NewDataLocationStore(parent, attrlinks);
}

/**
  Constructor for ccp.general.DataLocation.DataLocationStore
  @param  Impl_MemopsRoot parent
  @param  char * name
  @returns  the new object
**/
Dloc_DataLocationStore Dloc_DataLocationStore_Init_reqd(Impl_MemopsRoot parent, char * name)
{
  
  Dloc_DataLocationStore  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Dloc_DataLocationStore_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.general.DataLocation.BlockedBinaryMatrix
  @param  Dloc_DataLocationStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Dloc_BlockedBinaryMatrix Dloc_DataLocationStore_NewBlockedBinaryMatrix(Dloc_DataLocationStore self, ApiMap attrlinks)
{
  
  Dloc_BlockedBinaryMatrix obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newBlockedBinaryMatrix");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: cannot find method 'newBlockedBinaryMatrix'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: method 'newBlockedBinaryMatrix' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.general.DataLocation.BlockedBinaryMatrix
  @param  Dloc_DataLocationStore self
  @param  Dloc_DataUrl dataUrl
  @param  char * path
  @returns  the new object
**/
Dloc_BlockedBinaryMatrix Dloc_DataLocationStore_NewBlockedBinaryMatrix_reqd(Dloc_DataLocationStore self, Dloc_DataUrl dataUrl, char * path)
{
  
  Dloc_BlockedBinaryMatrix  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__path = ApiString_New(path);

  PyDict_SetItemString(attrlinks, "dataUrl", dataUrl);
  PyDict_SetItemString(attrlinks, "path", api__path);
  
  obj = Dloc_DataLocationStore_NewBlockedBinaryMatrix(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__path);
  
  return obj;
}

/**
  Factory function to create ccp.general.DataLocation.DataUrl
  @param  Dloc_DataLocationStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Dloc_DataUrl Dloc_DataLocationStore_NewDataUrl(Dloc_DataLocationStore self, ApiMap attrlinks)
{
  
  Dloc_DataUrl obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newDataUrl");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: cannot find method 'newDataUrl'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: method 'newDataUrl' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.general.DataLocation.DataUrl
  @param  Dloc_DataLocationStore self
  @param  Impl_Url url
  @returns  the new object
**/
Dloc_DataUrl Dloc_DataLocationStore_NewDataUrl_reqd(Dloc_DataLocationStore self, Impl_Url url)
{
  
  Dloc_DataUrl  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "url", url);
  
  obj = Dloc_DataLocationStore_NewDataUrl(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.general.DataLocation.MimeTypeDataStore
  @param  Dloc_DataLocationStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Dloc_MimeTypeDataStore Dloc_DataLocationStore_NewMimeTypeDataStore(Dloc_DataLocationStore self, ApiMap attrlinks)
{
  
  Dloc_MimeTypeDataStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newMimeTypeDataStore");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: cannot find method 'newMimeTypeDataStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: method 'newMimeTypeDataStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.general.DataLocation.MimeTypeDataStore
  @param  Dloc_DataLocationStore self
  @param  Dloc_DataUrl dataUrl
  @param  char * mimeType
  @param  char * path
  @returns  the new object
**/
Dloc_MimeTypeDataStore Dloc_DataLocationStore_NewMimeTypeDataStore_reqd(Dloc_DataLocationStore self, Dloc_DataUrl dataUrl, char * mimeType, char * path)
{
  
  Dloc_MimeTypeDataStore  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__mimeType = ApiString_New(mimeType);
  ApiString api__path = ApiString_New(path);

  PyDict_SetItemString(attrlinks, "dataUrl", dataUrl);
  PyDict_SetItemString(attrlinks, "mimeType", api__mimeType);
  PyDict_SetItemString(attrlinks, "path", api__path);
  
  obj = Dloc_DataLocationStore_NewMimeTypeDataStore(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__mimeType);
  Py_DECREF(api__path);
  
  return obj;
}

/**
  Factory function to create ccp.general.DataLocation.ShapeMatrix
  @param  Dloc_DataLocationStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Dloc_ShapeMatrix Dloc_DataLocationStore_NewShapeMatrix(Dloc_DataLocationStore self, ApiMap attrlinks)
{
  
  Dloc_ShapeMatrix obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newShapeMatrix");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: cannot find method 'newShapeMatrix'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: method 'newShapeMatrix' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.general.DataLocation.ShapeMatrix
  @param  Dloc_DataLocationStore self
  @param  Dloc_DataUrl dataUrl
  @param  int isResolved
  @param  ApiInteger numShapes
  @param  char * path
  @returns  the new object
**/
Dloc_ShapeMatrix Dloc_DataLocationStore_NewShapeMatrix_reqd(Dloc_DataLocationStore self, Dloc_DataUrl dataUrl, int isResolved, ApiInteger numShapes, char * path)
{
  
  Dloc_ShapeMatrix  obj;
  PyObject *attrlinks = PyDict_New();
  ApiBoolean api__isResolved = ApiBoolean_New(isResolved);
  ApiString api__path = ApiString_New(path);

  PyDict_SetItemString(attrlinks, "dataUrl", dataUrl);
  PyDict_SetItemString(attrlinks, "isResolved", api__isResolved);
  PyDict_SetItemString(attrlinks, "numShapes", numShapes);
  PyDict_SetItemString(attrlinks, "path", api__path);
  
  obj = Dloc_DataLocationStore_NewShapeMatrix(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__isResolved);
  Py_DECREF(api__path);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dloc_DataLocationStore self
  @param  Impl_ApplicationData value
**/
void *Dloc_DataLocationStore_RemoveApplicationData(Dloc_DataLocationStore self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.general.DataLocation.DataLocationStore
  @param  Dloc_DataLocationStore self
  @param  ApiString name
  @param  ApiObject value
**/
void *Dloc_DataLocationStore_Set(Dloc_DataLocationStore self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Dloc_DataLocationStore self
  @param  Acco_AccessObject value
**/
void *Dloc_DataLocationStore_SetAccess(Dloc_DataLocationStore self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: method 'setAccess' is not callable");
  
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
  @param  Dloc_DataLocationStore self
  @param  ApiList values
**/
void *Dloc_DataLocationStore_SetApplicationData(Dloc_DataLocationStore self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: method 'setApplicationData' is not callable");
  
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
  @param  Dloc_DataLocationStore self
  @param  ApiString value
**/
void *Dloc_DataLocationStore_SetCreatedBy(Dloc_DataLocationStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCreatedBy");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: cannot find method 'setCreatedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: method 'setCreatedBy' is not callable");
  
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
  @param  Dloc_DataLocationStore self
  @param  ApiString value
**/
void *Dloc_DataLocationStore_SetGuid(Dloc_DataLocationStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setGuid");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: cannot find method 'setGuid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: method 'setGuid' is not callable");
  
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
  @param  Dloc_DataLocationStore self
  @param  ApiBoolean value
**/
void *Dloc_DataLocationStore_SetIsModifiable(Dloc_DataLocationStore self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsModifiable");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: cannot find method 'setIsModifiable'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: method 'setIsModifiable' is not callable");
  
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
  @param  Dloc_DataLocationStore self
  @param  ApiString value
**/
void *Dloc_DataLocationStore_SetLastUnlockedBy(Dloc_DataLocationStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLastUnlockedBy");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: cannot find method 'setLastUnlockedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: method 'setLastUnlockedBy' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.DataLocation.DataLocationStore.name

name of 
DataLocationStore - serves as key
  @param  Dloc_DataLocationStore self
  @param  ApiString value
**/
void *Dloc_DataLocationStore_SetName(Dloc_DataLocationStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.general.DataLocation.DataLocationStore.dataStores

child 
link to class AbstractDataStore
  @param  Dloc_DataLocationStore self
  @returns   the result
**/
ApiList Dloc_DataLocationStore_SortedDataStores(Dloc_DataLocationStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedDataStores");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: cannot find method 'sortedDataStores'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: method 'sortedDataStores' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.general.DataLocation.DataLocationStore.dataUrls

child 
link to class DataUrl
  @param  Dloc_DataLocationStore self
  @returns   the result
**/
ApiList Dloc_DataLocationStore_SortedDataUrls(Dloc_DataLocationStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedDataUrls");
  
  if (!method)
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: cannot find method 'sortedDataUrls'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.DataLocation.DataLocationStore: method 'sortedDataUrls' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
