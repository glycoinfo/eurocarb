
#include "ccp.h"

/*
  TopObject for AccessControl
*/

/* package memops.api.AccessControl */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_AccessControlStore self
  @param  Impl_ApplicationData value
**/
void *Acco_AccessControlStore_AddApplicationData(Acco_AccessControlStore self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessControlStore: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessControlStore: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for memops.AccessControl.AccessControlStore
  @param  Acco_AccessControlStore self
  @param  ApiBoolean complete
**/
void *Acco_AccessControlStore_CheckAllValid(Acco_AccessControlStore self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessControlStore: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessControlStore: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for memops.AccessControl.AccessControlStore
  @param  Acco_AccessControlStore self
  @param  ApiBoolean complete
**/
void *Acco_AccessControlStore_CheckValid(Acco_AccessControlStore self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessControlStore: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessControlStore: method 'checkValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for memops.AccessControl.AccessControlStore.accessObjects

child 
link to class AccessObject
  @param  Acco_AccessControlStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Acco_AccessControlStore_FindAllAccessObjects(Acco_AccessControlStore self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllAccessObjects");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessControlStore: cannot find method 'findAllAccessObjects'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessControlStore: method 'findAllAccessObjects' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for memops.AccessControl.AccessControlStore.accessObjects

child 
link to class AccessObject
  @param  Acco_AccessControlStore self
  @returns  all value that satisfy the conditions 
**/
ApiSet Acco_AccessControlStore_FindAllAccessObjects_keyval0(Acco_AccessControlStore self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Acco_AccessControlStore_FindAllAccessObjects(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.AccessControl.AccessControlStore.accessObjects

child 
link to class AccessObject
  @param  Acco_AccessControlStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Acco_AccessControlStore_FindAllAccessObjects_keyval1(Acco_AccessControlStore self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Acco_AccessControlStore_FindAllAccessObjects(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.AccessControl.AccessControlStore.accessObjects

child 
link to class AccessObject
  @param  Acco_AccessControlStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Acco_AccessControlStore_FindAllAccessObjects_keyval2(Acco_AccessControlStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Acco_AccessControlStore_FindAllAccessObjects(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.AccessControl.AccessControlStore.accessObjects

child 
link to class AccessObject
  @param  Acco_AccessControlStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Acco_AccessControlStore_FindAllAccessObjects_keyval3(Acco_AccessControlStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Acco_AccessControlStore_FindAllAccessObjects(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.AccessControl.AccessControlStore.accessObjects

child 
link to class AccessObject
  @param  Acco_AccessControlStore self
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
ApiSet Acco_AccessControlStore_FindAllAccessObjects_keyval4(Acco_AccessControlStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Acco_AccessControlStore_FindAllAccessObjects(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Acco_AccessControlStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Acco_AccessControlStore_FindAllActiveRepositories(Acco_AccessControlStore self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllActiveRepositories");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessControlStore: cannot find method 'findAllActiveRepositories'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessControlStore: method 'findAllActiveRepositories' is not callable");
  
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
  @param  Acco_AccessControlStore self
  @returns  all value that satisfy the conditions 
**/
ApiList Acco_AccessControlStore_FindAllActiveRepositories_keyval0(Acco_AccessControlStore self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Acco_AccessControlStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Acco_AccessControlStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Acco_AccessControlStore_FindAllActiveRepositories_keyval1(Acco_AccessControlStore self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Acco_AccessControlStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Acco_AccessControlStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Acco_AccessControlStore_FindAllActiveRepositories_keyval2(Acco_AccessControlStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Acco_AccessControlStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Acco_AccessControlStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Acco_AccessControlStore_FindAllActiveRepositories_keyval3(Acco_AccessControlStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Acco_AccessControlStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Acco_AccessControlStore self
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
ApiList Acco_AccessControlStore_FindAllActiveRepositories_keyval4(Acco_AccessControlStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Acco_AccessControlStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_AccessControlStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Acco_AccessControlStore_FindAllApplicationData(Acco_AccessControlStore self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessControlStore: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessControlStore: method 'findAllApplicationData' is not callable");
  
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
  @param  Acco_AccessControlStore self
  @returns  all value that satisfy the conditions 
**/
ApiList Acco_AccessControlStore_FindAllApplicationData_keyval0(Acco_AccessControlStore self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Acco_AccessControlStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_AccessControlStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Acco_AccessControlStore_FindAllApplicationData_keyval1(Acco_AccessControlStore self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Acco_AccessControlStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_AccessControlStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Acco_AccessControlStore_FindAllApplicationData_keyval2(Acco_AccessControlStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Acco_AccessControlStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_AccessControlStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Acco_AccessControlStore_FindAllApplicationData_keyval3(Acco_AccessControlStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Acco_AccessControlStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_AccessControlStore self
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
ApiList Acco_AccessControlStore_FindAllApplicationData_keyval4(Acco_AccessControlStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Acco_AccessControlStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.AccessControl.AccessControlStore.permissions

child 
link to class Permission
  @param  Acco_AccessControlStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Acco_AccessControlStore_FindAllPermissions(Acco_AccessControlStore self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllPermissions");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessControlStore: cannot find method 'findAllPermissions'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessControlStore: method 'findAllPermissions' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for memops.AccessControl.AccessControlStore.permissions

child 
link to class Permission
  @param  Acco_AccessControlStore self
  @returns  all value that satisfy the conditions 
**/
ApiSet Acco_AccessControlStore_FindAllPermissions_keyval0(Acco_AccessControlStore self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Acco_AccessControlStore_FindAllPermissions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.AccessControl.AccessControlStore.permissions

child 
link to class Permission
  @param  Acco_AccessControlStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Acco_AccessControlStore_FindAllPermissions_keyval1(Acco_AccessControlStore self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Acco_AccessControlStore_FindAllPermissions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.AccessControl.AccessControlStore.permissions

child 
link to class Permission
  @param  Acco_AccessControlStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Acco_AccessControlStore_FindAllPermissions_keyval2(Acco_AccessControlStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Acco_AccessControlStore_FindAllPermissions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.AccessControl.AccessControlStore.permissions

child 
link to class Permission
  @param  Acco_AccessControlStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Acco_AccessControlStore_FindAllPermissions_keyval3(Acco_AccessControlStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Acco_AccessControlStore_FindAllPermissions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.AccessControl.AccessControlStore.permissions

child 
link to class Permission
  @param  Acco_AccessControlStore self
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
ApiSet Acco_AccessControlStore_FindAllPermissions_keyval4(Acco_AccessControlStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Acco_AccessControlStore_FindAllPermissions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.AccessControl.AccessControlStore.userGroups

child 
link to class UserGroup
  @param  Acco_AccessControlStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Acco_AccessControlStore_FindAllUserGroups(Acco_AccessControlStore self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllUserGroups");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessControlStore: cannot find method 'findAllUserGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessControlStore: method 'findAllUserGroups' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for memops.AccessControl.AccessControlStore.userGroups

child 
link to class UserGroup
  @param  Acco_AccessControlStore self
  @returns  all value that satisfy the conditions 
**/
ApiSet Acco_AccessControlStore_FindAllUserGroups_keyval0(Acco_AccessControlStore self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Acco_AccessControlStore_FindAllUserGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.AccessControl.AccessControlStore.userGroups

child 
link to class UserGroup
  @param  Acco_AccessControlStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Acco_AccessControlStore_FindAllUserGroups_keyval1(Acco_AccessControlStore self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Acco_AccessControlStore_FindAllUserGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.AccessControl.AccessControlStore.userGroups

child 
link to class UserGroup
  @param  Acco_AccessControlStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Acco_AccessControlStore_FindAllUserGroups_keyval2(Acco_AccessControlStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Acco_AccessControlStore_FindAllUserGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.AccessControl.AccessControlStore.userGroups

child 
link to class UserGroup
  @param  Acco_AccessControlStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Acco_AccessControlStore_FindAllUserGroups_keyval3(Acco_AccessControlStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Acco_AccessControlStore_FindAllUserGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.AccessControl.AccessControlStore.userGroups

child 
link to class UserGroup
  @param  Acco_AccessControlStore self
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
ApiSet Acco_AccessControlStore_FindAllUserGroups_keyval4(Acco_AccessControlStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Acco_AccessControlStore_FindAllUserGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.AccessControl.AccessControlStore.users

child link to 
class User
  @param  Acco_AccessControlStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Acco_AccessControlStore_FindAllUsers(Acco_AccessControlStore self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllUsers");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessControlStore: cannot find method 'findAllUsers'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessControlStore: method 'findAllUsers' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for memops.AccessControl.AccessControlStore.users

child link to 
class User
  @param  Acco_AccessControlStore self
  @returns  all value that satisfy the conditions 
**/
ApiSet Acco_AccessControlStore_FindAllUsers_keyval0(Acco_AccessControlStore self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Acco_AccessControlStore_FindAllUsers(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.AccessControl.AccessControlStore.users

child link to 
class User
  @param  Acco_AccessControlStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Acco_AccessControlStore_FindAllUsers_keyval1(Acco_AccessControlStore self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Acco_AccessControlStore_FindAllUsers(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.AccessControl.AccessControlStore.users

child link to 
class User
  @param  Acco_AccessControlStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Acco_AccessControlStore_FindAllUsers_keyval2(Acco_AccessControlStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Acco_AccessControlStore_FindAllUsers(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.AccessControl.AccessControlStore.users

child link to 
class User
  @param  Acco_AccessControlStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Acco_AccessControlStore_FindAllUsers_keyval3(Acco_AccessControlStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Acco_AccessControlStore_FindAllUsers(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.AccessControl.AccessControlStore.users

child link to 
class User
  @param  Acco_AccessControlStore self
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
ApiSet Acco_AccessControlStore_FindAllUsers_keyval4(Acco_AccessControlStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Acco_AccessControlStore_FindAllUsers(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.AccessControl.AccessControlStore.accessObjects

child link to 
class AccessObject
  @param  Acco_AccessControlStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Acco_AccessObject Acco_AccessControlStore_FindFirstAccessObject(Acco_AccessControlStore self, ApiMap conditions)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstAccessObject");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessControlStore: cannot find method 'findFirstAccessObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessControlStore: method 'findFirstAccessObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
memops.AccessControl.AccessControlStore.accessObjects

child link to 
class AccessObject
  @param  Acco_AccessControlStore self
  @returns  the first value that satisfies the conditions 
**/
Acco_AccessObject Acco_AccessControlStore_FindFirstAccessObject_keyval0(Acco_AccessControlStore self)
{
  
  Acco_AccessObject  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Acco_AccessControlStore_FindFirstAccessObject(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.AccessControl.AccessControlStore.accessObjects

child link to 
class AccessObject
  @param  Acco_AccessControlStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Acco_AccessObject Acco_AccessControlStore_FindFirstAccessObject_keyval1(Acco_AccessControlStore self, char * key, ApiObject value)
{
  
  Acco_AccessObject  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Acco_AccessControlStore_FindFirstAccessObject(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.AccessControl.AccessControlStore.accessObjects

child link to 
class AccessObject
  @param  Acco_AccessControlStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Acco_AccessObject Acco_AccessControlStore_FindFirstAccessObject_keyval2(Acco_AccessControlStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Acco_AccessObject  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Acco_AccessControlStore_FindFirstAccessObject(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.AccessControl.AccessControlStore.accessObjects

child link to 
class AccessObject
  @param  Acco_AccessControlStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Acco_AccessObject Acco_AccessControlStore_FindFirstAccessObject_keyval3(Acco_AccessControlStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Acco_AccessObject  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Acco_AccessControlStore_FindFirstAccessObject(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.AccessControl.AccessControlStore.accessObjects

child link to 
class AccessObject
  @param  Acco_AccessControlStore self
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
Acco_AccessObject Acco_AccessControlStore_FindFirstAccessObject_keyval4(Acco_AccessControlStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Acco_AccessObject  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Acco_AccessControlStore_FindFirstAccessObject(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Acco_AccessControlStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Acco_AccessControlStore_FindFirstActiveRepository(Acco_AccessControlStore self, ApiMap conditions)
{
  
  Impl_Repository obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstActiveRepository");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessControlStore: cannot find method 'findFirstActiveRepository'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessControlStore: method 'findFirstActiveRepository' is not callable");
  
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
  @param  Acco_AccessControlStore self
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Acco_AccessControlStore_FindFirstActiveRepository_keyval0(Acco_AccessControlStore self)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Acco_AccessControlStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Acco_AccessControlStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Acco_AccessControlStore_FindFirstActiveRepository_keyval1(Acco_AccessControlStore self, char * key, ApiObject value)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Acco_AccessControlStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Acco_AccessControlStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Acco_AccessControlStore_FindFirstActiveRepository_keyval2(Acco_AccessControlStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Acco_AccessControlStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Acco_AccessControlStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Acco_AccessControlStore_FindFirstActiveRepository_keyval3(Acco_AccessControlStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Acco_AccessControlStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Acco_AccessControlStore self
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
Impl_Repository Acco_AccessControlStore_FindFirstActiveRepository_keyval4(Acco_AccessControlStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Acco_AccessControlStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_AccessControlStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Acco_AccessControlStore_FindFirstApplicationData(Acco_AccessControlStore self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessControlStore: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessControlStore: method 'findFirstApplicationData' is not callable");
  
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
  @param  Acco_AccessControlStore self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Acco_AccessControlStore_FindFirstApplicationData_keyval0(Acco_AccessControlStore self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Acco_AccessControlStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_AccessControlStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Acco_AccessControlStore_FindFirstApplicationData_keyval1(Acco_AccessControlStore self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Acco_AccessControlStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_AccessControlStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Acco_AccessControlStore_FindFirstApplicationData_keyval2(Acco_AccessControlStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Acco_AccessControlStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_AccessControlStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Acco_AccessControlStore_FindFirstApplicationData_keyval3(Acco_AccessControlStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Acco_AccessControlStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_AccessControlStore self
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
Impl_ApplicationData Acco_AccessControlStore_FindFirstApplicationData_keyval4(Acco_AccessControlStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Acco_AccessControlStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.AccessControl.AccessControlStore.permissions

child 
link to class Permission
  @param  Acco_AccessControlStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Acco_Permission Acco_AccessControlStore_FindFirstPermission(Acco_AccessControlStore self, ApiMap conditions)
{
  
  Acco_Permission obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstPermission");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessControlStore: cannot find method 'findFirstPermission'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessControlStore: method 'findFirstPermission' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for memops.AccessControl.AccessControlStore.permissions

child 
link to class Permission
  @param  Acco_AccessControlStore self
  @returns  the first value that satisfies the conditions 
**/
Acco_Permission Acco_AccessControlStore_FindFirstPermission_keyval0(Acco_AccessControlStore self)
{
  
  Acco_Permission  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Acco_AccessControlStore_FindFirstPermission(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.AccessControl.AccessControlStore.permissions

child 
link to class Permission
  @param  Acco_AccessControlStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Acco_Permission Acco_AccessControlStore_FindFirstPermission_keyval1(Acco_AccessControlStore self, char * key, ApiObject value)
{
  
  Acco_Permission  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Acco_AccessControlStore_FindFirstPermission(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.AccessControl.AccessControlStore.permissions

child 
link to class Permission
  @param  Acco_AccessControlStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Acco_Permission Acco_AccessControlStore_FindFirstPermission_keyval2(Acco_AccessControlStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Acco_Permission  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Acco_AccessControlStore_FindFirstPermission(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.AccessControl.AccessControlStore.permissions

child 
link to class Permission
  @param  Acco_AccessControlStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Acco_Permission Acco_AccessControlStore_FindFirstPermission_keyval3(Acco_AccessControlStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Acco_Permission  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Acco_AccessControlStore_FindFirstPermission(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.AccessControl.AccessControlStore.permissions

child 
link to class Permission
  @param  Acco_AccessControlStore self
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
Acco_Permission Acco_AccessControlStore_FindFirstPermission_keyval4(Acco_AccessControlStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Acco_Permission  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Acco_AccessControlStore_FindFirstPermission(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.AccessControl.AccessControlStore.users

child link 
to class User
  @param  Acco_AccessControlStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Acco_User Acco_AccessControlStore_FindFirstUser(Acco_AccessControlStore self, ApiMap conditions)
{
  
  Acco_User obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstUser");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessControlStore: cannot find method 'findFirstUser'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessControlStore: method 'findFirstUser' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for memops.AccessControl.AccessControlStore.userGroups

child 
link to class UserGroup
  @param  Acco_AccessControlStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Acco_UserGroup Acco_AccessControlStore_FindFirstUserGroup(Acco_AccessControlStore self, ApiMap conditions)
{
  
  Acco_UserGroup obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstUserGroup");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessControlStore: cannot find method 'findFirstUserGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessControlStore: method 'findFirstUserGroup' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for memops.AccessControl.AccessControlStore.userGroups

child 
link to class UserGroup
  @param  Acco_AccessControlStore self
  @returns  the first value that satisfies the conditions 
**/
Acco_UserGroup Acco_AccessControlStore_FindFirstUserGroup_keyval0(Acco_AccessControlStore self)
{
  
  Acco_UserGroup  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Acco_AccessControlStore_FindFirstUserGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.AccessControl.AccessControlStore.userGroups

child 
link to class UserGroup
  @param  Acco_AccessControlStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Acco_UserGroup Acco_AccessControlStore_FindFirstUserGroup_keyval1(Acco_AccessControlStore self, char * key, ApiObject value)
{
  
  Acco_UserGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Acco_AccessControlStore_FindFirstUserGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.AccessControl.AccessControlStore.userGroups

child 
link to class UserGroup
  @param  Acco_AccessControlStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Acco_UserGroup Acco_AccessControlStore_FindFirstUserGroup_keyval2(Acco_AccessControlStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Acco_UserGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Acco_AccessControlStore_FindFirstUserGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.AccessControl.AccessControlStore.userGroups

child 
link to class UserGroup
  @param  Acco_AccessControlStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Acco_UserGroup Acco_AccessControlStore_FindFirstUserGroup_keyval3(Acco_AccessControlStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Acco_UserGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Acco_AccessControlStore_FindFirstUserGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.AccessControl.AccessControlStore.userGroups

child 
link to class UserGroup
  @param  Acco_AccessControlStore self
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
Acco_UserGroup Acco_AccessControlStore_FindFirstUserGroup_keyval4(Acco_AccessControlStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Acco_UserGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Acco_AccessControlStore_FindFirstUserGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.AccessControl.AccessControlStore.users

child link 
to class User
  @param  Acco_AccessControlStore self
  @returns  the first value that satisfies the conditions 
**/
Acco_User Acco_AccessControlStore_FindFirstUser_keyval0(Acco_AccessControlStore self)
{
  
  Acco_User  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Acco_AccessControlStore_FindFirstUser(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.AccessControl.AccessControlStore.users

child link 
to class User
  @param  Acco_AccessControlStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Acco_User Acco_AccessControlStore_FindFirstUser_keyval1(Acco_AccessControlStore self, char * key, ApiObject value)
{
  
  Acco_User  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Acco_AccessControlStore_FindFirstUser(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.AccessControl.AccessControlStore.users

child link 
to class User
  @param  Acco_AccessControlStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Acco_User Acco_AccessControlStore_FindFirstUser_keyval2(Acco_AccessControlStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Acco_User  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Acco_AccessControlStore_FindFirstUser(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.AccessControl.AccessControlStore.users

child link 
to class User
  @param  Acco_AccessControlStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Acco_User Acco_AccessControlStore_FindFirstUser_keyval3(Acco_AccessControlStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Acco_User  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Acco_AccessControlStore_FindFirstUser(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.AccessControl.AccessControlStore.users

child link 
to class User
  @param  Acco_AccessControlStore self
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
Acco_User Acco_AccessControlStore_FindFirstUser_keyval4(Acco_AccessControlStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Acco_User  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Acco_AccessControlStore_FindFirstUser(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for memops.AccessControl.AccessControlStore
  @param  Acco_AccessControlStore self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Acco_AccessControlStore_Get(Acco_AccessControlStore self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Acco_AccessControlStore self
  @returns   the result
**/
Acco_AccessObject Acco_AccessControlStore_GetAccess(Acco_AccessControlStore self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessControlStore: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessControlStore: method 'getAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.AccessControl.AccessControlStore.accessObjects

child 
link to class AccessObject
  @param  Acco_AccessControlStore self
  @returns   the result
**/
ApiSet Acco_AccessControlStore_GetAccessObjects(Acco_AccessControlStore self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccessObjects");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessControlStore: cannot find method 'getAccessObjects'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessControlStore: method 'getAccessObjects' is not callable");
  
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
  @param  Acco_AccessControlStore self
  @returns   the result
**/
ApiList Acco_AccessControlStore_GetActiveRepositories(Acco_AccessControlStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveRepositories");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessControlStore: cannot find method 'getActiveRepositories'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessControlStore: method 'getActiveRepositories' is not callable");
  
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
  @param  Acco_AccessControlStore self
  @returns   the result
**/
ApiList Acco_AccessControlStore_GetApplicationData(Acco_AccessControlStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessControlStore: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessControlStore: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for memops.AccessControl.AccessControlStore
  @param  Acco_AccessControlStore self
  @param  Impl_MemopsRoot startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Acco_AccessControlStore Acco_AccessControlStore_GetByKey(Acco_AccessControlStore self, Impl_MemopsRoot startObj, ApiList fullKey)
{
  
  Acco_AccessControlStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessControlStore: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessControlStore: method 'getByKey' is not callable");
  
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
  @param  Acco_AccessControlStore self
  @returns   the result
**/
ApiString Acco_AccessControlStore_GetClassName(Acco_AccessControlStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessControlStore: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessControlStore: method 'getClassName' is not callable");
  
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
  @param  Acco_AccessControlStore self
  @returns   the result
**/
ApiString Acco_AccessControlStore_GetCreatedBy(Acco_AccessControlStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCreatedBy");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessControlStore: cannot find method 'getCreatedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessControlStore: method 'getCreatedBy' is not callable");
  
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
  @param  Acco_AccessControlStore self
  @returns   the result
**/
ApiList Acco_AccessControlStore_GetFieldNames(Acco_AccessControlStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessControlStore: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessControlStore: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for memops.AccessControl.AccessControlStore
  @param  Acco_AccessControlStore self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Acco_AccessControlStore_GetFullKey(Acco_AccessControlStore self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessControlStore: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessControlStore: method 'getFullKey' is not callable");
  
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
  @param  Acco_AccessControlStore self
  @returns   the result
**/
ApiString Acco_AccessControlStore_GetGuid(Acco_AccessControlStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getGuid");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessControlStore: cannot find method 'getGuid'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessControlStore: method 'getGuid' is not callable");
  
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
  @param  Acco_AccessControlStore self
  @returns   the result
**/
ApiBoolean Acco_AccessControlStore_GetInConstructor(Acco_AccessControlStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessControlStore: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessControlStore: method 'getInConstructor' is not callable");
  
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
  @param  Acco_AccessControlStore self
  @returns   the result
**/
ApiBoolean Acco_AccessControlStore_GetIsDeleted(Acco_AccessControlStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessControlStore: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessControlStore: method 'getIsDeleted' is not callable");
  
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
  @param  Acco_AccessControlStore self
  @returns   the result
**/
ApiBoolean Acco_AccessControlStore_GetIsLoaded(Acco_AccessControlStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsLoaded");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessControlStore: cannot find method 'getIsLoaded'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessControlStore: method 'getIsLoaded' is not callable");
  
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
  @param  Acco_AccessControlStore self
  @returns   the result
**/
ApiBoolean Acco_AccessControlStore_GetIsModifiable(Acco_AccessControlStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsModifiable");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessControlStore: cannot find method 'getIsModifiable'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessControlStore: method 'getIsModifiable' is not callable");
  
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
  @param  Acco_AccessControlStore self
  @returns   the result
**/
ApiBoolean Acco_AccessControlStore_GetIsModified(Acco_AccessControlStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsModified");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessControlStore: cannot find method 'getIsModified'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessControlStore: method 'getIsModified' is not callable");
  
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
  @param  Acco_AccessControlStore self
  @returns   the result
**/
ApiBoolean Acco_AccessControlStore_GetIsReading(Acco_AccessControlStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsReading");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessControlStore: cannot find method 'getIsReading'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessControlStore: method 'getIsReading' is not callable");
  
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
  @param  Acco_AccessControlStore self
  @returns   the result
**/
ApiString Acco_AccessControlStore_GetLastUnlockedBy(Acco_AccessControlStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLastUnlockedBy");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessControlStore: cannot find method 'getLastUnlockedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessControlStore: method 'getLastUnlockedBy' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for memops.AccessControl.AccessControlStore
  @param  Acco_AccessControlStore self
  @returns  Local object key
**/
ApiObject Acco_AccessControlStore_GetLocalKey(Acco_AccessControlStore self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessControlStore: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessControlStore: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.AccessControl.AccessControlStore.memopsRoot

parent link
  @param  Acco_AccessControlStore self
  @returns   the result
**/
Impl_MemopsRoot Acco_AccessControlStore_GetMemopsRoot(Acco_AccessControlStore self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMemopsRoot");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessControlStore: cannot find method 'getMemopsRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessControlStore: method 'getMemopsRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.AccessControl.AccessControlStore.name

name os 
AccessControlStore - serves  as key
  @param  Acco_AccessControlStore self
  @returns   the result
**/
ApiString Acco_AccessControlStore_GetName(Acco_AccessControlStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessControlStore: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessControlStore: method 'getName' is not callable");
  
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
  @param  Acco_AccessControlStore self
  @returns   the result
**/
Impl_PackageLocator Acco_AccessControlStore_GetPackageLocator(Acco_AccessControlStore self)
{
  
  Impl_PackageLocator obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageLocator");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessControlStore: cannot find method 'getPackageLocator'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessControlStore: method 'getPackageLocator' is not callable");
  
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
  @param  Acco_AccessControlStore self
  @returns   the result
**/
ApiString Acco_AccessControlStore_GetPackageName(Acco_AccessControlStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessControlStore: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessControlStore: method 'getPackageName' is not callable");
  
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
  @param  Acco_AccessControlStore self
  @returns   the result
**/
ApiString Acco_AccessControlStore_GetPackageShortName(Acco_AccessControlStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessControlStore: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessControlStore: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.AccessControl.AccessControlStore.parent

link to parent 
object - synonym for memopsRoot
  @param  Acco_AccessControlStore self
  @returns   the result
**/
Impl_MemopsRoot Acco_AccessControlStore_GetParent(Acco_AccessControlStore self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessControlStore: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessControlStore: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.AccessControl.AccessControlStore.permissions

child link 
to class Permission
  @param  Acco_AccessControlStore self
  @returns   the result
**/
ApiSet Acco_AccessControlStore_GetPermissions(Acco_AccessControlStore self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPermissions");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessControlStore: cannot find method 'getPermissions'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessControlStore: method 'getPermissions' is not callable");
  
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
  @param  Acco_AccessControlStore self
  @returns   the result
**/
ApiString Acco_AccessControlStore_GetQualifiedName(Acco_AccessControlStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessControlStore: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessControlStore: method 'getQualifiedName' is not callable");
  
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
  @param  Acco_AccessControlStore self
  @returns   the result
**/
Impl_MemopsRoot Acco_AccessControlStore_GetRoot(Acco_AccessControlStore self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessControlStore: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessControlStore: method 'getRoot' is not callable");
  
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
  @param  Acco_AccessControlStore self
  @returns   the result
**/
Impl_TopObject Acco_AccessControlStore_GetTopObject(Acco_AccessControlStore self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessControlStore: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessControlStore: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.AccessControl.AccessControlStore.userGroups

child link 
to class UserGroup
  @param  Acco_AccessControlStore self
  @returns   the result
**/
ApiSet Acco_AccessControlStore_GetUserGroups(Acco_AccessControlStore self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getUserGroups");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessControlStore: cannot find method 'getUserGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessControlStore: method 'getUserGroups' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.AccessControl.AccessControlStore.users

child link to 
class User
  @param  Acco_AccessControlStore self
  @returns   the result
**/
ApiSet Acco_AccessControlStore_GetUsers(Acco_AccessControlStore self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getUsers");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessControlStore: cannot find method 'getUsers'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessControlStore: method 'getUsers' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for memops.AccessControl.AccessControlStore
  @param  Impl_MemopsRoot parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Acco_AccessControlStore Acco_AccessControlStore_Init(Impl_MemopsRoot parent, ApiMap attrlinks)
{
  
  return Impl_MemopsRoot_NewAccessControlStore(parent, attrlinks);
}

/**
  Constructor for memops.AccessControl.AccessControlStore
  @param  Impl_MemopsRoot parent
  @param  char * name
  @returns  the new object
**/
Acco_AccessControlStore Acco_AccessControlStore_Init_reqd(Impl_MemopsRoot parent, char * name)
{
  
  Acco_AccessControlStore  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Acco_AccessControlStore_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create memops.AccessControl.AccessObject
  @param  Acco_AccessControlStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Acco_AccessObject Acco_AccessControlStore_NewAccessObject(Acco_AccessControlStore self, ApiMap attrlinks)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newAccessObject");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessControlStore: cannot find method 'newAccessObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessControlStore: method 'newAccessObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create memops.AccessControl.AccessObject
  @param  Acco_AccessControlStore self
  @param  char * name
  @returns  the new object
**/
Acco_AccessObject Acco_AccessControlStore_NewAccessObject_reqd(Acco_AccessControlStore self, char * name)
{
  
  Acco_AccessObject  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Acco_AccessControlStore_NewAccessObject(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create memops.AccessControl.Permission
  @param  Acco_AccessControlStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Acco_Permission Acco_AccessControlStore_NewPermission(Acco_AccessControlStore self, ApiMap attrlinks)
{
  
  Acco_Permission obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newPermission");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessControlStore: cannot find method 'newPermission'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessControlStore: method 'newPermission' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create memops.AccessControl.Permission
  @param  Acco_AccessControlStore self
  @param  Acco_AccessObject accessObject
  @param  Acco_UserGroup userGroup
  @returns  the new object
**/
Acco_Permission Acco_AccessControlStore_NewPermission_reqd(Acco_AccessControlStore self, Acco_AccessObject accessObject, Acco_UserGroup userGroup)
{
  
  Acco_Permission  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "accessObject", accessObject);
  PyDict_SetItemString(attrlinks, "userGroup", userGroup);
  
  obj = Acco_AccessControlStore_NewPermission(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create memops.AccessControl.User
  @param  Acco_AccessControlStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Acco_User Acco_AccessControlStore_NewUser(Acco_AccessControlStore self, ApiMap attrlinks)
{
  
  Acco_User obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newUser");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessControlStore: cannot find method 'newUser'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessControlStore: method 'newUser' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create memops.AccessControl.UserGroup
  @param  Acco_AccessControlStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Acco_UserGroup Acco_AccessControlStore_NewUserGroup(Acco_AccessControlStore self, ApiMap attrlinks)
{
  
  Acco_UserGroup obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newUserGroup");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessControlStore: cannot find method 'newUserGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessControlStore: method 'newUserGroup' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create memops.AccessControl.UserGroup
  @param  Acco_AccessControlStore self
  @param  char * name
  @returns  the new object
**/
Acco_UserGroup Acco_AccessControlStore_NewUserGroup_reqd(Acco_AccessControlStore self, char * name)
{
  
  Acco_UserGroup  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Acco_AccessControlStore_NewUserGroup(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create memops.AccessControl.User
  @param  Acco_AccessControlStore self
  @param  char * name
  @returns  the new object
**/
Acco_User Acco_AccessControlStore_NewUser_reqd(Acco_AccessControlStore self, char * name)
{
  
  Acco_User  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Acco_AccessControlStore_NewUser(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_AccessControlStore self
  @param  Impl_ApplicationData value
**/
void *Acco_AccessControlStore_RemoveApplicationData(Acco_AccessControlStore self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessControlStore: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessControlStore: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for memops.AccessControl.AccessControlStore
  @param  Acco_AccessControlStore self
  @param  ApiString name
  @param  ApiObject value
**/
void *Acco_AccessControlStore_Set(Acco_AccessControlStore self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Acco_AccessControlStore self
  @param  Acco_AccessObject value
**/
void *Acco_AccessControlStore_SetAccess(Acco_AccessControlStore self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessControlStore: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessControlStore: method 'setAccess' is not callable");
  
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
  @param  Acco_AccessControlStore self
  @param  ApiList values
**/
void *Acco_AccessControlStore_SetApplicationData(Acco_AccessControlStore self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessControlStore: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessControlStore: method 'setApplicationData' is not callable");
  
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
  @param  Acco_AccessControlStore self
  @param  ApiString value
**/
void *Acco_AccessControlStore_SetCreatedBy(Acco_AccessControlStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCreatedBy");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessControlStore: cannot find method 'setCreatedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessControlStore: method 'setCreatedBy' is not callable");
  
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
  @param  Acco_AccessControlStore self
  @param  ApiString value
**/
void *Acco_AccessControlStore_SetGuid(Acco_AccessControlStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setGuid");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessControlStore: cannot find method 'setGuid'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessControlStore: method 'setGuid' is not callable");
  
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
  @param  Acco_AccessControlStore self
  @param  ApiBoolean value
**/
void *Acco_AccessControlStore_SetIsModifiable(Acco_AccessControlStore self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsModifiable");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessControlStore: cannot find method 'setIsModifiable'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessControlStore: method 'setIsModifiable' is not callable");
  
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
  @param  Acco_AccessControlStore self
  @param  ApiString value
**/
void *Acco_AccessControlStore_SetLastUnlockedBy(Acco_AccessControlStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLastUnlockedBy");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessControlStore: cannot find method 'setLastUnlockedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessControlStore: method 'setLastUnlockedBy' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.AccessControl.AccessControlStore.name

name os 
AccessControlStore - serves  as key
  @param  Acco_AccessControlStore self
  @param  ApiString value
**/
void *Acco_AccessControlStore_SetName(Acco_AccessControlStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessControlStore: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessControlStore: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for memops.AccessControl.AccessControlStore.accessObjects

child 
link to class AccessObject
  @param  Acco_AccessControlStore self
  @returns   the result
**/
ApiList Acco_AccessControlStore_SortedAccessObjects(Acco_AccessControlStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedAccessObjects");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessControlStore: cannot find method 'sortedAccessObjects'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessControlStore: method 'sortedAccessObjects' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for memops.AccessControl.AccessControlStore.permissions

child 
link to class Permission
  @param  Acco_AccessControlStore self
  @returns   the result
**/
ApiList Acco_AccessControlStore_SortedPermissions(Acco_AccessControlStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedPermissions");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessControlStore: cannot find method 'sortedPermissions'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessControlStore: method 'sortedPermissions' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for memops.AccessControl.AccessControlStore.userGroups

child 
link to class UserGroup
  @param  Acco_AccessControlStore self
  @returns   the result
**/
ApiList Acco_AccessControlStore_SortedUserGroups(Acco_AccessControlStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedUserGroups");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessControlStore: cannot find method 'sortedUserGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessControlStore: method 'sortedUserGroups' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for memops.AccessControl.AccessControlStore.users

child link to 
class User
  @param  Acco_AccessControlStore self
  @returns   the result
**/
ApiList Acco_AccessControlStore_SortedUsers(Acco_AccessControlStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedUsers");
  
  if (!method)
    return raiseApiException("memops.AccessControl.AccessControlStore: cannot find method 'sortedUsers'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.AccessControlStore: method 'sortedUsers' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
