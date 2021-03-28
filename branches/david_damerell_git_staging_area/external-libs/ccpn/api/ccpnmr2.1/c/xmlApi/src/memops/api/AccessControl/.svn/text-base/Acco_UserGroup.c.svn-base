
#include "ccp.h"

/*
  
*/

/* package memops.api.AccessControl */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_UserGroup self
  @param  Impl_ApplicationData value
**/
void *Acco_UserGroup_AddApplicationData(Acco_UserGroup self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("memops.AccessControl.UserGroup: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.UserGroup: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for memops.AccessControl.UserGroup.leaders
  @param  Acco_UserGroup self
  @param  Acco_User value
**/
void *Acco_UserGroup_AddLeader(Acco_UserGroup self, Acco_User value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addLeader");
  
  if (!method)
    return raiseApiException("memops.AccessControl.UserGroup: cannot find method 'addLeader'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.UserGroup: method 'addLeader' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for memops.AccessControl.UserGroup
  @param  Acco_UserGroup self
  @param  ApiBoolean complete
**/
void *Acco_UserGroup_CheckAllValid(Acco_UserGroup self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("memops.AccessControl.UserGroup: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.UserGroup: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for memops.AccessControl.UserGroup
  @param  Acco_UserGroup self
  @param  ApiBoolean complete
**/
void *Acco_UserGroup_CheckValid(Acco_UserGroup self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("memops.AccessControl.UserGroup: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.UserGroup: method 'checkValid' is not callable");
  
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
  @param  Acco_UserGroup self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Acco_UserGroup_FindAllApplicationData(Acco_UserGroup self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("memops.AccessControl.UserGroup: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.UserGroup: method 'findAllApplicationData' is not callable");
  
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
  @param  Acco_UserGroup self
  @returns  all value that satisfy the conditions 
**/
ApiList Acco_UserGroup_FindAllApplicationData_keyval0(Acco_UserGroup self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Acco_UserGroup_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_UserGroup self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Acco_UserGroup_FindAllApplicationData_keyval1(Acco_UserGroup self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Acco_UserGroup_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_UserGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Acco_UserGroup_FindAllApplicationData_keyval2(Acco_UserGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Acco_UserGroup_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_UserGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Acco_UserGroup_FindAllApplicationData_keyval3(Acco_UserGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Acco_UserGroup_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_UserGroup self
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
ApiList Acco_UserGroup_FindAllApplicationData_keyval4(Acco_UserGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Acco_UserGroup_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.AccessControl.UserGroup.leaders
  @param  Acco_UserGroup self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Acco_UserGroup_FindAllLeaders(Acco_UserGroup self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllLeaders");
  
  if (!method)
    return raiseApiException("memops.AccessControl.UserGroup: cannot find method 'findAllLeaders'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.UserGroup: method 'findAllLeaders' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for memops.AccessControl.UserGroup.leaders
  @param  Acco_UserGroup self
  @returns  all value that satisfy the conditions 
**/
ApiSet Acco_UserGroup_FindAllLeaders_keyval0(Acco_UserGroup self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Acco_UserGroup_FindAllLeaders(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.AccessControl.UserGroup.leaders
  @param  Acco_UserGroup self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Acco_UserGroup_FindAllLeaders_keyval1(Acco_UserGroup self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Acco_UserGroup_FindAllLeaders(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.AccessControl.UserGroup.leaders
  @param  Acco_UserGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Acco_UserGroup_FindAllLeaders_keyval2(Acco_UserGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Acco_UserGroup_FindAllLeaders(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.AccessControl.UserGroup.leaders
  @param  Acco_UserGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Acco_UserGroup_FindAllLeaders_keyval3(Acco_UserGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Acco_UserGroup_FindAllLeaders(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.AccessControl.UserGroup.leaders
  @param  Acco_UserGroup self
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
ApiSet Acco_UserGroup_FindAllLeaders_keyval4(Acco_UserGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Acco_UserGroup_FindAllLeaders(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.AccessControl.UserGroup.members
  @param  Acco_UserGroup self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Acco_UserGroup_FindAllMembers(Acco_UserGroup self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllMembers");
  
  if (!method)
    return raiseApiException("memops.AccessControl.UserGroup: cannot find method 'findAllMembers'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.UserGroup: method 'findAllMembers' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for memops.AccessControl.UserGroup.members
  @param  Acco_UserGroup self
  @returns  all value that satisfy the conditions 
**/
ApiSet Acco_UserGroup_FindAllMembers_keyval0(Acco_UserGroup self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Acco_UserGroup_FindAllMembers(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.AccessControl.UserGroup.members
  @param  Acco_UserGroup self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Acco_UserGroup_FindAllMembers_keyval1(Acco_UserGroup self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Acco_UserGroup_FindAllMembers(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.AccessControl.UserGroup.members
  @param  Acco_UserGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Acco_UserGroup_FindAllMembers_keyval2(Acco_UserGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Acco_UserGroup_FindAllMembers(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.AccessControl.UserGroup.members
  @param  Acco_UserGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Acco_UserGroup_FindAllMembers_keyval3(Acco_UserGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Acco_UserGroup_FindAllMembers(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.AccessControl.UserGroup.members
  @param  Acco_UserGroup self
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
ApiSet Acco_UserGroup_FindAllMembers_keyval4(Acco_UserGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Acco_UserGroup_FindAllMembers(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.AccessControl.UserGroup.permissions
  @param  Acco_UserGroup self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Acco_UserGroup_FindAllPermissions(Acco_UserGroup self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllPermissions");
  
  if (!method)
    return raiseApiException("memops.AccessControl.UserGroup: cannot find method 'findAllPermissions'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.UserGroup: method 'findAllPermissions' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for memops.AccessControl.UserGroup.permissions
  @param  Acco_UserGroup self
  @returns  all value that satisfy the conditions 
**/
ApiSet Acco_UserGroup_FindAllPermissions_keyval0(Acco_UserGroup self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Acco_UserGroup_FindAllPermissions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.AccessControl.UserGroup.permissions
  @param  Acco_UserGroup self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Acco_UserGroup_FindAllPermissions_keyval1(Acco_UserGroup self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Acco_UserGroup_FindAllPermissions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.AccessControl.UserGroup.permissions
  @param  Acco_UserGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Acco_UserGroup_FindAllPermissions_keyval2(Acco_UserGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Acco_UserGroup_FindAllPermissions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.AccessControl.UserGroup.permissions
  @param  Acco_UserGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Acco_UserGroup_FindAllPermissions_keyval3(Acco_UserGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Acco_UserGroup_FindAllPermissions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.AccessControl.UserGroup.permissions
  @param  Acco_UserGroup self
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
ApiSet Acco_UserGroup_FindAllPermissions_keyval4(Acco_UserGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Acco_UserGroup_FindAllPermissions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_UserGroup self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Acco_UserGroup_FindFirstApplicationData(Acco_UserGroup self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("memops.AccessControl.UserGroup: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.UserGroup: method 'findFirstApplicationData' is not callable");
  
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
  @param  Acco_UserGroup self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Acco_UserGroup_FindFirstApplicationData_keyval0(Acco_UserGroup self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Acco_UserGroup_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_UserGroup self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Acco_UserGroup_FindFirstApplicationData_keyval1(Acco_UserGroup self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Acco_UserGroup_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_UserGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Acco_UserGroup_FindFirstApplicationData_keyval2(Acco_UserGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Acco_UserGroup_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_UserGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Acco_UserGroup_FindFirstApplicationData_keyval3(Acco_UserGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Acco_UserGroup_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_UserGroup self
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
Impl_ApplicationData Acco_UserGroup_FindFirstApplicationData_keyval4(Acco_UserGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Acco_UserGroup_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.AccessControl.UserGroup.leaders
  @param  Acco_UserGroup self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Acco_User Acco_UserGroup_FindFirstLeader(Acco_UserGroup self, ApiMap conditions)
{
  
  Acco_User obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstLeader");
  
  if (!method)
    return raiseApiException("memops.AccessControl.UserGroup: cannot find method 'findFirstLeader'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.UserGroup: method 'findFirstLeader' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for memops.AccessControl.UserGroup.leaders
  @param  Acco_UserGroup self
  @returns  the first value that satisfies the conditions 
**/
Acco_User Acco_UserGroup_FindFirstLeader_keyval0(Acco_UserGroup self)
{
  
  Acco_User  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Acco_UserGroup_FindFirstLeader(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.AccessControl.UserGroup.leaders
  @param  Acco_UserGroup self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Acco_User Acco_UserGroup_FindFirstLeader_keyval1(Acco_UserGroup self, char * key, ApiObject value)
{
  
  Acco_User  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Acco_UserGroup_FindFirstLeader(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.AccessControl.UserGroup.leaders
  @param  Acco_UserGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Acco_User Acco_UserGroup_FindFirstLeader_keyval2(Acco_UserGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Acco_User  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Acco_UserGroup_FindFirstLeader(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.AccessControl.UserGroup.leaders
  @param  Acco_UserGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Acco_User Acco_UserGroup_FindFirstLeader_keyval3(Acco_UserGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Acco_User  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Acco_UserGroup_FindFirstLeader(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.AccessControl.UserGroup.leaders
  @param  Acco_UserGroup self
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
Acco_User Acco_UserGroup_FindFirstLeader_keyval4(Acco_UserGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Acco_User  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Acco_UserGroup_FindFirstLeader(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.AccessControl.UserGroup.members
  @param  Acco_UserGroup self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Acco_User Acco_UserGroup_FindFirstMember(Acco_UserGroup self, ApiMap conditions)
{
  
  Acco_User obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstMember");
  
  if (!method)
    return raiseApiException("memops.AccessControl.UserGroup: cannot find method 'findFirstMember'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.UserGroup: method 'findFirstMember' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for memops.AccessControl.UserGroup.members
  @param  Acco_UserGroup self
  @returns  the first value that satisfies the conditions 
**/
Acco_User Acco_UserGroup_FindFirstMember_keyval0(Acco_UserGroup self)
{
  
  Acco_User  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Acco_UserGroup_FindFirstMember(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.AccessControl.UserGroup.members
  @param  Acco_UserGroup self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Acco_User Acco_UserGroup_FindFirstMember_keyval1(Acco_UserGroup self, char * key, ApiObject value)
{
  
  Acco_User  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Acco_UserGroup_FindFirstMember(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.AccessControl.UserGroup.members
  @param  Acco_UserGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Acco_User Acco_UserGroup_FindFirstMember_keyval2(Acco_UserGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Acco_User  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Acco_UserGroup_FindFirstMember(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.AccessControl.UserGroup.members
  @param  Acco_UserGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Acco_User Acco_UserGroup_FindFirstMember_keyval3(Acco_UserGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Acco_User  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Acco_UserGroup_FindFirstMember(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.AccessControl.UserGroup.members
  @param  Acco_UserGroup self
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
Acco_User Acco_UserGroup_FindFirstMember_keyval4(Acco_UserGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Acco_User  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Acco_UserGroup_FindFirstMember(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.AccessControl.UserGroup.permissions
  @param  Acco_UserGroup self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Acco_Permission Acco_UserGroup_FindFirstPermission(Acco_UserGroup self, ApiMap conditions)
{
  
  Acco_Permission obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstPermission");
  
  if (!method)
    return raiseApiException("memops.AccessControl.UserGroup: cannot find method 'findFirstPermission'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.UserGroup: method 'findFirstPermission' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for memops.AccessControl.UserGroup.permissions
  @param  Acco_UserGroup self
  @returns  the first value that satisfies the conditions 
**/
Acco_Permission Acco_UserGroup_FindFirstPermission_keyval0(Acco_UserGroup self)
{
  
  Acco_Permission  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Acco_UserGroup_FindFirstPermission(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.AccessControl.UserGroup.permissions
  @param  Acco_UserGroup self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Acco_Permission Acco_UserGroup_FindFirstPermission_keyval1(Acco_UserGroup self, char * key, ApiObject value)
{
  
  Acco_Permission  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Acco_UserGroup_FindFirstPermission(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.AccessControl.UserGroup.permissions
  @param  Acco_UserGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Acco_Permission Acco_UserGroup_FindFirstPermission_keyval2(Acco_UserGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Acco_Permission  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Acco_UserGroup_FindFirstPermission(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.AccessControl.UserGroup.permissions
  @param  Acco_UserGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Acco_Permission Acco_UserGroup_FindFirstPermission_keyval3(Acco_UserGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Acco_Permission  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Acco_UserGroup_FindFirstPermission(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.AccessControl.UserGroup.permissions
  @param  Acco_UserGroup self
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
Acco_Permission Acco_UserGroup_FindFirstPermission_keyval4(Acco_UserGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Acco_Permission  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Acco_UserGroup_FindFirstPermission(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for memops.AccessControl.UserGroup
  @param  Acco_UserGroup self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Acco_UserGroup_Get(Acco_UserGroup self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Acco_UserGroup self
  @returns   the result
**/
Acco_AccessObject Acco_UserGroup_GetAccess(Acco_UserGroup self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("memops.AccessControl.UserGroup: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.UserGroup: method 'getAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.AccessControl.UserGroup.accessControlStore

parent link
  @param  Acco_UserGroup self
  @returns   the result
**/
Acco_AccessControlStore Acco_UserGroup_GetAccessControlStore(Acco_UserGroup self)
{
  
  Acco_AccessControlStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccessControlStore");
  
  if (!method)
    return raiseApiException("memops.AccessControl.UserGroup: cannot find method 'getAccessControlStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.UserGroup: method 'getAccessControlStore' is not callable");
  
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
  @param  Acco_UserGroup self
  @returns   the result
**/
Acco_AccessObject Acco_UserGroup_GetActiveAccess(Acco_UserGroup self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("memops.AccessControl.UserGroup: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.UserGroup: method 'getActiveAccess' is not callable");
  
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
  @param  Acco_UserGroup self
  @returns   the result
**/
ApiList Acco_UserGroup_GetApplicationData(Acco_UserGroup self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("memops.AccessControl.UserGroup: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.UserGroup: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for memops.AccessControl.UserGroup
  @param  Acco_UserGroup self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Acco_UserGroup Acco_UserGroup_GetByKey(Acco_UserGroup self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Acco_UserGroup obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("memops.AccessControl.UserGroup: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.UserGroup: method 'getByKey' is not callable");
  
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
  @param  Acco_UserGroup self
  @returns   the result
**/
ApiString Acco_UserGroup_GetClassName(Acco_UserGroup self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("memops.AccessControl.UserGroup: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.UserGroup: method 'getClassName' is not callable");
  
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
  @param  Acco_UserGroup self
  @returns   the result
**/
ApiList Acco_UserGroup_GetFieldNames(Acco_UserGroup self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("memops.AccessControl.UserGroup: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.UserGroup: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for memops.AccessControl.UserGroup
  @param  Acco_UserGroup self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Acco_UserGroup_GetFullKey(Acco_UserGroup self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("memops.AccessControl.UserGroup: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.UserGroup: method 'getFullKey' is not callable");
  
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
  @param  Acco_UserGroup self
  @returns   the result
**/
ApiBoolean Acco_UserGroup_GetInConstructor(Acco_UserGroup self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("memops.AccessControl.UserGroup: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.UserGroup: method 'getInConstructor' is not callable");
  
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
  @param  Acco_UserGroup self
  @returns   the result
**/
ApiBoolean Acco_UserGroup_GetIsDeleted(Acco_UserGroup self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("memops.AccessControl.UserGroup: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.UserGroup: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.AccessControl.UserGroup.leaders
  @param  Acco_UserGroup self
  @returns   the result
**/
ApiSet Acco_UserGroup_GetLeaders(Acco_UserGroup self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLeaders");
  
  if (!method)
    return raiseApiException("memops.AccessControl.UserGroup: cannot find method 'getLeaders'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.UserGroup: method 'getLeaders' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for memops.AccessControl.UserGroup
  @param  Acco_UserGroup self
  @returns  Local object key
**/
ApiObject Acco_UserGroup_GetLocalKey(Acco_UserGroup self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("memops.AccessControl.UserGroup: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.UserGroup: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.AccessControl.UserGroup.members
  @param  Acco_UserGroup self
  @returns   the result
**/
ApiSet Acco_UserGroup_GetMembers(Acco_UserGroup self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMembers");
  
  if (!method)
    return raiseApiException("memops.AccessControl.UserGroup: cannot find method 'getMembers'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.UserGroup: method 'getMembers' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.AccessControl.UserGroup.name
  @param  Acco_UserGroup self
  @returns   the result
**/
ApiString Acco_UserGroup_GetName(Acco_UserGroup self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("memops.AccessControl.UserGroup: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.UserGroup: method 'getName' is not callable");
  
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
  @param  Acco_UserGroup self
  @returns   the result
**/
ApiString Acco_UserGroup_GetPackageName(Acco_UserGroup self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("memops.AccessControl.UserGroup: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.UserGroup: method 'getPackageName' is not callable");
  
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
  @param  Acco_UserGroup self
  @returns   the result
**/
ApiString Acco_UserGroup_GetPackageShortName(Acco_UserGroup self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("memops.AccessControl.UserGroup: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.UserGroup: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.AccessControl.UserGroup.parent

link to parent object - 
synonym for accessControlStore
  @param  Acco_UserGroup self
  @returns   the result
**/
Acco_AccessControlStore Acco_UserGroup_GetParent(Acco_UserGroup self)
{
  
  Acco_AccessControlStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("memops.AccessControl.UserGroup: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.UserGroup: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.AccessControl.UserGroup.permissions
  @param  Acco_UserGroup self
  @returns   the result
**/
ApiSet Acco_UserGroup_GetPermissions(Acco_UserGroup self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPermissions");
  
  if (!method)
    return raiseApiException("memops.AccessControl.UserGroup: cannot find method 'getPermissions'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.UserGroup: method 'getPermissions' is not callable");
  
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
  @param  Acco_UserGroup self
  @returns   the result
**/
ApiString Acco_UserGroup_GetQualifiedName(Acco_UserGroup self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("memops.AccessControl.UserGroup: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.UserGroup: method 'getQualifiedName' is not callable");
  
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
  @param  Acco_UserGroup self
  @returns   the result
**/
Impl_MemopsRoot Acco_UserGroup_GetRoot(Acco_UserGroup self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("memops.AccessControl.UserGroup: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.UserGroup: method 'getRoot' is not callable");
  
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
  @param  Acco_UserGroup self
  @returns   the result
**/
Impl_TopObject Acco_UserGroup_GetTopObject(Acco_UserGroup self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("memops.AccessControl.UserGroup: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.UserGroup: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for memops.AccessControl.UserGroup
  @param  Acco_AccessControlStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Acco_UserGroup Acco_UserGroup_Init(Acco_AccessControlStore parent, ApiMap attrlinks)
{
  
  return Acco_AccessControlStore_NewUserGroup(parent, attrlinks);
}

/**
  Constructor for memops.AccessControl.UserGroup
  @param  Acco_AccessControlStore parent
  @param  char * name
  @returns  the new object
**/
Acco_UserGroup Acco_UserGroup_Init_reqd(Acco_AccessControlStore parent, char * name)
{
  
  Acco_UserGroup  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Acco_UserGroup_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_UserGroup self
  @param  Impl_ApplicationData value
**/
void *Acco_UserGroup_RemoveApplicationData(Acco_UserGroup self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("memops.AccessControl.UserGroup: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.UserGroup: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for memops.AccessControl.UserGroup.leaders
  @param  Acco_UserGroup self
  @param  Acco_User value
**/
void *Acco_UserGroup_RemoveLeader(Acco_UserGroup self, Acco_User value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeLeader");
  
  if (!method)
    return raiseApiException("memops.AccessControl.UserGroup: cannot find method 'removeLeader'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.UserGroup: method 'removeLeader' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for memops.AccessControl.UserGroup
  @param  Acco_UserGroup self
  @param  ApiString name
  @param  ApiObject value
**/
void *Acco_UserGroup_Set(Acco_UserGroup self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Acco_UserGroup self
  @param  Acco_AccessObject value
**/
void *Acco_UserGroup_SetAccess(Acco_UserGroup self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("memops.AccessControl.UserGroup: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.UserGroup: method 'setAccess' is not callable");
  
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
  @param  Acco_UserGroup self
  @param  ApiList values
**/
void *Acco_UserGroup_SetApplicationData(Acco_UserGroup self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("memops.AccessControl.UserGroup: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.UserGroup: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.AccessControl.UserGroup.leaders
  @param  Acco_UserGroup self
  @param  ApiSet values
**/
void *Acco_UserGroup_SetLeaders(Acco_UserGroup self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLeaders");
  
  if (!method)
    return raiseApiException("memops.AccessControl.UserGroup: cannot find method 'setLeaders'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.UserGroup: method 'setLeaders' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.AccessControl.UserGroup.members
  @param  Acco_UserGroup self
  @param  ApiSet values
**/
void *Acco_UserGroup_SetMembers(Acco_UserGroup self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMembers");
  
  if (!method)
    return raiseApiException("memops.AccessControl.UserGroup: cannot find method 'setMembers'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.UserGroup: method 'setMembers' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.AccessControl.UserGroup.name
  @param  Acco_UserGroup self
  @param  ApiString value
**/
void *Acco_UserGroup_SetName(Acco_UserGroup self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("memops.AccessControl.UserGroup: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.UserGroup: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.AccessControl.UserGroup.permissions
  @param  Acco_UserGroup self
  @param  ApiSet values
**/
void *Acco_UserGroup_SetPermissions(Acco_UserGroup self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPermissions");
  
  if (!method)
    return raiseApiException("memops.AccessControl.UserGroup: cannot find method 'setPermissions'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.UserGroup: method 'setPermissions' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for memops.AccessControl.UserGroup.leaders
  @param  Acco_UserGroup self
  @returns   the result
**/
ApiList Acco_UserGroup_SortedLeaders(Acco_UserGroup self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedLeaders");
  
  if (!method)
    return raiseApiException("memops.AccessControl.UserGroup: cannot find method 'sortedLeaders'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.UserGroup: method 'sortedLeaders' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for memops.AccessControl.UserGroup.members
  @param  Acco_UserGroup self
  @returns   the result
**/
ApiList Acco_UserGroup_SortedMembers(Acco_UserGroup self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedMembers");
  
  if (!method)
    return raiseApiException("memops.AccessControl.UserGroup: cannot find method 'sortedMembers'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.UserGroup: method 'sortedMembers' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for memops.AccessControl.UserGroup.permissions
  @param  Acco_UserGroup self
  @returns   the result
**/
ApiList Acco_UserGroup_SortedPermissions(Acco_UserGroup self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedPermissions");
  
  if (!method)
    return raiseApiException("memops.AccessControl.UserGroup: cannot find method 'sortedPermissions'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.AccessControl.UserGroup: method 'sortedPermissions' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
