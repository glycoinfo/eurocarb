
#include "ccp.h"

/*
  TopObject for Target package
*/

/* package ccp.api.lims.Target */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_TargetStore self
  @param  Impl_ApplicationData value
**/
void *Targ_TargetStore_AddApplicationData(Targ_TargetStore self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetStore: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetStore: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.lims.Target.TargetStore
  @param  Targ_TargetStore self
  @param  ApiBoolean complete
**/
void *Targ_TargetStore_CheckAllValid(Targ_TargetStore self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetStore: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetStore: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.lims.Target.TargetStore
  @param  Targ_TargetStore self
  @param  ApiBoolean complete
**/
void *Targ_TargetStore_CheckValid(Targ_TargetStore self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetStore: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetStore: method 'checkValid' is not callable");
  
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
  @param  Targ_TargetStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Targ_TargetStore_FindAllActiveRepositories(Targ_TargetStore self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllActiveRepositories");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetStore: cannot find method 'findAllActiveRepositories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetStore: method 'findAllActiveRepositories' is not callable");
  
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
  @param  Targ_TargetStore self
  @returns  all value that satisfy the conditions 
**/
ApiList Targ_TargetStore_FindAllActiveRepositories_keyval0(Targ_TargetStore self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Targ_TargetStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Targ_TargetStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Targ_TargetStore_FindAllActiveRepositories_keyval1(Targ_TargetStore self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Targ_TargetStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Targ_TargetStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Targ_TargetStore_FindAllActiveRepositories_keyval2(Targ_TargetStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Targ_TargetStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Targ_TargetStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Targ_TargetStore_FindAllActiveRepositories_keyval3(Targ_TargetStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Targ_TargetStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Targ_TargetStore self
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
ApiList Targ_TargetStore_FindAllActiveRepositories_keyval4(Targ_TargetStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Targ_TargetStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_TargetStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Targ_TargetStore_FindAllApplicationData(Targ_TargetStore self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetStore: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetStore: method 'findAllApplicationData' is not callable");
  
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
  @param  Targ_TargetStore self
  @returns  all value that satisfy the conditions 
**/
ApiList Targ_TargetStore_FindAllApplicationData_keyval0(Targ_TargetStore self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Targ_TargetStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_TargetStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Targ_TargetStore_FindAllApplicationData_keyval1(Targ_TargetStore self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Targ_TargetStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_TargetStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Targ_TargetStore_FindAllApplicationData_keyval2(Targ_TargetStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Targ_TargetStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_TargetStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Targ_TargetStore_FindAllApplicationData_keyval3(Targ_TargetStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Targ_TargetStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_TargetStore self
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
ApiList Targ_TargetStore_FindAllApplicationData_keyval4(Targ_TargetStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Targ_TargetStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Target.TargetStore.projects

child link to class 
Project
  @param  Targ_TargetStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Targ_TargetStore_FindAllProjects(Targ_TargetStore self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllProjects");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetStore: cannot find method 'findAllProjects'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetStore: method 'findAllProjects' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Target.TargetStore.projects

child link to class 
Project
  @param  Targ_TargetStore self
  @returns  all value that satisfy the conditions 
**/
ApiSet Targ_TargetStore_FindAllProjects_keyval0(Targ_TargetStore self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Targ_TargetStore_FindAllProjects(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Target.TargetStore.projects

child link to class 
Project
  @param  Targ_TargetStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Targ_TargetStore_FindAllProjects_keyval1(Targ_TargetStore self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Targ_TargetStore_FindAllProjects(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Target.TargetStore.projects

child link to class 
Project
  @param  Targ_TargetStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Targ_TargetStore_FindAllProjects_keyval2(Targ_TargetStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Targ_TargetStore_FindAllProjects(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Target.TargetStore.projects

child link to class 
Project
  @param  Targ_TargetStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Targ_TargetStore_FindAllProjects_keyval3(Targ_TargetStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Targ_TargetStore_FindAllProjects(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Target.TargetStore.projects

child link to class 
Project
  @param  Targ_TargetStore self
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
ApiSet Targ_TargetStore_FindAllProjects_keyval4(Targ_TargetStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Targ_TargetStore_FindAllProjects(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Target.TargetStore.targetGroups

child link to 
class TargetGroup
  @param  Targ_TargetStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Targ_TargetStore_FindAllTargetGroups(Targ_TargetStore self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllTargetGroups");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetStore: cannot find method 'findAllTargetGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetStore: method 'findAllTargetGroups' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Target.TargetStore.targetGroups

child link to 
class TargetGroup
  @param  Targ_TargetStore self
  @returns  all value that satisfy the conditions 
**/
ApiSet Targ_TargetStore_FindAllTargetGroups_keyval0(Targ_TargetStore self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Targ_TargetStore_FindAllTargetGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Target.TargetStore.targetGroups

child link to 
class TargetGroup
  @param  Targ_TargetStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Targ_TargetStore_FindAllTargetGroups_keyval1(Targ_TargetStore self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Targ_TargetStore_FindAllTargetGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Target.TargetStore.targetGroups

child link to 
class TargetGroup
  @param  Targ_TargetStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Targ_TargetStore_FindAllTargetGroups_keyval2(Targ_TargetStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Targ_TargetStore_FindAllTargetGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Target.TargetStore.targetGroups

child link to 
class TargetGroup
  @param  Targ_TargetStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Targ_TargetStore_FindAllTargetGroups_keyval3(Targ_TargetStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Targ_TargetStore_FindAllTargetGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Target.TargetStore.targetGroups

child link to 
class TargetGroup
  @param  Targ_TargetStore self
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
ApiSet Targ_TargetStore_FindAllTargetGroups_keyval4(Targ_TargetStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Targ_TargetStore_FindAllTargetGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Target.TargetStore.targets

child link to class 
Target
  @param  Targ_TargetStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Targ_TargetStore_FindAllTargets(Targ_TargetStore self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllTargets");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetStore: cannot find method 'findAllTargets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetStore: method 'findAllTargets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.lims.Target.TargetStore.targets

child link to class 
Target
  @param  Targ_TargetStore self
  @returns  all value that satisfy the conditions 
**/
ApiSet Targ_TargetStore_FindAllTargets_keyval0(Targ_TargetStore self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Targ_TargetStore_FindAllTargets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Target.TargetStore.targets

child link to class 
Target
  @param  Targ_TargetStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Targ_TargetStore_FindAllTargets_keyval1(Targ_TargetStore self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Targ_TargetStore_FindAllTargets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Target.TargetStore.targets

child link to class 
Target
  @param  Targ_TargetStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Targ_TargetStore_FindAllTargets_keyval2(Targ_TargetStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Targ_TargetStore_FindAllTargets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Target.TargetStore.targets

child link to class 
Target
  @param  Targ_TargetStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Targ_TargetStore_FindAllTargets_keyval3(Targ_TargetStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Targ_TargetStore_FindAllTargets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.lims.Target.TargetStore.targets

child link to class 
Target
  @param  Targ_TargetStore self
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
ApiSet Targ_TargetStore_FindAllTargets_keyval4(Targ_TargetStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Targ_TargetStore_FindAllTargets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Targ_TargetStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Targ_TargetStore_FindFirstActiveRepository(Targ_TargetStore self, ApiMap conditions)
{
  
  Impl_Repository obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstActiveRepository");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetStore: cannot find method 'findFirstActiveRepository'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetStore: method 'findFirstActiveRepository' is not callable");
  
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
  @param  Targ_TargetStore self
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Targ_TargetStore_FindFirstActiveRepository_keyval0(Targ_TargetStore self)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Targ_TargetStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Targ_TargetStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Targ_TargetStore_FindFirstActiveRepository_keyval1(Targ_TargetStore self, char * key, ApiObject value)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Targ_TargetStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Targ_TargetStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Targ_TargetStore_FindFirstActiveRepository_keyval2(Targ_TargetStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Targ_TargetStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Targ_TargetStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Targ_TargetStore_FindFirstActiveRepository_keyval3(Targ_TargetStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Targ_TargetStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Targ_TargetStore self
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
Impl_Repository Targ_TargetStore_FindFirstActiveRepository_keyval4(Targ_TargetStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Targ_TargetStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_TargetStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Targ_TargetStore_FindFirstApplicationData(Targ_TargetStore self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetStore: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetStore: method 'findFirstApplicationData' is not callable");
  
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
  @param  Targ_TargetStore self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Targ_TargetStore_FindFirstApplicationData_keyval0(Targ_TargetStore self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Targ_TargetStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_TargetStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Targ_TargetStore_FindFirstApplicationData_keyval1(Targ_TargetStore self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Targ_TargetStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_TargetStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Targ_TargetStore_FindFirstApplicationData_keyval2(Targ_TargetStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Targ_TargetStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_TargetStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Targ_TargetStore_FindFirstApplicationData_keyval3(Targ_TargetStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Targ_TargetStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_TargetStore self
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
Impl_ApplicationData Targ_TargetStore_FindFirstApplicationData_keyval4(Targ_TargetStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Targ_TargetStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Target.TargetStore.projects

child link to class 
Project
  @param  Targ_TargetStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Targ_Project Targ_TargetStore_FindFirstProject(Targ_TargetStore self, ApiMap conditions)
{
  
  Targ_Project obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstProject");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetStore: cannot find method 'findFirstProject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetStore: method 'findFirstProject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Target.TargetStore.projects

child link to class 
Project
  @param  Targ_TargetStore self
  @returns  the first value that satisfies the conditions 
**/
Targ_Project Targ_TargetStore_FindFirstProject_keyval0(Targ_TargetStore self)
{
  
  Targ_Project  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Targ_TargetStore_FindFirstProject(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Target.TargetStore.projects

child link to class 
Project
  @param  Targ_TargetStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Targ_Project Targ_TargetStore_FindFirstProject_keyval1(Targ_TargetStore self, char * key, ApiObject value)
{
  
  Targ_Project  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Targ_TargetStore_FindFirstProject(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Target.TargetStore.projects

child link to class 
Project
  @param  Targ_TargetStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Targ_Project Targ_TargetStore_FindFirstProject_keyval2(Targ_TargetStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Targ_Project  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Targ_TargetStore_FindFirstProject(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Target.TargetStore.projects

child link to class 
Project
  @param  Targ_TargetStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Targ_Project Targ_TargetStore_FindFirstProject_keyval3(Targ_TargetStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Targ_Project  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Targ_TargetStore_FindFirstProject(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Target.TargetStore.projects

child link to class 
Project
  @param  Targ_TargetStore self
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
Targ_Project Targ_TargetStore_FindFirstProject_keyval4(Targ_TargetStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Targ_Project  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Targ_TargetStore_FindFirstProject(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Target.TargetStore.targets

child link to class 
Target
  @param  Targ_TargetStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Targ_Target Targ_TargetStore_FindFirstTarget(Targ_TargetStore self, ApiMap conditions)
{
  
  Targ_Target obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstTarget");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetStore: cannot find method 'findFirstTarget'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetStore: method 'findFirstTarget' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Target.TargetStore.targetGroups

child link to 
class TargetGroup
  @param  Targ_TargetStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Targ_TargetGroup Targ_TargetStore_FindFirstTargetGroup(Targ_TargetStore self, ApiMap conditions)
{
  
  Targ_TargetGroup obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstTargetGroup");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetStore: cannot find method 'findFirstTargetGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetStore: method 'findFirstTargetGroup' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Target.TargetStore.targetGroups

child link to 
class TargetGroup
  @param  Targ_TargetStore self
  @returns  the first value that satisfies the conditions 
**/
Targ_TargetGroup Targ_TargetStore_FindFirstTargetGroup_keyval0(Targ_TargetStore self)
{
  
  Targ_TargetGroup  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Targ_TargetStore_FindFirstTargetGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Target.TargetStore.targetGroups

child link to 
class TargetGroup
  @param  Targ_TargetStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Targ_TargetGroup Targ_TargetStore_FindFirstTargetGroup_keyval1(Targ_TargetStore self, char * key, ApiObject value)
{
  
  Targ_TargetGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Targ_TargetStore_FindFirstTargetGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Target.TargetStore.targetGroups

child link to 
class TargetGroup
  @param  Targ_TargetStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Targ_TargetGroup Targ_TargetStore_FindFirstTargetGroup_keyval2(Targ_TargetStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Targ_TargetGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Targ_TargetStore_FindFirstTargetGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Target.TargetStore.targetGroups

child link to 
class TargetGroup
  @param  Targ_TargetStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Targ_TargetGroup Targ_TargetStore_FindFirstTargetGroup_keyval3(Targ_TargetStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Targ_TargetGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Targ_TargetStore_FindFirstTargetGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Target.TargetStore.targetGroups

child link to 
class TargetGroup
  @param  Targ_TargetStore self
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
Targ_TargetGroup Targ_TargetStore_FindFirstTargetGroup_keyval4(Targ_TargetStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Targ_TargetGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Targ_TargetStore_FindFirstTargetGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Target.TargetStore.targets

child link to class 
Target
  @param  Targ_TargetStore self
  @returns  the first value that satisfies the conditions 
**/
Targ_Target Targ_TargetStore_FindFirstTarget_keyval0(Targ_TargetStore self)
{
  
  Targ_Target  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Targ_TargetStore_FindFirstTarget(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Target.TargetStore.targets

child link to class 
Target
  @param  Targ_TargetStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Targ_Target Targ_TargetStore_FindFirstTarget_keyval1(Targ_TargetStore self, char * key, ApiObject value)
{
  
  Targ_Target  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Targ_TargetStore_FindFirstTarget(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Target.TargetStore.targets

child link to class 
Target
  @param  Targ_TargetStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Targ_Target Targ_TargetStore_FindFirstTarget_keyval2(Targ_TargetStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Targ_Target  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Targ_TargetStore_FindFirstTarget(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Target.TargetStore.targets

child link to class 
Target
  @param  Targ_TargetStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Targ_Target Targ_TargetStore_FindFirstTarget_keyval3(Targ_TargetStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Targ_Target  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Targ_TargetStore_FindFirstTarget(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.lims.Target.TargetStore.targets

child link to class 
Target
  @param  Targ_TargetStore self
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
Targ_Target Targ_TargetStore_FindFirstTarget_keyval4(Targ_TargetStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Targ_Target  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Targ_TargetStore_FindFirstTarget(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.lims.Target.TargetStore
  @param  Targ_TargetStore self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Targ_TargetStore_Get(Targ_TargetStore self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Targ_TargetStore self
  @returns   the result
**/
Acco_AccessObject Targ_TargetStore_GetAccess(Targ_TargetStore self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetStore: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetStore: method 'getAccess' is not callable");
  
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
  @param  Targ_TargetStore self
  @returns   the result
**/
ApiList Targ_TargetStore_GetActiveRepositories(Targ_TargetStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveRepositories");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetStore: cannot find method 'getActiveRepositories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetStore: method 'getActiveRepositories' is not callable");
  
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
  @param  Targ_TargetStore self
  @returns   the result
**/
ApiList Targ_TargetStore_GetApplicationData(Targ_TargetStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetStore: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetStore: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.lims.Target.TargetStore
  @param  Targ_TargetStore self
  @param  Impl_MemopsRoot startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Targ_TargetStore Targ_TargetStore_GetByKey(Targ_TargetStore self, Impl_MemopsRoot startObj, ApiList fullKey)
{
  
  Targ_TargetStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetStore: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetStore: method 'getByKey' is not callable");
  
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
  @param  Targ_TargetStore self
  @returns   the result
**/
ApiString Targ_TargetStore_GetClassName(Targ_TargetStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetStore: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetStore: method 'getClassName' is not callable");
  
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
  @param  Targ_TargetStore self
  @returns   the result
**/
ApiString Targ_TargetStore_GetCreatedBy(Targ_TargetStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCreatedBy");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetStore: cannot find method 'getCreatedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetStore: method 'getCreatedBy' is not callable");
  
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
  @param  Targ_TargetStore self
  @returns   the result
**/
ApiList Targ_TargetStore_GetFieldNames(Targ_TargetStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetStore: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetStore: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.lims.Target.TargetStore
  @param  Targ_TargetStore self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Targ_TargetStore_GetFullKey(Targ_TargetStore self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetStore: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetStore: method 'getFullKey' is not callable");
  
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
  @param  Targ_TargetStore self
  @returns   the result
**/
ApiString Targ_TargetStore_GetGuid(Targ_TargetStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getGuid");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetStore: cannot find method 'getGuid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetStore: method 'getGuid' is not callable");
  
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
  @param  Targ_TargetStore self
  @returns   the result
**/
ApiBoolean Targ_TargetStore_GetInConstructor(Targ_TargetStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetStore: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetStore: method 'getInConstructor' is not callable");
  
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
  @param  Targ_TargetStore self
  @returns   the result
**/
ApiBoolean Targ_TargetStore_GetIsDeleted(Targ_TargetStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetStore: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetStore: method 'getIsDeleted' is not callable");
  
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
  @param  Targ_TargetStore self
  @returns   the result
**/
ApiBoolean Targ_TargetStore_GetIsLoaded(Targ_TargetStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsLoaded");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetStore: cannot find method 'getIsLoaded'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetStore: method 'getIsLoaded' is not callable");
  
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
  @param  Targ_TargetStore self
  @returns   the result
**/
ApiBoolean Targ_TargetStore_GetIsModifiable(Targ_TargetStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsModifiable");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetStore: cannot find method 'getIsModifiable'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetStore: method 'getIsModifiable' is not callable");
  
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
  @param  Targ_TargetStore self
  @returns   the result
**/
ApiBoolean Targ_TargetStore_GetIsModified(Targ_TargetStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsModified");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetStore: cannot find method 'getIsModified'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetStore: method 'getIsModified' is not callable");
  
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
  @param  Targ_TargetStore self
  @returns   the result
**/
ApiBoolean Targ_TargetStore_GetIsReading(Targ_TargetStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsReading");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetStore: cannot find method 'getIsReading'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetStore: method 'getIsReading' is not callable");
  
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
  @param  Targ_TargetStore self
  @returns   the result
**/
ApiString Targ_TargetStore_GetLastUnlockedBy(Targ_TargetStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLastUnlockedBy");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetStore: cannot find method 'getLastUnlockedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetStore: method 'getLastUnlockedBy' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.lims.Target.TargetStore
  @param  Targ_TargetStore self
  @returns  Local object key
**/
ApiObject Targ_TargetStore_GetLocalKey(Targ_TargetStore self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetStore: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetStore: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Target.TargetStore.memopsRoot

parent link
  @param  Targ_TargetStore self
  @returns   the result
**/
Impl_MemopsRoot Targ_TargetStore_GetMemopsRoot(Targ_TargetStore self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMemopsRoot");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetStore: cannot find method 'getMemopsRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetStore: method 'getMemopsRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Target.TargetStore.name

name of TargetStore
  @param  Targ_TargetStore self
  @returns   the result
**/
ApiString Targ_TargetStore_GetName(Targ_TargetStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetStore: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetStore: method 'getName' is not callable");
  
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
  @param  Targ_TargetStore self
  @returns   the result
**/
Impl_PackageLocator Targ_TargetStore_GetPackageLocator(Targ_TargetStore self)
{
  
  Impl_PackageLocator obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageLocator");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetStore: cannot find method 'getPackageLocator'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetStore: method 'getPackageLocator' is not callable");
  
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
  @param  Targ_TargetStore self
  @returns   the result
**/
ApiString Targ_TargetStore_GetPackageName(Targ_TargetStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetStore: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetStore: method 'getPackageName' is not callable");
  
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
  @param  Targ_TargetStore self
  @returns   the result
**/
ApiString Targ_TargetStore_GetPackageShortName(Targ_TargetStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetStore: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetStore: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Target.TargetStore.parent

link to parent object - 
synonym for memopsRoot
  @param  Targ_TargetStore self
  @returns   the result
**/
Impl_MemopsRoot Targ_TargetStore_GetParent(Targ_TargetStore self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetStore: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetStore: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Target.TargetStore.projects

child link to class 
Project
  @param  Targ_TargetStore self
  @returns   the result
**/
ApiSet Targ_TargetStore_GetProjects(Targ_TargetStore self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getProjects");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetStore: cannot find method 'getProjects'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetStore: method 'getProjects' is not callable");
  
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
  @param  Targ_TargetStore self
  @returns   the result
**/
ApiString Targ_TargetStore_GetQualifiedName(Targ_TargetStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetStore: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetStore: method 'getQualifiedName' is not callable");
  
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
  @param  Targ_TargetStore self
  @returns   the result
**/
Impl_MemopsRoot Targ_TargetStore_GetRoot(Targ_TargetStore self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetStore: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetStore: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Target.TargetStore.targetGroups

child link to class 
TargetGroup
  @param  Targ_TargetStore self
  @returns   the result
**/
ApiSet Targ_TargetStore_GetTargetGroups(Targ_TargetStore self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTargetGroups");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetStore: cannot find method 'getTargetGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetStore: method 'getTargetGroups' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.lims.Target.TargetStore.targets

child link to class Target
  @param  Targ_TargetStore self
  @returns   the result
**/
ApiSet Targ_TargetStore_GetTargets(Targ_TargetStore self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTargets");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetStore: cannot find method 'getTargets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetStore: method 'getTargets' is not callable");
  
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
  @param  Targ_TargetStore self
  @returns   the result
**/
Impl_TopObject Targ_TargetStore_GetTopObject(Targ_TargetStore self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetStore: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetStore: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.lims.Target.TargetStore
  @param  Impl_MemopsRoot parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Targ_TargetStore Targ_TargetStore_Init(Impl_MemopsRoot parent, ApiMap attrlinks)
{
  
  return Impl_MemopsRoot_NewTargetStore(parent, attrlinks);
}

/**
  Constructor for ccp.lims.Target.TargetStore
  @param  Impl_MemopsRoot parent
  @param  char * name
  @returns  the new object
**/
Targ_TargetStore Targ_TargetStore_Init_reqd(Impl_MemopsRoot parent, char * name)
{
  
  Targ_TargetStore  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Targ_TargetStore_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Target.Project
  @param  Targ_TargetStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Targ_Project Targ_TargetStore_NewProject(Targ_TargetStore self, ApiMap attrlinks)
{
  
  Targ_Project obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newProject");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetStore: cannot find method 'newProject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetStore: method 'newProject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Target.Project
  @param  Targ_TargetStore self
  @param  char * completeName
  @param  char * shortName
  @returns  the new object
**/
Targ_Project Targ_TargetStore_NewProject_reqd(Targ_TargetStore self, char * completeName, char * shortName)
{
  
  Targ_Project  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__completeName = ApiString_New(completeName);
  ApiString api__shortName = ApiString_New(shortName);

  PyDict_SetItemString(attrlinks, "completeName", api__completeName);
  PyDict_SetItemString(attrlinks, "shortName", api__shortName);
  
  obj = Targ_TargetStore_NewProject(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__completeName);
  Py_DECREF(api__shortName);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Target.Target
  @param  Targ_TargetStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Targ_Target Targ_TargetStore_NewTarget(Targ_TargetStore self, ApiMap attrlinks)
{
  
  Targ_Target obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newTarget");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetStore: cannot find method 'newTarget'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetStore: method 'newTarget' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Target.TargetGroup
  @param  Targ_TargetStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Targ_TargetGroup Targ_TargetStore_NewTargetGroup(Targ_TargetStore self, ApiMap attrlinks)
{
  
  Targ_TargetGroup obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newTargetGroup");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetStore: cannot find method 'newTargetGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetStore: method 'newTargetGroup' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Target.TargetGroup
  @param  Targ_TargetStore self
  @param  char * namingSystem
  @param  char * shortName
  @returns  the new object
**/
Targ_TargetGroup Targ_TargetStore_NewTargetGroup_reqd(Targ_TargetStore self, char * namingSystem, char * shortName)
{
  
  Targ_TargetGroup  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__namingSystem = ApiString_New(namingSystem);
  ApiString api__shortName = ApiString_New(shortName);

  PyDict_SetItemString(attrlinks, "namingSystem", api__namingSystem);
  PyDict_SetItemString(attrlinks, "shortName", api__shortName);
  
  obj = Targ_TargetStore_NewTargetGroup(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__namingSystem);
  Py_DECREF(api__shortName);
  
  return obj;
}

/**
  Factory function to create ccp.lims.Target.Target
  @param  Targ_TargetStore self
  @param  char * commonName
  @param  Refs_MolComponent protein
  @param  char * whyChosen
  @returns  the new object
**/
Targ_Target Targ_TargetStore_NewTarget_reqd(Targ_TargetStore self, char * commonName, Refs_MolComponent protein, char * whyChosen)
{
  
  Targ_Target  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__commonName = ApiString_New(commonName);
  ApiString api__whyChosen = ApiString_New(whyChosen);

  PyDict_SetItemString(attrlinks, "commonName", api__commonName);
  PyDict_SetItemString(attrlinks, "protein", protein);
  PyDict_SetItemString(attrlinks, "whyChosen", api__whyChosen);
  
  obj = Targ_TargetStore_NewTarget(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__commonName);
  Py_DECREF(api__whyChosen);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_TargetStore self
  @param  Impl_ApplicationData value
**/
void *Targ_TargetStore_RemoveApplicationData(Targ_TargetStore self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetStore: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetStore: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.lims.Target.TargetStore
  @param  Targ_TargetStore self
  @param  ApiString name
  @param  ApiObject value
**/
void *Targ_TargetStore_Set(Targ_TargetStore self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Targ_TargetStore self
  @param  Acco_AccessObject value
**/
void *Targ_TargetStore_SetAccess(Targ_TargetStore self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetStore: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetStore: method 'setAccess' is not callable");
  
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
  @param  Targ_TargetStore self
  @param  ApiList values
**/
void *Targ_TargetStore_SetApplicationData(Targ_TargetStore self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetStore: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetStore: method 'setApplicationData' is not callable");
  
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
  @param  Targ_TargetStore self
  @param  ApiString value
**/
void *Targ_TargetStore_SetCreatedBy(Targ_TargetStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCreatedBy");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetStore: cannot find method 'setCreatedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetStore: method 'setCreatedBy' is not callable");
  
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
  @param  Targ_TargetStore self
  @param  ApiString value
**/
void *Targ_TargetStore_SetGuid(Targ_TargetStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setGuid");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetStore: cannot find method 'setGuid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetStore: method 'setGuid' is not callable");
  
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
  @param  Targ_TargetStore self
  @param  ApiBoolean value
**/
void *Targ_TargetStore_SetIsModifiable(Targ_TargetStore self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsModifiable");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetStore: cannot find method 'setIsModifiable'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetStore: method 'setIsModifiable' is not callable");
  
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
  @param  Targ_TargetStore self
  @param  ApiString value
**/
void *Targ_TargetStore_SetLastUnlockedBy(Targ_TargetStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLastUnlockedBy");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetStore: cannot find method 'setLastUnlockedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetStore: method 'setLastUnlockedBy' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.lims.Target.TargetStore.name

name of TargetStore
  @param  Targ_TargetStore self
  @param  ApiString value
**/
void *Targ_TargetStore_SetName(Targ_TargetStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetStore: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetStore: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Target.TargetStore.projects

child link to class 
Project
  @param  Targ_TargetStore self
  @returns   the result
**/
ApiList Targ_TargetStore_SortedProjects(Targ_TargetStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedProjects");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetStore: cannot find method 'sortedProjects'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetStore: method 'sortedProjects' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Target.TargetStore.targetGroups

child link to class 
TargetGroup
  @param  Targ_TargetStore self
  @returns   the result
**/
ApiList Targ_TargetStore_SortedTargetGroups(Targ_TargetStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedTargetGroups");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetStore: cannot find method 'sortedTargetGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetStore: method 'sortedTargetGroups' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.lims.Target.TargetStore.targets

child link to class 
Target
  @param  Targ_TargetStore self
  @returns   the result
**/
ApiList Targ_TargetStore_SortedTargets(Targ_TargetStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedTargets");
  
  if (!method)
    return raiseApiException("ccp.lims.Target.TargetStore: cannot find method 'sortedTargets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.lims.Target.TargetStore: method 'sortedTargets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
