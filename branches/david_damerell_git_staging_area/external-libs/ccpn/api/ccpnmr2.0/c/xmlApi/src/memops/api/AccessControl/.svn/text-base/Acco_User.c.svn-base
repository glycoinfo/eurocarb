
#include "ccp.h"

/*
  
*/

/* package memops.api.AccessControl */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_User self
  @param  Impl_ApplicationData value
**/
void *Acco_User_AddApplicationData(Acco_User self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("memops.AccessControl.User: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.User: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for memops.AccessControl.User.ledGroups
  @param  Acco_User self
  @param  Acco_UserGroup value
**/
void *Acco_User_AddLedGroup(Acco_User self, Acco_UserGroup value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addLedGroup");
  
  if (!method)
    return raiseApiException("memops.AccessControl.User: cannot find method 'addLedGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.User: method 'addLedGroup' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for memops.AccessControl.User
  @param  Acco_User self
  @param  ApiBoolean complete
**/
void *Acco_User_CheckAllValid(Acco_User self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("memops.AccessControl.User: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.User: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for memops.AccessControl.User
  @param  Acco_User self
  @param  ApiBoolean complete
**/
void *Acco_User_CheckValid(Acco_User self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("memops.AccessControl.User: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.User: method 'checkValid' is not callable");
  
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
  @param  Acco_User self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Acco_User_FindAllApplicationData(Acco_User self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("memops.AccessControl.User: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.User: method 'findAllApplicationData' is not callable");
  
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
  @param  Acco_User self
  @returns  all value that satisfy the conditions 
**/
ApiList Acco_User_FindAllApplicationData_keyval0(Acco_User self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Acco_User_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_User self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Acco_User_FindAllApplicationData_keyval1(Acco_User self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Acco_User_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_User self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Acco_User_FindAllApplicationData_keyval2(Acco_User self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Acco_User_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_User self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Acco_User_FindAllApplicationData_keyval3(Acco_User self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Acco_User_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_User self
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
ApiList Acco_User_FindAllApplicationData_keyval4(Acco_User self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Acco_User_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.AccessControl.User.ledGroups
  @param  Acco_User self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Acco_User_FindAllLedGroups(Acco_User self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllLedGroups");
  
  if (!method)
    return raiseApiException("memops.AccessControl.User: cannot find method 'findAllLedGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.User: method 'findAllLedGroups' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for memops.AccessControl.User.ledGroups
  @param  Acco_User self
  @returns  all value that satisfy the conditions 
**/
ApiSet Acco_User_FindAllLedGroups_keyval0(Acco_User self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Acco_User_FindAllLedGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.AccessControl.User.ledGroups
  @param  Acco_User self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Acco_User_FindAllLedGroups_keyval1(Acco_User self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Acco_User_FindAllLedGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.AccessControl.User.ledGroups
  @param  Acco_User self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Acco_User_FindAllLedGroups_keyval2(Acco_User self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Acco_User_FindAllLedGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.AccessControl.User.ledGroups
  @param  Acco_User self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Acco_User_FindAllLedGroups_keyval3(Acco_User self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Acco_User_FindAllLedGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.AccessControl.User.ledGroups
  @param  Acco_User self
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
ApiSet Acco_User_FindAllLedGroups_keyval4(Acco_User self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Acco_User_FindAllLedGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.AccessControl.User.userGroups
  @param  Acco_User self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Acco_User_FindAllUserGroups(Acco_User self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllUserGroups");
  
  if (!method)
    return raiseApiException("memops.AccessControl.User: cannot find method 'findAllUserGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.User: method 'findAllUserGroups' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for memops.AccessControl.User.userGroups
  @param  Acco_User self
  @returns  all value that satisfy the conditions 
**/
ApiSet Acco_User_FindAllUserGroups_keyval0(Acco_User self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Acco_User_FindAllUserGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.AccessControl.User.userGroups
  @param  Acco_User self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Acco_User_FindAllUserGroups_keyval1(Acco_User self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Acco_User_FindAllUserGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.AccessControl.User.userGroups
  @param  Acco_User self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Acco_User_FindAllUserGroups_keyval2(Acco_User self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Acco_User_FindAllUserGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.AccessControl.User.userGroups
  @param  Acco_User self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Acco_User_FindAllUserGroups_keyval3(Acco_User self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Acco_User_FindAllUserGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.AccessControl.User.userGroups
  @param  Acco_User self
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
ApiSet Acco_User_FindAllUserGroups_keyval4(Acco_User self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Acco_User_FindAllUserGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_User self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Acco_User_FindFirstApplicationData(Acco_User self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("memops.AccessControl.User: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.User: method 'findFirstApplicationData' is not callable");
  
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
  @param  Acco_User self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Acco_User_FindFirstApplicationData_keyval0(Acco_User self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Acco_User_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_User self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Acco_User_FindFirstApplicationData_keyval1(Acco_User self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Acco_User_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_User self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Acco_User_FindFirstApplicationData_keyval2(Acco_User self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Acco_User_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_User self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Acco_User_FindFirstApplicationData_keyval3(Acco_User self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Acco_User_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_User self
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
Impl_ApplicationData Acco_User_FindFirstApplicationData_keyval4(Acco_User self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Acco_User_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.AccessControl.User.ledGroups
  @param  Acco_User self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Acco_UserGroup Acco_User_FindFirstLedGroup(Acco_User self, ApiMap conditions)
{
  
  Acco_UserGroup obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstLedGroup");
  
  if (!method)
    return raiseApiException("memops.AccessControl.User: cannot find method 'findFirstLedGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.User: method 'findFirstLedGroup' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for memops.AccessControl.User.ledGroups
  @param  Acco_User self
  @returns  the first value that satisfies the conditions 
**/
Acco_UserGroup Acco_User_FindFirstLedGroup_keyval0(Acco_User self)
{
  
  Acco_UserGroup  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Acco_User_FindFirstLedGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.AccessControl.User.ledGroups
  @param  Acco_User self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Acco_UserGroup Acco_User_FindFirstLedGroup_keyval1(Acco_User self, char * key, ApiObject value)
{
  
  Acco_UserGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Acco_User_FindFirstLedGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.AccessControl.User.ledGroups
  @param  Acco_User self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Acco_UserGroup Acco_User_FindFirstLedGroup_keyval2(Acco_User self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Acco_UserGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Acco_User_FindFirstLedGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.AccessControl.User.ledGroups
  @param  Acco_User self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Acco_UserGroup Acco_User_FindFirstLedGroup_keyval3(Acco_User self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Acco_UserGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Acco_User_FindFirstLedGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.AccessControl.User.ledGroups
  @param  Acco_User self
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
Acco_UserGroup Acco_User_FindFirstLedGroup_keyval4(Acco_User self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Acco_UserGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Acco_User_FindFirstLedGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.AccessControl.User.userGroups
  @param  Acco_User self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Acco_UserGroup Acco_User_FindFirstUserGroup(Acco_User self, ApiMap conditions)
{
  
  Acco_UserGroup obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstUserGroup");
  
  if (!method)
    return raiseApiException("memops.AccessControl.User: cannot find method 'findFirstUserGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.User: method 'findFirstUserGroup' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for memops.AccessControl.User.userGroups
  @param  Acco_User self
  @returns  the first value that satisfies the conditions 
**/
Acco_UserGroup Acco_User_FindFirstUserGroup_keyval0(Acco_User self)
{
  
  Acco_UserGroup  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Acco_User_FindFirstUserGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.AccessControl.User.userGroups
  @param  Acco_User self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Acco_UserGroup Acco_User_FindFirstUserGroup_keyval1(Acco_User self, char * key, ApiObject value)
{
  
  Acco_UserGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Acco_User_FindFirstUserGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.AccessControl.User.userGroups
  @param  Acco_User self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Acco_UserGroup Acco_User_FindFirstUserGroup_keyval2(Acco_User self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Acco_UserGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Acco_User_FindFirstUserGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.AccessControl.User.userGroups
  @param  Acco_User self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Acco_UserGroup Acco_User_FindFirstUserGroup_keyval3(Acco_User self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Acco_UserGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Acco_User_FindFirstUserGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.AccessControl.User.userGroups
  @param  Acco_User self
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
Acco_UserGroup Acco_User_FindFirstUserGroup_keyval4(Acco_User self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Acco_UserGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Acco_User_FindFirstUserGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for memops.AccessControl.User
  @param  Acco_User self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Acco_User_Get(Acco_User self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Acco_User self
  @returns   the result
**/
Acco_AccessObject Acco_User_GetAccess(Acco_User self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("memops.AccessControl.User: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.User: method 'getAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.AccessControl.User.accessControlStore

parent link
  @param  Acco_User self
  @returns   the result
**/
Acco_AccessControlStore Acco_User_GetAccessControlStore(Acco_User self)
{
  
  Acco_AccessControlStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccessControlStore");
  
  if (!method)
    return raiseApiException("memops.AccessControl.User: cannot find method 'getAccessControlStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.User: method 'getAccessControlStore' is not callable");
  
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
  @param  Acco_User self
  @returns   the result
**/
ApiList Acco_User_GetApplicationData(Acco_User self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("memops.AccessControl.User: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.User: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for memops.AccessControl.User
  @param  Acco_User self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Acco_User Acco_User_GetByKey(Acco_User self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Acco_User obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("memops.AccessControl.User: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.User: method 'getByKey' is not callable");
  
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
  @param  Acco_User self
  @returns   the result
**/
ApiString Acco_User_GetClassName(Acco_User self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("memops.AccessControl.User: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.User: method 'getClassName' is not callable");
  
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
  @param  Acco_User self
  @returns   the result
**/
ApiList Acco_User_GetFieldNames(Acco_User self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("memops.AccessControl.User: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.User: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for memops.AccessControl.User
  @param  Acco_User self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Acco_User_GetFullKey(Acco_User self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("memops.AccessControl.User: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.User: method 'getFullKey' is not callable");
  
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
  @param  Acco_User self
  @returns   the result
**/
ApiBoolean Acco_User_GetInConstructor(Acco_User self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("memops.AccessControl.User: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.User: method 'getInConstructor' is not callable");
  
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
  @param  Acco_User self
  @returns   the result
**/
ApiBoolean Acco_User_GetIsDeleted(Acco_User self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("memops.AccessControl.User: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.User: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.AccessControl.User.ledGroups
  @param  Acco_User self
  @returns   the result
**/
ApiSet Acco_User_GetLedGroups(Acco_User self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLedGroups");
  
  if (!method)
    return raiseApiException("memops.AccessControl.User: cannot find method 'getLedGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.User: method 'getLedGroups' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for memops.AccessControl.User
  @param  Acco_User self
  @returns  Local object key
**/
ApiObject Acco_User_GetLocalKey(Acco_User self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("memops.AccessControl.User: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.User: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.AccessControl.User.name
  @param  Acco_User self
  @returns   the result
**/
ApiString Acco_User_GetName(Acco_User self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("memops.AccessControl.User: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.User: method 'getName' is not callable");
  
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
  @param  Acco_User self
  @returns   the result
**/
ApiString Acco_User_GetPackageName(Acco_User self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("memops.AccessControl.User: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.User: method 'getPackageName' is not callable");
  
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
  @param  Acco_User self
  @returns   the result
**/
ApiString Acco_User_GetPackageShortName(Acco_User self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("memops.AccessControl.User: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.User: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.AccessControl.User.parent

link to parent object - 
synonym for accessControlStore
  @param  Acco_User self
  @returns   the result
**/
Acco_AccessControlStore Acco_User_GetParent(Acco_User self)
{
  
  Acco_AccessControlStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("memops.AccessControl.User: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.User: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.AccessControl.User.person

Actual person corresponding to 
user
  @param  Acco_User self
  @returns   the result
**/
Affi_Person Acco_User_GetPerson(Acco_User self)
{
  
  Affi_Person obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPerson");
  
  if (!method)
    return raiseApiException("memops.AccessControl.User: cannot find method 'getPerson'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.User: method 'getPerson' is not callable");
  
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
  @param  Acco_User self
  @returns   the result
**/
ApiString Acco_User_GetQualifiedName(Acco_User self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("memops.AccessControl.User: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.User: method 'getQualifiedName' is not callable");
  
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
  @param  Acco_User self
  @returns   the result
**/
Impl_MemopsRoot Acco_User_GetRoot(Acco_User self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("memops.AccessControl.User: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.User: method 'getRoot' is not callable");
  
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
  @param  Acco_User self
  @returns   the result
**/
Impl_TopObject Acco_User_GetTopObject(Acco_User self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("memops.AccessControl.User: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.User: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.AccessControl.User.userGroups
  @param  Acco_User self
  @returns   the result
**/
ApiSet Acco_User_GetUserGroups(Acco_User self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getUserGroups");
  
  if (!method)
    return raiseApiException("memops.AccessControl.User: cannot find method 'getUserGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.User: method 'getUserGroups' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for memops.AccessControl.User
  @param  Acco_AccessControlStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Acco_User Acco_User_Init(Acco_AccessControlStore parent, ApiMap attrlinks)
{
  
  return Acco_AccessControlStore_NewUser(parent, attrlinks);
}

/**
  Constructor for memops.AccessControl.User
  @param  Acco_AccessControlStore parent
  @param  char * name
  @returns  the new object
**/
Acco_User Acco_User_Init_reqd(Acco_AccessControlStore parent, char * name)
{
  
  Acco_User  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Acco_User_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_User self
  @param  Impl_ApplicationData value
**/
void *Acco_User_RemoveApplicationData(Acco_User self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("memops.AccessControl.User: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.User: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for memops.AccessControl.User.ledGroups
  @param  Acco_User self
  @param  Acco_UserGroup value
**/
void *Acco_User_RemoveLedGroup(Acco_User self, Acco_UserGroup value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeLedGroup");
  
  if (!method)
    return raiseApiException("memops.AccessControl.User: cannot find method 'removeLedGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.User: method 'removeLedGroup' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for memops.AccessControl.User
  @param  Acco_User self
  @param  ApiString name
  @param  ApiObject value
**/
void *Acco_User_Set(Acco_User self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Acco_User self
  @param  Acco_AccessObject value
**/
void *Acco_User_SetAccess(Acco_User self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("memops.AccessControl.User: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.User: method 'setAccess' is not callable");
  
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
  @param  Acco_User self
  @param  ApiList values
**/
void *Acco_User_SetApplicationData(Acco_User self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("memops.AccessControl.User: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.User: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.AccessControl.User.ledGroups
  @param  Acco_User self
  @param  ApiSet values
**/
void *Acco_User_SetLedGroups(Acco_User self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLedGroups");
  
  if (!method)
    return raiseApiException("memops.AccessControl.User: cannot find method 'setLedGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.User: method 'setLedGroups' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.AccessControl.User.name
  @param  Acco_User self
  @param  ApiString value
**/
void *Acco_User_SetName(Acco_User self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("memops.AccessControl.User: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.User: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.AccessControl.User.person

Actual person corresponding to 
user
  @param  Acco_User self
  @param  Affi_Person value
**/
void *Acco_User_SetPerson(Acco_User self, Affi_Person value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPerson");
  
  if (!method)
    return raiseApiException("memops.AccessControl.User: cannot find method 'setPerson'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.User: method 'setPerson' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.AccessControl.User.userGroups
  @param  Acco_User self
  @param  ApiSet values
**/
void *Acco_User_SetUserGroups(Acco_User self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setUserGroups");
  
  if (!method)
    return raiseApiException("memops.AccessControl.User: cannot find method 'setUserGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.User: method 'setUserGroups' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for memops.AccessControl.User.ledGroups
  @param  Acco_User self
  @returns   the result
**/
ApiList Acco_User_SortedLedGroups(Acco_User self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedLedGroups");
  
  if (!method)
    return raiseApiException("memops.AccessControl.User: cannot find method 'sortedLedGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.User: method 'sortedLedGroups' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for memops.AccessControl.User.userGroups
  @param  Acco_User self
  @returns   the result
**/
ApiList Acco_User_SortedUserGroups(Acco_User self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedUserGroups");
  
  if (!method)
    return raiseApiException("memops.AccessControl.User: cannot find method 'sortedUserGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.User: method 'sortedUserGroups' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
