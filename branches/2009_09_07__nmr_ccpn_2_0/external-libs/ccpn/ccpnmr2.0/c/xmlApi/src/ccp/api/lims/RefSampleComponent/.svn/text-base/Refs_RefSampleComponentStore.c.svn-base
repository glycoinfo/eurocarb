
#include "ccp.h"

/*
  TopObject for RefSampleComponent package
*/

/* package ccp.api.lims.RefSampleComponent */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_RefSampleComponentStore self
  @param  Impl_ApplicationData value
**/
void *Refs_RefSampleComponentStore_AddApplicationData(Refs_RefSampleComponentStore self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.lims.RefSampleComponent.RefSampleComponentStore
  @param  Refs_RefSampleComponentStore self
  @param  ApiBoolean complete
**/
void *Refs_RefSampleComponentStore_CheckAllValid(Refs_RefSampleComponentStore self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.lims.RefSampleComponent.RefSampleComponentStore
  @param  Refs_RefSampleComponentStore self
  @param  ApiBoolean complete
**/
void *Refs_RefSampleComponentStore_CheckValid(Refs_RefSampleComponentStore self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: method 'checkValid' is not callable");
  
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
  @param  Refs_RefSampleComponentStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Refs_RefSampleComponentStore_FindAllActiveRepositories(Refs_RefSampleComponentStore self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllActiveRepositories");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: cannot find method 'findAllActiveRepositories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: method 'findAllActiveRepositories' is not callable");
  
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
  @param  Refs_RefSampleComponentStore self
  @returns  all value that satisfy the conditions 
**/
ApiList Refs_RefSampleComponentStore_FindAllActiveRepositories_keyval0(Refs_RefSampleComponentStore self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_RefSampleComponentStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Refs_RefSampleComponentStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Refs_RefSampleComponentStore_FindAllActiveRepositories_keyval1(Refs_RefSampleComponentStore self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_RefSampleComponentStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Refs_RefSampleComponentStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Refs_RefSampleComponentStore_FindAllActiveRepositories_keyval2(Refs_RefSampleComponentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_RefSampleComponentStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Refs_RefSampleComponentStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Refs_RefSampleComponentStore_FindAllActiveRepositories_keyval3(Refs_RefSampleComponentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_RefSampleComponentStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Refs_RefSampleComponentStore self
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
ApiList Refs_RefSampleComponentStore_FindAllActiveRepositories_keyval4(Refs_RefSampleComponentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_RefSampleComponentStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_RefSampleComponentStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Refs_RefSampleComponentStore_FindAllApplicationData(Refs_RefSampleComponentStore self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: method 'findAllApplicationData' is not callable");
  
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
  @param  Refs_RefSampleComponentStore self
  @returns  all value that satisfy the conditions 
**/
ApiList Refs_RefSampleComponentStore_FindAllApplicationData_keyval0(Refs_RefSampleComponentStore self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_RefSampleComponentStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_RefSampleComponentStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Refs_RefSampleComponentStore_FindAllApplicationData_keyval1(Refs_RefSampleComponentStore self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_RefSampleComponentStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_RefSampleComponentStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Refs_RefSampleComponentStore_FindAllApplicationData_keyval2(Refs_RefSampleComponentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_RefSampleComponentStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_RefSampleComponentStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Refs_RefSampleComponentStore_FindAllApplicationData_keyval3(Refs_RefSampleComponentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_RefSampleComponentStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_RefSampleComponentStore self
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
ApiList Refs_RefSampleComponentStore_FindAllApplicationData_keyval4(Refs_RefSampleComponentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_RefSampleComponentStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.RefSampleComponentStore.components

child 
link to class AbstractComponent
  @param  Refs_RefSampleComponentStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_RefSampleComponentStore_FindAllComponents(Refs_RefSampleComponentStore self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllComponents");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: cannot find method 'findAllComponents'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: method 'findAllComponents' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.RefSampleComponentStore.components

child 
link to class AbstractComponent
  @param  Refs_RefSampleComponentStore self
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_RefSampleComponentStore_FindAllComponents_keyval0(Refs_RefSampleComponentStore self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_RefSampleComponentStore_FindAllComponents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.RefSampleComponentStore.components

child 
link to class AbstractComponent
  @param  Refs_RefSampleComponentStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_RefSampleComponentStore_FindAllComponents_keyval1(Refs_RefSampleComponentStore self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_RefSampleComponentStore_FindAllComponents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.RefSampleComponentStore.components

child 
link to class AbstractComponent
  @param  Refs_RefSampleComponentStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_RefSampleComponentStore_FindAllComponents_keyval2(Refs_RefSampleComponentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_RefSampleComponentStore_FindAllComponents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.RefSampleComponentStore.components

child 
link to class AbstractComponent
  @param  Refs_RefSampleComponentStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Refs_RefSampleComponentStore_FindAllComponents_keyval3(Refs_RefSampleComponentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_RefSampleComponentStore_FindAllComponents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.lims.RefSampleComponent.RefSampleComponentStore.components

child 
link to class AbstractComponent
  @param  Refs_RefSampleComponentStore self
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
ApiSet Refs_RefSampleComponentStore_FindAllComponents_keyval4(Refs_RefSampleComponentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_RefSampleComponentStore_FindAllComponents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Refs_RefSampleComponentStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Refs_RefSampleComponentStore_FindFirstActiveRepository(Refs_RefSampleComponentStore self, ApiMap conditions)
{
  
  Impl_Repository obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstActiveRepository");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: cannot find method 'findFirstActiveRepository'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: method 'findFirstActiveRepository' is not callable");
  
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
  @param  Refs_RefSampleComponentStore self
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Refs_RefSampleComponentStore_FindFirstActiveRepository_keyval0(Refs_RefSampleComponentStore self)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_RefSampleComponentStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Refs_RefSampleComponentStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Refs_RefSampleComponentStore_FindFirstActiveRepository_keyval1(Refs_RefSampleComponentStore self, char * key, ApiObject value)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_RefSampleComponentStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Refs_RefSampleComponentStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Refs_RefSampleComponentStore_FindFirstActiveRepository_keyval2(Refs_RefSampleComponentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_RefSampleComponentStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Refs_RefSampleComponentStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Refs_RefSampleComponentStore_FindFirstActiveRepository_keyval3(Refs_RefSampleComponentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_RefSampleComponentStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Refs_RefSampleComponentStore self
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
Impl_Repository Refs_RefSampleComponentStore_FindFirstActiveRepository_keyval4(Refs_RefSampleComponentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_RefSampleComponentStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_RefSampleComponentStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Refs_RefSampleComponentStore_FindFirstApplicationData(Refs_RefSampleComponentStore self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: method 'findFirstApplicationData' is not callable");
  
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
  @param  Refs_RefSampleComponentStore self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Refs_RefSampleComponentStore_FindFirstApplicationData_keyval0(Refs_RefSampleComponentStore self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_RefSampleComponentStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_RefSampleComponentStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Refs_RefSampleComponentStore_FindFirstApplicationData_keyval1(Refs_RefSampleComponentStore self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_RefSampleComponentStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_RefSampleComponentStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Refs_RefSampleComponentStore_FindFirstApplicationData_keyval2(Refs_RefSampleComponentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_RefSampleComponentStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_RefSampleComponentStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Refs_RefSampleComponentStore_FindFirstApplicationData_keyval3(Refs_RefSampleComponentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_RefSampleComponentStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_RefSampleComponentStore self
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
Impl_ApplicationData Refs_RefSampleComponentStore_FindFirstApplicationData_keyval4(Refs_RefSampleComponentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_RefSampleComponentStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.RefSampleComponentStore.components

child 
link to class AbstractComponent
  @param  Refs_RefSampleComponentStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Refs_AbstractComponent Refs_RefSampleComponentStore_FindFirstComponent(Refs_RefSampleComponentStore self, ApiMap conditions)
{
  
  Refs_AbstractComponent obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstComponent");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: cannot find method 'findFirstComponent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: method 'findFirstComponent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.RefSampleComponentStore.components

child 
link to class AbstractComponent
  @param  Refs_RefSampleComponentStore self
  @returns  the first value that satisfies the conditions 
**/
Refs_AbstractComponent Refs_RefSampleComponentStore_FindFirstComponent_keyval0(Refs_RefSampleComponentStore self)
{
  
  Refs_AbstractComponent  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Refs_RefSampleComponentStore_FindFirstComponent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.RefSampleComponentStore.components

child 
link to class AbstractComponent
  @param  Refs_RefSampleComponentStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Refs_AbstractComponent Refs_RefSampleComponentStore_FindFirstComponent_keyval1(Refs_RefSampleComponentStore self, char * key, ApiObject value)
{
  
  Refs_AbstractComponent  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Refs_RefSampleComponentStore_FindFirstComponent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.RefSampleComponentStore.components

child 
link to class AbstractComponent
  @param  Refs_RefSampleComponentStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Refs_AbstractComponent Refs_RefSampleComponentStore_FindFirstComponent_keyval2(Refs_RefSampleComponentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Refs_AbstractComponent  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Refs_RefSampleComponentStore_FindFirstComponent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.RefSampleComponentStore.components

child 
link to class AbstractComponent
  @param  Refs_RefSampleComponentStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Refs_AbstractComponent Refs_RefSampleComponentStore_FindFirstComponent_keyval3(Refs_RefSampleComponentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Refs_AbstractComponent  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Refs_RefSampleComponentStore_FindFirstComponent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.lims.RefSampleComponent.RefSampleComponentStore.components

child 
link to class AbstractComponent
  @param  Refs_RefSampleComponentStore self
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
Refs_AbstractComponent Refs_RefSampleComponentStore_FindFirstComponent_keyval4(Refs_RefSampleComponentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Refs_AbstractComponent  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Refs_RefSampleComponentStore_FindFirstComponent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.lims.RefSampleComponent.RefSampleComponentStore
  @param  Refs_RefSampleComponentStore self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Refs_RefSampleComponentStore_Get(Refs_RefSampleComponentStore self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Refs_RefSampleComponentStore self
  @returns   the result
**/
Acco_AccessObject Refs_RefSampleComponentStore_GetAccess(Refs_RefSampleComponentStore self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: method 'getAccess' is not callable");
  
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
  @param  Refs_RefSampleComponentStore self
  @returns   the result
**/
ApiList Refs_RefSampleComponentStore_GetActiveRepositories(Refs_RefSampleComponentStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveRepositories");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: cannot find method 'getActiveRepositories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: method 'getActiveRepositories' is not callable");
  
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
  @param  Refs_RefSampleComponentStore self
  @returns   the result
**/
ApiList Refs_RefSampleComponentStore_GetApplicationData(Refs_RefSampleComponentStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.lims.RefSampleComponent.RefSampleComponentStore
  @param  Refs_RefSampleComponentStore self
  @param  Impl_MemopsRoot startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Refs_RefSampleComponentStore Refs_RefSampleComponentStore_GetByKey(Refs_RefSampleComponentStore self, Impl_MemopsRoot startObj, ApiList fullKey)
{
  
  Refs_RefSampleComponentStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: method 'getByKey' is not callable");
  
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
  @param  Refs_RefSampleComponentStore self
  @returns   the result
**/
ApiString Refs_RefSampleComponentStore_GetClassName(Refs_RefSampleComponentStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.lims.RefSampleComponent.RefSampleComponentStore.components

child 
link to class AbstractComponent
  @param  Refs_RefSampleComponentStore self
  @returns   the result
**/
ApiSet Refs_RefSampleComponentStore_GetComponents(Refs_RefSampleComponentStore self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getComponents");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: cannot find method 'getComponents'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: method 'getComponents' is not callable");
  
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
  @param  Refs_RefSampleComponentStore self
  @returns   the result
**/
ApiString Refs_RefSampleComponentStore_GetCreatedBy(Refs_RefSampleComponentStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCreatedBy");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: cannot find method 'getCreatedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: method 'getCreatedBy' is not callable");
  
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
  @param  Refs_RefSampleComponentStore self
  @returns   the result
**/
ApiList Refs_RefSampleComponentStore_GetFieldNames(Refs_RefSampleComponentStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.lims.RefSampleComponent.RefSampleComponentStore
  @param  Refs_RefSampleComponentStore self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Refs_RefSampleComponentStore_GetFullKey(Refs_RefSampleComponentStore self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: method 'getFullKey' is not callable");
  
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
  @param  Refs_RefSampleComponentStore self
  @returns   the result
**/
ApiString Refs_RefSampleComponentStore_GetGuid(Refs_RefSampleComponentStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getGuid");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: cannot find method 'getGuid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: method 'getGuid' is not callable");
  
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
  @param  Refs_RefSampleComponentStore self
  @returns   the result
**/
ApiBoolean Refs_RefSampleComponentStore_GetInConstructor(Refs_RefSampleComponentStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: method 'getInConstructor' is not callable");
  
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
  @param  Refs_RefSampleComponentStore self
  @returns   the result
**/
ApiBoolean Refs_RefSampleComponentStore_GetIsDeleted(Refs_RefSampleComponentStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: method 'getIsDeleted' is not callable");
  
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
  @param  Refs_RefSampleComponentStore self
  @returns   the result
**/
ApiBoolean Refs_RefSampleComponentStore_GetIsLoaded(Refs_RefSampleComponentStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsLoaded");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: cannot find method 'getIsLoaded'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: method 'getIsLoaded' is not callable");
  
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
  @param  Refs_RefSampleComponentStore self
  @returns   the result
**/
ApiBoolean Refs_RefSampleComponentStore_GetIsModifiable(Refs_RefSampleComponentStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsModifiable");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: cannot find method 'getIsModifiable'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: method 'getIsModifiable' is not callable");
  
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
  @param  Refs_RefSampleComponentStore self
  @returns   the result
**/
ApiBoolean Refs_RefSampleComponentStore_GetIsModified(Refs_RefSampleComponentStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsModified");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: cannot find method 'getIsModified'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: method 'getIsModified' is not callable");
  
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
  @param  Refs_RefSampleComponentStore self
  @returns   the result
**/
ApiBoolean Refs_RefSampleComponentStore_GetIsReading(Refs_RefSampleComponentStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsReading");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: cannot find method 'getIsReading'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: method 'getIsReading' is not callable");
  
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
  @param  Refs_RefSampleComponentStore self
  @returns   the result
**/
ApiString Refs_RefSampleComponentStore_GetLastUnlockedBy(Refs_RefSampleComponentStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLastUnlockedBy");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: cannot find method 'getLastUnlockedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: method 'getLastUnlockedBy' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.lims.RefSampleComponent.RefSampleComponentStore
  @param  Refs_RefSampleComponentStore self
  @returns  Local object key
**/
ApiObject Refs_RefSampleComponentStore_GetLocalKey(Refs_RefSampleComponentStore self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.lims.RefSampleComponent.RefSampleComponentStore.memopsRoot

parent 
link
  @param  Refs_RefSampleComponentStore self
  @returns   the result
**/
Impl_MemopsRoot Refs_RefSampleComponentStore_GetMemopsRoot(Refs_RefSampleComponentStore self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMemopsRoot");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: cannot find method 'getMemopsRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: method 'getMemopsRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.RefSampleComponent.RefSampleComponentStore.name

name 
of RefSampleCompoenntStore
  @param  Refs_RefSampleComponentStore self
  @returns   the result
**/
ApiString Refs_RefSampleComponentStore_GetName(Refs_RefSampleComponentStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: method 'getName' is not callable");
  
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
  @param  Refs_RefSampleComponentStore self
  @returns   the result
**/
Impl_PackageLocator Refs_RefSampleComponentStore_GetPackageLocator(Refs_RefSampleComponentStore self)
{
  
  Impl_PackageLocator obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageLocator");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: cannot find method 'getPackageLocator'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: method 'getPackageLocator' is not callable");
  
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
  @param  Refs_RefSampleComponentStore self
  @returns   the result
**/
ApiString Refs_RefSampleComponentStore_GetPackageName(Refs_RefSampleComponentStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: method 'getPackageName' is not callable");
  
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
  @param  Refs_RefSampleComponentStore self
  @returns   the result
**/
ApiString Refs_RefSampleComponentStore_GetPackageShortName(Refs_RefSampleComponentStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.RefSampleComponent.RefSampleComponentStore.parent

link 
to parent object - synonym for memopsRoot
  @param  Refs_RefSampleComponentStore self
  @returns   the result
**/
Impl_MemopsRoot Refs_RefSampleComponentStore_GetParent(Refs_RefSampleComponentStore self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: method 'getParent' is not callable");
  
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
  @param  Refs_RefSampleComponentStore self
  @returns   the result
**/
ApiString Refs_RefSampleComponentStore_GetQualifiedName(Refs_RefSampleComponentStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: method 'getQualifiedName' is not callable");
  
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
  @param  Refs_RefSampleComponentStore self
  @returns   the result
**/
Impl_MemopsRoot Refs_RefSampleComponentStore_GetRoot(Refs_RefSampleComponentStore self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: method 'getRoot' is not callable");
  
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
  @param  Refs_RefSampleComponentStore self
  @returns   the result
**/
Impl_TopObject Refs_RefSampleComponentStore_GetTopObject(Refs_RefSampleComponentStore self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.lims.RefSampleComponent.RefSampleComponentStore
  @param  Impl_MemopsRoot parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Refs_RefSampleComponentStore Refs_RefSampleComponentStore_Init(Impl_MemopsRoot parent, ApiMap attrlinks)
{
  
  return Impl_MemopsRoot_NewRefSampleComponentStore(parent, attrlinks);
}

/**
  Constructor for ccp.lims.RefSampleComponent.RefSampleComponentStore
  @param  Impl_MemopsRoot parent
  @param  char * name
  @returns  the new object
**/
Refs_RefSampleComponentStore Refs_RefSampleComponentStore_Init_reqd(Impl_MemopsRoot parent, char * name)
{
  
  Refs_RefSampleComponentStore  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Refs_RefSampleComponentStore_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.lims.RefSampleComponent.Cell
  @param  Refs_RefSampleComponentStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Refs_Cell Refs_RefSampleComponentStore_NewCell(Refs_RefSampleComponentStore self, ApiMap attrlinks)
{
  
  Refs_Cell obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newCell");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: cannot find method 'newCell'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: method 'newCell' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.lims.RefSampleComponent.Cell
  @param  Refs_RefSampleComponentStore self
  @param  char * name
  @returns  the new object
**/
Refs_Cell Refs_RefSampleComponentStore_NewCell_reqd(Refs_RefSampleComponentStore self, char * name)
{
  
  Refs_Cell  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Refs_RefSampleComponentStore_NewCell(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.lims.RefSampleComponent.Composite
  @param  Refs_RefSampleComponentStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Refs_Composite Refs_RefSampleComponentStore_NewComposite(Refs_RefSampleComponentStore self, ApiMap attrlinks)
{
  
  Refs_Composite obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newComposite");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: cannot find method 'newComposite'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: method 'newComposite' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.lims.RefSampleComponent.Composite
  @param  Refs_RefSampleComponentStore self
  @param  char * name
  @returns  the new object
**/
Refs_Composite Refs_RefSampleComponentStore_NewComposite_reqd(Refs_RefSampleComponentStore self, char * name)
{
  
  Refs_Composite  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Refs_RefSampleComponentStore_NewComposite(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.lims.RefSampleComponent.Construct
  @param  Refs_RefSampleComponentStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Refs_Construct Refs_RefSampleComponentStore_NewConstruct(Refs_RefSampleComponentStore self, ApiMap attrlinks)
{
  
  Refs_Construct obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newConstruct");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: cannot find method 'newConstruct'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: method 'newConstruct' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.lims.RefSampleComponent.Construct
  @param  Refs_RefSampleComponentStore self
  @param  char * constructStatus
  @param  char * name
  @returns  the new object
**/
Refs_Construct Refs_RefSampleComponentStore_NewConstruct_reqd(Refs_RefSampleComponentStore self, char * constructStatus, char * name)
{
  
  Refs_Construct  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__constructStatus = ApiString_New(constructStatus);
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "constructStatus", api__constructStatus);
  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Refs_RefSampleComponentStore_NewConstruct(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__constructStatus);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.lims.RefSampleComponent.MolComponent
  @param  Refs_RefSampleComponentStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Refs_MolComponent Refs_RefSampleComponentStore_NewMolComponent(Refs_RefSampleComponentStore self, ApiMap attrlinks)
{
  
  Refs_MolComponent obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newMolComponent");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: cannot find method 'newMolComponent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: method 'newMolComponent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.lims.RefSampleComponent.MolComponent
  @param  Refs_RefSampleComponentStore self
  @param  char * name
  @returns  the new object
**/
Refs_MolComponent Refs_RefSampleComponentStore_NewMolComponent_reqd(Refs_RefSampleComponentStore self, char * name)
{
  
  Refs_MolComponent  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Refs_RefSampleComponentStore_NewMolComponent(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.lims.RefSampleComponent.Primer
  @param  Refs_RefSampleComponentStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Refs_Primer Refs_RefSampleComponentStore_NewPrimer(Refs_RefSampleComponentStore self, ApiMap attrlinks)
{
  
  Refs_Primer obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newPrimer");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: cannot find method 'newPrimer'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: method 'newPrimer' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.lims.RefSampleComponent.Primer
  @param  Refs_RefSampleComponentStore self
  @param  char * direction
  @param  int isUniversal
  @param  char * name
  @returns  the new object
**/
Refs_Primer Refs_RefSampleComponentStore_NewPrimer_reqd(Refs_RefSampleComponentStore self, char * direction, int isUniversal, char * name)
{
  
  Refs_Primer  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__direction = ApiString_New(direction);
  ApiBoolean api__isUniversal = ApiBoolean_New(isUniversal);
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "direction", api__direction);
  PyDict_SetItemString(attrlinks, "isUniversal", api__isUniversal);
  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Refs_RefSampleComponentStore_NewPrimer(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__direction);
  Py_DECREF(api__isUniversal);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.lims.RefSampleComponent.RestrictionEnzyme
  @param  Refs_RefSampleComponentStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Refs_RestrictionEnzyme Refs_RefSampleComponentStore_NewRestrictionEnzyme(Refs_RefSampleComponentStore self, ApiMap attrlinks)
{
  
  Refs_RestrictionEnzyme obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newRestrictionEnzyme");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: cannot find method 'newRestrictionEnzyme'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: method 'newRestrictionEnzyme' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.lims.RefSampleComponent.RestrictionEnzyme
  @param  Refs_RefSampleComponentStore self
  @param  char * name
  @returns  the new object
**/
Refs_RestrictionEnzyme Refs_RefSampleComponentStore_NewRestrictionEnzyme_reqd(Refs_RefSampleComponentStore self, char * name)
{
  
  Refs_RestrictionEnzyme  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Refs_RefSampleComponentStore_NewRestrictionEnzyme(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.lims.RefSampleComponent.Substance
  @param  Refs_RefSampleComponentStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Refs_Substance Refs_RefSampleComponentStore_NewSubstance(Refs_RefSampleComponentStore self, ApiMap attrlinks)
{
  
  Refs_Substance obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newSubstance");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: cannot find method 'newSubstance'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: method 'newSubstance' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.lims.RefSampleComponent.Substance
  @param  Refs_RefSampleComponentStore self
  @param  char * name
  @returns  the new object
**/
Refs_Substance Refs_RefSampleComponentStore_NewSubstance_reqd(Refs_RefSampleComponentStore self, char * name)
{
  
  Refs_Substance  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Refs_RefSampleComponentStore_NewSubstance(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Refs_RefSampleComponentStore self
  @param  Impl_ApplicationData value
**/
void *Refs_RefSampleComponentStore_RemoveApplicationData(Refs_RefSampleComponentStore self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.lims.RefSampleComponent.RefSampleComponentStore
  @param  Refs_RefSampleComponentStore self
  @param  ApiString name
  @param  ApiObject value
**/
void *Refs_RefSampleComponentStore_Set(Refs_RefSampleComponentStore self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Refs_RefSampleComponentStore self
  @param  Acco_AccessObject value
**/
void *Refs_RefSampleComponentStore_SetAccess(Refs_RefSampleComponentStore self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: method 'setAccess' is not callable");
  
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
  @param  Refs_RefSampleComponentStore self
  @param  ApiList values
**/
void *Refs_RefSampleComponentStore_SetApplicationData(Refs_RefSampleComponentStore self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: method 'setApplicationData' is not callable");
  
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
  @param  Refs_RefSampleComponentStore self
  @param  ApiString value
**/
void *Refs_RefSampleComponentStore_SetCreatedBy(Refs_RefSampleComponentStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCreatedBy");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: cannot find method 'setCreatedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: method 'setCreatedBy' is not callable");
  
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
  @param  Refs_RefSampleComponentStore self
  @param  ApiString value
**/
void *Refs_RefSampleComponentStore_SetGuid(Refs_RefSampleComponentStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setGuid");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: cannot find method 'setGuid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: method 'setGuid' is not callable");
  
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
  @param  Refs_RefSampleComponentStore self
  @param  ApiBoolean value
**/
void *Refs_RefSampleComponentStore_SetIsModifiable(Refs_RefSampleComponentStore self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsModifiable");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: cannot find method 'setIsModifiable'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: method 'setIsModifiable' is not callable");
  
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
  @param  Refs_RefSampleComponentStore self
  @param  ApiString value
**/
void *Refs_RefSampleComponentStore_SetLastUnlockedBy(Refs_RefSampleComponentStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLastUnlockedBy");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: cannot find method 'setLastUnlockedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: method 'setLastUnlockedBy' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.RefSampleComponent.RefSampleComponentStore.name

name 
of RefSampleCompoenntStore
  @param  Refs_RefSampleComponentStore self
  @param  ApiString value
**/
void *Refs_RefSampleComponentStore_SetName(Refs_RefSampleComponentStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.lims.RefSampleComponent.RefSampleComponentStore.components

child 
link to class AbstractComponent
  @param  Refs_RefSampleComponentStore self
  @returns   the result
**/
ApiList Refs_RefSampleComponentStore_SortedComponents(Refs_RefSampleComponentStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedComponents");
  
  if (!method)
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: cannot find method 'sortedComponents'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.RefSampleComponent.RefSampleComponentStore: method 'sortedComponents' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
